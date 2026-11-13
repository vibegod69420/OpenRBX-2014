// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00403170
extern "C" __declspec(naked) void asm_00403170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00403189 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00403189: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004031ac }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004031ac: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0040e790();
// FUNCTION: ROBLOXSTUDIO 0x0040e990
extern "C" __declspec(naked) void asm_0040e990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe32f28 }
	__asm { mov dword ptr [esi + 0x2c], 0xe32f34 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe32f3c }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 0x3c], eax }
	__asm { call fn_0040e790 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { je L_0040e9da }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040e9da: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0040f0f0();
// FUNCTION: ROBLOXSTUDIO 0x0040f2f0
extern "C" __declspec(naked) void asm_0040f2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe18364 }
	__asm { mov dword ptr [esi + 0x2c], 0xe18370 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe18378 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 0x3c], eax }
	__asm { call fn_0040f0f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { je L_0040f33a }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040f33a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1239c[];
// FUNCTION: ROBLOXSTUDIO 0x004137c0
extern "C" __declspec(naked) void asm_004137c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x100305c }
	__asm { mov dword ptr [esi + 8], 0x1003040 }
	__asm { call dword ptr [g_00e1239c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004137e9 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004137e9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov dword ptr [ecx], 0x100305c }
	__asm { mov dword ptr [ecx + 8], 0x1003040 }
	__asm { jmp dword ptr [g_00e1239c] }
}

extern "C" char g_00e10508[];
extern "C" void fn_0041fe80();
// FUNCTION: ROBLOXSTUDIO 0x00418980
extern "C" __declspec(naked) void asm_00418980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004189be }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004189be: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x00423a00
extern "C" __declspec(naked) void asm_00423a00()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x68] }
	__asm { mov dword ptr [eax + edi - 0x68], 0xe18340 }
	__asm { mov eax, dword ptr [edi - 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + edi - 0x6c], eax }
	__asm { lea ecx, [edi - 0x50] }
	__asm { mov dword ptr [edi - 0x50], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [edi - 0x50] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e102c8] }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00426140
extern "C" __declspec(naked) void asm_00426140()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test byte ptr [esi + 0x3c], 1 }
	__asm { je L_00426157 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00426157: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { and dword ptr [esi + 0x3c], 0xfffffffe }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0042b600();
// FUNCTION: ROBLOXSTUDIO 0x0042b6b0
extern "C" __declspec(naked) void asm_0042b6b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0042b6c7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_0042b6c7: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_0042b6db }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_0042b6db: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0042b600 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x0042c160
extern "C" __declspec(naked) void asm_0042c160()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x60] }
	__asm { mov dword ptr [eax + edi - 0x60], 0xe1b728 }
	__asm { mov eax, dword ptr [edi - 0x60] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ecx + edi - 0x64], eax }
	__asm { lea ecx, [edi - 0x50] }
	__asm { mov dword ptr [edi - 0x50], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [edi - 0x50] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e102c8] }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e123b8[];
// FUNCTION: ROBLOXSTUDIO 0x00462620
extern "C" __declspec(naked) void asm_00462620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00462654 }
	__asm { cmp byte ptr [esi + 0x25], 0 }
	__asm { jne L_00462654 }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_00462654 }
	__asm { push 0x100e948 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [esi + 0x25], 1 }
	__asm { L_00462654: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00467270
extern "C" __declspec(naked) void asm_00467270()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 8 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_004672aa }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_004672aa: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00443390();
// FUNCTION: ROBLOXSTUDIO 0x00469ac0
extern "C" __declspec(naked) void asm_00469ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00469b09 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12bfe38 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00469af3 }
	__asm { push 0xc3 }
	__asm { push 0x100fc00 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00469af3: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00469b09 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00443390 }
	__asm { L_00469b09: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00508990();
// FUNCTION: ROBLOXSTUDIO 0x0046c670
extern "C" __declspec(naked) void asm_0046c670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046c6b2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12bffc8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046c6a3 }
	__asm { push 0xa7 }
	__asm { push 0x1010168 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046c6a3: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_0046c6b2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00508990 }
	__asm { L_0046c6b2: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_005476f0();
// FUNCTION: ROBLOXSTUDIO 0x0046cae0
extern "C" __declspec(naked) void asm_0046cae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046cb26 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12bfff8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046cb10 }
	__asm { push 0x2e }
	__asm { push 0x1010270 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046cb10: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_0046cb26 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_005476f0 }
	__asm { L_0046cb26: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11004[];
extern "C" void fn_004149b0();
// FUNCTION: ROBLOXSTUDIO 0x0047e8f0
extern "C" __declspec(naked) void asm_0047e8f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_0047e915 }
	__asm { push 0x106 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1012b6c }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0047e915: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0047e928 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_0047e928: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { add eax, 4 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048ea60();
// FUNCTION: ROBLOXSTUDIO 0x0048c900
extern "C" __declspec(naked) void asm_0048c900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0048c941 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 8] }
	__asm { push eax }
	__asm { call fn_0048ea60 }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0048c941: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00495780
extern "C" __declspec(naked) void asm_00495780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x84], 0x10 }
	__asm { jb L_0049579b }
	__asm { push dword ptr [esi + 0x70] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049579b: }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004957ca }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004957ca: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131eb44[];
extern "C" char g_0131eb48[];
extern "C" char g_0131eb4c[];
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004979f0
extern "C" __declspec(naked) void asm_004979f0()
{
	__asm { push ecx }
	__asm { push 0x497c20 }
	__asm { push 0x131c440 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131eb44] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00497a35 }
	__asm { or eax, 1 }
	__asm { push 0xddd610 }
	__asm { mov dword ptr [g_0131eb44], eax }
	__asm { mov dword ptr [g_0131eb48], 0 }
	__asm { mov dword ptr [g_0131eb4c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00497a35: }
	__asm { mov eax, 0x131eb48 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12e80[];
// FUNCTION: ROBLOXSTUDIO 0x0049c580
extern "C" __declspec(naked) void asm_0049c580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x101468c }
	__asm { mov dword ptr [esi + 8], 0x101475c }
	__asm { call dword ptr [g_00e12e80] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0049c5a9 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049c5a9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov dword ptr [ecx], 0x101468c }
	__asm { mov dword ptr [ecx + 8], 0x101475c }
	__asm { jmp dword ptr [g_00e12e80] }
}

extern "C" char g_00e12eec[];
extern "C" char g_00e12ef0[];
extern "C" char g_01318fa0[];
extern "C" void fn_00401120();
extern "C" void fn_00463ea0();
// FUNCTION: ROBLOXSTUDIO 0x0049d680
extern "C" __declspec(naked) void asm_0049d680()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e12ef0] }
	__asm { test eax, eax }
	__asm { je L_0049d6c3 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e12ef0] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12eec] }
	__asm { test eax, eax }
	__asm { je L_0049d6c3 }
	__asm { cmp byte ptr [g_01318fa0], 0 }
	__asm { jne L_0049d6c3 }
	__asm { push 0x2710 }
	__asm { push ecx }
	__asm { call fn_00463ea0 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00401120 }
	__asm { L_0049d6c3: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e11c18[];
// FUNCTION: ROBLOXSTUDIO 0x004c64b0
extern "C" __declspec(naked) void asm_004c64b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_004c64d0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ecx + 0xc4] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11c18] }
	__asm { L_004c64d0: }
	__asm { cmp eax, 1 }
	__asm { jne L_004c64ef }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ecx + 0xc8] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11c18] }
	__asm { L_004c64ef: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ecx + 0xcc] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11c18] }
}

