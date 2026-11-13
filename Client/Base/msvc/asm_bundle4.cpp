// Bundled inline-assembly functions (merged from the recursion output).

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006705d0();
// FUNCTION: ROBLOXSTUDIO 0x00670f40
extern "C" __declspec(naked) void asm_00670f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_006705d0 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { je L_00670f96 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00670f96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00670f96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00670f96: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ddb64[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_00670c90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00670fb0
extern "C" __declspec(naked) void asm_00670fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3b0d8 }
	__asm { call fn_00670c90 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00671151 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0067103d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067103d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0067109b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067109b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006710c6 }
	__asm { L_006710a6: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_006710b0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_006710b4 }
	__asm { L_006710b0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006710b4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006710a6 }
	__asm { cmp ecx, edx }
	__asm { je L_006710c6 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006710c9 }
	__asm { L_006710c6: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_006710c9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00671106 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006710f1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671106 }
	__asm { L_006710f1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671106: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671151 }
	__asm { cmp dword ptr [g_012ddb64], 0x29a }
	__asm { jne L_00671151 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067113c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671151 }
	__asm { L_0067113c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671151: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_006711a1 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006711a1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012ddb64], 0x29a }
	__asm { je L_0067132b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0067121c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067121c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00671274 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671274: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006712a0 }
	__asm { nop }
	__asm { L_00671280: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0067128a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0067128e }
	__asm { L_0067128a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0067128e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00671280 }
	__asm { cmp ecx, edx }
	__asm { je L_006712a0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006712a3 }
	__asm { L_006712a0: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_006712a3: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_006712e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006712cb }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006712e0 }
	__asm { L_006712cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006712e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067132b }
	__asm { cmp dword ptr [g_012ddb64], 0x29a }
	__asm { je L_0067132b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671316 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067132b }
	__asm { L_00671316: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067132b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb6c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_00670d30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00671340
extern "C" __declspec(naked) void asm_00671340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3b0e0 }
	__asm { call fn_00670d30 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_006714e1 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_006713cd }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006713cd: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0067142b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067142b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00671456 }
	__asm { L_00671436: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00671440 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00671444 }
	__asm { L_00671440: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00671444: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00671436 }
	__asm { cmp ecx, edx }
	__asm { je L_00671456 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00671459 }
	__asm { L_00671456: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_00671459: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00671496 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671481 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671496 }
	__asm { L_00671481: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671496: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006714e1 }
	__asm { cmp dword ptr [g_012ddb6c], 0x29a }
	__asm { jne L_006714e1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006714cc }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006714e1 }
	__asm { L_006714cc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006714e1: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_00671531 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671531: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012ddb6c], 0x29a }
	__asm { je L_006716bb }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_006715ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006715ac: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00671604 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671604: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00671630 }
	__asm { nop }
	__asm { L_00671610: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0067161a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0067161e }
	__asm { L_0067161a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0067161e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00671610 }
	__asm { cmp ecx, edx }
	__asm { je L_00671630 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00671633 }
	__asm { L_00671630: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00671633: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00671670 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067165b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671670 }
	__asm { L_0067165b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671670: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006716bb }
	__asm { cmp dword ptr [g_012ddb6c], 0x29a }
	__asm { je L_006716bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006716a6 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006716bb }
	__asm { L_006716a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006716bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb54[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_00670dd0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006716d0
extern "C" __declspec(naked) void asm_006716d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3b0c8 }
	__asm { call fn_00670dd0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00671871 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0067175d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067175d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_006717bb }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006717bb: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006717e6 }
	__asm { L_006717c6: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_006717d0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_006717d4 }
	__asm { L_006717d0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006717d4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006717c6 }
	__asm { cmp ecx, edx }
	__asm { je L_006717e6 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006717e9 }
	__asm { L_006717e6: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_006717e9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00671826 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671811 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671826 }
	__asm { L_00671811: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671826: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671871 }
	__asm { cmp dword ptr [g_012ddb54], 0x29a }
	__asm { jne L_00671871 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067185c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671871 }
	__asm { L_0067185c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671871: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_006718c1 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006718c1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012ddb54], 0x29a }
	__asm { je L_00671a4b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0067193c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067193c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00671994 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671994: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006719c0 }
	__asm { nop }
	__asm { L_006719a0: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_006719aa }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_006719ae }
	__asm { L_006719aa: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006719ae: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006719a0 }
	__asm { cmp ecx, edx }
	__asm { je L_006719c0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006719c3 }
	__asm { L_006719c0: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_006719c3: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00671a00 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006719eb }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671a00 }
	__asm { L_006719eb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671a00: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671a4b }
	__asm { cmp dword ptr [g_012ddb54], 0x29a }
	__asm { je L_00671a4b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671a36 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671a4b }
	__asm { L_00671a36: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671a4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_00670e70();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00671a60
extern "C" __declspec(naked) void asm_00671a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3b0d0 }
	__asm { call fn_00670e70 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00671c01 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_00671aed }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671aed: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_00671b4b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671b4b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00671b76 }
	__asm { L_00671b56: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00671b60 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00671b64 }
	__asm { L_00671b60: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00671b64: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00671b56 }
	__asm { cmp ecx, edx }
	__asm { je L_00671b76 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00671b79 }
	__asm { L_00671b76: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_00671b79: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00671bb6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671ba1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671bb6 }
	__asm { L_00671ba1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671bb6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671c01 }
	__asm { cmp dword ptr [g_012ddb5c], 0x29a }
	__asm { jne L_00671c01 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671bec }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671c01 }
	__asm { L_00671bec: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671c01: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_00671c51 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671c51: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012ddb5c], 0x29a }
	__asm { je L_00671ddb }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00671ccc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671ccc: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00671d24 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671d24: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00671d50 }
	__asm { nop }
	__asm { L_00671d30: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00671d3a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00671d3e }
	__asm { L_00671d3a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00671d3e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00671d30 }
	__asm { cmp ecx, edx }
	__asm { je L_00671d50 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00671d53 }
	__asm { L_00671d50: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00671d53: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00671d90 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671d7b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671d90 }
	__asm { L_00671d7b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671d90: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671ddb }
	__asm { cmp dword ptr [g_012ddb5c], 0x29a }
	__asm { je L_00671ddb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671dc6 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671ddb }
	__asm { L_00671dc6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671ddb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb64[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00670a20();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006725e0
extern "C" __declspec(naked) void asm_006725e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0067264f }
	__asm { cmp dword ptr [g_012ddb64], 0x29a }
	__asm { je L_0067264f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0067263e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067264f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0067263e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067264f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00670a20 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00672668 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0067266a }
	__asm { L_00672668: }
	__asm { xor eax, eax }
	__asm { L_0067266a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_006726db }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006726c6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_006726c6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006726c6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006726db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ddb6c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00670ac0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006726f0
extern "C" __declspec(naked) void asm_006726f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0067275f }
	__asm { cmp dword ptr [g_012ddb6c], 0x29a }
	__asm { je L_0067275f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0067274e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067275f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0067274e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067275f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00670ac0 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00672778 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0067277a }
	__asm { L_00672778: }
	__asm { xor eax, eax }
	__asm { L_0067277a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_006727eb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006727d6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_006727d6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006727d6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006727eb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ddb54[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00670b60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00672800
extern "C" __declspec(naked) void asm_00672800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0067286f }
	__asm { cmp dword ptr [g_012ddb54], 0x29a }
	__asm { je L_0067286f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0067285e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067286f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0067285e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067286f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00670b60 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00672888 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0067288a }
	__asm { L_00672888: }
	__asm { xor eax, eax }
	__asm { L_0067288a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_006728fb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006728e6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_006728e6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006728e6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006728fb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ddb5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00670c00();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00672910
extern "C" __declspec(naked) void asm_00672910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0067297f }
	__asm { cmp dword ptr [g_012ddb5c], 0x29a }
	__asm { je L_0067297f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0067296e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067297f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0067296e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067297f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00670c00 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00672998 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0067299a }
	__asm { L_00672998: }
	__asm { xor eax, eax }
	__asm { L_0067299a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_00672a0b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006729f6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_006729f6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006729f6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00672a0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e3b3e4[];
extern "C" char g_00e3b3e8[];
extern "C" void fn_00629560();
extern "C" void fn_006733a0();
extern "C" void fn_00673b00();
extern "C" void fn_006da410();
extern "C" void fn_006e2430();
// FUNCTION: ROBLOXSTUDIO 0x00672ec0
extern "C" __declspec(naked) void asm_00672ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xf0 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { push edi }
	__asm { fstp dword ptr [ebx] }
	__asm { push eax }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { fstp dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp dword ptr [ebx + 8] }
	__asm { call fn_00629560 }
	__asm { mov ecx, eax }
	__asm { call fn_006da410 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { mulss xmm0, dword ptr [g_00e3b3e8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { mulss xmm0, dword ptr [g_00e3b3e4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xf0] }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { push eax }
	__asm { call fn_00673b00 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call fn_006e2430 }
	__asm { mov esi, eax }
	__asm { lea edi, [ebx + 0xc] }
	__asm { mov ecx, 0x10 }
	__asm { rep movsd }
	__asm { mov ecx, ebx }
	__asm { call fn_006733a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006733a0();
extern "C" void fn_006e2a00();
extern "C" void fn_006e2be0();
extern "C" void fn_006e3ec0();
// FUNCTION: ROBLOXSTUDIO 0x00672f50
extern "C" __declspec(naked) void asm_00672f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x6c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { mov ebx, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0x3f800000 }
	__asm { call fn_006e2be0 }
	__asm { mov ecx, eax }
	__asm { call fn_006e2a00 }
	__asm { mov ecx, eax }
	__asm { call fn_006e3ec0 }
	__asm { fld dword ptr [eax] }
	__asm { lea edi, [ebx + 0xc] }
	__asm { fstp dword ptr [ebx] }
	__asm { mov ecx, 0x10 }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ebx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ebx + 8] }
	__asm { rep movsd }
	__asm { mov ecx, ebx }
	__asm { call fn_006733a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006733a0();
extern "C" void fn_00673990();
// FUNCTION: ROBLOXSTUDIO 0x00672fd0
extern "C" __declspec(naked) void asm_00672fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x10 }
	__asm { mov ebx, ecx }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00673990 }
	__asm { mov esi, eax }
	__asm { lea edi, [ebx + 0x4c] }
	__asm { mov ecx, 0x10 }
	__asm { rep movsd }
	__asm { add esp, 0x14 }
	__asm { mov ecx, ebx }
	__asm { call fn_006733a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006733a0();
extern "C" void fn_006738b0();
// FUNCTION: ROBLOXSTUDIO 0x00673030
extern "C" __declspec(naked) void asm_00673030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ebx, ecx }
	__asm { sub esp, 0x10 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_006738b0 }
	__asm { mov esi, eax }
	__asm { lea edi, [ebx + 0x4c] }
	__asm { mov ecx, 0x10 }
	__asm { rep movsd }
	__asm { add esp, 0x18 }
	__asm { mov ecx, ebx }
	__asm { call fn_006733a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380b8[];
// FUNCTION: ROBLOXSTUDIO 0x006730c0
extern "C" __declspec(naked) void asm_006730c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm6, dword ptr [eax + 0x14] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm4, dword ptr [eax + 0xc] }
	__asm { movss xmm7, dword ptr [eax] }
	__asm { movss xmm5, dword ptr [eax + 0x10] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm7, xmm4 }
	__asm { subss xmm4, dword ptr [eax] }
	__asm { addss xmm1, xmm6 }
	__asm { subss xmm6, dword ptr [eax + 8] }
	__asm { addss xmm0, xmm5 }
	__asm { subss xmm5, dword ptr [eax + 4] }
	__asm { xor eax, eax }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { mulss xmm7, xmm1 }
	__asm { mulss xmm4, xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm7 }
	__asm { movaps xmm7, xmm0 }
	__asm { mulss xmm7, xmm1 }
	__asm { mulss xmm5, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm7 }
	__asm { movss xmm7, dword ptr [ebp + 8] }
	__asm { mulss xmm7, xmm1 }
	__asm { mulss xmm6, xmm1 }
	__asm { movss dword ptr [ebp + 8], xmm7 }
	__asm { movss xmm7, dword ptr [ebp - 8] }
	__asm { movss xmm3, dword ptr [ebp + 8] }
	__asm { add ecx, 0xe4 }
	__asm { mov edi, edi }
	__asm { L_00673150: }
	__asm { movss xmm2, dword ptr [ecx - 0x14] }
	__asm { mulss xmm2, dword ptr [ebp - 4] }
	__asm { movss xmm0, dword ptr [ecx - 0x18] }
	__asm { movss xmm1, dword ptr [ecx - 4] }
	__asm { mulss xmm0, xmm7 }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ecx - 0x10] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ecx - 8] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm2, dword ptr [ecx - 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { addss xmm1, xmm0 }
	__asm { xorps xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { comiss xmm0, xmm2 }
	__asm { ja L_006731b7 }
	__asm { inc eax }
	__asm { add ecx, 0x1c }
	__asm { cmp eax, 6 }
	__asm { jl L_00673150 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006731b7: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006746d0
extern "C" __declspec(naked) void asm_006746d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { je L_006747cf }
	__asm { push ebx }
	__asm { lea ebx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp ebx, eax }
	__asm { je L_006747ce }
	__asm { push esi }
	__asm { L_006746f5: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, ebx }
	__asm { mov ebx, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, ebx }
	__asm { jne L_00674722 }
	__asm { cmp esi, eax }
	__asm { jmp L_00674725 }
	__asm { L_00674722: }
	__asm { cmp ecx, dword ptr [ebp - 0x14] }
	__asm { L_00674725: }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { test al, al }
	__asm { je L_0067476b }
	__asm { mov eax, ebx }
	__asm { cmp edi, ebx }
	__asm { je L_00674755 }
	__asm { L_00674736: }
	__asm { mov ecx, dword ptr [eax - 0x10] }
	__asm { sub eax, 0x10 }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { cmp eax, edi }
	__asm { jne L_00674736 }
	__asm { L_00674755: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { jmp L_006747be }
	__asm { L_0067476b: }
	__asm { mov ecx, ebx }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { L_00674770: }
	__asm { mov eax, dword ptr [ecx - 8] }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { mov edi, dword ptr [eax + 0x20] }
	__asm { sub ecx, 0x10 }
	__asm { cmp esi, edi }
	__asm { jne L_00674782 }
	__asm { cmp ebx, eax }
	__asm { L_00674782: }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { test al, al }
	__asm { je L_006747a4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov edx, ecx }
	__asm { jmp L_00674770 }
	__asm { L_006747a4: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edx + 8], ebx }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_006747be: }
	__asm { add ebx, 0x10 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp ebx, dword ptr [ebp + 0xc] }
	__asm { jne L_006746f5 }
	__asm { pop esi }
	__asm { L_006747ce: }
	__asm { pop ebx }
	__asm { L_006747cf: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00674d20();
// FUNCTION: ROBLOXSTUDIO 0x006747e0
extern "C" __declspec(naked) void asm_006747e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub ebx, edi }
	__asm { sar ebx, 4 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { test ecx, ecx }
	__asm { jle L_006748d5 }
	__asm { mov edx, ecx }
	__asm { shl edx, 4 }
	__asm { lea eax, [ecx*2 + 2] }
	__asm { add edx, edi }
	__asm { push esi }
	__asm { L_00674813: }
	__asm { sub edx, 0x10 }
	__asm { sub eax, 2 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov esi, ecx }
	__asm { cmp edx, ebx }
	__asm { jge L_00674884 }
	__asm { L_00674843: }
	__asm { mov eax, edx }
	__asm { add eax, eax }
	__asm { movss xmm0, dword ptr [edi + eax*8 + 4] }
	__asm { comiss xmm0, dword ptr [edi + eax*8 - 0xc] }
	__asm { jbe L_00674855 }
	__asm { dec edx }
	__asm { L_00674855: }
	__asm { mov ecx, edx }
	__asm { shl ecx, 4 }
	__asm { add ecx, edi }
	__asm { shl esi, 4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov esi, edx }
	__asm { lea edx, [edx*2 + 2] }
	__asm { cmp edx, ebx }
	__asm { jl L_00674843 }
	__asm { L_00674884: }
	__asm { cmp edx, ebx }
	__asm { jne L_006748af }
	__asm { mov ecx, ebx }
	__asm { add ecx, ecx }
	__asm { shl esi, 4 }
	__asm { mov eax, dword ptr [edi + ecx*8 - 0x10] }
	__asm { add esi, edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + ecx*8 - 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + ecx*8 - 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + ecx*8 - 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea esi, [ebx - 1] }
	__asm { L_006748af: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00674d20 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { jg L_00674813 }
	__asm { pop esi }
	__asm { L_006748d5: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00674da0();
// FUNCTION: ROBLOXSTUDIO 0x006748e0
extern "C" __declspec(naked) void asm_006748e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub edi, ebx }
	__asm { sar edi, 4 }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { test ecx, ecx }
	__asm { jle L_006749ec }
	__asm { mov edx, ecx }
	__asm { shl edx, 4 }
	__asm { lea eax, [ecx*2 + 2] }
	__asm { add edx, ebx }
	__asm { push esi }
	__asm { L_00674916: }
	__asm { sub edx, 0x10 }
	__asm { sub eax, 2 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, ecx }
	__asm { cmp edx, edi }
	__asm { jge L_0067499c }
	__asm { L_00674946: }
	__asm { mov eax, edx }
	__asm { add eax, eax }
	__asm { mov ecx, dword ptr [ebx + eax*8 + 8] }
	__asm { mov eax, dword ptr [ebx + eax*8 - 8] }
	__asm { mov edi, dword ptr [ecx + 0x20] }
	__asm { mov ebx, dword ptr [eax + 0x20] }
	__asm { cmp edi, ebx }
	__asm { jne L_0067495e }
	__asm { cmp ecx, eax }
	__asm { L_0067495e: }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { test al, al }
	__asm { je L_00674967 }
	__asm { dec edx }
	__asm { L_00674967: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edx }
	__asm { shl ecx, 4 }
	__asm { add ecx, ebx }
	__asm { shl esi, 4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { add esi, ebx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov esi, edx }
	__asm { lea edx, [edx*2 + 2] }
	__asm { cmp edx, edi }
	__asm { jl L_00674946 }
	__asm { L_0067499c: }
	__asm { cmp edx, edi }
	__asm { jne L_006749c6 }
	__asm { mov ecx, edi }
	__asm { shl ecx, 4 }
	__asm { add ecx, ebx }
	__asm { shl esi, 4 }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { add esi, ebx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx - 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx - 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx - 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea esi, [edi - 1] }
	__asm { L_006749c6: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00674da0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { jg L_00674916 }
	__asm { pop esi }
	__asm { L_006749ec: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00674a00
extern "C" __declspec(naked) void asm_00674a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [ebx + 4] }
	__asm { comiss xmm0, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { jbe L_00674a54 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [ecx + 0xc], edi }
	__asm { L_00674a54: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { comiss xmm0, dword ptr [ebx + 4] }
	__asm { jbe L_00674ac9 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { mov dword ptr [ebx + 8], edx }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { movss xmm0, dword ptr [ebx + 4] }
	__asm { comiss xmm0, dword ptr [ecx + 4] }
	__asm { jbe L_00674ac9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [ecx + 4], edi }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00674ac9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00674ad0
extern "C" __declspec(naked) void asm_00674ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edx + 0x20] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { cmp ecx, esi }
	__asm { jne L_00674aef }
	__asm { cmp eax, edx }
	__asm { L_00674aef: }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { test al, al }
	__asm { je L_00674b2f }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { mov dword ptr [ebx + 0xc], edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00674b2f: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov edx, dword ptr [eax + 0x20] }
	__asm { cmp edx, dword ptr [esi + 0x20] }
	__asm { jne L_00674b42 }
	__asm { cmp eax, esi }
	__asm { L_00674b42: }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { test al, al }
	__asm { je L_00674bd3 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], edx }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov esi, dword ptr [edx + 0x20] }
	__asm { cmp ecx, esi }
	__asm { jne L_00674b9e }
	__asm { cmp eax, edx }
	__asm { L_00674b9e: }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { test al, al }
	__asm { je L_00674bd3 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { L_00674bd3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00674d20
extern "C" __declspec(naked) void asm_00674d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ecx - 1] }
	__asm { cdq }
	__asm { push esi }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jge L_00674d80 }
	__asm { mov edi, edi }
	__asm { L_00674d40: }
	__asm { mov edx, esi }
	__asm { add edx, edx }
	__asm { movss xmm0, dword ptr [edi + edx*8 + 4] }
	__asm { comiss xmm0, dword ptr [ebx + 4] }
	__asm { jbe L_00674d80 }
	__asm { mov eax, dword ptr [edi + edx*8] }
	__asm { shl ecx, 4 }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { mov ecx, esi }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jl L_00674d40 }
	__asm { L_00674d80: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { shl ecx, 4 }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006745f0();
extern "C" void fn_006747e0();
extern "C" void fn_00675020();
extern "C" void fn_00675140();
// FUNCTION: ROBLOXSTUDIO 0x00674e40
extern "C" __declspec(naked) void asm_00674e40()
{
	__asm { L_00674e40: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 4 }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00674ed7 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, edi }
	__asm { L_00674e60: }
	__asm { test ebx, ebx }
	__asm { jle L_00674ef2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00675140 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebx, eax }
	__asm { sar ebx, 1 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 1 }
	__asm { add ebx, eax }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { and ecx, 0xfffffff0 }
	__asm { and eax, 0xfffffff0 }
	__asm { push ebx }
	__asm { cmp eax, ecx }
	__asm { jge L_00674ebc }
	__asm { push edx }
	__asm { push edi }
	__asm { call L_00674e40 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jmp L_00674ec8 }
	__asm { L_00674ebc: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00674e40 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00674ec8: }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 4 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00674e60 }
	__asm { L_00674ed7: }
	__asm { cmp eax, 1 }
	__asm { jle L_00674eeb }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006745f0 }
	__asm { add esp, 0x10 }
	__asm { L_00674eeb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00674ef2: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00674ed7 }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { and eax, 0xfffffff0 }
	__asm { cmp eax, 0x10 }
	__asm { jle L_00674f14 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006747e0 }
	__asm { add esp, 0x14 }
	__asm { L_00674f14: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00675020 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006746d0();
extern "C" void fn_006748e0();
extern "C" void fn_006750b0();
extern "C" void fn_00675490();
// FUNCTION: ROBLOXSTUDIO 0x00674f30
extern "C" __declspec(naked) void asm_00674f30()
{
	__asm { L_00674f30: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 4 }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00674fc7 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, edi }
	__asm { L_00674f50: }
	__asm { test ebx, ebx }
	__asm { jle L_00674fe2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00675490 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebx, eax }
	__asm { sar ebx, 1 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 1 }
	__asm { add ebx, eax }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { and ecx, 0xfffffff0 }
	__asm { and eax, 0xfffffff0 }
	__asm { push ebx }
	__asm { cmp eax, ecx }
	__asm { jge L_00674fac }
	__asm { push edx }
	__asm { push edi }
	__asm { call L_00674f30 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jmp L_00674fb8 }
	__asm { L_00674fac: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00674f30 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00674fb8: }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 4 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00674f50 }
	__asm { L_00674fc7: }
	__asm { cmp eax, 1 }
	__asm { jle L_00674fdb }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006746d0 }
	__asm { add esp, 0x10 }
	__asm { L_00674fdb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00674fe2: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00674fc7 }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { and eax, 0xfffffff0 }
	__asm { cmp eax, 0x10 }
	__asm { jle L_00675004 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006748e0 }
	__asm { add esp, 0x14 }
	__asm { L_00675004: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006750b0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10528[];
extern "C" char g_00e13110[];
extern "C" char g_01210363[];
extern "C" void fn_004115f0();
extern "C" void fn_0055a170();
extern "C" void fn_005eb890();
extern "C" void fn_006ac410();
extern "C" void fn_006b8a90();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00675870
extern "C" __declspec(naked) void asm_00675870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12433 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0xe3ba04 }
	__asm { mov dword ptr [esi], 0xe3ba14 }
	__asm { mov dword ptr [esi + 4], 0xe3ba84 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { fstp qword ptr [esi + 0x20] }
	__asm { push 0x78 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_006758fc }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006758fc: }
	__asm { lea eax, [ecx + 0x78] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { push 0x78 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0067592c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0067592c: }
	__asm { lea eax, [ecx + 0x78] }
	__asm { mov dword ptr [esi + 0x40], ecx }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov dword ptr [esi + 0x4c], ecx }
	__asm { mov dword ptr [esi + 0x48], ecx }
	__asm { push 0x78 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0067595c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0067595c: }
	__asm { lea eax, [ecx + 0x78] }
	__asm { mov dword ptr [esi + 0x58], ecx }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov dword ptr [esi + 0x64], ecx }
	__asm { mov dword ptr [esi + 0x60], ecx }
	__asm { push 0x78 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0067598f }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0067598f: }
	__asm { lea eax, [ecx + 0x78] }
	__asm { mov dword ptr [esi + 0x70], ecx }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { mov dword ptr [esi + 0x7c], ecx }
	__asm { mov dword ptr [esi + 0x78], ecx }
	__asm { lea eax, [esi + 0x88] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x55a200 }
	__asm { push 0x131c95c }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0055a170 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov byte ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov word ptr [esi + 0xa0], 0x100 }
	__asm { mov byte ptr [esi + 0xa2], 1 }
	__asm { mov dword ptr [esi + 0xa4], 0x461c4000 }
	__asm { mov dword ptr [esi + 0xa8], 0x461c4000 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { mov al, byte ptr [g_01210363] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { test al, al }
	__asm { je L_00675a4e }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe3bf1c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00675a4e: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e13110] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 8], 3 }
	__asm { sete al }
	__asm { push eax }
	__asm { call fn_005eb890 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00675a7d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00675a7d: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax], 0 }
	__asm { jne L_00675ab3 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 0xc], 0xe3bf34 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00675ab3: }
	__asm { cmp byte ptr [eax + 1], 0 }
	__asm { jne L_00675ae8 }
	__asm { cmp byte ptr [eax + 2], 0 }
	__asm { jne L_00675ae8 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 0xc], 0xe3bf5c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00675ae8: }
	__asm { push 0x228 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { test eax, eax }
	__asm { je L_00675b0f }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_006ac410 }
	__asm { jmp L_00675b11 }
	__asm { L_00675b0f: }
	__asm { xor eax, eax }
	__asm { L_00675b11: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { je L_00675b25 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00675b25: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e13108[];
extern "C" char g_01210363[];
extern "C" char g_012de1b9[];
extern "C" void fn_004226b0();
extern "C" void fn_00558b00();
extern "C" void fn_00675de0();
extern "C" void fn_00677cd0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9800();
extern "C" void fn_006b9e50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00675b40
extern "C" __declspec(naked) void asm_00675b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd124e5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe3ba14 }
	__asm { mov dword ptr [edi + 4], 0xe3ba84 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00675de0 }
	__asm { cmp byte ptr [g_012de1b9], 0 }
	__asm { je L_00675b9e }
	__asm { mov ecx, edi }
	__asm { call fn_00677cd0 }
	__asm { L_00675b9e: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e13108] }
	__asm { mov al, byte ptr [g_01210363] }
	__asm { test al, al }
	__asm { je L_00675bc2 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3bffc }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00675bc2: }
	__asm { mov esi, dword ptr [edi + 0xb0] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test esi, esi }
	__asm { je L_00675bf7 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00675bf7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00675bf7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00675bf7: }
	__asm { lea esi, [edi + 0x9c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test eax, eax }
	__asm { je L_00675c21 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00675c21: }
	__asm { lea esi, [edi + 0x94] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test eax, eax }
	__asm { je L_00675c4b }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00675c4b: }
	__asm { mov esi, dword ptr [edi + 0x90] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test esi, esi }
	__asm { je L_00675c7c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00675c7c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00675c7c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00675c7c: }
	__asm { lea esi, [edi + 0x88] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { call fn_00558b00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test esi, esi }
	__asm { je L_00675cd2 }
	__asm { add esi, 5 }
	__asm { je L_00675ca4 }
	__asm { add esi, -5 }
	__asm { jmp L_00675ca6 }
	__asm { L_00675ca4: }
	__asm { xor esi, esi }
	__asm { L_00675ca6: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00675cd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00675cd2 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00675cd2: }
	__asm { mov edx, dword ptr [edi + 0x74] }
	__asm { mov esi, dword ptr [edi + 0x78] }
	__asm { mov ecx, dword ptr [edi + 0x80] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_00675cf1 }
	__asm { sub edx, dword ptr [edi + 0x70] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_00675cf1: }
	__asm { lea eax, [esi + ecx*8] }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { test eax, eax }
	__asm { je L_00675d07 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00675d07: }
	__asm { mov edx, dword ptr [edi + 0x5c] }
	__asm { mov esi, dword ptr [edi + 0x60] }
	__asm { mov ecx, dword ptr [edi + 0x68] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_00675d23 }
	__asm { sub edx, dword ptr [edi + 0x58] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_00675d23: }
	__asm { lea eax, [esi + ecx*8] }
	__asm { mov dword ptr [edi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { test eax, eax }
	__asm { je L_00675d39 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00675d39: }
	__asm { mov edx, dword ptr [edi + 0x44] }
	__asm { mov esi, dword ptr [edi + 0x48] }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_00675d55 }
	__asm { sub edx, dword ptr [edi + 0x40] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_00675d55: }
	__asm { lea eax, [esi + ecx*8] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_00675d6b }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00675d6b: }
	__asm { mov edx, dword ptr [edi + 0x2c] }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_00675d87 }
	__asm { sub edx, dword ptr [edi + 0x28] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_00675d87: }
	__asm { lea eax, [esi + ecx*8] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00675d9d }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00675d9d: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00675dae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00675dae: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00675dbf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00675dbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe3b994 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e3ca58[];
