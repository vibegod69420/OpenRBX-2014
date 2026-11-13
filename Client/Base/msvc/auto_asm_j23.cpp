// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012fc540[];
extern "C" char g_012fc544[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008ad570
extern "C" __declspec(naked) void asm_008ad570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d8be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8ad4b0 }
	__asm { push 0x12fc538 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fc544] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008ad5d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc544], eax }
	__asm { push 0xe6ca48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fc540], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008ad5d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fc540] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc5ac[];
extern "C" char g_012fc5b0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008ad810
extern "C" __declspec(naked) void asm_008ad810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d92e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fc5b0] }
	__asm { test al, 1 }
	__asm { jne L_008ad852 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc5b0], eax }
	__asm { push 0xe6cbe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fc5ac], eax }
	__asm { L_008ad852: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x008ada30
extern "C" __declspec(naked) void asm_008ada30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008ada7b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ada7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc5ac[];
extern "C" char g_012fc5b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008adc30
extern "C" __declspec(naked) void asm_008adc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d92e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8ad810 }
	__asm { push 0x12fc5a4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fc5b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008adc92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc5b0], eax }
	__asm { push 0xe6cbe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fc5ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008adc92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fc5ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008aeea0();
// FUNCTION: ROBLOXSTUDIO 0x008ae0e0
extern "C" __declspec(naked) void asm_008ae0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { lea eax, [edi*2 + 2] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp eax, ebx }
	__asm { jge L_008ae12a }
	__asm { nop }
	__asm { L_008ae100: }
	__asm { mov ecx, dword ptr [esi + eax*4 - 4] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp ecx, dword ptr [edx] }
	__asm { jge L_008ae114 }
	__asm { dec eax }
	__asm { L_008ae114: }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov dword ptr [esi + edi*4], ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, ebx }
	__asm { jl L_008ae100 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_008ae12a: }
	__asm { jne L_008ae136 }
	__asm { mov eax, dword ptr [esi + ebx*4 - 4] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { lea edi, [ebx - 1] }
	__asm { L_008ae136: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_008aeea0 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008af2c0
extern "C" __declspec(naked) void asm_008af2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d9c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { nop }
	__asm { L_008af2f0: }
	__asm { cmp esi, ebx }
	__asm { je L_008af31f }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_008af307 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { L_008af307: }
	__asm { add edi, 0x24 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { add esi, 0x24 }
	__asm { jmp L_008af2f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_008af31f: }
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

extern "C" char g_00e10388[];
// FUNCTION: ROBLOXSTUDIO 0x008af340
extern "C" __declspec(naked) void asm_008af340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd477d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008af3bb }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edi, [ecx + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { push edi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { pop edi }
	__asm { L_008af3bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008afcb0();
// FUNCTION: ROBLOXSTUDIO 0x008af410
extern "C" __declspec(naked) void asm_008af410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af422 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af424 }
	__asm { L_008af422: }
	__asm { xor eax, eax }
	__asm { L_008af424: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af47a }
	__asm { test eax, eax }
	__asm { je L_008af47a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af47a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af465 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af47a }
	__asm { L_008af465: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af47a: }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008afcb0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008afd20();
// FUNCTION: ROBLOXSTUDIO 0x008af490
extern "C" __declspec(naked) void asm_008af490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af4a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af4a4 }
	__asm { L_008af4a2: }
	__asm { xor eax, eax }
	__asm { L_008af4a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af4fa }
	__asm { test eax, eax }
	__asm { je L_008af4fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af4fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af4e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af4fa }
	__asm { L_008af4e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af4fa: }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008afd20 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008afd90();
// FUNCTION: ROBLOXSTUDIO 0x008af510
extern "C" __declspec(naked) void asm_008af510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af522 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af524 }
	__asm { L_008af522: }
	__asm { xor eax, eax }
	__asm { L_008af524: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af57a }
	__asm { test eax, eax }
	__asm { je L_008af57a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af57a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af565 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af57a }
	__asm { L_008af565: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af57a: }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008afd90 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008afe00();
// FUNCTION: ROBLOXSTUDIO 0x008af590
extern "C" __declspec(naked) void asm_008af590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af5a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af5a4 }
	__asm { L_008af5a2: }
	__asm { xor eax, eax }
	__asm { L_008af5a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af5fa }
	__asm { test eax, eax }
	__asm { je L_008af5fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af5fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af5e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af5fa }
	__asm { L_008af5e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af5fa: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008afe00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008afe80();
// FUNCTION: ROBLOXSTUDIO 0x008af610
extern "C" __declspec(naked) void asm_008af610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af622 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af624 }
	__asm { L_008af622: }
	__asm { xor eax, eax }
	__asm { L_008af624: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af67a }
	__asm { test eax, eax }
	__asm { je L_008af67a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af67a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af665 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af67a }
	__asm { L_008af665: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af67a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008afe80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008aff00();
// FUNCTION: ROBLOXSTUDIO 0x008af690
extern "C" __declspec(naked) void asm_008af690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af6a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af6a4 }
	__asm { L_008af6a2: }
	__asm { xor eax, eax }
	__asm { L_008af6a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af6fa }
	__asm { test eax, eax }
	__asm { je L_008af6fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af6fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af6e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af6fa }
	__asm { L_008af6e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af6fa: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008aff00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008aff80();
// FUNCTION: ROBLOXSTUDIO 0x008af710
extern "C" __declspec(naked) void asm_008af710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008af729 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af72b }
	__asm { L_008af729: }
	__asm { xor eax, eax }
	__asm { L_008af72b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_008af781 }
	__asm { test eax, eax }
	__asm { je L_008af781 }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af781 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af76c }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af781 }
	__asm { L_008af76c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af781: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call fn_008aff80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0000();
// FUNCTION: ROBLOXSTUDIO 0x008af7a0
extern "C" __declspec(naked) void asm_008af7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af7b2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af7b4 }
	__asm { L_008af7b2: }
	__asm { xor eax, eax }
	__asm { L_008af7b4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af80a }
	__asm { test eax, eax }
	__asm { je L_008af80a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af80a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af7f5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af80a }
	__asm { L_008af7f5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af80a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0070();
// FUNCTION: ROBLOXSTUDIO 0x008af820
extern "C" __declspec(naked) void asm_008af820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af832 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af834 }
	__asm { L_008af832: }
	__asm { xor eax, eax }
	__asm { L_008af834: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af88a }
	__asm { test eax, eax }
	__asm { je L_008af88a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af88a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af875 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af88a }
	__asm { L_008af875: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af88a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b00f0();
// FUNCTION: ROBLOXSTUDIO 0x008af8a0
extern "C" __declspec(naked) void asm_008af8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008af8b9 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af8bb }
	__asm { L_008af8b9: }
	__asm { xor eax, eax }
	__asm { L_008af8bb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_008af911 }
	__asm { test eax, eax }
	__asm { je L_008af911 }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af911 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af8fc }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af911 }
	__asm { L_008af8fc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af911: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call fn_008b00f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0170();
// FUNCTION: ROBLOXSTUDIO 0x008af930
extern "C" __declspec(naked) void asm_008af930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af942 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af944 }
	__asm { L_008af942: }
	__asm { xor eax, eax }
	__asm { L_008af944: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008af99a }
	__asm { test eax, eax }
	__asm { je L_008af99a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008af99a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008af985 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008af99a }
	__asm { L_008af985: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008af99a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0170 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b01f0();
// FUNCTION: ROBLOXSTUDIO 0x008af9b0
extern "C" __declspec(naked) void asm_008af9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008af9c2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008af9c4 }
	__asm { L_008af9c2: }
	__asm { xor eax, eax }
	__asm { L_008af9c4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008afa1a }
	__asm { test eax, eax }
	__asm { je L_008afa1a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008afa1a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afa05 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afa1a }
	__asm { L_008afa05: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afa1a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b01f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0270();
// FUNCTION: ROBLOXSTUDIO 0x008afa30
extern "C" __declspec(naked) void asm_008afa30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008afa42 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008afa44 }
	__asm { L_008afa42: }
	__asm { xor eax, eax }
	__asm { L_008afa44: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008afa9a }
	__asm { test eax, eax }
	__asm { je L_008afa9a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008afa9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afa85 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afa9a }
	__asm { L_008afa85: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afa9a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0270 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b02f0();
// FUNCTION: ROBLOXSTUDIO 0x008afab0
extern "C" __declspec(naked) void asm_008afab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008afac2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008afac4 }
	__asm { L_008afac2: }
	__asm { xor eax, eax }
	__asm { L_008afac4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008afb1a }
	__asm { test eax, eax }
	__asm { je L_008afb1a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008afb1a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afb05 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afb1a }
	__asm { L_008afb05: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afb1a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b02f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0370();
// FUNCTION: ROBLOXSTUDIO 0x008afb30
extern "C" __declspec(naked) void asm_008afb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008afb42 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008afb44 }
	__asm { L_008afb42: }
	__asm { xor eax, eax }
	__asm { L_008afb44: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008afb9a }
	__asm { test eax, eax }
	__asm { je L_008afb9a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008afb9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afb85 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afb9a }
	__asm { L_008afb85: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afb9a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0370 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b03f0();
// FUNCTION: ROBLOXSTUDIO 0x008afbb0
extern "C" __declspec(naked) void asm_008afbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008afbc2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008afbc4 }
	__asm { L_008afbc2: }
	__asm { xor eax, eax }
	__asm { L_008afbc4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008afc1a }
	__asm { test eax, eax }
	__asm { je L_008afc1a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008afc1a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afc05 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afc1a }
	__asm { L_008afc05: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afc1a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b03f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d6030();
// FUNCTION: ROBLOXSTUDIO 0x008afe00
extern "C" __declspec(naked) void asm_008afe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008afe59 }
	__asm { call fn_007d6030 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008afe59 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afe44 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afe59 }
	__asm { L_008afe44: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afe59: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d57f0();
// FUNCTION: ROBLOXSTUDIO 0x008afe80
extern "C" __declspec(naked) void asm_008afe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008afed9 }
	__asm { call fn_007d57f0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008afed9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008afec4 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008afed9 }
	__asm { L_008afec4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008afed9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x008aff00
extern "C" __declspec(naked) void asm_008aff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008aff59 }
	__asm { call fn_007d5860 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008aff59 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008aff44 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008aff59 }
	__asm { L_008aff44: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008aff59: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00405b90();
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d58d0();
// FUNCTION: ROBLOXSTUDIO 0x008aff80
extern "C" __declspec(naked) void asm_008aff80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_008affe1 }
	__asm { call fn_007d58d0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008affe1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008affcc }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008affe1 }
	__asm { L_008affcc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008affe1: }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00405b90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007bc570();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x008b0000
