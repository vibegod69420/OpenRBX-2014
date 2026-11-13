// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130fea6[];
extern "C" void fn_006b9740();
extern "C" void fn_00832dc0();
extern "C" void fn_00a0f490();
extern "C" void fn_00c0fe00();
// FUNCTION: ROBLOXSTUDIO 0x00c10c50
extern "C" __declspec(naked) void asm_00c10c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [g_0130fea6] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { call fn_00a0f490 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c10cbc }
	__asm { cmp byte ptr [eax + 4], 0 }
	__asm { jne L_00c10cbc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c10cab }
	__asm { push 0x9a }
	__asm { push 0xeea314 }
	__asm { push 0x102af38 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c10cbc }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c10cab: }
	__asm { movzx eax, cl }
	__asm { push 0xeea8e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c10cbc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add edi, 0x30 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00832dc0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c0fe00 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00832dc0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c0fe00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00c10e70();
// FUNCTION: ROBLOXSTUDIO 0x00c10da0
extern "C" __declspec(naked) void asm_00c10da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { lea ebx, [eax + 0x38] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00410ef0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c10e32 }
	__asm { cmp dword ptr [ebp - 4], 1 }
	__asm { je L_00c10e32 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c10e21 }
	__asm { push 0xa2 }
	__asm { push 0xeea314 }
	__asm { push 0xe55f98 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c10e32 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c10e21: }
	__asm { movzx eax, cl }
	__asm { push 0xeea938 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c10e32: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_00c10e70 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_00c10e70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c750();
extern "C" void fn_00b8c920();
// FUNCTION: ROBLOXSTUDIO 0x00c11450
extern "C" __declspec(naked) void asm_00c11450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { je L_00c114a5 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c920 }
	__asm { test al, al }
	__asm { je L_00c114a5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11490 }
	__asm { push 0x78 }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeb070 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c114a5 }
	__asm { L_00c11490: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb0f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c114a5: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c750 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c11512 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c920 }
	__asm { test al, al }
	__asm { jne L_00c11512 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c114fd }
	__asm { push 0x7e }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeaff0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11512 }
	__asm { L_00c114fd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11512: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130fea7[];
extern "C" void fn_006b9740();
extern "C" void fn_00a0f490();
// FUNCTION: ROBLOXSTUDIO 0x00c11520
extern "C" __declspec(naked) void asm_00c11520()
{
	__asm { L_00c11520: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [g_0130fea7] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00a0f490 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00c115af }
	__asm { nop }
	__asm { L_00c11550: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1159a }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00c1159a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11589 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1159a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c11589: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1159a: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push ebx }
	__asm { push dword ptr [eax + esi*4] }
	__asm { call L_00c11520 }
	__asm { inc esi }
	__asm { add esp, 8 }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00c11550 }
	__asm { L_00c115af: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c11880();
extern "C" void fn_00c119b0();
// FUNCTION: ROBLOXSTUDIO 0x00c11800
extern "C" __declspec(naked) void asm_00c11800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jne L_00c11827 }
	__asm { xor esi, esi }
	__asm { jmp L_00c1183f }
	__asm { L_00c11827: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { jne L_00c11833 }
	__asm { lea esi, [eax + 1] }
	__asm { jmp L_00c1183f }
	__asm { L_00c11833: }
	__asm { push eax }
	__asm { call fn_00c119b0 }
	__asm { add esp, 4 }
	__asm { lea esi, [eax + 1] }
	__asm { L_00c1183f: }
	__asm { test edi, edi }
	__asm { jne L_00c11847 }
	__asm { xor eax, eax }
	__asm { jmp L_00c1185f }
	__asm { L_00c11847: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { test eax, eax }
	__asm { jne L_00c11855 }
	__asm { mov eax, 1 }
	__asm { jmp L_00c1185f }
	__asm { L_00c11855: }
	__asm { push eax }
	__asm { call fn_00c119b0 }
	__asm { add esp, 4 }
	__asm { inc eax }
	__asm { L_00c1185f: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00c11880 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c920();
extern "C" void fn_00c11800();
extern "C" void fn_00c11c50();
// FUNCTION: ROBLOXSTUDIO 0x00c119e0
extern "C" __declspec(naked) void asm_00c119e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c11a32 }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c920 }
	__asm { test al, al }
	__asm { je L_00c11a32 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11a1d }
	__asm { push 0x3c }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeae70 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11a32 }
	__asm { L_00c11a1d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeae90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11a32: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_00c11800 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00c11a66 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c11a8a }
	__asm { L_00c11a66: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { inc eax }
	__asm { and eax, 0x80000001 }
	__asm { jns L_00c11a78 }
	__asm { dec eax }
	__asm { or eax, 0xfffffffe }
	__asm { inc eax }
	__asm { L_00c11a78: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00c11c50 }
	__asm { L_00c11a8a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c890();
extern "C" void fn_00b8c920();
extern "C" void fn_00b8c950();
// FUNCTION: ROBLOXSTUDIO 0x00c11aa0
extern "C" __declspec(naked) void asm_00c11aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { je L_00c11af2 }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c920 }
	__asm { test al, al }
	__asm { jne L_00c11af2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11add }
	__asm { push 0x6b }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeaff0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11af2 }
	__asm { L_00c11add: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb008 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11af2: }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c890 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c950 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c11b5a }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c920 }
	__asm { test al, al }
	__asm { je L_00c11b5a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11b45 }
	__asm { push 0x72 }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeb070 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11b5a }
	__asm { L_00c11b45: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb088 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11b5a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c890();
extern "C" void fn_00b8c920();
extern "C" void fn_00c116f0();
extern "C" void fn_00c11c50();
// FUNCTION: ROBLOXSTUDIO 0x00c11b70
extern "C" __declspec(naked) void asm_00c11b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { je L_00c11bc3 }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c920 }
	__asm { test al, al }
	__asm { jne L_00c11bc3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11bae }
	__asm { push 0x4b }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeaefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11bc3 }
	__asm { L_00c11bae: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeaf20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11bc3: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_00b8c890 }
	__asm { push eax }
	__asm { call fn_00c116f0 }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test edi, edi }
	__asm { jne L_00c11c30 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c11c30 }
	__asm { test esi, esi }
	__asm { jne L_00c11c30 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11c1c }
	__asm { push 0x57 }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeaf8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11c2d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c11c1c: }
	__asm { movzx eax, cl }
	__asm { push 0xeeaf98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11c2d: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { L_00c11c30: }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00c11c50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008950e0();
extern "C" void fn_00c11360();
extern "C" void fn_00c11450();
extern "C" void fn_00c115c0();
extern "C" void fn_00c11aa0();
// FUNCTION: ROBLOXSTUDIO 0x00c11c50
extern "C" __declspec(naked) void asm_00c11c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00c11cb3 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { lea esi, [ebx + 4] }
	__asm { test eax, eax }
	__asm { je L_00c11c97 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ecx, ecx }
	__asm { jns L_00c11c97 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { jne L_00c11c8b }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { jmp L_00c11c92 }
	__asm { L_00c11c8b: }
	__asm { mov dword ptr [esi + 8], 0xa }
	__asm { L_00c11c92: }
	__asm { call fn_008950e0 }
	__asm { L_00c11c97: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { call fn_00c115c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00c11cb3: }
	__asm { test eax, eax }
	__asm { je L_00c11cbf }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c11aa0 }
	__asm { L_00c11cbf: }
	__asm { test edi, edi }
	__asm { je L_00c11ce0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00c11450 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebx + 4] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c11360 }
	__asm { L_00c11ce0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b600();
extern "C" void fn_00b5c9f0();
extern "C" void fn_00b5df90();
extern "C" void fn_00b5e070();
extern "C" void fn_00b8c360();
extern "C" void fn_00ba23a0();
// FUNCTION: ROBLOXSTUDIO 0x00c11de0
extern "C" __declspec(naked) void asm_00c11de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { je L_00c11e15 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00c11e03 }
	__asm { lea ecx, [eax - 8] }
	__asm { jmp L_00c11e05 }
	__asm { L_00c11e03: }
	__asm { xor ecx, ecx }
	__asm { L_00c11e05: }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { push 0xc11d90 }
	__asm { call fn_00ba23a0 }
	__asm { L_00c11e15: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5c9f0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b5b600 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_00c11eb4 }
	__asm { call fn_00b5df90 }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x18], esi }
	__asm { jle L_00c11eb9 }
	__asm { L_00c11e41: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c11e8b }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00c11e8b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11e7a }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11e8b }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c11e7a: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11e8b: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { test eax, eax }
	__asm { je L_00c11e9a }
	__asm { add eax, -8 }
	__asm { jmp L_00c11e9c }
	__asm { L_00c11e9a: }
	__asm { xor eax, eax }
	__asm { L_00c11e9c: }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push eax }
	__asm { call fn_00b5e070 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { jl L_00c11e41 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c11eb4: }
	__asm { call fn_00b5e070 }
	__asm { L_00c11eb9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5c9f0();
extern "C" void fn_00b5df00();
extern "C" void fn_00b8c620();
extern "C" void fn_00ba23a0();
// FUNCTION: ROBLOXSTUDIO 0x00c11ed0
extern "C" __declspec(naked) void asm_00c11ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b5c9f0 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { call fn_00b5df00 }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x18], esi }
	__asm { jle L_00c11f5f }
	__asm { L_00c11ef5: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c11f3f }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00c11f3f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c11f2e }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11f3f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c11f2e: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11f3f: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { test eax, eax }
	__asm { je L_00c11f4e }
	__asm { add eax, -8 }
	__asm { jmp L_00c11f50 }
	__asm { L_00c11f4e: }
	__asm { xor eax, eax }
	__asm { L_00c11f50: }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push eax }
	__asm { call fn_00b5df00 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { jl L_00c11ef5 }
	__asm { L_00c11f5f: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c620 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c11f91 }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00c11f7f }
	__asm { lea ecx, [eax - 8] }
	__asm { jmp L_00c11f81 }
	__asm { L_00c11f7f: }
	__asm { xor ecx, ecx }
	__asm { L_00c11f81: }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { push 0xc11d90 }
	__asm { call fn_00ba23a0 }
	__asm { L_00c11f91: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c12010
extern "C" __declspec(naked) void asm_00c12010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xeda2f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c12083 }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { je L_00c12083 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c12072 }
	__asm { push 0x13 }
	__asm { push 0xeeb498 }
	__asm { push 0xeeb4d8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c12083 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c12072: }
	__asm { movzx eax, al }
	__asm { push 0xeeb4f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c12083: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00c120ba }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c120ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c360();
