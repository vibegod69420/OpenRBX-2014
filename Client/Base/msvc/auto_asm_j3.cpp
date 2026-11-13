// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0131eb88[];
extern "C" char g_0131ebb0[];
extern "C" char g_0131ebb4[];
extern "C" void fn_0044e5f0();
extern "C" void fn_0044e920();
extern "C" void fn_0044ff90();
extern "C" void fn_004500c0();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00450270
extern "C" __declspec(naked) void asm_00450270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { call fn_004500c0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_004502ed }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004502c5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004502c5: }
	__asm { mov ecx, dword ptr [g_0131ebb0] }
	__asm { push esi }
	__asm { call fn_0044ff90 }
	__asm { test al, al }
	__asm { je L_004502ed }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e5f0 }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e920 }
	__asm { L_004502ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12214[];
extern "C" char g_00e12274[];
extern "C" void fn_00450980();
extern "C" void fn_004a4c30();
extern "C" void fn_004a5d70();
// FUNCTION: ROBLOXSTUDIO 0x00450800
extern "C" __declspec(naked) void asm_00450800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { call dword ptr [g_00e12274] }
	__asm { test al, al }
	__asm { je L_00450855 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e12214] }
	__asm { call ebx }
	__asm { cmp eax, -1 }
	__asm { je L_00450854 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { call ebx }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { jge L_00450854 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { call ebx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00450980 }
	__asm { push dword ptr [eax] }
	__asm { call fn_004a4c30 }
	__asm { mov ecx, eax }
	__asm { call fn_004a5d70 }
	__asm { L_00450854: }
	__asm { pop ebx }
	__asm { L_00450855: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00409860();
// FUNCTION: ROBLOXSTUDIO 0x00450d90
extern "C" __declspec(naked) void asm_00450d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75924 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [edi], 0x100bc10 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00450e0a }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0x100bc30 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00450e0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e101ec[];
extern "C" char g_00e101f0[];
extern "C" char g_00e101f4[];
extern "C" char g_00e101f8[];
extern "C" char g_00e101fc[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004510b0
extern "C" __declspec(naked) void asm_004510b0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00451129 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { mov byte ptr [edi + 0x8020], 1 }
	__asm { call dword ptr [g_00e101f0] }
	__asm { push 0 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x801c] }
	__asm { lea eax, [edi + 0x18] }
	__asm { push 0 }
	__asm { push 0x8000 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e101ec] }
	__asm { cmp dword ptr [edi], 0x103 }
	__asm { jne L_004510f8 }
	__asm { push 1 }
	__asm { push 5 }
	__asm { call dword ptr [g_00e101f4] }
	__asm { L_004510f8: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call dword ptr [g_00e10194] }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e10194] }
	__asm { push dword ptr [edi + 0x802c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push edi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101f8] }
	__asm { L_00451129: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e1219c[];
extern "C" char g_00e12590[];
extern "C" char g_00e12794[];
extern "C" void fn_00454020();
// FUNCTION: ROBLOXSTUDIO 0x004518e0
extern "C" __declspec(naked) void asm_004518e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12590] }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00451968 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0045195d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0045194b }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea edx, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1219c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { jmp L_0045195d }
	__asm { L_0045194b: }
	__asm { call fn_00454020 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { call dword ptr [g_00e1219c] }
	__asm { L_0045195d: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push 7 }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_00451968: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131dffc[];
extern "C" void fn_00454080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00454020
extern "C" __declspec(naked) void asm_00454020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd760ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00454063 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00454063: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e000 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12690[];
// FUNCTION: ROBLOXSTUDIO 0x00454250
extern "C" __declspec(naked) void asm_00454250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { test esi, esi }
	__asm { jg L_004542a3 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { test esi, esi }
	__asm { jg L_004542a3 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004542a3: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004580c0();
extern "C" void fn_00458550();
// FUNCTION: ROBLOXSTUDIO 0x00454460
extern "C" __declspec(naked) void asm_00454460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { jne L_004544c5 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, 0x12bfd80 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00454496 }
	__asm { push 0x30 }
	__asm { push 0x100cf88 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00454496: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_004544be }
	__asm { dec eax }
	__asm { jne L_004544c5 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00458550 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_004544c5 }
	__asm { mov dword ptr [ecx], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004544be: }
	__asm { mov ecx, edi }
	__asm { call fn_004580c0 }
	__asm { L_004544c5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00503fd0();
extern "C" void fn_00504080();
// FUNCTION: ROBLOXSTUDIO 0x00454e00
extern "C" __declspec(naked) void asm_00454e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00454e50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfdc0 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00454e35 }
	__asm { push 0xff }
	__asm { push 0x100cfd8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00454e35: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00454e52 }
	__asm { dec eax }
	__asm { jne L_00454e4f }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00504080 }
	__asm { L_00454e4f: }
	__asm { pop esi }
	__asm { L_00454e50: }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00454e52: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00503fd0 }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e010[];
extern "C" char g_0131e014[];
extern "C" void fn_00455440();
// FUNCTION: ROBLOXSTUDIO 0x004555b0
extern "C" __declspec(naked) void asm_004555b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7701a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e010] }
	__asm { test al, 1 }
	__asm { jne L_00455627 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e010], eax }
	__asm { push 0x4c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00455612 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00455440 }
	__asm { mov dword ptr [g_0131e014], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00455612: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131e014], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00455627: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e014] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11008[];
extern "C" void fn_0045a910();
// FUNCTION: ROBLOXSTUDIO 0x004588c0
extern "C" __declspec(naked) void asm_004588c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_004588da }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp edi, edx }
	__asm { jl L_004588f7 }
	__asm { L_004588da: }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004588f7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0045890a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0045a910 }
	__asm { L_0045890a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x14] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e5bae8[];