extern "C" __declspec(naked) void asm_008b0000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_008b0059 }
	__asm { call fn_0088bd20 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0059 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0044 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0059 }
	__asm { L_008b0044: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0059: }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007bc570 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5940();
// FUNCTION: ROBLOXSTUDIO 0x008b0070
extern "C" __declspec(naked) void asm_008b0070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b00c9 }
	__asm { call fn_007d5940 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b00c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b00b4 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b00c9 }
	__asm { L_008b00b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b00c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00405b90();
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d60a0();
// FUNCTION: ROBLOXSTUDIO 0x008b00f0
extern "C" __declspec(naked) void asm_008b00f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_008b0151 }
	__asm { call fn_007d60a0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0151 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b013c }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0151 }
	__asm { L_008b013c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0151: }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00405b90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5a20();
// FUNCTION: ROBLOXSTUDIO 0x008b0170
extern "C" __declspec(naked) void asm_008b0170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b01c9 }
	__asm { call fn_007d5a20 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b01c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b01b4 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b01c9 }
	__asm { L_008b01b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b01c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5a90();
// FUNCTION: ROBLOXSTUDIO 0x008b01f0
extern "C" __declspec(naked) void asm_008b01f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b0249 }
	__asm { call fn_007d5a90 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0249 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0234 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0249 }
	__asm { L_008b0234: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0249: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5b00();
// FUNCTION: ROBLOXSTUDIO 0x008b0270
extern "C" __declspec(naked) void asm_008b0270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b02c9 }
	__asm { call fn_007d5b00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b02c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b02b4 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b02c9 }
	__asm { L_008b02b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b02c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5b70();
// FUNCTION: ROBLOXSTUDIO 0x008b02f0
extern "C" __declspec(naked) void asm_008b02f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b0349 }
	__asm { call fn_007d5b70 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0349 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0334 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0349 }
	__asm { L_008b0334: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0349: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x008b0370
extern "C" __declspec(naked) void asm_008b0370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b03c9 }
	__asm { call fn_007d5be0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b03c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b03b4 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b03c9 }
	__asm { L_008b03b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b03c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5c50();
// FUNCTION: ROBLOXSTUDIO 0x008b03f0
extern "C" __declspec(naked) void asm_008b03f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b0449 }
	__asm { call fn_007d5c50 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0449 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0434 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0449 }
	__asm { L_008b0434: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0449: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b0520
extern "C" __declspec(naked) void asm_008b0520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { ja L_008b055b }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { add dword ptr [esi + 4], 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b055b: }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6ce94 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b05d0
extern "C" __declspec(naked) void asm_008b05d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + 0xc] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { ja L_008b0605 }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b0605: }
	__asm { push 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6ce94 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0f10();
// FUNCTION: ROBLOXSTUDIO 0x008b0690
extern "C" __declspec(naked) void asm_008b0690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b06a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b06a4 }
	__asm { L_008b06a2: }
	__asm { xor eax, eax }
	__asm { L_008b06a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b06fa }
	__asm { test eax, eax }
	__asm { je L_008b06fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b06fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b06e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b06fa }
	__asm { L_008b06e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b06fa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0f10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0f80();
// FUNCTION: ROBLOXSTUDIO 0x008b0710
extern "C" __declspec(naked) void asm_008b0710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0722 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0724 }
	__asm { L_008b0722: }
	__asm { xor eax, eax }
	__asm { L_008b0724: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b077a }
	__asm { test eax, eax }
	__asm { je L_008b077a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b077a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0765 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b077a }
	__asm { L_008b0765: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b077a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0f80 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b0ff0();
// FUNCTION: ROBLOXSTUDIO 0x008b0790
extern "C" __declspec(naked) void asm_008b0790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b07a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b07a4 }
	__asm { L_008b07a2: }
	__asm { xor eax, eax }
	__asm { L_008b07a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b07fa }
	__asm { test eax, eax }
	__asm { je L_008b07fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b07fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b07e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b07fa }
	__asm { L_008b07e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b07fa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b0ff0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1060();
// FUNCTION: ROBLOXSTUDIO 0x008b0810
extern "C" __declspec(naked) void asm_008b0810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0822 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0824 }
	__asm { L_008b0822: }
	__asm { xor eax, eax }
	__asm { L_008b0824: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b087a }
	__asm { test eax, eax }
	__asm { je L_008b087a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b087a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0865 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b087a }
	__asm { L_008b0865: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b087a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1060 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b10d0();
// FUNCTION: ROBLOXSTUDIO 0x008b0890
extern "C" __declspec(naked) void asm_008b0890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b08a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b08a4 }
	__asm { L_008b08a2: }
	__asm { xor eax, eax }
	__asm { L_008b08a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b08fa }
	__asm { test eax, eax }
	__asm { je L_008b08fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b08fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b08e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b08fa }
	__asm { L_008b08e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b08fa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b10d0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1140();
// FUNCTION: ROBLOXSTUDIO 0x008b0910
extern "C" __declspec(naked) void asm_008b0910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0922 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0924 }
	__asm { L_008b0922: }
	__asm { xor eax, eax }
	__asm { L_008b0924: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b097a }
	__asm { test eax, eax }
	__asm { je L_008b097a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b097a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0965 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b097a }
	__asm { L_008b0965: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b097a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1140 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b11b0();
// FUNCTION: ROBLOXSTUDIO 0x008b0990
extern "C" __declspec(naked) void asm_008b0990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b09a2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b09a4 }
	__asm { L_008b09a2: }
	__asm { xor eax, eax }
	__asm { L_008b09a4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b09fa }
	__asm { test eax, eax }
	__asm { je L_008b09fa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b09fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b09e5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b09fa }
	__asm { L_008b09e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b09fa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b11b0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1220();
// FUNCTION: ROBLOXSTUDIO 0x008b0a10
extern "C" __declspec(naked) void asm_008b0a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0a22 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0a24 }
	__asm { L_008b0a22: }
	__asm { xor eax, eax }
	__asm { L_008b0a24: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0a7a }
	__asm { test eax, eax }
	__asm { je L_008b0a7a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0a7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0a65 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0a7a }
	__asm { L_008b0a65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0a7a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1220 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1290();
// FUNCTION: ROBLOXSTUDIO 0x008b0a90
extern "C" __declspec(naked) void asm_008b0a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0aa2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0aa4 }
	__asm { L_008b0aa2: }
	__asm { xor eax, eax }
	__asm { L_008b0aa4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0afa }
	__asm { test eax, eax }
	__asm { je L_008b0afa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0afa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0ae5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0afa }
	__asm { L_008b0ae5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0afa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1290 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1300();
// FUNCTION: ROBLOXSTUDIO 0x008b0b10
extern "C" __declspec(naked) void asm_008b0b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0b22 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0b24 }
	__asm { L_008b0b22: }
	__asm { xor eax, eax }
	__asm { L_008b0b24: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0b7a }
	__asm { test eax, eax }
	__asm { je L_008b0b7a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0b7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0b65 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0b7a }
	__asm { L_008b0b65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0b7a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1300 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1370();
// FUNCTION: ROBLOXSTUDIO 0x008b0b90
extern "C" __declspec(naked) void asm_008b0b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0ba2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0ba4 }
	__asm { L_008b0ba2: }
	__asm { xor eax, eax }
	__asm { L_008b0ba4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0bfa }
	__asm { test eax, eax }
	__asm { je L_008b0bfa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0bfa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0be5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0bfa }
	__asm { L_008b0be5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0bfa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1370 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b13e0();
// FUNCTION: ROBLOXSTUDIO 0x008b0c10
extern "C" __declspec(naked) void asm_008b0c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0c22 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0c24 }
	__asm { L_008b0c22: }
	__asm { xor eax, eax }
	__asm { L_008b0c24: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0c7a }
	__asm { test eax, eax }
	__asm { je L_008b0c7a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0c7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0c65 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0c7a }
	__asm { L_008b0c65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0c7a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b13e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1450();
// FUNCTION: ROBLOXSTUDIO 0x008b0c90
extern "C" __declspec(naked) void asm_008b0c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0ca2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0ca4 }
	__asm { L_008b0ca2: }
	__asm { xor eax, eax }
	__asm { L_008b0ca4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0cfa }
	__asm { test eax, eax }
	__asm { je L_008b0cfa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0cfa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0ce5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0cfa }
	__asm { L_008b0ce5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0cfa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1450 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b14c0();
// FUNCTION: ROBLOXSTUDIO 0x008b0d10
extern "C" __declspec(naked) void asm_008b0d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0d22 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0d24 }
	__asm { L_008b0d22: }
	__asm { xor eax, eax }
	__asm { L_008b0d24: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0d7a }
	__asm { test eax, eax }
	__asm { je L_008b0d7a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0d7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0d65 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0d7a }
	__asm { L_008b0d65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0d7a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b14c0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b1530();
// FUNCTION: ROBLOXSTUDIO 0x008b0d90
extern "C" __declspec(naked) void asm_008b0d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0da2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0da4 }
	__asm { L_008b0da2: }
	__asm { xor eax, eax }
	__asm { L_008b0da4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0dfa }
	__asm { test eax, eax }
	__asm { je L_008b0dfa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0dfa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0de5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0dfa }
	__asm { L_008b0de5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0dfa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b1530 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_008b15a0();
// FUNCTION: ROBLOXSTUDIO 0x008b0e10
extern "C" __declspec(naked) void asm_008b0e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0e22 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0e24 }
	__asm { L_008b0e22: }
	__asm { xor eax, eax }
	__asm { L_008b0e24: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0e7a }
	__asm { test eax, eax }
	__asm { je L_008b0e7a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0e7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0e65 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0e7a }
	__asm { L_008b0e65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0e7a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_008b15a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_00828000();
// FUNCTION: ROBLOXSTUDIO 0x008b0e90
extern "C" __declspec(naked) void asm_008b0e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { je L_008b0ea2 }
	__asm { add eax, 0x1c }
	__asm { jmp L_008b0ea4 }
	__asm { L_008b0ea2: }
	__asm { xor eax, eax }
	__asm { L_008b0ea4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_008b0efa }
	__asm { test eax, eax }
	__asm { je L_008b0efa }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_008b0efa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0ee5 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0efa }
	__asm { L_008b0ee5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0efa: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_00828000 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x008b0f10
extern "C" __declspec(naked) void asm_008b0f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b0f69 }
	__asm { call fn_007d5390 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0f69 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0f54 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0f69 }
	__asm { L_008b0f54: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0f69: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x008b0f80
extern "C" __declspec(naked) void asm_008b0f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b0fd9 }
	__asm { call fn_007d5470 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b0fd9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b0fc4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b0fd9 }
	__asm { L_008b0fc4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b0fd9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d54e0();
// FUNCTION: ROBLOXSTUDIO 0x008b0ff0
extern "C" __declspec(naked) void asm_008b0ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1049 }
	__asm { call fn_007d54e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1049 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1034 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1049 }
	__asm { L_008b1034: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1049: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d6030();
// FUNCTION: ROBLOXSTUDIO 0x008b1060
extern "C" __declspec(naked) void asm_008b1060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b10b9 }
	__asm { call fn_007d6030 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b10b9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b10a4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b10b9 }
	__asm { L_008b10a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b10b9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d57f0();
// FUNCTION: ROBLOXSTUDIO 0x008b10d0
extern "C" __declspec(naked) void asm_008b10d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1129 }
	__asm { call fn_007d57f0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1129 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1114 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1129 }
	__asm { L_008b1114: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1129: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x008b1140
extern "C" __declspec(naked) void asm_008b1140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1199 }
	__asm { call fn_007d5860 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1199 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1184 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1199 }
	__asm { L_008b1184: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1199: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d58d0();
// FUNCTION: ROBLOXSTUDIO 0x008b11b0
extern "C" __declspec(naked) void asm_008b11b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1209 }
	__asm { call fn_007d58d0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1209 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b11f4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1209 }
	__asm { L_008b11f4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1209: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x008b1220
extern "C" __declspec(naked) void asm_008b1220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1279 }
	__asm { call fn_0088bd20 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1279 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1264 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1279 }
	__asm { L_008b1264: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1279: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5940();
// FUNCTION: ROBLOXSTUDIO 0x008b1290
extern "C" __declspec(naked) void asm_008b1290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b12e9 }
	__asm { call fn_007d5940 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b12e9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b12d4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b12e9 }
	__asm { L_008b12d4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b12e9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d60a0();
// FUNCTION: ROBLOXSTUDIO 0x008b1300
extern "C" __declspec(naked) void asm_008b1300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1359 }
	__asm { call fn_007d60a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1359 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1344 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1359 }
	__asm { L_008b1344: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1359: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5a20();
// FUNCTION: ROBLOXSTUDIO 0x008b1370
extern "C" __declspec(naked) void asm_008b1370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b13c9 }
	__asm { call fn_007d5a20 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b13c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b13b4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b13c9 }
	__asm { L_008b13b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b13c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5a90();
// FUNCTION: ROBLOXSTUDIO 0x008b13e0
extern "C" __declspec(naked) void asm_008b13e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1439 }
	__asm { call fn_007d5a90 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1439 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1424 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1439 }
	__asm { L_008b1424: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1439: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5b00();
// FUNCTION: ROBLOXSTUDIO 0x008b1450
extern "C" __declspec(naked) void asm_008b1450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b14a9 }
	__asm { call fn_007d5b00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b14a9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1494 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b14a9 }
	__asm { L_008b1494: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b14a9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5b70();
// FUNCTION: ROBLOXSTUDIO 0x008b14c0
extern "C" __declspec(naked) void asm_008b14c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1519 }
	__asm { call fn_007d5b70 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1519 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1504 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1519 }
	__asm { L_008b1504: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1519: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x008b1530
extern "C" __declspec(naked) void asm_008b1530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b1589 }
	__asm { call fn_007d5be0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b1589 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b1574 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b1589 }
	__asm { L_008b1574: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b1589: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5c50();
// FUNCTION: ROBLOXSTUDIO 0x008b15a0
extern "C" __declspec(naked) void asm_008b15a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008b15f9 }
	__asm { call fn_007d5c50 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008b15f9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b15e4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b15f9 }
	__asm { L_008b15e4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b15f9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008b31b0
extern "C" __declspec(naked) void asm_008b31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_008b31db }
	__asm { L_008b31c7: }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { jae L_008b31d1 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008b31d5 }
	__asm { L_008b31d1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008b31d5: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_008b31c7 }
	__asm { L_008b31db: }
	__asm { cmp ecx, esi }
	__asm { je L_008b31e7 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { jae L_008b31ea }
	__asm { L_008b31e7: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { L_008b31ea: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { jne L_008b31f9 }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b31f9: }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e103b0[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b35d0
extern "C" __declspec(naked) void asm_008b35d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { cdq }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov eax, edx }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp dword ptr [edi + 8], esi }
	__asm { jne L_008b3606 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [edi + 0xc], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jne L_008b3606 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b3606: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe36588 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b3780
extern "C" __declspec(naked) void asm_008b3780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { lea esi, [edx + 1] }
	__asm { cmp esi, dword ptr [ecx + 8] }
	__asm { ja L_008b37ac }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov al, byte ptr [eax + edx] }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movsx eax, al }
	__asm { pop esi }
	__asm { cmp eax, ecx }
	__asm { jne L_008b37cd }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b37ac: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6ce94 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_008b37cd: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6cfb8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_008b3200();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x008b7d80