extern "C" void fn_00c12330();
// FUNCTION: ROBLOXSTUDIO 0x00c12220
extern "C" __declspec(naked) void asm_00c12220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c122e8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c12288 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xb }
	__asm { je L_00c12252 }
	__asm { test eax, eax }
	__asm { jne L_00c12288 }
	__asm { L_00c12252: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c12273 }
	__asm { push 0x94 }
	__asm { push 0xeeb498 }
	__asm { push 0xeeb758 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c12288 }
	__asm { L_00c12273: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb778 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c12288: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c122e8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c122e8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { je L_00c122b2 }
	__asm { cmp eax, 3 }
	__asm { je L_00c122b2 }
	__asm { cmp eax, 2 }
	__asm { jne L_00c122e8 }
	__asm { L_00c122b2: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c122d3 }
	__asm { push 0x95 }
	__asm { push 0xeeb498 }
	__asm { push 0xeeb7e0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c122e8 }
	__asm { L_00c122d3: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb7f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c122e8: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c12330 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba14e0();
extern "C" void fn_00c12430();
extern "C" void fn_00c12530();
// FUNCTION: ROBLOXSTUDIO 0x00c12330
extern "C" __declspec(naked) void asm_00c12330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba14e0 }
	__asm { test al, al }
	__asm { je L_00c1241c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c123da }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c1237b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { jl L_00c1237b }
	__asm { cmp eax, 5 }
	__asm { jg L_00c1237b }
	__asm { mov ebx, 1 }
	__asm { jmp L_00c1237d }
	__asm { L_00c1237b: }
	__asm { xor ebx, ebx }
	__asm { L_00c1237d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c123a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 4 }
	__asm { jl L_00c123a0 }
	__asm { cmp eax, 5 }
	__asm { jg L_00c123a0 }
	__asm { mov eax, 1 }
	__asm { jmp L_00c123a2 }
	__asm { L_00c123a0: }
	__asm { xor eax, eax }
	__asm { L_00c123a2: }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_00c123da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c123c5 }
	__asm { push 0x50 }
	__asm { push 0xeeb498 }
	__asm { push 0xeeb554 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c123da }
	__asm { L_00c123c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c123da: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c12400 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { jl L_00c12400 }
	__asm { cmp eax, 5 }
	__asm { jg L_00c12400 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c12430 }
	__asm { jmp L_00c12408 }
	__asm { L_00c12400: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c12530 }
	__asm { L_00c12408: }
	__asm { test al, al }
	__asm { je L_00c1241c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00c1241c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
extern "C" void fn_00b5b600();
extern "C" void fn_00b5d560();
extern "C" void fn_00ba14e0();
extern "C" void fn_00ba2b40();
// FUNCTION: ROBLOXSTUDIO 0x00c12430
extern "C" __declspec(naked) void asm_00c12430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c124df }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba14e0 }
	__asm { test al, al }
	__asm { jne L_00c12487 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c12472 }
	__asm { push 0x76 }
	__asm { push 0xeeb498 }
	__asm { push 0xedd160 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c12487 }
	__asm { L_00c12472: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb678 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c12487: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c124df }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c124ac }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 4 }
	__asm { jl L_00c124ac }
	__asm { cmp eax, 5 }
	__asm { jle L_00c124df }
	__asm { L_00c124ac: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c124ca }
	__asm { push 0x77 }
	__asm { push 0xeeb498 }
	__asm { push 0xeeb6d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c124df }
	__asm { L_00c124ca: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb6f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c124df: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099c7f0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b600 }
	__asm { mov bl, al }
	__asm { test esi, esi }
	__asm { je L_00c12518 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00c12518 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { je L_00c12518 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00c12518 }
	__asm { mov al, 1 }
	__asm { jmp L_00c1251a }
	__asm { L_00c12518: }
	__asm { xor al, al }
	__asm { L_00c1251a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { jne L_00c12529 }
	__asm { test al, al }
	__asm { jne L_00c12529 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c12529: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
extern "C" void fn_00b5d560();
extern "C" void fn_00ba14e0();
extern "C" void fn_00ba2b40();
// FUNCTION: ROBLOXSTUDIO 0x00c12530
extern "C" __declspec(naked) void asm_00c12530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c12583 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba14e0 }
	__asm { test al, al }
	__asm { jne L_00c12583 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1256e }
	__asm { push 0x5e }
	__asm { push 0xeeb498 }
	__asm { push 0xedd160 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c12583 }
	__asm { L_00c1256e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb618 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c12583: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099c7f0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov ebx, eax }
	__asm { call fn_0099c7f0 }
	__asm { mov esi, eax }
	__asm { test ebx, ebx }
	__asm { je L_00c125e8 }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { je L_00c125e8 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { je L_00c125e8 }
	__asm { test esi, esi }
	__asm { je L_00c125e8 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00c125e8 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { je L_00c125e8 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { jne L_00c125db }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00c125e8 }
	__asm { L_00c125db: }
	__asm { cmp ebx, esi }
	__asm { je L_00c125e8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c125e8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c126a0
extern "C" __declspec(naked) void asm_00c126a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xeeb864 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c12713 }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { je L_00c12713 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c12702 }
	__asm { push 0x1a }
	__asm { push 0xeeb880 }
	__asm { push 0xeeb8c4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c12713 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c12702: }
	__asm { movzx eax, al }
	__asm { push 0xeeb8f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c12713: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00c1274a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c1274a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_009977c0();
extern "C" void fn_00b5b9e0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00ba1400();
// FUNCTION: ROBLOXSTUDIO 0x00c12790
extern "C" __declspec(naked) void asm_00c12790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { lea ebx, [eax + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00410ef0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1281f }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00c1281f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1280e }
	__asm { push 0x35 }
	__asm { push 0xeeb880 }
	__asm { push 0xeeba5c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1281f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c1280e: }
	__asm { movzx eax, cl }
	__asm { push 0xeeba60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1281f: }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call fn_009977c0 }
	__asm { mov ecx, eax }
	__asm { call fn_00ba1400 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1287d }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b9e0 }
	__asm { cmp eax, 3 }
	__asm { je L_00c1287d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c12868 }
	__asm { push 0x38 }
	__asm { push 0xeeb880 }
	__asm { push 0xeebab8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1287d }
	__asm { L_00c12868: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeebae0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1287d: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130feaa[];
extern "C" void fn_006b9740();
extern "C" void fn_009977c0();
extern "C" void fn_00a0f490();
extern "C" void fn_00b5b9e0();
extern "C" void fn_00ba1330();
// FUNCTION: ROBLOXSTUDIO 0x00c12920
extern "C" __declspec(naked) void asm_00c12920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c12974 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b9e0 }
	__asm { test eax, eax }
	__asm { je L_00c12974 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1295f }
	__asm { push 0x2a }
	__asm { push 0xeeb880 }
	__asm { push 0xeeb968 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c12974 }
	__asm { L_00c1295f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeb990 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c12974: }
	__asm { mov dword ptr [esi + 0x40], 3 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push esi }
	__asm { call fn_009977c0 }
	__asm { mov ecx, eax }
	__asm { call fn_00ba1330 }
	__asm { movzx eax, byte ptr [g_0130feaa] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00a0f490 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test cl, cl }
	__asm { je L_00c129ec }
	__asm { cmp byte ptr [eax + 4], 0 }
	__asm { jne L_00c129ec }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c129db }
	__asm { push 0x2f }
	__asm { push 0xeeb880 }
	__asm { push 0x102af38 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c129ec }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c129db: }
	__asm { movzx eax, cl }
	__asm { push 0xeeba08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c129ec: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b19b0();
extern "C" void fn_00b50ea0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c12da0
extern "C" __declspec(naked) void asm_00c12da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c8d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c12de6 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00b50ea0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c12de8 }
	__asm { L_00c12de6: }
	__asm { xor ecx, ecx }
	__asm { L_00c12de8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edi], 0xeebb5c }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { lea eax, [edi + 0x28] }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [eax], eax }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b53910();
extern "C" void fn_00b5b980();
extern "C" void fn_00b5ba40();
extern "C" void fn_00b8c620();
extern "C" void fn_00c133c0();
// FUNCTION: ROBLOXSTUDIO 0x00c13160
extern "C" __declspec(naked) void asm_00c13160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c133c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b980 }
	__asm { push dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00b53910 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5ba40 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { test al, al }
	__asm { je L_00c131cb }
	__asm { test ecx, ecx }
	__asm { je L_00c131b4 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00c131b4: }
	__asm { dec dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c131cb: }
	__asm { test ecx, ecx }
	__asm { je L_00c131d7 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00c131d7: }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130feab[];
extern "C" void fn_006b9740();
extern "C" void fn_009977c0();
extern "C" void fn_00b5c980();
extern "C" void fn_00b5cb90();
extern "C" void fn_00ba1330();
extern "C" void fn_00c12c00();
// FUNCTION: ROBLOXSTUDIO 0x00c13240
extern "C" __declspec(naked) void asm_00c13240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00b5c980 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { je L_00c132a1 }
	__asm { push esi }
	__asm { call fn_00b5cb90 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00c132a1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1328c }
	__asm { push 0x47 }
	__asm { push 0xeebb78 }
	__asm { push 0xeebe94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c132a1 }
	__asm { L_00c1328c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeebec0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c132a1: }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { mov ecx, edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00c132c4 }
	__asm { nop }
	__asm { L_00c132b0: }
	__asm { cmp dword ptr [eax + 0x10], esi }
	__asm { jae L_00c132ba }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00c132be }
	__asm { L_00c132ba: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c132be: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00c132b0 }
	__asm { L_00c132c4: }
	__asm { cmp ecx, edx }
	__asm { je L_00c132d0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp esi, dword ptr [ecx + 0x10] }
	__asm { jae L_00c132d3 }
	__asm { L_00c132d0: }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { L_00c132d3: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, edx }
	__asm { jne L_00c13319 }
	__asm { movzx eax, byte ptr [g_0130feab] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00c12c00 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { call fn_009977c0 }
	__asm { mov ecx, eax }
	__asm { call fn_00ba1330 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c13319: }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c12d10();
extern "C" void fn_00c12d80();
extern "C" void fn_00c13330();
// FUNCTION: ROBLOXSTUDIO 0x00c133c0
extern "C" __declspec(naked) void asm_00c133c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00c133d8 }
	__asm { call fn_00c12d80 }
	__asm { jmp L_00c133da }
	__asm { L_00c133d8: }
	__asm { mov eax, esi }
	__asm { L_00c133da: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c13330 }
	__asm { test al, al }
	__asm { jne L_00c1348a }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00c12d10 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1343b }
	__asm { test eax, eax }
	__asm { jne L_00c1343f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c13424 }
	__asm { push 0x62 }
	__asm { push 0xeebb78 }
	__asm { push 0xeebf40 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1348a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c13424: }
	__asm { movzx eax, cl }
	__asm { push 0xeebf50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c1343b: }
	__asm { test eax, eax }
	__asm { je L_00c1348a }
	__asm { L_00c1343f: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c13330 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1348a }
	__asm { test al, al }
	__asm { jne L_00c1348a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c13479 }
	__asm { push 0x65 }
	__asm { push 0xeebb78 }
	__asm { push 0x102af38 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1348a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c13479: }
	__asm { movzx eax, cl }
	__asm { push 0xeebfb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1348a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0068a630();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_00891b10();
extern "C" void fn_0099c7f0();
// FUNCTION: ROBLOXSTUDIO 0x00c15e50
extern "C" __declspec(naked) void asm_00c15e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c15e9f }
	__asm { test esi, esi }
	__asm { jne L_00c15e9f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c15e8e }
	__asm { push 0xa3 }
	__asm { push 0xeecc44 }
	__asm { push 0xee0220 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c15e9f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c15e8e: }
	__asm { movzx eax, al }
	__asm { push 0xeecce8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c15e9f: }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { jne L_00c15f03 }
	__asm { cmp byte ptr [esi + 0x112], 0 }
	__asm { jne L_00c15f03 }
	__asm { cmp dword ptr [edi + 0xa0], 0 }
	__asm { je L_00c15ec9 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c7f0 }
	__asm { cmp dword ptr [edi + 0xa0], eax }
	__asm { je L_00c15f03 }
	__asm { L_00c15ec9: }
	__asm { push esi }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c15ef8 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c15ef8 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c15ef8 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { jne L_00c15f03 }
	__asm { L_00c15ef8: }
	__asm { pop edi }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c15f03: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006dea00();
