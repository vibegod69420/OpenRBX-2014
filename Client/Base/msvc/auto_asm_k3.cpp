// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10f20[];
extern "C" char g_00e10f24[];
extern "C" char g_00e120c0[];
extern "C" char g_00e120c4[];
// FUNCTION: ROBLOXSTUDIO 0x004575e0
extern "C" __declspec(naked) void asm_004575e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76af9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [ebp + 0x1c], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0045765c }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { call dword ptr [g_00e10f24] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [g_00e120c4] }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f20] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_0045765c: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [g_00e120c0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e120bc[];
extern "C" char g_00e12794[];
extern "C" char g_00e12b50[];
extern "C" void fn_00458550();
// FUNCTION: ROBLOXSTUDIO 0x00457800
extern "C" __declspec(naked) void asm_00457800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76d4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x1c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, 2 }
	__asm { setle al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { jne L_00457931 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e120bc] }
	__asm { mov edi, dword ptr [eax] }
	__asm { inc edi }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x1c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [eax + 0x34] }
	__asm { dec eax }
	__asm { cmp edi, eax }
	__asm { jge L_004578b9 }
	__asm { test edi, edi }
	__asm { jg L_004578be }
	__asm { L_004578b9: }
	__asm { mov edi, 1 }
	__asm { L_004578be: }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x1c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea edx, [ebp - 0x20] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp - 0x30] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12b50] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e120bc] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { call fn_00458550 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_00457931: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e4c[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12378[];
extern "C" char g_00e12b50[];
extern "C" void fn_00458320();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00457950
extern "C" __declspec(naked) void asm_00457950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76f72 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { call fn_00458320 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xf0] }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x1c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12b50] }
	__asm { push 0 }
	__asm { push 0x12c547c }
	__asm { push 0x12bc018 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, eax }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { je L_00457a0e }
	__asm { push 0x100d3ac }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12378] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00457a0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e4c[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e120ec[];
extern "C" char g_00e12378[];
extern "C" char g_00e12b50[];
extern "C" void fn_00458320();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00457a20
extern "C" __declspec(naked) void asm_00457a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76f72 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { call dword ptr [g_00e120ec] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { call fn_00458320 }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x1c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12b50] }
	__asm { push 0 }
	__asm { push 0x12c547c }
	__asm { push 0x12bc018 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, eax }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { je L_00457afe }
	__asm { push 0x100d3ac }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12378] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00457afe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e38[];
// FUNCTION: ROBLOXSTUDIO 0x00457ff0
extern "C" __declspec(naked) void asm_00457ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd77124 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], 0xffffffff }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { dec edx }
	__asm { mov dword ptr [edi + 0x10], edx }
	__asm { mov byte ptr [edi + 0xc], 1 }
	__asm { mov dword ptr [esp + 0xc], 0xffffffff }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea ecx, [esp + 8] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push edx }
	__asm { lea ecx, [esp + 0x34] }
	__asm { mov dword ptr [esp + 0x60], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x18], 0xffffffff }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0x5c], 2 }
	__asm { mov edx, dword ptr [edi] }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x44] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x5c], 3 }
	__asm { call dword ptr [g_00e10e38] }
	__asm { mov ecx, dword ptr [esp + 0x4c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e30[];
extern "C" char g_00e10e34[];
extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_00e11110[];
extern "C" void fn_004587f0();
extern "C" void fn_00458920();
// FUNCTION: ROBLOXSTUDIO 0x004583f0
extern "C" __declspec(naked) void asm_004583f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76a12 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test esi, esi }
	__asm { js L_0045847d }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jge L_0045847d }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_0045847d }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00458920 }
	__asm { mov ecx, eax }
	__asm { call fn_004587f0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { jmp L_00458488 }
	__asm { L_0045847d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10e30] }
	__asm { L_00458488: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_00e11008[];
// FUNCTION: ROBLOXSTUDIO 0x004584a0
extern "C" __declspec(naked) void asm_004584a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd769e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edi, edi }
	__asm { js L_004584e7 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp edi, ecx }
	__asm { jl L_00458504 }
	__asm { L_004584e7: }
	__asm { push 0x1c3 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_00458504: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x14] }
	__asm { mov ecx, 0x21 }
	__asm { cmp dword ptr [eax + 8], edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmovle ecx, edx }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10f54] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e48[];
extern "C" char g_00e10ef4[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004587f0
extern "C" __declspec(naked) void asm_004587f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd770ec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { jg L_0045883f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0045883f: }
	__asm { push 0xa }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10ef4] }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { push 0x100db28 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10e48] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" void fn_00457090();
extern "C" void fn_004595f0();
extern "C" void fn_0045b870();
// FUNCTION: ROBLOXSTUDIO 0x0045add0
extern "C" __declspec(naked) void asm_0045add0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd761c0 }
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
	__asm { call fn_004595f0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_004595f0 }
	__asm { call fn_0045b870 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00457090 }
	__asm { xor ecx, ecx }
	__asm { mov eax, 0x100d084 }
	__asm { test bl, bl }
	__asm { cmove eax, ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00457090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10524[];
extern "C" void fn_00459560();
extern "C" void fn_0045b460();
// FUNCTION: ROBLOXSTUDIO 0x0045b130
extern "C" __declspec(naked) void asm_0045b130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { jne L_0045b19e }
	__asm { mov edi, dword ptr [edi] }
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0045b18a }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00459560 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b18a: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b19e: }
	__asm { cmp eax, 1 }
	__asm { jne L_0045b1bd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b1bd: }
	__asm { cmp eax, 2 }
	__asm { jne L_0045b1e4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0045b1ce }
	__asm { push ecx }
	__asm { call fn_0045b460 }
	__asm { L_0045b1ce: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b1e4: }
	__asm { cmp eax, 3 }
	__asm { jne L_0045b20e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12c59b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0045b1ce }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b20e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x12c59b8 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10524[];
extern "C" void fn_004596a0();
extern "C" void fn_0045b4f0();
// FUNCTION: ROBLOXSTUDIO 0x0045b360
extern "C" __declspec(naked) void asm_0045b360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { jne L_0045b3ce }
	__asm { mov edi, dword ptr [edi] }
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0045b3ba }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_004596a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b3ba: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b3ce: }
	__asm { cmp eax, 1 }
	__asm { jne L_0045b3ed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b3ed: }
	__asm { cmp eax, 2 }
	__asm { jne L_0045b414 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0045b3fe }
	__asm { push ecx }
	__asm { call fn_0045b4f0 }
	__asm { L_0045b3fe: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b414: }
	__asm { cmp eax, 3 }
	__asm { jne L_0045b43e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12c5708 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0045b3fe }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b43e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x12c5708 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00422570();