extern "C" __declspec(naked) void asm_008b7d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b7da2 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b7da2: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { jb L_008b7dbb }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_008b7dbb: }
	__asm { add eax, ebx }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b7dca }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b7dca: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 4], ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x008b8520
extern "C" __declspec(naked) void asm_008b8520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp byte ptr [eax], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0x100f9d0 }
	__asm { mov ecx, 0xf14aa8 }
	__asm { cmove edx, ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_008b856a }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b856a: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_008b8570: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_008b8570 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b8af0();
// FUNCTION: ROBLOXSTUDIO 0x008b85e0
extern "C" __declspec(naked) void asm_008b85e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2de60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { je L_008b8636 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b8af0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0x8b8636 }
	__asm { ret }
	__asm { L_008b8636: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b8ba0();
// FUNCTION: ROBLOXSTUDIO 0x008b8650
extern "C" __declspec(naked) void asm_008b8650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2de70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { je L_008b86a6 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b8ba0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0x8b86a6 }
	__asm { ret }
	__asm { L_008b86a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" void fn_00841fd0();
extern "C" void fn_0096e8d0();
// FUNCTION: ROBLOXSTUDIO 0x008b8ba0
extern "C" __declspec(naked) void asm_008b8ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ae08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008b8bc8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008b8bca }
	__asm { L_008b8bc8: }
	__asm { mov ecx, eax }
	__asm { L_008b8bca: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0096e8d0 }
	__asm { test al, al }
	__asm { je L_008b8bf6 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b8bf6: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x2c], 0xe5d3b8 }
	__asm { mov dword ptr [ebp - 0x20], 0x12be0b8 }
	__asm { mov dword ptr [ebp - 0x1c], 0x11efd14 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00841fd0 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x008b9c60
extern "C" __declspec(naked) void asm_008b9c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_008b9c95 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_008b9c9f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_008b9c9f }
	__asm { L_008b9c95: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008b9c9f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4b04[];
extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ba650
extern "C" __declspec(naked) void asm_008ba650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe6d324 }
	__asm { mov dword ptr [esi + 4], 0xe6d3a0 }
	__asm { mov dword ptr [esi + 0x18], 0xe6d3a8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6d3b4 }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ba6e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ba6e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eb0e0 }
	__asm { inc dword ptr [g_012e4b04] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008bad70
extern "C" __declspec(naked) void asm_008bad70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23c6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008bade5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008bade5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12eb0e0 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x008bbcc0
extern "C" __declspec(naked) void asm_008bbcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_008bbd02 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_008bbd02 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_008bbcea }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_008bbcea: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_008bbd1b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008bbd02: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_008bbd10 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_008bbd10: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_008bbd1b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008bbd1b: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008bded0();
// FUNCTION: ROBLOXSTUDIO 0x008bde90
extern "C" __declspec(naked) void asm_008bde90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jne L_008bdeaf }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_008bded0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008bdeaf: }
	__asm { mov edx, esi }
	__asm { lea ecx, [edx + 1] }
	__asm { L_008bdeb4: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_008bdeb4 }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008bded0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fcdf0[];