extern "C" void fn_009d3b10();
extern "C" void fn_00bb5b90();
// FUNCTION: ROBLOXSTUDIO 0x00c16a10
extern "C" __declspec(naked) void asm_00c16a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00bb5b90 }
	__asm { mov dword ptr [edi], 0xeecddc }
	__asm { mov dword ptr [edi + 4], 0xeece18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0xb8], 0 }
	__asm { mov dword ptr [edi + 0xbc], 0 }
	__asm { mov dword ptr [edi + 0xc0], 0 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0xc4], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0xc8], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0xcc], eax }
	__asm { call fn_006dea00 }
	__asm { fldz }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0xd0], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0xd4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 0x354] }
	__asm { fstp dword ptr [esp] }
	__asm { mov dword ptr [edi + 0xd8], eax }
	__asm { call fn_009d3b10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c17a50();
extern "C" void fn_00c18030();
extern "C" void fn_00c18280();
// FUNCTION: ROBLOXSTUDIO 0x00c17750
extern "C" __declspec(naked) void asm_00c17750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c17a50 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00c17828 }
	__asm { cmp esi, 0x12 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00c17790 }
	__asm { cmp dword ptr [ebp + 0xc], 0x14 }
	__asm { je L_00c17790 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00c18280 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00c17797 }
	__asm { L_00c17790: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00c17797: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c18280 }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { cmp ecx, dword ptr [ebp - 4] }
	__asm { jle L_00c177cd }
	__asm { cmp dword ptr [edi], 0xc }
	__asm { jne L_00c177c3 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { test edx, 0x100 }
	__asm { jne L_00c177c3 }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { cmp edx, eax }
	__asm { jl L_00c177c3 }
	__asm { dec dword ptr [esi + 0x24] }
	__asm { L_00c177c3: }
	__asm { cmp dword ptr [ebx], 0xc }
	__asm { jne L_00c17803 }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { jmp L_00c177f0 }
	__asm { L_00c177cd: }
	__asm { cmp dword ptr [ebx], 0xc }
	__asm { jne L_00c177e8 }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { test edx, 0x100 }
	__asm { jne L_00c177e8 }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { cmp edx, eax }
	__asm { jl L_00c177e8 }
	__asm { dec dword ptr [esi + 0x24] }
	__asm { L_00c177e8: }
	__asm { cmp dword ptr [edi], 0xc }
	__asm { jne L_00c17803 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { L_00c177f0: }
	__asm { test edx, 0x100 }
	__asm { jne L_00c17803 }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { cmp edx, eax }
	__asm { jl L_00c17803 }
	__asm { dec dword ptr [esi + 0x24] }
	__asm { L_00c17803: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shl ecx, 9 }
	__asm { or ecx, dword ptr [ebp - 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { shl ecx, 0xe }
	__asm { or ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00c18030 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi], 0xb }
	__asm { L_00c17828: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18030();
extern "C" void fn_00c18130();
extern "C" void fn_00c18280();
// FUNCTION: ROBLOXSTUDIO 0x00c17830
extern "C" __declspec(naked) void asm_00c17830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00c18280 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { call fn_00c18280 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [eax], 0xc }
	__asm { mov dword ptr [ebp + 0x14], edx }
	__asm { jne L_00c1787c }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { test edx, 0x100 }
	__asm { jne L_00c17879 }
	__asm { movzx ecx, byte ptr [edi + 0x32] }
	__asm { cmp edx, ecx }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { jl L_00c1787c }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { jmp L_00c1787c }
	__asm { L_00c17879: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { L_00c1787c: }
	__asm { cmp dword ptr [ebx], 0xc }
	__asm { jne L_00c17897 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { test ecx, 0x100 }
	__asm { jne L_00c17897 }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c17897 }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { L_00c17897: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { jne L_00c178af }
	__asm { cmp dword ptr [ebp + 0xc], 0x17 }
	__asm { je L_00c178af }
	__asm { mov eax, esi }
	__asm { mov esi, edx }
	__asm { mov edx, eax }
	__asm { mov ecx, 1 }
	__asm { L_00c178af: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { shl esi, 9 }
	__asm { push dword ptr [eax + 8] }
	__asm { or esi, edx }
	__asm { shl esi, 8 }
	__asm { or esi, ecx }
	__asm { shl esi, 6 }
	__asm { or esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], 0xffffffff }
	__asm { push dword ptr [eax + 8] }
	__asm { push 0x7fff8016 }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18130 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx], 0xa }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6340();
extern "C" void fn_00c19000();
// FUNCTION: ROBLOXSTUDIO 0x00c18030
extern "C" __declspec(naked) void asm_00c18030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { push 0xff }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x20] }
	__asm { push esi }
	__asm { call fn_00c19000 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { inc eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jle L_00c18080 }
	__asm { push 0xeecf40 }
	__asm { push 0x7ffffffd }
	__asm { push 4 }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00bc6340 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { L_00c18080: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [edi + 0x30] }
	__asm { inc eax }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jle L_00c180b5 }
	__asm { push 0xeecf40 }
	__asm { push 0x7ffffffd }
	__asm { push 4 }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x14] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00bc6340 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { L_00c180b5: }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { pop edi }
	__asm { lea ecx, [eax + 1] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
// FUNCTION: ROBLOXSTUDIO 0x00c18130
extern "C" __declspec(naked) void asm_00c18130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, -1 }
	__asm { je L_00c181ab }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, -1 }
	__asm { jne L_00c1814b }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c1814b: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { L_00c18155: }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { shr eax, 0xe }
	__asm { sub eax, 0x1ffff }
	__asm { cmp eax, -1 }
	__asm { je L_00c18171 }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { cmp eax, -1 }
	__asm { je L_00c18171 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c18155 }
	__asm { L_00c18171: }
	__asm { sub esi, ecx }
	__asm { lea edi, [edx + ecx*4] }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cmp eax, 0x1ffff }
	__asm { jle L_00c18195 }
	__asm { push 0xeecf00 }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00c18195: }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [esi + 0x1fffe] }
	__asm { shl ecx, 0xe }
	__asm { and eax, 0x3fff }
	__asm { xor ecx, eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c181ab: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18030();
// FUNCTION: ROBLOXSTUDIO 0x00c18750
extern "C" __declspec(naked) void asm_00c18750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x18] }
	__asm { push edi }
	__asm { cmp esi, dword ptr [ecx + 0x1c] }
	__asm { jle L_00c18770 }
	__asm { test esi, esi }
	__asm { jne L_00c18796 }
	__asm { movzx eax, byte ptr [ecx + 0x32] }
	__asm { cmp edx, eax }
	__asm { jge L_00c18791 }
	__asm { L_00c18770: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { dec eax }
	__asm { add eax, edx }
	__asm { shl eax, 0x11 }
	__asm { or eax, edx }
	__asm { shl eax, 6 }
	__asm { or eax, 3 }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00c18030 }
	__asm { add esp, 0xc }
	__asm { L_00c18791: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18796: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea ebx, [eax + esi*4] }
	__asm { mov esi, dword ptr [ebx - 4] }
	__asm { mov eax, esi }
	__asm { and eax, 0x3f }
	__asm { cmp al, 3 }
	__asm { jne L_00c18770 }
	__asm { mov eax, esi }
	__asm { shr eax, 6 }
	__asm { mov edi, esi }
	__asm { and eax, 0xff }
	__asm { shr edi, 0x17 }
	__asm { cmp eax, edx }
	__asm { jg L_00c18770 }
	__asm { lea eax, [edi + 1] }
	__asm { cmp edx, eax }
	__asm { jg L_00c18770 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx - 1] }
	__asm { add eax, ecx }
	__asm { cmp eax, edi }
	__asm { jle L_00c18791 }
	__asm { lea eax, [edx - 1] }
	__asm { add eax, ecx }
	__asm { and esi, 0x7fffff }
	__asm { shl eax, 0x17 }
	__asm { pop edi }
	__asm { or eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx - 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c17750();
extern "C" void fn_00c17910();
extern "C" void fn_00c18390();
// FUNCTION: ROBLOXSTUDIO 0x00c18ae0
extern "C" __declspec(naked) void asm_00c18ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 5 }
	__asm { sub eax, 0 }
	__asm { je L_00c18b47 }
	__asm { dec eax }
	__asm { je L_00c18b33 }
	__asm { dec eax }
	__asm { jne L_00c18b78 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c18390 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x14 }
	__asm { push edi }
	__asm { call fn_00c17750 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18b33: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c17910 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18b47: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 5 }
	__asm { jne L_00c18b5e }
	__asm { cmp dword ptr [esi + 0x10], -1 }
	__asm { jne L_00c18b5e }
	__asm { cmp dword ptr [esi + 0x14], -1 }
	__asm { je L_00c18b68 }
	__asm { L_00c18b5e: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c18390 }
	__asm { add esp, 8 }
	__asm { L_00c18b68: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x12 }
	__asm { push edi }
	__asm { call fn_00c17750 }
	__asm { add esp, 0x10 }
	__asm { L_00c18b78: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
extern "C" void fn_00c17d20();
extern "C" void fn_00c18030();
extern "C" void fn_00c181b0();
extern "C" void fn_00c18280();
extern "C" void fn_00c183e0();
// FUNCTION: ROBLOXSTUDIO 0x00c18bf0
extern "C" __declspec(naked) void asm_00c18bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c181b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi], 0xc }
	__asm { jne L_00c18c2b }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { je L_00c18c35 }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c18c2b }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c17d20 }
	__asm { add esp, 0xc }
	__asm { jmp L_00c18c35 }
	__asm { L_00c18c2b: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c183e0 }
	__asm { add esp, 8 }
	__asm { L_00c18c35: }
	__asm { cmp dword ptr [esi], 0xc }
	__asm { jne L_00c18c50 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, 0x100 }
	__asm { jne L_00c18c50 }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c18c50 }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { L_00c18c50: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [edi + 0x24] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { lea ecx, [ebx + 2] }
	__asm { cmp ecx, eax }
	__asm { jle L_00c18c80 }
	__asm { cmp ecx, 0xfa }
	__asm { jl L_00c18c7b }
	__asm { push 0xeecf1c }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebx + 2] }
	__asm { L_00c18c7b: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [eax + 0x4b], cl }
	__asm { L_00c18c80: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add dword ptr [edi + 0x24], 2 }
	__asm { push edi }
	__asm { call fn_00c18280 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shl ecx, 9 }
	__asm { or ecx, eax }
	__asm { shl ecx, 8 }
	__asm { or ecx, ebx }
	__asm { shl ecx, 6 }
	__asm { or ecx, 0xb }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [eax], 0xc }
	__asm { jne L_00c18cce }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, 0x100 }
	__asm { jne L_00c18cce }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c18cce }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { L_00c18cce: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov dword ptr [esi], 0xc }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18030();