extern "C" void fn_00496b90();
// FUNCTION: ROBLOXSTUDIO 0x0045c4a0
extern "C" __declspec(naked) void asm_0045c4a0()
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
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [g_00e10504] }
	__asm { push 0x20 }
	__asm { call edi }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_0045c4e9 }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { jmp L_0045c4eb }
	__asm { L_0045c4e9: }
	__asm { xor esi, esi }
	__asm { L_0045c4eb: }
	__asm { push 0x20 }
	__asm { call edi }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0045c50c }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00422570 }
	__asm { jmp L_0045c50e }
	__asm { L_0045c50c: }
	__asm { xor edi, edi }
	__asm { L_0045c50e: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call fn_00496b90 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0045c549 }
	__asm { test al, 1 }
	__asm { jne L_0045c549 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0045c549 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0045c549: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" char g_01318f70[];
extern "C" void fn_0045ce10();
extern "C" void fn_0045eab0();
extern "C" void fn_006b8ac0();
extern "C" void fn_006b96c0();
// FUNCTION: ROBLOXSTUDIO 0x0045c8b0
extern "C" __declspec(naked) void asm_0045c8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7759d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { push 0x13198e0 }
	__asm { mov dword ptr [esp + 0x14], 0x13198e0 }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov dword ptr [esp + 0x3c], ebx }
	__asm { mov ecx, dword ptr [g_01318f70] }
	__asm { test ecx, ecx }
	__asm { je L_0045c9e2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx edi, al }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { sub eax, dword ptr [ecx + 0x2c] }
	__asm { sar eax, 2 }
	__asm { cmp edi, eax }
	__asm { jb L_0045c92a }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x2c] }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { call fn_0045eab0 }
	__asm { mov ecx, dword ptr [g_01318f70] }
	__asm { L_0045c92a: }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { cmp dword ptr [eax + edi*4], 0 }
	__asm { jne L_0045c9d2 }
	__asm { push 0xe8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { test esi, esi }
	__asm { je L_0045c988 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call fn_0045ce10 }
	__asm { mov byte ptr [esp + 0x3c], 2 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, 1 }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { jb L_0045c977 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0045c977: }
	__asm { push 0x100dc58 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b8ac0 }
	__asm { mov edx, eax }
	__asm { jmp L_0045c98a }
	__asm { L_0045c988: }
	__asm { xor edx, edx }
	__asm { L_0045c98a: }
	__asm { mov ecx, dword ptr [g_01318f70] }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov dword ptr [eax + edi*4], edx }
	__asm { test bl, 1 }
	__asm { je L_0045c9d2 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_0045c9bd }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [g_01318f70] }
	__asm { add esp, 4 }
	__asm { L_0045c9bd: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_0045c9d2: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + edi*4] }
	__asm { call fn_006b96c0 }
	__asm { L_0045c9e2: }
	__asm { push 0x13198e0 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_006b8ac0();
// FUNCTION: ROBLOXSTUDIO 0x0045d200
extern "C" __declspec(naked) void asm_0045d200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd776d5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 4], ebx }
	__asm { jne L_0045d295 }
	__asm { push 0xe8 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test edi, edi }
	__asm { je L_0045d279 }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 4] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov ebx, 1 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_0045d266 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0045d266: }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0045d26e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0045d26e: }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006b8ac0 }
	__asm { jmp L_0045d27b }
	__asm { L_0045d279: }
	__asm { xor eax, eax }
	__asm { L_0045d27b: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test bl, 1 }
	__asm { je L_0045d298 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0045d298 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0045d295: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { L_0045d298: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10064[];
extern "C" char g_00e10194[];
extern "C" char g_00e10204[];
extern "C" char g_00e10230[];
extern "C" char g_01319fa0[];
extern "C" void fn_0045d4e0();
extern "C" void fn_00c371d0();
// FUNCTION: ROBLOXSTUDIO 0x0045d680
extern "C" __declspec(naked) void asm_0045d680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [g_01319fa0] }
	__asm { sub esp, 0x110 }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { jne L_0045d6a4 }
	__asm { mov ecx, 0x1319f78 }
	__asm { call fn_0045d4e0 }
	__asm { mov ecx, dword ptr [g_01319fa0] }
	__asm { L_0045d6a4: }
	__asm { push 1 }
	__asm { push 0x104 }
	__asm { lea eax, [ebp - 0x110] }
	__asm { push eax }
	__asm { call fn_00c371d0 }
	__asm { test eax, eax }
	__asm { jns L_0045d6c2 }
	__asm { L_0045d6bb: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045d6c2: }
	__asm { lea eax, [ebp - 0x110] }
	__asm { push 0x7d0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10230] }
	__asm { mov ecx, dword ptr [g_01319fa0] }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x110] }
	__asm { push 0 }
	__asm { push 0x104 }
	__asm { push eax }
	__asm { call fn_00c371d0 }
	__asm { test eax, eax }
	__asm { js L_0045d6bb }
	__asm { push 0 }
	__asm { push 0x80 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0x40000000 }
	__asm { lea eax, [ebp - 0x110] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10204] }
	__asm { mov esi, eax }
	__asm { cmp esi, -1 }
	__asm { je L_0045d6bb }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 5 }
	__asm { push 0x100dd88 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10064] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10194] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0045e3d0
extern "C" __declspec(naked) void asm_0045e3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd773e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x100df50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0045e451 }
	__asm { push -1 }
	__asm { add eax, 0x24 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0045e438 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0045e438: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { jb L_0045e451 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0045e451: }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_0045e463 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0045e463: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b5580[];
extern "C" void fn_0042ec70();
extern "C" void fn_0042ed90();
extern "C" void fn_0045ec90();
// FUNCTION: ROBLOXSTUDIO 0x0045e8b0
extern "C" __declspec(naked) void asm_0045e8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd729a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012b5580] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, 0x12b5580 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0045e926 }
	__asm { test eax, 0xffff0000 }
	__asm { jne L_0045e926 }
	__asm { push edi }
	__asm { movzx edi, ax }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0042ed90 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0045e912 }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ec70 }
	__asm { L_0045e912: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0045e926: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0045ec90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b5580[];
extern "C" void fn_0042ee70();
extern "C" void fn_0045ed90();
// FUNCTION: ROBLOXSTUDIO 0x0045e950
extern "C" __declspec(naked) void asm_0045e950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77459 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax - 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0045e991 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov edx, eax }
	__asm { test edx, edx }
	__asm { jne L_0045e9a0 }
	__asm { L_0045e991: }
	__asm { mov eax, dword ptr [g_012b5580] }
	__asm { mov ecx, 0x12b5580 }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov edx, eax }
	__asm { L_0045e9a0: }
	__asm { xor ecx, ecx }
	__asm { test edx, edx }
	__asm { setne cl }
	__asm { test ecx, ecx }
	__asm { jne L_0045e9b5 }
	__asm { push 0x80004005 }
	__asm { call fn_0042ee70 }
	__asm { L_0045e9b5: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { jne L_0045e9dd }
	__asm { xor edx, edx }
	__asm { jmp L_0045e9eb }
	__asm { L_0045e9dd: }
	__asm { mov edx, edi }
	__asm { lea ecx, [edx + 1] }
	__asm { L_0045e9e2: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_0045e9e2 }
	__asm { sub edx, ecx }
	__asm { L_0045e9eb: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push edx }
	__asm { push edi }
	__asm { push dword ptr [ecx - 0xc] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_0045ed90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101cc[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ed30();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0045ec90
extern "C" __declspec(naked) void asm_0045ec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_0045ed03 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push -1 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 3 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { lea esi, [eax - 1] }
	__asm { test esi, esi }
	__asm { jle L_0045ed03 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, esi }
	__asm { or ecx, eax }
	__asm { jge L_0045ecd6 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ea80 }
	__asm { L_0045ecd6: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [edi] }
	__asm { push -1 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 3 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp esi, dword ptr [eax - 8] }
	__asm { jg L_0045ed13 }
	__asm { mov dword ptr [eax - 0xc], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0045ed03: }
	__asm { mov ecx, edi }
	__asm { call fn_0042ed30 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0045ed13: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e10548[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0045ed90
extern "C" __declspec(naked) void asm_0045ed90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add ebx, dword ptr [ebp + 0x18] }
	__asm { js L_0045edfa }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, ebx }
	__asm { or ecx, eax }
	__asm { jge L_0045edbc }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_0042ea80 }
	__asm { L_0045edbc: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov esi, dword ptr [g_00e10548] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call esi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { call esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { cmp ebx, dword ptr [ecx - 8] }
	__asm { jg L_0045edfa }
	__asm { mov dword ptr [ecx - 0xc], ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov byte ptr [ebx + eax], 0 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045edfa: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" void fn_00403540();
extern "C" void fn_00408c40();
// FUNCTION: ROBLOXSTUDIO 0x0045f690
extern "C" __declspec(naked) void asm_0045f690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd777a2 }
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
	__asm { jae L_0045f701 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_0045f701 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 2 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0045f6de }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00408c40 }
	__asm { L_0045f6de: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0045f73e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { jmp L_0045f728 }
	__asm { L_0045f701: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0045f70f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00408c40 }
	__asm { L_0045f70f: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0045f73e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { L_0045f728: }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_0045f73e: }
	__asm { add dword ptr [esi + 4], 0x18 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0045f780
extern "C" __declspec(naked) void asm_0045f780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd772fc }
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
	__asm { je L_0045f7cc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0045f7cc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0045f7ee }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0045f7f0 }
	__asm { L_0045f7ee: }
	__asm { xor edx, edx }
	__asm { L_0045f7f0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0045f80e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0045f80e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3cb30 }
	__asm { mov dword ptr [ebx], 0xe3cb3c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3cb44 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0045f857 }
	__asm { add edi, 0xc }
	__asm { jmp L_0045f859 }
	__asm { L_0045f857: }
	__asm { xor edi, edi }
	__asm { L_0045f859: }
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
// FUNCTION: ROBLOXSTUDIO 0x0045f9c0
extern "C" __declspec(naked) void asm_0045f9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd772fc }
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
	__asm { je L_0045fa0c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0045fa0c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0045fa2e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0045fa30 }
	__asm { L_0045fa2e: }
	__asm { xor edx, edx }
	__asm { L_0045fa30: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0045fa4e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0045fa4e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3cb30 }
	__asm { mov dword ptr [ebx], 0xe3cb3c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3cb44 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0045fa97 }
	__asm { add edi, 0xc }
	__asm { jmp L_0045fa99 }
	__asm { L_0045fa97: }
	__asm { xor edi, edi }
	__asm { L_0045fa99: }
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
// FUNCTION: ROBLOXSTUDIO 0x0045fb50
extern "C" __declspec(naked) void asm_0045fb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd777d1 }
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
	__asm { mov dword ptr [ebp - 0x3c], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0045fbb3 }
	__asm { add esi, 0xc }
	__asm { jmp L_0045fbb5 }
	__asm { L_0045fbb3: }
	__asm { xor esi, esi }
	__asm { L_0045fbb5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0045fbcb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0045fbcb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3cb30 }
	__asm { mov dword ptr [ebp - 0x30], 0xe3cb3c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179f40 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe3cb44 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0045fc70
extern "C" __declspec(naked) void asm_0045fc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77334 }
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
	__asm { je L_0045fcbb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0045fcbb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0045fcdd }
	__asm { add edi, 0xc }
	__asm { jmp L_0045fcdf }
	__asm { L_0045fcdd: }
	__asm { xor edi, edi }
	__asm { L_0045fcdf: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0045fcf5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0045fcf5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3cb30 }
	__asm { mov dword ptr [esi + 0xc], 0xe3cb3c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3cb44 }
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

extern "C" char g_00e10208[];
extern "C" char g_00e1081c[];
extern "C" char g_00e10820[];
extern "C" void fn_0042ee70();
extern "C" void fn_00460360();
// FUNCTION: ROBLOXSTUDIO 0x0045ff90
extern "C" __declspec(naked) void asm_0045ff90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_00460007 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push -1 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 3 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10208] }
	__asm { lea ecx, [eax - 1] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call dword ptr [g_00e1081c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0045fff6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push -1 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 3 }
	__asm { call dword ptr [g_00e10208] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { je L_0045fff6 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10820] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00460360 }
	__asm { xor esi, esi }
	__asm { jmp L_0045fffe }
	__asm { L_0045fff6: }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00460360 }
	__asm { L_0045fffe: }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { pop esi }
	__asm { jne L_0046000d }
	__asm { jmp L_00460017 }
	__asm { L_00460007: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_0046000d: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00460017: }
	__asm { push 0x8007000e }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x00461a40