extern "C" char g_00e11c18[];
// FUNCTION: ROBLOXSTUDIO 0x004c6510
extern "C" __declspec(naked) void asm_004c6510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 2 }
	__asm { jne L_004c6535 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ecx + 0x200] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11c18] }
	__asm { L_004c6535: }
	__asm { cmp eax, 0x10 }
	__asm { jne L_004c6554 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ecx + 0x208] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11c18] }
	__asm { L_004c6554: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [ecx + 0x204] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11c18] }
}

extern "C" char g_00e12a28[];
extern "C" void fn_004d4170();
extern "C" void fn_004d4780();
extern "C" void fn_004d4b90();
extern "C" void fn_004f5040();
extern "C" void fn_004f51a0();
// FUNCTION: ROBLOXSTUDIO 0x004d2c60
extern "C" __declspec(naked) void asm_004d2c60()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { call fn_004d4170 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_004d4780 }
	__asm { mov ecx, eax }
	__asm { call fn_004d4b90 }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { call fn_004f51a0 }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_004f51a0 }
	__asm { mov ecx, eax }
	__asm { call fn_004f5040 }
	__asm { mov byte ptr [edi + 0x24], 0 }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e12a28] }
}

extern "C" char g_00e122d4[];
// FUNCTION: ROBLOXSTUDIO 0x004d45f0
extern "C" __declspec(naked) void asm_004d45f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { jne L_004d4622 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e122d4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], 0x1c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004d4622: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e122d4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11a30[];
extern "C" char g_00e11b90[];
extern "C" char g_00e128d8[];
extern "C" char g_00e12a90[];
// FUNCTION: ROBLOXSTUDIO 0x004f3bb0
extern "C" __declspec(naked) void asm_004f3bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x3a8] }
	__asm { je L_004f3bcf }
	__asm { push 0x320 }
	__asm { call dword ptr [g_00e11b90] }
	__asm { jmp L_004f3beb }
	__asm { L_004f3bcf: }
	__asm { push 0x12c }
	__asm { call dword ptr [g_00e128d8] }
	__asm { mov ecx, dword ptr [esi + 0x3a8] }
	__asm { push 0xffffff }
	__asm { call dword ptr [g_00e12a90] }
	__asm { L_004f3beb: }
	__asm { mov ecx, dword ptr [esi + 0x2cc] }
	__asm { call dword ptr [g_00e11a30] }
	__asm { lea ecx, [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11fe0[];
// FUNCTION: ROBLOXSTUDIO 0x004f6eb0
extern "C" __declspec(naked) void asm_004f6eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_004f6edc }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_004f6edc: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11fe0] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004f6ef4 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f6ef4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12a38[];
// FUNCTION: ROBLOXSTUDIO 0x00504b60
extern "C" __declspec(naked) void asm_00504b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x10249bc }
	__asm { mov dword ptr [esi + 8], 0x10249a0 }
	__asm { call dword ptr [g_00e12a38] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00504b89 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00504b89: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov dword ptr [ecx], 0x10249bc }
	__asm { mov dword ptr [ecx + 8], 0x10249a0 }
	__asm { jmp dword ptr [g_00e12a38] }
}

extern "C" char g_00e11004[];
extern "C" void fn_0050ee00();
// FUNCTION: ROBLOXSTUDIO 0x0050e930
extern "C" __declspec(naked) void asm_0050e930()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_0050e955 }
	__asm { push 0x104 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1012b6c }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0050e955: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0050e968 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0050ee00 }
	__asm { L_0050e968: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x14] }
	__asm { ret }
}

extern "C" char g_00e10d6c[];
extern "C" char g_00e10f00[];
extern "C" char g_00e123b8[];
// FUNCTION: ROBLOXSTUDIO 0x005137f0
extern "C" __declspec(naked) void asm_005137f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0051381b }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_0051381b }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call dword ptr [g_00e10d6c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0051381b: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call dword ptr [g_00e10f00] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x00532520
extern "C" __declspec(naked) void asm_00532520()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x50] }
	__asm { mov dword ptr [eax + edi - 0x50], 0xe3b85c }
	__asm { mov eax, dword ptr [edi - 0x50] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ecx + edi - 0x54], eax }
	__asm { lea ecx, [edi - 0x4c] }
	__asm { mov dword ptr [edi - 0x4c], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [edi - 0x4c] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e102c8] }
}

extern "C" char g_00e116a8[];
extern "C" void fn_00402fd0();
extern "C" void fn_004140a0();
// FUNCTION: ROBLOXSTUDIO 0x00534c20
extern "C" __declspec(naked) void asm_00534c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00534c48 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push 0x14 }
	__asm { add ecx, 4 }
	__asm { push 0xf13168 }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jne L_00534c5c }
	__asm { L_00534c48: }
	__asm { call fn_004140a0 }
	__asm { mov eax, dword ptr [eax + 0x90] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e116a8] }
	__asm { L_00534c5c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110dc[];
extern "C" char g_00e12750[];
extern "C" char g_00e12bcc[];
// FUNCTION: ROBLOXSTUDIO 0x0053cb90
extern "C" __declspec(naked) void asm_0053cb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x94] }
	__asm { test ecx, ecx }
	__asm { jne L_0053cbb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12750] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0053cbb0: }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov ecx, dword ptr [esi + 0x94] }
	__asm { call dword ptr [g_00e110dc] }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038214[];