// FUNCTION: ROBLOXSTUDIO 0x00c18ce0
extern "C" __declspec(naked) void asm_00c18ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, 0x51eb851f }
	__asm { lea ecx, [ecx - 1] }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { sar edx, 4 }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ebx, edx }
	__asm { cmp ecx, -1 }
	__asm { cmove ecx, eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { cmp ebx, 0x1ff }
	__asm { jg L_00c18d42 }
	__asm { shl ecx, 9 }
	__asm { or ecx, ebx }
	__asm { shl ecx, 8 }
	__asm { or ecx, esi }
	__asm { shl ecx, 6 }
	__asm { or ecx, 0x22 }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + 1] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18d42: }
	__asm { shl ecx, 0x11 }
	__asm { or ecx, esi }
	__asm { shl ecx, 6 }
	__asm { or ecx, 0x22 }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00c18030 }
	__asm { add esp, 0x18 }
	__asm { lea eax, [esi + 1] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
// FUNCTION: ROBLOXSTUDIO 0x00c18dd0
extern "C" __declspec(naked) void asm_00c18dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, 0xd }
	__asm { jne L_00c18dff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { inc eax }
	__asm { shl eax, 0xe }
	__asm { xor eax, dword ptr [ecx] }
	__asm { and eax, 0x7fc000 }
	__asm { xor dword ptr [ecx], eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18dff: }
	__asm { cmp eax, 0xe }
	__asm { jne L_00c18e72 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 0x7fffff }
	__asm { lea ecx, [ecx + 1] }
	__asm { shl ecx, 0x17 }
	__asm { xor ecx, eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { shl eax, 6 }
	__asm { xor eax, dword ptr [ecx] }
	__asm { and eax, 0x3fc0 }
	__asm { xor dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { inc ebx }
	__asm { cmp ebx, eax }
	__asm { jle L_00c18e6d }
	__asm { cmp ebx, 0xfa }
	__asm { jl L_00c18e68 }
	__asm { push 0xeecf1c }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00c18e68: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + 0x4b], bl }
	__asm { L_00c18e6d: }
	__asm { inc dword ptr [esi + 0x24] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00c18e72: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c19130
extern "C" __declspec(naked) void asm_00c19130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, -1 }
	__asm { je L_00c191ac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { L_00c19141: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea edi, [ecx*4] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { add edx, edi }
	__asm { cmp ecx, 1 }
	__asm { jl L_00c19166 }
	__asm { mov eax, dword ptr [edx - 4] }
	__asm { lea esi, [edx - 4] }
	__asm { and eax, 0x3f }
	__asm { test byte ptr [eax + 0xee2218], 0x80 }
	__asm { jne L_00c19168 }
	__asm { L_00c19166: }
	__asm { mov esi, edx }
	__asm { L_00c19168: }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, edx }
	__asm { and eax, 0x3f }
	__asm { cmp al, 0x1b }
	__asm { jne L_00c1918c }
	__asm { mov eax, edx }
	__asm { and eax, 0xffb5ffff }
	__asm { or eax, 0x340000 }
	__asm { shr eax, 0x11 }
	__asm { and edx, 0x7fc000 }
	__asm { or eax, edx }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00c1918c: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [edi + eax] }
	__asm { shr eax, 0xe }
	__asm { sub eax, 0x1ffff }
	__asm { cmp eax, -1 }
	__asm { je L_00c191a9 }
	__asm { inc ecx }
	__asm { add ecx, eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00c19141 }
	__asm { L_00c191a9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00c191ac: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c19430
extern "C" __declspec(naked) void asm_00c19430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00c194c7 }
	__asm { cmp edi, dword ptr [esi + 0xa0] }
	__asm { jb L_00c19482 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1946d }
	__asm { push 0x20 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c19482 }
	__asm { L_00c1946d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca880 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c19482: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c194c7 }
	__asm { cmp dword ptr [esi + 0xa0], 0x28 }
	__asm { jbe L_00c194c7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c194b2 }
	__asm { push 0x21 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca8dc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c194c7 }
	__asm { L_00c194b2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca8e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c194c7: }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { mov eax, dword ptr [esi + eax*4 - 4] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { dec dword ptr [esi + 0xa0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c19430();
// FUNCTION: ROBLOXSTUDIO 0x00c19550
extern "C" __declspec(naked) void asm_00c19550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [eax + 0xcc], esi }
	__asm { jbe L_00c19618 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ebx, [eax + 0x2c] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00c19575: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c195b9 }
	__asm { cmp esi, dword ptr [ebx + 0xa0] }
	__asm { jb L_00c195b9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c195a4 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c195b9 }
	__asm { L_00c195a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c195b9: }
	__asm { mov ebx, dword ptr [ebx + esi*4] }
	__asm { mov eax, dword ptr [ebx + 0x108] }
	__asm { cmp eax, dword ptr [edi + 0x108] }
	__asm { jne L_00c195f0 }
	__asm { mov eax, dword ptr [ebx + 0x10c] }
	__asm { cmp eax, dword ptr [edi + 0x10c] }
	__asm { jne L_00c195f0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x24] }
	__asm { cmp edi, eax }
	__asm { je L_00c19604 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00c195f0: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [eax + 0xcc] }
	__asm { jae L_00c19618 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { jmp L_00c19575 }
	__asm { L_00c19604: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { call fn_00c19430 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c19618: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00c19880
extern "C" __declspec(naked) void asm_00c19880()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0xcc], esi }
	__asm { jbe L_00c19965 }
	__asm { L_00c19895: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c198d9 }
	__asm { cmp esi, dword ptr [ebx + 0xcc] }
	__asm { jb L_00c198d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c198c4 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c198d9 }
	__asm { L_00c198c4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c198d9: }
	__asm { mov eax, dword ptr [ebx + esi*4 + 0x2c] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00c198fb }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00c198fb }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00c198fb }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00c198fb }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jl L_00c19958 }
	__asm { L_00c198fb: }
	__asm { test edi, edi }
	__asm { jne L_00c19908 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c1b0 }
	__asm { mov edi, eax }
	__asm { L_00c19908: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1994d }
	__asm { cmp esi, dword ptr [ebx + 0xcc] }
	__asm { jb L_00c1994d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c19938 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1994d }
	__asm { L_00c19938: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1994d: }
	__asm { push dword ptr [ebx + esi*4 + 0x2c] }
	__asm { mov ecx, edi }
	__asm { call fn_00b53cd0 }
	__asm { L_00c19958: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0xcc] }
	__asm { jb L_00c19895 }
	__asm { L_00c19965: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c19970
extern "C" __declspec(naked) void asm_00c19970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00c19a07 }
	__asm { cmp edi, dword ptr [esi + 0xa0] }
	__asm { jb L_00c199c2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c199ad }
	__asm { push 0x27 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c199c2 }
	__asm { L_00c199ad: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee3a40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c199c2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c19a07 }
	__asm { cmp dword ptr [esi + 0xa0], 0x28 }
	__asm { jbe L_00c19a07 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c199f2 }
	__asm { push 0x28 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca8dc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c19a07 }
	__asm { L_00c199f2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee3aa0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c19a07: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c19430();
// FUNCTION: ROBLOXSTUDIO 0x00c1b120
extern "C" __declspec(naked) void asm_00c1b120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [eax + 0xd8], esi }
	__asm { jbe L_00c1b1e8 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ebx, [eax + 0x38] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00c1b145: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1b189 }
	__asm { cmp esi, dword ptr [ebx + 0xa0] }
	__asm { jb L_00c1b189 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1b174 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1b189 }
	__asm { L_00c1b174: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1b189: }
	__asm { mov ebx, dword ptr [ebx + esi*4] }
	__asm { mov eax, dword ptr [ebx + 0x108] }
	__asm { cmp eax, dword ptr [edi + 0x108] }
	__asm { jne L_00c1b1c0 }
	__asm { mov eax, dword ptr [ebx + 0x10c] }
	__asm { cmp eax, dword ptr [edi + 0x10c] }
	__asm { jne L_00c1b1c0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x24] }
	__asm { cmp edi, eax }
	__asm { je L_00c1b1d4 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00c1b1c0: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [eax + 0xd8] }
	__asm { jae L_00c1b1e8 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { jmp L_00c1b145 }
	__asm { L_00c1b1d4: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { call fn_00c19430 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c1b1e8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00c1b450
extern "C" __declspec(naked) void asm_00c1b450()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0xd8], esi }
	__asm { jbe L_00c1b535 }
	__asm { L_00c1b465: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1b4a9 }
	__asm { cmp esi, dword ptr [ebx + 0xd8] }
	__asm { jb L_00c1b4a9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1b494 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1b4a9 }
	__asm { L_00c1b494: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1b4a9: }
	__asm { mov eax, dword ptr [ebx + esi*4 + 0x38] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00c1b4cb }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00c1b4cb }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00c1b4cb }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00c1b4cb }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jl L_00c1b528 }
	__asm { L_00c1b4cb: }
	__asm { test edi, edi }
	__asm { jne L_00c1b4d8 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c1b0 }
	__asm { mov edi, eax }
	__asm { L_00c1b4d8: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1b51d }
	__asm { cmp esi, dword ptr [ebx + 0xd8] }
	__asm { jb L_00c1b51d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1b508 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1b51d }
	__asm { L_00c1b508: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1b51d: }
	__asm { push dword ptr [ebx + esi*4 + 0x38] }
	__asm { mov ecx, edi }
	__asm { call fn_00b53cd0 }
	__asm { L_00c1b528: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0xd8] }
	__asm { jb L_00c1b465 }
	__asm { L_00c1b535: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099a700();
extern "C" void fn_0099af80();
extern "C" void fn_00bf1140();
extern "C" void fn_00c0ede0();
// FUNCTION: ROBLOXSTUDIO 0x00c1c500
extern "C" __declspec(naked) void asm_00c1c500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1c54d }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { jne L_00c1c54d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1c53c }
	__asm { push 0x42 }
	__asm { push 0xeed944 }
	__asm { push 0xee49d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1c54d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c1c53c: }
	__asm { movzx eax, cl }
	__asm { push 0xeeda40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1c54d: }
	__asm { cmp byte ptr [esi + 0x58], 0 }
	__asm { jne L_00c1c586 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { call fn_0099a700 }
	__asm { test al, al }
	__asm { je L_00c1c586 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov byte ptr [esi + 0x58], 1 }
	__asm { call fn_0099af80 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { lea eax, [esi + 0x5c] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00c0ede0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { call fn_00bf1140 }
	__asm { L_00c1c586: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00934050();
extern "C" void fn_0099a490();
extern "C" void fn_0099a700();
extern "C" void fn_00bf29b0();
// FUNCTION: ROBLOXSTUDIO 0x00c1c680
extern "C" __declspec(naked) void asm_00c1c680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1c6e4 }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { jne L_00c1c6e4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1c6d3 }
	__asm { push 0x54 }
	__asm { push 0xeed944 }
	__asm { push 0xee8f50 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1c6e4 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c1c6d3: }
	__asm { movzx eax, cl }
	__asm { push 0xeedaa0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1c6e4: }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { je L_00c1c723 }
	__asm { cmp byte ptr [esi + 0x58], 0 }
	__asm { je L_00c1c723 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { call fn_0099a700 }
	__asm { test al, al }
	__asm { je L_00c1c723 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { call fn_0099a490 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00934050 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bf29b0 }
	__asm { L_00c1c723: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_00933390();
extern "C" void fn_0099a220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c1cbd0
extern "C" __declspec(naked) void asm_00c1cbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61753 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeedb8c }
	__asm { mov dword ptr [esi + 4], 0xeedbe8 }
	__asm { mov dword ptr [esi + 0x1c], 0xeedc1c }
	__asm { cmp byte ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c1cc52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c1cc52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1cc41 }
	__asm { push 0x81 }
	__asm { push 0xeedc3c }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1cc52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c1cc41: }
	__asm { movzx eax, al }
	__asm { push 0xeede50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1cc52: }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { test al, al }
	__asm { je L_00c1cc6d }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xeedea4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c1cc6d: }
	__asm { mov edi, dword ptr [esi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c1cc88 }
	__asm { mov ecx, edi }
	__asm { call fn_0099a220 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c1cc88: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933390 }
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
extern "C" void fn_00790e70();
extern "C" void fn_0099a4f0();
// FUNCTION: ROBLOXSTUDIO 0x00c1d200
extern "C" __declspec(naked) void asm_00c1d200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00c1d252 }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_00c1d252 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1d241 }
	__asm { push 0x57 }
	__asm { push 0xeedc3c }
	__asm { push 0xee49d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1d252 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c1d241: }
	__asm { movzx eax, al }
	__asm { push 0xeedd98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1d252: }
	__asm { cmp byte ptr [esi + 0x4c], 0 }
	__asm { je L_00c1d281 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { call fn_0099a4f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { call dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00c1d275 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c1d275: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { L_00c1d281: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x00c1ddd0
extern "C" __declspec(naked) void asm_00c1ddd0()
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
	__asm { je L_00c1de1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c1de1b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c1de6e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeee714 }
	__asm { mov dword ptr [esi + 8], 0xeee724 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeee72c }
	__asm { mov dword ptr [esi + 8], 0xeee73c }
	__asm { jmp L_00c1de70 }
	__asm { L_00c1de6e: }
	__asm { xor esi, esi }
	__asm { L_00c1de70: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c1de8d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c1de8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f8694[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c24760();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c1ec80
extern "C" __declspec(naked) void asm_00c1ec80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd618e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c24760 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c1ed3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c1ed3c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f8568 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeee97c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1edba }
	__asm { push 0x12964ec }
	__asm { mov ecx, 0x12964ec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c1edba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1eda5 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1edba }
	__asm { L_00c1eda5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1edba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f8694[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c247b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c1edd0
extern "C" __declspec(naked) void asm_00c1edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61916 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c247b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c1ee8f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c1ee8f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f8568 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeee97c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1ef0d }
	__asm { push 0x12964ec }
	__asm { mov ecx, 0x12964ec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c1ef0d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1eef8 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1ef0d }
	__asm { L_00c1eef8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1ef0d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f8694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c24860();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c1f0e0
extern "C" __declspec(naked) void asm_00c1f0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd618e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c24860 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c1f19c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c1f19c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f8568 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeeea24 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1f21a }
	__asm { push 0x12964ec }
	__asm { mov ecx, 0x12964ec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c1f21a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1f205 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1f21a }
	__asm { L_00c1f205: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1f21a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f8694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c248b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c1f230
extern "C" __declspec(naked) void asm_00c1f230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61916 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c248b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c1f2ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c1f2ef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f8568 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeeea24 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c1f36d }
	__asm { push 0x12964ec }
	__asm { mov ecx, 0x12964ec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c1f36d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1f358 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1f36d }
	__asm { L_00c1f358: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1f36d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c1f380
extern "C" __declspec(naked) void asm_00c1f380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xeef5d8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xeef800 }
	__asm { mov dword ptr [esi + 8], 0xeef810 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c1f42a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c1f416 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c1f416: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c1f42a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c1f440
extern "C" __declspec(naked) void asm_00c1f440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xeef5e0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xeef7d0 }
	__asm { mov dword ptr [esi + 8], 0xeef7e0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c1f4ea }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c1f4d6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c1f4d6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c1f4ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e3d[];
extern "C" void fn_00403540();
extern "C" void fn_00407e90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c1f870
extern "C" __declspec(naked) void asm_00c1f870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6198e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x14], 2 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c1f8f1 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_00c1f8f3 }
	__asm { L_00c1f8f1: }
	__asm { xor edi, edi }
	__asm { L_00c1f8f3: }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { cmp byte ptr [g_012e0e3d], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jne L_00c1f934 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x131b6d8 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0x794be0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012e0e3d], 1 }
	__asm { L_00c1f934: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { jb L_00c1f953 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c1f953: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_004038a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c20500
extern "C" __declspec(naked) void asm_00c20500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_00c2053c }
	__asm { xor eax, eax }
	__asm { jmp L_00c2054c }
	__asm { L_00c2053c: }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { lea edi, [eax + 1] }
	__asm { L_00c20542: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00c20542 }
	__asm { sub eax, edi }
	__asm { pop edi }
	__asm { L_00c2054c: }
	__asm { push eax }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004038a0 }
	__asm { movzx eax, byte ptr [esi + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_00c2058c }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2058c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c29700();
// FUNCTION: ROBLOXSTUDIO 0x00c205a0
extern "C" __declspec(naked) void asm_00c205a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61a10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c29700 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c206e0
extern "C" __declspec(naked) void asm_00c206e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { lea eax, [ebp + 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x3c], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00c20774 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c20774: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00c20797 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c20797: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00afae40();
extern "C" void fn_00baf830();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c20950
extern "C" __declspec(naked) void asm_00c20950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61a99 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00c209cd }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea edi, [ecx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_00baf830 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [ebx + 8], ecx }
	__asm { L_00c209cd: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00c20860();
extern "C" void fn_00c2b6e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c21340
extern "C" __declspec(naked) void asm_00c21340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61ae0 }
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
	__asm { L_00c21373: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_00c213e4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c20860 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x4444443 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00c213a6 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c213a6: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00c21373 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_00c213db }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_00c213c7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00c2b6e0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_00c213c7 }
	__asm { L_00c213db: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c213e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00403540();
extern "C" void fn_00c20860();
extern "C" void fn_00c2ce90();
extern "C" void fn_00c2f9b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c215d0
extern "C" __declspec(naked) void asm_00c215d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61b10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00c21602: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [edi] }
	__asm { cmp esi, eax }
	__asm { je L_00c216ae }
	__asm { cmp edi, dword ptr [edx] }
	__asm { je L_00c21650 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [esi + 0xc] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { cmp ecx, eax }
	__asm { je L_00c2162d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c2162d: }
	__asm { add esi, 0x24 }
	__asm { lea ecx, [edi + 0x24] }
	__asm { cmp ecx, esi }
	__asm { je L_00c21641 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00403540 }
	__asm { L_00c21641: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00c21602 }
	__asm { mov edi, edi }
	__asm { L_00c21650: }
	__asm { cmp esi, eax }
	__asm { je L_00c216ae }
	__asm { mov ebx, dword ptr [edx] }
	__asm { add esi, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov ecx, edx }
	__asm { push ebx }
	__asm { call fn_00c20860 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, 0x4444443 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00c21684 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c21684: }
	__asm { inc eax }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ebx + 4], esi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00c21650 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00c2ce90 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c216ae: }
	__asm { push dword ptr [edx] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00c2f9b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c262b0();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c21780
extern "C" __declspec(naked) void asm_00c21780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61b63 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c217d9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00c262b0 }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { pop esi }
	__asm { jmp L_00c217db }
	__asm { L_00c217d9: }
	__asm { xor edi, edi }
	__asm { L_00c217db: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { jb L_00c217f9 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c217f9: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00c21780();
extern "C" void fn_00c262b0();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c21c80
extern "C" __declspec(naked) void asm_00c21c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61b98 }
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
	__asm { jne L_00c21ced }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c262b0 }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { call fn_00c21780 }
	__asm { mov bl, 1 }
	__asm { jmp L_00c21cef }
	__asm { L_00c21ced: }
	__asm { xor bl, bl }
	__asm { L_00c21cef: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00c21d07 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c21d07: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00c21c80();
extern "C" void fn_00c262b0();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c21d40
extern "C" __declspec(naked) void asm_00c21d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61b98 }
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
	__asm { push dword ptr [ebp + 0x50] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c262b0 }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { call fn_00c21c80 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00c21db4 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c21db4: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00c21d40();
extern "C" void fn_00c262b0();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c21df0
extern "C" __declspec(naked) void asm_00c21df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61b98 }
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
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c262b0 }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov esi, 0xeef898 }
	__asm { mov ecx, esi }
	__asm { call fn_00c21d40 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00c21e69 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c21e69: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00c22da0
extern "C" __declspec(naked) void asm_00c22da0()
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
	__asm { je L_00c22deb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c22deb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c22e3e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeef924 }
	__asm { mov dword ptr [esi + 8], 0xeef934 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeef93c }
	__asm { mov dword ptr [esi + 8], 0xeef94c }
	__asm { jmp L_00c22e40 }
	__asm { L_00c22e3e: }
	__asm { xor esi, esi }
	__asm { L_00c22e40: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c22e5d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c22e5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c314c0();
// FUNCTION: ROBLOXSTUDIO 0x00c22eb0
extern "C" __declspec(naked) void asm_00c22eb0()
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
	__asm { je L_00c22efb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c22efb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c22f4e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeef8ec }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeef8f4 }
	__asm { mov dword ptr [esi + 8], 0xeef904 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeef90c }
	__asm { mov dword ptr [esi + 8], 0xeef91c }
	__asm { jmp L_00c22f50 }
	__asm { L_00c22f4e: }
	__asm { xor esi, esi }
	__asm { L_00c22f50: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c314c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c22f6d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c22f6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c25ab0();
extern "C" void fn_00c319d0();
// FUNCTION: ROBLOXSTUDIO 0x00c22fc0
extern "C" __declspec(naked) void asm_00c22fc0()
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
	__asm { je L_00c2300b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c2300b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c23026 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c25ab0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c23028 }
	__asm { L_00c23026: }
	__asm { xor esi, esi }
	__asm { L_00c23028: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c319d0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c23045 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c23045: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_009c9090();
// FUNCTION: ROBLOXSTUDIO 0x00c23090
extern "C" __declspec(naked) void asm_00c23090()
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
	__asm { je L_00c230db }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c230db: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c2313a }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe9523c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeef954 }
	__asm { mov dword ptr [esi + 8], 0xeef964 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xeef96c }
	__asm { mov dword ptr [esi + 8], 0xeef97c }
	__asm { jmp L_00c2313c }
	__asm { L_00c2313a: }
	__asm { xor esi, esi }
	__asm { L_00c2313c: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009c9090 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c23159 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c23159: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c31310();
// FUNCTION: ROBLOXSTUDIO 0x00c231a0
extern "C" __declspec(naked) void asm_00c231a0()
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
	__asm { je L_00c231eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c231eb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00c2323e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeef8ac }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeef8b4 }
	__asm { mov dword ptr [esi + 8], 0xeef8c4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeef8cc }
	__asm { mov dword ptr [esi + 8], 0xeef8dc }
	__asm { jmp L_00c23240 }
	__asm { L_00c2323e: }
	__asm { xor esi, esi }
	__asm { L_00c23240: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c31310 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c2325d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c2325d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c1f380();
extern "C" void fn_00c31670();
// FUNCTION: ROBLOXSTUDIO 0x00c23280
extern "C" __declspec(naked) void asm_00c23280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c232cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c232cb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c232f4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c1f380 }
	__asm { mov dword ptr [esi], 0xeef818 }
	__asm { mov dword ptr [esi + 8], 0xeef828 }
	__asm { jmp L_00c232f6 }
	__asm { L_00c232f4: }
	__asm { xor esi, esi }
	__asm { L_00c232f6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c31670 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c2331a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c2331a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00c1f440();
extern "C" void fn_00c31820();
// FUNCTION: ROBLOXSTUDIO 0x00c23330
extern "C" __declspec(naked) void asm_00c23330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c2337b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00c2337b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c233a4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c1f440 }
	__asm { mov dword ptr [esi], 0xeef7e8 }
	__asm { mov dword ptr [esi + 8], 0xeef7f8 }
	__asm { jmp L_00c233a6 }
	__asm { L_00c233a4: }
	__asm { xor esi, esi }
	__asm { L_00c233a6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c31820 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00c233ca }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00c233ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
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
extern "C" void fn_007dc590();
extern "C" void fn_007e8ea0();
// FUNCTION: ROBLOXSTUDIO 0x00c23cb0
extern "C" __declspec(naked) void asm_00c23cb0()
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
	__asm { push 3 }
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
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e8ea0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_007dc590 }
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
	__asm { ret 0xc }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00c20310();
extern "C" void fn_00c52bb0();
// FUNCTION: ROBLOXSTUDIO 0x00c23d70
extern "C" __declspec(naked) void asm_00c23d70()
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
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c52bb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00c20310 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
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
	__asm { ret 0x10 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00c24520();
extern "C" void fn_00c24930();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c24650
extern "C" __declspec(naked) void asm_00c24650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_00c2471b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c24930 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00c246a3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c246a3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c24701 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00c24520 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c246f0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00c246f0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c24701: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c2471b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c2471b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c24735 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c24735: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c259a0();
// FUNCTION: ROBLOXSTUDIO 0x00c24aa0
extern "C" __declspec(naked) void asm_00c24aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c259a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeeea00 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c24b4e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c24b4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c259a0();
// FUNCTION: ROBLOXSTUDIO 0x00c24b70
extern "C" __declspec(naked) void asm_00c24b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52aeb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c259a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeeebcc }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c24c1e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c24c1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c259a0();
// FUNCTION: ROBLOXSTUDIO 0x00c24c40
extern "C" __declspec(naked) void asm_00c24c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c259a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeeea74 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c24cee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c24cee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_00c259a0();
extern "C" void fn_00c46420();
// FUNCTION: ROBLOXSTUDIO 0x00c24d10
extern "C" __declspec(naked) void asm_00c24d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61f96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c259a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeeea8c }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c46420 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00825140();
extern "C" void fn_00c259a0();
extern "C" void fn_00c2dcd0();
// FUNCTION: ROBLOXSTUDIO 0x00c24dc0
extern "C" __declspec(naked) void asm_00c24dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61fd9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c259a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeeeb20 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00c2dcd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_01310d08[];
extern "C" char g_01310d0c[];
extern "C" char g_01310d10[];
extern "C" char g_01310d14[];
extern "C" void fn_007cb250();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00c259a0();
extern "C" void fn_00c366a0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c24ea0
extern "C" __declspec(naked) void asm_00c24ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c259a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xeeed30 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c24f01 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_00c24f03 }
	__asm { L_00c24f01: }
	__asm { xor eax, eax }
	__asm { L_00c24f03: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c366a0 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_01310d14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_00c24f58 }
	__asm { or eax, 1 }
	__asm { push 0xe09ea0 }
	__asm { mov dword ptr [g_01310d14], eax }
	__asm { mov dword ptr [g_01310d08], 0x1296488 }
	__asm { mov dword ptr [g_01310d10], 0x40d810 }
	__asm { mov dword ptr [g_01310d0c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c24f58: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x1310d08 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_00c366a0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c24fa7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c24fa7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00c2bb70();
// FUNCTION: ROBLOXSTUDIO 0x00c25090
extern "C" __declspec(naked) void asm_00c25090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64f90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x1296488 }
	__asm { mov edi, ecx }
	__asm { push 0xeef448 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xeef434 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
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
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe56840 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00c2bb70 }
	__asm { push 0xeef454 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00c2bb70 }
	__asm { push 0xeef45c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00c2bb70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00c2bb70();
// FUNCTION: ROBLOXSTUDIO 0x00c251d0
extern "C" __declspec(naked) void asm_00c251d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64f90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x12964b8 }
	__asm { mov edi, ecx }
	__asm { push 0xeef488 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xeef474 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
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
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe5e548 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00c2bb70 }
	__asm { push 0xe9769c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00c2bb70 }
	__asm { push 0xeef498 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00c2bb70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008251b0();
extern "C" void fn_00c258f0();
// FUNCTION: ROBLOXSTUDIO 0x00c25310
extern "C" __declspec(naked) void asm_00c25310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c258f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeeeaf0 }
	__asm { call fn_007d5550 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00c253a2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c253a2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00c253c5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c253c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00c258f0();
// FUNCTION: ROBLOXSTUDIO 0x00c255c0
extern "C" __declspec(naked) void asm_00c255c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c258f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeeec50 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00c25652 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c25652: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00c25675 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c25675: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f8694[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c259a0
extern "C" __declspec(naked) void asm_00c259a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62046 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00c25a1a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeee750 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c25a1a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f8568 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeee9f4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00c25a92 }
	__asm { push 0x12964ec }
	__asm { mov ecx, 0x12964ec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c25a92 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c25a7d }
	__asm { push 0x1e0 }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c25a92 }
	__asm { L_00c25a7d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10135b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c25a92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00412d40();
extern "C" void fn_00c21400();
extern "C" void fn_00c2b290();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c26a30
extern "C" __declspec(naked) void asm_00c26a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62160 }
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
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00c2b290 }
	__asm { test al, al }
	__asm { je L_00c26aad }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00c21400 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00c26aad: }
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
	__asm { call fn_00412d40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00c25fb0();
// FUNCTION: ROBLOXSTUDIO 0x00c26ae0
extern "C" __declspec(naked) void asm_00c26ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62186 }
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
	__asm { lea ecx, [edi + 4] }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
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
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c25fb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310778[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_00c23ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c28830
extern "C" __declspec(naked) void asm_00c28830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xeee930 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c288eb }
	__asm { cmp dword ptr [g_01310778], 0x29a }
	__asm { je L_00c288a0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c2888b }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c288a0 }
	__asm { L_00c2888b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c288a0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c288eb }
	__asm { cmp dword ptr [g_01310778], 0x29a }
	__asm { je L_00c288eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c288d6 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c288eb }
	__asm { L_00c288d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c288eb: }
	__asm { call fn_00c23ad0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00c28942 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
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
	__asm { L_00c28942: }
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

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c29700
extern "C" __declspec(naked) void asm_00c29700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62748 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c297be }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c297be: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_00c297e1 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c297e1: }
	__asm { cmp dword ptr [ebp + 0x54], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00c29804 }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c29804: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00c2ce90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2b610