extern "C" char g_012fce0c[];
extern "C" void fn_008bed10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008bf6f0
extern "C" __declspec(naked) void asm_008bf6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2e6ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fce0c] }
	__asm { test al, 1 }
	__asm { jne L_008bf748 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fce0c], eax }
	__asm { push 0 }
	__asm { push 0xe6ed88 }
	__asm { mov ecx, 0x12fcdf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bed10 }
	__asm { push 0xdefa50 }
	__asm { mov dword ptr [g_012fcdf0], 0xe6f200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008bf748: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fcdf0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fce10[];
extern "C" char g_012fce2c[];
extern "C" void fn_008bede0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008bf760
extern "C" __declspec(naked) void asm_008bf760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2e6ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fce2c] }
	__asm { test al, 1 }
	__asm { jne L_008bf7b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fce2c], eax }
	__asm { push 0 }
	__asm { push 0xe6ed98 }
	__asm { mov ecx, 0x12fce10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bede0 }
	__asm { push 0xdefa60 }
	__asm { mov dword ptr [g_012fce10], 0xe6f208 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008bf7b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fce10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcdd0[];
extern "C" char g_012fcdec[];
extern "C" void fn_008beeb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008bf7d0
extern "C" __declspec(naked) void asm_008bf7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2e6ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fcdec] }
	__asm { test al, 1 }
	__asm { jne L_008bf828 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcdec], eax }
	__asm { push 0 }
	__asm { push 0x1032f48 }
	__asm { mov ecx, 0x12fcdd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008beeb0 }
	__asm { push 0xdefa70 }
	__asm { mov dword ptr [g_012fcdd0], 0xe6f1d4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008bf828: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fcdd0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcdc8[];
extern "C" void fn_0043fa00();
extern "C" void fn_0049a1e0();
extern "C" void fn_006b97e0();
extern "C" void fn_006bc950();
extern "C" void fn_008c0ac0();
// FUNCTION: ROBLOXSTUDIO 0x008c00e0
extern "C" __declspec(naked) void asm_008c00e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e7ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0043fa00 }
	__asm { push 0x131b1b0 }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe52388 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_008c0138 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_008c0138: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push 0x12fcdc8 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0x12fcdc8 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c0ac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [g_012fcdc8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043fa70();
extern "C" void fn_006bc920();
// FUNCTION: ROBLOXSTUDIO 0x008c0350
extern "C" __declspec(naked) void asm_008c0350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e248 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c0382 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008c0382: }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcdb8[];
extern "C" void fn_006bc920();
extern "C" void fn_008d8680();
extern "C" void fn_00a392a0();
// FUNCTION: ROBLOXSTUDIO 0x008c03b0
extern "C" __declspec(naked) void asm_008c03b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e79b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_008c03f4 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push 0xffffd8f0 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0xc }
	__asm { jmp L_008c040d }
	__asm { L_008c03f4: }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_008d8680 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0x10 }
	__asm { L_008c040d: }
	__asm { push 0x12fcdcc }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc96e[];