// FUNCTION: ROBLOXSTUDIO 0x00572ba0
extern "C" __declspec(naked) void asm_00572ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x94] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx + 0x7c] }
	__asm { fild dword ptr [ecx + 0x7c] }
	__asm { test eax, eax }
	__asm { jns L_00572bbc }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_00572bbc: }
	__asm { mov eax, dword ptr [ecx + 0x80] }
	__asm { fstp dword ptr [ebp - 0xc] }
	__asm { fild dword ptr [ecx + 0x80] }
	__asm { test eax, eax }
	__asm { jns L_00572bd5 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_00572bd5: }
	__asm { cvttss2si ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov word ptr [eax], cx }
	__asm { cvttss2si ecx, dword ptr [ebp - 8] }
	__asm { mov word ptr [eax + 2], cx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00463f00();
// FUNCTION: ROBLOXSTUDIO 0x00585ad0
extern "C" __declspec(naked) void asm_00585ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00585b15 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0918 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00585b00 }
	__asm { push 0x2e }
	__asm { push 0x1036110 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00585b00: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00585b15 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call fn_00463f00 }
	__asm { L_00585b15: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004fd020();
// FUNCTION: ROBLOXSTUDIO 0x00588190
extern "C" __declspec(naked) void asm_00588190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_005881d2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0a18 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_005881c3 }
	__asm { push 0x8f }
	__asm { push 0x10364a8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005881c3: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_005881d2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_004fd020 }
	__asm { L_005881d2: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0051dbd0();
// FUNCTION: ROBLOXSTUDIO 0x00588880
extern "C" __declspec(naked) void asm_00588880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_005888c1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0a68 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_005888b2 }
	__asm { push 0x2e }
	__asm { push 0x1036600 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005888b2: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_005888c0 }
	__asm { call fn_0051dbd0 }
	__asm { mov byte ptr [esi + 0x19], al }
	__asm { L_005888c0: }
	__asm { pop esi }
	__asm { L_005888c1: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00528520();
// FUNCTION: ROBLOXSTUDIO 0x00588ca0
extern "C" __declspec(naked) void asm_00588ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00588cea }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0a88 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00588cd3 }
	__asm { push 0x109 }
	__asm { push 0x1036600 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00588cd3: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00588cea }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax], 0 }
	__asm { jne L_00588cea }
	__asm { pop ebp }
	__asm { jmp fn_00528520 }
	__asm { L_00588cea: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00575ec0();
// FUNCTION: ROBLOXSTUDIO 0x00589ee0
extern "C" __declspec(naked) void asm_00589ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00589f1f }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0b48 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00589f10 }
	__asm { push 0x2e }
	__asm { push 0x1036840 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00589f10: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00589f1f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00575ec0 }
	__asm { L_00589f1f: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058abd0
extern "C" __declspec(naked) void asm_0058abd0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058abf7 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0058abf0 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058abf0: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0058abf7: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10868[];
extern "C" char g_00e108ac[];
extern "C" char g_00e108b0[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00606240
extern "C" __declspec(naked) void asm_00606240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe2f934 }
	__asm { call dword ptr [g_00e108ac] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { jne L_00606261 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10868] }
	__asm { L_00606261: }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call dword ptr [g_00e108b0] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe2f918 }
	__asm { je L_0060627f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060627f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10814[];
extern "C" char g_012d97c6[];
// FUNCTION: ROBLOXSTUDIO 0x0060f320
extern "C" __declspec(naked) void asm_0060f320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x200 }
	__asm { cmp byte ptr [g_012d97c6], 0 }
	__asm { je L_0060f361 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x200] }
	__asm { push 0x200 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10814] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x200] }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { call dword ptr [eax + 0x44] }
	__asm { L_0060f361: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061ddd0
extern "C" __declspec(naked) void asm_0061ddd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0061de16 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0xc }
	__asm { L_0061dde0: }
	__asm { lea eax, [ecx - 0xc] }
	__asm { test eax, eax }
	__asm { je L_0061de10 }
	__asm { mov dword ptr [ecx - 8], 0 }
	__asm { mov dword ptr [ecx - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { L_0061de10: }
	__asm { add ecx, 0x38 }
	__asm { dec edx }
	__asm { jne L_0061dde0 }
	__asm { L_0061de16: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061c850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0061e640
extern "C" __declspec(naked) void asm_0061e640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0061e683 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0061c850 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0061e683: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00622a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00625cf0
extern "C" __declspec(naked) void asm_00625cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00625d33 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00622a30 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00625d33: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006436b0
extern "C" __declspec(naked) void asm_006436b0()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0xc] }
	__asm { test edi, edi }
	__asm { je L_006436fd }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { je L_006436f3 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { L_006436f3: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_006436fd: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065f0c0
extern "C" __declspec(naked) void asm_0065f0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { jb L_0065f0d8 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065f0d8: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0065f0fa }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065f0fa: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0065e670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065fc60
extern "C" __declspec(naked) void asm_0065fc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0065fca3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0065e670 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0065fca3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006637d0
extern "C" __declspec(naked) void asm_006637d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00663824 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x14 }
	__asm { L_006637e0: }
	__asm { lea eax, [ecx - 0x14] }
	__asm { test eax, eax }
	__asm { je L_0066381e }
	__asm { mov dword ptr [ecx - 0x14], 0 }
	__asm { mov dword ptr [ecx - 0x10], 0 }
	__asm { mov dword ptr [ecx - 0xc], 0 }
	__asm { mov dword ptr [ecx - 8], 0 }
	__asm { mov dword ptr [ecx - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { L_0066381e: }
	__asm { add ecx, 0x20 }
	__asm { dec edx }
	__asm { jne L_006637e0 }
	__asm { L_00663824: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00658ed0();
extern "C" void fn_00699550();
extern "C" void fn_006a03c0();
extern "C" void fn_008f63b0();
extern "C" void fn_009ff650();
// FUNCTION: ROBLOXSTUDIO 0x006771a0
extern "C" __declspec(naked) void asm_006771a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0x1fc] }
	__asm { call fn_00658ed0 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0x1a0] }
	__asm { call fn_00699550 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0x1a4] }
	__asm { call fn_006a03c0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x1c0] }
	__asm { test ecx, ecx }
	__asm { je L_006771df }
	__asm { call fn_008f63b0 }
	__asm { L_006771df: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax + 0x1bc] }
	__asm { test ecx, ecx }
	__asm { jne fn_009ff650 }
	__asm { ret }
}