extern "C" char g_0131b374[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0045a890
extern "C" __declspec(naked) void asm_0045a890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd769ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b374] }
	__asm { test al, 1 }
	__asm { jne L_0045a8fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e5bae8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0045a8fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b248 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" void fn_0040c260();
extern "C" void fn_00457090();
extern "C" void fn_004595f0();
extern "C" void fn_0045bca0();
// FUNCTION: ROBLOXSTUDIO 0x0045b870
extern "C" __declspec(naked) void asm_0045b870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76350 }
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
	__asm { jne L_0045b8c1 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_004595f0 }
	__asm { call fn_0045bca0 }
	__asm { mov bl, 1 }
	__asm { jmp L_0045b8c3 }
	__asm { L_0045b8c1: }
	__asm { xor bl, bl }
	__asm { L_0045b8c3: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x30], eax }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00457090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11110[];
extern "C" void fn_00457090();
extern "C" void fn_004595f0();
// FUNCTION: ROBLOXSTUDIO 0x0045bca0
extern "C" __declspec(naked) void asm_0045bca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7624c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0045bce5 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_004595f0 }
	__asm { mov ecx, eax }
	__asm { jmp L_0045bce7 }
	__asm { L_0045bce5: }
	__asm { xor ecx, ecx }
	__asm { L_0045bce7: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x30], eax }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00457090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_0131b380[];
extern "C" char g_0131b384[];
extern "C" char g_0131b388[];
extern "C" char g_0131b38c[];
extern "C" char g_0131b390[];
extern "C" char g_0131b394[];
extern "C" char g_0131b398[];
extern "C" void fn_00409860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0045be70
extern "C" __declspec(naked) void asm_0045be70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7723e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b398] }
	__asm { test al, 1 }
	__asm { jne L_0045beb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b398], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_0045bec0 }
	__asm { push 0xddc760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0045beb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045bec0: }
	__asm { mov dword ptr [g_0131b380], 0 }
	__asm { mov dword ptr [g_0131b384], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [g_0131b380], eax }
	__asm { mov dword ptr [g_0131b388], 0 }
	__asm { mov dword ptr [g_0131b38c], 0 }
	__asm { mov dword ptr [g_0131b390], 0 }
	__asm { mov dword ptr [g_0131b394], 0 }
	__asm { mov eax, 0x131b380 }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0045c430