extern "C" __declspec(naked) void asm_00c2b610()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00c2b69f }
	__asm { push edi }
	__asm { L_00c2b620: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { dec ecx }
	__asm { and ecx, eax }
	__asm { mov esi, dword ptr [esi + ecx*4] }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00c2ce90 }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { jb L_00c2b656 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b656: }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00c2b679 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b679: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { dec dword ptr [ebx + 0x10] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { jne L_00c2b69a }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { L_00c2b69a: }
	__asm { test ecx, ecx }
	__asm { jne L_00c2b620 }
	__asm { pop edi }
	__asm { L_00c2b69f: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { test esi, esi }
	__asm { je L_00c2b6be }
	__asm { L_00c2b6a6: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { dec esi }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { test eax, eax }
	__asm { je L_00c2b6ba }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b6ba: }
	__asm { test esi, esi }
	__asm { jne L_00c2b6a6 }
	__asm { L_00c2b6be: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { je L_00c2b6ce }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b6ce: }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_009fe110();
extern "C" void fn_009fe3b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2b910
extern "C" __declspec(naked) void asm_00c2b910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { movzx eax, byte ptr [ecx + 0xb0] }
	__asm { lea ebx, [ecx + 0xb0] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add eax, ebx }
	__asm { je L_00c2b94b }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_00c2b952 }
	__asm { L_00c2b94b: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00c2b952: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovae ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x18] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp eax, ecx }
	__asm { je L_00c2b991 }
	__asm { L_00c2b973: }
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
	__asm { jne L_00c2b973 }
	__asm { L_00c2b991: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_009fe3b0 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jne L_00c2b9c5 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_009fe110 }
	__asm { L_00c2b9c5: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop ebx }
	__asm { jb L_00c2b9d7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2b9d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_00c96500();
// FUNCTION: ROBLOXSTUDIO 0x00c2bee0
extern "C" __declspec(naked) void asm_00c2bee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c2bf2b }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c2bf01 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c2bf03 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c2bf03 }
	__asm { L_00c2bf01: }
	__asm { mov eax, edi }
	__asm { L_00c2bf03: }
	__asm { test eax, eax }
	__asm { je L_00c2bf2b }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00c2bf2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c2bf2b }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00c2bf2d }
	__asm { L_00c2bf2b: }
	__asm { xor eax, eax }
	__asm { L_00c2bf2d: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { je L_00c2bf80 }
	__asm { test dl, dl }
	__asm { je L_00c2bf80 }
	__asm { test eax, eax }
	__asm { jne L_00c2bf84 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c2bf69 }
	__asm { push 0xb5 }
	__asm { push 0xeeed98 }
	__asm { push 0xeeedd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2bf7a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c2bf69: }
	__asm { movzx eax, cl }
	__asm { push 0xeeee78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2bf7a: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c2bf80: }
	__asm { test eax, eax }
	__asm { je L_00c2bf7a }
	__asm { L_00c2bf84: }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_00c96500 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00c2bf7a }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c205a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2c4e0