extern "C" void fn_00646370();
extern "C" void fn_006463c0();
// FUNCTION: ROBLOXSTUDIO 0x00686850
extern "C" __declspec(naked) void asm_00686850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x180] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x1cc] }
	__asm { test esi, esi }
	__asm { je L_00686891 }
	__asm { cmp byte ptr [ecx + 0x1d8], 0 }
	__asm { jne L_00686885 }
	__asm { mov byte ptr [ecx + 0x1d8], 1 }
	__asm { mov ecx, dword ptr [eax + 0x1cc] }
	__asm { test ecx, ecx }
	__asm { je L_00686885 }
	__asm { push 0x40 }
	__asm { call fn_00646370 }
	__asm { L_00686885: }
	__asm { push 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006463c0 }
	__asm { L_00686891: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0069ba10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069dcb0
extern "C" __declspec(naked) void asm_0069dcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0069dcf3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0069ba10 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0069dcf3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12010[];
extern "C" char g_00e12014[];
extern "C" char g_00e12018[];
extern "C" char g_00e1201c[];
extern "C" char g_00e12020[];
extern "C" char g_00e12024[];
extern "C" char g_00e12028[];
extern "C" char g_00e1202c[];
extern "C" char g_00e12030[];
extern "C" char g_00e12034[];
extern "C" char g_00e12038[];
extern "C" char g_00e1203c[];
extern "C" char g_00e12040[];
extern "C" char g_00e12044[];
extern "C" char g_00e12048[];
extern "C" char g_00e1204c[];
extern "C" char g_00e12050[];
// FUNCTION: ROBLOXSTUDIO 0x006af736
extern "C" __declspec(naked) void asm_006af736()
{
	__asm { jmp dword ptr [g_00e12050] }
	__asm { jmp dword ptr [g_00e1204c] }
	__asm { jmp dword ptr [g_00e12048] }
	__asm { jmp dword ptr [g_00e12044] }
	__asm { jmp dword ptr [g_00e12040] }
	__asm { jmp dword ptr [g_00e1203c] }
	__asm { jmp dword ptr [g_00e12038] }
	__asm { jmp dword ptr [g_00e12034] }
	__asm { jmp dword ptr [g_00e12030] }
	__asm { jmp dword ptr [g_00e1202c] }
	__asm { jmp dword ptr [g_00e12028] }
	__asm { jmp dword ptr [g_00e12024] }
	__asm { jmp dword ptr [g_00e12020] }
	__asm { jmp dword ptr [g_00e1201c] }
	__asm { jmp dword ptr [g_00e12018] }
	__asm { jmp dword ptr [g_00e12014] }
	__asm { jmp dword ptr [g_00e12010] }
}

extern "C" char g_00e115e4[];
extern "C" char g_00e115e8[];
extern "C" char g_00e115ec[];
extern "C" char g_00e115f0[];
extern "C" char g_00e115f4[];
extern "C" char g_00e115f8[];
extern "C" char g_00e115fc[];
extern "C" char g_00e11600[];
extern "C" char g_00e11604[];
extern "C" char g_00e11608[];
extern "C" char g_00e1160c[];
extern "C" char g_00e11610[];
extern "C" char g_00e11614[];
extern "C" char g_00e11618[];
extern "C" char g_00e1161c[];
extern "C" char g_00e11620[];
extern "C" char g_00e11624[];
extern "C" char g_00e11628[];
extern "C" char g_00e1162c[];
extern "C" char g_00e11630[];
extern "C" char g_00e11634[];
// FUNCTION: ROBLOXSTUDIO 0x006afdcc
extern "C" __declspec(naked) void asm_006afdcc()
{
	__asm { jmp dword ptr [g_00e115e4] }
	__asm { jmp dword ptr [g_00e115e8] }
	__asm { jmp dword ptr [g_00e115ec] }
	__asm { jmp dword ptr [g_00e115f0] }
	__asm { jmp dword ptr [g_00e115f4] }
	__asm { jmp dword ptr [g_00e115f8] }
	__asm { jmp dword ptr [g_00e115fc] }
	__asm { jmp dword ptr [g_00e11600] }
	__asm { jmp dword ptr [g_00e11604] }
	__asm { jmp dword ptr [g_00e11608] }
	__asm { jmp dword ptr [g_00e1160c] }
	__asm { jmp dword ptr [g_00e11610] }
	__asm { jmp dword ptr [g_00e11614] }
	__asm { jmp dword ptr [g_00e11618] }
	__asm { jmp dword ptr [g_00e1161c] }
	__asm { jmp dword ptr [g_00e11620] }
	__asm { jmp dword ptr [g_00e11624] }
	__asm { jmp dword ptr [g_00e11628] }
	__asm { jmp dword ptr [g_00e1162c] }
	__asm { jmp dword ptr [g_00e11630] }
	__asm { jmp dword ptr [g_00e11634] }
}

extern "C" char g_00e10224[];
extern "C" char g_00e10228[];
extern "C" char g_00e1022c[];
extern "C" char g_00e10238[];
extern "C" char g_00e1023c[];
extern "C" char g_00e10240[];
extern "C" char g_00e10244[];
extern "C" char g_00e10248[];
extern "C" char g_00e1024c[];
extern "C" char g_00e10250[];
extern "C" char g_00e131a8[];
// FUNCTION: ROBLOXSTUDIO 0x006b8a7e
extern "C" __declspec(naked) void asm_006b8a7e()
{
	__asm { jmp dword ptr [g_00e131a8] }
	__asm { jmp dword ptr [g_00e10224] }
	__asm { jmp dword ptr [g_00e10228] }
	__asm { jmp dword ptr [g_00e1022c] }
	__asm { jmp dword ptr [g_00e10238] }
	__asm { jmp dword ptr [g_00e1023c] }
	__asm { jmp dword ptr [g_00e10240] }
	__asm { jmp dword ptr [g_00e10244] }
	__asm { jmp dword ptr [g_00e10248] }
	__asm { jmp dword ptr [g_00e1024c] }
	__asm { jmp dword ptr [g_00e10250] }
}

extern "C" void fn_006ba230();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bb450
extern "C" __declspec(naked) void asm_006bb450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006bb48d }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_006ba230 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006bb48d: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00971be0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006be560
extern "C" __declspec(naked) void asm_006be560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006be59d }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_00971be0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006be59d: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006c1fa0
extern "C" __declspec(naked) void asm_006c1fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006c1fdd }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006c1fdd: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100e0[];
extern "C" char g_012df368[];
extern "C" char g_012df36c[];
extern "C" char g_012df370[];
// FUNCTION: ROBLOXSTUDIO 0x006c56f0
extern "C" __declspec(naked) void asm_006c56f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012df370] }
	__asm { sub esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_006c5735 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df370], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [g_012df368], 0 }
	__asm { mov dword ptr [g_012df36c], 0 }
	__asm { call dword ptr [g_00e100e0] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_012df368], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [g_012df36c], eax }
	__asm { L_006c5735: }
	__asm { mov eax, 0x12df368 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dfa28[];
extern "C" char g_012dfa2c[];
extern "C" char g_012dfa30[];
extern "C" char g_012dfa34[];
extern "C" char g_012dfa38[];
extern "C" char g_012dfa3c[];
extern "C" char g_012dfa40[];
extern "C" char g_012dfa44[];
extern "C" char g_012dfa48[];
extern "C" char g_012dfa4c[];
// FUNCTION: ROBLOXSTUDIO 0x006d66e0
extern "C" __declspec(naked) void asm_006d66e0()
{
	__asm { mov eax, dword ptr [g_012dfa4c] }
	__asm { test al, 1 }
	__asm { jne L_006d674b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfa4c], eax }
	__asm { mov dword ptr [g_012dfa28], 0 }
	__asm { mov dword ptr [g_012dfa2c], 0 }
	__asm { mov dword ptr [g_012dfa30], 0 }
	__asm { mov dword ptr [g_012dfa34], 0 }
	__asm { mov dword ptr [g_012dfa38], 0 }
	__asm { mov dword ptr [g_012dfa3c], 0 }
	__asm { mov dword ptr [g_012dfa40], 0 }
	__asm { mov dword ptr [g_012dfa44], 0 }
	__asm { mov dword ptr [g_012dfa48], 0 }
	__asm { L_006d674b: }
	__asm { mov eax, 0x12dfa28 }
	__asm { ret }
}