extern "C" char g_012fc994[];
extern "C" void fn_005eb680();
extern "C" void fn_00677a90();
extern "C" void fn_00678190();
extern "C" void fn_00678600();
extern "C" void fn_00678d20();
extern "C" void fn_0067f7b0();
extern "C" void fn_006ad490();
extern "C" void fn_006b8a90();
extern "C" void fn_0076ed70();
// FUNCTION: ROBLOXSTUDIO 0x00676470
extern "C" __declspec(naked) void asm_00676470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1255b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012fc994] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006764ab }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3c670 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006764ab: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00677a90 }
	__asm { fld qword ptr [g_00e3ca58] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [eax + 0x1b0] }
	__asm { fst qword ptr [esp + 0x10] }
	__asm { fst qword ptr [esp + 8] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_0076ed70 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea eax, [ecx + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x1ac] }
	__asm { push eax }
	__asm { call fn_0067f7b0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_006ad490 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00678190 }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { je L_00676518 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00678d20 }
	__asm { add esp, 0xc }
	__asm { L_00676518: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push 3 }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push 0xd }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005eb680 }
	__asm { fldz }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, esi }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00678600 }
	__asm { imul edi, ebx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { shl edi, 2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { pop ebx }
	__asm { test esi, esi }
	__asm { je L_006765bf }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006765bf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006765bf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006765bf: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006765ee }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006765ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006765ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006765ee: }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0067661f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067661f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0067661f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067661f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038198[];
extern "C" char g_01038214[];
extern "C" char g_01210362[];
extern "C" void fn_00403540();
extern "C" void fn_00573e60();
extern "C" void fn_00658bf0();
extern "C" void fn_00677560();
extern "C" void fn_00679610();
extern "C" void fn_0067f810();
extern "C" void fn_00699820();
extern "C" void fn_0069fe30();
extern "C" void fn_006a0310();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aba();
extern "C" void fn_006c5410();
extern "C" void fn_006c5500();
extern "C" void fn_006c5910();
extern "C" void fn_0076f480();
extern "C" void fn_00860040();
extern "C" void fn_00b13320();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00678600
extern "C" __declspec(naked) void asm_00678600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1261d }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c5410 }
	__asm { mov al, byte ptr [g_01210362] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00678648 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3c51c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00678648: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { fldz }
	__asm { fstp qword ptr [ebp - 0x1c] }
	__asm { mov edi, dword ptr [eax + 0x194] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00678872 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0x1fc] }
	__asm { call fn_00658bf0 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0x1a4] }
	__asm { call fn_006a0310 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_0069fe30 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x1b0] }
	__asm { call fn_0076f480 }
	__asm { cmp eax, 1 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { cmovle ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 0x1a0] }
	__asm { call fn_00699820 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ecx + 0x180] }
	__asm { lea eax, [ecx + 8] }
	__asm { push dword ptr [ecx + 0x17c] }
	__asm { mov ecx, dword ptr [ecx + 0x1ac] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { call fn_0067f810 }
	__asm { cmp byte ptr [esi + 0xa0], 0 }
	__asm { je L_006787ce }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00677560 }
	__asm { test al, al }
	__asm { je L_006787b6 }
	__asm { cmp dword ptr [esi + 0x8c], 0 }
	__asm { je L_006787b6 }
	__asm { push 1 }
	__asm { sub esp, 0x20 }
	__asm { mov ebx, esp }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x90] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00678794 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00678794: }
	__asm { push 0x84a3f0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00b13320 }
	__asm { add esp, 0x28 }
	__asm { mov ecx, ebx }
	__asm { call fn_00679610 }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { call fn_00860040 }
	__asm { L_006787b6: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006787ce }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006787ce: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_006c5410 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { fmul qword ptr [g_01038198] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x10 }
	__asm { fstp qword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_00573e60 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_006c5410 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { fmul qword ptr [g_01038198] }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { fst qword ptr [ebp - 0x1c] }
	__asm { lea ecx, [esi + 0x58] }
	__asm { fstp qword ptr [ebp - 0x14] }
	__asm { call fn_00573e60 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x50] }
	__asm { fld dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { fstp qword ptr [ebp - 0x14] }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call fn_00573e60 }
	__asm { L_00678872: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x14] }
	__asm { call fn_006c5910 }
	__asm { fsub qword ptr [ebp + 8] }
	__asm { fmul qword ptr [g_01038198] }
	__asm { fst dword ptr [esi + 0x1c] }
	__asm { mov cl, byte ptr [g_01210362] }
	__asm { test cl, cl }
	__asm { je L_006788e0 }
	__asm { fld dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fild dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { jns L_006788b9 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_006788b9: }
	__asm { movzx eax, cl }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xe3c538 }
	__asm { push eax }
	__asm { call fn_006b8aba }
	__asm { add esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006788e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp st(0) }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x00678920
extern "C" __declspec(naked) void asm_00678920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_00678a9d }
	__asm { test ah, ah }
	__asm { je L_00678a9d }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_00678962 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_00678962 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00678962: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_00678989 }
	__asm { cmp cl, al }
	__asm { je L_00678981 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_00678a92 }
	__asm { L_00678981: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00678989: }
	__asm { cmp cl, al }
	__asm { je L_0067899b }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_0067899f }
	__asm { L_0067899b: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_0067899f: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_006789c9 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe3b728] }
	__asm { mov edx, dword ptr [edx*4 + 0xe3b710] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_006789cd }
	__asm { L_006789c9: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_006789cd: }
	__asm { mov edx, dword ptr [edi*4 + 0xe3b738] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_006789ec }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006789ec }
	__asm { mov bh, 1 }
	__asm { jmp L_006789ee }
	__asm { L_006789ec: }
	__asm { xor bh, bh }
	__asm { L_006789ee: }
	__asm { cmp dl, al }
	__asm { je L_00678a13 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe3b710] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_00678a17 }
	__asm { L_00678a13: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_00678a17: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_00678a2f }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_00678a2f }
	__asm { mov bl, 1 }
	__asm { jmp L_00678a31 }
	__asm { L_00678a2f: }
	__asm { xor bl, bl }
	__asm { L_00678a31: }
	__asm { cmp ah, 3 }
	__asm { jne L_00678a52 }
	__asm { cmp cl, al }
	__asm { je L_00678a52 }
	__asm { cmp dl, al }
	__asm { je L_00678a52 }
	__asm { cmp ch, al }
	__asm { je L_00678a52 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_00678a52 }
	__asm { mov dl, 1 }
	__asm { jmp L_00678a54 }
	__asm { L_00678a52: }
	__asm { xor dl, dl }
	__asm { L_00678a54: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00678a64 }
	__asm { test bh, bh }
	__asm { je L_00678a64 }
	__asm { mov cl, 1 }
	__asm { jmp L_00678a66 }
	__asm { L_00678a64: }
	__asm { xor cl, cl }
	__asm { L_00678a66: }
	__asm { test al, al }
	__asm { jne L_00678a6f }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_00678a78 }
	__asm { L_00678a6f: }
	__asm { test bh, bh }
	__asm { jne L_00678a7c }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_00678a7c }
	__asm { L_00678a78: }
	__asm { xor al, al }
	__asm { jmp L_00678a7e }
	__asm { L_00678a7c: }
	__asm { mov al, 1 }
	__asm { L_00678a7e: }
	__asm { test dl, dl }
	__asm { jne L_00678a92 }
	__asm { test bl, bl }
	__asm { je L_00678a8a }
	__asm { test al, al }
	__asm { jne L_00678a92 }
	__asm { L_00678a8a: }
	__asm { test cl, cl }
	__asm { je L_00678981 }
	__asm { L_00678a92: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00678a9d: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100fc[];
extern "C" char g_00e13190[];
extern "C" void fn_0067dca0();
extern "C" void fn_0067dfa0();
extern "C" void fn_0067efb0();
extern "C" void fn_006b98f0();
extern "C" void fn_008f8500();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf6970();
// FUNCTION: ROBLOXSTUDIO 0x00678bc0
extern "C" __declspec(naked) void asm_00678bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { call fn_0067dca0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0067dfa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0067efb0 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { add esp, 0x20 }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { mov ecx, eax }
	__asm { imul ecx, ecx, 0xf4240 }
	__asm { sub esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { imul esi, esi, 0x3e8 }
	__asm { cdq }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { add ebx, 0x78 }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { adc edi, 0 }
	__asm { call fn_008f8500 }
	__asm { test al, al }
	__asm { jne L_00678cf9 }
	__asm { L_00678c42: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { call fn_0067dca0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0067dfa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0067efb0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x20 }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { mov ecx, eax }
	__asm { imul ecx, ecx, 0xf4240 }
	__asm { sub esi, ecx }
	__asm { cdq }
	__asm { imul esi, esi, 0x3e8 }
	__asm { cmp eax, ebx }
	__asm { jne L_00678ca4 }
	__asm { cmp edx, edi }
	__asm { jne L_00678ca6 }
	__asm { sub esi, dword ptr [ebp - 4] }
	__asm { cmp esi, 1 }
	__asm { jne L_00678cae }
	__asm { jmp L_00678d00 }
	__asm { L_00678ca4: }
	__asm { cmp edx, edi }
	__asm { L_00678ca6: }
	__asm { jg L_00678d00 }
	__asm { jl L_00678cae }
	__asm { cmp eax, ebx }
	__asm { ja L_00678d00 }
	__asm { L_00678cae: }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { call dword ptr [g_00e100fc] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0x14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { call fn_0067dca0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e13190] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { call fn_008f8500 }
	__asm { test al, al }
	__asm { je L_00678c42 }
	__asm { L_00678cf9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00678d00: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe3c57c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00679b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00679530
extern "C" __declspec(naked) void asm_00679530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add edx, 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test eax, eax }
	__asm { je L_00679587 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00679587: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00679b90 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006795cf }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006795cf: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006795f9 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006795f9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006795f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00679530();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00679610
extern "C" __declspec(naked) void asm_00679610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { add edx, 4 }
	__asm { mov dword ptr [edx - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test eax, eax }
	__asm { je L_00679664 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00679664: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00679530 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006796ac }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006796ac: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006796d6 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006796d6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006796d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0067e6e0();
// FUNCTION: ROBLOXSTUDIO 0x006796f0
extern "C" __declspec(naked) void asm_006796f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ebx, ebx }
	__asm { jne L_0067970e }
	__asm { cmp edi, 0x80000000 }
	__asm { je L_0067975b }
	__asm { L_0067970e: }
	__asm { cmp ebx, -1 }
	__asm { jne L_0067971b }
	__asm { cmp edi, 0x7fffffff }
	__asm { je L_0067975b }
	__asm { L_0067971b: }
	__asm { cmp ebx, -2 }
	__asm { jne L_00679728 }
	__asm { cmp edi, 0x7fffffff }
	__asm { je L_006797a6 }
	__asm { L_00679728: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { test eax, eax }
	__asm { jne L_00679739 }
	__asm { cmp esi, 0x80000000 }
	__asm { je L_0067975b }
	__asm { L_00679739: }
	__asm { cmp eax, -1 }
	__asm { jne L_00679746 }
	__asm { cmp esi, 0x7fffffff }
	__asm { je L_0067975b }
	__asm { L_00679746: }
	__asm { cmp eax, -2 }
	__asm { jne L_00679835 }
	__asm { cmp esi, 0x7fffffff }
	__asm { jne L_00679835 }
	__asm { L_0067975b: }
	__asm { cmp ebx, -2 }
	__asm { jne L_00679768 }
	__asm { cmp edi, 0x7fffffff }
	__asm { je L_006797a6 }
	__asm { L_00679768: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, -2 }
	__asm { jne L_0067977d }
	__asm { cmp esi, 0x7fffffff }
	__asm { je L_006797a6 }
	__asm { L_0067977d: }
	__asm { cmp ebx, -1 }
	__asm { jne L_00679792 }
	__asm { cmp edi, 0x7fffffff }
	__asm { jne L_00679792 }
	__asm { cmp eax, ebx }
	__asm { jne L_00679792 }
	__asm { cmp esi, edi }
	__asm { je L_006797a6 }
	__asm { L_00679792: }
	__asm { test ebx, ebx }
	__asm { jne L_006797bf }
	__asm { cmp edi, 0x80000000 }
	__asm { jne L_006797bf }
	__asm { test eax, eax }
	__asm { jne L_006797cc }
	__asm { cmp esi, edi }
	__asm { jne L_006797cc }
	__asm { L_006797a6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xfffffffe }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006797bf: }
	__asm { cmp ebx, -1 }
	__asm { jne L_006797e5 }
	__asm { cmp edi, 0x7fffffff }
	__asm { jne L_006797e5 }
	__asm { L_006797cc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006797e5: }
	__asm { cmp eax, -1 }
	__asm { jne L_0067980b }
	__asm { cmp esi, 0x7fffffff }
	__asm { jne L_0067980b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0x80000000 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0067980b: }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0067e6e0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00679832 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00679832: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00679835: }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sbb edi, esi }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0067e6e0();
// FUNCTION: ROBLOXSTUDIO 0x00679940
extern "C" __declspec(naked) void asm_00679940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test eax, eax }
	__asm { jne L_00679963 }
	__asm { cmp ebx, 0x80000000 }
	__asm { je L_006799b4 }
	__asm { L_00679963: }
	__asm { cmp eax, -1 }
	__asm { jne L_00679970 }
	__asm { cmp ebx, 0x7fffffff }
	__asm { je L_006799b4 }
	__asm { L_00679970: }
	__asm { cmp eax, -2 }
	__asm { jne L_00679981 }
	__asm { cmp ebx, 0x7fffffff }
	__asm { je L_00679a05 }
	__asm { L_00679981: }
	__asm { mov edi, dword ptr [edx] }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { test edi, edi }
	__asm { jne L_00679992 }
	__asm { cmp esi, 0x80000000 }
	__asm { je L_006799b4 }
	__asm { L_00679992: }
	__asm { cmp edi, -1 }
	__asm { jne L_0067999f }
	__asm { cmp esi, 0x7fffffff }
	__asm { je L_006799b4 }
	__asm { L_0067999f: }
	__asm { cmp edi, -2 }
	__asm { jne L_00679a8c }
	__asm { cmp esi, 0x7fffffff }
	__asm { jne L_00679a8c }
	__asm { L_006799b4: }
	__asm { cmp eax, -2 }
	__asm { jne L_006799c1 }
	__asm { cmp ebx, 0x7fffffff }
	__asm { je L_00679a05 }
	__asm { L_006799c1: }
	__asm { mov edi, dword ptr [edx] }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { cmp edi, -2 }
	__asm { jne L_006799d3 }
	__asm { cmp esi, 0x7fffffff }
	__asm { je L_00679a05 }
	__asm { L_006799d3: }
	__asm { cmp eax, -1 }
	__asm { jne L_006799ec }
	__asm { cmp ebx, 0x7fffffff }
	__asm { jne L_006799ec }
	__asm { test edi, edi }
	__asm { jne L_006799ec }
	__asm { cmp esi, 0x80000000 }
	__asm { je L_00679a05 }
	__asm { L_006799ec: }
	__asm { test eax, eax }
	__asm { jne L_00679a1e }
	__asm { cmp ebx, 0x80000000 }
	__asm { jne L_00679a1e }
	__asm { cmp edi, -1 }
	__asm { jne L_00679a2b }
	__asm { cmp esi, 0x7fffffff }
	__asm { jne L_00679a2b }
	__asm { L_00679a05: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xfffffffe }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00679a1e: }
	__asm { cmp eax, -1 }
	__asm { jne L_00679a44 }
	__asm { cmp ebx, 0x7fffffff }
	__asm { jne L_00679a44 }
	__asm { L_00679a2b: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00679a44: }
	__asm { cmp edi, -1 }
	__asm { jne L_00679a62 }
	__asm { cmp esi, 0x7fffffff }
	__asm { jne L_00679a62 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00679a62: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0067e6e0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00679a89 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0x80000000 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00679a89: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { L_00679a8c: }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { adc esi, ebx }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00679ab0
extern "C" __declspec(naked) void asm_00679ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd126db }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00679b36 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00679b0f }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00679b0f: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_00679b38 }
	__asm { L_00679b36: }
	__asm { xor esi, esi }
	__asm { L_00679b38: }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { jb L_00679b56 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00679b56: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00679b80 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00679b80 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00679b80: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_009fdc90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00679b90
extern "C" __declspec(naked) void asm_00679b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e80 }
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
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { add edx, 4 }
	__asm { mov dword ptr [edx - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test eax, eax }
	__asm { je L_00679be7 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00679be7: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xe3c98c }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009fdc90 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00679c3d }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00679c3d: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00679c67 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00679c67 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00679c67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012de224[];
extern "C" char g_012de228[];
extern "C" char g_012de22c[];
extern "C" char g_012de230[];
extern "C" char g_012de234[];
extern "C" char g_012de238[];
extern "C" char g_012de23c[];
extern "C" char g_012de240[];
extern "C" char g_012de264[];
extern "C" char g_012de268[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00679c80
extern "C" __declspec(naked) void asm_00679c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd126fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de228] }
	__asm { test al, 1 }
	__asm { jne L_00679cc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de228], eax }
	__asm { push 0xe9e158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de224], eax }
	__asm { L_00679cc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1271e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de238] }
	__asm { test al, 1 }
	__asm { jne L_00679d12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de238], eax }
	__asm { push 0xe9dac4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de234], eax }
	__asm { L_00679d12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd43e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de240] }
	__asm { test al, 1 }
	__asm { jne L_00679d62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de240], eax }
	__asm { push 0xe9dcf4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de23c], eax }
	__asm { L_00679d62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1273e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de230] }
	__asm { test al, 1 }
	__asm { jne L_00679db2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de230], eax }
	__asm { push 0xe852e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de22c], eax }
	__asm { L_00679db2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1275e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de268] }
	__asm { test al, 1 }
	__asm { jne L_00679dfa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de268], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012de264], eax }
	__asm { L_00679dfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de25c[];
extern "C" char g_012de260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408d90();
extern "C" void fn_004115f0();
extern "C" void fn_0057dce0();
extern "C" void fn_0067a370();
extern "C" void fn_0067a910();
extern "C" void fn_0067ae20();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ac0();
extern "C" void fn_007cb440();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0067a400
extern "C" __declspec(naked) void asm_0067a400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd127f6 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { call fn_0067ae20 }
	__asm { test eax, eax }
	__asm { jne L_0067a53d }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0067a370 }
	__asm { add esp, 4 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b5ac0 }
	__asm { push 0x679e10 }
	__asm { push 0x12de244 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de260] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067a484 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de260], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0089c670 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [g_012de25c], ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0067a48a }
	__asm { L_0067a484: }
	__asm { mov ecx, dword ptr [g_012de25c] }
	__asm { L_0067a48a: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x64] }
	__asm { lea ecx, [eax + ecx*8] }
	__asm { call fn_0057dce0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067a505 }
	__asm { call fn_0067a910 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { cmp esi, eax }
	__asm { je L_0067a505 }
	__asm { call fn_0067a910 }
	__asm { mov esi, dword ptr [ebx + 0x70] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00408d90 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0067a505 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067a4f0 }
	__asm { push 0x69 }
	__asm { push 0xe35f88 }
	__asm { push 0x1003e40 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067a505 }
	__asm { L_0067a4f0: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe35fd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067a505: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0067a539 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0067a539 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0067a539 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0067a539: }
	__asm { pop esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { L_0067a53d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0067a070();
extern "C" void fn_007b5ea0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067a550
extern "C" __declspec(naked) void asm_0067a550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a640 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_0067a070 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0067a5cc }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067a5cc }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0067a5cc }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067a5cc: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { jne L_0067a5ea }
	__asm { xor ecx, ecx }
	__asm { jmp L_0067a5f9 }
	__asm { L_0067a5ea: }
	__asm { mov ecx, edx }
	__asm { lea ebx, [ecx + 1] }
	__asm { nop }
	__asm { L_0067a5f0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0067a5f0 }
	__asm { sub ecx, ebx }
	__asm { L_0067a5f9: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_0067a627 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067a627: }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_007b5ea0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0067a676 }
	__asm { or ebx, 0xffffffff }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067a676 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0067a676 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0067a676: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0067a110();
extern "C" void fn_007b5ea0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067a690
extern "C" __declspec(naked) void asm_0067a690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a640 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_0067a110 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0067a70c }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067a70c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0067a70c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067a70c: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { jne L_0067a72a }
	__asm { xor ecx, ecx }
	__asm { jmp L_0067a739 }
	__asm { L_0067a72a: }
	__asm { mov ecx, edx }
	__asm { lea ebx, [ecx + 1] }
	__asm { nop }
	__asm { L_0067a730: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0067a730 }
	__asm { sub ecx, ebx }
	__asm { L_0067a739: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_0067a767 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067a767: }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_007b5ea0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0067a7b6 }
	__asm { or ebx, 0xffffffff }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067a7b6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0067a7b6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0067a7b6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de264[];