extern "C" __declspec(naked) void asm_00461a40()
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
	__asm { je L_00461a8b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00461a8b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00461ade }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x100e284 }
	__asm { mov dword ptr [esi + 8], 0x100e27c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x100e29c }
	__asm { mov dword ptr [esi + 8], 0x100e294 }
	__asm { jmp L_00461ae0 }
	__asm { L_00461ade: }
	__asm { xor esi, esi }
	__asm { L_00461ae0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00461afd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00461afd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11018[];
extern "C" char g_00e11110[];
extern "C" char g_00e11fb8[];
extern "C" void fn_00422180();
// FUNCTION: ROBLOXSTUDIO 0x00461f70
extern "C" __declspec(naked) void asm_00461f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77ada }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00461ff2 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00461ff2 }
	__asm { push eax }
	__asm { call fn_00422180 }
	__asm { test al, al }
	__asm { je L_00461ff2 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00461fee }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11fb8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e11018] }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [eax], cl }
	__asm { cmovne ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00461ff2 }
	__asm { L_00461fee: }
	__asm { mov bl, 1 }
	__asm { jmp L_00461ff4 }
	__asm { L_00461ff2: }
	__asm { xor bl, bl }
	__asm { L_00461ff4: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test byte ptr [ebp - 0x10], 1 }
	__asm { je L_0046200a }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0046200a: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b3dc[];
extern "C" char g_0131b3e0[];
extern "C" char g_0131b40c[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00464d00
extern "C" __declspec(naked) void asm_00464d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77f1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00464d65 }
	__asm { cmp dword ptr [g_0131b40c], 0x29a }
	__asm { je L_00464d65 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00464d54 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00464d65 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00464d54: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00464d65: }
	__asm { push 0x465c10 }
	__asm { push 0x131b3f4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b3e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00464daf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3e0], eax }
	__asm { push 0xf1b354 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00464daf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b3dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00465d80();
extern "C" void fn_00490680();
// FUNCTION: ROBLOXSTUDIO 0x00464f80
extern "C" __declspec(naked) void asm_00464f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0xdc }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00464fd4 }
	__asm { mov ecx, eax }
	__asm { call fn_00490680 }
	__asm { mov edi, eax }
	__asm { jmp L_00464fd6 }
	__asm { L_00464fd4: }
	__asm { xor edi, edi }
	__asm { L_00464fd6: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00465d80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00465004 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00465004 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_00465004: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b414[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00464c20();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00465370
extern "C" __declspec(naked) void asm_00465370()
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
	__asm { mov dword ptr [esi], 0xe59078 }
	__asm { test al, al }
	__asm { je L_004653e1 }
	__asm { cmp dword ptr [g_0131b414], 0x29a }
	__asm { je L_004653e1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004653d0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004653e1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004653d0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004653e1: }
	__asm { mov ecx, esi }
	__asm { call fn_00464c20 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0046543b }
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
	__asm { L_0046543b: }
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
extern "C" char g_0131b410[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00464c80();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00465680
extern "C" __declspec(naked) void asm_00465680()
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
	__asm { mov dword ptr [esi], 0xe59080 }
	__asm { test al, al }
	__asm { je L_004656f1 }
	__asm { cmp dword ptr [g_0131b410], 0x29a }
	__asm { je L_004656f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004656e0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004656f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004656e0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004656f1: }
	__asm { mov ecx, esi }
	__asm { call fn_00464c80 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0046574b }
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
	__asm { L_0046574b: }
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
extern "C" char g_0131b40c[];
extern "C" char g_0131e03c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00464d00();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004659e0
extern "C" __declspec(naked) void asm_004659e0()
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
	__asm { mov dword ptr [g_0131e03c], 0x100efac }
	__asm { test al, al }
	__asm { je L_00465a52 }
	__asm { cmp dword ptr [g_0131b40c], 0x29a }
	__asm { je L_00465a52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00465a41 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00465a52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00465a41: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00465a52: }
	__asm { call fn_00464d00 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00465aa9 }
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
	__asm { L_00465aa9: }
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
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
// FUNCTION: ROBLOXSTUDIO 0x00465ae0
extern "C" __declspec(naked) void asm_00465ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { je L_00465b68 }
	__asm { L_00465af1: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00465b49 }
	__asm { test eax, eax }
	__asm { je L_00465b49 }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_00465b49 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00465b34 }
	__asm { push 0x100 }
	__asm { push 0xf14248 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00465b49 }
	__asm { L_00465b34: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10080d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00465b49: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jne L_00465af1 }
	__asm { L_00465b68: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b3dc[];
extern "C" char g_0131b3e0[];
extern "C" char g_0131b3e4[];
extern "C" char g_0131b3e8[];
extern "C" char g_0131b3ec[];
extern "C" char g_0131b3f0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00465b70
extern "C" __declspec(naked) void asm_00465b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b3f0] }
	__asm { test al, 1 }
	__asm { jne L_00465bb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3f0], eax }
	__asm { push 0xe74ba4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3ec], eax }
	__asm { L_00465bb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b3e8] }
	__asm { test al, 1 }
	__asm { jne L_00465c02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3e8], eax }
	__asm { push 0xe74ba0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3e4], eax }
	__asm { L_00465c02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77f1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b3e0] }
	__asm { test al, 1 }
	__asm { jne L_00465c52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3e0], eax }
	__asm { push 0xf1b354 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3dc], eax }
	__asm { L_00465c52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_004143c0();
extern "C" void fn_004672d0();
// FUNCTION: ROBLOXSTUDIO 0x00466150
extern "C" __declspec(naked) void asm_00466150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7815e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_004672d0 }
	__asm { inc eax }
	__asm { test eax, eax }
	__asm { jle L_004661b8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { sub edx, dword ptr [ecx + 8] }
	__asm { cmp eax, edx }
	__asm { jge L_004661b8 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004143c0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, 1 }
	__asm { jmp L_004661d2 }
	__asm { L_004661b8: }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ebx, 2 }
	__asm { L_004661d2: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11108] }
	__asm { or ebx, 4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 2 }
	__asm { je L_004661fc }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004661fc: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_00466217 }
	__asm { and ebx, 0xfffffffe }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00466217: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f74[];