extern "C" char g_012fcdc8[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x008c0430
extern "C" __declspec(naked) void asm_008c0430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_008c046a }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xe6eff0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008c046a: }
	__asm { push 0x12fcdc8 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0x12fcdc8 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008c04a4 }
	__asm { L_008c0490: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov esi, dword ptr [esi + 0x10] }
	__asm { test esi, esi }
	__asm { jne L_008c0490 }
	__asm { L_008c04a4: }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [g_012fcdc8], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcdb8[];
extern "C" void fn_008c0570();
extern "C" void fn_008d8680();
extern "C" void fn_00a392a0();
// FUNCTION: ROBLOXSTUDIO 0x008c04d0
extern "C" __declspec(naked) void asm_008c04d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e808 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe61960 }
	__asm { mov edx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_008c054a }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_008c054a }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_008c054a }
	__asm { cmp byte ptr [g_012fcdb8], al }
	__asm { jne L_008c0531 }
	__asm { push edx }
	__asm { push 0xffffd8f0 }
	__asm { push dword ptr [ecx + 8] }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0xc }
	__asm { jmp L_008c054a }
	__asm { L_008c0531: }
	__asm { push dword ptr [ecx + 8] }
	__asm { call fn_008d8680 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0x10 }
	__asm { L_008c054a: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcdc8[];
extern "C" void fn_0043fa70();
extern "C" void fn_0049a1e0();
extern "C" void fn_006bc920();
extern "C" void fn_008c1880();
// FUNCTION: ROBLOXSTUDIO 0x008c0570
extern "C" __declspec(naked) void asm_008c0570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e7ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe52388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x12fcdc8 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0x12fcdc8 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c1880 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov byte ptr [g_012fcdc8], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_008c05e3 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008c05e3: }
	__asm { push 0x131b1b0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcdc8[];
extern "C" void fn_0049a1e0();
// FUNCTION: ROBLOXSTUDIO 0x008c0ff0
extern "C" __declspec(naked) void asm_008c0ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x12fcdc8 }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0x12fcdc8 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008c1049 }
	__asm { L_008c1035: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov esi, dword ptr [esi + 0x10] }
	__asm { test esi, esi }
	__asm { jne L_008c1035 }
	__asm { L_008c1049: }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [g_012fcdc8], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c1ea0