extern "C" char g_012dfa50[];
extern "C" char g_012dfa54[];
extern "C" char g_012dfa58[];
extern "C" char g_012dfa5c[];
extern "C" char g_012dfa60[];
extern "C" char g_012dfa64[];
extern "C" char g_012dfa68[];
extern "C" char g_012dfa6c[];
extern "C" char g_012dfa70[];
extern "C" char g_012dfa74[];
// FUNCTION: ROBLOXSTUDIO 0x006d6760
extern "C" __declspec(naked) void asm_006d6760()
{
	__asm { mov eax, dword ptr [g_012dfa74] }
	__asm { test al, 1 }
	__asm { jne L_006d67cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dfa74], eax }
	__asm { mov dword ptr [g_012dfa50], 0x3f800000 }
	__asm { mov dword ptr [g_012dfa54], 0 }
	__asm { mov dword ptr [g_012dfa58], 0 }
	__asm { mov dword ptr [g_012dfa5c], 0 }
	__asm { mov dword ptr [g_012dfa60], 0x3f800000 }
	__asm { mov dword ptr [g_012dfa64], 0 }
	__asm { mov dword ptr [g_012dfa68], 0 }
	__asm { mov dword ptr [g_012dfa6c], 0 }
	__asm { mov dword ptr [g_012dfa70], 0x3f800000 }
	__asm { L_006d67cb: }
	__asm { mov eax, 0x12dfa50 }
	__asm { ret }
}

extern "C" void fn_0071ae40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071aec0
extern "C" __declspec(naked) void asm_0071aec0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x8c], 0x10 }
	__asm { jb L_0071aed7 }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071aed7: }
	__asm { mov dword ptr [esi + 0x8c], 0xf }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov byte ptr [esi + 0x78], 0 }
	__asm { cmp dword ptr [esi + 0x74], 0x10 }
	__asm { jb L_0071af00 }
	__asm { push dword ptr [esi + 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071af00: }
	__asm { mov dword ptr [esi + 0x74], 0xf }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov byte ptr [esi + 0x60], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0071ae40 }
}

// FUNCTION: ROBLOXSTUDIO 0x0071d9c0
extern "C" __declspec(naked) void asm_0071d9c0()
{
	__asm { sub esp, 8 }
	__asm { lea eax, [esp] }
	__asm { push 4 }
	__asm { push 8 }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call dword ptr [esp + 0x20] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 8 }
	__asm { jge L_0071d9f0 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [eax], 0x14 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_0071d9f0: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [esp] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e1067c[];
extern "C" void fn_0072a260();
extern "C" void fn_0072a990();
// FUNCTION: ROBLOXSTUDIO 0x0071e1a0
extern "C" __declspec(naked) void asm_0071e1a0()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_0071e1d5 }
	__asm { lea ecx, [esp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0072a260 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_0072a990 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 1 }
	__asm { jne L_0071e1d5 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0071e1d5: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0071e1e3 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0071e1e3: }
	__asm { ret }
}

extern "C" void fn_00cfbcf0();
// FUNCTION: ROBLOXSTUDIO 0x00727850
extern "C" __declspec(naked) void asm_00727850()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test byte ptr [esi + 0x11c], 0x20 }
	__asm { je L_0072786f }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { and eax, 0x300 }
	__asm { cmp eax, 0x300 }
	__asm { jne L_00727878 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072786f: }
	__asm { test dword ptr [esi + 0x6c], 0x800 }
	__asm { jne L_00727891 }
	__asm { L_00727878: }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esi + 0x110] }
	__asm { call fn_00cfbcf0 }
	__asm { mov dword ptr [esi + 0x110], eax }
	__asm { L_00727891: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00739ba0
extern "C" __declspec(naked) void asm_00739ba0()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { sub esp, 0x28c }
	__asm { test ecx, ecx }
	__asm { je L_00739be2 }
	__asm { mov edx, dword ptr [esp + 0x294] }
	__asm { push ecx }
	__asm { test edx, edx }
	__asm { je L_00739bd9 }
	__asm { mov eax, dword ptr [esp + 0x29c] }
	__asm { mov dword ptr [esp + 0x248], eax }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { add esp, 8 }
	__asm { add esp, 0x28c }
	__asm { ret }
	__asm { L_00739bd9: }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00739be2: }
	__asm { add esp, 0x28c }
	__asm { ret }
}

extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073f090
extern "C" __declspec(naked) void asm_0073f090()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { je L_0073f0a0 }
	__asm { test al, 4 }
	__asm { jne L_0073f0ae }
	__asm { L_0073f0a0: }
	__asm { push 0xe4bcd8 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073f0ae: }
	__asm { or dword ptr [esi + 0x68], 0x18 }
	__asm { cmp dword ptr [esp + 0x10], 0 }
	__asm { je L_0073f0c7 }
	__asm { push 0xe4bcec }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_0073f0c7: }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00737840();
// FUNCTION: ROBLOXSTUDIO 0x00741340
extern "C" __declspec(naked) void asm_00741340()
{
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov eax, 8 }
	__asm { movzx ecx, byte ptr [esi + 0x12c] }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x10], 0x474e5089 }
	__asm { mov dword ptr [esp + 0x14], 0xa1a0a0d }
	__asm { call fn_00737840 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [esi + 0x12c], 3 }
	__asm { jae L_00741387 }
	__asm { or dword ptr [esi + 0x68], 0x1000 }
	__asm { L_00741387: }
	__asm { pop esi }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0077e650
extern "C" __declspec(naked) void asm_0077e650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0077e695 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { push esi }
	__asm { je L_0077e68b }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_0077e68b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_0077e695: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00783e50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785250
extern "C" __declspec(naked) void asm_00785250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esi], 0xe4f8dc }
	__asm { mov dword ptr [esi + 0x28], 0xe4f8e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x3c], 0xe4f8f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 0x38], eax }
	__asm { call fn_00783e50 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x44], 0xe1822c }
	__asm { je L_00785299 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785299: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785300
extern "C" __declspec(naked) void asm_00785300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4fabc }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_0078531d }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078531d: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi], 0xe4faac }
	__asm { je L_00785344 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785344: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007853e0
extern "C" __declspec(naked) void asm_007853e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4fa6c }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_007853fd }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007853fd: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0xe4fa2c }
	__asm { je L_00785424 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785424: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785560
extern "C" __declspec(naked) void asm_00785560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4fa4c }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { jb L_0078557d }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078557d: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi], 0xe4fa2c }
	__asm { je L_007855a4 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007855a4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785700
extern "C" __declspec(naked) void asm_00785700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00785717 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785717: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0xe4efc8 }
	__asm { je L_0078573e }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078573e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00786a70
extern "C" __declspec(naked) void asm_00786a70()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00786ab2 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { push esi }
	__asm { je L_00786aa8 }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_00786aa8: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00786ab2: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c6fc[];