extern "C" __declspec(naked) void asm_00c2c4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62bf8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x38] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00c205a0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c2c53e }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2c53e: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00c2c561 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2c561: }
	__asm { cmp dword ptr [ebp + 0x4c], 0x10 }
	__asm { mov dword ptr [ebp + 0x34], 0xf }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { mov byte ptr [ebp + 0x20], 0 }
	__asm { jb L_00c2c584 }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2c584: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_00e10528[];
extern "C" char g_013110e4[];
extern "C" void fn_00426850();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c2cb00
extern "C" __declspec(naked) void asm_00c2cb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x178] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { je L_00c2cb49 }
	__asm { cmp dword ptr [ecx + 0x180], 0 }
	__asm { je L_00c2cb72 }
	__asm { mov ecx, dword ptr [g_013110e4] }
	__asm { add edx, 0x1c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c2cb43 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { push 0 }
	__asm { push 0xee854c }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { jne L_00c2cb9b }
	__asm { L_00c2cb43: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2cb49: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xeef100 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00c2cb72: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xeef120 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00c2cb9b: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xeef138 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00c25fb0();
// FUNCTION: ROBLOXSTUDIO 0x00c2d440
extern "C" __declspec(naked) void asm_00c2d440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62cc7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c2d4d6 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
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
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c25fb0 }
	__asm { pop esi }
	__asm { L_00c2d4d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00c2dcd0
extern "C" __declspec(naked) void asm_00c2dcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5710 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c2dd71 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c2dd71: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c2dd88 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c2dd88: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c2dda8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00c2dda8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_00c2ce90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c2f9b0
extern "C" __declspec(naked) void asm_00c2f9b0()
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
	__asm { jne L_00c2f9db }
	__asm { cmp eax, ecx }
	__asm { jne L_00c2f9db }
	__asm { mov ecx, ebx }
	__asm { call fn_00c2ce90 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c2f9db: }
	__asm { cmp edi, eax }
	__asm { je L_00c2fa52 }
	__asm { push esi }
	__asm { L_00c2f9e0: }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { je L_00c2fa48 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { cmp dword ptr [edi + 0x38], 0x10 }
	__asm { jb L_00c2fa04 }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2fa04: }
	__asm { mov dword ptr [edi + 0x38], 0xf }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [edi + 0x24], 0 }
	__asm { cmp dword ptr [edi + 0x20], 0x10 }
	__asm { jb L_00c2fa27 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c2fa27: }
	__asm { mov dword ptr [edi + 0x20], 0xf }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { L_00c2fa48: }
	__asm { mov edi, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { cmp esi, eax }
	__asm { jne L_00c2f9e0 }
	__asm { pop esi }
	__asm { L_00c2fa52: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_007df590();
extern "C" void fn_00c299c0();
// FUNCTION: ROBLOXSTUDIO 0x00c2ffa0
extern "C" __declspec(naked) void asm_00c2ffa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00c3001f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00c3001f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c3000e }
	__asm { push 0x169 }
	__asm { push 0xeee758 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c3001f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c3000e: }
	__asm { movzx eax, bl }
	__asm { push 0xeef570 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c3001f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c3002b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c3002d }
	__asm { L_00c3002b: }
	__asm { xor edi, edi }
	__asm { L_00c3002d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_007df590 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { add ecx, 0x44 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c299c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00c21540();
extern "C" void fn_00c29bf0();
// FUNCTION: ROBLOXSTUDIO 0x00c30090
extern "C" __declspec(naked) void asm_00c30090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62ec8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00c30111 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00c30111 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c30100 }
	__asm { push 0x18a }
	__asm { push 0xeee758 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c30111 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c30100: }
	__asm { movzx eax, bl }
	__asm { push 0xeef4a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c30111: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c3011d }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00c3011f }
	__asm { L_00c3011d: }
	__asm { xor edi, edi }
	__asm { L_00c3011f: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0xcc }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c21540 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [eax] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c29bf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c25fb0();
extern "C" void fn_00c286f0();
// FUNCTION: ROBLOXSTUDIO 0x00c301b0
extern "C" __declspec(naked) void asm_00c301b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd62efe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_00c30255 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { lea ecx, [esi + 0x24] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp + 0x48] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c25fb0 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax] }
	__asm { L_00c30255: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00c286f0 }
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
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_00c9e480();
// FUNCTION: ROBLOXSTUDIO 0x00c307f0
extern "C" __declspec(naked) void asm_00c307f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c3083b }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c30811 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c30813 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c30813 }
	__asm { L_00c30811: }
	__asm { mov eax, edi }
	__asm { L_00c30813: }
	__asm { test eax, eax }
	__asm { je L_00c3083b }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00c3083b }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c3083b }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00c3083d }
	__asm { L_00c3083b: }
	__asm { xor eax, eax }
	__asm { L_00c3083d: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { je L_00c30890 }
	__asm { test dl, dl }
	__asm { je L_00c30890 }
	__asm { test eax, eax }
	__asm { jne L_00c30894 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c30879 }
	__asm { push 0xae }
	__asm { push 0xeeed98 }
	__asm { push 0xeeedd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c3088a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c30879: }
	__asm { movzx eax, cl }
	__asm { push 0xeeee00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c3088a: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c30890: }
	__asm { test eax, eax }
	__asm { je L_00c3088a }
	__asm { L_00c30894: }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_00c9e480 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00c3088a }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_00c71510();