extern "C" char g_012de268[];
extern "C" void fn_004115f0();
extern "C" void fn_00418a50();
extern "C" void fn_0041ffd0();
extern "C" void fn_0067a7d0();
extern "C" void fn_0067e550();
extern "C" void fn_0089c470();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0067acd0
extern "C" __declspec(naked) void asm_0067acd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1281e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0x679dc0 }
	__asm { push 0x12de24c }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de268] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067ad33 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de268], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [g_012de264], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0067ad39 }
	__asm { L_0067ad33: }
	__asm { mov esi, dword ptr [g_012de264] }
	__asm { L_0067ad39: }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { lea edi, [ebx + 0x64] }
	__asm { mov ecx, eax }
	__asm { mov ebx, dword ptr [edi] }
	__asm { sub ecx, ebx }
	__asm { sar ecx, 3 }
	__asm { lea edx, [esi + 1] }
	__asm { cmp edx, ecx }
	__asm { jbe L_0067ad84 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp ecx, edx }
	__asm { jae L_0067ad7b }
	__asm { lea ebx, [ebp - 0x24] }
	__asm { push ebx }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0041ffd0 }
	__asm { L_0067ad7b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0067ad8f }
	__asm { L_0067ad84: }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { test eax, eax }
	__asm { jne L_0067ae0f }
	__asm { L_0067ad8f: }
	__asm { call fn_0067e550 }
	__asm { test al, al }
	__asm { je L_0067adab }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067adab: }
	__asm { call fn_0067a7d0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0089c470 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ebx, ebx }
	__asm { je L_0067add9 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [eax + esi*8] }
	__asm { call fn_00418a50 }
	__asm { L_0067add9: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0067ae0d }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0067ae0d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0067ae0d }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0067ae0d: }
	__asm { mov eax, ebx }
	__asm { L_0067ae0f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de25c[];
extern "C" char g_012de260[];
extern "C" void fn_004115f0();
extern "C" void fn_00418a50();
extern "C" void fn_0041ffd0();
extern "C" void fn_0067a910();
extern "C" void fn_0067e5c0();
extern "C" void fn_0089c470();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0067ae20
extern "C" __declspec(naked) void asm_0067ae20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1284e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0x679e10 }
	__asm { push 0x12de244 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de260] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067ae83 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de260], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [g_012de25c], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0067ae89 }
	__asm { L_0067ae83: }
	__asm { mov esi, dword ptr [g_012de25c] }
	__asm { L_0067ae89: }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { lea edi, [ebx + 0x64] }
	__asm { mov ecx, eax }
	__asm { mov ebx, dword ptr [edi] }
	__asm { sub ecx, ebx }
	__asm { sar ecx, 3 }
	__asm { lea edx, [esi + 1] }
	__asm { cmp edx, ecx }
	__asm { jbe L_0067aed4 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp ecx, edx }
	__asm { jae L_0067aecb }
	__asm { lea ebx, [ebp - 0x24] }
	__asm { push ebx }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0041ffd0 }
	__asm { L_0067aecb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0067aedf }
	__asm { L_0067aed4: }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { test eax, eax }
	__asm { jne L_0067af5f }
	__asm { L_0067aedf: }
	__asm { call fn_0067e5c0 }
	__asm { test al, al }
	__asm { je L_0067aefb }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067aefb: }
	__asm { call fn_0067a910 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0089c470 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ebx, ebx }
	__asm { je L_0067af29 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [eax + esi*8] }
	__asm { call fn_00418a50 }
	__asm { L_0067af29: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0067af5d }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0067af5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0067af5d }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0067af5d: }
	__asm { mov eax, ebx }
	__asm { L_0067af5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de26c[];
extern "C" char g_012de270[];
extern "C" void fn_004115f0();
extern "C" void fn_00418a50();
extern "C" void fn_0041ffd0();
extern "C" void fn_0067a9b0();
extern "C" void fn_0067e630();
extern "C" void fn_0089c470();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0067af70
extern "C" __declspec(naked) void asm_0067af70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1287e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0x679e60 }
	__asm { push 0x12de254 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de270] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067afd3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [g_012de26c], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0067afd9 }
	__asm { L_0067afd3: }
	__asm { mov esi, dword ptr [g_012de26c] }
	__asm { L_0067afd9: }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { lea edi, [ebx + 0x64] }
	__asm { mov ecx, eax }
	__asm { mov ebx, dword ptr [edi] }
	__asm { sub ecx, ebx }
	__asm { sar ecx, 3 }
	__asm { lea edx, [esi + 1] }
	__asm { cmp edx, ecx }
	__asm { jbe L_0067b024 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp ecx, edx }
	__asm { jae L_0067b01b }
	__asm { lea ebx, [ebp - 0x24] }
	__asm { push ebx }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0041ffd0 }
	__asm { L_0067b01b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0067b02f }
	__asm { L_0067b024: }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { test eax, eax }
	__asm { jne L_0067b0af }
	__asm { L_0067b02f: }
	__asm { call fn_0067e630 }
	__asm { test al, al }
	__asm { je L_0067b04b }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067b04b: }
	__asm { call fn_0067a9b0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0089c470 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ebx, ebx }
	__asm { je L_0067b079 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [eax + esi*8] }
	__asm { call fn_00418a50 }
	__asm { L_0067b079: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0067b0ad }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0067b0ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0067b0ad }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0067b0ad: }
	__asm { mov eax, ebx }
	__asm { L_0067b0af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00b13b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067c6c0
extern "C" __declspec(naked) void asm_0067c6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd550d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0067c729 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0067c729: }
	__asm { mov ecx, esi }
	__asm { call fn_00b13b00 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0067c74c }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0067c74c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067c74c: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_0067c75d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067c75d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012de1f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0067a870();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0067c770
extern "C" __declspec(naked) void asm_0067c770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3ba9c }
	__asm { call fn_0067a870 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0067c911 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0067c7fd }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067c7fd: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0067c85b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067c85b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0067c886 }
	__asm { L_0067c866: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0067c870 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0067c874 }
	__asm { L_0067c870: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0067c874: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0067c866 }
	__asm { cmp ecx, edx }
	__asm { je L_0067c886 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0067c889 }
	__asm { L_0067c886: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0067c889: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0067c8c6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067c8b1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067c8c6 }
	__asm { L_0067c8b1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067c8c6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067c911 }
	__asm { cmp dword ptr [g_012de1f4], 0x29a }
	__asm { jne L_0067c911 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067c8fc }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067c911 }
	__asm { L_0067c8fc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067c911: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0067c961 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067c961: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012de1f4], 0x29a }
	__asm { je L_0067caeb }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0067c9dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067c9dc: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0067ca34 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0067ca34: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0067ca60 }
	__asm { nop }
	__asm { L_0067ca40: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0067ca4a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0067ca4e }
	__asm { L_0067ca4a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0067ca4e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0067ca40 }
	__asm { cmp ecx, edx }
	__asm { je L_0067ca60 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0067ca63 }
	__asm { L_0067ca60: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0067ca63: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0067caa0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067ca8b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067caa0 }
	__asm { L_0067ca8b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067caa0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067caeb }
	__asm { cmp dword ptr [g_012de1f4], 0x29a }
	__asm { je L_0067caeb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067cad6 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067caeb }
	__asm { L_0067cad6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067caeb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067d390
extern "C" __declspec(naked) void asm_0067d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_0067d3a7 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067d3a7: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0067d3d1 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0067d3d1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067d3d1: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0067d3e0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067d3e0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00680be0();
extern "C" void fn_00690de0();
extern "C" void fn_00693270();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x0067f670
extern "C" __declspec(naked) void asm_0067f670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12c4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, dword ptr [esi + 0x1ec] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_0067f6a6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0067f6a6: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x1e8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_0067f6c5 }
	__asm { mov ecx, edi }
	__asm { call fn_00680be0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f6c5: }
	__asm { mov ecx, dword ptr [esi + 0x1e4] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_0067f6d9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0067f6d9: }
	__asm { mov edi, dword ptr [esi + 0x1e0] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_0067f6f7 }
	__asm { mov ecx, edi }
	__asm { call fn_00690de0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f6f7: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0x1dc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_0067f73c }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { test edi, edi }
	__asm { je L_0067f733 }
	__asm { lea ecx, [edi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0067f733 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067f733 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067f733: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f73c: }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop ebx }
	__asm { test edi, edi }
	__asm { je L_0067f760 }
	__asm { push 0x665970 }
	__asm { push 8 }
	__asm { push 0xc }
	__asm { push edi }
	__asm { call fn_00cf669e }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f760: }
	__asm { mov esi, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { test esi, esi }
	__asm { je L_0067f77f }
	__asm { mov ecx, esi }
	__asm { call fn_00693270 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f77f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380e4[];
extern "C" void fn_006e32c0();
// FUNCTION: ROBLOXSTUDIO 0x0067fd90
extern "C" __declspec(naked) void asm_0067fd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { call fn_006e32c0 }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { movss xmm3, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { ucomiss xmm2, xmm3 }
	__asm { movss dword ptr [esi + 0x10c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [esi + 0x110], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { lahf }
	__asm { movss dword ptr [esi + 0x114], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [esi + 0x118], xmm0 }
	__asm { test ah, 0x44 }
	__asm { jnp L_0067fe28 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movaps xmm0, xmm3 }
	__asm { subss xmm0, xmm2 }
	__asm { divss xmm1, xmm0 }
	__asm { jmp L_0067fe2b }
	__asm { L_0067fe28: }
	__asm { xorps xmm1, xmm1 }
	__asm { L_0067fe2b: }
	__asm { mov dword ptr [esi + 0x11c], 0 }
	__asm { movss dword ptr [esi + 0x120], xmm2 }
	__asm { movss dword ptr [esi + 0x124], xmm3 }
	__asm { movss dword ptr [esi + 0x128], xmm1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e388a4[];
extern "C" char g_01038248[];
extern "C" void fn_006e32c0();
extern "C" void fn_006e3ec0();
// FUNCTION: ROBLOXSTUDIO 0x0067fe60
extern "C" __declspec(naked) void asm_0067fe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { call fn_006e32c0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [esi + 0xac], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [esi + 0xb0], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [esi + 0xb4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [esi + 0xb8], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { mov dword ptr [ebp - 0x14], 0x3f800000 }
	__asm { call fn_006e32c0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [esi + 0xbc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [esi + 0xc0], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [esi + 0xc4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [esi + 0xc8], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { movss xmm2, dword ptr [edi] }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { movss dword ptr [esi + 0xcc], xmm2 }
	__asm { movss dword ptr [esi + 0xd0], xmm1 }
	__asm { movss dword ptr [esi + 0xd4], xmm0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { mov dword ptr [ebp - 0x14], 0x3f800000 }
	__asm { call fn_006e32c0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { xorps xmm6, xmm6 }
	__asm { movss dword ptr [esi + 0xfc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [esi + 0x100], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [esi + 0x104], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [esi + 0x108], xmm0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { addss xmm0, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm0, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { lea ecx, [esi + 0xdc] }
	__asm { push eax }
	__asm { comiss xmm0, dword ptr [g_00e388a4] }
	__asm { jb L_00680048 }
	__asm { movss xmm2, dword ptr [edi + 4] }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { movss xmm4, dword ptr [edi + 8] }
	__asm { mulss xmm2, xmm6 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, xmm6 }
	__asm { movaps xmm1, xmm2 }
	__asm { subss xmm1, xmm4 }
	__asm { mulss xmm4, xmm6 }
	__asm { subss xmm3, xmm2 }
	__asm { subss xmm4, xmm0 }
	__asm { movss dword ptr [ecx], xmm1 }
	__asm { movss dword ptr [ecx + 8], xmm3 }
	__asm { movss dword ptr [ecx + 4], xmm4 }
	__asm { jmp L_00680092 }
	__asm { L_00680048: }
	__asm { movss xmm4, dword ptr [edi + 4] }
	__asm { movss xmm2, dword ptr [edi] }
	__asm { movss xmm5, dword ptr [edi + 8] }
	__asm { movaps xmm3, xmm4 }
	__asm { mulss xmm3, dword ptr [g_01038248] }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [g_01038248] }
	__asm { mulss xmm5, xmm6 }
	__asm { mulss xmm2, xmm6 }
	__asm { mulss xmm4, xmm6 }
	__asm { subss xmm3, xmm5 }
	__asm { subss xmm5, xmm0 }
	__asm { subss xmm2, xmm4 }
	__asm { movss dword ptr [ecx], xmm3 }
	__asm { movss dword ptr [ecx + 4], xmm5 }
	__asm { movss dword ptr [ecx + 8], xmm2 }
	__asm { L_00680092: }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { call fn_006e3ec0 }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { movss xmm7, dword ptr [edi + 8] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm7, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { movss xmm6, dword ptr [eax] }
	__asm { subss xmm7, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm6, dword ptr [edi + 4] }
	__asm { mulss xmm0, dword ptr [edi + 8] }
	__asm { movaps xmm3, xmm1 }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm3, dword ptr [eax + 8] }
	__asm { subss xmm6, xmm1 }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { subss xmm3, xmm0 }
	__asm { pop edi }
	__asm { movss dword ptr [esi + 0xf4], xmm6 }
	__asm { movss dword ptr [esi + 0xf0], xmm3 }
	__asm { movss dword ptr [esi + 0xec], xmm7 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10268[];
extern "C" void fn_005eb5a0();
extern "C" void fn_005eba40();
extern "C" void fn_00bc5e20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006802f0
extern "C" __declspec(naked) void asm_006802f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12c8d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00bc5e20 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 0xc }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { push 0x24 }
	__asm { lea edx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x6c], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x68], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 0x60], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x5c], 0x40400000 }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x54], 0x40400000 }
	__asm { mov dword ptr [ebp - 0x50], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_005eb5a0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_0068042a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068042a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068042a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068042a: }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00680459 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00680459 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00680459 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00680459: }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00680487 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00680487 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00680487 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00680487: }
	__asm { cmp dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_006804a5 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006804a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006e20a0();
// FUNCTION: ROBLOXSTUDIO 0x006804c0
extern "C" __declspec(naked) void asm_006804c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006e20a0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [esi + 0xb8], 0 }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xec], 0 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov dword ptr [esi + 0xe4], 0 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi + 0xfc], 0 }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x104], 0 }
	__asm { mov dword ptr [esi + 0x100], 0 }
	__asm { mov dword ptr [esi + 0x11c], 0 }
	__asm { mov dword ptr [esi + 0x118], 0 }
	__asm { mov dword ptr [esi + 0x114], 0 }
	__asm { mov dword ptr [esi + 0x110], 0 }
	__asm { mov dword ptr [esi + 0x12c], 0 }
	__asm { mov dword ptr [esi + 0x128], 0 }
	__asm { mov dword ptr [esi + 0x124], 0 }
	__asm { mov dword ptr [esi + 0x120], 0 }
	__asm { mov dword ptr [esi + 0x13c], 0 }
	__asm { mov dword ptr [esi + 0x138], 0 }
	__asm { mov dword ptr [esi + 0x134], 0 }
	__asm { mov dword ptr [esi + 0x130], 0 }
	__asm { mov dword ptr [esi + 0x14c], 0 }
	__asm { mov dword ptr [esi + 0x148], 0 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x140], 0 }
	__asm { mov dword ptr [esi + 0x15c], 0 }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov dword ptr [esi + 0x154], 0 }
	__asm { mov dword ptr [esi + 0x150], 0 }
	__asm { mov dword ptr [esi + 0x16c], 0 }
	__asm { mov dword ptr [esi + 0x168], 0 }
	__asm { mov dword ptr [esi + 0x164], 0 }
	__asm { mov dword ptr [esi + 0x160], 0 }
	__asm { mov dword ptr [esi + 0x17c], 0 }
	__asm { mov dword ptr [esi + 0x178], 0 }
	__asm { mov dword ptr [esi + 0x174], 0 }
	__asm { mov dword ptr [esi + 0x170], 0 }
	__asm { mov dword ptr [esi + 0x18c], 0 }
	__asm { mov dword ptr [esi + 0x188], 0 }
	__asm { mov dword ptr [esi + 0x184], 0 }
	__asm { mov dword ptr [esi + 0x180], 0 }
	__asm { mov dword ptr [esi + 0x19c], 0 }
	__asm { mov dword ptr [esi + 0x198], 0 }
	__asm { mov dword ptr [esi + 0x194], 0 }
	__asm { mov dword ptr [esi + 0x190], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00680be0
extern "C" __declspec(naked) void asm_00680be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12d26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00680c36 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00680c36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00680c36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00680c36: }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00680c65 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00680c65 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00680c65 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00680c65: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00680c96 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00680c96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00680c96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00680c96: }
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
extern "C" void fn_005eb3a0();
extern "C" void fn_0068cd50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00680cb0
extern "C" __declspec(naked) void asm_00680cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12d48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { fld1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov edi, ecx }
	__asm { fstp dword ptr [esp] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0x3f800000 }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [eax + 0x38] }
	__asm { push 0xe }
	__asm { push 0xe3caa4 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 0x4c], 0xf }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov byte ptr [ebp - 0x60], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe }
	__asm { push 0xe3cab4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0068cd50 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00680dc9 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00680dc9: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { cmp dword ptr [ebp - 0x4c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_00680df0 }
	__asm { push dword ptr [ebp - 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00680df0: }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x4c], 0xf }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov byte ptr [ebp - 0x60], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00680e4b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x1ac] }
	__asm { push dword ptr [eax + 0x1dc] }
	__asm { call fn_005eb3a0 }
	__asm { L_00680e4b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { mov esi, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00680e8b }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00680e8b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00680e8b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00680e8b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e388ac[];
extern "C" char g_00e3da20[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc99f[];
extern "C" void fn_00688ff0();
extern "C" void fn_0068a4f0();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006816c0
extern "C" __declspec(naked) void asm_006816c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12de6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { je L_00681735 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x88] }
	__asm { cmp eax, 0xa }
	__asm { je L_00681735 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00681720 }
	__asm { push 0xd6 }
	__asm { push 0xe3ccc0 }
	__asm { push 0xe3cd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00681735 }
	__asm { L_00681720: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3cd50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00681735: }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov cl, byte ptr [g_012fc99f] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test cl, cl }
	__asm { je L_00681775 }
	__asm { movsx eax, word ptr [ebx + 4] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ebx + 2] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ebx] }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe3cdec }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681775: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ecx + 0x128] }
	__asm { add ecx, 0x128 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_0068a4f0 }
	__asm { cvtsi2ss xmm0, dword ptr [eax] }
	__asm { cvtsi2ss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [edi + 0x9c] }
	__asm { cvtsi2ss xmm2, dword ptr [eax + 8] }
	__asm { subss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xa0] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { subss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [edi + 0xa4] }
	__asm { mulss xmm3, xmm3 }
	__asm { subss xmm1, xmm2 }
	__asm { mulss xmm0, xmm0 }
	__asm { add esp, 8 }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [g_00e388ac] }
	__asm { mulss xmm1, xmm1 }
	__asm { addss xmm3, xmm1 }
	__asm { comiss xmm0, xmm3 }
	__asm { jbe L_006817fa }
	__asm { add ecx, 0x13c }
	__asm { jmp L_00681815 }
	__asm { L_006817fa: }
	__asm { movss xmm0, dword ptr [g_00e3da20] }
	__asm { comiss xmm0, xmm3 }
	__asm { jbe L_0068180f }
	__asm { add ecx, 0x148 }
	__asm { jmp L_00681815 }
	__asm { L_0068180f: }
	__asm { add ecx, 0x154 }
	__asm { L_00681815: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov ax, word ptr [ebx + 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 0x16], al }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ecx] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00688ff0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01210369[];
extern "C" void fn_006825f0();
extern "C" void fn_00683540();
extern "C" void fn_006836b0();
extern "C" void fn_00683880();
extern "C" void fn_00683ad0();
extern "C" void fn_00683c50();
extern "C" void fn_00683f20();
extern "C" void fn_00684120();
extern "C" void fn_00684450();
extern "C" void fn_00684810();
extern "C" void fn_00685220();
extern "C" void fn_00689de0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
extern "C" void fn_0093d380();
extern "C" void fn_0093d4b0();
// FUNCTION: ROBLOXSTUDIO 0x00681960
extern "C" __declspec(naked) void asm_00681960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12e1a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [esi + 0x3c], edi }
	__asm { call fn_00689de0 }
	__asm { mov al, byte ptr [g_01210369] }
	__asm { test al, al }
	__asm { je L_006819ae }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe3d2f0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006819ae: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push dword ptr [eax + 0x30] }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_0093d380 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0093d380 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00683880 }
	__asm { mov ecx, esi }
	__asm { call fn_006836b0 }
	__asm { mov ecx, esi }
	__asm { call fn_00683ad0 }
	__asm { mov ecx, esi }
	__asm { call fn_00685220 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, esi }
	__asm { movzx eax, byte ptr [eax + 0x3a] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00683c50 }
	__asm { mov ecx, esi }
	__asm { call fn_00683f20 }
	__asm { mov ecx, esi }
	__asm { call fn_00684450 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00683880 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, esi }
	__asm { movzx eax, byte ptr [eax + 0x3a] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00684120 }
	__asm { mov ecx, esi }
	__asm { call fn_006825f0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0093d4b0 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push dword ptr [eax + 0x38] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_0093d380 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00683540 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0093d4b0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, esi }
	__asm { movzx eax, byte ptr [eax + 0x3a] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00684810 }
	__asm { mov al, byte ptr [g_01210369] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00681aa8 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3d328 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00681aa8: }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0093d4b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e10268[];