extern "C" void fn_004d18d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0078e9e0
extern "C" __declspec(naked) void asm_0078e9e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0078ea2d }
	__asm { cmp dword ptr [g_0131c6fc], 0x29a }
	__asm { je L_0078ea2d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0078ea1c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0078ea2d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0078ea1c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0078ea2d: }
	__asm { mov ecx, 0x131ec20 }
	__asm { jmp fn_004d18d0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00792f2a
extern "C" __declspec(naked) void asm_00792f2a()
{
	__asm { cmp dword ptr [esi + 4], 9 }
	__asm { jne L_00792f68 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00792f57 }
	__asm { push 0x14a }
	__asm { push 0xe51acc }
	__asm { push 0xe51b0c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00792f68 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00792f57: }
	__asm { movzx eax, al }
	__asm { push 0xe51b20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00792f68: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0e88[];
extern "C" char g_012e0e8c[];
extern "C" char g_012e0e90[];
extern "C" char g_012e0e94[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007944b0
extern "C" __declspec(naked) void asm_007944b0()
{
	__asm { mov eax, dword ptr [g_012e0e94] }
	__asm { test al, 1 }
	__asm { jne L_007944ec }
	__asm { or eax, 1 }
	__asm { push 0xde2000 }
	__asm { mov dword ptr [g_012e0e94], eax }
	__asm { mov dword ptr [g_012e0e88], 0 }
	__asm { mov dword ptr [g_012e0e8c], 0 }
	__asm { mov dword ptr [g_012e0e90], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007944ec: }
	__asm { mov eax, 0x12e0e88 }
	__asm { ret }
}

extern "C" char g_012e0e88[];
extern "C" char g_012e0e8c[];
extern "C" char g_012e0e90[];
extern "C" char g_012e0e94[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00794980
extern "C" __declspec(naked) void asm_00794980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e0e94] }
	__asm { test al, 1 }
	__asm { jne L_007949bf }
	__asm { or eax, 1 }
	__asm { push 0xde2000 }
	__asm { mov dword ptr [g_012e0e94], eax }
	__asm { mov dword ptr [g_012e0e88], 0 }
	__asm { mov dword ptr [g_012e0e8c], 0 }
	__asm { mov dword ptr [g_012e0e90], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007949bf: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012e0e88] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0e88[];
extern "C" char g_012e0e8c[];
extern "C" char g_012e0e90[];
extern "C" char g_012e0e94[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007949d0
extern "C" __declspec(naked) void asm_007949d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e0e94] }
	__asm { test al, 1 }
	__asm { jne L_00794a0f }
	__asm { or eax, 1 }
	__asm { push 0xde2000 }
	__asm { mov dword ptr [g_012e0e94], eax }
	__asm { mov dword ptr [g_012e0e88], 0 }
	__asm { mov dword ptr [g_012e0e8c], 0 }
	__asm { mov dword ptr [g_012e0e90], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00794a0f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012e0e8c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079f6f0
extern "C" __declspec(naked) void asm_0079f6f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe527c4 }
	__asm { mov dword ptr [esi + 4], 0xe5283c }
	__asm { mov dword ptr [esi + 0x18], 0xe52844 }
	__asm { mov dword ptr [esi + 0x1c], 0xe52850 }
	__asm { cmp dword ptr [esi + 0x80], 0x10 }
	__asm { jb L_0079f722 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079f722: }
	__asm { mov dword ptr [esi + 0x80], 0xf }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov byte ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi], 0xe526ec }
	__asm { mov dword ptr [esi + 4], 0xe52764 }
	__asm { mov dword ptr [esi + 0x18], 0xe5276c }
	__asm { mov dword ptr [esi + 0x1c], 0xe52778 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0bd0
extern "C" __declspec(naked) void asm_007a0bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_007a0c0a }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0c0a: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b174[];
extern "C" void fn_00438360();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007a3d30
extern "C" __declspec(naked) void asm_007a3d30()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007a3d7d }
	__asm { cmp dword ptr [g_0131b174], 0x29a }
	__asm { je L_007a3d7d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007a3d6c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007a3d7d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007a3d6c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007a3d7d: }
	__asm { mov ecx, 0x131de60 }
	__asm { jmp fn_00438360 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007aa250
extern "C" __declspec(naked) void asm_007aa250()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007aa291 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007aa280 }
	__asm { push 0xaa }
	__asm { push 0xe52268 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007aa291 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007aa280: }
	__asm { movzx eax, al }
	__asm { push 0xe522b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007aa291: }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ac310
extern "C" __declspec(naked) void asm_007ac310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_007ac32a }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ac32a: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xe531a0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ac360
extern "C" __declspec(naked) void asm_007ac360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_007ac37a }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ac37a: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xe537e8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007b0030();
extern "C" void fn_007b0690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b0e90
extern "C" __declspec(naked) void asm_007b0e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe54d08 }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { jb L_007b0ead }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b0ead: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { call fn_007b0030 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007b0ed5 }
	__asm { push esi }
	__asm { call fn_007b0690 }
	__asm { add esp, 4 }
	__asm { L_007b0ed5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_0097f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b55f0
extern "C" __declspec(naked) void asm_007b55f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007b560d }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007b560d: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xf12f2d }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f94c[];
extern "C" void fn_00558a40();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007bc600
extern "C" __declspec(naked) void asm_007bc600()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007bc64d }
	__asm { cmp dword ptr [g_0131f94c], 0x29a }
	__asm { je L_007bc64d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007bc63c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007bc64d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007bc63c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007bc64d: }
	__asm { mov ecx, 0x131fc68 }
	__asm { jmp fn_00558a40 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_007bff80();
// FUNCTION: ROBLOXSTUDIO 0x007bf170
extern "C" __declspec(naked) void asm_007bf170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1a0], edi }
	__asm { je L_007bf199 }
	__asm { call fn_007bff80 }
	__asm { push 0x12e2f70 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x1a0], edi }
	__asm { call fn_007b4f50 }
	__asm { L_007bf199: }
	__asm { cmp dword ptr [esi + 0x1a0], 6 }
	__asm { je L_007bf1ac }
	__asm { mov dword ptr [esi + 0x1b4], 0 }
	__asm { L_007bf1ac: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040d520();
// FUNCTION: ROBLOXSTUDIO 0x007c0d20
extern "C" __declspec(naked) void asm_007c0d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040d520 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_007c0d5c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, esi }
	__asm { L_007c0d5c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_007c5600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c5590
extern "C" __declspec(naked) void asm_007c5590()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe57a74 }
	__asm { mov dword ptr [esi + 4], 0xe57aec }
	__asm { mov dword ptr [esi + 0x18], 0xe57af4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57b00 }
	__asm { lea eax, [esi + 0xa8] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_007c55c3 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_007c55c3: }
	__asm { cmp dword ptr [esi + 0x9c], 0x10 }
	__asm { jb L_007c55da }
	__asm { push dword ptr [esi + 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c55da: }
	__asm { mov dword ptr [esi + 0x9c], 0xf }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007c5600 }
}