extern "C" void fn_00cf76d2();
extern "C" void fn_00cf76d8();
// FUNCTION: ROBLOXSTUDIO 0x00c32520
extern "C" __declspec(naked) void asm_00c32520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd63068 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test al, al }
	__asm { je L_00c32586 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_00c32586 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c32575 }
	__asm { push 0x5f }
	__asm { push 0xeef5e4 }
	__asm { push 0xeef620 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c32586 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c32575: }
	__asm { movzx eax, al }
	__asm { push 0xeef638 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c32586: }
	__asm { mov esi, dword ptr [edi] }
	__asm { call fn_007cb440 }
	__asm { cmp eax, esi }
	__asm { jne L_00c325af }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c325af: }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_00cf76d2 }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c71510 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { je L_00c325eb }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov bl, 1 }
	__asm { mov dword ptr [eax], ecx }
	__asm { jmp L_00c325f6 }
	__asm { L_00c325eb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor bl, bl }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00c325f6: }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c3260b }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00cf76d8 }
	__asm { L_00c3260b: }
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

extern "C" char g_00e10524[];
extern "C" void fn_00c265c0();
extern "C" void fn_00c29f50();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c32ce0
extern "C" __declspec(naked) void asm_00c32ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00c32d2b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00c32d20 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [edi + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00c265c0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32d20: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32d2b: }
	__asm { cmp eax, 1 }
	__asm { jne L_00c32d43 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32d43: }
	__asm { cmp eax, 2 }
	__asm { jne L_00c32d61 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00c32d58 }
	__asm { push 1 }
	__asm { call fn_00c29f50 }
	__asm { L_00c32d58: }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32d61: }
	__asm { cmp eax, 3 }
	__asm { jne L_00c32d84 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12967e8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00c32d58 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c32d84: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x12967e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b57280();
extern "C" void fn_00c26df0();
extern "C" void fn_00c28750();
extern "C" void fn_00c29820();
extern "C" void fn_00c2af40();
extern "C" void fn_00c34b90();
extern "C" void fn_00c4aad0();
extern "C" void fn_00c9e820();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c34a80
extern "C" __declspec(naked) void asm_00c34a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd63320 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x178] }
	__asm { test eax, eax }
	__asm { je L_00c34ab6 }
	__asm { cmp dword ptr [esi + 0x34], eax }
	__asm { jne L_00c34ab6 }
	__asm { xor bl, bl }
	__asm { jmp L_00c34ab8 }
	__asm { L_00c34ab6: }
	__asm { mov bl, 1 }
	__asm { L_00c34ab8: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { test bl, bl }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c2af40 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00c34b24 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { call fn_00c26df0 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1ac] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c29820 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c34b90 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00c28750 }
	__asm { jmp L_00c34b68 }
	__asm { L_00c34b24: }
	__asm { mov ecx, dword ptr [edi + 0x178] }
	__asm { test ecx, ecx }
	__asm { je L_00c34b37 }
	__asm { call fn_00c4aad0 }
	__asm { test al, al }
	__asm { jne L_00c34b68 }
	__asm { L_00c34b37: }
	__asm { call fn_00c9e820 }
	__asm { test al, al }
	__asm { jne L_00c34b54 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { call fn_00b57280 }
	__asm { add esp, 4 }
	__asm { test bl, bl }
	__asm { je L_00c34b54 }
	__asm { test al, al }
	__asm { jne L_00c34b68 }
	__asm { L_00c34b54: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1ac] }
	__asm { call fn_00c29820 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c34b90 }
	__asm { L_00c34b68: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00c34b7c }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c34b7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c22c90();
extern "C" void fn_00c26b80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c363c0
extern "C" __declspec(naked) void asm_00c363c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21a23 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00c363fe }
	__asm { mov eax, dword ptr [esi + 0x15c] }
	__asm { mov dword ptr [esi + 0x15c], 0 }
	__asm { jmp L_00c36455 }
	__asm { L_00c363fe: }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c36443 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { call fn_00c26b80 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c36445 }
	__asm { L_00c36443: }
	__asm { xor ecx, ecx }
	__asm { L_00c36445: }
	__asm { mov eax, dword ptr [esi + 0x15c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x15c], ecx }
	__asm { L_00c36455: }
	__asm { push eax }
	__asm { call fn_00c22c90 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c3646f }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c3646f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e131ac[];