extern "C" char g_012fc99e[];
extern "C" void fn_00410ef0();
extern "C" void fn_005e8db0();
extern "C" void fn_00686da0();
extern "C" void fn_00687160();
extern "C" void fn_00688060();
extern "C" void fn_00688df0();
extern "C" void fn_00689440();
extern "C" void fn_00689990();
extern "C" void fn_006b8aae();
extern "C" void fn_00979ce0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00681ad0
extern "C" __declspec(naked) void asm_00681ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12e3c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00689990 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov esi, edi }
	__asm { sub esi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00688060 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00688df0 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00979ce0 }
	__asm { cmp byte ptr [g_012fc99e], 0 }
	__asm { je L_00681b9a }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { sub ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [g_012fc99e] }
	__asm { push 0xe3cf90 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681b9a: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { lea esi, [ebx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x178] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [ebx + 0x178] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_005e8db0 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { sub ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { xor ebx, ebx }
	__asm { add eax, edx }
	__asm { je L_00681c6f }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { xor edi, edi }
	__asm { L_00681bf7: }
	__asm { lea eax, [edi + esi] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00689440 }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x178] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00686da0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x178] }
	__asm { call fn_00687160 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_00681c49 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00681c49: }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc ebx }
	__asm { add eax, edx }
	__asm { add edi, 0x1c }
	__asm { cmp ebx, eax }
	__asm { jb L_00681bf7 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_00681c6f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00681cca }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { cmp esi, edi }
	__asm { je L_00681cc1 }
	__asm { L_00681c96: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00681ca6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00681ca6: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { add esi, 0x1c }
	__asm { cmp esi, edi }
	__asm { jne L_00681c96 }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { L_00681cc1: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00681cca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012fbcf0[];
extern "C" char g_012fc99e[];
extern "C" void fn_00689e40();
extern "C" void fn_006b8aae();
extern "C" void fn_0093c020();
extern "C" void fn_00a09230();
extern "C" void fn_00c79ab0();
// FUNCTION: ROBLOXSTUDIO 0x00681ce0
extern "C" __declspec(naked) void asm_00681ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12e5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [ebx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x88] }
	__asm { cmp eax, 0xa }
	__asm { jne L_00681e76 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x100] }
	__asm { call fn_00689e40 }
	__asm { lea edx, [eax + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { je L_00681d8f }
	__asm { test eax, eax }
	__asm { je L_00681d69 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { or ecx, 0xffffffff }
	__asm { L_00681d69: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00681d89 }
	__asm { add eax, 8 }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00681d86 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00681d86: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_00681d89: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00681d8f: }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { test al, al }
	__asm { je L_00681db0 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { movzx eax, al }
	__asm { push dword ptr [ebx + 0x3c] }
	__asm { push 0xe3cc48 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681db0: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00c79ab0 }
	__asm { add esp, 8 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test edi, edi }
	__asm { je L_00681dd9 }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00681dd9: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x118] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0093c020 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00681e08 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00681e08 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00681e08: }
	__asm { mov cl, byte ptr [g_012fbcf0] }
	__asm { test cl, cl }
	__asm { je L_00681e2f }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { add eax, 0x140 }
	__asm { push eax }
	__asm { push ebx }
	__asm { movzx eax, cl }
	__asm { push 0xe3cc74 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681e2f: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push ebx }
	__asm { lea ecx, [ecx + 0x140] }
	__asm { call fn_00a09230 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00681ee5 }
	__asm { or ebx, 0xffffffff }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00681ee5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00681ee5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00681ee5 }
	__asm { L_00681e76: }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { test al, al }
	__asm { je L_00681e97 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { movzx eax, al }
	__asm { push dword ptr [ebx + 0x3c] }
	__asm { push 0xe3cc9c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681e97: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xe8] }
	__asm { call fn_00689e40 }
	__asm { lea ebx, [eax + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { cmp edi, dword ptr [ebx + 4] }
	__asm { je L_00681ee5 }
	__asm { test edi, edi }
	__asm { je L_00681eca }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00681eca: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00681ee2 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00681ee2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00681ee2: }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { L_00681ee5: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_00689e40();
// FUNCTION: ROBLOXSTUDIO 0x00681f00
extern "C" __declspec(naked) void asm_00681f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12e70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [ebx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebx + 0x160] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00689e40 }
	__asm { lea ebx, [eax + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { cmp edi, dword ptr [ebx + 4] }
	__asm { je L_00681f83 }
	__asm { test edi, edi }
	__asm { je L_00681f68 }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00681f68: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00681f80 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00681f80 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00681f80: }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { L_00681f83: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00620570();
extern "C" void fn_00620800();
extern "C" void fn_00620f00();
extern "C" void fn_00629040();
extern "C" void fn_00686740();
extern "C" void fn_00689f50();
extern "C" void fn_006984c0();
extern "C" void fn_006985c0();
extern "C" void fn_008b1920();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006820a0
extern "C" __declspec(naked) void asm_006820a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12ea5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx] }
	__asm { mov edi, ecx }
	__asm { call fn_00686740 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0068214b }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x184] }
	__asm { call fn_008b1920 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00682129 }
	__asm { push 0xd0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068211e }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [edi + 0x180] }
	__asm { call fn_00620570 }
	__asm { jmp L_00682120 }
	__asm { L_0068211e: }
	__asm { xor eax, eax }
	__asm { L_00682120: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00682129: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push ebx }
	__asm { call fn_00620800 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { L_00682133: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0068214b: }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 0xc], al }
	__asm { mov ecx, 2 }
	__asm { cmovne eax, ecx }
	__asm { mov ecx, dword ptr [edi + 0x18c] }
	__asm { movzx eax, ax }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00629040 }
	__asm { mov ecx, dword ptr [edi + 0x18c] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00689f50 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_006821c4 }
	__asm { push 0x24 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006821b8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x18c] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [edi + 0x180] }
	__asm { call fn_006984c0 }
	__asm { jmp L_006821ba }
	__asm { L_006821b8: }
	__asm { xor eax, eax }
	__asm { L_006821ba: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_006821c4: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { call fn_006985c0 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { mov ecx, eax }
	__asm { je L_00682133 }
	__asm { call fn_00620f00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004038a0();
extern "C" void fn_004199f0();
extern "C" void fn_00421eb0();
extern "C" void fn_00655220();
extern "C" void fn_006553f0();
extern "C" void fn_0066e150();
extern "C" void fn_0066e380();
extern "C" void fn_00672460();
extern "C" void fn_00689070();
extern "C" void fn_006891b0();
extern "C" void fn_0068b030();
extern "C" void fn_007cd560();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00682200
extern "C" __declspec(naked) void asm_00682200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12ee5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00682364 }
	__asm { add eax, 0x1c }
	__asm { je L_00682364 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_00672460 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00682364 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00682364 }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 5 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe3d9d0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { call fn_0068b030 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_006822c0 }
	__asm { add eax, 0x1c }
	__asm { je L_006822c0 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_006822c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jmp L_006822c2 }
	__asm { L_006822c0: }
	__asm { xor eax, eax }
	__asm { L_006822c2: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006822f7 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006822f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006822f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006822f7: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_006822fa: }
	__asm { push 0 }
	__asm { push 0x11db33c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00682495 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006891b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_006823bd }
	__asm { push 0xd0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00682398 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ecx + 0x180] }
	__asm { mov ecx, eax }
	__asm { call fn_00655220 }
	__asm { mov ebx, eax }
	__asm { jmp L_0068239a }
	__asm { L_00682364: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00682391 }
	__asm { add eax, 0x1c }
	__asm { je L_00682391 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00682391 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jmp L_006822fa }
	__asm { L_00682391: }
	__asm { xor esi, esi }
	__asm { jmp L_006822fa }
	__asm { L_00682398: }
	__asm { xor ebx, ebx }
	__asm { L_0068239a: }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006553f0 }
	__asm { jmp L_00682412 }
	__asm { L_006823bd: }
	__asm { push 0x108 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_006823ea }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ecx + 0x180] }
	__asm { mov ecx, eax }
	__asm { call fn_0066e150 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_006823f1 }
	__asm { L_006823ea: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_006823f1: }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0066e380 }
	__asm { L_00682412: }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00682441 }
	__asm { mov ecx, edi }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00682441 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edx, edi }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00682441 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00682441: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x190] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { call fn_00689070 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00682495 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00682495 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00682495 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00682495: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004199f0();
extern "C" void fn_00421eb0();
extern "C" void fn_00681ce0();
extern "C" void fn_00681f00();
extern "C" void fn_007cd560();
extern "C" void fn_00899000();
extern "C" void fn_0099c650();
extern "C" void fn_00a0f900();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x006824b0
extern "C" __declspec(naked) void asm_006824b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12eff }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068257d }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_0068257a }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00682577 }
	__asm { lea esi, [ebx - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00682577 }
	__asm { mov ecx, esi }
	__asm { call fn_00899000 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099c650 }
	__asm { test al, al }
	__asm { je L_0068252c }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call fn_00a0f900 }
	__asm { L_0068252c: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00681ce0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006825a3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006825a3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006825a3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_006825a3 }
	__asm { L_00682577: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0068257a: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { L_0068257d: }
	__asm { push 0 }
	__asm { push 0x11db33c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_006825a3 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00681f00 }
	__asm { L_006825a3: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006825d4 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006825d4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006825d4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006825d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e10260[];
extern "C" char g_00e10268[];
extern "C" char g_01210369[];
extern "C" void fn_00686e50();
extern "C" void fn_006b8a90();
extern "C" void fn_008b1af0();
extern "C" void fn_0093d380();
extern "C" void fn_0093d4b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00683540
extern "C" __declspec(naked) void asm_00683540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12f3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { push 1 }
	__asm { push dword ptr [eax + 0x3c] }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_0093d380 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov eax, dword ptr [edi + 0x90] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006835b6 }
	__asm { cmp eax, 0x3fffffff }
	__asm { jbe L_006835ad }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006835ad: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_008b1af0 }
	__asm { L_006835b6: }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [edi + 0x90], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_006835eb }
	__asm { mov ecx, dword ptr [edi + 0x8c] }
	__asm { mov eax, dword ptr [edi + 0x9c] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_006835eb }
	__asm { add eax, -4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_006835f2 }
	__asm { L_006835eb: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_006835f2: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00686e50 }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [edi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_0068363c }
	__asm { mov al, byte ptr [g_01210369] }
	__asm { test al, al }
	__asm { je L_0068363c }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe3d238 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0068363c: }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { cmp esi, dword ptr [ebp - 0x1c] }
	__asm { je L_00683658 }
	__asm { L_00683644: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x24] }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [ebp - 0x1c] }
	__asm { jne L_00683644 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { L_00683658: }
	__asm { pop edi }
	__asm { test esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { je L_0068368b }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { L_0068368b: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0093d4b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_01210369[];
extern "C" void fn_00403110();
extern "C" void fn_00660670();
extern "C" void fn_006815e0();
extern "C" void fn_006894f0();
extern "C" void fn_0068a940();
extern "C" void fn_006b8a90();
extern "C" void fn_00a5d310();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006836b0
extern "C" __declspec(naked) void asm_006836b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12f68 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x108] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_006836f5 }
	__asm { mov al, byte ptr [g_01210369] }
	__asm { test al, al }
	__asm { je L_006836f5 }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe3d254 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006836f5: }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00683722 }
	__asm { sub eax, 4 }
	__asm { L_00683722: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea esi, [ebx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebx + 0x100] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006894f0 }
	__asm { add esp, 8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov edx, dword ptr [ebp - 0x2c] }
	__asm { test edi, edi }
	__asm { je L_00683791 }
	__asm { mov eax, dword ptr [ecx + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00683791 }
	__asm { add eax, -0xc }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_00683798 }
	__asm { L_00683791: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00683798: }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_0068383e }
	__asm { L_006837a5: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00a5d310 }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_006837f4 }
	__asm { push 0xa0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_006837e6 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 0x180] }
	__asm { mov ecx, eax }
	__asm { call fn_00660670 }
	__asm { jmp L_006837e8 }
	__asm { L_006837e6: }
	__asm { xor eax, eax }
	__asm { L_006837e8: }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006815e0 }
	__asm { L_006837f4: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00683825 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00683825 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00683825 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00683825: }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00683835 }
	__asm { add esi, -0xc }
	__asm { jne L_006837a5 }
	__asm { L_00683835: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov edx, dword ptr [ebp - 0x2c] }
	__asm { L_0068383e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00683867 }
	__asm { test edi, edi }
	__asm { je L_0068385e }
	__asm { lea eax, [ecx + edx*4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0068a940 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { L_0068385e: }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00683867: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_01210369[];
extern "C" char g_012fc99e[];
extern "C" void fn_00403110();
extern "C" void fn_006820a0();
extern "C" void fn_0068a940();
extern "C" void fn_006b8aae();
extern "C" void fn_0076fb00();
extern "C" void fn_00a10090();
extern "C" void fn_00a5d310();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00683880
extern "C" __declspec(naked) void asm_00683880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12f82 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov ebx, ecx }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_006838cc }
	__asm { sub eax, 4 }
	__asm { L_006838cc: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea esi, [ebx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebx + 0xfc] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { movss xmm1, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebx + 0xfc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0xec] }
	__asm { mov dword ptr [ebx + 0xec], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ebx + 0xf0] }
	__asm { mov dword ptr [ebx + 0xf0], ecx }
	__asm { movss xmm0, dword ptr [ebx + 0xf4] }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebx + 0xf4], xmm1 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebx + 0xf8] }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebx + 0xf8], ecx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { test edx, edx }
	__asm { je L_006839af }
	__asm { mov cl, byte ptr [g_01210369] }
	__asm { test cl, cl }
	__asm { je L_00683996 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { movzx eax, cl }
	__asm { push 0xe3d274 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { add esp, 0x14 }
	__asm { L_00683996: }
	__asm { test edx, edx }
	__asm { je L_006839af }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { test eax, eax }
	__asm { je L_006839b2 }
	__asm { add eax, -0xc }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_006839b9 }
	__asm { L_006839af: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_006839b2: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_006839b9: }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00683a8d }
	__asm { push edi }
	__asm { L_006839c7: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00683a1e }
	__asm { push ecx }
	__asm { call fn_0076fb00 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00683a1b }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { call fn_00a10090 }
	__asm { mov dword ptr [edi + 0xe8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [eax + 0x7c], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_006820a0 }
	__asm { jmp L_00683a45 }
	__asm { L_00683a1b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_00683a1e: }
	__asm { mov dl, byte ptr [g_012fc99e] }
	__asm { test dl, dl }
	__asm { je L_00683a45 }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sete al }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { movzx eax, dl }
	__asm { push 0xe3d2a0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00683a45: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00683a76 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00683a76 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00683a76 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00683a76: }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00683a86 }
	__asm { add esi, -0xc }
	__asm { jne L_006839c7 }
	__asm { L_00683a86: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { pop edi }
	__asm { L_00683a8d: }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00683abb }
	__asm { test edx, edx }
	__asm { je L_00683ab2 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_0068a940 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_00683ab2: }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00683abb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101a8[];
extern "C" char g_00e10268[];
extern "C" char g_012de64f[];
extern "C" void fn_0041a0c0();
extern "C" void fn_004226b0();
extern "C" void fn_0043f9f0();
extern "C" void fn_005e8db0();
extern "C" void fn_00619df0();
extern "C" void fn_00654720();
extern "C" void fn_00689a40();
extern "C" void fn_0068a940();
extern "C" void fn_0068aad0();
extern "C" void fn_0068ac00();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9e50();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00685f90
extern "C" __declspec(naked) void asm_00685f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd132c5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe3cb54 }
	__asm { cmp dword ptr [edi + 0x1dc], 0 }
	__asm { lea esi, [edi + 0x1dc] }
	__asm { mov dword ptr [ebp - 4], 0x16 }
	__asm { je L_00685ff4 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00685ff4: }
	__asm { mov edx, dword ptr [edi + 0x1b8] }
	__asm { mov esi, dword ptr [edi + 0x1bc] }
	__asm { mov ecx, dword ptr [edi + 0x1c4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_0068601c }
	__asm { sub edx, dword ptr [edi + 0x1b4] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_0068601c: }
	__asm { lea eax, [esi + ecx*8] }
	__asm { mov dword ptr [edi + 0x1bc], eax }
	__asm { mov eax, dword ptr [edi + 0x1b4] }
	__asm { test eax, eax }
	__asm { je L_00686038 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00686038: }
	__asm { cmp dword ptr [edi + 0x1a8], 0 }
	__asm { lea esi, [edi + 0x1a8] }
	__asm { je L_0068606d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0068606d: }
	__asm { mov ecx, dword ptr [edi + 0x1a4] }
	__asm { lea esi, [edi + 0x190] }
	__asm { test ecx, ecx }
	__asm { je L_006860a8 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00686093 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_00686093: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_006860a8: }
	__asm { mov esi, dword ptr [edi + 0x18c] }
	__asm { mov byte ptr [ebp - 4], 0x15 }
	__asm { test esi, esi }
	__asm { je L_006860c6 }
	__asm { mov ecx, esi }
	__asm { call fn_00689a40 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006860c6: }
	__asm { mov eax, dword ptr [edi + 0x184] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x184] }
	__asm { mov byte ptr [ebp - 4], 0x14 }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x184] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x178] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x178] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { call fn_005e8db0 }
	__asm { push dword ptr [edi + 0x178] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 0x174] }
	__asm { lea esi, [edi + 0x160] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0x12 }
	__asm { test ecx, ecx }
	__asm { je L_0068615d }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00686144 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068a940 }
	__asm { L_00686144: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0068615d: }
	__asm { cmp dword ptr [edi + 0x154], 0 }
	__asm { lea esi, [edi + 0x154] }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { je L_00686196 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00686196: }
	__asm { cmp dword ptr [edi + 0x148], 0 }
	__asm { lea esi, [edi + 0x148] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { je L_006861cf }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006861cf: }
	__asm { cmp dword ptr [edi + 0x13c], 0 }
	__asm { lea esi, [edi + 0x13c] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { je L_00686208 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00686208: }
	__asm { mov ecx, dword ptr [edi + 0x138] }
	__asm { lea esi, [edi + 0x124] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { test ecx, ecx }
	__asm { je L_00686247 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00686232 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_00686232: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00686247: }
	__asm { cmp dword ptr [edi + 0x118], 0 }
	__asm { lea esi, [edi + 0x118] }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { je L_0068628c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041a0c0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0068628c: }
	__asm { mov ecx, dword ptr [edi + 0x114] }
	__asm { lea esi, [edi + 0x100] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test ecx, ecx }
	__asm { je L_006862cf }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_006862b6 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068a940 }
	__asm { L_006862b6: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_006862cf: }
	__asm { mov ecx, dword ptr [edi + 0xfc] }
	__asm { lea esi, [edi + 0xe8] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { test ecx, ecx }
	__asm { je L_00686312 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_006862f9 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068a940 }
	__asm { L_006862f9: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00686312: }
	__asm { mov ecx, dword ptr [edi + 0xe4] }
	__asm { lea esi, [edi + 0xd0] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test ecx, ecx }
	__asm { je L_00686351 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_0068633c }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_0068633c: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00686351: }
	__asm { mov ecx, dword ptr [edi + 0xcc] }
	__asm { lea esi, [edi + 0xb8] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test ecx, ecx }
	__asm { je L_00686390 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_0068637b }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_0068637b: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00686390: }
	__asm { mov ecx, dword ptr [edi + 0xb4] }
	__asm { lea esi, [edi + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test ecx, ecx }
	__asm { je L_006863cf }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_006863ba }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_006863ba: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_006863cf: }
	__asm { mov ecx, dword ptr [edi + 0x9c] }
	__asm { lea esi, [edi + 0x88] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test ecx, ecx }
	__asm { je L_0068640e }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_006863f9 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_006863f9: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0068640e: }
	__asm { mov ecx, dword ptr [edi + 0x84] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test ecx, ecx }
	__asm { je L_0068644f }
	__asm { cmp dword ptr [edi + 0x78], 0 }
	__asm { je L_00686433 }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_0068aad0 }
	__asm { L_00686433: }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { L_0068644f: }
	__asm { mov ecx, dword ptr [edi + 0x6c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_00686487 }
	__asm { cmp dword ptr [edi + 0x60], 0 }
	__asm { je L_00686471 }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x58] }
	__asm { call fn_0068aad0 }
	__asm { L_00686471: }
	__asm { lea ecx, [edi + 0x58] }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { L_00686487: }
	__asm { lea esi, [edi + 0x54] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x17 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_006864ae }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_006864ae: }
	__asm { lea ecx, [edi + 0x50] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0043f9f0 }
	__asm { lea ecx, [edi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00654720 }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006864f9 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006864f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006864f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006864f8: }
	__asm { pop ebx }
	__asm { L_006864f9: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00619df0 }
	__asm { add edi, 4 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e101a8] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_00686531 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x100df10 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00686531: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038120[];
extern "C" void fn_00646690();
// FUNCTION: ROBLOXSTUDIO 0x006868e0
extern "C" __declspec(naked) void asm_006868e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [g_01038120] }
	__asm { movsx eax, word ptr [edx] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm3, eax }
	__asm { movsx eax, word ptr [edx + 2] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm2, eax }
	__asm { movsx eax, word ptr [edx + 4] }
	__asm { shl eax, 2 }
	__asm { cvtsi2ss xmm1, eax }
	__asm { mov eax, dword ptr [ecx + 0x180] }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm2, xmm0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm3 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { mov eax, dword ptr [eax + 0x1cc] }
	__asm { test eax, eax }
	__asm { je L_00686955 }
	__asm { cmp byte ptr [ecx + 0x1d8], 0 }
	__asm { je L_00686955 }
	__asm { push 0xda }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00646690 }
	__asm { L_00686955: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x006869c0
extern "C" __declspec(naked) void asm_006869c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_00686b3d }
	__asm { test ah, ah }
	__asm { je L_00686b3d }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_00686a02 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_00686a02 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00686a02: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_00686a29 }
	__asm { cmp cl, al }
	__asm { je L_00686a21 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_00686b32 }
	__asm { L_00686a21: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00686a29: }
	__asm { cmp cl, al }
	__asm { je L_00686a3b }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_00686a3f }
	__asm { L_00686a3b: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_00686a3f: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_00686a69 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe3cae0] }
	__asm { mov edx, dword ptr [edx*4 + 0xe3cac8] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_00686a6d }
	__asm { L_00686a69: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_00686a6d: }
	__asm { mov edx, dword ptr [edi*4 + 0xe3caf0] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_00686a8c }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_00686a8c }
	__asm { mov bh, 1 }
	__asm { jmp L_00686a8e }
	__asm { L_00686a8c: }
	__asm { xor bh, bh }
	__asm { L_00686a8e: }
	__asm { cmp dl, al }
	__asm { je L_00686ab3 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe3cac8] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_00686ab7 }
	__asm { L_00686ab3: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_00686ab7: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_00686acf }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_00686acf }
	__asm { mov bl, 1 }
	__asm { jmp L_00686ad1 }
	__asm { L_00686acf: }
	__asm { xor bl, bl }
	__asm { L_00686ad1: }
	__asm { cmp ah, 3 }
	__asm { jne L_00686af2 }
	__asm { cmp cl, al }
	__asm { je L_00686af2 }
	__asm { cmp dl, al }
	__asm { je L_00686af2 }
	__asm { cmp ch, al }
	__asm { je L_00686af2 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_00686af2 }
	__asm { mov dl, 1 }
	__asm { jmp L_00686af4 }
	__asm { L_00686af2: }
	__asm { xor dl, dl }
	__asm { L_00686af4: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00686b04 }
	__asm { test bh, bh }
	__asm { je L_00686b04 }
	__asm { mov cl, 1 }
	__asm { jmp L_00686b06 }
	__asm { L_00686b04: }
	__asm { xor cl, cl }
	__asm { L_00686b06: }
	__asm { test al, al }
	__asm { jne L_00686b0f }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_00686b18 }
	__asm { L_00686b0f: }
	__asm { test bh, bh }
	__asm { jne L_00686b1c }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_00686b1c }
	__asm { L_00686b18: }
	__asm { xor al, al }
	__asm { jmp L_00686b1e }
	__asm { L_00686b1c: }
	__asm { mov al, 1 }
	__asm { L_00686b1e: }
	__asm { test dl, dl }
	__asm { jne L_00686b32 }
	__asm { test bl, bl }
	__asm { je L_00686b2a }
	__asm { test al, al }
	__asm { jne L_00686b32 }
	__asm { L_00686b2a: }
	__asm { test cl, cl }
	__asm { je L_00686a21 }
	__asm { L_00686b32: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00686b3d: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00686b70
extern "C" __declspec(naked) void asm_00686b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { je L_00686bb1 }
	__asm { test edi, edi }
	__asm { je L_00686b96 }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00686b96: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00686bae }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00686bae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00686bae: }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { L_00686bb1: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006893b0();
// FUNCTION: ROBLOXSTUDIO 0x006876e0
extern "C" __declspec(naked) void asm_006876e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [ebx + 0xc] }
	__asm { comiss xmm0, dword ptr [edx + 0xc] }
	__asm { push edi }
	__asm { jbe L_0068776f }
	__asm { fld dword ptr [ebx] }
	__asm { mov ecx, 7 }
	__asm { mov esi, edx }
	__asm { lea edi, [ebp - 0x1c] }
	__asm { rep movsd }
	__asm { fstp dword ptr [edx] }
	__asm { fld dword ptr [ebx + 4] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [ebx + 8] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { fld dword ptr [ebx + 0xc] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [ebx + 0x10] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ebx + 0x14] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ebx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebx + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebx + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [ebx + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebx + 0x14], xmm0 }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { L_0068776f: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [edx + 0xc] }
	__asm { comiss xmm0, dword ptr [eax + 0xc] }
	__asm { jbe L_0068780d }
	__asm { fld dword ptr [edx] }
	__asm { mov esi, eax }
	__asm { mov ecx, 7 }
	__asm { lea edi, [ebp - 0x1c] }
	__asm { rep movsd }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [edx + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss xmm1, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [edx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [edx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [edx + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [edx + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [edx + 0xc], xmm1 }
	__asm { movss dword ptr [edx + 0x14], xmm0 }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { movss xmm0, dword ptr [ebx + 0xc] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_0068780d }
	__asm { push ebx }
	__asm { push edx }
	__asm { call fn_006893b0 }
	__asm { add esp, 8 }
	__asm { L_0068780d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00689690();
extern "C" void fn_00826ad0();
// FUNCTION: ROBLOXSTUDIO 0x006878e0
extern "C" __declspec(naked) void asm_006878e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x92492493 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { sub ecx, esi }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { push esi }
	__asm { cmp eax, 0x28 }
	__asm { jle L_00687a89 }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { lea edi, [eax*8] }
	__asm { sub edi, eax }
	__asm { lea ecx, [eax*8] }
	__asm { shl edi, 2 }
	__asm { sub ecx, eax }
	__asm { shl ecx, 3 }
	__asm { lea ebx, [edi + esi] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687952 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687952: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, esi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687989 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, esi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00689690 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00826ad0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00687989 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687989: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + esi] }
	__asm { mov edi, esi }
	__asm { sub edi, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_006879af }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_006879af: }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_006879e0 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00689690 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_006879e0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_006879e0: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { sub eax, dword ptr [ebp + 8] }
	__asm { sub edi, dword ptr [ebp - 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687a08 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687a08: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687a3d }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00689690 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00687a3d }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687a3d: }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687a55 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687a55: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687ad0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00689690 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00687ad0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00687a89: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687aa3 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687aa3: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00687ad0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00689690 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00826ad0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00687ad0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00689690 }
	__asm { add esp, 8 }
	__asm { L_00687ad0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00687c90
extern "C" __declspec(naked) void asm_00687c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, eax }
	__asm { sar edx, 1 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ebp + 0x10], ebx }
	__asm { jge L_00687d15 }
	__asm { mov edi, edi }
	__asm { L_00687cb0: }
	__asm { movss xmm0, dword ptr [edi + 0xc] }
	__asm { lea eax, [edx*8] }
	__asm { sub eax, edx }
	__asm { comiss xmm0, dword ptr [esi + eax*4 + 0xc] }
	__asm { jbe L_00687d15 }
	__asm { fld dword ptr [esi + eax*4] }
	__asm { lea ecx, [ebx*8] }
	__asm { sub ecx, ebx }
	__asm { mov ebx, edx }
	__asm { fstp dword ptr [esi + ecx*4] }
	__asm { fld dword ptr [esi + eax*4 + 4] }
	__asm { fstp dword ptr [esi + ecx*4 + 4] }
	__asm { fld dword ptr [esi + eax*4 + 8] }
	__asm { fstp dword ptr [esi + ecx*4 + 8] }
	__asm { fld dword ptr [esi + eax*4 + 0xc] }
	__asm { fstp dword ptr [esi + ecx*4 + 0xc] }
	__asm { fld dword ptr [esi + eax*4 + 0x10] }
	__asm { fstp dword ptr [esi + ecx*4 + 0x10] }
	__asm { fld dword ptr [esi + eax*4 + 0x14] }
	__asm { fstp dword ptr [esi + ecx*4 + 0x14] }
	__asm { mov eax, dword ptr [esi + eax*4 + 0x18] }
	__asm { mov dword ptr [esi + ecx*4 + 0x18], eax }
	__asm { lea eax, [edx - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, eax }
	__asm { sar edx, 1 }
	__asm { cmp dword ptr [ebp + 0x10], ebx }
	__asm { jl L_00687cb0 }
	__asm { L_00687d15: }
	__asm { fld dword ptr [edi] }
	__asm { lea ecx, [ebx*8] }
	__asm { sub ecx, ebx }
	__asm { fstp dword ptr [esi + ecx*4] }
	__asm { fld dword ptr [edi + 4] }
	__asm { fstp dword ptr [esi + ecx*4 + 4] }
	__asm { fld dword ptr [edi + 8] }
	__asm { fstp dword ptr [esi + ecx*4 + 8] }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { fstp dword ptr [esi + ecx*4 + 0xc] }
	__asm { fld dword ptr [edi + 0x10] }
	__asm { fstp dword ptr [esi + ecx*4 + 0x10] }
	__asm { fld dword ptr [edi + 0x14] }
	__asm { fstp dword ptr [esi + ecx*4 + 0x14] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + ecx*4 + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00687e10
extern "C" __declspec(naked) void asm_00687e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { sar edx, 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add ebx, edx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov ecx, edi }
	__asm { test edi, edi }
	__asm { je L_00687e63 }
	__asm { L_00687e53: }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { idiv ecx }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { test edx, edx }
	__asm { jne L_00687e53 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_00687e63: }
	__asm { cmp esi, ebx }
	__asm { jge L_00687f07 }
	__asm { test esi, esi }
	__asm { jle L_00687f07 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + esi*2] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { shl ecx, 2 }
	__asm { lea ebx, [edx + eax*4] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { L_00687e88: }
	__asm { add ecx, ebx }
	__asm { cmp ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmove ecx, edx }
	__asm { L_00687e95: }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { sub edx, ecx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { mov dword ptr [ecx + 8], edi }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { add esi, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { jge L_00687edf }
	__asm { add ecx, dword ptr [ebp - 0xc] }
	__asm { jmp L_00687ee9 }
	__asm { L_00687edf: }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [edx + eax*4] }
	__asm { L_00687ee9: }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, ebx }
	__asm { jne L_00687e95 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { dec esi }
	__asm { sub ebx, 0xc }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { test esi, esi }
	__asm { jg L_00687e88 }
	__asm { L_00687f07: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00687220();
extern "C" void fn_006874b0();
extern "C" void fn_006881a0();
extern "C" void fn_006882f0();
// FUNCTION: ROBLOXSTUDIO 0x00687f10
extern "C" __declspec(naked) void asm_00687f10()
{
	__asm { L_00687f10: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x92492493 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00687ff3 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00687f42: }
	__asm { test esi, esi }
	__asm { jle L_0068800e }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006882f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { add esp, 0x10 }
	__asm { shr eax, 0x1f }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { jge L_00687fc4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call L_00687f10 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jmp L_00687fd0 }
	__asm { L_00687fc4: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00687f10 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00687fd0: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00687f42 }
	__asm { L_00687ff3: }
	__asm { cmp eax, 1 }
	__asm { jle L_00688007 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00687220 }
	__asm { add esp, 0x10 }
	__asm { L_00688007: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068800e: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00687ff3 }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00688040 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006874b0 }
	__asm { add esp, 0x14 }
	__asm { L_00688040: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006881a0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00687350();
extern "C" void fn_00687620();
extern "C" void fn_00688290();
extern "C" void fn_00688860();
// FUNCTION: ROBLOXSTUDIO 0x00688060
extern "C" __declspec(naked) void asm_00688060()
{
	__asm { L_00688060: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x92492493 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0068813d }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00688092: }
	__asm { test esi, esi }
	__asm { jle L_00688155 }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00688860 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0xc }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { jge L_0068810e }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call L_00688060 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jmp L_0068811a }
	__asm { L_0068810e: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00688060 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_0068811a: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0xc }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00688092 }
	__asm { L_0068813d: }
	__asm { cmp eax, 1 }
	__asm { jle L_0068814e }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00687350 }
	__asm { add esp, 0xc }
	__asm { L_0068814e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00688155: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0068813d }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00688184 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00687620 }
	__asm { add esp, 0x10 }
	__asm { L_00688184: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00688290 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00688db0
extern "C" __declspec(naked) void asm_00688db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, ebx }
	__asm { je L_00688dde }
	__asm { push esi }
	__asm { push edi }
	__asm { L_00688dc3: }
	__asm { test eax, eax }
	__asm { je L_00688dd2 }
	__asm { mov ecx, 7 }
	__asm { mov esi, edx }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { L_00688dd2: }
	__asm { add edx, 0x1c }
	__asm { add eax, 0x1c }
	__asm { cmp edx, ebx }
	__asm { jne L_00688dc3 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00688dde: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00656b90();
extern "C" void fn_007cd560();
extern "C" void fn_00c79ab0();
// FUNCTION: ROBLOXSTUDIO 0x006891b0
extern "C" __declspec(naked) void asm_006891b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50ad2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00689216 }
	__asm { lea esi, [eax + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00689216 }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { call fn_00656b90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00689216 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00c79ab0 }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, 1 }
	__asm { jmp L_0068922c }
	__asm { L_00689216: }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { mov ebx, 2 }
	__asm { L_0068922c: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { or ebx, 4 }
	__asm { or ecx, 0xffffffff }
	__asm { test bl, 2 }
	__asm { je L_0068928c }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0068928c }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00689289 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068928c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00689289: }
	__asm { or ecx, 0xffffffff }
	__asm { L_0068928c: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_006892c9 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { and ebx, 0xfffffffe }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_006892c9 }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006892c9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { dec eax }
	__asm { jne L_006892c9 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006892c9: }
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

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006893b0
extern "C" __declspec(naked) void asm_006893b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 7 }
	__asm { mov esi, edx }
	__asm { lea edi, [ebp - 0x1c] }
	__asm { rep movsd }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [edx] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ecx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ecx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ecx + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ecx + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [ecx + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ecx + 0x14], xmm0 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0068a940();