extern "C" void fn_007c5600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c5a10
extern "C" __declspec(naked) void asm_007c5a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x9c], 0x10 }
	__asm { jb L_007c5a2d }
	__asm { push dword ptr [esi + 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c5a2d: }
	__asm { mov dword ptr [esi + 0x9c], 0xf }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { call fn_007c5600 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007c5a5e }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c5a5e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f964[];
extern "C" void fn_00558ef0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007c9bd0
extern "C" __declspec(naked) void asm_007c9bd0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007c9c1d }
	__asm { cmp dword ptr [g_0131f964], 0x29a }
	__asm { je L_007c9c1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007c9c0c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c9c1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007c9c0c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c9c1d: }
	__asm { mov ecx, 0x131fae0 }
	__asm { jmp fn_00558ef0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9ac[];
extern "C" void fn_00558e90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007c9c30
extern "C" __declspec(naked) void asm_007c9c30()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007c9c7d }
	__asm { cmp dword ptr [g_0131f9ac], 0x29a }
	__asm { je L_007c9c7d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007c9c6c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c9c7d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007c9c6c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c9c7d: }
	__asm { mov ecx, 0x131faf4 }
	__asm { jmp fn_00558e90 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007d7ab0
extern "C" __declspec(naked) void asm_007d7ab0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007d7af1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007d7ae0 }
	__asm { push 0x6a7 }
	__asm { push 0xe58ae0 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007d7af1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007d7ae0: }
	__asm { movzx eax, al }
	__asm { push 0xe58b20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007d7af1: }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007d8840
extern "C" __declspec(naked) void asm_007d8840()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007d8881 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007d8870 }
	__asm { push 0x6ad }
	__asm { push 0xe58ae0 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007d8881 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007d8870: }
	__asm { movzx eax, al }
	__asm { push 0xe58b78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007d8881: }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a570[];
extern "C" void fn_00414360();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00826400
extern "C" __declspec(naked) void asm_00826400()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0082644d }
	__asm { cmp dword ptr [g_0131a570], 0x29a }
	__asm { je L_0082644d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082643c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082644d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082643c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082644d: }
	__asm { mov ecx, 0x131d060 }
	__asm { jmp fn_00414360 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00848170
extern "C" __declspec(naked) void asm_00848170()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00848184 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00848184: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008481a6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008481a6: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10494[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x0084a060
extern "C" __declspec(naked) void asm_0084a060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xe5d04c }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10494] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0084a09e }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084a09e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f9424[];
extern "C" char g_012f9428[];
extern "C" char g_012f942c[];
// FUNCTION: ROBLOXSTUDIO 0x0084a270
extern "C" __declspec(naked) void asm_0084a270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f942c] }
	__asm { test al, 1 }
	__asm { jne L_0084a2a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f942c], eax }
	__asm { mov eax, 1 }
	__asm { mov word ptr [g_012f9428], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [g_012f9424], ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012f9428] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0084a2a7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012f9424] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012f9428] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9400[];
extern "C" char g_012f9404[];
extern "C" char g_012f9408[];
// FUNCTION: ROBLOXSTUDIO 0x0084a550
extern "C" __declspec(naked) void asm_0084a550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f9408] }
	__asm { test al, 1 }
	__asm { jne L_0084a587 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9408], eax }
	__asm { xor eax, eax }
	__asm { mov word ptr [g_012f9404], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 1 }
	__asm { mov dword ptr [g_012f9400], ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012f9404] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0084a587: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012f9400] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012f9404] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f940c[];
extern "C" char g_012f9410[];
extern "C" char g_012f9414[];
// FUNCTION: ROBLOXSTUDIO 0x0084a5a0
extern "C" __declspec(naked) void asm_0084a5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f9414] }
	__asm { test al, 1 }
	__asm { jne L_0084a5d7 }
	__asm { or eax, 1 }
	__asm { mov ecx, 1 }
	__asm { mov dword ptr [g_012f9414], eax }
	__asm { mov eax, ecx }
	__asm { mov word ptr [g_012f9410], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012f940c], ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012f9410] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0084a5d7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012f940c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_012f9410] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0085f580
extern "C" __declspec(naked) void asm_0085f580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xe08], eax }
	__asm { je L_0085f5a1 }
	__asm { push 0x12f90c8 }
	__asm { mov dword ptr [esi + 0xe08], eax }
	__asm { call fn_007b4f50 }
	__asm { L_0085f5a1: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0xe0c], eax }
	__asm { je L_0085f5be }
	__asm { push 0x12f90f4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xe0c], eax }
	__asm { call fn_007b4f50 }
	__asm { L_0085f5be: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0085f650
extern "C" __declspec(naked) void asm_0085f650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xe14], eax }
	__asm { je L_0085f671 }
	__asm { push 0x12f915c }
	__asm { mov dword ptr [esi + 0xe14], eax }
	__asm { call fn_007b4f50 }
	__asm { L_0085f671: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0xe18], eax }
	__asm { je L_0085f68d }
	__asm { lea ecx, [esi + 0xad4] }
	__asm { mov dword ptr [esi + 0xe18], eax }
	__asm { call fn_0043f040 }
	__asm { L_0085f68d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0086b250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087b590
extern "C" __declspec(naked) void asm_0087b590()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2a8], 0x10 }
	__asm { jb L_0087b5aa }
	__asm { push dword ptr [esi + 0x294] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087b5aa: }
	__asm { mov dword ptr [esi + 0x2a8], 0xf }
	__asm { mov dword ptr [esi + 0x2a4], 0 }
	__asm { mov byte ptr [esi + 0x294], 0 }
	__asm { mov dword ptr [esi], 0xe63d14 }
	__asm { mov dword ptr [esi + 4], 0xe63dcc }
	__asm { mov dword ptr [esi + 0x18], 0xe63dd4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe63de0 }
	__asm { mov dword ptr [esi + 0x64], 0xe63df0 }
	__asm { mov dword ptr [esi + 0x68], 0xe63df8 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0086b250 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8d4[];
extern "C" void fn_00419c50();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0087b760
extern "C" __declspec(naked) void asm_0087b760()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0087b7ad }
	__asm { cmp dword ptr [g_0131a8d4], 0x29a }
	__asm { je L_0087b7ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0087b79c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087b7ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0087b79c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087b7ad: }
	__asm { mov ecx, 0x131d1b4 }
	__asm { jmp fn_00419c50 }
}