extern "C" __declspec(naked) void asm_0045c430()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { test edi, edi }
	__asm { je L_0045c46c }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0045c466 }
	__asm { test al, 1 }
	__asm { jne L_0045c460 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0045c460 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0045c460: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_0045c466: }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0045c46c: }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_0045c47a }
	__asm { push dword ptr [esi + 4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0045c47a: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e101c8[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0045c600
extern "C" __declspec(naked) void asm_0045c600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0x100df50 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call dword ptr [g_00e101c8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_0045c64b }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0045c64b: }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_0045c651: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0045c651 }
	__asm { sub ecx, ebx }
	__asm { pop ebx }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1022c[];
extern "C" char g_00e1053c[];
extern "C" char g_0121035f[];
extern "C" char g_01316460[];
extern "C" void fn_005741f0();
extern "C" void fn_005745a0();
// FUNCTION: ROBLOXSTUDIO 0x0045c7f0
extern "C" __declspec(naked) void asm_0045c7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd774c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0x4e40000 }
	__asm { mov eax, 0x4e4 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov al, byte ptr [g_0121035f] }
	__asm { test al, al }
	__asm { je L_0045c865 }
	__asm { push dword ptr [g_01316460] }
	__asm { movzx eax, al }
	__asm { push 0x100dc30 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { L_0045c865: }
	__asm { push dword ptr [g_01316460] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_005741f0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_005745a0 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { test eax, eax }
	__asm { je L_0045c894 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1053c] }
	__asm { add esp, 4 }
	__asm { L_0045c894: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10264[];
extern "C" void fn_004034a0();
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0045ca00
extern "C" __declspec(naked) void asm_0045ca00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75949 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea eax, [ecx + 0x40] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 0x10], 8 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jae L_0045ca6a }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_0045ca6a: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], 8 }
	__asm { jb L_0045ca7b }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0045ca7d }
	__asm { L_0045ca7b: }
	__asm { mov eax, esi }
	__asm { L_0045ca7d: }
	__asm { push 3 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { call fn_004034a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e13010[];
extern "C" char g_01318f65[];
extern "C" char g_0131e020[];
extern "C" char g_0131e024[];
extern "C" void fn_0042c600();
extern "C" void fn_0045e600();
extern "C" void fn_00c374f0();
// FUNCTION: ROBLOXSTUDIO 0x0045d410
extern "C" __declspec(naked) void asm_0045d410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, 0x100dca8 }
	__asm { mov ecx, 4 }
	__asm { call fn_0045e600 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c374f0 }
	__asm { mov ecx, dword ptr [g_0131e020] }
	__asm { mov esi, eax }
	__asm { test cl, 1 }
	__asm { jne L_0045d45a }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131e020], ecx }
	__asm { mov cl, byte ptr [g_01318f65] }
	__asm { mov byte ptr [g_0131e024], cl }
	__asm { jmp L_0045d460 }
	__asm { L_0045d45a: }
	__asm { mov cl, byte ptr [g_0131e024] }
	__asm { L_0045d460: }
	__asm { test cl, cl }
	__asm { jne L_0045d484 }
	__asm { cmp byte ptr [ebp + 0xc], cl }
	__asm { jne L_0045d484 }
	__asm { push 0 }
	__asm { push 0x100dcc4 }
	__asm { push 0x100dcd8 }
	__asm { push 0 }
	__asm { mov byte ptr [g_0131e024], 1 }
	__asm { call dword ptr [g_00e13010] }
	__asm { L_0045d484: }
	__asm { mov edx, 0x100dd20 }
	__asm { mov ecx, 4 }
	__asm { call fn_0045e600 }
	__asm { mov edx, 0x100dd38 }
	__asm { mov ecx, 4 }
	__asm { call fn_0045e600 }
	__asm { call fn_0042c600 }
	__asm { mov edx, 0x100dd54 }
	__asm { mov ecx, 4 }
	__asm { call fn_0045e600 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131a21c[];
extern "C" char g_0131e028[];
extern "C" char g_0131e02c[];
extern "C" void fn_00403160();
extern "C" void fn_0045f2f0();
extern "C" void fn_0045f580();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0045e750
extern "C" __declspec(naked) void asm_0045e750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7776e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e028] }
	__asm { test al, 1 }
	__asm { jne L_0045e7bb }
	__asm { or eax, 1 }
	__asm { push esi }
	__asm { mov dword ptr [g_0131e028], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0045f2f0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, 0x131e030 }
	__asm { mov dword ptr [g_0131e02c], esi }
	__asm { call fn_0045f580 }
	__asm { push esi }
	__asm { push esi }
	__asm { push 0x131e02c }
	__asm { call fn_00403160 }
	__asm { push 0xddc840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { L_0045e7bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_0131a21c], 0x131e02c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
// FUNCTION: ROBLOXSTUDIO 0x0045f2f0
extern "C" __declspec(naked) void asm_0045f2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77268 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { test eax, eax }
	__asm { jne L_0045f34d }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe1815c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_0045f34d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x100dec4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1059c[];
extern "C" char g_00e105a0[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0045f3a0
extern "C" __declspec(naked) void asm_0045f3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_0045f407 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e1059c] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { js L_0045f411 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, esi }
	__asm { or ecx, eax }
	__asm { jge L_0045f3dd }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ea80 }
	__asm { L_0045f3dd: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 1] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e105a0] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x10 }
	__asm { cmp esi, dword ptr [eax - 8] }
	__asm { jg L_0045f407 }
	__asm { mov dword ptr [eax - 0xc], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0045f407: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
	__asm { L_0045f411: }
	__asm { push 0x80004005 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e10260[];
// FUNCTION: ROBLOXSTUDIO 0x0045f420
extern "C" __declspec(naked) void asm_0045f420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_0045f453 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov eax, 0xc7ce0b }
	__asm { sub eax, edi }
	__asm { cmp eax, esi }
	__asm { jae L_0045f448 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0045f448: }
	__asm { lea eax, [edi + esi] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { sub dword ptr [edx + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0045f453: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0045f610();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0045f580
extern "C" __declspec(naked) void asm_0045f580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77250 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0045f5d9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x100deac }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0045f5db }
	__asm { L_0045f5d9: }
	__asm { xor eax, eax }
	__asm { L_0045f5db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0045f610 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_0045f9c0();
// FUNCTION: ROBLOXSTUDIO 0x0045fac0
extern "C" __declspec(naked) void asm_0045fac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0045fb29 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_0045f9c0 }
	__asm { test eax, eax }
	__asm { je L_0045fb29 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045fb29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0045fdb0
extern "C" __declspec(naked) void asm_0045fdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77348 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0045fdf0 }
	__asm { add edi, 0xc }
	__asm { jmp L_0045fdf2 }
	__asm { L_0045fdf0: }
	__asm { xor edi, edi }
	__asm { L_0045fdf2: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0045fe08 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0045fe08: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3cb1c }
	__asm { mov dword ptr [esi + 0xc], 0xe3cb28 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
// FUNCTION: ROBLOXSTUDIO 0x0045ff20
extern "C" __declspec(naked) void asm_0045ff20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77558 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { test eax, eax }
	__asm { jne L_0045ff7e }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe1815c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_0045ff7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11fe0[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00460e70
extern "C" __declspec(naked) void asm_00460e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd778dc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x100e334 }
	__asm { mov dword ptr [edi + 8], 0x100e318 }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9e50 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006b9e50 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00460ed4 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00460ed4: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11fe0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e12090[];
extern "C" char g_00e12694[];
// FUNCTION: ROBLOXSTUDIO 0x00461230
extern "C" __declspec(naked) void asm_00461230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edi, ecx }
	__asm { cmp eax, 0x1000005 }
	__asm { je L_0046124e }
	__asm { cmp eax, 0x1000004 }
	__asm { jne L_00461292 }
	__asm { L_0046124e: }
	__asm { call dword ptr [g_00e12694] }
	__asm { test eax, eax }
	__asm { je L_00461292 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12694] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfea8 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00461292: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12090] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_004637b0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00463750
extern "C" __declspec(naked) void asm_00463750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_004637a1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00463771 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00463773 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00463773 }
	__asm { L_00463771: }
	__asm { mov eax, ecx }
	__asm { L_00463773: }
	__asm { test eax, eax }
	__asm { je L_004637a1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_004637a1 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_004637a1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004637a1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_004637b0 }
	__asm { L_004637a1: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b3a4[];
extern "C" char g_0131b3a8[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00463be0
extern "C" __declspec(naked) void asm_00463be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77cae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b3a8] }
	__asm { test al, 1 }
	__asm { jne L_00463c1a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3a8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131b3a4], eax }
	__asm { L_00463c1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00463c30
extern "C" __declspec(naked) void asm_00463c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77c70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00463c89 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3621c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00463c8b }
	__asm { L_00463c89: }
	__asm { xor eax, eax }
	__asm { L_00463c8b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131b3b4[];
extern "C" char g_0131b3b8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00463cc0
extern "C" __declspec(naked) void asm_00463cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77c8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b3b4] }
	__asm { test al, 1 }
	__asm { jne L_00463d02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3b4], eax }
	__asm { push 0xe74090 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3b8], eax }
	__asm { L_00463d02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74090[];
extern "C" char g_0131b3b4[];
extern "C" char g_0131b3b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00463d10
extern "C" __declspec(naked) void asm_00463d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77c8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e74090], 0 }
	__asm { jne L_00463d45 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00463d45: }
	__asm { push 0x463cc0 }
	__asm { push 0x131b3bc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b3b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00463d8f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3b4], eax }
	__asm { push 0xe74090 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00463d8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b3b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00463db0
extern "C" __declspec(naked) void asm_00463db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00463dfa }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00463dd0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00463dd2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00463dd2 }
	__asm { L_00463dd0: }
	__asm { mov eax, ecx }
	__asm { L_00463dd2: }
	__asm { test eax, eax }
	__asm { je L_00463dfa }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00463dfa }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00463dfa }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00463dfc }
	__asm { L_00463dfa: }
	__asm { xor eax, eax }
	__asm { L_00463dfc: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b3d8[];
extern "C" void fn_004021e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00463ea0
extern "C" __declspec(naked) void asm_00463ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c5ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b3d8] }
	__asm { test al, 1 }
	__asm { jne L_00463ee3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3d8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004021e0 }
	__asm { push 0xddc850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00463ee3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b3c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x00464dd0
extern "C" __declspec(naked) void asm_00464dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00464e28 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00464e15 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00464e15: }
	__asm { mov eax, 0x100efa0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00464e28: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00465c60();
extern "C" void fn_008fe5c0();
// FUNCTION: ROBLOXSTUDIO 0x00464e40
extern "C" __declspec(naked) void asm_00464e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00464e8f }
	__asm { mov ecx, eax }
	__asm { call fn_008fe5c0 }
	__asm { mov esi, eax }
	__asm { jmp L_00464e91 }
	__asm { L_00464e8f: }
	__asm { xor esi, esi }
	__asm { L_00464e91: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00465c60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00464ec2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00464ec2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00464ec2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00465cf0();
extern "C" void fn_008fe6e0();
// FUNCTION: ROBLOXSTUDIO 0x00464ee0
extern "C" __declspec(naked) void asm_00464ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00464f2c }
	__asm { mov ecx, eax }
	__asm { call fn_008fe6e0 }
	__asm { mov esi, eax }
	__asm { jmp L_00464f2e }
	__asm { L_00464f2c: }
	__asm { xor esi, esi }
	__asm { L_00464f2e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00465cf0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00464f5f }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00464f5f }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00464f5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74ba4[];