extern "C" void fn_0068b7a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006894f0
extern "C" __declspec(naked) void asm_006894f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd133a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, esi }
	__asm { je L_00689568 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0068b7a0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_00689568: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmp esi, eax }
	__asm { je L_00689581 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_0068b7a0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_00689581: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test edx, edx }
	__asm { je L_006895b0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { je L_006895a7 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { push 0 }
	__asm { lea eax, [edx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_0068a940 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_006895a7: }
	__asm { push edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006895b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0068aad0();
extern "C" void fn_0068ac00();
extern "C" void fn_0068b820();
// FUNCTION: ROBLOXSTUDIO 0x006895c0
extern "C" __declspec(naked) void asm_006895c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd133c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, esi }
	__asm { je L_00689638 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0068b820 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_00689638: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmp esi, eax }
	__asm { je L_00689651 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_0068b820 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_00689651: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test edx, edx }
	__asm { je L_0068967c }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { je L_00689674 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { push 0 }
	__asm { lea eax, [edx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_0068aad0 }
	__asm { L_00689674: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_0068ac00 }
	__asm { L_0068967c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0068a6b0
extern "C" __declspec(naked) void asm_0068a6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_0068a705 }
	__asm { push 0x14 }
	__asm { mov word ptr [esi + 8], cx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0068a6da }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0068a6da: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068a705: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_0068a727 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0068a723 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068a723 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068a723: }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_0068a727: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068a940
extern "C" __declspec(naked) void asm_0068a940()
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
	__asm { L_0068a950: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0068a95b }
	__asm { add esi, -0xc }
	__asm { jmp L_0068a95d }
	__asm { L_0068a95b: }
	__asm { xor esi, esi }
	__asm { L_0068a95d: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0068a97a }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068a97a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068a97a: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_0068a950 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0057db00();
extern "C" void fn_0068a9a0();
// FUNCTION: ROBLOXSTUDIO 0x0068acc0
extern "C" __declspec(naked) void asm_0068acc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { jne L_0068acd8 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068acd8: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movzx eax, word ptr [edx] }
	__asm { movsx esi, ax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { sub esi, 0x61c88647 }
	__asm { push edi }
	__asm { movzx edi, word ptr [edx + 2] }
	__asm { mov ecx, esi }
	__asm { shl ecx, 6 }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { movsx eax, di }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor esi, eax }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { movzx edi, word ptr [edx + 4] }
	__asm { movzx edx, word ptr [edx + 6] }
	__asm { mov ecx, esi }
	__asm { shl ecx, 6 }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { movsx eax, di }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor esi, eax }
	__asm { mov ecx, esi }
	__asm { shl ecx, 6 }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { movzx eax, dx }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor eax, esi }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edi, dword ptr [eax + ecx*4] }
	__asm { test edi, edi }
	__asm { je L_0068ada6 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0068ada6 }
	__asm { L_0068ad66: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebx + 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_0068ada6 }
	__asm { cmp esi, dword ptr [ebp - 4] }
	__asm { jne L_0068ad9e }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp ax, word ptr [ecx - 0xc] }
	__asm { jne L_0068ad9e }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp ax, word ptr [ecx - 0xa] }
	__asm { jne L_0068ad9e }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp ax, word ptr [ecx - 8] }
	__asm { jne L_0068ad9e }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { cmp ax, word ptr [ecx - 6] }
	__asm { je L_0068adb1 }
	__asm { L_0068ad9e: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_0068ad66 }
	__asm { L_0068ada6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068adb1: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0068adbc }
	__asm { add eax, -0xc }
	__asm { jmp L_0068adbe }
	__asm { L_0068adbc: }
	__asm { xor eax, eax }
	__asm { L_0068adbe: }
	__asm { push dword ptr [eax + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { call fn_0068a9a0 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421eb0();
extern "C" void fn_007b3490();
extern "C" void fn_007b35f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068b030
extern "C" __declspec(naked) void asm_0068b030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd134da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [ebp + 0x24], 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { je L_0068b085 }
	__asm { call fn_007b35f0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ebx, 1 }
	__asm { jmp L_0068b09e }
	__asm { L_0068b085: }
	__asm { call fn_007b3490 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { mov ebx, 2 }
	__asm { L_0068b09e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { or ebx, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test bl, 2 }
	__asm { je L_0068b0fa }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_0068b0fa }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068b0fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068b0fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068b0fa: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 1 }
	__asm { je L_0068b136 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { and ebx, 0xfffffffe }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_0068b136 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068b136 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0068b136 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068b136: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_0068b14a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068b14a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00cf6a8b();
// FUNCTION: ROBLOXSTUDIO 0x0068b610
extern "C" __declspec(naked) void asm_0068b610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, 0xe335a8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0xc], 4 }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { cmovae eax, ecx }
	__asm { push edi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { and ecx, 3 }
	__asm { je L_0068b63c }
	__asm { mov eax, 4 }
	__asm { sub eax, ecx }
	__asm { add esi, eax }
	__asm { L_0068b63c: }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { imul edi, esi }
	__asm { add edi, 8 }
	__asm { push 0x13164dd }
	__asm { push edi }
	__asm { call fn_00cf6a8b }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jne L_0068b6ab }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { cmp edi, 4 }
	__asm { jbe L_0068b6a2 }
	__asm { shr edi, 1 }
	__asm { lea eax, [ebx + 0xc] }
	__asm { mov dword ptr [ebx + 0x10], edi }
	__asm { cmp dword ptr [eax], 4 }
	__asm { mov esi, 0xe335a8 }
	__asm { cmovae esi, eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { and ecx, 3 }
	__asm { je L_0068b687 }
	__asm { mov eax, 4 }
	__asm { sub eax, ecx }
	__asm { add esi, eax }
	__asm { L_0068b687: }
	__asm { imul edi, esi }
	__asm { add edi, 8 }
	__asm { push 0x13164dd }
	__asm { push edi }
	__asm { call fn_00cf6a8b }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jne L_0068b6ab }
	__asm { L_0068b6a2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068b6ab: }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { test ecx, ecx }
	__asm { jne L_0068b6b7 }
	__asm { shl dword ptr [ebx + 0x10], 1 }
	__asm { jmp L_0068b6ed }
	__asm { L_0068b6b7: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { imul eax, esi }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 0xc] }
	__asm { cmp eax, ecx }
	__asm { jae L_0068b6ed }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { imul eax, ecx }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add ecx, ecx }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov edx, eax }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { cmovae eax, ecx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { L_0068b6ed: }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { sub eax, 8 }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { imul eax, esi }
	__asm { add eax, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { cmp eax, edx }
	__asm { je L_0068b71c }
	__asm { mov ecx, eax }
	__asm { sub ecx, esi }
	__asm { cmp ecx, edx }
	__asm { je L_0068b71a }
	__asm { L_0068b710: }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { sub ecx, esi }
	__asm { cmp ecx, edx }
	__asm { jne L_0068b710 }
	__asm { L_0068b71a: }
	__asm { mov dword ptr [edx], eax }
	__asm { L_0068b71c: }
	__asm { mov dword ptr [ebx], edx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edx + edi - 8], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edx + edi - 4], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 8], edi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0068b740
extern "C" __declspec(naked) void asm_0068b740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [ecx + 8] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { lea edx, [eax + 8] }
	__asm { lea esi, [ecx + 8] }
	__asm { cmovbe edx, esi }
	__asm { comiss xmm0, dword ptr [ecx + 4] }
	__asm { movss xmm2, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { lea edx, [eax + 4] }
	__asm { lea esi, [ecx + 4] }
	__asm { cmovbe edx, esi }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [edx] }
	__asm { cmovbe eax, ecx }
	__asm { pop esi }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp dword ptr [eax] }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068a380();
extern "C" void fn_0068b5a0();
extern "C" void fn_00cf6a8b();
// FUNCTION: ROBLOXSTUDIO 0x0068b8a0
extern "C" __declspec(naked) void asm_0068b8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { cmp esi, 4 }
	__asm { mov eax, 0xe335a8 }
	__asm { cmovae eax, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov edx, edi }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { and edx, 3 }
	__asm { je L_0068b8d7 }
	__asm { mov ecx, 4 }
	__asm { sub ecx, edx }
	__asm { add edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { L_0068b8d7: }
	__asm { imul esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div edi }
	__asm { xor ecx, ecx }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { setne cl }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_0068b5a0 }
	__asm { test eax, eax }
	__asm { jne L_0068ba4d }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { je L_0068ba4d }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { cmp dword ptr [ebx + 0x10], ecx }
	__asm { lea esi, [ebx + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmovae eax, esi }
	__asm { push 0x13164dd }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ebx }
	__asm { imul ebx, edi }
	__asm { add ebx, 8 }
	__asm { push ebx }
	__asm { call fn_00cf6a8b }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0068b976 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { cmp ecx, eax }
	__asm { jae L_0068b96b }
	__asm { shr eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp dword ptr [esi], ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmovae eax, esi }
	__asm { push 0x13164dd }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ebx }
	__asm { imul ebx, dword ptr [ebp - 4] }
	__asm { add ebx, 8 }
	__asm { push ebx }
	__asm { call fn_00cf6a8b }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0068b976 }
	__asm { L_0068b96b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068b976: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp dword ptr [esi], edx }
	__asm { jbe L_0068b99a }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, eax }
	__asm { imul ecx, edx }
	__asm { push eax }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { sub eax, 8 }
	__asm { push eax }
	__asm { lea eax, [ecx + edi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_0068a380 }
	__asm { L_0068b99a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { cmp dword ptr [ecx + 0x18], 0 }
	__asm { jne L_0068b9a7 }
	__asm { shl dword ptr [esi], 1 }
	__asm { jmp L_0068b9e8 }
	__asm { L_0068b9a7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { imul eax, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { xor edx, edx }
	__asm { div dword ptr [ecx + 0xc] }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { cmp eax, edx }
	__asm { jae L_0068b9e8 }
	__asm { imul edx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov edx, eax }
	__asm { cmp edx, ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_0068b9e8: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_0068ba3a }
	__asm { cmp eax, edi }
	__asm { ja L_0068ba3a }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { mov edx, eax }
	__asm { cmp dword ptr [edx + esi - 8], 0 }
	__asm { je L_0068ba17 }
	__asm { nop }
	__asm { L_0068ba00: }
	__asm { mov ecx, dword ptr [edx + esi - 8] }
	__asm { lea eax, [edx + esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_0068ba17 }
	__asm { mov esi, dword ptr [eax - 4] }
	__asm { mov edx, ecx }
	__asm { cmp dword ptr [esi + edx - 8], 0 }
	__asm { jne L_0068ba00 }
	__asm { L_0068ba17: }
	__asm { mov eax, dword ptr [edx + esi - 4] }
	__asm { mov ecx, dword ptr [edx + esi - 8] }
	__asm { mov dword ptr [edi + ebx - 4], eax }
	__asm { mov dword ptr [edi + ebx - 8], ecx }
	__asm { mov dword ptr [edx + esi - 8], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [edx + esi - 4], ebx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068ba3a: }
	__asm { mov dword ptr [edi + ebx - 8], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edi + ebx - 4], eax }
	__asm { mov dword ptr [ecx + 4], edi }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { mov eax, edi }
	__asm { L_0068ba4d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00660010();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068bf00
extern "C" __declspec(naked) void asm_0068bf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13521 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0068bf56 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0068bf55 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0068bf55 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068bf55: }
	__asm { pop ebx }
	__asm { L_0068bf56: }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0068bf91 }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_0068bf78 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call fn_00660010 }
	__asm { L_0068bf78: }
	__asm { push dword ptr [edi + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { L_0068bf91: }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0068bfcc }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { je L_0068bfb3 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call fn_00660010 }
	__asm { L_0068bfb3: }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { L_0068bfcc: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0068c00a }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_0068bff1 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00660010 }
	__asm { L_0068bff1: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0068c00a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004037f0();
extern "C" void fn_0040f890();
extern "C" void fn_0042e3d0();
extern "C" void fn_0068d200();
extern "C" void fn_0068fb30();
extern "C" void fn_0092da00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068cd50
extern "C" __declspec(naked) void asm_0068cd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd136d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { add eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp eax, 0xf }
	__asm { je L_0068cdc9 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_0068cdc9 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { L_0068cdc9: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_0040f890 }
	__asm { push 0x2a }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_0042e3d0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_0040f890 }
	__asm { movzx eax, byte ptr [edi + 0x34] }
	__asm { lea ebx, [edi + 0x34] }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { je L_0068ce01 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_0068ce08 }
	__asm { L_0068ce01: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_0068ce08: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { cmovae ecx, dword ptr [ebp - 0x34] }
	__asm { add ecx, dword ptr [ebp - 0x24] }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, dword ptr [ebp - 0x34] }
	__asm { xor edi, edi }
	__asm { cmp eax, ecx }
	__asm { je L_0068ce45 }
	__asm { L_0068ce27: }
	__asm { mov esi, edi }
	__asm { mov edx, edi }
	__asm { shr edx, 2 }
	__asm { shl esi, 6 }
	__asm { add esi, edx }
	__asm { movsx edx, byte ptr [eax] }
	__asm { add edx, 0x9e3779b9 }
	__asm { add edx, esi }
	__asm { inc eax }
	__asm { xor edi, edx }
	__asm { cmp eax, ecx }
	__asm { jne L_0068ce27 }
	__asm { L_0068ce45: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0092da00 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { je L_0068cea3 }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0068ce7d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0068ce7d: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_0068ce8e }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068ce8e: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0068cea3: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_0068d200 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068fb30 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea ebx, [eax + 0x18] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test esi, esi }
	__asm { je L_0068cf15 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068cf15 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068cf15 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068cf15: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0068cf35 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0068cf35: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0068cf6a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068cf6a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0068cf6a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068cf6a: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_0068cf7b }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068cf7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0068cd50();
extern "C" void fn_0068d0f0();
// FUNCTION: ROBLOXSTUDIO 0x0068cf90
extern "C" __declspec(naked) void asm_0068cf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1371d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_0068cd50 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0068cffb }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test eax, eax }
	__asm { je L_0068cfed }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0068cfed: }
	__asm { lea esi, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ebx, 1 }
	__asm { jmp L_0068d00d }
	__asm { L_0068cffb: }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068d0f0 }
	__asm { mov esi, eax }
	__asm { mov ebx, 2 }
	__asm { L_0068d00d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { or ebx, 4 }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test bl, 2 }
	__asm { je L_0068d06c }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_0068d06c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068d06c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068d06c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068d06c: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 1 }
	__asm { je L_0068d0a9 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { and ebx, 0xfffffffe }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_0068d0a9 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068d0a9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068d0a9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068d0a9: }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0068d0d7 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068d0d7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], edi }
	__asm { dec edi }
	__asm { jne L_0068d0d7 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0068d0d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0068d0f0
extern "C" __declspec(naked) void asm_0068d0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1372f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x4c], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { jne L_0068d1c1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 2], 0 }
	__asm { je L_0068d1c1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x4c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x50] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x50], edx }
	__asm { test esi, esi }
	__asm { je L_0068d18f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068d18f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0068d18f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068d18f: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0068d1c0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0068d1c0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0068d1c0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068d1c0: }
	__asm { pop edi }
	__asm { L_0068d1c1: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebx + 0x50] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0068d1df }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0068d1df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012d97c4[];
extern "C" void fn_004028a0();
extern "C" void fn_004030b0();
extern "C" void fn_004039a0();
extern "C" void fn_0042d740();
extern "C" void fn_0042e6e0();
extern "C" void fn_0060f640();
extern "C" void fn_0060f7a0();
extern "C" void fn_006b8aa8();
extern "C" void fn_0092da00();
// FUNCTION: ROBLOXSTUDIO 0x0068d200
extern "C" __declspec(naked) void asm_0068d200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13759 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { lea esi, [ebx + 4] }
	__asm { inc eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { add eax, esi }
	__asm { je L_0068d239 }
	__asm { inc eax }
	__asm { jmp L_0068d23b }
	__asm { L_0068d239: }
	__asm { xor eax, eax }
	__asm { L_0068d23b: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_0092da00 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { test esi, esi }
	__asm { jne L_0068d27f }
	__asm { L_0068d25c: }
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
	__asm { ret 0x10 }
	__asm { L_0068d27f: }
	__asm { movzx eax, byte ptr [ebx + 0x1c] }
	__asm { lea edi, [ebx + 0x1c] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_0068d28e }
	__asm { inc eax }
	__asm { jmp L_0068d290 }
	__asm { L_0068d28e: }
	__asm { xor eax, eax }
	__asm { L_0068d290: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_0092da00 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_0068d25c }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add eax, 0x18 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add esi, 0x18 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x30] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0060f640 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { cmp byte ptr [g_012d97c4], 0 }
	__asm { je L_0068d357 }
	__asm { push 0x10189d0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { call fn_0042d740 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_0042e6e0 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push 0xe3f004 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0x24 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004028a0 }
	__asm { L_0068d357: }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_004039a0 }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0060f7a0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_004028a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, 0x68d39e }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e1038c[];
extern "C" char g_00e10394[];
extern "C" char g_00e103f4[];
extern "C" void fn_00426140();
extern "C" void fn_0042d740();
extern "C" void fn_0042e6e0();
extern "C" void fn_00480130();
extern "C" void fn_00480230();
extern "C" void fn_00532500();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068d3c0
extern "C" __declspec(naked) void asm_0068d3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd137be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x194 }
	__asm { push esi }
	__asm { push 0x10189d0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d740 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_0068d41b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0068d41b: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push 0x21 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x19c] }
	__asm { call fn_00480130 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0068d43e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068d43e: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_0068d465 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068d465: }
	__asm { mov eax, dword ptr [ebp - 0x19c] }
	__asm { lea ecx, [ebp - 0x19c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call dword ptr [g_00e103f4] }
	__asm { test al, al }
	__asm { je L_0068d4ba }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0068d49a }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0068d49a: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe3ed80 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_0068d4ba: }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { mov dword ptr [ebp - 0xe4], 0x102c20c }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xe0] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe4] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [ebp - 0xe4] }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xe4], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xe4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xe8], eax }
	__asm { lea ecx, [ebp - 0xe0] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xe0], 0xe1827c }
	__asm { mov dword ptr [ebp - 0xa8], 0 }
	__asm { mov dword ptr [ebp - 0xa4], 4 }
	__asm { lea eax, [ebp - 0x18c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe4] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call dword ptr [g_00e1038c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xe4] }
	__asm { call fn_00532500 }
	__asm { mov eax, dword ptr [ebp - 0xe4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xe4], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xe4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xe8], eax }
	__asm { lea ecx, [ebp - 0xe0] }
	__asm { mov dword ptr [ebp - 0xe0], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xe0] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xdc] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { call fn_00480230 }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e103f0[];
extern "C" void fn_0042c160();
extern "C" void fn_0042cfc0();
extern "C" void fn_005e7760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068d830
extern "C" __declspec(naked) void asm_0068d830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13806 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc0 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { je L_0068d989 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call fn_0042cfc0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xcc] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005e7760 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e103f0] }
	__asm { test eax, eax }
	__asm { je L_0068d96d }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_0068d8b6: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { jb L_0068d8c3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_0068d8c5 }
	__asm { L_0068d8c3: }
	__asm { mov eax, edi }
	__asm { L_0068d8c5: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea esi, [ebp - 0x24] }
	__asm { cmovae esi, dword ptr [ebp - 0x24] }
	__asm { cmp ecx, ebx }
	__asm { mov edx, ebx }
	__asm { cmovb edx, ecx }
	__asm { test edx, edx }
	__asm { je L_0068d936 }
	__asm { sub edx, 4 }
	__asm { jb L_0068d8f4 }
	__asm { L_0068d8e3: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jne L_0068d8f9 }
	__asm { add esi, 4 }
	__asm { add eax, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_0068d8e3 }
	__asm { L_0068d8f4: }
	__asm { cmp edx, -4 }
	__asm { je L_0068d92d }
	__asm { L_0068d8f9: }
	__asm { mov cl, byte ptr [esi] }
	__asm { cmp cl, byte ptr [eax] }
	__asm { jne L_0068d926 }
	__asm { cmp edx, -3 }
	__asm { je L_0068d92d }
	__asm { mov cl, byte ptr [esi + 1] }
	__asm { cmp cl, byte ptr [eax + 1] }
	__asm { jne L_0068d926 }
	__asm { cmp edx, -2 }
	__asm { je L_0068d92d }
	__asm { mov cl, byte ptr [esi + 2] }
	__asm { cmp cl, byte ptr [eax + 2] }
	__asm { jne L_0068d926 }
	__asm { cmp edx, -1 }
	__asm { je L_0068d92d }
	__asm { mov cl, byte ptr [esi + 3] }
	__asm { cmp cl, byte ptr [eax + 3] }
	__asm { je L_0068d92d }
	__asm { L_0068d926: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_0068d92f }
	__asm { L_0068d92d: }
	__asm { xor eax, eax }
	__asm { L_0068d92f: }
	__asm { test eax, eax }
	__asm { jne L_0068d945 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_0068d936: }
	__asm { cmp ecx, ebx }
	__asm { jb L_0068d945 }
	__asm { xor eax, eax }
	__asm { cmp ecx, ebx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_0068d99c }
	__asm { L_0068d945: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xcc] }
	__asm { push eax }
	__asm { call fn_005e7760 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e103f0] }
	__asm { test eax, eax }
	__asm { jne L_0068d8b6 }
	__asm { L_0068d96d: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0068d97e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068d97e: }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call fn_0042c160 }
	__asm { L_0068d989: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068d99c: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0068d9ad }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068d9ad: }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call fn_0042c160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10618[];