extern "C" __declspec(naked) void asm_008c1ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e9c0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c1ef8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6f620 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c1efa }
	__asm { L_008c1ef8: }
	__asm { xor eax, eax }
	__asm { L_008c1efa: }
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
	__asm { je L_008c1f1e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008c1f1e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c1f30
extern "C" __declspec(naked) void asm_008c1f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e9d0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c1f88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6f608 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c1f8a }
	__asm { L_008c1f88: }
	__asm { xor eax, eax }
	__asm { L_008c1f8a: }
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
	__asm { je L_008c1fae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008c1fae: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e4b28[];
extern "C" char g_012e5564[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008c2a10
extern "C" __declspec(naked) void asm_008c2a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e9f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe6f22c }
	__asm { mov dword ptr [esi + 4], 0xe6f2a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe6f2ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe6f2b8 }
	__asm { mov eax, dword ptr [g_012e5564] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008c2aa9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6f218 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008c2aa9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e5438 }
	__asm { inc dword ptr [g_012e4b28] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e5564[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008c2cf0
extern "C" __declspec(naked) void asm_008c2cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ea0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5564] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008c2d65 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6f218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008c2d65: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e5438 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_008c4710();
// FUNCTION: ROBLOXSTUDIO 0x008c3470
extern "C" __declspec(naked) void asm_008c3470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c4710 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c34e2 }
	__asm { add esi, 5 }
	__asm { je L_008c34b2 }
	__asm { add esi, -5 }
	__asm { jmp L_008c34b4 }
	__asm { L_008c34b2: }
	__asm { xor esi, esi }
	__asm { L_008c34b4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c34e1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c34e1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c34e1: }
	__asm { pop edi }
	__asm { L_008c34e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_008c4aa0();
// FUNCTION: ROBLOXSTUDIO 0x008c3500
extern "C" __declspec(naked) void asm_008c3500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c4aa0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c3572 }
	__asm { add esi, 5 }
	__asm { je L_008c3542 }
	__asm { add esi, -5 }
	__asm { jmp L_008c3544 }
	__asm { L_008c3542: }
	__asm { xor esi, esi }
	__asm { L_008c3544: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c3571 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c3571 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c3571: }
	__asm { pop edi }
	__asm { L_008c3572: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_008c4e30();
// FUNCTION: ROBLOXSTUDIO 0x008c3590
extern "C" __declspec(naked) void asm_008c3590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c4e30 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c3602 }
	__asm { add esi, 5 }
	__asm { je L_008c35d2 }
	__asm { add esi, -5 }
	__asm { jmp L_008c35d4 }
	__asm { L_008c35d2: }
	__asm { xor esi, esi }
	__asm { L_008c35d4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c3601 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c3601 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c3601: }
	__asm { pop edi }
	__asm { L_008c3602: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_008c51c0();
// FUNCTION: ROBLOXSTUDIO 0x008c3620
extern "C" __declspec(naked) void asm_008c3620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c51c0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c3692 }
	__asm { add esi, 5 }
	__asm { je L_008c3662 }
	__asm { add esi, -5 }
	__asm { jmp L_008c3664 }
	__asm { L_008c3662: }
	__asm { xor esi, esi }
	__asm { L_008c3664: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c3691 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c3691 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c3691: }
	__asm { pop edi }
	__asm { L_008c3692: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x008c3aa0
extern "C" __declspec(naked) void asm_008c3aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_008c3aec }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_008c3aec: }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ecx + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { fstp qword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x008c3b20
extern "C" __declspec(naked) void asm_008c3b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_008c3b6c }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x14], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_008c3b6c: }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ecx + 8] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fstp qword ptr [esp] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0131ae80[];
extern "C" char g_0131ae84[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008c5790
extern "C" __declspec(naked) void asm_008c5790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ee8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x43ec90 }
	__asm { push 0x131ae88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ae80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008c57f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ae80], eax }
	__asm { push 0xe6f214 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ae84], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c57f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ae84] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcfb8[];