extern "C" char g_0131b3ec[];
extern "C" char g_0131b3f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00465020
extern "C" __declspec(naked) void asm_00465020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e74ba4], 0 }
	__asm { jne L_00465054 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00465054: }
	__asm { push 0x465b70 }
	__asm { push 0x131b404 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b3f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0046509e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3f0], eax }
	__asm { push 0xe74ba4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046509e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b3ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74ba0[];
extern "C" char g_0131b3e4[];
extern "C" char g_0131b3e8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004650c0
extern "C" __declspec(naked) void asm_004650c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd77f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e74ba0], 0 }
	__asm { jne L_004650f4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004650f4: }
	__asm { push 0x465bc0 }
	__asm { push 0x131b3fc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b3e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0046513e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3e8], eax }
	__asm { push 0xe74ba0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046513e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b3e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00465c60
extern "C" __declspec(naked) void asm_00465c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77ef0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00465cb9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af38 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00465cbb }
	__asm { L_00465cb9: }
	__asm { xor eax, eax }
	__asm { L_00465cbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00465cf0
extern "C" __declspec(naked) void asm_00465cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00465d49 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5af50 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00465d4b }
	__asm { L_00465d49: }
	__asm { xor eax, eax }
	__asm { L_00465d4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00465d80
extern "C" __declspec(naked) void asm_00465d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77ee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00465dd9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x100ef8c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00465ddb }
	__asm { L_00465dd9: }
	__asm { xor eax, eax }
	__asm { L_00465ddb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00465e60
extern "C" __declspec(naked) void asm_00465e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00465ea8 }
	__asm { cmp eax, 1 }
	__asm { je L_00465ea8 }
	__asm { cmp eax, 2 }
	__asm { je L_00465ebc }
	__asm { cmp eax, 3 }
	__asm { jne L_00465e97 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12c6608 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00465e97: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c6608 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00465ea8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00465ebc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00465ebc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00467de0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00467bd0
extern "C" __declspec(naked) void asm_00467bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78070 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00467c29 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x100f0b4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00467c2b }
	__asm { L_00467c29: }
	__asm { xor eax, eax }
	__asm { L_00467c2b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00467c4f }
	__asm { push ecx }
	__asm { call fn_00467de0 }
	__asm { L_00467c4f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110dc[];
extern "C" char g_00e125d0[];
extern "C" char g_00e12cec[];
extern "C" void fn_004680e0();
// FUNCTION: ROBLOXSTUDIO 0x00468040
extern "C" __declspec(naked) void asm_00468040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78464 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x100faa4 }
	__asm { mov dword ptr [esi + 8], 0x100fa88 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_004680e0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0046808e }
	__asm { call dword ptr [g_00e12cec] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e110dc] }
	__asm { L_0046808e: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_004680b4 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_004680b4: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e125d0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e040[];
extern "C" char g_0131e044[];
extern "C" void fn_00467ea0();
// FUNCTION: ROBLOXSTUDIO 0x00468120
extern "C" __declspec(naked) void asm_00468120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd786da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e040] }
	__asm { test al, 1 }
	__asm { jne L_00468197 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e040], eax }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00468182 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00467ea0 }
	__asm { mov dword ptr [g_0131e044], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00468182: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131e044], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00468197: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e044] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00413c30();