extern "C" void fn_0068de40();
extern "C" void fn_0068e570();
extern "C" void fn_0068ec70();
extern "C" void fn_00cf6a94();
// FUNCTION: ROBLOXSTUDIO 0x0068dd40
extern "C" __declspec(naked) void asm_0068dd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ecx + 0x58], 0 }
	__asm { mov dword ptr [ecx + 0x5c], 0 }
	__asm { call fn_00cf6a94 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0068dd7c }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0068dd7c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { L_0068dd84: }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, 0x20 }
	__asm { je L_0068dd96 }
	__asm { cmp al, 0xa }
	__asm { je L_0068dd96 }
	__asm { cmp al, 0xd }
	__asm { je L_0068dd96 }
	__asm { cmp al, 9 }
	__asm { jne L_0068dd99 }
	__asm { L_0068dd96: }
	__asm { inc ecx }
	__asm { jmp L_0068dd84 }
	__asm { L_0068dd99: }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov al, byte ptr [eax] }
	__asm { test al, al }
	__asm { jne L_0068ddc4 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { mov dword ptr [ecx + 0x58], 0xe3f02c }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 0x5c], eax }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10618] }
	__asm { L_0068ddc4: }
	__asm { cmp al, 0x5b }
	__asm { je L_0068ddfa }
	__asm { cmp al, 0x7b }
	__asm { je L_0068ddea }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { mov dword ptr [ecx + 0x58], 0xe3f050 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 0x5c], eax }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10618] }
	__asm { L_0068ddea: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0068e570 }
	__asm { jmp L_0068de08 }
	__asm { L_0068ddfa: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0068de40 }
	__asm { L_0068de08: }
	__asm { push esi }
	__asm { call fn_0068ec70 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_0068de33 }
	__asm { mov dword ptr [edi + 0x58], 0xe3f07c }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10618] }
	__asm { L_0068de33: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10618[];
extern "C" void fn_0068dfa0();
extern "C" void fn_0068ec10();
extern "C" void fn_0068fdb0();
extern "C" void fn_006901e0();
extern "C" void fn_00945ad0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0068e7e0
extern "C" __declspec(naked) void asm_0068e7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { xor edx, edx }
	__asm { L_0068e7f9: }
	__asm { mov al, byte ptr [ebx] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { cmp al, 0x5c }
	__asm { jne L_0068e95a }
	__asm { mov al, byte ptr [ebx] }
	__asm { movzx ecx, al }
	__asm { inc ebx }
	__asm { cmp byte ptr [ecx + 0xe3f178], 0 }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0068e87e }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jb L_0068e864 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { sub eax, ecx }
	__asm { lea edi, [edx + edx] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { inc eax }
	__asm { cmp edi, eax }
	__asm { cmovb edi, eax }
	__asm { push edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_006901e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_0068e864: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { inc edx }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov al, byte ptr [eax + 0xe3f178] }
	__asm { mov byte ptr [ecx], al }
	__asm { jmp L_0068e7f9 }
	__asm { L_0068e87e: }
	__asm { cmp al, 0x75 }
	__asm { jne L_0068ea06 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068dfa0 }
	__asm { lea edi, [eax - 0xd800] }
	__asm { cmp edi, 0x3ff }
	__asm { ja L_0068e8e5 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { inc ecx }
	__asm { mov al, byte ptr [ecx - 1] }
	__asm { cmp al, 0x5c }
	__asm { jne L_0068e9ea }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { cmp al, 0x75 }
	__asm { jne L_0068e9ea }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068dfa0 }
	__asm { lea ecx, [eax - 0xdc00] }
	__asm { cmp ecx, 0x3ff }
	__asm { ja L_0068e9cb }
	__asm { mov eax, edi }
	__asm { shl eax, 0xa }
	__asm { or eax, ecx }
	__asm { add eax, 0x10000 }
	__asm { L_0068e8e5: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0068fdb0 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add esp, 8 }
	__asm { lea ecx, [eax + ebx] }
	__asm { cmp ecx, dword ptr [esi + 0x10] }
	__asm { jb L_0068e936 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { sub eax, ecx }
	__asm { lea edi, [edx + edx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { add eax, ebx }
	__asm { cmp edi, eax }
	__asm { cmovb edi, eax }
	__asm { push edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_006901e0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_0068e936: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push ebx }
	__asm { lea eax, [ecx + ebx] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00cf67fe }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { add edx, ebx }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { jmp L_0068e7f9 }
	__asm { L_0068e95a: }
	__asm { cmp al, 0x22 }
	__asm { je L_0068ea37 }
	__asm { test al, al }
	__asm { je L_0068ea2e }
	__asm { cmp al, 0x20 }
	__asm { jb L_0068ea25 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jb L_0068e9b7 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { sub eax, ecx }
	__asm { lea edi, [edx + edx] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { inc eax }
	__asm { cmp edi, eax }
	__asm { cmovb edi, eax }
	__asm { push edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_006901e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_0068e9b7: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { inc edx }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov byte ptr [ecx], al }
	__asm { jmp L_0068e7f9 }
	__asm { L_0068e9cb: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { sub eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x58], 0xe3f2a0 }
	__asm { sub eax, 2 }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { push 1 }
	__asm { add esi, 0x18 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10618] }
	__asm { L_0068e9ea: }
	__asm { sub ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x58], 0xe3f278 }
	__asm { sub ecx, 2 }
	__asm { mov dword ptr [esi + 0x5c], ecx }
	__asm { push 1 }
	__asm { add esi, 0x18 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10618] }
	__asm { L_0068ea06: }
	__asm { mov dword ptr [esi + 0x58], 0xe3f2cc }
	__asm { L_0068ea0d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub eax, dword ptr [ecx + 4] }
	__asm { add esi, 0x18 }
	__asm { dec eax }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10618] }
	__asm { L_0068ea25: }
	__asm { mov dword ptr [esi + 0x58], 0xe3f318 }
	__asm { jmp L_0068ea0d }
	__asm { L_0068ea2e: }
	__asm { mov dword ptr [esi + 0x58], 0xe3f2e8 }
	__asm { jmp L_0068ea0d }
	__asm { L_0068ea37: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jb L_0068ea7c }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { sub eax, ecx }
	__asm { lea edi, [edx + edx] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { inc eax }
	__asm { cmp edi, eax }
	__asm { cmovb edi, eax }
	__asm { push edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_006901e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_0068ea7c: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { inc edx }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { sub dword ptr [esi + 0xc], edx }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx - 1] }
	__asm { push 1 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_0068ec10 }
	__asm { test eax, eax }
	__asm { je L_0068eab4 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { call fn_00945ad0 }
	__asm { L_0068eab4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10268[];
extern "C" char g_00e10500[];
extern "C" void fn_005e8100();
extern "C" void fn_006092d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068ee40
extern "C" __declspec(naked) void asm_0068ee40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13890 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { sub esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { je L_0068efbd }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebx + 4] }
	__asm { cmp ecx, esi }
	__asm { jae L_0068ef86 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { dec eax }
	__asm { cmp eax, esi }
	__asm { jae L_0068ee9f }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0068ee9f: }
	__asm { sub ecx, edx }
	__asm { sub edi, edx }
	__asm { mov edx, edi }
	__asm { shr edx, 1 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { add ecx, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0068eeb6 }
	__asm { xor edi, edi }
	__asm { jmp L_0068eeb8 }
	__asm { L_0068eeb6: }
	__asm { add edi, edx }
	__asm { L_0068eeb8: }
	__asm { cmp edi, ecx }
	__asm { cmovb edi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { test edi, edi }
	__asm { je L_0068eee3 }
	__asm { cmp edi, -1 }
	__asm { ja L_0068eedd }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test ecx, ecx }
	__asm { jne L_0068eee3 }
	__asm { L_0068eedd: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0068eee3: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10500] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006092d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { add esp, 0x20 }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { sub eax, ecx }
	__asm { add esp, 0xc }
	__asm { add esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0068ef46 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068ef46: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { lea eax, [ecx + edi] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + esi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0068ef86: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_006092d0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { lea edx, [ecx + esi] }
	__asm { cmp eax, ecx }
	__asm { je L_0068efba }
	__asm { cmp ecx, edx }
	__asm { je L_0068efba }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_005e8100 }
	__asm { add esp, 0x14 }
	__asm { L_0068efba: }
	__asm { add dword ptr [ebx + 4], esi }
	__asm { L_0068efbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" void fn_00412d20();
extern "C" void fn_0060f960();
extern "C" void fn_0068db10();
extern "C" void fn_0068f700();
extern "C" void fn_0068f930();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068f540
extern "C" __declspec(naked) void asm_0068f540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f593 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x90 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push esi }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0068f56e }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_0068f570 }
	__asm { L_0068f56e: }
	__asm { mov edx, eax }
	__asm { L_0068f570: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0068f579 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0068f57b }
	__asm { L_0068f579: }
	__asm { mov ecx, eax }
	__asm { L_0068f57b: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { sub esp, 0x38 }
	__asm { add eax, ecx }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_0060f960 }
	__asm { lea eax, [ebp - 0x9c] }
	__asm { push eax }
	__asm { call fn_0068f700 }
	__asm { add esp, 0x40 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x38 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov dword ptr [eax + 0x24], 0 }
	__asm { mov dword ptr [eax + 0x28], 0 }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_0068f700 }
	__asm { add esp, 0x40 }
	__asm { push 0 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x9c] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0068db10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { cmp esi, eax }
	__asm { je L_0068f654 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { jmp L_0068f657 }
	__asm { L_0068f654: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { L_0068f657: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_0068f696 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00412d20 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_0068f696: }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068f6c1 }
	__asm { test al, 1 }
	__asm { jne L_0068f6ba }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068f6ba }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068f6ba: }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { L_0068f6c1: }
	__asm { mov eax, dword ptr [ebp - 0x9c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0068f6ee }
	__asm { test al, 1 }
	__asm { jne L_0068f6ee }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068f6ee }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068f6ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0068f7f0
extern "C" __declspec(naked) void asm_0068f7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30f5b }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], edx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { test edx, edx }
	__asm { jne L_0068f8bc }
	__asm { push 0x14 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0068f8b5 }
	__asm { push 1 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0x10000 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0068f88b }
	__asm { mov byte ptr [eax], 0 }
	__asm { jmp L_0068f88d }
	__asm { L_0068f88b: }
	__asm { xor eax, eax }
	__asm { L_0068f88d: }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx], eax }
	__asm { jmp L_0068f8b7 }
	__asm { L_0068f8b5: }
	__asm { xor ebx, ebx }
	__asm { L_0068f8b7: }
	__asm { mov dword ptr [edi], ebx }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { L_0068f8bc: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ebx, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { add ebx, 3 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { and ebx, 0xfffffffc }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jbe L_0068f8fe }
	__asm { cmp dword ptr [edx + 4], ebx }
	__asm { mov esi, ebx }
	__asm { cmova esi, dword ptr [edx + 4] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edx], eax }
	__asm { L_0068f8fe: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { lea edx, [ecx + 0xc] }
	__asm { add edx, eax }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add eax, edx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { mov dword ptr [edi + 0xc], edx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402a10();
extern "C" void fn_004030b0();
extern "C" void fn_00403540();
extern "C" void fn_0065f110();
extern "C" void fn_006603f0();
extern "C" void fn_006904a0();
extern "C" void fn_00690530();
extern "C" void fn_0092da00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068fb30
extern "C" __declspec(naked) void asm_0068fb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13981 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_004030b0 }
	__asm { movzx edx, byte ptr [edi] }
	__asm { lea ecx, [edi + 1] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { add ecx, edx }
	__asm { je L_0068fb6b }
	__asm { inc ecx }
	__asm { jmp L_0068fb6d }
	__asm { L_0068fb6b: }
	__asm { xor ecx, ecx }
	__asm { L_0068fb6d: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0092da00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0068fc6a }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_0068fb90 }
	__asm { inc eax }
	__asm { jmp L_0068fb92 }
	__asm { L_0068fb90: }
	__asm { xor eax, eax }
	__asm { L_0068fb92: }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov word ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402a10 }
	__asm { add esp, 8 }
	__asm { mov ebx, eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00690530 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0068fbf3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_0068fbf3: }
	__asm { pop ebx }
	__asm { add esi, 0x18 }
	__asm { je L_0068fc06 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_0068fc06: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov byte ptr [ebp - 0x17], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_0068fc1f }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068fc1f: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006603f0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006904a0 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0068fc68 }
	__asm { cmp byte ptr [ebp - 0x17], 0 }
	__asm { je L_0068fc5f }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_0065f110 }
	__asm { add esp, 8 }
	__asm { L_0068fc5f: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068fc68: }
	__asm { mov eax, edi }
	__asm { L_0068fc6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0065f110();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00690530
extern "C" __declspec(naked) void asm_00690530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { jne L_00690582 }
	__asm { push 0x28 }
	__asm { mov word ptr [ebx + 8], ax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00690558 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00690558: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0xa }
	__asm { lea esi, [ebp - 0x28] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00690582: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00690597 }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0065f110 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_00690597: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00690790
extern "C" __declspec(naked) void asm_00690790()
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
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_00690821 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x1c }
	__asm { mov edi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0069080a }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069080a: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00690821: }
	__asm { cmp eax, 1 }
	__asm { jne L_00690846 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00690846: }
	__asm { cmp eax, 2 }
	__asm { jne L_00690896 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00690880 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00690865 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690865: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690880: }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00690896: }
	__asm { cmp eax, 3 }
	__asm { jne L_006908dc }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11db5f0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006908c6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006908c6: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006908dc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x11db5f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_0130734c[];
extern "C" void fn_004038a0();
extern "C" void fn_005eba40();
extern "C" void fn_00691f20();
extern "C" void fn_00692990();
extern "C" void fn_006a04c0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00bc5e20();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00690900
extern "C" __declspec(naked) void asm_00690900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13a4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [edi], ebx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 6 }
	__asm { lea eax, [edi + 0x10] }
	__asm { push 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf676b }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 6 }
	__asm { push 8 }
	__asm { lea eax, [edi + 0x40] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf676b }
	__asm { mov dword ptr [edi + 0xa8], 0 }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov dword ptr [edi + 0xac], 0 }
	__asm { mov dword ptr [edi + 0xcc], 0 }
	__asm { mov dword ptr [edi + 0xb0], 0 }
	__asm { mov dword ptr [edi + 0xb4], 0 }
	__asm { mov dword ptr [edi + 0xb8], 0 }
	__asm { mov dword ptr [edi + 0xd0], 0 }
	__asm { mov dword ptr [edi + 0xd4], 3 }
	__asm { mov dword ptr [edi + 0xd8], 0 }
	__asm { mov dword ptr [edi + 0xdc], 0 }
	__asm { mov dword ptr [edi + 0xe0], 0 }
	__asm { mov dword ptr [edi + 0xe4], 0 }
	__asm { mov dword ptr [edi + 0xe8], 0 }
	__asm { mov dword ptr [edi + 0xec], 0 }
	__asm { mov dword ptr [edi + 0xf0], 0 }
	__asm { mov dword ptr [edi + 0xf4], 0 }
	__asm { mov dword ptr [edi + 0xf8], 0 }
	__asm { mov dword ptr [edi + 0xfc], 0 }
	__asm { mov dword ptr [edi + 0x100], 0 }
	__asm { mov dword ptr [edi + 0x104], 0 }
	__asm { mov dword ptr [edi + 0x108], 0 }
	__asm { mov byte ptr [edi + 0x10c], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 7 }
	__asm { push 0xc }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00bc5e20 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { test ebx, ebx }
	__asm { je L_00690b35 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690b35 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690b35 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690b35: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test ebx, ebx }
	__asm { je L_00690b64 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690b64 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690b64 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690b64: }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00692990 }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { test ebx, ebx }
	__asm { je L_00690bb9 }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { test ebx, ebx }
	__asm { je L_00690bae }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690bae }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690bae }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690bae: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690bb9: }
	__asm { cmp byte ptr [g_0130734c], 0 }
	__asm { jne L_00690bcd }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00691f20 }
	__asm { L_00690bcd: }
	__asm { push 0x16 }
	__asm { push 0xe3f4b4 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_004038a0 }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test edx, edx }
	__asm { je L_00690c3b }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00690c3b: }
	__asm { mov dword ptr [edi + 0xa8], ebx }
	__asm { mov ebx, dword ptr [edi + 0xac] }
	__asm { mov dword ptr [edi + 0xac], edx }
	__asm { test ebx, ebx }
	__asm { je L_00690c75 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690c75 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690c75 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690c75: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { test ebx, ebx }
	__asm { je L_00690ca4 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690ca4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690ca4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690ca4: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { jb L_00690cb9 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690cb9: }
	__asm { push 0x17 }
	__asm { push 0xe3f4cc }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_004038a0 }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { test edx, edx }
	__asm { je L_00690d27 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00690d27: }
	__asm { mov dword ptr [edi + 0xcc], ebx }
	__asm { mov ebx, dword ptr [edi + 0xd0] }
	__asm { mov dword ptr [edi + 0xd0], edx }
	__asm { test ebx, ebx }
	__asm { je L_00690d61 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690d61 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690d61 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690d61: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { test ebx, ebx }
	__asm { je L_00690d8f }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690d8f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00690d8f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690d8f: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_00690da0 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690da0: }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { je L_00690dbe }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690dbe: }
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

extern "C" void fn_00692de0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00690de0
extern "C" __declspec(naked) void asm_00690de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13ac0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { lea ecx, [ebx + 0xf0] }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call fn_00692de0 }
	__asm { lea ecx, [ebx + 0xd8] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00692de0 }
	__asm { mov edi, dword ptr [ebx + 0xd0] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_00690e59 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690e59 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690e59 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690e59: }
	__asm { mov edi, dword ptr [ebx + 0xac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_00690e8b }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690e8b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690e8b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690e8b: }
	__asm { push 0x4033d0 }
	__asm { push 6 }
	__asm { push 8 }
	__asm { lea eax, [ebx + 0x40] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf669e }
	__asm { push 0x4033d0 }
	__asm { push 6 }
	__asm { push 8 }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf669e }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test edi, edi }
	__asm { je L_00690efb }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { test edi, edi }
	__asm { je L_00690ef0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690ef0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00690ef0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690ef0: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00690efb: }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00690f2c }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00690f2c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00690f2c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00690f2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00692b90();
extern "C" void fn_00a843a0();
// FUNCTION: ROBLOXSTUDIO 0x00691190
extern "C" __declspec(naked) void asm_00691190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13ad2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { xor eax, eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ebx, [edi + 0x40] }
	__asm { mov edx, ebx }
	__asm { L_006911b7: }
	__asm { mov esi, dword ptr [edx] }
	__asm { test esi, esi }
	__asm { je L_006911f0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp ecx, 3 }
	__asm { jne L_006911eb }
	__asm { inc eax }
	__asm { add edx, 8 }
	__asm { cmp eax, 6 }
	__asm { jl L_006911b7 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x70] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00a843a0 }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [edi + 0x10c], 1 }
	__asm { jmp L_006911f0 }
	__asm { L_006911eb: }
	__asm { cmp ecx, 1 }
	__asm { je L_0069124a }
	__asm { L_006911f0: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x70] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00692b90 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0069124a }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069124a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069124a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069124a: }
	__asm { inc dword ptr [edi + 0x108] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005eb5a0();
extern "C" void fn_005ebd40();
extern "C" void fn_00691e80();
extern "C" void fn_00693090();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00691c40
extern "C" __declspec(naked) void asm_00691c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13b7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { jne L_00691c87 }
	__asm { call fn_00691e80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00691c87: }
	__asm { push edi }
	__asm { call fn_00693090 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 0x10], al }
	__asm { mov edx, dword ptr [ecx] }
	__asm { setne al }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { add esi, 0x10 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00691cfc }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691cfc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00691cfc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691cfc: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00691d2e }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691d2e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00691d2e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691d2e: }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00691da1 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_005eb5a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ebx, 3 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_005ebd40 }
	__asm { mov ecx, eax }
	__asm { jmp L_00691da3 }
	__asm { L_00691da1: }
	__asm { xor ecx, ecx }
	__asm { L_00691da3: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { test edi, edi }
	__asm { je L_00691df0 }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { test edi, edi }
	__asm { je L_00691de5 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691de5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00691de5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691de5: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00691df0: }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test bl, 2 }
	__asm { je L_00691e2d }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_00691e2d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691e2d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00691e2d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691e2d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_00691e63 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { test edi, edi }
	__asm { je L_00691e63 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691e63 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00691e63 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691e63: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00691e80
extern "C" __declspec(naked) void asm_00691e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { test esi, esi }
	__asm { je L_00691ede }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { test esi, esi }
	__asm { je L_00691ed3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691ed3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00691ed3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691ed3: }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00691ede: }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { test esi, esi }
	__asm { je L_00691f16 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00691f16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00691f16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00691f16: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a04c0();
// FUNCTION: ROBLOXSTUDIO 0x00691fb0
extern "C" __declspec(naked) void asm_00691fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13bca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x1a4] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_00692004 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00692004: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { test ebx, ebx }
	__asm { je L_0069203b }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069203b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069203b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069203b: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_0069206d }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069206d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069206d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069206d: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_0069209a }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069209a: }
	__asm { mov dword ptr [edi + 8], ebx }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], edx }
	__asm { test ebx, ebx }
	__asm { je L_006920cb }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006920cb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006920cb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006920cb: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_006920fd }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006920fd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006920fd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006920fd: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test edx, edx }
	__asm { je L_0069212a }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069212a: }
	__asm { mov dword ptr [edi + 0x10], ebx }
	__asm { mov ebx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], edx }
	__asm { test ebx, ebx }
	__asm { je L_0069215b }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069215b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069215b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069215b: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_0069218d }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069218d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069218d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069218d: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test edx, edx }
	__asm { je L_006921ba }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006921ba: }
	__asm { mov dword ptr [edi + 0x18], ebx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], edx }
	__asm { test ebx, ebx }
	__asm { je L_006921eb }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006921eb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006921eb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006921eb: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_0069221d }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069221d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069221d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069221d: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test edx, edx }
	__asm { je L_0069224a }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069224a: }
	__asm { mov dword ptr [edi + 0x20], ebx }
	__asm { mov ebx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], edx }
	__asm { test ebx, ebx }
	__asm { je L_0069227b }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069227b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069227b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069227b: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_006922ad }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006922ad }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006922ad }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006922ad: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_006a04c0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_006922da }
	__asm { lea eax, [ecx + 4] }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_006922da: }
	__asm { mov dword ptr [edi + 0x28], ebx }
	__asm { mov ebx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { test ebx, ebx }
	__asm { je L_0069230b }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069230b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069230b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069230b: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { test edi, edi }
	__asm { je L_0069233d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069233d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0069233d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069233d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_005eb5a0();
extern "C" void fn_005ebd40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00692990
extern "C" __declspec(naked) void asm_00692990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13bf7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push 0x18 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x84], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x80], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x7c], 0 }
	__asm { mov dword ptr [ebp - 0x78], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x74], 0 }
	__asm { mov dword ptr [ebp - 0x70], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x6c], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x68], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 0x60], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x54], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x50], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x48], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x44], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x40], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x3c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x38], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x2c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0x60 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x84] }
	__asm { push edx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005eb5a0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00692ae3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00692ae3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00692ae3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00692ae3: }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_00692b0d }
	__asm { push 4 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_005ebd40 }
	__asm { mov ebx, eax }
	__asm { jmp L_00692b0f }
	__asm { L_00692b0d: }
	__asm { xor ebx, ebx }
	__asm { L_00692b0f: }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00692b3e }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00692b3e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00692b3e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00692b3e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00692b6f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00692b6f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00692b6f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00692b6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00692b90