extern "C" char g_012fcfbc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c6590
extern "C" __declspec(naked) void asm_008c6590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2eeae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fcfbc] }
	__asm { test al, 1 }
	__asm { jne L_008c6603 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfbc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c65ee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c65ee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c6603: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fcfb8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcfb0[];
extern "C" char g_012fcfb4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c6620
extern "C" __declspec(naked) void asm_008c6620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2eece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fcfb4] }
	__asm { test al, 1 }
	__asm { jne L_008c6693 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfb4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c667e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfb0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c667e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfb0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c6693: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fcfb0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcfc0[];
extern "C" char g_012fcfc4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c66b0
extern "C" __declspec(naked) void asm_008c66b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2eeee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fcfc4] }
	__asm { test al, 1 }
	__asm { jne L_008c6723 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfc4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c670e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfc0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c670e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfc0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c6723: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fcfc0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcfe0[];
extern "C" char g_012fcfe4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c6740
extern "C" __declspec(naked) void asm_008c6740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ef0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fcfe4] }
	__asm { test al, 1 }
	__asm { jne L_008c67b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfe4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c679e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfe0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c679e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfe0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c67b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fcfe0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008c3df0();
extern "C" void fn_008c6970();
// FUNCTION: ROBLOXSTUDIO 0x008c68b0
extern "C" __declspec(naked) void asm_008c68b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, 1 }
	__asm { jne L_008c68d8 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { test eax, eax }
	__asm { je L_008c68cb }
	__asm { cmp eax, 2 }
	__asm { jne L_008c6914 }
	__asm { L_008c68cb: }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { jne L_008c68fd }
	__asm { call fn_008c6970 }
	__asm { jmp L_008c68fd }
	__asm { L_008c68d8: }
	__asm { cmp edi, 2 }
	__asm { jne L_008c68e5 }
	__asm { cmp dword ptr [esi + 0x78], 1 }
	__asm { jne L_008c6914 }
	__asm { jmp L_008c68fd }
	__asm { L_008c68e5: }
	__asm { test edi, edi }
	__asm { jne L_008c68fd }
	__asm { fldz }
	__asm { fst qword ptr [esi + 0x90] }
	__asm { fst qword ptr [esi + 0x80] }
	__asm { fstp qword ptr [esi + 0x88] }
	__asm { L_008c68fd: }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { cmp eax, edi }
	__asm { je L_008c6914 }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xac] }
	__asm { mov dword ptr [esi + 0x78], edi }
	__asm { call fn_008c3df0 }
	__asm { L_008c6914: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x008c6f20
extern "C" __declspec(naked) void asm_008c6f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_008c6f72 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_008c6f7c }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_008c6f7c }
	__asm { L_008c6f72: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008c6f7c: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008c6fc0
extern "C" __declspec(naked) void asm_008c6fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push -1 }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea edi, [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_008c7016 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_008c7020 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_008c7020 }
	__asm { L_008c7016: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008c7020: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c71d0
extern "C" __declspec(naked) void asm_008c71d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f000 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c7228 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe72b34 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c722a }
	__asm { L_008c7228: }
	__asm { xor eax, eax }
	__asm { L_008c722a: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c7260
extern "C" __declspec(naked) void asm_008c7260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f010 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c72b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe72ab4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c72ba }
	__asm { L_008c72b8: }
	__asm { xor eax, eax }
	__asm { L_008c72ba: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c72f0
extern "C" __declspec(naked) void asm_008c72f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f020 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c7348 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe72b1c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c734a }
	__asm { L_008c7348: }
	__asm { xor eax, eax }
	__asm { L_008c734a: }
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

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x008c7380
extern "C" __declspec(naked) void asm_008c7380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { lea esi, [edx + 0x10] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_008c73d2 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_008c73dc }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_008c73dc }
	__asm { L_008c73d2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008c73dc: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c7dc0
extern "C" __declspec(naked) void asm_008c7dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f050 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c7e18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe72acc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c7e1a }
	__asm { L_008c7e18: }
	__asm { xor eax, eax }
	__asm { L_008c7e1a: }
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
	__asm { je L_008c7e3e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008c7e3e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_008cc160();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c8250
extern "C" __declspec(naked) void asm_008c8250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f0c0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c82a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe72b04 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c82aa }
	__asm { L_008c82a8: }
	__asm { xor eax, eax }
	__asm { L_008c82aa: }
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
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008cc160 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c82e0
extern "C" __declspec(naked) void asm_008c82e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f0d0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c8338 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe72ae4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008c833a }
	__asm { L_008c8338: }
	__asm { xor eax, eax }
	__asm { L_008c833a: }
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
	__asm { je L_008c835e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008c835e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x008c88d0
extern "C" __declspec(naked) void asm_008c88d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_008c8927 }
	__asm { mov dword ptr [edx], esi }
	__asm { test byte ptr [edx], 1 }
	__asm { je L_008c8913 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008c8927 }
	__asm { L_008c8913: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ecx + 8] }
	__asm { and esi, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c8927: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_008c7410();
extern "C" void fn_008d1d20();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c8b50
extern "C" __declspec(naked) void asm_008c8b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f151 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_008d1d20 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_008c8ba3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008c7410 }
	__asm { L_008c8ba3: }
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

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cada0
extern "C" __declspec(naked) void asm_008cada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_008cadf7 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_008c00e0 }
	__asm { jmp L_008cadf9 }
	__asm { L_008cadf7: }
	__asm { xor esi, esi }
	__asm { L_008cadf9: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_004671d0();
extern "C" void fn_008d6110();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cc160
extern "C" __declspec(naked) void asm_008cc160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_008cc1b9 }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_004671d0 }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_008d6110 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { L_008cc1b9: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00463960();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x008ccab0
extern "C" __declspec(naked) void asm_008ccab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_008ccb01 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_008ccad0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_008ccad2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_008ccad2 }
	__asm { L_008ccad0: }
	__asm { mov eax, ecx }
	__asm { L_008ccad2: }
	__asm { test eax, eax }
	__asm { je L_008ccb01 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_008ccb01 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008ccb01 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_008ccb01 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00463960 }
	__asm { L_008ccb01: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_004a4830();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x008ccb10
extern "C" __declspec(naked) void asm_008ccb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_008ccb61 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_008ccb30 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_008ccb32 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_008ccb32 }
	__asm { L_008ccb30: }
	__asm { mov eax, ecx }
	__asm { L_008ccb32: }
	__asm { test eax, eax }
	__asm { je L_008ccb61 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_008ccb61 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008ccb61 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_008ccb61 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_004a4830 }
	__asm { L_008ccb61: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x008ccfc0
extern "C" __declspec(naked) void asm_008ccfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_008cd00d }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jg L_008cd00d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008ccffc }
	__asm { push 0x9b }
	__asm { push 0x10027e0 }
	__asm { push 0x1007e84 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008cd00d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008ccffc: }
	__asm { movzx eax, al }
	__asm { push 0x1007e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008cd00d: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008cd02a }
	__asm { test esi, esi }
	__asm { je L_008cd02a }
	__asm { lea ecx, [esi - 4] }
	__asm { test ecx, ecx }
	__asm { je L_008cd02a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_008cd02a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c64[];
extern "C" char g_012eb46c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008cdad0
extern "C" __declspec(naked) void asm_008cdad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f646 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe6f70c }
	__asm { mov dword ptr [esi + 4], 0xe6f784 }
	__asm { mov dword ptr [esi + 0x18], 0xe6f78c }
	__asm { mov dword ptr [esi + 0x1c], 0xe6f798 }
	__asm { mov eax, dword ptr [g_012eb46c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008cdb69 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb46c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e550 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb340 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008cdb69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eb340 }
	__asm { inc dword ptr [g_012e4c64] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012eb46c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008cdf50
extern "C" __declspec(naked) void asm_008cdf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f65e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb46c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008cdfc5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb46c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6e550 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb340 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008cdfc5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12eb340 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ce270
extern "C" __declspec(naked) void asm_008ce270()
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
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008ce2ec }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ce2ec: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_008ce2fd }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ce2fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_008cf770();
extern "C" void fn_008d01b0();
// FUNCTION: ROBLOXSTUDIO 0x008ce690
extern "C" __declspec(naked) void asm_008ce690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f6a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008cf770 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008ce6f8 }
	__asm { test al, 1 }
	__asm { jne L_008ce6f1 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008ce6f1 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008ce6f1: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_008ce6f8: }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_008d4d70();