extern "C" void fn_00413eb0();
// FUNCTION: ROBLOXSTUDIO 0x004692c0
extern "C" __declspec(naked) void asm_004692c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046931f }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfdf8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_004692f2 }
	__asm { push 0x31 }
	__asm { push 0x100fb70 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_004692f2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00469315 }
	__asm { dec eax }
	__asm { je L_00469309 }
	__asm { dec eax }
	__asm { jne L_0046931e }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00413eb0 }
	__asm { L_00469309: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0xcc] }
	__asm { L_00469315: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00413c30 }
	__asm { L_0046931e: }
	__asm { pop esi }
	__asm { L_0046931f: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004479c0();
extern "C" void fn_00447e60();
// FUNCTION: ROBLOXSTUDIO 0x0046a120
extern "C" __declspec(naked) void asm_0046a120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { jne L_0046a177 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfe58 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046a159 }
	__asm { push 0x1fe }
	__asm { push 0x100fc00 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046a159: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046a170 }
	__asm { dec eax }
	__asm { jne L_0046a177 }
	__asm { mov ecx, esi }
	__asm { call fn_00447e60 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046a170: }
	__asm { mov ecx, esi }
	__asm { call fn_004479c0 }
	__asm { L_0046a177: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004703c0();
extern "C" void fn_00470410();
extern "C" void fn_00470470();
// FUNCTION: ROBLOXSTUDIO 0x0046ad60
extern "C" __declspec(naked) void asm_0046ad60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046adb7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfed8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046ad92 }
	__asm { push 0x32 }
	__asm { push 0x100fe20 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046ad92: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046adb9 }
	__asm { dec eax }
	__asm { je L_0046ada9 }
	__asm { dec eax }
	__asm { jne L_0046adb6 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00470410 }
	__asm { L_0046ada9: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00470470 }
	__asm { L_0046adb6: }
	__asm { pop esi }
	__asm { L_0046adb7: }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046adb9: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_004703c0 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0049d090();
// FUNCTION: ROBLOXSTUDIO 0x0046aed0
extern "C" __declspec(naked) void asm_0046aed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046af48 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfee8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046af05 }
	__asm { push 0x33 }
	__asm { push 0x100fe70 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046af05: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046af22 }
	__asm { dec eax }
	__asm { jne L_0046af47 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0049d090 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046af22: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfee8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0046af47: }
	__asm { pop esi }
	__asm { L_0046af48: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00417d60();
extern "C" void fn_004a5790();
extern "C" void fn_004a6140();
// FUNCTION: ROBLOXSTUDIO 0x0046b4f0
extern "C" __declspec(naked) void asm_0046b4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { jne L_0046b561 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, 0x12bff18 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046b523 }
	__asm { push 0x32 }
	__asm { push 0x100ff10 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046b523: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046b538 }
	__asm { dec eax }
	__asm { jne L_0046b561 }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_004a6140 }
	__asm { L_0046b538: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00417d60 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [eax] }
	__asm { call fn_004a5790 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0046b561 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0046b561: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004f5ce0();
// FUNCTION: ROBLOXSTUDIO 0x0046c1b0
extern "C" __declspec(naked) void asm_0046c1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046c20d }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bff98 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046c1e2 }
	__asm { push 0x33 }
	__asm { push 0x10100c8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046c1e2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046c1f9 }
	__asm { dec eax }
	__asm { je L_0046c1f9 }
	__asm { dec eax }
	__asm { jne L_0046c20c }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_004f5ce0 }
	__asm { L_0046c1f9: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12bff98 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0046c20c: }
	__asm { pop esi }
	__asm { L_0046c20d: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004f9310();
extern "C" void fn_004f9880();
// FUNCTION: ROBLOXSTUDIO 0x0046c310
extern "C" __declspec(naked) void asm_0046c310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { jne L_0046c364 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bffa8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046c346 }
	__asm { push 0x31 }
	__asm { push 0x1010118 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046c346: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046c35d }
	__asm { dec eax }
	__asm { jne L_0046c364 }
	__asm { mov ecx, esi }
	__asm { call fn_004f9310 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046c35d: }
	__asm { mov ecx, esi }
	__asm { call fn_004f9880 }
	__asm { L_0046c364: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0053f9a0();
extern "C" void fn_0053fa80();
// FUNCTION: ROBLOXSTUDIO 0x0046c7b0
extern "C" __declspec(naked) void asm_0046c7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046c81d }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bffd8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046c7e2 }
	__asm { push 0x34 }
	__asm { push 0x10101d0 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046c7e2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046c809 }
	__asm { dec eax }
	__asm { je L_0046c7f9 }
	__asm { dec eax }
	__asm { jne L_0046c81c }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_0053f9a0 }
	__asm { L_0046c7f9: }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_0053fa80 }
	__asm { L_0046c809: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12bffd8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0046c81c: }
	__asm { pop esi }
	__asm { L_0046c81d: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00543ae0();
extern "C" void fn_005444a0();
extern "C" void fn_005445e0();
// FUNCTION: ROBLOXSTUDIO 0x0046c920
extern "C" __declspec(naked) void asm_0046c920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { jne L_0046c997 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bffe8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046c956 }
	__asm { push 0x31 }
	__asm { push 0x1010218 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046c956: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0046c990 }
	__asm { dec eax }
	__asm { je L_0046c984 }
	__asm { dec eax }
	__asm { jne L_0046c997 }
	__asm { mov byte ptr [esi + 0x7a], al }
	__asm { cmp byte ptr [esi + 0x79], al }
	__asm { je L_0046c997 }
	__asm { push dword ptr [esi + 0x9c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi + 0x98] }
	__asm { call fn_00543ae0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046c984: }
	__asm { mov ecx, esi }
	__asm { call fn_005445e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046c990: }
	__asm { mov ecx, esi }
	__asm { call fn_005444a0 }
	__asm { L_0046c997: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10d24[];
extern "C" void fn_0046dd60();
extern "C" void fn_0046e020();
extern "C" void fn_0046e0c0();
// FUNCTION: ROBLOXSTUDIO 0x0046dcf0
extern "C" __declspec(naked) void asm_0046dcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_0046dd07 }
	__asm { call fn_0046dd60 }
	__asm { L_0046dd07: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0046e020 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp edi, eax }
	__asm { jne L_0046dd3c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0046e0c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0046dd3c: }
	__asm { lea ecx, [edi - 0x14] }
	__asm { call dword ptr [g_00e10d24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10ef8[];
extern "C" char g_00e1297c[];
extern "C" char g_00e12c74[];
extern "C" char g_00e12c84[];
// FUNCTION: ROBLOXSTUDIO 0x0046e2e0
extern "C" __declspec(naked) void asm_0046e2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov esi, ecx }
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
	__asm { test al, al }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { je L_0046e32f }
	__asm { call dword ptr [eax + 0x60] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0046e32f: }
	__asm { call dword ptr [eax + 0x64] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f00[];
extern "C" char g_00e1239c[];
extern "C" char g_00e12cec[];
extern "C" void fn_004680e0();
extern "C" void fn_00468120();
// FUNCTION: ROBLOXSTUDIO 0x00470320
extern "C" __declspec(naked) void asm_00470320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788a9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x1010914 }
	__asm { mov dword ptr [edi + 8], 0x10108f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00468120 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_004680e0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0047036f }
	__asm { call dword ptr [g_00e12cec] }
	__asm { L_0047036f: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_0047037b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { L_0047037b: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_00470388 }
	__asm { call dword ptr [g_00e10f00] }
	__asm { L_00470388: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1239c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110fc[];
extern "C" void fn_0044dc00();
// FUNCTION: ROBLOXSTUDIO 0x004705a0
extern "C" __declspec(naked) void asm_004705a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { call fn_0044dc00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { lea eax, [esp + 8] }
	__asm { cmovae eax, dword ptr [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e110fc] }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_0047060a }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047060a: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0044dc00();
// FUNCTION: ROBLOXSTUDIO 0x004706c0
extern "C" __declspec(naked) void asm_004706c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_00470729 }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00470729 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_0044dc00 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea esi, [esp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [edi + 0x1c] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x28] }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_00470729 }
	__asm { push dword ptr [esp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00470729: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11ea0[];
extern "C" char g_00e12610[];
extern "C" char g_00e129e4[];
extern "C" char g_00e12b1c[];
// FUNCTION: ROBLOXSTUDIO 0x00470740
extern "C" __declspec(naked) void asm_00470740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0047078f }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12610] }
	__asm { mov dword ptr [esi], 0x1004804 }
	__asm { mov dword ptr [esi + 8], 0x10047e4 }
	__asm { jmp L_00470791 }
	__asm { L_0047078f: }
	__asm { xor esi, esi }
	__asm { L_00470791: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e129e4] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12b1c] }
	__asm { push 0x20000 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11ea0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e1219c[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004707e0
extern "C" __declspec(naked) void asm_004707e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12bf764 }
	__asm { push 0x12be8e4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, eax }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { je L_00470849 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1219c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00470849: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410c40();
extern "C" void fn_00478050();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00470bb0
extern "C" __declspec(naked) void asm_00470bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79ad8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_00410c40 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00478050 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_00470c00 }
	__asm { add edx, 0x1c }
	__asm { jmp L_00470c02 }
	__asm { L_00470c00: }
	__asm { xor edx, edx }
	__asm { L_00470c02: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea esi, [ebp - 0x54] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00470c2a }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00470c2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12988[];
// FUNCTION: ROBLOXSTUDIO 0x00470c40
extern "C" __declspec(naked) void asm_00470c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { jne L_00470c52 }
	__asm { xor edi, edi }
	__asm { jmp L_00470c7e }
	__asm { L_00470c52: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00470c5e }
	__asm { lea edx, [eax + 0x1c] }
	__asm { jmp L_00470c60 }
	__asm { L_00470c5e: }
	__asm { xor edx, edx }
	__asm { L_00470c60: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00470c6c }
	__asm { lea edi, [eax + 0x1c] }
	__asm { jmp L_00470c6e }
	__asm { L_00470c6c: }
	__asm { xor edi, edi }
	__asm { L_00470c6e: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push edi }
	__asm { call eax }
	__asm { movzx edi, al }
	__asm { test al, al }
	__asm { jne L_00470c99 }
	__asm { L_00470c7e: }
	__asm { lea ecx, [esi + 0x80] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x84], 0xffffffff }
	__asm { call dword ptr [g_00e12988] }
	__asm { L_00470c99: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e125b4[];
extern "C" void fn_00476250();
// FUNCTION: ROBLOXSTUDIO 0x00470cf0
extern "C" __declspec(naked) void asm_00470cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78dd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [g_00e125b4] }
	__asm { lea ecx, [edi + 0x80] }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { lea ecx, [edi + 0x78] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00476250 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00470d55 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00470d55: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11e90[];
extern "C" char g_00e11e94[];
extern "C" char g_00e11e98[];
extern "C" char g_00e11e9c[];
extern "C" char g_00e129e4[];
// FUNCTION: ROBLOXSTUDIO 0x00470da0
extern "C" __declspec(naked) void asm_00470da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00470def }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e9c] }
	__asm { mov dword ptr [esi], 0x10113e4 }
	__asm { mov dword ptr [esi + 8], 0x10113c4 }
	__asm { jmp L_00470df1 }
	__asm { L_00470def: }
	__asm { xor esi, esi }
	__asm { L_00470df1: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e129e4] }
	__asm { push 0x80000000 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e98] }
	__asm { push 0x7fffffff }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e94] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e90] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110d4[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e8c[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00470e40
extern "C" __declspec(naked) void asm_00470e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12c6eb4 }
	__asm { push 0x12be8e4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, eax }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { je L_00470eb5 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110d4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11e8c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00470eb5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10d04[];
extern "C" char g_00e11110[];
extern "C" char g_00e11e6c[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00471130
extern "C" __declspec(naked) void asm_00471130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12c6e94 }
	__asm { push 0x12be8e4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, eax }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { je L_004711a8 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10d04] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e11e6c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_004711a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004123f0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004714f0
extern "C" __declspec(naked) void asm_004714f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12bc070 }
	__asm { mov eax, ecx }
	__asm { push 0x12bc38c }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x28] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00cf67f8 }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_0047153f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_00471527 }
	__asm { lea ebx, [ecx + 0x1c] }
	__asm { jmp L_00471529 }
	__asm { L_00471527: }
	__asm { xor ebx, ebx }
	__asm { L_00471529: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { add ecx, 0x30 }
	__asm { call fn_004123f0 }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [esi + 0x44] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0047153f: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
extern "C" void fn_00476250();
// FUNCTION: ROBLOXSTUDIO 0x00473470
extern "C" __declspec(naked) void asm_00473470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78de8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00476250 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004734bd }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004734bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e12610[];
extern "C" char g_00e129e4[];
extern "C" char g_00e12b1c[];
// FUNCTION: ROBLOXSTUDIO 0x00473ca0
extern "C" __declspec(naked) void asm_00473ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00473cef }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12610] }
	__asm { mov dword ptr [esi], 0x1004804 }
	__asm { mov dword ptr [esi + 8], 0x10047e4 }
	__asm { jmp L_00473cf1 }
	__asm { L_00473cef: }
	__asm { xor esi, esi }
	__asm { L_00473cf1: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 0x10 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e129e4] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12b1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110fc[];