extern "C" __declspec(naked) void asm_00692b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00692bf9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { L_00692ba3: }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { je L_00692bbb }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00692bbb: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_00692bf0 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00692bed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00692bed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00692bed: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00692bf0: }
	__asm { add esi, 8 }
	__asm { cmp esi, eax }
	__asm { jne L_00692ba3 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00692bf9: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00692de0
extern "C" __declspec(naked) void asm_00692de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13c23 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00692e39 }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00692e36 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00692e39 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00692e36: }
	__asm { or ecx, 0xffffffff }
	__asm { L_00692e39: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00692e79 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { test edi, edi }
	__asm { je L_00692e70 }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00692e70 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { jne L_00692e70 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00692e70: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00692e79: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00692eac }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00692eac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" char g_010381e8[];
// FUNCTION: ROBLOXSTUDIO 0x00692fb0
extern "C" __declspec(naked) void asm_00692fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm2, dword ptr [g_010380e4] }
	__asm { jb L_00692fcf }
	__asm { movaps xmm1, xmm0 }
	__asm { jmp L_00692fd7 }
	__asm { L_00692fcf: }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00692fd7 }
	__asm { movaps xmm1, xmm2 }
	__asm { L_00692fd7: }
	__asm { movss xmm3, dword ptr [g_010381e8] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { mulss xmm1, xmm3 }
	__asm { push esi }
	__asm { addss xmm1, xmm4 }
	__asm { cvttss2si esi, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00693003 }
	__asm { movaps xmm1, xmm0 }
	__asm { jmp L_0069300b }
	__asm { L_00693003: }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_0069300b }
	__asm { movaps xmm1, xmm2 }
	__asm { L_0069300b: }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm1, xmm4 }
	__asm { cvttss2si edx, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00693026 }
	__asm { movaps xmm1, xmm0 }
	__asm { jmp L_0069302e }
	__asm { L_00693026: }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_0069302e }
	__asm { movaps xmm1, xmm2 }
	__asm { L_0069302e: }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm1, xmm4 }
	__asm { cvttss2si ecx, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_00693051 }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_0069304e }
	__asm { movaps xmm0, xmm2 }
	__asm { jmp L_00693051 }
	__asm { L_0069304e: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00693051: }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm0, xmm4 }
	__asm { cvttss2si eax, xmm0 }
	__asm { shl eax, 8 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00693075 }
	__asm { or eax, esi }
	__asm { shl eax, 8 }
	__asm { or eax, edx }
	__asm { shl eax, 8 }
	__asm { or eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00693075: }
	__asm { or eax, ecx }
	__asm { shl eax, 8 }
	__asm { or eax, edx }
	__asm { shl eax, 8 }
	__asm { or eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e409ec[];
extern "C" char g_012de4bc[];
// FUNCTION: ROBLOXSTUDIO 0x006932d0
extern "C" __declspec(naked) void asm_006932d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { movss xmm3, dword ptr [eax + 0x48] }
	__asm { movss xmm2, dword ptr [eax + 0x54] }
	__asm { comiss xmm3, xmm2 }
	__asm { ja L_00693373 }
	__asm { movss xmm0, dword ptr [eax + 0x4c] }
	__asm { comiss xmm0, dword ptr [eax + 0x58] }
	__asm { ja L_00693373 }
	__asm { movss xmm1, dword ptr [eax + 0x50] }
	__asm { comiss xmm1, dword ptr [eax + 0x5c] }
	__asm { ja L_00693373 }
	__asm { movss xmm4, dword ptr [eax + 0x58] }
	__asm { subss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [g_012de4bc] }
	__asm { subss xmm2, xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x5c] }
	__asm { subss xmm3, xmm1 }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm1, xmm3 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00693373 }
	__asm { comiss xmm4, xmm2 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm4 }
	__asm { movss dword ptr [ebp - 4], xmm3 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_0069334a }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_0069334a: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_0069335e }
	__asm { lea eax, [ebp + 8] }
	__asm { L_0069335e: }
	__asm { movss xmm0, dword ptr [g_00e409ec] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { jbe L_00693373 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00693373: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e409ec[];
extern "C" char g_012de4bc[];
extern "C" void fn_0066c5a0();
extern "C" void fn_006952d0();
extern "C" void fn_00695370();
extern "C" void fn_00695a60();
extern "C" void fn_00c84b70();
// FUNCTION: ROBLOXSTUDIO 0x00693380
extern "C" __declspec(naked) void asm_00693380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [eax + 0x30], -1 }
	__asm { movss xmm3, dword ptr [eax + 0x48] }
	__asm { movss xmm2, dword ptr [eax + 0x54] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jle L_00693464 }
	__asm { comiss xmm3, xmm2 }
	__asm { ja L_0069343b }
	__asm { movss xmm0, dword ptr [eax + 0x4c] }
	__asm { comiss xmm0, dword ptr [eax + 0x58] }
	__asm { ja L_0069343b }
	__asm { movss xmm1, dword ptr [eax + 0x50] }
	__asm { comiss xmm1, dword ptr [eax + 0x5c] }
	__asm { ja L_0069343b }
	__asm { movss xmm4, dword ptr [eax + 0x58] }
	__asm { subss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [g_012de4bc] }
	__asm { subss xmm2, xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x5c] }
	__asm { subss xmm3, xmm1 }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm1, xmm3 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_0069343b }
	__asm { comiss xmm4, xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { movss dword ptr [ebp - 0xc], xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm3 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { ja L_0069340b }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { L_0069340b: }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { ja L_0069341f }
	__asm { lea ecx, [ebp - 4] }
	__asm { L_0069341f: }
	__asm { movss xmm0, dword ptr [g_00e409ec] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { jbe L_0069343b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_00695370 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069343b: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_00695a60 }
	__asm { L_00693443: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0066c5a0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00693464: }
	__asm { comiss xmm3, xmm2 }
	__asm { ja L_00693443 }
	__asm { movss xmm0, dword ptr [eax + 0x4c] }
	__asm { comiss xmm0, dword ptr [eax + 0x58] }
	__asm { ja L_00693443 }
	__asm { movss xmm1, dword ptr [eax + 0x50] }
	__asm { comiss xmm1, dword ptr [eax + 0x5c] }
	__asm { ja L_00693443 }
	__asm { movss xmm4, dword ptr [eax + 0x58] }
	__asm { subss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [g_012de4bc] }
	__asm { subss xmm2, xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x5c] }
	__asm { subss xmm3, xmm1 }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm1, xmm3 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00693443 }
	__asm { comiss xmm4, xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { movss dword ptr [ebp - 0xc], xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm3 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { ja L_006934c7 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_006934c7: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_006934db }
	__asm { lea eax, [ebp - 4] }
	__asm { L_006934db: }
	__asm { movss xmm0, dword ptr [g_00e409ec] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { jbe L_00693443 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00c84b70 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006952d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00693920
extern "C" __declspec(naked) void asm_00693920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ecx - 1] }
	__asm { cdq }
	__asm { push esi }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jge L_00693980 }
	__asm { mov edi, edi }
	__asm { L_00693940: }
	__asm { mov edx, esi }
	__asm { add edx, edx }
	__asm { movss xmm0, dword ptr [edi + edx*8 + 0xc] }
	__asm { comiss xmm0, dword ptr [ebx + 0xc] }
	__asm { jbe L_00693980 }
	__asm { mov eax, dword ptr [edi + edx*8] }
	__asm { shl ecx, 4 }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + edx*8 + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { mov ecx, esi }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jl L_00693940 }
	__asm { L_00693980: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { shl ecx, 4 }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00694200();
extern "C" void fn_00694320();
extern "C" void fn_00694ba0();
extern "C" void fn_00695c20();
extern "C" void fn_00695ca0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006948f0
extern "C" __declspec(naked) void asm_006948f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00695c20 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00694945 }
	__asm { cmp word ptr [edi], -1 }
	__asm { jge L_00694945 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00694930 }
	__asm { push 0x2b }
	__asm { push 0xe3f7a0 }
	__asm { push 0xe3f7f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00694945 }
	__asm { L_00694930: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f800 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00694945: }
	__asm { cmp word ptr [edi], 0 }
	__asm { jle L_006949cf }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00694994 }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { jne L_00694994 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0069497f }
	__asm { push 0x131 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe40584 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00694994 }
	__asm { L_0069497f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe40598 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00694994: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { dec dword ptr [ecx + 0x28] }
	__asm { jne L_006949e8 }
	__asm { cmp byte ptr [ecx + 0x24], 0 }
	__asm { jne L_006949e8 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { movsx esi, word ptr [ecx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00694320 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00695ca0 }
	__asm { pop esi }
	__asm { jmp L_006949e8 }
	__asm { L_006949cf: }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00694ba0 }
	__asm { test al, al }
	__asm { jne L_006949e8 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00695ca0 }
	__asm { L_006949e8: }
	__asm { mov eax, 0xfffffffe }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov word ptr [edi], ax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_00694200 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 0x60] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9c940[];
extern "C" char g_012de29c[];
extern "C" char g_012de2a0[];
extern "C" char g_012de2a4[];
extern "C" char g_012de2a8[];
// FUNCTION: ROBLOXSTUDIO 0x00694f20
extern "C" __declspec(naked) void asm_00694f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012de2a8] }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test al, 1 }
	__asm { jne L_00694f55 }
	__asm { mov edx, 1 }
	__asm { or eax, 1 }
	__asm { mov esi, edx }
	__asm { mov dword ptr [g_012de2a8], eax }
	__asm { mov dword ptr [g_012de29c], edx }
	__asm { mov dword ptr [g_012de2a0], esi }
	__asm { mov dword ptr [g_012de2a4], edx }
	__asm { jmp L_00694f61 }
	__asm { L_00694f55: }
	__asm { mov esi, dword ptr [g_012de2a0] }
	__asm { mov edx, dword ptr [g_012de29c] }
	__asm { L_00694f61: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { lea edi, [ecx + edx] }
	__asm { mov edx, dword ptr [g_012de2a4] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [g_00e9c940] }
	__asm { add esi, ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add edx, ebx }
	__asm { shl eax, cl }
	__asm { cvtsi2ss xmm0, edi }
	__asm { cvtsi2ss xmm3, eax }
	__asm { cvtsi2ss xmm1, esi }
	__asm { cvtsi2ss xmm2, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { cvtsi2ss xmm1, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { cvtsi2ss xmm2, ebx }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edx], eax }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { mov eax, edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006950c0
extern "C" __declspec(naked) void asm_006950c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { subss xmm1, dword ptr [ecx] }
	__asm { subss xmm0, dword ptr [ecx + 4] }
	__asm { movss xmm2, dword ptr [ecx + 0x14] }
	__asm { subss xmm2, dword ptr [ecx + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { comiss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { ja L_006950fd }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_006950fd: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00695111 }
	__asm { lea eax, [ebp - 4] }
	__asm { L_00695111: }
	__asm { fld dword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9c940[];
extern "C" char g_010381ac[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00619bb0();
extern "C" void fn_00655000();
extern "C" void fn_006942c0();
extern "C" void fn_006955e0();
extern "C" void fn_00695820();
extern "C" void fn_00695a60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00695370
extern "C" __declspec(naked) void asm_00695370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xb4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { lea eax, [edi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00655000 }
	__asm { fild dword ptr [g_00e9c940] }
	__asm { mov eax, dword ptr [g_00e9c940] }
	__asm { mov ecx, dword ptr [ebx + 0x20] }
	__asm { movss xmm2, dword ptr [ebp - 0x3c] }
	__asm { imul ecx, eax }
	__asm { fadd st(0), st(0) }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { movss xmm3, dword ptr [ebp - 0x38] }
	__asm { imul ecx, eax }
	__asm { subss xmm3, dword ptr [ebp - 0x44] }
	__asm { imul ecx, eax }
	__asm { subss xmm2, dword ptr [ebp - 0x48] }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp - 0x34] }
	__asm { subss xmm1, dword ptr [ebp - 0x40] }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm2, xmm0 }
	__asm { add esp, 8 }
	__asm { xor esi, esi }
	__asm { addss xmm1, xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mulss xmm3, xmm2 }
	__asm { mulss xmm3, xmm1 }
	__asm { movss xmm1, dword ptr [g_010381ac] }
	__asm { L_006953f2: }
	__asm { comiss xmm0, xmm3 }
	__asm { ja L_00695406 }
	__asm { inc esi }
	__asm { mulss xmm0, xmm1 }
	__asm { cmp esi, 3 }
	__asm { jl L_006953f2 }
	__asm { mov esi, 3 }
	__asm { L_00695406: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0069544a }
	__asm { cmp dword ptr [edi + 0x30], -1 }
	__asm { jge L_0069544a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00695439 }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0069544a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00695439: }
	__asm { movzx eax, al }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0069544a: }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov dword ptr [ebp - 0x9c], ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x98], ecx }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov dword ptr [ebp - 0x94], ecx }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x90], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov dword ptr [ebp - 0x8c], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x88], ecx }
	__asm { mov ecx, ebx }
	__asm { cmp eax, 1 }
	__asm { ja L_006954b0 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00695820 }
	__asm { jmp L_006954c0 }
	__asm { L_006954b0: }
	__asm { push edi }
	__asm { call fn_00695a60 }
	__asm { push 1 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_006955e0 }
	__asm { L_006954c0: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0xb4], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 0xb0], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 0xac], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xa8], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0xa4], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0xa0], eax }
	__asm { mov eax, dword ptr [ebx + 0x78] }
	__asm { cmp eax, dword ptr [ebx + 0x7c] }
	__asm { je L_006955cf }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_00695533 }
	__asm { lea eax, [ebp - 0xb4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { call fn_006942c0 }
	__asm { test al, al }
	__asm { je L_006955cf }
	__asm { L_00695533: }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { call fn_00619bb0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00619bb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x80], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x7c], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x78], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x74], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov ecx, dword ptr [ebx + 0x78] }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov eax, dword ptr [ebx + 0x7c] }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp - 0x64], esi }
	__asm { sar eax, 2 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x84], 1 }
	__asm { test eax, eax }
	__asm { je L_006955cf }
	__asm { nop }
	__asm { L_006955b0: }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { lea edx, [ebp - 0x84] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebx + 0x78] }
	__asm { mov eax, dword ptr [ebx + 0x7c] }
	__asm { sub eax, ecx }
	__asm { inc esi }
	__asm { sar eax, 2 }
	__asm { cmp esi, eax }
	__asm { jb L_006955b0 }
	__asm { L_006955cf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9c940[];
extern "C" char g_010381ac[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00655000();
extern "C" void fn_006946d0();
extern "C" void fn_006b9740();
extern "C" void fn_00a08ad0();
// FUNCTION: ROBLOXSTUDIO 0x006955e0
extern "C" __declspec(naked) void asm_006955e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x50 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { je L_0069566e }
	__asm { cmp dword ptr [esi + 0x30], -1 }
	__asm { jge L_00695636 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0069561d }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695632 }
	__asm { L_0069561d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695632: }
	__asm { cmp dword ptr [esi + 0x30], -1 }
	__asm { L_00695636: }
	__asm { je L_0069566e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695659 }
	__asm { push 0x233 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe40684 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0069566e }
	__asm { L_00695659: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe406a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0069566e: }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00655000 }
	__asm { fild dword ptr [g_00e9c940] }
	__asm { mov eax, dword ptr [g_00e9c940] }
	__asm { mov ecx, dword ptr [ebx + 0x20] }
	__asm { movss xmm2, dword ptr [ebp - 0x2c] }
	__asm { imul ecx, eax }
	__asm { fadd st(0), st(0) }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { movss xmm3, dword ptr [ebp - 0x28] }
	__asm { imul ecx, eax }
	__asm { subss xmm3, dword ptr [ebp - 0x34] }
	__asm { imul ecx, eax }
	__asm { subss xmm2, dword ptr [ebp - 0x38] }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss xmm1, dword ptr [ebp - 0x24] }
	__asm { subss xmm1, dword ptr [ebp - 0x30] }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm2, xmm0 }
	__asm { add esp, 8 }
	__asm { xor ebx, ebx }
	__asm { addss xmm1, xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mulss xmm3, xmm2 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mulss xmm3, xmm1 }
	__asm { movss xmm1, dword ptr [g_010381ac] }
	__asm { L_006956e2: }
	__asm { comiss xmm0, xmm3 }
	__asm { ja L_006956fc }
	__asm { inc ebx }
	__asm { mulss xmm0, xmm1 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp ebx, 3 }
	__asm { jl L_006956e2 }
	__asm { mov ebx, 3 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_006956fc: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00a08ad0 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x30], ebx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x18], ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x50], ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov dword ptr [ebx + 0x24], edi }
	__asm { mov dword ptr [ebx + 0x28], edx }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x1c], esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x48], ecx }
	__asm { mov dword ptr [ebx + 0x20], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x44], edi }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { call fn_006946d0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { pop edi }
	__asm { je L_00695812 }
	__asm { cmp dword ptr [ebx + 0x30], -1 }
	__asm { jge L_006957d4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006957bf }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006957d4 }
	__asm { L_006957bf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006957d4: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ebx + 0x30], eax }
	__asm { je L_00695812 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006957fd }
	__asm { push 0x241 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe40728 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695812 }
	__asm { L_006957fd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe40750 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695812: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006946d0();
extern "C" void fn_00695f60();
extern "C" void fn_006b9740();
extern "C" void fn_00a08ad0();
// FUNCTION: ROBLOXSTUDIO 0x00695820
extern "C" __declspec(naked) void asm_00695820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x70 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_006958ad }
	__asm { cmp dword ptr [esi + 0x30], -1 }
	__asm { jge L_00695875 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0069585c }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695871 }
	__asm { L_0069585c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695871: }
	__asm { cmp dword ptr [esi + 0x30], -1 }
	__asm { L_00695875: }
	__asm { jne L_006958ad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695898 }
	__asm { push 0x2a6 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe3fc94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006958ad }
	__asm { L_00695898: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe408e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006958ad: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { je L_00695919 }
	__asm { cmp dword ptr [esi + 0x30], -1 }
	__asm { jge L_00695919 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695904 }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695919 }
	__asm { L_00695904: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695919: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00a08ad0 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, dword ptr [esi + 0x18] }
	__asm { jne L_00695963 }
	__asm { cmp edx, dword ptr [esi + 0x1c] }
	__asm { jne L_00695963 }
	__asm { cmp ecx, dword ptr [esi + 0x20] }
	__asm { jne L_00695963 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { cmp eax, dword ptr [esi + 0x24] }
	__asm { jne L_00695963 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jne L_00695963 }
	__asm { cmp ebx, dword ptr [esi + 0x2c] }
	__asm { je L_00695a48 }
	__asm { L_00695963: }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x3c], edi }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 0x38], edi }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { mov dword ptr [ebp - 0x34], edi }
	__asm { mov edi, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 0x30], edi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x2c], edi }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x44], ebx }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x58], edi }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 0x18], ebx }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x4c], edi }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x24], ebx }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov dword ptr [ebp - 0x48], edi }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x1c], edx }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov dword ptr [ebp - 0x54], edx }
	__asm { mov dword ptr [ebp - 0x50], ecx }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov dword ptr [esi + 0x2c], ebx }
	__asm { cmp eax, dword ptr [ebp - 0x1c] }
	__asm { jg L_00695a26 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ebp - 0x18] }
	__asm { jg L_00695a26 }
	__asm { cmp dword ptr [ebp + 0xc], ebx }
	__asm { jg L_00695a26 }
	__asm { cmp dword ptr [ebp - 8], edx }
	__asm { jl L_00695a26 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp eax, dword ptr [ebp - 0x28] }
	__asm { jl L_00695a26 }
	__asm { cmp dword ptr [ebp - 0x10], ecx }
	__asm { jl L_00695a26 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { call fn_00695f60 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006946d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00695a26: }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006946d0 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006946d0 }
	__asm { L_00695a48: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00694040();
extern "C" void fn_00694260();
extern "C" void fn_00694c70();
extern "C" void fn_006b9740();
extern "C" void fn_00a08c70();
// FUNCTION: ROBLOXSTUDIO 0x00695ca0
extern "C" __declspec(naked) void asm_00695ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_00695cc7 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a08c70 }
	__asm { add esp, 8 }
	__asm { jmp L_00695cca }
	__asm { L_00695cc7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00695cca: }
	__asm { lea ebx, [esi + 1] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp ebx, 4 }
	__asm { jge L_00695e47 }
	__asm { mov edi, ebx }
	__asm { sub edi, esi }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { L_00695ce0: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [edx] }
	__asm { sar eax, cl }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sar eax, cl }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { sar eax, cl }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00a08c70 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_00694c70 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { je L_00695d5f }
	__asm { test esi, esi }
	__asm { jne L_00695d5f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695d4a }
	__asm { push 0x14d }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe3ff04 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695d5f }
	__asm { L_00695d4a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3ff08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695d5f: }
	__asm { lea ecx, [edi - 1] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sar eax, cl }
	__asm { sar edx, cl }
	__asm { and eax, 1 }
	__asm { and edx, 1 }
	__asm { lea edx, [eax + edx*2] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sar eax, cl }
	__asm { and eax, 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { lea edi, [eax + edx*2] }
	__asm { je L_00695dcb }
	__asm { movzx eax, word ptr [esi + edi*2 + 0x14] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { je L_00695dcb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695db6 }
	__asm { push 0x150 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe3ff6c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695dcb }
	__asm { L_00695db6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3ff90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695dcb: }
	__asm { mov al, 1 }
	__asm { mov ecx, edi }
	__asm { shl al, cl }
	__asm { not al }
	__asm { and byte ptr [esi + 0x24], al }
	__asm { mov eax, 0xffff }
	__asm { mov word ptr [esi + edi*2 + 0x14], ax }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_00695e47 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { jne L_00695e47 }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + eax*4] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00695e11 }
	__asm { L_00695e08: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x2c }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00695e08 }
	__asm { L_00695e11: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call fn_00694040 }
	__asm { push esi }
	__asm { call fn_00694260 }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { inc ebx }
	__asm { inc edi }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { cmp ebx, 4 }
	__asm { jl L_00695ce0 }
	__asm { L_00695e47: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0060f500();
extern "C" void fn_00698250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00696c10
extern "C" __declspec(naked) void asm_00696c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13def }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe409f4 }
	__asm { mov esi, dword ptr [edi + 0x4c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00696c6c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00696c6c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00696c6c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00696c6c: }
	__asm { mov esi, dword ptr [edi + 0x44] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00696c9b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00696c9b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00696c9b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00696c9b: }
	__asm { mov esi, dword ptr [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00696cb6 }
	__asm { mov ecx, esi }
	__asm { call fn_00698250 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00696cb6: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00696ce4 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00696ce4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00696ce4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00696ce4: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012d97c4[];
extern "C" void fn_006974e0();
extern "C" void fn_00698250();
extern "C" void fn_00698490();
extern "C" void fn_006a76b0();
extern "C" void fn_006b8a9c();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00696d10
extern "C" __declspec(naked) void asm_00696d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13e09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x34], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_00696deb }
	__asm { test edi, edi }
	__asm { je L_00696deb }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00696d69 }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { cmp dword ptr [eax + 0x28], edx }
	__asm { jne L_00696d69 }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_00696e09 }
	__asm { L_00696d69: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006974e0 }
	__asm { mov ebx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { test ebx, ebx }
	__asm { je L_00696d95 }
	__asm { mov ecx, ebx }
	__asm { call fn_00698250 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00696d95: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00696e09 }
	__asm { cmp byte ptr [g_012d97c4], 0 }
	__asm { je L_00696dc5 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push 0xe40ae8 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_00696dc5: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { lea ecx, [eax + 0x3c] }
	__asm { mov byte ptr [eax + 0x34], 1 }
	__asm { call fn_00698490 }
	__asm { mov eax, 0x696ddc }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00696e09 }
	__asm { L_00696deb: }
	__asm { mov ebx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00696e09 }
	__asm { mov ecx, ebx }
	__asm { call fn_00698250 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00696e09: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_00696e30 }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_006a76b0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add eax, 0x20 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_006a76b0 }
	__asm { jmp L_00696eda }
	__asm { L_00696e30: }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006a76b0 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00696e85 }
	__asm { lea ecx, [ebx + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00696e85 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00696e85 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00696e85: }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_006a76b0 }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00696eda }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00696eda }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00696eda }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00696eda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x38], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0060f370();
extern "C" void fn_0060f3d0();
extern "C" void fn_00697f10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00696ef0
extern "C" __declspec(naked) void asm_00696ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13e1b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00696f53 }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { jne L_00696f53 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00696f42 }
	__asm { push 0x7a }
	__asm { push 0xe40a40 }
	__asm { push 0xe40b0c }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00696f53 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00696f42: }
	__asm { movzx eax, al }
	__asm { push 0xe40b28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00696f53: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe40b94 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0060f370 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push dword ptr [eax + 0x60] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x20] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push 0xe40ba8 }
	__asm { push 0xe40bb8 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00697f10 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push dword ptr [eax + 0x48] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x58] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { push 0xe40bc8 }
	__asm { push 0xe40bd0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00697f10 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push dword ptr [eax + 0x50] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x38] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 0x58] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push 0xe40bd8 }
	__asm { push 0xe40be4 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00697f10 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push dword ptr [eax + 0x48] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x40] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x58] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x20] }
	__asm { mov ecx, esi }
	__asm { push 2 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push 0xe40bf0 }
	__asm { push 0xe40bfc }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00697f10 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f3d0 }
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
extern "C" void fn_0060f370();
extern "C" void fn_0060f3d0();
extern "C" void fn_00697f10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00697150
extern "C" __declspec(naked) void asm_00697150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13e2d }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_006971b6 }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { jne L_006971b6 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_006971a5 }
	__asm { push 0xa0 }
	__asm { push 0xe40a40 }
	__asm { push 0xe40b0c }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006971b6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006971a5: }
	__asm { movzx eax, al }
	__asm { push 0xe40c08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006971b6: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe40c74 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0060f370 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x38] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x20] }
	__asm { mov ecx, esi }
	__asm { push 2 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax + 0x58] }
	__asm { mov ecx, esi }
	__asm { push 3 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { cmp dword ptr [edi + 0x38], 1 }
	__asm { mov ecx, 0xe40c9c }
	__asm { mov eax, 0xe40c88 }
	__asm { cmovne eax, ecx }
	__asm { push eax }
	__asm { push 0xe40cac }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00697f10 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f3d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00698250();
extern "C" void fn_006a76b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006973a0
extern "C" __declspec(naked) void asm_006973a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13e59 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x3c] }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 0x3c], 0 }
	__asm { test esi, esi }
	__asm { je L_006973de }
	__asm { mov ecx, esi }
	__asm { call fn_00698250 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006973de: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a76b0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00697434 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00697434 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00697434 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00697434: }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006a76b0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00697486 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00697486 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00697486 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00697486: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006b98c0();
extern "C" void fn_00700470();
// FUNCTION: ROBLOXSTUDIO 0x00698940
extern "C" __declspec(naked) void asm_00698940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { movss xmm0, dword ptr [esi + 0x38] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x3c] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x40] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov dword ptr [ebp - 0xc], 0x3f800000 }
	__asm { call fn_00700470 }
	__asm { movzx edx, byte ptr [eax + 3] }
	__asm { movzx ecx, byte ptr [eax] }
	__asm { shl edx, 8 }
	__asm { add edx, ecx }
	__asm { movzx ecx, byte ptr [eax + 1] }
	__asm { movzx eax, byte ptr [eax + 2] }
	__asm { shl edx, 8 }
	__asm { add edx, ecx }
	__asm { shl edx, 8 }
	__asm { add edx, eax }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jb L_006989aa }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006989aa: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006989b4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006989b6 }
	__asm { L_006989b4: }
	__asm { mov ecx, esi }
	__asm { L_006989b6: }
	__asm { push dword ptr [esi + 0x44] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0xe40e28 }
	__asm { push esi }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x18 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_0060f500();