// FUNCTION: ROBLOXSTUDIO 0x004672d0
extern "C" __declspec(naked) void asm_004672d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jle L_00467314 }
	__asm { add esi, 5 }
	__asm { lea edi, [edx + esi*4] }
	__asm { lea esi, [edx + 0x14] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { cmp esi, edi }
	__asm { je L_00467314 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_00467300: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { jne L_00467320 }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_00467300 }
	__asm { L_00467314: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00467320: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { lea eax, [eax*4 + 0x14] }
	__asm { sub esi, eax }
	__asm { sub esi, ecx }
	__asm { sar esi, 2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10f78[];
extern "C" char g_00e10f7c[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004679a0
extern "C" __declspec(naked) void asm_004679a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78195 }
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
	__asm { je L_004679f9 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_004679f9: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_00467a10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_00467a10: }
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
extern "C" char g_00e10f08[];
extern "C" char g_00e125bc[];
extern "C" char g_00e12cdc[];
extern "C" char g_00e12ce0[];
// FUNCTION: ROBLOXSTUDIO 0x00467ea0
extern "C" __declspec(naked) void asm_00467ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { call dword ptr [g_00e125bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0x100faa4 }
	__asm { mov dword ptr [esi + 8], 0x100fa88 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ebx, dword ptr [g_00e10504] }
	__asm { push 8 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call ebx }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00467f33 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12cdc] }
	__asm { mov dword ptr [edi], 0x100fa4c }
	__asm { jmp L_00467f35 }
	__asm { L_00467f33: }
	__asm { xor edi, edi }
	__asm { L_00467f35: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 8 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { call ebx }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_00467f61 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ce0] }
	__asm { mov dword ptr [edi], 0x100f9dc }
	__asm { jmp L_00467f63 }
	__asm { L_00467f61: }
	__asm { xor edi, edi }
	__asm { L_00467f63: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0x18 }
	__asm { mov dword ptr [esi + 0x24], edi }
	__asm { call ebx }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_00467f93 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f08] }
	__asm { mov dword ptr [edi], 0x1008400 }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { jmp L_00467f9a }
	__asm { L_00467f93: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00467f9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ef4[];
extern "C" char g_00e10f0c[];
extern "C" char g_00e10f38[];
extern "C" char g_00e110d4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00468270();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00468320
extern "C" __declspec(naked) void asm_00468320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f5ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00468270 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { push 0xa }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10ef4] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { cmp dword ptr [eax + 8], 3 }
	__asm { jne L_0046838b }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push 0x30 }
	__asm { call dword ptr [g_00e10f38] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f0c] }
	__asm { L_0046838b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00468425 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 8], 4 }
	__asm { je L_004683d6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004683c1 }
	__asm { push 0x88 }
	__asm { push 0x100f128 }
	__asm { push 0x100f248 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004683d6 }
	__asm { L_004683c1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x100f278 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004683d6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00468425 }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e110d4] }
	__asm { cmp edi, eax }
	__asm { je L_00468425 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00468410 }
	__asm { push 0x89 }
	__asm { push 0x100f128 }
	__asm { push 0x100f304 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00468425 }
	__asm { L_00468410: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x100f328 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00468425: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12cf4[];
extern "C" char g_00e12cf8[];
extern "C" char g_00e12cfc[];
extern "C" char g_00e12d00[];
extern "C" char g_00e12d04[];
extern "C" char g_00e12d08[];
extern "C" char g_00e12d0c[];
// FUNCTION: ROBLOXSTUDIO 0x00468440
extern "C" __declspec(naked) void asm_00468440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd785e5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call dword ptr [g_00e12cf4] }
	__asm { push 0x100f3ac }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax], 3 }
	__asm { push 0x35 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e12cfc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x7530 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e12d00] }
	__asm { test al, al }
	__asm { je L_0046850f }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e12d08] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12d04] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12d0c] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12cf8] }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0046850f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xf12f2d }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12cf8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10d6c[];
extern "C" char g_00e10d70[];
extern "C" char g_00e10d74[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12d0c[];
extern "C" char g_00e12d10[];
extern "C" char g_00e12d14[];
extern "C" char g_00e12d18[];
extern "C" char g_00e12d1c[];
// FUNCTION: ROBLOXSTUDIO 0x00468650
extern "C" __declspec(naked) void asm_00468650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7860b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00468776 }
	__asm { call dword ptr [g_00e10d74] }
	__asm { test al, al }
	__asm { jne L_00468776 }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e12d10] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { push 0x521 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12d14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [g_00e12d0c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call esi }
	__asm { push 0x100f3d4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12d1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12d18] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x100f3e0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x100f450 }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e110ac] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x24] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { add esp, 0x14 }
	__asm { push 0x1f4 }
	__asm { call dword ptr [g_00e10d70] }
	__asm { push 0 }
	__asm { push 0x100f4b0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x100f520 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x28] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { add esp, 0x14 }
	__asm { call dword ptr [g_00e10d6c] }
	__asm { L_00468776: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11110[];
extern "C" char g_00e12d0c[];
extern "C" char g_00e12d1c[];
extern "C" char g_00e12d20[];
extern "C" char g_00e12d24[];
extern "C" void fn_00468440();
// FUNCTION: ROBLOXSTUDIO 0x00468790
extern "C" __declspec(naked) void asm_00468790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd78702 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00468857 }
	__asm { call dword ptr [g_00e12d20] }
	__asm { test al, al }
	__asm { jne L_00468857 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00468440 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12d1c] }
	__asm { push 0x523 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12d24] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12d0c] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { je L_00468857 }
	__asm { push 0 }
	__asm { push 0x100f580 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x100f5e8 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00468857: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e12d2c[];
extern "C" void fn_004085f0();
// FUNCTION: ROBLOXSTUDIO 0x00468870
extern "C" __declspec(naked) void asm_00468870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { test ebx, ebx }
	__asm { je L_004688f8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12d2c] }
	__asm { cmp eax, 3 }
	__asm { jne L_004688f8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x100f650 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x100f6b8 }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e110ac] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call esi }
	__asm { add esp, 0x14 }
	__asm { push 0 }
	__asm { push 0x100f720 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { push 0x100f788 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0x14 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x18] }
	__asm { call fn_004085f0 }
	__asm { pop edi }
	__asm { L_004688f8: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110dc[];
extern "C" char g_00e12cd4[];
extern "C" char g_00e12d4c[];
// FUNCTION: ROBLOXSTUDIO 0x00469160
extern "C" __declspec(naked) void asm_00469160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 0x18] }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_00469205 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [g_00e12cd4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00469204 }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0x100f908 }
	__asm { call edi }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e11098] }
	__asm { call esi }
	__asm { push 0x100f970 }
	__asm { call edi }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push edi }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { add esp, 0x28 }
	__asm { cmp eax, ecx }
	__asm { je L_004691db }
	__asm { mov edi, edi }
	__asm { L_004691d0: }
	__asm { cmp dword ptr [eax], ebx }
	__asm { je L_004691db }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_004691d0 }
	__asm { L_004691db: }
	__asm { lea edx, [eax + 4] }
	__asm { sub ecx, edx }
	__asm { and ecx, 0xfffffffc }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add dword ptr [edi + 0x1c], -4 }
	__asm { add esp, 0xc }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12d4c] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e110dc] }
	__asm { pop edi }
	__asm { L_00469204: }
	__asm { pop ebx }
	__asm { L_00469205: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x00469830
extern "C" __declspec(naked) void asm_00469830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_004698b5 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, 0x12bfe28 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00469862 }
	__asm { push 0x34 }
	__asm { push 0x100fc00 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00469862: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_004698a1 }
	__asm { dec eax }
	__asm { je L_0046988c }
	__asm { dec eax }
	__asm { jne L_004698b4 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov esi, dword ptr [edi] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [esi + 0x184] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046988c: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [edx + 0x180] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004698a1: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12bfe28 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_004698b4: }
	__asm { pop edi }
	__asm { L_004698b5: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_00469830();
extern "C" void fn_00469e00();
// FUNCTION: ROBLOXSTUDIO 0x00469f60
extern "C" __declspec(naked) void asm_00469f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00469f9f }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469f99 }
	__asm { cmp esi, 3 }
	__asm { jge L_00469f96 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469830 }
	__asm { add esp, 0x10 }
	__asm { L_00469f96: }
	__asm { sub esi, 3 }
	__asm { L_00469f99: }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jns L_00469fa8 }
	__asm { L_00469f9f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00469fa8: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469fc3 }
	__asm { cmp esi, 5 }
	__asm { jge L_00469fc0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469e00 }
	__asm { add esp, 0x10 }
	__asm { L_00469fc0: }
	__asm { lea eax, [esi - 5] }
	__asm { L_00469fc3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12f78[];
extern "C" void fn_0046b050();
extern "C" void fn_00586970();
// FUNCTION: ROBLOXSTUDIO 0x0046b160
extern "C" __declspec(naked) void asm_0046b160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12f78] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046b19f }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b199 }
	__asm { cmp esi, 4 }
	__asm { jge L_0046b196 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586970 }
	__asm { add esp, 0x10 }
	__asm { L_0046b196: }
	__asm { sub esi, 4 }
	__asm { L_0046b199: }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jns L_0046b1a8 }
	__asm { L_0046b19f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0046b1a8: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b1c3 }
	__asm { cmp esi, 1 }
	__asm { jge L_0046b1c0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046b050 }
	__asm { add esp, 0x10 }
	__asm { L_0046b1c0: }
	__asm { lea eax, [esi - 1] }
	__asm { L_0046b1c3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0049d930();
extern "C" void fn_0049eeb0();
// FUNCTION: ROBLOXSTUDIO 0x0046b360
extern "C" __declspec(naked) void asm_0046b360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046b3e7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bff08 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046b395 }
	__asm { push 0x34 }
	__asm { push 0x100fec0 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046b395: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046b3b9 }
	__asm { dec eax }
	__asm { je L_0046b3af }
	__asm { dec eax }
	__asm { jne L_0046b3e6 }
	__asm { mov ecx, esi }
	__asm { call fn_0049eeb0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046b3af: }
	__asm { call fn_0049d930 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046b3b9: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bff08 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0046b3e6: }
	__asm { pop esi }
	__asm { L_0046b3e7: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00548e40();
extern "C" void fn_00548f40();
// FUNCTION: ROBLOXSTUDIO 0x0046cde0
extern "C" __declspec(naked) void asm_0046cde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046ce69 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0018 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046ce15 }
	__asm { push 0x34 }
	__asm { push 0x1010300 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046ce15: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046ce3b }
	__asm { dec eax }
	__asm { je L_0046ce2f }
	__asm { dec eax }
	__asm { jne L_0046ce68 }
	__asm { mov ecx, esi }
	__asm { call fn_00548f40 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046ce2f: }
	__asm { mov ecx, esi }
	__asm { call fn_00548e40 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046ce3b: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0018 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0046ce68: }
	__asm { pop esi }
	__asm { L_0046ce69: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f70[];
// FUNCTION: ROBLOXSTUDIO 0x0046de50
extern "C" __declspec(naked) void asm_0046de50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov esi, ebx }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { js L_0046dea7 }
	__asm { L_0046de70: }
	__asm { mov esi, dword ptr [ebx + eax*4 + 4] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0046dea1 }
	__asm { L_0046de78: }
	__asm { push ecx }
	__asm { lea ecx, [esi - 8] }
	__asm { call edx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { je L_0046de98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi + eax*4 + 4] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_0046de78 }
	__asm { L_0046de98: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { L_0046dea1: }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jns L_0046de70 }
	__asm { L_0046dea7: }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0046deb7 }
	__asm { lea eax, [esi - 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_0046deb9 }
	__asm { L_0046deb7: }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_0046deb9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f70[];
// FUNCTION: ROBLOXSTUDIO 0x0046dfa0
extern "C" __declspec(naked) void asm_0046dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov esi, ebx }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { js L_0046dff7 }
	__asm { L_0046dfc0: }
	__asm { mov esi, dword ptr [ebx + eax*4 + 4] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0046dff1 }
	__asm { L_0046dfc8: }
	__asm { push ecx }
	__asm { lea ecx, [esi - 0x1c] }
	__asm { call edx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { je L_0046dfe8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi + eax*4 + 4] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_0046dfc8 }
	__asm { L_0046dfe8: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { L_0046dff1: }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jns L_0046dfc0 }
	__asm { L_0046dff7: }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0046e007 }
	__asm { lea eax, [esi - 0x1c] }
	__asm { push eax }
	__asm { call edx }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_0046e009 }
	__asm { L_0046e007: }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_0046e009: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f78[];