extern "C" void fn_00403690();
extern "C" void fn_0045f760();
extern "C" void fn_0045ff20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c36e60
extern "C" __declspec(naked) void asm_00c36e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd636d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x44 }
	__asm { call fn_0045ff20 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push eax }
	__asm { push 0x44 }
	__asm { call fn_00403690 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { je L_00c36edc }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e131ac] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx], 0xeefbf0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edx + 0x3c], eax }
	__asm { mov dword ptr [edx + 0x40], ecx }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { jmp L_00c36ee3 }
	__asm { L_00c36edc: }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { L_00c36ee3: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { jmp L_00c36f23 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xc36f1c }
	__asm { ret }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c36f23 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c36f23: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131c8[];
extern "C" char g_011dc6f5[];
extern "C" void fn_0047a9c0();
extern "C" void fn_006b8a90();
extern "C" void fn_006bc9a0();
extern "C" void fn_006bca40();
// FUNCTION: ROBLOXSTUDIO 0x00c37020
extern "C" __declspec(naked) void asm_00c37020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd636f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], 0xeefa90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ecx + 0x1c], 1 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [edx + 0x10], 0 }
	__asm { jne L_00c37067 }
	__asm { mov dword ptr [ebp - 0x14], 0xffffffff }
	__asm { jmp L_00c3706e }
	__asm { L_00c37067: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00c3706e: }
	__asm { cmp dword ptr [ebp - 0x14], -1 }
	__asm { je L_00c370b7 }
	__asm { L_00c37074: }
	__asm { movzx eax, byte ptr [g_011dc6f5] }
	__asm { test eax, eax }
	__asm { je L_00c37096 }
	__asm { push 0 }
	__asm { push 0xeefa98 }
	__asm { movzx ecx, byte ptr [g_011dc6f5] }
	__asm { push ecx }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c37096: }
	__asm { xor edx, edx }
	__asm { jne L_00c37074 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 0xc }
	__asm { call fn_006bca40 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { call dword ptr [g_00e131c8] }
	__asm { L_00c370b7: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { je L_00c370e5 }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_0047a9c0 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { jmp L_00c370ec }
	__asm { L_00c370e5: }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { L_00c370ec: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 0xc }
	__asm { call fn_006bc9a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100bc[];
extern "C" char g_00e10178[];
extern "C" char g_00e105a8[];
extern "C" char g_011dc6f5[];
extern "C" void fn_006b8a90();
extern "C" void fn_00c37bc0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00c37340
extern "C" __declspec(naked) void asm_00c37340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x260 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movzx ecx, byte ptr [eax + 0x1d] }
	__asm { test ecx, ecx }
	__asm { jne L_00c3735c }
	__asm { jmp L_00c37421 }
	__asm { L_00c3735c: }
	__asm { push 0x104 }
	__asm { lea edx, [ebp - 0x160] }
	__asm { push edx }
	__asm { push 0 }
	__asm { call dword ptr [g_00e100bc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { je L_00c37421 }
	__asm { push 0xeefbb4 }
	__asm { lea eax, [ebp - 0x160] }
	__asm { push eax }
	__asm { call fn_00c37bc0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00c37421 }
	__asm { L_00c37399: }
	__asm { movzx ecx, byte ptr [g_011dc6f5] }
	__asm { test ecx, ecx }
	__asm { je L_00c373bb }
	__asm { push 0 }
	__asm { push 0xeefbc0 }
	__asm { movzx edx, byte ptr [g_011dc6f5] }
	__asm { push edx }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c373bb: }
	__asm { xor eax, eax }
	__asm { jne L_00c37399 }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { push 0x40 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x5c], 0x44 }
	__asm { lea edx, [ebp - 0x160] }
	__asm { push edx }
	__asm { push 0xeefbe4 }
	__asm { push 0x100 }
	__asm { lea eax, [ebp - 0x260] }
	__asm { push eax }
	__asm { call dword ptr [g_00e105a8] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { lea edx, [ebp - 0x5c] }
	__asm { push edx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x20 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x260] }
	__asm { push eax }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10178] }
	__asm { L_00c37421: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1008c[];
extern "C" char g_00e10148[];
extern "C" char g_00e10150[];
extern "C" char g_00e10154[];
// FUNCTION: ROBLOXSTUDIO 0x00c37440
extern "C" __declspec(naked) void asm_00c37440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x84 }
	__asm { push 0xe43668 }
	__asm { call dword ptr [g_00e10148] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { cmp dword ptr [ebp - 0xc], 0 }
	__asm { jne L_00c37464 }
	__asm { xor eax, eax }
	__asm { jmp L_00c374eb }
	__asm { L_00c37464: }
	__asm { push 0xeefb14 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10150] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00c37480 }
	__asm { xor eax, eax }
	__asm { jmp L_00c374eb }
	__asm { L_00c37480: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add edx, 5 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp - 0x18], 0xc37430 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { sub ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edx, 1 }
	__asm { imul edx, edx, 0 }
	__asm { mov byte ptr [ebp + edx - 0x84], 0xe9 }
	__asm { mov eax, 1 }
	__asm { shl eax, 0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + eax - 0x84], ecx }
	__asm { lea edx, [ebp - 0x20] }
	__asm { push edx }
	__asm { push 5 }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10154] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1008c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { L_00c374eb: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131c8[];
extern "C" char g_011dc6f5[];
extern "C" void fn_0047a090();
extern "C" void fn_006b8a90();
extern "C" void fn_006bca40();
// FUNCTION: ROBLOXSTUDIO 0x00c37640
extern "C" __declspec(naked) void asm_00c37640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { L_00c37649: }
	__asm { movzx eax, byte ptr [g_011dc6f5] }
	__asm { test eax, eax }
	__asm { je L_00c3766b }
	__asm { push 0 }
	__asm { push 0xeefaf4 }
	__asm { movzx ecx, byte ptr [g_011dc6f5] }
	__asm { push ecx }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c3766b: }
	__asm { xor edx, edx }
	__asm { jne L_00c37649 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jne L_00c37681 }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { jmp L_00c37688 }
	__asm { L_00c37681: }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { L_00c37688: }
	__asm { cmp dword ptr [ebp - 8], -1 }
	__asm { je L_00c376cb }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, 0xc }
	__asm { call fn_006bca40 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { call dword ptr [g_00e131c8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, 0x10 }
	__asm { call fn_0047a090 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { jmp L_00c376de }
	__asm { jmp L_00c376de }
	__asm { L_00c376cb: }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { L_00c376de: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10090[];
extern "C" char g_00e131b4[];
extern "C" char g_01310dc8[];
extern "C" void fn_0047a090();
extern "C" void fn_00c36df0();
extern "C" void fn_00c36e40();
extern "C" void fn_00c36f40();
extern "C" void fn_00c37440();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c37790
extern "C" __declspec(naked) void asm_00c37790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63713 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { push 0xc37180 }
	__asm { call dword ptr [g_00e10090] }
	__asm { call fn_00c37440 }
	__asm { push 4 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { je L_00c37828 }
	__asm { mov eax, dword ptr [g_01310dc8] }
	__asm { push eax }
	__asm { push 0xc379c0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { call fn_00c36df0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00c36e40 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ecx }
	__asm { call fn_00c36f40 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call dword ptr [g_00e131b4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { jmp L_00c3782f }
	__asm { L_00c37828: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00c3782f: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add ecx, 0x10 }
	__asm { call fn_0047a090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c37950();
// FUNCTION: ROBLOXSTUDIO 0x00c37860
extern "C" __declspec(naked) void asm_00c37860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x7fffffff }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c37950 }
	__asm { test eax, eax }
	__asm { js L_00c378d8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov edx, esi }
	__asm { lea eax, [ebx + edi] }
	__asm { mov edi, 0 }
	__asm { sub edx, ebx }
	__asm { je L_00c378cc }
	__asm { mov ecx, edx }
	__asm { sub ecx, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add ecx, 0x7fffffff }
	__asm { add ecx, ebx }
	__asm { sub esi, eax }
	__asm { L_00c378a3: }
	__asm { test ecx, ecx }
	__asm { je L_00c378c8 }
	__asm { mov bl, byte ptr [esi + eax] }
	__asm { test bl, bl }
	__asm { je L_00c378c8 }
	__asm { mov byte ptr [eax], bl }
	__asm { inc eax }
	__asm { dec ecx }
	__asm { dec edx }
	__asm { jne L_00c378a3 }
	__asm { dec eax }
	__asm { mov edi, 0x8007007a }
	__asm { pop ebx }
	__asm { mov byte ptr [eax], dl }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c378c8: }
	__asm { test edx, edx }
	__asm { jne L_00c378d2 }
	__asm { L_00c378cc: }
	__asm { dec eax }
	__asm { mov edi, 0x8007007a }
	__asm { L_00c378d2: }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov eax, edi }
	__asm { pop ebx }
	__asm { L_00c378d8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00c378e0
extern "C" __declspec(naked) void asm_00c378e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { test edx, edx }
	__asm { je L_00c378f4 }
	__asm { cmp edx, 0x7fffffff }
	__asm { jbe L_00c378f9 }
	__asm { L_00c378f4: }
	__asm { mov eax, 0x80070057 }
	__asm { L_00c378f9: }
	__asm { test eax, eax }
	__asm { js L_00c3794c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_00c3793e }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, 0x7ffffffe }
	__asm { sub esi, edx }
	__asm { sub edi, ecx }
	__asm { L_00c37915: }
	__asm { lea eax, [esi + edx] }
	__asm { test eax, eax }
	__asm { je L_00c3793a }
	__asm { mov al, byte ptr [edi + ecx] }
	__asm { test al, al }
	__asm { je L_00c3793a }
	__asm { mov byte ptr [ecx], al }
	__asm { inc ecx }
	__asm { dec edx }
	__asm { jne L_00c37915 }
	__asm { pop edi }
	__asm { mov ebx, 0x8007007a }
	__asm { dec ecx }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov byte ptr [ecx], dl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c3793a: }
	__asm { test edx, edx }
	__asm { jne L_00c37944 }
	__asm { L_00c3793e: }
	__asm { dec ecx }
	__asm { mov ebx, 0x8007007a }
	__asm { L_00c37944: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov byte ptr [ecx], 0 }
	__asm { pop ebx }
	__asm { L_00c3794c: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e4d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c37bd0
extern "C" __declspec(naked) void asm_00c37bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e4d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c37c8f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c37c8f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xef04a0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c37d0d }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c37d0d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c37cf8 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c37d0d }
	__asm { L_00c37cf8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c37d0d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e530();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c37d20
extern "C" __declspec(naked) void asm_00c37d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e530 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c37ddf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c37ddf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xef04a0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c37e5d }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c37e5d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c37e48 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c37e5d }
	__asm { L_00c37e48: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c37e5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_00c3e590();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c37e70
extern "C" __declspec(naked) void asm_00c37e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63746 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e590 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c37f2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c37f2f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_00869000 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xef0744 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c37fad }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c37fad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c37f98 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c37fad }
	__asm { L_00c37f98: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c37fad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e750();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c38800
extern "C" __declspec(naked) void asm_00c38800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63866 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e750 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c388bc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c388bc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeefd68 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c3893a }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c3893a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c38925 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c3893a }
	__asm { L_00c38925: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c3893a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e7a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c38950
extern "C" __declspec(naked) void asm_00c38950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e7a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c38a0f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c38a0f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeefd68 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c38a8d }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c38a8d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c38a78 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c38a8d }
	__asm { L_00c38a78: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c38a8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e800();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c38aa0
extern "C" __declspec(naked) void asm_00c38aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e800 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c38b5f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c38b5f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeefde0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c38bdd }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c38bdd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c38bc8 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c38bdd }
	__asm { L_00c38bc8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c38bdd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e8c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c38dc0
extern "C" __declspec(naked) void asm_00c38dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63866 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e8c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c38e7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c38e7c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeefda4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c38efa }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c38efa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c38ee5 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c38efa }
	__asm { L_00c38ee5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c38efa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f784[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c3e910();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c38f10
extern "C" __declspec(naked) void asm_00c38f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd63896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c3e910 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00c38fcf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f784], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e5f4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f788 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddee90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00c38fcf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f788 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeefda4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c3904d }
	__asm { push 0x1278494 }
	__asm { mov ecx, 0x1278494 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00c3904d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c39038 }
	__asm { push 0xae }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c3904d }
	__asm { L_00c39038: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13798 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c3904d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c39060
extern "C" __declspec(naked) void asm_00c39060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xeef8a4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef24cc }
	__asm { mov dword ptr [esi + 8], 0xef24dc }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c3910a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c390f6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c390f6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c3910a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c39120
extern "C" __declspec(naked) void asm_00c39120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xeef8e4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef24fc }
	__asm { mov dword ptr [esi + 8], 0xef250c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c391ca }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c391b6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c391b6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c391ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c391e0
extern "C" __declspec(naked) void asm_00c391e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xef21a0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef22f8 }
	__asm { mov dword ptr [esi + 8], 0xef2308 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c3928a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c39276 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c39276: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c3928a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c392a0
extern "C" __declspec(naked) void asm_00c392a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xef21a8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef252c }
	__asm { mov dword ptr [esi + 8], 0xef253c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c3934a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c39336 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c39336: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c3934a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c39360
extern "C" __declspec(naked) void asm_00c39360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xeef984 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xef249c }
	__asm { mov dword ptr [esi + 8], 0xef24ac }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c3940a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00c393f6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c393f6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c3940a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00c39420
extern "C" __declspec(naked) void asm_00c39420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x129a1f0 }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c394c3 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00c394c3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c394ae }
	__asm { push 0x52 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c394c3 }
	__asm { L_00c394ae: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe58be8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c394c3: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c3af90
extern "C" __declspec(naked) void asm_00c3af90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { push edi }
	__asm { jne L_00c3afcd }
	__asm { xor eax, eax }
	__asm { jmp L_00c3afdb }
	__asm { L_00c3afcd: }
	__asm { mov eax, edx }
	__asm { lea edi, [eax + 1] }
	__asm { L_00c3afd2: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00c3afd2 }
	__asm { sub eax, edi }
	__asm { L_00c3afdb: }
	__asm { push eax }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004038a0 }
	__asm { mov al, byte ptr [esi + 8] }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00c3b035 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c3b035: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}