extern "C" void fn_0069df40();
extern "C" void fn_00adee70();
extern "C" void fn_00be8210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00698b50
extern "C" __declspec(naked) void asm_00698b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14139 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0xe40dc8 }
	__asm { cmp dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { je L_00698bc9 }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x80] }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { L_00698bc9: }
	__asm { lea ecx, [edi + 0x68] }
	__asm { call fn_00adee70 }
	__asm { cmp dword ptr [edi + 0x5c], 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { je L_00698c16 }
	__asm { lea ecx, [edi + 0x5c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x60] }
	__asm { push dword ptr [edi + 0x5c] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { L_00698c16: }
	__asm { cmp dword ptr [edi + 0x50], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { je L_00698c5b }
	__asm { lea ecx, [edi + 0x50] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x54] }
	__asm { push dword ptr [edi + 0x50] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { L_00698c5b: }
	__asm { cmp dword ptr [edi + 0x44], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_00698ca0 }
	__asm { lea ecx, [edi + 0x44] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x48] }
	__asm { push dword ptr [edi + 0x44] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { L_00698ca0: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00698cdc }
	__asm { mov ecx, esi }
	__asm { call fn_0069df40 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00698cdc: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006992f0
extern "C" __declspec(naked) void asm_006992f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00699345 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00699345 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00699334 }
	__asm { push 0x1e0 }
	__asm { push 0xe40e40 }
	__asm { push 0xe40fc4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00699345 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00699334: }
	__asm { movzx eax, al }
	__asm { push 0xe40fc8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00699345: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x48] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00699365 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00699365: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de578[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0069ee00();
extern "C" void fn_006b8a9c();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
extern "C" void fn_007b3a00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006993d0
extern "C" __declspec(naked) void asm_006993d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1417d }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_00699436 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jne L_00699436 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00699425 }
	__asm { push 0x1ee }
	__asm { push 0xe40e40 }
	__asm { push 0xe40fc4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00699436 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00699425: }
	__asm { movzx eax, al }
	__asm { push 0xe41098 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00699436: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00699534 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_0069945d }
	__asm { lea eax, [esi + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069945d: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { cmp ecx, eax }
	__asm { je L_00699484 }
	__asm { L_00699470: }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { cmp esi, edx }
	__asm { jb L_0069947b }
	__asm { cmp edx, esi }
	__asm { jae L_00699482 }
	__asm { L_0069947b: }
	__asm { add ecx, 8 }
	__asm { cmp ecx, eax }
	__asm { jne L_00699470 }
	__asm { L_00699482: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { L_00699484: }
	__asm { cmp ecx, dword ptr [edx + 0x30] }
	__asm { jne L_00699515 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edx + 0x2c] }
	__asm { call fn_0069ee00 }
	__asm { mov al, byte ptr [g_012de578] }
	__asm { test al, al }
	__asm { je L_00699512 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { movzx eax, al }
	__asm { push dword ptr [ebx] }
	__asm { push 0xe410fc }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { cmp byte ptr [g_012de578], 0 }
	__asm { je L_00699512 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_007b3a00 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_006994d9 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006994d9: }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012de578] }
	__asm { push 0xe4111c }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00699500 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00699500: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { L_00699512: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_00699515: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00699533 }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00699533 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00699533: }
	__asm { pop esi }
	__asm { L_00699534: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00623750();
extern "C" void fn_0069a970();
extern "C" void fn_0069abe0();
extern "C" void fn_0069e1b0();
extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x00699820
extern "C" __declspec(naked) void asm_00699820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd141a1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x68] }
	__asm { test ecx, ecx }
	__asm { je L_006998b9 }
	__asm { dec dword ptr [ebx + 0x78] }
	__asm { cmp dword ptr [ebx + 0x78], 0 }
	__asm { jg L_00699999 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0x70] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_0069abe0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0069e1b0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adee70 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006998b9: }
	__asm { mov eax, dword ptr [ebx + 0x50] }
	__asm { mov ecx, dword ptr [ebx + 0x54] }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00699998 }
	__asm { L_006998d5: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov esi, dword ptr [eax + 0x4c] }
	__asm { mov eax, 0x30c30c31 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp dword ptr [esi + 0x1c], eax }
	__asm { je L_0069991b }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { inc edi }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp edi, dword ptr [ebp - 0x18] }
	__asm { jb L_006998d5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069991b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0069a970 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax + 0x4c], 0 }
	__asm { mov esi, dword ptr [eax + 0x50] }
	__asm { mov dword ptr [eax + 0x50], 0 }
	__asm { test esi, esi }
	__asm { je L_00699967 }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00699967 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00699967 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00699967: }
	__asm { mov eax, dword ptr [ebx + 0x50] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + edi*8] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x54] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { call fn_00623750 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0x54] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push eax }
	__asm { add eax, -8 }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { add esp, 0x20 }
	__asm { add dword ptr [ebx + 0x54], -8 }
	__asm { L_00699998: }
	__asm { pop edi }
	__asm { L_00699999: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00699c30
extern "C" __declspec(naked) void asm_00699c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_00699c55 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00699c55: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_00699c6f }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_00699c6f: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403160();
extern "C" void fn_0069b680();
// FUNCTION: ROBLOXSTUDIO 0x0069b5e0
extern "C" __declspec(naked) void asm_0069b5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0069b680 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_0069b657 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069b656 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069b656 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069b656: }
	__asm { pop ebx }
	__asm { L_0069b657: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_0069b7b0();
// FUNCTION: ROBLOXSTUDIO 0x0069b710
extern "C" __declspec(naked) void asm_0069b710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0069b7b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_0069b787 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069b786 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069b786 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069b786: }
	__asm { pop ebx }
	__asm { L_0069b787: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0069ca70();
// FUNCTION: ROBLOXSTUDIO 0x0069b840
extern "C" __declspec(naked) void asm_0069b840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea esi, [edx*2 + 2] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { cmp esi, eax }
	__asm { jge L_0069b8d3 }
	__asm { L_0069b860: }
	__asm { mov eax, dword ptr [ebx + esi*8 - 8] }
	__asm { mov ecx, dword ptr [ebx + esi*8] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069b873 }
	__asm { dec esi }
	__asm { L_0069b873: }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { mov ecx, dword ptr [ebx + esi*8 + 4] }
	__asm { mov dword ptr [ebx + esi*8 + 4], 0 }
	__asm { mov dword ptr [ebx + esi*8], 0 }
	__asm { mov dword ptr [ebx + edx*8], eax }
	__asm { mov edi, dword ptr [ebx + edx*8 + 4] }
	__asm { mov dword ptr [ebx + edx*8 + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_0069b8be }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069b8be }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069b8be }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069b8be: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, esi }
	__asm { lea esi, [esi*2 + 2] }
	__asm { cmp esi, eax }
	__asm { jl L_0069b860 }
	__asm { or edi, 0xffffffff }
	__asm { cmp esi, eax }
	__asm { L_0069b8d3: }
	__asm { jne L_0069b92a }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx + esi*8 - 8] }
	__asm { mov ecx, dword ptr [ebx + esi*8 - 4] }
	__asm { mov dword ptr [ebx + esi*8 - 4], 0 }
	__asm { mov dword ptr [ebx + esi*8 - 8], 0 }
	__asm { mov dword ptr [ebx + edx*8], eax }
	__asm { mov eax, dword ptr [ebx + edx*8 + 4] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebx + edx*8 + 4], ecx }
	__asm { test eax, eax }
	__asm { je L_0069b927 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069b927 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0069b927 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069b927: }
	__asm { lea edx, [esi - 1] }
	__asm { L_0069b92a: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { push ebx }
	__asm { call fn_0069ca70 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10268[];
extern "C" void fn_00419f70();
extern "C" void fn_00419f90();
extern "C" void fn_0041fe80();
extern "C" void fn_00420c60();
extern "C" void fn_0048a500();
extern "C" void fn_0069d230();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069bc90
extern "C" __declspec(naked) void asm_0069bc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14340 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00b9a6a0 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x10 }
	__asm { test edx, edx }
	__asm { je L_0069be5b }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { cmp eax, edx }
	__asm { jae L_0069be20 }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x1fffffff }
	__asm { sar ecx, 3 }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_0069bd0d }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0069bd0d: }
	__asm { lea eax, [ecx + edx] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00419f90 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { test eax, eax }
	__asm { je L_0069bd4a }
	__asm { cmp eax, 0x1fffffff }
	__asm { ja L_0069bd44 }
	__asm { lea ecx, [eax*8] }
	__asm { push ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { test esi, esi }
	__asm { jne L_0069bd4a }
	__asm { L_0069bd44: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0069bd4a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { push dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00420c60 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0069d230 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00420c60 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { add edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0069bdd3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0069bdd3: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + ecx*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [esi + edi*8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { push esi }
	__asm { call fn_00419f70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0069be20: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0069d230 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl edi, 3 }
	__asm { add esp, 0x14 }
	__asm { lea edx, [edi + ecx] }
	__asm { cmp eax, ecx }
	__asm { je L_0069be58 }
	__asm { cmp ecx, edx }
	__asm { je L_0069be58 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0048a500 }
	__asm { add esp, 0x14 }
	__asm { L_0069be58: }
	__asm { add dword ptr [ebx + 4], edi }
	__asm { L_0069be5b: }
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
extern "C" char g_00e10260[];
extern "C" char g_00e10268[];
extern "C" void fn_00419f70();
extern "C" void fn_00419f90();
extern "C" void fn_0041fe80();
extern "C" void fn_00420c60();
extern "C" void fn_0048a4b0();
extern "C" void fn_0048a500();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069be70
extern "C" __declspec(naked) void asm_0069be70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sub edi, edx }
	__asm { sar edi, 3 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { test edi, edi }
	__asm { je L_0069c021 }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, ebx }
	__asm { sar ecx, 3 }
	__asm { cmp ecx, edi }
	__asm { jae L_0069bfe9 }
	__asm { sub ebx, dword ptr [esi] }
	__asm { mov eax, 0x1fffffff }
	__asm { sar ebx, 3 }
	__asm { sub eax, ebx }
	__asm { cmp eax, edi }
	__asm { jae L_0069bed9 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0069bed9: }
	__asm { lea eax, [ebx + edi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00419f90 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { test eax, eax }
	__asm { je L_0069bf16 }
	__asm { cmp eax, 0x1fffffff }
	__asm { ja L_0069bf10 }
	__asm { lea ecx, [eax*8] }
	__asm { push ecx }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test ebx, ebx }
	__asm { jne L_0069bf16 }
	__asm { L_0069bf10: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0069bf16: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00420c60 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0048a4b0 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00420c60 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { add edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0069bf9c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0069bf9c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi], ebx }
	__asm { lea eax, [ebx + ecx*8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebx + edi*8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { push esi }
	__asm { call fn_00419f70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0069bfe9: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_0048a4b0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl edi, 3 }
	__asm { add esp, 0x14 }
	__asm { lea edx, [edi + ecx] }
	__asm { cmp eax, ecx }
	__asm { je L_0069c01e }
	__asm { cmp ecx, edx }
	__asm { je L_0069c01e }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0048a500 }
	__asm { add esp, 0x14 }
	__asm { L_0069c01e: }
	__asm { add dword ptr [esi + 4], edi }
	__asm { L_0069c021: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0069b840();
// FUNCTION: ROBLOXSTUDIO 0x0069c300
extern "C" __declspec(naked) void asm_0069c300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { sub ebx, ecx }
	__asm { sar ebx, 3 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sar edi, 1 }
	__asm { test edi, edi }
	__asm { jle L_0069c3a9 }
	__asm { push esi }
	__asm { L_0069c336: }
	__asm { mov eax, dword ptr [ecx + edi*8 - 8] }
	__asm { dec edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + edi*8 + 4] }
	__asm { mov dword ptr [ecx + edi*8 + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ecx + edi*8], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0069b840 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0069c3a1 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069c3a1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069c3a1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069c3a1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jg L_0069c336 }
	__asm { pop esi }
	__asm { L_0069c3a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x0069c3e0
extern "C" __declspec(naked) void asm_0069c3e0()
{
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push edi }
	__asm { mov edx, eax }
	__asm { lea edi, [eax*8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + esi] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { shl edx, 4 }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { jbe L_0069c41b }
	__asm { mov dword ptr [edi + esi], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [edi + esi + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + esi + 4], ecx }
	__asm { L_0069c41b: }
	__asm { mov eax, dword ptr [edi + esi] }
	__asm { mov ecx, dword ptr [edx + esi] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c465 }
	__asm { mov dword ptr [edx + esi], eax }
	__asm { mov dword ptr [edi + esi], ecx }
	__asm { mov eax, dword ptr [edx + esi + 4] }
	__asm { mov ecx, dword ptr [edi + esi + 4] }
	__asm { mov dword ptr [edi + esi + 4], eax }
	__asm { mov dword ptr [edx + esi + 4], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + esi] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c465 }
	__asm { mov dword ptr [edi + esi], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [edi + esi + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + esi + 4], ecx }
	__asm { L_0069c465: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { movss xmm0, dword ptr [ecx + 0x38] }
	__asm { comiss xmm0, dword ptr [ebx + 0x38] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jbe L_0069c4a0 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { L_0069c4a0: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edi + edx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c4f7 }
	__asm { mov dword ptr [edi + edx], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [edi + edx + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edi + edx + 4], ecx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx + 0x38] }
	__asm { comiss xmm0, dword ptr [esi + 0x38] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jbe L_0069c4f7 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { L_0069c4f7: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub ebx, edi }
	__asm { mov ecx, eax }
	__asm { sub ecx, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movss xmm0, dword ptr [edx + 0x38] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { comiss xmm0, dword ptr [edx + 0x38] }
	__asm { jbe L_0069c536 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_0069c536: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { movss xmm0, dword ptr [ecx + 0x38] }
	__asm { comiss xmm0, dword ptr [edx + 0x38] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { jbe L_0069c598 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx + 0x38] }
	__asm { comiss xmm0, dword ptr [esi + 0x38] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jbe L_0069c598 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_0069c598: }
	__asm { mov eax, dword ptr [edi + esi] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c5bb }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edi + esi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [edi + esi + 4] }
	__asm { mov dword ptr [edi + esi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { L_0069c5bb: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c5fd }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { mov eax, dword ptr [edi + esi] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c5fd }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edi + esi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [edi + esi + 4] }
	__asm { mov dword ptr [edi + esi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { L_0069c5fd: }
	__asm { pop edi }
	__asm { L_0069c5fe: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c626 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { L_0069c626: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c5fe }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [ecx + 0x38] }
	__asm { jbe L_0069c5fe }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0069c670
extern "C" __declspec(naked) void asm_0069c670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_0069c753 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { lea edi, [edx + 0x3c] }
	__asm { add esi, 0x3c }
	__asm { mov edi, edi }
	__asm { L_0069c690: }
	__asm { lea eax, [esi - 0x3c] }
	__asm { cmp edx, eax }
	__asm { je L_0069c6a6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00403540 }
	__asm { L_0069c6a6: }
	__asm { mov eax, dword ptr [esi - 0x24] }
	__asm { mov dword ptr [edi - 0x24], eax }
	__asm { lea ecx, [esi - 0x20] }
	__asm { lea eax, [edi - 0x20] }
	__asm { cmp eax, ecx }
	__asm { je L_0069c6c6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [edi - 0x20] }
	__asm { call fn_00403540 }
	__asm { L_0069c6c6: }
	__asm { fld dword ptr [esi - 4] }
	__asm { mov eax, dword ptr [esi - 8] }
	__asm { fstp dword ptr [edi - 4] }
	__asm { mov dword ptr [edi - 8], eax }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [esi + 4] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { test edx, edx }
	__asm { je L_0069c6fe }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069c6fe: }
	__asm { mov dword ptr [edi + 0x10], ebx }
	__asm { mov ebx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], edx }
	__asm { test ebx, ebx }
	__asm { je L_0069c731 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069c731 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069c731 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069c731: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { add esi, 0x54 }
	__asm { add edx, 0x54 }
	__asm { lea ecx, [esi - 0x3c] }
	__asm { add edi, 0x54 }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { cmp ecx, dword ptr [ebp + 0xc] }
	__asm { jne L_0069c690 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069c753: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0069c760
extern "C" __declspec(naked) void asm_0069c760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_0069c7b4 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_0069c771: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ebx, ebx }
	__asm { je L_0069c7a2 }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069c7a2 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0069c7a2: }
	__asm { add esi, 8 }
	__asm { add edi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_0069c771 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069c7b4: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0069c7c0
extern "C" __declspec(naked) void asm_0069c7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ebp + 8], esi }
	__asm { je L_0069c828 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { L_0069c7d1: }
	__asm { mov eax, dword ptr [esi - 8] }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 8 }
	__asm { sub ebx, 8 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_0069c81c }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069c81c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069c81c }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0069c81c: }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_0069c7d1 }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069c828: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0069ca70
extern "C" __declspec(naked) void asm_0069ca70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea eax, [ecx - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sar edi, 1 }
	__asm { or edx, 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jge L_0069cb01 }
	__asm { jmp L_0069ca93 }
	__asm { L_0069ca90: }
	__asm { or edx, 0xffffffff }
	__asm { L_0069ca93: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebx + edi*8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 0x38] }
	__asm { comiss xmm0, dword ptr [esi + 0x38] }
	__asm { jbe L_0069cafe }
	__asm { mov eax, dword ptr [ebx + edi*8 + 4] }
	__asm { mov dword ptr [ebx + edi*8 + 4], 0 }
	__asm { mov dword ptr [ebx + edi*8], 0 }
	__asm { mov dword ptr [ebx + ecx*8], esi }
	__asm { mov esi, dword ptr [ebx + ecx*8 + 4] }
	__asm { mov dword ptr [ebx + ecx*8 + 4], eax }
	__asm { test esi, esi }
	__asm { je L_0069caed }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069caed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069caed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069caed: }
	__asm { lea eax, [edi - 1] }
	__asm { cdq }
	__asm { mov ecx, edi }
	__asm { sub eax, edx }
	__asm { mov edi, eax }
	__asm { sar edi, 1 }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jl L_0069ca90 }
	__asm { L_0069cafe: }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { L_0069cb01: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + edx*8], eax }
	__asm { mov esi, dword ptr [ebx + edx*8 + 4] }
	__asm { mov dword ptr [ebx + edx*8 + 4], ecx }
	__asm { test esi, esi }
	__asm { je L_0069cb52 }
	__asm { or ebx, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069cb52 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069cb52 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_0069cb52: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0069cc10
extern "C" __declspec(naked) void asm_0069cc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, esi }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_0069cc7b }
	__asm { push edi }
	__asm { L_0069cc23: }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp dword ptr [edx + 0x3c], 0 }
	__asm { je L_0069cc72 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { add ebx, 8 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test edi, edi }
	__asm { je L_0069cc72 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069cc72 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069cc72 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0069cc72: }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_0069cc23 }
	__asm { pop edi }
	__asm { L_0069cc7b: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0069e4b0();
// FUNCTION: ROBLOXSTUDIO 0x0069cc90
extern "C" __declspec(naked) void asm_0069cc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, esi }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_0069ccef }
	__asm { push edi }
	__asm { L_0069cca3: }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_0069e4b0 }
	__asm { test al, al }
	__asm { jne L_0069cce6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, ebx }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { add ebx, 8 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_0069cce6 }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069cce6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0069cce6: }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_0069cca3 }
	__asm { pop edi }
	__asm { L_0069ccef: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0069c150();
extern "C" void fn_0069c300();
extern "C" void fn_0069cdf0();
extern "C" void fn_0069cf20();
// FUNCTION: ROBLOXSTUDIO 0x0069cd00
extern "C" __declspec(naked) void asm_0069cd00()
{
	__asm { L_0069cd00: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0069cd97 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, edi }
	__asm { L_0069cd20: }
	__asm { test ebx, ebx }
	__asm { jle L_0069cdb2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0069cf20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebx, eax }
	__asm { sar ebx, 1 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 1 }
	__asm { add ebx, eax }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { and ecx, 0xfffffff8 }
	__asm { and eax, 0xfffffff8 }
	__asm { push ebx }
	__asm { cmp eax, ecx }
	__asm { jge L_0069cd7c }
	__asm { push edx }
	__asm { push edi }
	__asm { call L_0069cd00 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jmp L_0069cd88 }
	__asm { L_0069cd7c: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_0069cd00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_0069cd88: }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_0069cd20 }
	__asm { L_0069cd97: }
	__asm { cmp eax, 1 }
	__asm { jle L_0069cdab }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0069c150 }
	__asm { add esp, 0x10 }
	__asm { L_0069cdab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069cdb2: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0069cd97 }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, 8 }
	__asm { jle L_0069cdd4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0069c300 }
	__asm { add esp, 0x14 }
	__asm { L_0069cdd4: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0069cdf0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0069d230
extern "C" __declspec(naked) void asm_0069d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp eax, ecx }
	__asm { je L_0069d2b8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0069d241: }
	__asm { test esi, esi }
	__asm { je L_0069d266 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edx, edx }
	__asm { je L_0069d266 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0069d266: }
	__asm { add esi, 8 }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0069d2af }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_0069d28e }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_0069d2ac }
	__asm { L_0069d282: }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_0069d282 }
	__asm { jmp L_0069d2ac }
	__asm { L_0069d28e: }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_0069d2aa }
	__asm { L_0069d297: }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_0069d2aa }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_0069d297 }
	__asm { L_0069d2aa: }
	__asm { mov eax, edx }
	__asm { L_0069d2ac: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_0069d2af: }
	__asm { cmp eax, ecx }
	__asm { jne L_0069d241 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069d2b8: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0069de90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069d350
extern "C" __declspec(naked) void asm_0069d350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd143d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0069d381: }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_0069d458 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0069d425 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push -1 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { call fn_00403540 }
	__asm { fld dword ptr [edi + 0x38] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { fstp dword ptr [esi + 0x38] }
	__asm { fld dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { fstp dword ptr [esi + 0x3c] }
	__asm { fld dword ptr [edi + 0x40] }
	__asm { fstp dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { test eax, eax }
	__asm { je L_0069d425 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069d425: }
	__asm { add esi, 0x54 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x54 }
	__asm { jmp L_0069d381 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_0069d44f }
	__asm { L_0069d441: }
	__asm { mov ecx, esi }
	__asm { call fn_0069de90 }
	__asm { add esi, 0x54 }
	__asm { cmp esi, edi }
	__asm { jne L_0069d441 }
	__asm { L_0069d44f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0069d458: }
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

extern "C" void fn_00403540();
extern "C" void fn_0069f530();
extern "C" void fn_006a04c0();
extern "C" void fn_006a7490();
// FUNCTION: ROBLOXSTUDIO 0x0069d7c0
extern "C" __declspec(naked) void asm_0069d7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1444b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { fld dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { fstp dword ptr [ebx + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, 0x38e38e39 }
	__asm { fstp dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { call fn_0069f530 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [ebx + 0x18], xmm0 }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { add eax, edx }
	__asm { je L_0069da63 }
	__asm { xor ebx, ebx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { L_0069d874: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add edi, ebx }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { add esi, eax }
	__asm { cmp esi, edi }
	__asm { je L_0069d88e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_0069d88e: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea eax, [edi + 0x1c] }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { cmp ebx, eax }
	__asm { je L_0069d8ad }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { L_0069d8ad: }
	__asm { fld dword ptr [edi + 0x38] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { fstp dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { fld dword ptr [edi + 0x3c] }
	__asm { fstp dword ptr [esi + 0x3c] }
	__asm { fld dword ptr [edi + 0x40] }
	__asm { fstp dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { je L_0069d975 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_0069d903 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069d903: }
	__asm { mov dword ptr [esi + 0x4c], edi }
	__asm { mov edi, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], edx }
	__asm { test edi, edi }
	__asm { je L_0069d936 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069d936 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069d936 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069d936: }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0069da13 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069da13 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069da13 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { jmp L_0069da10 }
	__asm { L_0069d975: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov eax, dword ptr [eax + 0x1a4] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { call fn_006a7490 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { mov eax, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test edi, edi }
	__asm { je L_0069d9af }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_0069d9af: }
	__asm { mov dword ptr [esi + 0x4c], edx }
	__asm { mov ebx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { test ebx, ebx }
	__asm { je L_0069d9e5 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069d9e2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069d9e2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069d9e2: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { L_0069d9e5: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0069da13 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069da13 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069da13 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { L_0069da10: }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069da13: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { add dword ptr [ebp + 0xc], 0x54 }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc esi }
	__asm { add eax, edx }
	__asm { add ebx, 0x48 }
	__asm { cmp esi, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_0069d874 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0069da63: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041a0c0();
extern "C" void fn_0069de10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069dd00
extern "C" __declspec(naked) void asm_0069dd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd144b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 0x50] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_0069dd56 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069dd56 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069dd56 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069dd56: }
	__asm { mov esi, dword ptr [ebx + 0x48] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0069dd85 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069dd85 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069dd85 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069dd85: }
	__asm { mov esi, dword ptr [ebx + 0x40] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0069ddb3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069ddb3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0069ddb3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069ddb3: }
	__asm { cmp dword ptr [ebx + 0x2c], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0069ddf4 }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { call fn_0041a0c0 }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x2c], 0 }
	__asm { mov dword ptr [ebx + 0x30], 0 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { L_0069ddf4: }
	__asm { mov ecx, ebx }
	__asm { call fn_0069de10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069de90
extern "C" __declspec(naked) void asm_0069de90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd144d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0069dee6 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069dee5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069dee5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069dee5: }
	__asm { pop ebx }
	__asm { L_0069dee6: }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { jb L_0069def7 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069def7: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0069df19 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069df19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0069eb80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069df40
extern "C" __declspec(naked) void asm_0069df40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b9ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0069df9e }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { je L_0069df85 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_0069eb80 }
	__asm { L_0069df85: }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { L_0069df9e: }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0069dfd2 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069dfd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0069dfd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069dfd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10268[];
extern "C" void fn_0065e670();
extern "C" void fn_0065fc60();
extern "C" void fn_0069b980();
extern "C" void fn_0069d130();
extern "C" void fn_0069e5f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069dff0
extern "C" __declspec(naked) void asm_0069dff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd144f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { cmp edi, ebx }
	__asm { je L_0069e04d }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { cmp eax, ecx }
	__asm { jne L_0069e062 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0065e670 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x10 }
	__asm { L_0069e04a: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_0069e04d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069e062: }
	__asm { sub ecx, eax }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { ja L_0069e0dd }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { push ecx }
	__asm { call fn_0069b980 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 4] }
	__asm { push eax }
	__asm { call fn_0065e670 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0x20 }
	__asm { add eax, edx }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { jmp L_0069e04a }
	__asm { L_0069e0dd: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { ja L_0069e12a }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push dword ptr [edi] }
	__asm { lea eax, [eax + eax*8] }
	__asm { lea esi, [ecx + eax*8] }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_0069b980 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { call fn_0069d130 }
	__asm { add esp, 0x24 }
	__asm { jmp L_0069e04a }
	__asm { L_0069e12a: }
	__asm { test esi, esi }
	__asm { je L_0069e148 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_0065e670 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0069e148: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0069e5f0 }
	__asm { test al, al }
	__asm { je L_0069e04d }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0069d130 }
	__asm { add esp, 0x14 }
	__asm { jmp L_0069e04a }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_0065fc60 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x0069e1b0
extern "C" __declspec(naked) void asm_0069e1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_0069e1d0 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069e1d0: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_0069e207 }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069e204 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069e207 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069e204: }
	__asm { or ecx, 0xffffffff }
	__asm { L_0069e207: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0069e223 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0069e223: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test edi, edi }
	__asm { je L_0069e254 }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069e254 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { jne L_0069e254 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069e254: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_0069b950();
extern "C" void fn_00b24250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069e270
extern "C" __declspec(naked) void asm_0069e270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd336e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_0069e2c3 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_0069e2ad }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0069e2ad: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0069e378 }
	__asm { L_0069e2c3: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0069b950 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b24250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_0069e367 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069e367 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069e367 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069e367: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_0069e378 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069e378: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006659a0();
extern "C" void fn_0069d4f0();
extern "C" void fn_0069d580();
extern "C" void fn_00827110();
extern "C" void fn_009894d0();
extern "C" void fn_00989b70();
extern "C" void fn_00992e30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069e390
extern "C" __declspec(naked) void asm_0069e390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd14510 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00827110 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_0069e3cb }
	__asm { inc ecx }
	__asm { jmp L_0069e3cd }
	__asm { L_0069e3cb: }
	__asm { xor ecx, ecx }
	__asm { L_0069e3cd: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009894d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0069e494 }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_0069e3f0 }
	__asm { inc eax }
	__asm { jmp L_0069e3f2 }
	__asm { L_0069e3f0: }
	__asm { xor eax, eax }
	__asm { L_0069e3f2: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00989b70 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0x12de57b }
	__asm { call fn_0069d4f0 }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_0069e44b }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069e44b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00992e30 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006659a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0069e492 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_0069e489 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_0069d580 }
	__asm { add esp, 8 }
	__asm { L_0069e489: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069e492: }
	__asm { mov eax, edi }
	__asm { L_0069e494: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de578[];
extern "C" void fn_006b8a90();
extern "C" void fn_00892440();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x0069e4b0
extern "C" __declspec(naked) void asm_0069e4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { jne L_0069e509 }
	__asm { mov al, byte ptr [g_012de578] }
	__asm { test al, al }
	__asm { je L_0069e505 }
	__asm { push dword ptr [esi] }
	__asm { movzx eax, al }
	__asm { push 0xe40e0c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0069e505: }
	__asm { mov bl, 1 }
	__asm { jmp L_0069e55c }
	__asm { L_0069e509: }
	__asm { call fn_00892440 }
	__asm { movss xmm2, dword ptr [esi + 4] }
	__asm { subss xmm2, dword ptr [eax + 0x24] }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { subss xmm0, dword ptr [eax + 0x28] }
	__asm { movss xmm1, dword ptr [esi + 0xc] }
	__asm { subss xmm1, dword ptr [eax + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm0, xmm0 }
	__asm { mulss xmm1, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { lea eax, [ebp + 8] }
	__asm { addss xmm2, xmm1 }
	__asm { comiss xmm0, xmm2 }
	__asm { movss dword ptr [ebp + 8], xmm2 }
	__asm { ja L_0069e556 }
	__asm { mov eax, ecx }
	__asm { L_0069e556: }
	__asm { fld dword ptr [eax] }
	__asm { xor bl, bl }
	__asm { fstp dword ptr [ecx] }
	__asm { L_0069e55c: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0069e5a6 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0069e591 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], edi }
	__asm { dec edi }
	__asm { jne L_0069e591 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0069e591: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069e5a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
// FUNCTION: ROBLOXSTUDIO 0x0069e810
extern "C" __declspec(naked) void asm_0069e810()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, ebx }
	__asm { je L_0069e84c }
	__asm { L_0069e824: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0069e83c }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069e83c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069e83c: }
	__asm { add esi, 8 }
	__asm { cmp esi, ebx }
	__asm { jne L_0069e824 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0069e84c: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0069d580();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0069e860
extern "C" __declspec(naked) void asm_0069e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { jne L_0069e8b2 }
	__asm { push 0x2c }
	__asm { mov word ptr [ebx + 8], ax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0069e888 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0069e888: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0xb }
	__asm { lea esi, [ebp - 0x2c] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069e8b2: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_0069e8c7 }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0069d580 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_0069e8c7: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)