extern "C" void fn_00477eb0();
extern "C" void fn_008b8520();
extern "C" void fn_00900760();
// FUNCTION: ROBLOXSTUDIO 0x00475260
extern "C" __declspec(naked) void asm_00475260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79268 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00477eb0 }
	__asm { push dword ptr [esi + 0x78] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00900760 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_008b8520 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_004752be }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004752be: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e110fc] }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_004752dc }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004752dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e110fc[];
extern "C" void fn_00477eb0();
extern "C" void fn_009004f0();
// FUNCTION: ROBLOXSTUDIO 0x004759f0
extern "C" __declspec(naked) void asm_004759f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_00477eb0 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_009004f0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [esp + 0x20], 0 }
	__asm { jne L_00475a48 }
	__asm { mov eax, 0xf12f2d }
	__asm { jmp L_00475a56 }
	__asm { L_00475a48: }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { lea eax, [esp + 0x10] }
	__asm { cmovae eax, dword ptr [esp + 0x10] }
	__asm { L_00475a56: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e110fc] }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_00475a76 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00475a76: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x00476d30
extern "C" __declspec(naked) void asm_00476d30()
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
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_00476da6 }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00476da6 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [edi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edi, [ebp - 0x50] }
	__asm { push edi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { test eax, eax }
	__asm { je L_00476da6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00476da6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131cb04[];
extern "C" char g_0131cb08[];
extern "C" void fn_0040b600();
extern "C" void fn_004783b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00477db0
extern "C" __declspec(naked) void asm_00477db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd789fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131cb04] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00477e09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb04], eax }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040b600 }
	__asm { push 0xddb940 }
	__asm { mov dword ptr [g_0131cb08], 0xf148b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00477e09: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0x131cb08 }
	__asm { call fn_004783b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131cb24[];
extern "C" char g_0131cb28[];
extern "C" void fn_0040b7d0();
extern "C" void fn_00478450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00477e30
extern "C" __declspec(naked) void asm_00477e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6fb6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131cb24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00477e89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb24], eax }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040b7d0 }
	__asm { push 0xddb950 }
	__asm { mov dword ptr [g_0131cb28], 0xf148a8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00477e89: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0x131cb28 }
	__asm { call fn_00478450 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1230c[];
extern "C" char g_0131a284[];
extern "C" char g_0131a288[];
extern "C" char g_0131a28c[];
extern "C" char g_0131a290[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004783b0
extern "C" __declspec(naked) void asm_004783b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004783f1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e1230c] }
	__asm { L_004783f1: }
	__asm { mov eax, dword ptr [g_0131a290] }
	__asm { test al, 1 }
	__asm { jne L_0047842d }
	__asm { or eax, 1 }
	__asm { push 0xddc0a0 }
	__asm { mov dword ptr [g_0131a290], eax }
	__asm { mov dword ptr [g_0131a284], 0x12be060 }
	__asm { mov dword ptr [g_0131a28c], 0x40d750 }
	__asm { mov dword ptr [g_0131a288], 0x40d7a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0047842d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x131a284 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b420[];
extern "C" char g_0131b424[];
extern "C" char g_0131b428[];
extern "C" char g_0131b42c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00478500
extern "C" __declspec(naked) void asm_00478500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0047852c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0047852c: }
	__asm { mov eax, dword ptr [g_0131b42c] }
	__asm { test al, 1 }
	__asm { jne L_00478568 }
	__asm { or eax, 1 }
	__asm { push 0xddca80 }
	__asm { mov dword ptr [g_0131b42c], eax }
	__asm { mov dword ptr [g_0131b420], 0x12c372c }
	__asm { mov dword ptr [g_0131b428], 0x478740 }
	__asm { mov dword ptr [g_0131b424], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00478568: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131b420 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00478a00
extern "C" __declspec(naked) void asm_00478a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00478a49 }
	__asm { cmp eax, 1 }
	__asm { je L_00478a49 }
	__asm { cmp eax, 2 }
	__asm { je L_00478a57 }
	__asm { cmp eax, 3 }
	__asm { jne L_00478a39 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12c6bb8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00478a39: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12c6bb8 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00478a49: }
	__asm { test esi, esi }
	__asm { je L_00478a57 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00478a57: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00478a60
extern "C" __declspec(naked) void asm_00478a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00478aa9 }
	__asm { cmp eax, 1 }
	__asm { je L_00478aa9 }
	__asm { cmp eax, 2 }
	__asm { je L_00478ab7 }
	__asm { cmp eax, 3 }
	__asm { jne L_00478a99 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12c6b18 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00478a99: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12c6b18 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00478aa9: }
	__asm { test esi, esi }
	__asm { je L_00478ab7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00478ab7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00478ac0
extern "C" __declspec(naked) void asm_00478ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00478ae9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00478aee }
	__asm { L_00478ae9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00478aee: }
	__asm { cmp ecx, 0x12c6c78 }
	__asm { je L_00478b37 }
	__asm { test eax, eax }
	__asm { je L_00478afe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00478b03 }
	__asm { L_00478afe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00478b03: }
	__asm { push 0x12c6c78 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00478b37 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00478b37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00478b50
extern "C" __declspec(naked) void asm_00478b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00478b79 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00478b7e }
	__asm { L_00478b79: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00478b7e: }
	__asm { cmp ecx, 0x12c6c60 }
	__asm { je L_00478bc7 }
	__asm { test eax, eax }
	__asm { je L_00478b8e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00478b93 }
	__asm { L_00478b8e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00478b93: }
	__asm { push 0x12c6c60 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00478bc7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00478bc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11c9c[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_00479b20();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00479a60
extern "C" __declspec(naked) void asm_00479a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79bd7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00479ab0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00479ab0: }
	__asm { push dword ptr [g_01320184] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11c9c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0x1011a84 }
	__asm { mov dword ptr [esi + 8], 0x1011a64 }
	__asm { call fn_00479b20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11cf4[];
// FUNCTION: ROBLOXSTUDIO 0x0047a740
extern "C" __declspec(naked) void asm_0047a740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ccfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0047a79c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11cf4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0x1011954 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0047a79c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0047caa0
extern "C" __declspec(naked) void asm_0047caa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0047cae9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0047cae9: }
	__asm { mov ecx, dword ptr [g_01320184] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xd0] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" void fn_0042e5f0();
// FUNCTION: ROBLOXSTUDIO 0x00480230
extern "C" __declspec(naked) void asm_00480230()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi - 0x70] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi - 0x70], 0xe3ed74 }
	__asm { mov eax, dword ptr [edi - 0x70] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x70] }
	__asm { mov dword ptr [edx + edi - 0x74], eax }
	__asm { cmp dword ptr [edi - 0x10], 0 }
	__asm { mov dword ptr [edi - 0x60], 0xe3addc }
	__asm { je L_0048027b }
	__asm { mov edx, dword ptr [edi - 0x54] }
	__asm { lea eax, [edi - 0x1c] }
	__asm { cmp dword ptr [edx], eax }
	__asm { jne L_0048027b }
	__asm { mov eax, dword ptr [edi - 0x28] }
	__asm { mov ecx, dword ptr [edi - 0x24] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi - 0x44] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi - 0x34] }
	__asm { sub ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0048027b: }
	__asm { cmp byte ptr [edi - 0x14], 0 }
	__asm { je L_00480289 }
	__asm { lea ecx, [edi - 0x60] }
	__asm { call fn_0042e5f0 }
	__asm { L_00480289: }
	__asm { lea ecx, [edi - 0x60] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x58] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e10354[];