// FUNCTION: ROBLOXSTUDIO 0x008cfe30
extern "C" __declspec(naked) void asm_008cfe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008d4d70 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008cfea2 }
	__asm { add esi, 5 }
	__asm { je L_008cfe72 }
	__asm { add esi, -5 }
	__asm { jmp L_008cfe74 }
	__asm { L_008cfe72: }
	__asm { xor esi, esi }
	__asm { L_008cfe74: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008cfea1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008cfea1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008cfea1: }
	__asm { pop edi }
	__asm { L_008cfea2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_008d5100();
// FUNCTION: ROBLOXSTUDIO 0x008cfec0
extern "C" __declspec(naked) void asm_008cfec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008d5100 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008cff32 }
	__asm { add esi, 5 }
	__asm { je L_008cff02 }
	__asm { add esi, -5 }
	__asm { jmp L_008cff04 }
	__asm { L_008cff02: }
	__asm { xor esi, esi }
	__asm { L_008cff04: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008cff31 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008cff31 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008cff31: }
	__asm { pop edi }
	__asm { L_008cff32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008d01b0();
// FUNCTION: ROBLOXSTUDIO 0x008d0a30
extern "C" __declspec(naked) void asm_008d0a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f1cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008d0a7d }
	__asm { test al, 1 }
	__asm { jne L_008d0a76 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x50] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008d0a76 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008d0a76: }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { L_008d0a7d: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d0aa0
extern "C" __declspec(naked) void asm_008d0aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_008d0aeb }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_008d0aeb: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008d0afb }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d0afb: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x008d10c0
extern "C" __declspec(naked) void asm_008d10c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_008d110c }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_008d110c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d1ec0
extern "C" __declspec(naked) void asm_008d1ec0()
{
	__asm { L_008d1ec0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, ecx }
	__asm { mov edi, esi }
	__asm { jne L_008d1f13 }
	__asm { L_008d1ed3: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_008d1ec0 }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { mov edi, dword ptr [edi] }
	__asm { jb L_008d1ef0 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d1ef0: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { je L_008d1ed3 }
	__asm { L_008d1f13: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0084aad0();
extern "C" void fn_008d2440();
// FUNCTION: ROBLOXSTUDIO 0x008d2550
extern "C" __declspec(naked) void asm_008d2550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esi, ebx }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_008d25b8 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x2492492 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_008d25a5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008d25a5: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0084aad0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_008d2440 }
	__asm { L_008d25b8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d4960
extern "C" __declspec(naked) void asm_008d4960()
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
	__asm { L_008d4970: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_008d497b }
	__asm { add esi, -0x18 }
	__asm { jmp L_008d497d }
	__asm { L_008d497b: }
	__asm { xor esi, esi }
	__asm { L_008d497d: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008d4992 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d4992: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_008d4970 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