extern "C" void fn_0086aef0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087db90
extern "C" __declspec(naked) void asm_0087db90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3c4], 0x10 }
	__asm { jb L_0087dbaa }
	__asm { push dword ptr [esi + 0x3b0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087dbaa: }
	__asm { mov dword ptr [esi + 0x3c4], 0xf }
	__asm { mov dword ptr [esi + 0x3c0], 0 }
	__asm { mov byte ptr [esi + 0x3b0], 0 }
	__asm { mov dword ptr [esi], 0xe644dc }
	__asm { mov dword ptr [esi + 4], 0xe64594 }
	__asm { mov dword ptr [esi + 0x18], 0xe6459c }
	__asm { mov dword ptr [esi + 0x1c], 0xe645a8 }
	__asm { mov dword ptr [esi + 0x64], 0xe645b8 }
	__asm { mov dword ptr [esi + 0x68], 0xe645c0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0086aef0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d19c[];
extern "C" void fn_00419cb0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0087dcd0
extern "C" __declspec(naked) void asm_0087dcd0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0087dd1d }
	__asm { cmp dword ptr [g_0131d19c], 0x29a }
	__asm { je L_0087dd1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0087dd0c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087dd1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0087dd0c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087dd1d: }
	__asm { mov ecx, 0x131d1b8 }
	__asm { jmp fn_00419cb0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8d0[];
extern "C" void fn_00419d10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008846e0
extern "C" __declspec(naked) void asm_008846e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0088472d }
	__asm { cmp dword ptr [g_0131a8d0], 0x29a }
	__asm { je L_0088472d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0088471c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088472d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0088471c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088472d: }
	__asm { mov ecx, 0x131d1bc }
	__asm { jmp fn_00419d10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8cc[];
extern "C" void fn_00419d70();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008857d0
extern "C" __declspec(naked) void asm_008857d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0088581d }
	__asm { cmp dword ptr [g_0131a8cc], 0x29a }
	__asm { je L_0088581d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0088580c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088581d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0088580c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088581d: }
	__asm { mov ecx, 0x131d1c0 }
	__asm { jmp fn_00419d70 }
}

extern "C" void fn_007b0030();
extern "C" void fn_0088ec00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088f290
extern "C" __declspec(naked) void asm_0088f290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe54d08 }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { jb L_0088f2ad }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088f2ad: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { call fn_007b0030 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0088f2d5 }
	__asm { push esi }
	__asm { call fn_0088ec00 }
	__asm { add esp, 4 }
	__asm { L_0088f2d5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fba5c[];
extern "C" char g_012fba60[];
extern "C" char g_012fba64[];
extern "C" char g_012fba68[];
// FUNCTION: ROBLOXSTUDIO 0x00892530
extern "C" __declspec(naked) void asm_00892530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x138] }
	__asm { test eax, eax }
	__asm { je L_0089254d }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0089254d: }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_0089257c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { mov dword ptr [g_012fba5c], 0 }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { L_0089257c: }
	__asm { mov eax, dword ptr [g_012fba5c] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0088e620();
// FUNCTION: ROBLOXSTUDIO 0x008a0be0
extern "C" __declspec(naked) void asm_008a0be0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe699bc }
	__asm { mov dword ptr [edx + 4], 0xe69ac8 }
	__asm { mov dword ptr [edx + 0x18], 0xe69ad0 }
	__asm { mov dword ptr [edx + 0x1c], 0xe69adc }
	__asm { mov dword ptr [edx + 0x64], 0xe69aec }
	__asm { mov dword ptr [edx + 0x70], 0xe69af4 }
	__asm { mov dword ptr [edx + 0x98], 0xe69b14 }
	__asm { mov dword ptr [edx + 0xb0], 0xe69b48 }
	__asm { mov dword ptr [edx + 0xc4], 0xe69b74 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe69b7c }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0088e620 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d194[];
extern "C" void fn_00419a70();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008a3890
extern "C" __declspec(naked) void asm_008a3890()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008a38dd }
	__asm { cmp dword ptr [g_0131d194], 0x29a }
	__asm { je L_008a38dd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008a38cc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a38dd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008a38cc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a38dd: }
	__asm { mov ecx, 0x131d1a0 }
	__asm { jmp fn_00419a70 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8dc[];
extern "C" void fn_00419b30();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008a9db0
extern "C" __declspec(naked) void asm_008a9db0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008a9dfd }
	__asm { cmp dword ptr [g_0131a8dc], 0x29a }
	__asm { je L_008a9dfd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008a9dec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a9dfd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008a9dec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a9dfd: }
	__asm { mov ecx, 0x131d1a8 }
	__asm { jmp fn_00419b30 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8d8[];
extern "C" void fn_00419b90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008aa5d0
extern "C" __declspec(naked) void asm_008aa5d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008aa61d }
	__asm { cmp dword ptr [g_0131a8d8], 0x29a }
	__asm { je L_008aa61d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008aa60c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008aa61d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008aa60c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008aa61d: }
	__asm { mov ecx, 0x131d1ac }
	__asm { jmp fn_00419b90 }
}

extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_008a9e80();
// FUNCTION: ROBLOXSTUDIO 0x008aa630
extern "C" __declspec(naked) void asm_008aa630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 0xac] }
	__asm { push eax }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_008aa675 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_008a9e80 }
	__asm { cmp dword ptr [esi + 0xc8], 5 }
	__asm { je L_008aa675 }
	__asm { push 0x12fc3c0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xc8], 5 }
	__asm { call fn_007b4f50 }
	__asm { L_008aa675: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_008a9ed0();
// FUNCTION: ROBLOXSTUDIO 0x008aa6b0
extern "C" __declspec(naked) void asm_008aa6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_008aa6f5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_008a9ed0 }
	__asm { cmp dword ptr [esi + 0xc8], 5 }
	__asm { je L_008aa6f5 }
	__asm { push 0x12fc3c0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xc8], 5 }
	__asm { call fn_007b4f50 }
	__asm { L_008aa6f5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008abae0();
// FUNCTION: ROBLOXSTUDIO 0x008ab990
extern "C" __declspec(naked) void asm_008ab990()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe6c33c }
	__asm { mov dword ptr [edx + 4], 0xe6c44c }
	__asm { mov dword ptr [edx + 0x18], 0xe6c454 }
	__asm { mov dword ptr [edx + 0x1c], 0xe6c460 }
	__asm { mov dword ptr [edx + 0x64], 0xe6c470 }
	__asm { mov dword ptr [edx + 0x70], 0xe6c478 }
	__asm { mov dword ptr [edx + 0x98], 0xe6c498 }
	__asm { mov dword ptr [edx + 0xb0], 0xe6c4cc }
	__asm { mov dword ptr [edx + 0xc4], 0xe6c4f8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe6c500 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x114] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_008abae0 }
}

extern "C" void fn_0088e620();
// FUNCTION: ROBLOXSTUDIO 0x008aba00
extern "C" __declspec(naked) void asm_008aba00()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe6b764 }
	__asm { mov dword ptr [edx + 4], 0xe6b870 }
	__asm { mov dword ptr [edx + 0x18], 0xe6b878 }
	__asm { mov dword ptr [edx + 0x1c], 0xe6b884 }
	__asm { mov dword ptr [edx + 0x64], 0xe6b894 }
	__asm { mov dword ptr [edx + 0x70], 0xe6b89c }
	__asm { mov dword ptr [edx + 0x98], 0xe6b8bc }
	__asm { mov dword ptr [edx + 0xb0], 0xe6b8f0 }
	__asm { mov dword ptr [edx + 0xc4], 0xe6b91c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe6b924 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0088e620 }
}