extern "C" char g_00e10f7c[];
extern "C" char g_00e10f9c[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0046e0c0
extern "C" __declspec(naked) void asm_0046e0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd787c5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 8 }
	__asm { push 0x1c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi - 0x1c] }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0046e119 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0046e119: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_0046e130 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [g_00e10f9c] }
	__asm { L_0046e130: }
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
	__asm { push 0x1c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f78] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e123b4[];
extern "C" void fn_00541fd0();
extern "C" void fn_00543220();
// FUNCTION: ROBLOXSTUDIO 0x0046e570
extern "C" __declspec(naked) void asm_0046e570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0046e5a3 }
	__asm { movzx eax, word ptr [edi + 8] }
	__asm { cmp eax, 9 }
	__asm { jne L_0046e597 }
	__asm { push 0 }
	__asm { call fn_00541fd0 }
	__asm { mov byte ptr [esi + 0x25], 0 }
	__asm { jmp L_0046e5a3 }
	__asm { L_0046e597: }
	__asm { cmp eax, 8 }
	__asm { jne L_0046e5a3 }
	__asm { push 1 }
	__asm { call fn_00541fd0 }
	__asm { L_0046e5a3: }
	__asm { cmp byte ptr [esi + 0x25], 0 }
	__asm { je L_0046e5bd }
	__asm { cmp word ptr [edi + 8], 0x33 }
	__asm { jne L_0046e5bd }
	__asm { or word ptr [edi + 0xa], 4 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0046e5bd: }
	__asm { mov eax, 0x3f0 }
	__asm { cmp word ptr [edi + 8], ax }
	__asm { jne L_0046e5ea }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e5ea }
	__asm { cmp byte ptr [esi + 0x21], 0 }
	__asm { jne L_0046e5e2 }
	__asm { mov byte ptr [esi + 0x21], 1 }
	__asm { call fn_00543220 }
	__asm { mov byte ptr [esi + 0x21], 0 }
	__asm { L_0046e5e2: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0046e5ea: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ef8[];
extern "C" char g_00e1297c[];
extern "C" char g_00e12c74[];
extern "C" char g_00e12c84[];
// FUNCTION: ROBLOXSTUDIO 0x0046e6f0
extern "C" __declspec(naked) void asm_0046e6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e763 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0x7c], edi }
	__asm { mov dword ptr [ecx + 0x80], edx }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e721 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { L_0046e721: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12c74] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1297c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c84] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10ef8] }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_0046e763 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x60] }
	__asm { L_0046e763: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11ecc[];
extern "C" char g_01318fb9[];
extern "C" void fn_00541c10();
// FUNCTION: ROBLOXSTUDIO 0x0046e770
extern "C" __declspec(naked) void asm_0046e770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x18], 0 }
	__asm { push edi }
	__asm { je L_0046e812 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, 0xa }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { dec eax }
	__asm { je L_0046e7c0 }
	__asm { dec eax }
	__asm { je L_0046e7b9 }
	__asm { sub eax, 2 }
	__asm { jne L_0046e7c2 }
	__asm { cmp byte ptr [g_01318fb9], al }
	__asm { je L_0046e7c2 }
	__asm { lea edi, [eax + 2] }
	__asm { jmp L_0046e7c2 }
	__asm { L_0046e7b9: }
	__asm { mov edi, 1 }
	__asm { jmp L_0046e7c2 }
	__asm { L_0046e7c0: }
	__asm { xor edi, edi }
	__asm { L_0046e7c2: }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11ecc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { test ecx, 0x2000000 }
	__asm { mov edx, 1 }
	__asm { cmovne eax, edx }
	__asm { test ecx, 0x4000000 }
	__asm { je L_0046e7ec }
	__asm { or eax, 0x40 }
	__asm { L_0046e7ec: }
	__asm { test ecx, 0x8000000 }
	__asm { je L_0046e7f9 }
	__asm { or eax, 0x100 }
	__asm { L_0046e7f9: }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00541c10 }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { L_0046e812: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11ecc[];
extern "C" char g_01318fb9[];
extern "C" void fn_00541c10();
// FUNCTION: ROBLOXSTUDIO 0x0046e820
extern "C" __declspec(naked) void asm_0046e820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { je L_0046e8b9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, 0xa }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { dec eax }
	__asm { je L_0046e862 }
	__asm { dec eax }
	__asm { je L_0046e85b }
	__asm { sub eax, 2 }
	__asm { jne L_0046e864 }
	__asm { cmp byte ptr [g_01318fb9], al }
	__asm { je L_0046e864 }
	__asm { lea esi, [eax + 2] }
	__asm { jmp L_0046e864 }
	__asm { L_0046e85b: }
	__asm { mov esi, 1 }
	__asm { jmp L_0046e864 }
	__asm { L_0046e862: }
	__asm { xor esi, esi }
	__asm { L_0046e864: }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { or word ptr [ecx + 0xa], 4 }
	__asm { mov ebx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11ecc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { test ecx, 0x2000000 }
	__asm { mov edx, 1 }
	__asm { cmovne eax, edx }
	__asm { test ecx, 0x4000000 }
	__asm { je L_0046e89b }
	__asm { or eax, 0x40 }
	__asm { L_0046e89b: }
	__asm { test ecx, 0x8000000 }
	__asm { je L_0046e8a8 }
	__asm { or eax, 0x100 }
	__asm { L_0046e8a8: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x14] }
	__asm { push ebx }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00541c10 }
	__asm { L_0046e8b9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123ec[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_004a4c90();
extern "C" void fn_004b7580();
extern "C" void fn_0053fff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0046ebe0
extern "C" __declspec(naked) void asm_0046ebe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { jne L_0046ec45 }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0046ec32 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0046ec32: }
	__asm { mov ecx, dword ptr [g_0131eba0] }
	__asm { test ecx, ecx }
	__asm { je L_0046ec45 }
	__asm { call fn_004b7580 }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { L_0046ec45: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { jne L_0046ec68 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123ec] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0046ec68: }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { test ecx, ecx }
	__asm { je L_0046ec74 }
	__asm { call fn_0053fff0 }
	__asm { L_0046ec74: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { or word ptr [eax + 0xa], 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_00e12420[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e300();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0046f270
extern "C" __declspec(naked) void asm_0046f270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 4], 0x101 }
	__asm { mov edi, ecx }
	__asm { jne L_0046f346 }
	__asm { cmp dword ptr [esi + 8], 0x2c }
	__asm { jne L_0046f346 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0046f2dd }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_0046f2dd: }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { cmp dword ptr [eax + 0x410], 0 }
	__asm { jne L_0046f346 }
	__asm { call fn_0057e300 }
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
	__asm { mov eax, dword ptr [eax + 0x1c] }
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
	__asm { push 2 }
	__asm { push 0x10104ec }
	__asm { push dword ptr [eax + 0x1c4] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0046f346: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e12420] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11110[];
extern "C" char g_00e1237c[];
extern "C" char g_00e12394[];
extern "C" char g_00e12398[];
extern "C" void fn_00468120();
extern "C" void fn_00468320();
extern "C" void fn_00468650();
extern "C" void fn_0046f900();
// FUNCTION: ROBLOXSTUDIO 0x004701f0
extern "C" __declspec(naked) void asm_004701f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70742 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [eax], 0x3000 }
	__asm { call dword ptr [g_00e12398] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x37 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebx], 0x1010914 }
	__asm { mov dword ptr [ebx + 8], 0x10108f4 }
	__asm { call dword ptr [g_00e12394] }
	__asm { push ebx }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { call fn_0046f900 }
	__asm { call fn_00468120 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00468320 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1237c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x10106e0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1010738 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { call fn_00468120 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { call fn_00468650 }
	__asm { push 0 }
	__asm { push 0x1010790 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0x1010800 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_00468120 }
	__asm { push eax }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0043d7c0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x00470620
extern "C" __declspec(naked) void asm_00470620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79600 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004706ad }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_004706ad }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { add eax, 0x1c }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x24] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { call fn_0043d7c0 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0047069b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0047069b: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_004706ad }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004706ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12988[];
extern "C" void fn_00477000();
extern "C" void fn_00478050();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00470ac0
extern "C" __declspec(naked) void asm_00470ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79ad8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x84], eax }
	__asm { sete al }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { test eax, eax }
	__asm { lea eax, [esi + 0x78] }
	__asm { jne L_00470af9 }
	__asm { lea eax, [esi + 0x7c] }
	__asm { L_00470af9: }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_00e12988] }
	__asm { cmp dword ptr [esi + 0x84], 0 }
	__asm { setne byte ptr [ebp - 0xd] }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00478050 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00470b4d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00470b4d: }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00477000 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110d0[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e84[];
extern "C" char g_00e11e88[];
extern "C" char g_00e12ac4[];
extern "C" void fn_0044cdf0();
extern "C" void fn_00477000();
extern "C" void fn_007d5390();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00470ed0
extern "C" __declspec(naked) void asm_00470ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7983a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12c6eb4 }
	__asm { push 0x12be8e4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { mov ebx, eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00470fbf }
	__asm { push esi }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11e88] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110d0] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { pop esi }
	__asm { test bl, bl }
	__asm { je L_00470fbf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e11e84] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_0044cdf0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { test eax, eax }
	__asm { je L_00470fb6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00470fb6: }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00477000 }
	__asm { L_00470fbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11e70[];
extern "C" char g_00e11e74[];
extern "C" char g_00e11e78[];
extern "C" char g_00e11e7c[];
extern "C" char g_00e11e80[];
extern "C" char g_00e11e90[];
extern "C" char g_00e129e4[];
extern "C" char g_01038228[];
extern "C" char g_01038288[];
// FUNCTION: ROBLOXSTUDIO 0x00471050
extern "C" __declspec(naked) void asm_00471050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { push -1 }
	__asm { push 0xd78f5c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x70 }
	__asm { push esi }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x3c], esi }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { test esi, esi }
	__asm { je L_004710a6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e80] }
	__asm { mov dword ptr [esi], 0x101127c }
	__asm { mov dword ptr [esi + 8], 0x101125c }
	__asm { jmp L_004710a8 }
	__asm { L_004710a6: }
	__asm { xor esi, esi }
	__asm { L_004710a8: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x80], 0xffffffff }
	__asm { call dword ptr [g_00e129e4] }
	__asm { fld1 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e11e7c] }
	__asm { fld qword ptr [g_01038288] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e11e78] }
	__asm { fld qword ptr [g_01038228] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e11e74] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e90] }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e70] }
	__asm { mov ecx, dword ptr [esp + 0x74] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110d0[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e64[];
extern "C" char g_00e11e68[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00477000();
extern "C" void fn_004780f0();
extern "C" void fn_007d54e0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004711c0
extern "C" __declspec(naked) void asm_004711c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd797ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12c6e94 }
	__asm { push 0x12be8e4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { mov ebx, eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esp + 0x18], ebx }
	__asm { test ebx, ebx }
	__asm { je L_004712c4 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov esi, eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0x78], 0 }
	__asm { call dword ptr [g_00e11e68] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x78], 1 }
	__asm { call dword ptr [g_00e110d0] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov bl, al }
	__asm { mov byte ptr [esp + 0x74], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x74], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { je L_004712c4 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { call dword ptr [g_00e11e64] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { call fn_007d54e0 }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { call fn_004780f0 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x74], 2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [esp + 0x74], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { test eax, eax }
	__asm { je L_004712bb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004712bb: }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00477000 }
	__asm { L_004712c4: }
	__asm { mov ecx, dword ptr [esp + 0x6c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044cdf0();
extern "C" void fn_007d5390();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00471440
extern "C" __declspec(naked) void asm_00471440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x12bc070 }
	__asm { push 0x12bc38c }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf67f8 }
	__asm { mov edx, eax }
	__asm { add esp, 0x14 }
	__asm { test edx, edx }
	__asm { je L_004714d6 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00471489 }
	__asm { add ecx, 0x1c }
	__asm { jmp L_0047148b }
	__asm { L_00471489: }
	__asm { xor ecx, ecx }
	__asm { L_0047148b: }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ecx }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_0044cdf0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { test eax, eax }
	__asm { je L_004714d6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004714d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10d00[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11104[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e58[];
extern "C" char g_00e12aa4[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004717d0
extern "C" __declspec(naked) void asm_004717d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79655 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12c5498 }
	__asm { push 0x12be8e4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00cf67f8 }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { je L_004718d4 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0x10 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11e58] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { xor eax, eax }
	__asm { test esi, esi }
	__asm { cmovs esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12aa4] }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00471895 }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebx], 0x1015688 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { jmp L_00471897 }
	__asm { L_00471895: }
	__asm { xor ebx, ebx }
	__asm { L_00471897: }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10d00] }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0x1010aa8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { push 0 }
	__asm { push 0x10155a0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_004718d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044cdf0();
extern "C" void fn_0046de50();
extern "C" void fn_00477000();
extern "C" void fn_00477b50();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x004718f0
extern "C" __declspec(naked) void asm_004718f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x7c], 0 }
	__asm { jne L_00471979 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + 0x78] }
	__asm { call fn_0046de50 }
	__asm { cmp eax, dword ptr [edi + 0x78] }
	__asm { je L_00471978 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + 0x78] }
	__asm { call fn_00477b50 }
	__asm { mov esi, eax }
	__asm { call fn_007d5390 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { call fn_0044cdf0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { test eax, eax }
	__asm { je L_0047196f }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0047196f: }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00477000 }
	__asm { L_00471978: }
	__asm { pop esi }
	__asm { L_00471979: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11ff4[];
extern "C" char g_00e125b4[];
extern "C" char g_00e12988[];
extern "C" char g_00e129d4[];
extern "C" void fn_0044ddf0();
extern "C" void fn_00477660();
extern "C" void fn_008e9ad0();
// FUNCTION: ROBLOXSTUDIO 0x00471aa0
extern "C" __declspec(naked) void asm_00471aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79aa2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x74], 0 }
	__asm { je L_00471aea }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e129d4] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call dword ptr [g_00e12988] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { jmp L_00471b4b }
	__asm { L_00471aea: }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_0044ddf0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_008e9ad0 }
	__asm { movzx eax, byte ptr [esp + 0xb] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [esp + 0xe] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { movzx ecx, ah }
	__asm { movzx eax, al }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x28] }
	__asm { call dword ptr [g_00e11ff4] }
	__asm { lea edx, [esp + 0x18] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_00477660 }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x3c], 1 }
	__asm { call dword ptr [g_00e12988] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { L_00471b4b: }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { call dword ptr [g_00e125b4] }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e54[];
extern "C" char g_00e11ed4[];
extern "C" char g_00e125b4[];
extern "C" char g_00e129e4[];
extern "C" char g_00e12ac4[];
extern "C" void fn_004a1ed0();
// FUNCTION: ROBLOXSTUDIO 0x00471b90
extern "C" __declspec(naked) void asm_00471b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { push 0x18 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test eax, eax }
	__asm { je L_00471c16 }
	__asm { push esi }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e11e54] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov ebx, 3 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004a1ed0 }
	__asm { pop esi }
	__asm { jmp L_00471c18 }
	__asm { L_00471c16: }
	__asm { xor eax, eax }
	__asm { L_00471c18: }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test bl, 2 }
	__asm { je L_00471c36 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call dword ptr [g_00e125b4] }
	__asm { L_00471c36: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_00471c4b }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00471c4b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x78] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e129e4] }
	__asm { mov ecx, dword ptr [edi + 0x78] }
	__asm { push 1 }
	__asm { call dword ptr [g_00e11ed4] }
	__asm { mov eax, dword ptr [edi + 0x78] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11e50[];
extern "C" void fn_00471aa0();
extern "C" void fn_00477000();
extern "C" void fn_00478340();
extern "C" void fn_004fae20();
extern "C" void fn_006cff80();
extern "C" void fn_007d57f0();
extern "C" void fn_008e9800();
// FUNCTION: ROBLOXSTUDIO 0x00472010
extern "C" __declspec(naked) void asm_00472010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79ad8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00472052 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_004fae20 }
	__asm { mov ecx, dword ptr [esp + 0x54] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00472052: }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e11e50] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_006cff80 }
	__asm { add esp, 8 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_008e9800 }
	__asm { add esp, 0x10 }
	__asm { call fn_007d57f0 }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_00478340 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x5c], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [esp + 0x5c], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_004720bf }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004720bf: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00477000 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x74], 0 }
	__asm { call fn_00471aa0 }
	__asm { mov ecx, dword ptr [esp + 0x54] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e11e50[];
extern "C" void fn_0044d000();
extern "C" void fn_00472220();
extern "C" void fn_00477000();
extern "C" void fn_006cff80();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x00472ad0
extern "C" __declspec(naked) void asm_00472ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd79ad8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e11e50] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { call fn_006cff80 }
	__asm { add esp, 8 }
	__asm { call fn_007d5860 }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call fn_0044d000 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [esp + 0x64], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00472b50 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00472b50: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00477000 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x74], 0 }
	__asm { call fn_00472220 }
	__asm { mov ecx, dword ptr [esp + 0x5c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e1c[];
extern "C" char g_00e122f4[];
extern "C" char g_00e12310[];
extern "C" void fn_0040b6f0();
extern "C" void fn_00477000();
extern "C" void fn_00477db0();
// FUNCTION: ROBLOXSTUDIO 0x00472f50
extern "C" __declspec(naked) void asm_00472f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79113 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00473076 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp word ptr [eax + 8], 3 }
	__asm { jne L_00473076 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_0040b6f0 }
	__asm { mov dword ptr [esp + 0x6c], 0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov byte ptr [esp + 7], 0 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00472fbc }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00472fbc: }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x70], 1 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x13] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11e1c] }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x6c], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp byte ptr [esp + 7], 0 }
	__asm { je L_00473057 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call dword ptr [g_00e12310] }
	__asm { test al, al }
	__asm { je L_00473057 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call fn_00477db0 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x6c], 4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov byte ptr [esp + 0x6c], 3 }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0047304e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [esp + 0x24] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0047304e: }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00477000 }
	__asm { L_00473057: }
	__asm { mov byte ptr [esp + 0x6c], 0 }
	__asm { mov esi, dword ptr [g_00e122f4] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call esi }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x6c], 0xffffffff }
	__asm { call esi }
	__asm { L_00473076: }
	__asm { mov ecx, dword ptr [esp + 0x64] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e14[];
extern "C" void fn_004761b0();
// FUNCTION: ROBLOXSTUDIO 0x00473fe0
extern "C" __declspec(naked) void asm_00473fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78c94 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_004761b0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { push 0x78 }
	__asm { mov dword ptr [esi], 0x1010f2c }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0047406b }
	__asm { push 0x100a8dc }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ebx, 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004761b0 }
	__asm { mov dword ptr [edi], 0x1011364 }
	__asm { jmp L_0047406d }
	__asm { L_0047406b: }
	__asm { xor edi, edi }
	__asm { L_0047406d: }
	__asm { mov dword ptr [esi + 0x78], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_00474088 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { and ebx, 0xfffffffe }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00474088: }
	__asm { push dword ptr [esi + 0x78] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e14] }
	__asm { push 0x78 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_004740d7 }
	__asm { push 0x100a8e4 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { or ebx, 2 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004761b0 }
	__asm { mov dword ptr [edi], 0x10114cc }
	__asm { jmp L_004740d9 }
	__asm { L_004740d7: }
	__asm { xor edi, edi }
	__asm { L_004740d9: }
	__asm { mov dword ptr [esi + 0x7c], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 2 }
	__asm { je L_004740f1 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004740f1: }
	__asm { push dword ptr [esi + 0x7c] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10ce8[];
extern "C" char g_00e10ff8[];
extern "C" char g_00e11030[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_0044aea0();
extern "C" void fn_00477920();
// FUNCTION: ROBLOXSTUDIO 0x00474220
extern "C" __declspec(naked) void asm_00474220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79225 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_0044aea0 }
	__asm { mov byte ptr [ebp - 0x12], 0x20 }
	__asm { push dword ptr [ebp - 0x12] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11030] }
	__asm { mov byte ptr [ebp - 0x16], 0x20 }
	__asm { push dword ptr [ebp - 0x16] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { call dword ptr [g_00e11030] }
	__asm { fld dword ptr [ebp - 0x30] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00477920 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push 0x1010c54 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ff8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10ce8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044aea0();
extern "C" void fn_0044cdf0();
extern "C" void fn_004780f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d54e0();
// FUNCTION: ROBLOXSTUDIO 0x004747d0
extern "C" __declspec(naked) void asm_004747d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79a63 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xa0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_0044aea0 }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp qword ptr [ebp - 0x20] }
	__asm { call fn_007d54e0 }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_004780f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x78] }
	__asm { lea edx, [ebp - 0x64] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { test eax, eax }
	__asm { je L_00474844 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00474844: }
	__asm { movsx eax, word ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0xa8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { call fn_0044cdf0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x7c] }
	__asm { lea edx, [ebp - 0xa8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0xa4] }
	__asm { test eax, eax }
	__asm { je L_0047489b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0xa0] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0047489b: }
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
extern "C" char g_00e11e14[];
extern "C" void fn_00473fe0();
extern "C" void fn_004760e0();
// FUNCTION: ROBLOXSTUDIO 0x004748b0
extern "C" __declspec(naked) void asm_004748b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78cf4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_004760e0 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { push 0x88 }
	__asm { mov dword ptr [esi], 0x1010ecc }
	__asm { mov dword ptr [esi + 0x80], 0xffffffff }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00474938 }
	__asm { push 0x100a870 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ebx, 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00473fe0 }
	__asm { jmp L_0047493a }
	__asm { L_00474938: }
	__asm { xor eax, eax }
	__asm { L_0047493a: }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_00474955 }
	__asm { lea ecx, [ebp + 8] }
	__asm { and ebx, 0xfffffffe }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00474955: }
	__asm { push dword ptr [esi + 0x78] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e14] }
	__asm { push 0x88 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_004749a3 }
	__asm { push 0x100a874 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { or ebx, 2 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00473fe0 }
	__asm { jmp L_004749a5 }
	__asm { L_004749a3: }
	__asm { xor eax, eax }
	__asm { L_004749a5: }
	__asm { mov dword ptr [esi + 0x7c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 2 }
	__asm { je L_004749bd }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004749bd: }
	__asm { push dword ptr [esi + 0x7c] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b1b4[];
extern "C" char g_0131b1b8[];
extern "C" char g_0131b1bc[];
extern "C" char g_0131b1c0[];
extern "C" void fn_0044afa0();
extern "C" void fn_007d5a90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00475170
extern "C" __declspec(naked) void asm_00475170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79ad8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { lea eax, [esp] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { call fn_0044afa0 }
	__asm { xor esi, esi }
	__asm { L_004751a1: }
	__asm { mov eax, esi }
	__asm { lea edi, [esp + 0xc] }
	__asm { dec eax }
	__asm { jne L_004751ae }
	__asm { lea edi, [esp + 0x14] }
	__asm { L_004751ae: }
	__asm { call fn_007d5a90 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esp + 0x28], eax }
	__asm { mov eax, dword ptr [g_0131b1c0] }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { test al, 1 }
	__asm { jne L_00475208 }
	__asm { or eax, 1 }
	__asm { push 0xddc6e0 }
	__asm { mov dword ptr [g_0131b1c0], eax }
	__asm { mov dword ptr [g_0131b1b4], 0x12c3744 }
	__asm { mov dword ptr [g_0131b1bc], 0x44d110 }
	__asm { mov dword ptr [g_0131b1b8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00475208: }
	__asm { mov dword ptr [esp + 0x20], 0x131b1b4 }
	__asm { mov dword ptr [esp + 0x6c], 0 }
	__asm { mov ecx, dword ptr [ebx + esi*4 + 0x78] }
	__asm { lea edx, [esp + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [esp + 0x6c], 0xffffffff }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00475243 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [esp + 0x24] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00475243: }
	__asm { inc esi }
	__asm { cmp esi, 2 }
	__asm { jl L_004751a1 }
	__asm { mov ecx, dword ptr [esp + 0x64] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004772b0();
extern "C" void fn_00477eb0();
extern "C" void fn_00900760();
extern "C" void fn_00900780();
// FUNCTION: ROBLOXSTUDIO 0x00475920
extern "C" __declspec(naked) void asm_00475920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x90], 0 }
	__asm { jge L_0047596e }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_004759e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_004759e0 }
	__asm { push esi }
	__asm { call fn_004772b0 }
	__asm { test al, al }
	__asm { jne L_004759e0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea eax, [edi + 0x30] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add esi, 0x1c }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [edx + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0047596e: }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test eax, eax }
	__asm { je L_004759e0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { test ebx, ebx }
	__asm { je L_00475985 }
	__asm { lea edx, [ebx + 0x1c] }
	__asm { jmp L_00475987 }
	__asm { L_00475985: }
	__asm { xor edx, edx }
	__asm { L_00475987: }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [edi + 0x90] }
	__asm { mov esi, dword ptr [edi + eax*4 + 0x78] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_00477eb0 }
	__asm { push dword ptr [esi + 0x78] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00900760 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x78] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00900780 }
	__asm { test ebx, ebx }
	__asm { je L_004759cd }
	__asm { add ebx, 0x1c }
	__asm { jmp L_004759cf }
	__asm { L_004759cd: }
	__asm { xor ebx, ebx }
	__asm { L_004759cf: }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop ebx }
	__asm { L_004759e0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e129c4[];
extern "C" void fn_0043a460();
extern "C" void fn_004762f0();
extern "C" void fn_00476ef0();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x004760e0
extern "C" __declspec(naked) void asm_004760e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78c08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
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
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov byte ptr [esi + 0x74], 0 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00476167 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00476167: }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004762f0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 0x14] }
	__asm { call fn_00476ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e129c8[];
// FUNCTION: ROBLOXSTUDIO 0x00476250
extern "C" __declspec(naked) void asm_00476250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78da4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x1010d44 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { test ecx, ecx }
	__asm { je L_00476290 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00476290: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { cmp ecx, dword ptr [edi + 0x20] }
	__asm { je L_004762c0 }
	__asm { push esi }
	__asm { L_004762b0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0x20] }
	__asm { jne L_004762b0 }
	__asm { pop esi }
	__asm { L_004762c0: }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e129c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11018[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e10[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00476c20();
// FUNCTION: ROBLOXSTUDIO 0x00476b60
extern "C" __declspec(naked) void asm_00476b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78e1a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [eax + 8], ebx }
	__asm { je L_00476bc3 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { mov ebx, 1 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call dword ptr [g_00e11018] }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [eax], cl }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { cmovne ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00476bc7 }
	__asm { L_00476bc3: }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { L_00476bc7: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_00476bdc }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00476bdc: }
	__asm { cmp byte ptr [ebp + 0xb], 0 }
	__asm { je L_00476bf1 }
	__asm { mov ecx, esi }
	__asm { call fn_00476c20 }
	__asm { test al, al }
	__asm { je L_00476bf1 }
	__asm { mov bl, 1 }
	__asm { jmp L_00476bf3 }
	__asm { L_00476bf1: }
	__asm { xor bl, bl }
	__asm { L_00476bf3: }
	__asm { test bl, bl }
	__asm { sete cl }
	__asm { movzx ecx, cl }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00476c20
extern "C" __declspec(naked) void asm_00476c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { cmp dword ptr [edx + 0x48], 0 }
	__asm { jne L_00476c33 }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00476c33: }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { cmp eax, ecx }
	__asm { je L_00476c77 }
	__asm { mov ebx, dword ptr [edx + 0x44] }
	__asm { L_00476c46: }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov esi, ebx }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_00476c71 }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { L_00476c54: }
	__asm { cmp dword ptr [edx + 0x10], edi }
	__asm { jae L_00476c5e }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_00476c62 }
	__asm { L_00476c5e: }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_00476c62: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_00476c54 }
	__asm { cmp esi, ebx }
	__asm { je L_00476c71 }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { jae L_00476c81 }
	__asm { L_00476c71: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, ecx }
	__asm { jne L_00476c46 }
	__asm { L_00476c77: }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00476c81: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00476e00