extern "C" char g_00e10550[];
extern "C" char g_0131ab88[];
extern "C" void fn_0042e480();
// FUNCTION: ROBLOXSTUDIO 0x004802a0
extern "C" __declspec(naked) void asm_004802a0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x60], 0 }
	__asm { jne L_004802af }
	__asm { xor ebx, ebx }
	__asm { jmp L_004802d4 }
	__asm { L_004802af: }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_0042e480 }
	__asm { push dword ptr [edi + 0x60] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { lea ebx, [edi + 0x10] }
	__asm { cmove ebx, ecx }
	__asm { call dword ptr [g_00e10550] }
	__asm { xor ecx, ecx }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { cmovne ebx, ecx }
	__asm { L_004802d4: }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [edi + 0x5c], 0 }
	__asm { mov byte ptr [edi + 0x55], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [edi + 0x58], eax }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { test ebx, ebx }
	__asm { jne L_0048030f }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 2 }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_0048030f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_004874a0();
// FUNCTION: ROBLOXSTUDIO 0x00481100
extern "C" __declspec(naked) void asm_00481100()
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
	__asm { sub esp, 0x34 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_004874a0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00481174 }
	__asm { test al, 1 }
	__asm { jne L_00481174 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00481174 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00481174: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_0041ace0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00481190
extern "C" __declspec(naked) void asm_00481190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_004811e1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_004811b1 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_004811b3 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_004811b3 }
	__asm { L_004811b1: }
	__asm { mov eax, ecx }
	__asm { L_004811b3: }
	__asm { test eax, eax }
	__asm { je L_004811e1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_004811e1 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_004811e1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_004811e1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_0041ace0 }
	__asm { L_004811e1: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004831d0();
extern "C" void fn_004878f0();
// FUNCTION: ROBLOXSTUDIO 0x004811f0
extern "C" __declspec(naked) void asm_004811f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a1ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { call fn_004831d0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481235 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004878f0 }
	__asm { jmp L_00481237 }
	__asm { L_00481235: }
	__asm { xor eax, eax }
	__asm { L_00481237: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { jne L_00481255 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00481255: }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004889b0();
extern "C" void fn_00900f40();
// FUNCTION: ROBLOXSTUDIO 0x00481b00
extern "C" __declspec(naked) void asm_00481b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x84 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481b4f }
	__asm { mov ecx, eax }
	__asm { call fn_00900f40 }
	__asm { mov esi, eax }
	__asm { jmp L_00481b51 }
	__asm { L_00481b4f: }
	__asm { xor esi, esi }
	__asm { L_00481b51: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004889b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481b82 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481b82 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481b82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488ad0();
extern "C" void fn_009129f0();
// FUNCTION: ROBLOXSTUDIO 0x00481c40
extern "C" __declspec(naked) void asm_00481c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481c8f }
	__asm { mov ecx, eax }
	__asm { call fn_009129f0 }
	__asm { mov esi, eax }
	__asm { jmp L_00481c91 }
	__asm { L_00481c8f: }
	__asm { xor esi, esi }
	__asm { L_00481c91: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488ad0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481cc2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481cc2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481cc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488b60();
extern "C" void fn_00912ce0();
// FUNCTION: ROBLOXSTUDIO 0x00481ce0
extern "C" __declspec(naked) void asm_00481ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481d2f }
	__asm { mov ecx, eax }
	__asm { call fn_00912ce0 }
	__asm { mov esi, eax }
	__asm { jmp L_00481d31 }
	__asm { L_00481d2f: }
	__asm { xor esi, esi }
	__asm { L_00481d31: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488b60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481d62 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481d62 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481d62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488bf0();
extern "C" void fn_00912060();
// FUNCTION: ROBLOXSTUDIO 0x00481d80
extern "C" __declspec(naked) void asm_00481d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481dcf }
	__asm { mov ecx, eax }
	__asm { call fn_00912060 }
	__asm { mov esi, eax }
	__asm { jmp L_00481dd1 }
	__asm { L_00481dcf: }
	__asm { xor esi, esi }
	__asm { L_00481dd1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488bf0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481e02 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481e02 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481e02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488c80();
extern "C" void fn_00911f20();
// FUNCTION: ROBLOXSTUDIO 0x00481e20
extern "C" __declspec(naked) void asm_00481e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481e6f }
	__asm { mov ecx, eax }
	__asm { call fn_00911f20 }
	__asm { mov esi, eax }
	__asm { jmp L_00481e71 }
	__asm { L_00481e6f: }
	__asm { xor esi, esi }
	__asm { L_00481e71: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488c80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481ea2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481ea2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481ea2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