extern "C" __declspec(naked) void asm_00476e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { lea esi, [ebx + 0x34] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { cmp edi, esi }
	__asm { je L_00476e61 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00476e47 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00476e47: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00476e61 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00476e61: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x38] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00478620();
// FUNCTION: ROBLOXSTUDIO 0x00476f70
extern "C" __declspec(naked) void asm_00476f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 0x44 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { je L_00476ff8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x20] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, edi }
	__asm { je L_00476ff6 }
	__asm { push ebx }
	__asm { L_00476f91: }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00476fb5 }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { L_00476fa1: }
	__asm { cmp dword ptr [eax + 0x10], ebx }
	__asm { jae L_00476fab }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00476faf }
	__asm { L_00476fab: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00476faf: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00476fa1 }
	__asm { L_00476fb5: }
	__asm { cmp ecx, edx }
	__asm { je L_00476fc9 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jb L_00476fc9 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { lea ecx, [ebp - 4] }
	__asm { jmp L_00476fcf }
	__asm { L_00476fc9: }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00476fcf: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp ecx, edx }
	__asm { je L_00476fec }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { call fn_00478620 }
	__asm { L_00476fec: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp esi, edi }
	__asm { jne L_00476f91 }
	__asm { pop ebx }
	__asm { L_00476ff6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00476ff8: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11e04[];
extern "C" char g_00e11e08[];
extern "C" char g_00e121f8[];
extern "C" char g_00e12cb0[];
// FUNCTION: ROBLOXSTUDIO 0x004771d0
extern "C" __declspec(naked) void asm_004771d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11e08] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12cb0] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11e04] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ebx, dword ptr [g_00e121f8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call ebx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { sub eax, dword ptr [ebp - 0x2c] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { add ecx, edx }
	__asm { inc eax }
	__asm { cmp ecx, eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { jg L_00477252 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { jmp L_00477257 }
	__asm { L_00477252: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { sub eax, edx }
	__asm { L_00477257: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call ebx }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { mov ecx, eax }
	__asm { lea ebx, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { cmovge edx, ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp esi, dword ptr [edx] }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { sub ecx, 0x12 }
	__asm { mov dword ptr [edi], ecx }
	__asm { add dword ptr [edi + 4], 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041f450();
extern "C" void fn_00478770();
// FUNCTION: ROBLOXSTUDIO 0x00477d20
extern "C" __declspec(naked) void asm_00477d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { je L_00477da7 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { je L_00477d45 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_00477d45: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { lea edi, [ecx + eax*4] }
	__asm { je L_00477d5e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_00477d5e: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 5 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_00477d7d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_00477d7d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, 5 }
	__asm { push ecx }
	__asm { mov esi, esp }
	__asm { push ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov edx, esp }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [edx], eax }
	__asm { call fn_00478770 }
	__asm { add esp, 0xc }
	__asm { L_00477da7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00478b50();
extern "C" void fn_007d2b10();
// FUNCTION: ROBLOXSTUDIO 0x00477eb0
extern "C" __declspec(naked) void asm_00477eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c6c60 }
	__asm { je L_00477f56 }
	__asm { push eax }
	__asm { mov ecx, 0x12c6c60 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00477f56 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00477f0d }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00477f0d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b10 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi], eax }
	__asm { test ecx, ecx }
	__asm { je L_00477f43 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00477f43: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00477f56: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_00478b50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f78[];
extern "C" char g_00e10f7c[];
extern "C" char g_00e11108[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004782a0
extern "C" __declspec(naked) void asm_004782a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79521 }
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
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004782f9 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_004782f9: }
	__asm { add esi, 4 }
	__asm { je L_00478305 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00478305: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f78] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10508[];
extern "C" void fn_00478700();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00478620
extern "C" __declspec(naked) void asm_00478620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78a10 }
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
	__asm { L_00478653: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_004786e5 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push esi }
	__asm { call fn_00478700 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00478688 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00478688: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00478653 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp esi, eax }
	__asm { je L_004786dc }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { L_004786b1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { cmp edx, dword ptr [edi] }
	__asm { je L_004786d6 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push edx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { call ebx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_004786d6: }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, eax }
	__asm { jne L_004786b1 }
	__asm { L_004786dc: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_004786e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e11100[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c98[];
extern "C" char g_00e12378[];
extern "C" char g_00e12c80[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_004f3790();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00479b20
extern "C" __declspec(naked) void asm_00479b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79ed9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test esi, esi }
	__asm { je L_00479c1a }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11c98] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00479c0a }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c80] }
	__asm { mov ecx, dword ptr [g_01320164] }
	__asm { mov edi, eax }
	__asm { test cl, 1 }
	__asm { jne L_00479b9d }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_01320164], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00479b9d: }
	__asm { test edi, edi }
	__asm { je L_00479bd0 }
	__asm { cmp edi, dword ptr [g_01320184] }
	__asm { je L_00479bd0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11c98] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00479bd0: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00479bfe }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_004f3790 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00479bfe: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12378] }
	__asm { L_00479c0a: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00479c1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11024[];
extern "C" char g_00e11cf4[];
extern "C" void fn_0047a5c0();
extern "C" void fn_0047a740();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0047a220
extern "C" __declspec(naked) void asm_0047a220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79c1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0047a2c2 }
	__asm { sub esp, 8 }
	__asm { call fn_0047a5c0 }
	__asm { push 0xc }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0047a29a }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11cf4] }
	__asm { mov dword ptr [esi], 0x1011954 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0047a29a: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_0047a2c2: }
	__asm { call dword ptr [g_00e11024] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { call fn_0047a740 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11cf4[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0047a8d0
extern "C" __declspec(naked) void asm_0047a8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79e1c }
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
	__asm { L_0047a8fe: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_0047a973 }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0047a93c }
	__asm { push dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11cf4] }
	__asm { mov dword ptr [esi], 0x1011954 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0047a8fe }
	__asm { L_0047a93c: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0047a8fe }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_0047a96a }
	__asm { L_0047a956: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_0047a966 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0047a966: }
	__asm { cmp esi, edi }
	__asm { jne L_0047a956 }
	__asm { L_0047a96a: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0047a973: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
