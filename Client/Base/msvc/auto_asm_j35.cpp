// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00933390();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9d1a0
extern "C" __declspec(naked) void asm_00b9d1a0()
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xed6fec }
	__asm { mov dword ptr [esi + 4], 0xed7048 }
	__asm { mov dword ptr [esi + 0x1c], 0xed707c }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00b9d1f5 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xed7140 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b9d1f5: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933390 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b9d212 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b9d212: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f1ac[];
extern "C" char g_0130f1b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b9d320
extern "C" __declspec(naked) void asm_00b9d320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c49e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb9cfe0 }
	__asm { push 0x130f1a4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f1b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9d382 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f1b0], eax }
	__asm { push 0xed6fe0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f1ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9d382: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f1ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f104[];
extern "C" char g_0130f108[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b9d3a0
extern "C" __declspec(naked) void asm_00b9d3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c4be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb942a0 }
	__asm { push 0x130f054 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f108] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9d402 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f108], eax }
	__asm { push 0xed6fdc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f104], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9d402: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f104] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9def0
extern "C" __declspec(naked) void asm_00b9def0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c520 }
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
	__asm { je L_00b9df48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed7354 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9df4a }
	__asm { L_00b9df48: }
	__asm { xor eax, eax }
	__asm { L_00b9df4a: }
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
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9df80
extern "C" __declspec(naked) void asm_00b9df80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c530 }
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
	__asm { je L_00b9dfd8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed733c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9dfda }
	__asm { L_00b9dfd8: }
	__asm { xor eax, eax }
	__asm { L_00b9dfda: }
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
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00618ac0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9e690
extern "C" __declspec(naked) void asm_00b9e690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c5b0 }
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
	__asm { je L_00b9e6e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed79dc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9e6ea }
	__asm { L_00b9e6e8: }
	__asm { xor eax, eax }
	__asm { L_00b9e6ea: }
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
	__asm { call fn_00618ac0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_009d86b0();
extern "C" void fn_009d8730();
extern "C" void fn_009d8740();
extern "C" void fn_009d8750();
extern "C" void fn_009d8ac0();
extern "C" void fn_009d8ad0();
extern "C" void fn_009d8ef0();
// FUNCTION: ROBLOXSTUDIO 0x00b9edd0
extern "C" __declspec(naked) void asm_00b9edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_009d8750 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00b9ee31 }
	__asm { mov ecx, edi }
	__asm { call fn_009d8740 }
	__asm { cmp esi, eax }
	__asm { je L_00b9ee29 }
	__asm { mov ecx, edi }
	__asm { call fn_009d8ad0 }
	__asm { cmp esi, eax }
	__asm { je L_00b9ee29 }
	__asm { mov ecx, edi }
	__asm { call fn_009d8730 }
	__asm { cmp esi, eax }
	__asm { je L_00b9ee29 }
	__asm { mov ecx, edi }
	__asm { call fn_009d8ac0 }
	__asm { cmp esi, eax }
	__asm { je L_00b9ee29 }
	__asm { mov ecx, edi }
	__asm { call fn_009d8ef0 }
	__asm { cmp esi, eax }
	__asm { je L_00b9ee29 }
	__asm { mov ecx, edi }
	__asm { call fn_009d86b0 }
	__asm { cmp esi, eax }
	__asm { jne L_00b9ee31 }
	__asm { L_00b9ee29: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b9ee31: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b980();
extern "C" void fn_00ba07c0();
// FUNCTION: ROBLOXSTUDIO 0x00ba0750
extern "C" __declspec(naked) void asm_00ba0750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b5b980 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test dl, dl }
	__asm { je L_00ba07a5 }
	__asm { test esi, esi }
	__asm { jne L_00ba07a5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba0794 }
	__asm { push 0xd0 }
	__asm { push 0xed7b88 }
	__asm { push 0x100a87c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba07a5 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00ba0794: }
	__asm { movzx eax, dl }
	__asm { push 0xed7bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba07a5: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ba07c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba1080
extern "C" __declspec(naked) void asm_00ba1080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00ba10db }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba10d5 }
	__asm { cmp dword ptr [ecx + 0x64], 0 }
	__asm { je L_00ba10d5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba10c4 }
	__asm { push 0x19 }
	__asm { push 0xed7cf0 }
	__asm { push 0xed7da0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba10d5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba10c4: }
	__asm { movzx eax, al }
	__asm { push 0xed7dd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba10d5: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax + 0x64], esi }
	__asm { L_00ba10db: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [eax], esi }
	__asm { inc dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba12c0
extern "C" __declspec(naked) void asm_00ba12c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ba1311 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { lea edx, [edi + 4] }
	__asm { je L_00ba12dc }
	__asm { cmp dword ptr [edx], edx }
	__asm { jne L_00ba1311 }
	__asm { L_00ba12dc: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba1300 }
	__asm { push 0x29 }
	__asm { push 0xed7c28 }
	__asm { push 0xed7c70 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1311 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba1300: }
	__asm { movzx eax, al }
	__asm { push 0xed7c88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1311: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop edi }
	__asm { cmp eax, ecx }
	__asm { jne L_00ba1320 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { L_00ba1320: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c0ff80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba1440
extern "C" __declspec(naked) void asm_00ba1440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ba1485 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00c0ff80 }
	__asm { mov ecx, eax }
	__asm { jmp L_00ba1487 }
	__asm { L_00ba1485: }
	__asm { xor ecx, ecx }
	__asm { L_00ba1487: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0xed7f68 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5d560();
// FUNCTION: ROBLOXSTUDIO 0x00ba17c0
extern "C" __declspec(naked) void asm_00ba17c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba1812 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00ba1812 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba17fd }
	__asm { push 0x3f }
	__asm { push 0xed8044 }
	__asm { push 0xed81cc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1812 }
	__asm { L_00ba17fd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed81e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1812: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00ba182d }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00ba182d }
	__asm { cmp eax, ecx }
	__asm { je L_00ba182d }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00ba182d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c11070();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba1880
extern "C" __declspec(naked) void asm_00ba1880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ba18c5 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00c11070 }
	__asm { mov ecx, eax }
	__asm { jmp L_00ba18c7 }
	__asm { L_00ba18c5: }
	__asm { xor ecx, ecx }
	__asm { L_00ba18c7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0xed8348 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ba1ad0();
extern "C" void fn_00ba1d50();
extern "C" void fn_00c03a40();
// FUNCTION: ROBLOXSTUDIO 0x00ba1c90
extern "C" __declspec(naked) void asm_00ba1c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba1cb9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xc }
	__asm { jne L_00ba1cb9 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1d50 }
	__asm { L_00ba1cb9: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c03a40 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba1cea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { je L_00ba1ce2 }
	__asm { cmp eax, 3 }
	__asm { je L_00ba1ce2 }
	__asm { cmp eax, 2 }
	__asm { jne L_00ba1cea }
	__asm { L_00ba1ce2: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1ad0 }
	__asm { L_00ba1cea: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ba1ad0();
extern "C" void fn_00ba1e40();
extern "C" void fn_00c03aa0();
// FUNCTION: ROBLOXSTUDIO 0x00ba1cf0
extern "C" __declspec(naked) void asm_00ba1cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c03aa0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba1d29 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { je L_00ba1d21 }
	__asm { cmp eax, 3 }
	__asm { je L_00ba1d21 }
	__asm { cmp eax, 2 }
	__asm { jne L_00ba1d29 }
	__asm { L_00ba1d21: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1ad0 }
	__asm { L_00ba1d29: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba1d48 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xc }
	__asm { jne L_00ba1d48 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1e40 }
	__asm { L_00ba1d48: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099ccf0();
extern "C" void fn_0099d250();
extern "C" void fn_00ba1960();
extern "C" void fn_00ba2180();
// FUNCTION: ROBLOXSTUDIO 0x00ba1fd0
extern "C" __declspec(naked) void asm_00ba1fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [edi + 0x110], 0 }
	__asm { jne L_00ba1ff1 }
	__asm { cmp byte ptr [edi + 0x111], 0 }
	__asm { jne L_00ba1ff1 }
	__asm { xor eax, eax }
	__asm { jmp L_00ba1ff6 }
	__asm { L_00ba1ff1: }
	__asm { mov eax, 1 }
	__asm { L_00ba1ff6: }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00ba1960 }
	__asm { cmp byte ptr [edi + 0x110], 0 }
	__asm { jne L_00ba2017 }
	__asm { cmp byte ptr [edi + 0x111], 0 }
	__asm { jne L_00ba2017 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00ba2180 }
	__asm { L_00ba2017: }
	__asm { mov ecx, edi }
	__asm { call fn_0099ccf0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00ba2044 }
	__asm { L_00ba2024: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp edi, eax }
	__asm { jne L_00ba202e }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { L_00ba202e: }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00ba2180 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0099d250 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00ba2024 }
	__asm { L_00ba2044: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c12d80();
// FUNCTION: ROBLOXSTUDIO 0x00ba27c0
extern "C" __declspec(naked) void asm_00ba27c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00ba27ce }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba27ce: }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00ba27da }
	__asm { call fn_00c12d80 }
	__asm { L_00ba27da: }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00ba280a }
	__asm { add esi, -0x1c }
	__asm { je L_00ba280a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba280a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xb }
	__asm { je L_00ba2802 }
	__asm { test eax, eax }
	__asm { jne L_00ba280a }
	__asm { L_00ba2802: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba280a: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099c7f0();
extern "C" void fn_0099c800();
extern "C" void fn_00baa870();
// FUNCTION: ROBLOXSTUDIO 0x00ba2940
extern "C" __declspec(naked) void asm_00ba2940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0099c7f0 }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call fn_0099c800 }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00baa870 }
	__asm { push 0 }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00baa870 }
	__asm { test ebx, ebx }
	__asm { je L_00ba297b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { L_00ba297b: }
	__asm { test edi, edi }
	__asm { je L_00ba2987 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_00ba2987: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f1ca[];
extern "C" void fn_006b9740();
extern "C" void fn_00a0f490();
extern "C" void fn_00ba3a00();
// FUNCTION: ROBLOXSTUDIO 0x00ba2a40
extern "C" __declspec(naked) void asm_00ba2a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ba2a90 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00ba2a90 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba2a7f }
	__asm { push 0x151 }
	__asm { push 0xed8e9c }
	__asm { push 0xea5988 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2a90 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba2a7f: }
	__asm { movzx eax, al }
	__asm { push 0xed9d70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2a90: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00ba3a00 }
	__asm { movzx eax, byte ptr [g_0130f1ca] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { call fn_00a0f490 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba2ac0
extern "C" __declspec(naked) void asm_00ba2ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00ba2b1a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba2b10 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00ba2b10 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba2aff }
	__asm { push 0x2c }
	__asm { push 0xeceb98 }
	__asm { push 0xecebe0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2b10 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba2aff: }
	__asm { movzx eax, al }
	__asm { push 0xecebf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2b10: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x14] }
	__asm { L_00ba2b1a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c360();
// FUNCTION: ROBLOXSTUDIO 0x00ba2e60
extern "C" __declspec(naked) void asm_00ba2e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test dl, dl }
	__asm { je L_00ba2eba }
	__asm { mov eax, dword ptr [esi + 0xc0] }
	__asm { add eax, dword ptr [esi + 0x9c] }
	__asm { je L_00ba2eba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2ea9 }
	__asm { push 0x1d1 }
	__asm { push 0xed8e9c }
	__asm { push 0xe8f66c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2eba }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00ba2ea9: }
	__asm { movzx eax, dl }
	__asm { push 0xeda220 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2eba: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b19b0();
extern "C" void fn_00ba3f00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba3bf0
extern "C" __declspec(naked) void asm_00ba3bf0()
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
	__asm { push 0x24 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ba3c3a }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00ba3f00 }
	__asm { mov ecx, eax }
	__asm { jmp L_00ba3c3c }
	__asm { L_00ba3c3a: }
	__asm { xor ecx, ecx }
	__asm { L_00ba3c3c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi], 0xeda2f0 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xeda30c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c2b0();
extern "C" void fn_00ba4300();
extern "C" void fn_00c120d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba3cf0
extern "C" __declspec(naked) void asm_00ba3cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ba3d3c }
	__asm { test esi, esi }
	__asm { jne L_00ba3d3c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba3d2b }
	__asm { push 0x29 }
	__asm { push 0xeda328 }
	__asm { push 0xe47640 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba3d3c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba3d2b: }
	__asm { movzx eax, al }
	__asm { push 0xeda370 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba3d3c: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c2b0 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba4300 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c120d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099c7f0();
extern "C" void fn_00b5be10();
extern "C" void fn_00b5d560();
extern "C" void fn_00b8c530();
extern "C" void fn_00ba4320();
extern "C" void fn_00c12200();
// FUNCTION: ROBLOXSTUDIO 0x00ba3d60
extern "C" __declspec(naked) void asm_00ba3d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00b5be10 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00ba3db3 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c7f0 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00ba3db3 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00ba3db3 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c12200 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00ba4320 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba3db3: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
// FUNCTION: ROBLOXSTUDIO 0x00ba4270
extern "C" __declspec(naked) void asm_00ba4270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba42b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00ba42b0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea ecx, [edi + 0x14] }
	__asm { lea edx, [esi + 0x28] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [eax], edx }
	__asm { inc dword ptr [edi + 0x10] }
	__asm { L_00ba42b0: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
// FUNCTION: ROBLOXSTUDIO 0x00ba4720
extern "C" __declspec(naked) void asm_00ba4720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba4760 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00ba4760 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea ecx, [edi + 0x14] }
	__asm { lea edx, [esi + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [eax], edx }
	__asm { inc dword ptr [edi + 0x10] }
	__asm { L_00ba4760: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba477c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { jl L_00ba477c }
	__asm { cmp eax, 5 }
	__asm { jle L_00ba4785 }
	__asm { L_00ba477c: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00ba4785: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba4820();
// FUNCTION: ROBLOXSTUDIO 0x00ba4790
extern "C" __declspec(naked) void asm_00ba4790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba47b6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { jl L_00ba47b6 }
	__asm { cmp eax, 5 }
	__asm { jle L_00ba47bf }
	__asm { L_00ba47b6: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_00ba47bf: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00ba47d2 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba4820 }
	__asm { L_00ba47d2: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ba53c0
extern "C" __declspec(naked) void asm_00ba53c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00ba53d7 }
	__asm { L_00ba53ca: }
	__asm { dec eax }
	__asm { jne L_00ba53d0 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00ba53d0: }
	__asm { test eax, eax }
	__asm { jne L_00ba53ca }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00ba53d7: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { test edi, edi }
	__asm { je L_00ba53f8 }
	__asm { nop }
	__asm { L_00ba53e0: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edi }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test eax, eax }
	__asm { je L_00ba53f4 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ba53f4: }
	__asm { test edi, edi }
	__asm { jne L_00ba53e0 }
	__asm { L_00ba53f8: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00ba5409 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ba5409: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0099c7f0();
extern "C" void fn_00b5b9e0();
extern "C" void fn_00ba57e0();
// FUNCTION: ROBLOXSTUDIO 0x00ba87d0
extern "C" __declspec(naked) void asm_00ba87d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { add esi, 0xc }
	__asm { mov edi, 2 }
	__asm { L_00ba87e5: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_0099c7f0 }
	__asm { mov ebx, eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b5b9e0 }
	__asm { test eax, eax }
	__asm { je L_00ba8813 }
	__asm { cmp eax, 3 }
	__asm { je L_00ba8813 }
	__asm { cmp eax, 2 }
	__asm { je L_00ba8813 }
	__asm { cmp eax, 1 }
	__asm { je L_00ba8813 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00ba57e0 }
	__asm { L_00ba8813: }
	__asm { add esi, 4 }
	__asm { dec edi }
	__asm { jne L_00ba87e5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f1dc[];
extern "C" void fn_0088bd00();
extern "C" void fn_00b65d10();
extern "C" void fn_00ba8d70();
extern "C" void fn_00ba9c60();
// FUNCTION: ROBLOXSTUDIO 0x00ba9900
extern "C" __declspec(naked) void asm_00ba9900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cd1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00ba9953 }
	__asm { push 0x134 }
	__asm { call fn_00ba8d70 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ba9947 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b65d10 }
	__asm { jmp L_00ba9949 }
	__asm { L_00ba9947: }
	__asm { xor eax, eax }
	__asm { L_00ba9949: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { L_00ba9953: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00ba9963 }
	__asm { call fn_0088bd00 }
	__asm { mov ecx, eax }
	__asm { jmp L_00ba9965 }
	__asm { L_00ba9963: }
	__asm { mov ecx, esi }
	__asm { L_00ba9965: }
	__asm { mov eax, dword ptr [g_0130f1dc] }
	__asm { inc eax }
	__asm { mov dword ptr [ecx + 0xa0], eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [g_0130f1dc], eax }
	__asm { call fn_00ba9c60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00baa470();
extern "C" void fn_00baa690();
extern "C" void fn_00baa720();
// FUNCTION: ROBLOXSTUDIO 0x00baa870
extern "C" __declspec(naked) void asm_00baa870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { je L_00baa8d1 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00baa893 }
	__asm { push 0 }
	__asm { call fn_00baa720 }
	__asm { L_00baa893: }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { test edi, edi }
	__asm { je L_00baa8a2 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00baa720 }
	__asm { L_00baa8a2: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00baa8c9 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00baa8c7 }
	__asm { push eax }
	__asm { call fn_00baa470 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00baa690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00baa8c7: }
	__asm { xor eax, eax }
	__asm { L_00baa8c9: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00baa690 }
	__asm { L_00baa8d1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bab2b0
extern "C" __declspec(naked) void asm_00bab2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov esi, ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x54] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00bab2de }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00bab2de: }
	__asm { fld dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bab990
extern "C" __declspec(naked) void asm_00bab990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00bab9e2 }
	__asm { cmp edx, -1 }
	__asm { jne L_00bab9e7 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bab9cb }
	__asm { push 0x81 }
	__asm { push 0xede4bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bab9dc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bab9cb: }
	__asm { movzx eax, al }
	__asm { push 0xede770 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bab9dc: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bab9e2: }
	__asm { cmp edx, -1 }
	__asm { je L_00bab9dc }
	__asm { L_00bab9e7: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { lea ecx, [edx + edx*8] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [eax + ecx*4 + 8] }
	__asm { sub edx, dword ptr [eax + ecx*4 + 4] }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00babe40();
// FUNCTION: ROBLOXSTUDIO 0x00bac890
extern "C" __declspec(naked) void asm_00bac890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test al, al }
	__asm { je L_00bac8e2 }
	__asm { cmp edx, -1 }
	__asm { jne L_00bac8e7 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bac8cb }
	__asm { push 0x87 }
	__asm { push 0xede4bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bac8dc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bac8cb: }
	__asm { movzx eax, al }
	__asm { push 0xede7d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bac8dc: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bac8e2: }
	__asm { cmp edx, -1 }
	__asm { je L_00bac8dc }
	__asm { L_00bac8e7: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { lea ecx, [edx + edx*8] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00babe40 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bacda0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bac9a0
extern "C" __declspec(naked) void asm_00bac9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cdd0 }
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
	__asm { je L_00bac9f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xede9a8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bac9fa }
	__asm { L_00bac9f8: }
	__asm { xor eax, eax }
	__asm { L_00bac9fa: }
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
	__asm { call fn_00bacda0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00436ac0();
extern "C" void fn_006b9740();
extern "C" void fn_00bace90();
extern "C" void fn_00bad980();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bacda0
extern "C" __declspec(naked) void asm_00bacda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bacdbd }
	__asm { push dword ptr [esi + 4] }
	__asm { push esi }
	__asm { call fn_00bad980 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bacdbd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bace07 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00bace07 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bacdf6 }
	__asm { push 0x63 }
	__asm { push 0xed0100 }
	__asm { push 0xed0258 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bace07 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bacdf6: }
	__asm { movzx eax, al }
	__asm { push 0xed0268 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bace07: }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00bace1d }
	__asm { mov ecx, esi }
	__asm { call fn_00436ac0 }
	__asm { push esi }
	__asm { call fn_00bace90 }
	__asm { add esp, 4 }
	__asm { L_00bace1d: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_0130f244[];
extern "C" char g_0130f248[];
extern "C" char g_0130f24c[];
extern "C" char g_0130f250[];
extern "C" void fn_004115f0();
extern "C" void fn_008b19b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00badde0
extern "C" __declspec(naked) void asm_00badde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5ce5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbadad0 }
	__asm { push 0x130f23c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f250] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bade59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f250], eax }
	__asm { mov ecx, 0x130f244 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f244], 0 }
	__asm { mov dword ptr [g_0130f248], 0 }
	__asm { call fn_008b19b0 }
	__asm { push 0xe07c00 }
	__asm { mov dword ptr [g_0130f244], eax }
	__asm { mov byte ptr [g_0130f24c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bade59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f244 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bae1c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00badfc0
extern "C" __declspec(naked) void asm_00badfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ce70 }
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
	__asm { je L_00bae018 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xedea84 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bae01a }
	__asm { L_00bae018: }
	__asm { xor eax, eax }
	__asm { L_00bae01a: }
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
	__asm { call fn_00bae1c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00bae1e0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bae0f0
extern "C" __declspec(naked) void asm_00bae0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ce80 }
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
	__asm { je L_00bae148 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xedea6c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bae14a }
	__asm { L_00bae148: }
	__asm { xor eax, eax }
	__asm { L_00bae14a: }
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
	__asm { call fn_00bae1e0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f29c[];
extern "C" char g_0130f2a0[];
extern "C" char g_0130f2a4[];
extern "C" char g_0130f2a8[];
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00baf050
extern "C" __declspec(naked) void asm_00baf050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5cf1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f2a8] }
	__asm { test al, 1 }
	__asm { jne L_00baf0b7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2a8], eax }
	__asm { mov ecx, 0x130f29c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f29c], 0 }
	__asm { mov dword ptr [g_0130f2a0], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07d10 }
	__asm { mov dword ptr [g_0130f29c], eax }
	__asm { mov byte ptr [g_0130f2a4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00baf0b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f2ac[];
extern "C" char g_0130f2b0[];
extern "C" char g_0130f2b4[];
extern "C" char g_0130f2b8[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00baf2e0
extern "C" __declspec(naked) void asm_00baf2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5cefe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbaefd0 }
	__asm { push 0x130f294 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f2b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00baf359 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2b8], eax }
	__asm { mov ecx, 0x130f2ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f2ac], 0 }
	__asm { mov dword ptr [g_0130f2b0], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07c90 }
	__asm { mov dword ptr [g_0130f2ac], eax }
	__asm { mov byte ptr [g_0130f2b4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00baf359: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f2ac }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f29c[];
extern "C" char g_0130f2a0[];
extern "C" char g_0130f2a4[];
extern "C" char g_0130f2a8[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00baf370
extern "C" __declspec(naked) void asm_00baf370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5cf1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbaf050 }
	__asm { push 0x130f28c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f2a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00baf3e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2a8], eax }
	__asm { mov ecx, 0x130f29c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f29c], 0 }
	__asm { mov dword ptr [g_0130f2a0], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07d10 }
	__asm { mov dword ptr [g_0130f29c], eax }
	__asm { mov byte ptr [g_0130f2a4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00baf3e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f29c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00baf580();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00baf4a0
extern "C" __declspec(naked) void asm_00baf4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cf30 }
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
	__asm { je L_00baf4f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xedec00 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00baf4fa }
	__asm { L_00baf4f8: }
	__asm { xor eax, eax }
	__asm { L_00baf4fa: }
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
	__asm { call fn_00baf580 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f2d0[];
extern "C" char g_0130f2d4[];
extern "C" char g_0130f2d8[];
extern "C" char g_0130f2dc[];
extern "C" void fn_004115f0();
extern "C" void fn_00baf830();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb0830
extern "C" __declspec(naked) void asm_00bb0830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5cf7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb06b0 }
	__asm { push 0x130f2c8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f2dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb08a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2dc], eax }
	__asm { mov ecx, 0x130f2d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f2d0], 0 }
	__asm { mov dword ptr [g_0130f2d4], 0 }
	__asm { call fn_00baf830 }
	__asm { push 0xe07d90 }
	__asm { mov dword ptr [g_0130f2d0], eax }
	__asm { mov byte ptr [g_0130f2d8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb08a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f2d0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb10c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb0960
extern "C" __declspec(naked) void asm_00bb0960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cf90 }
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
	__asm { je L_00bb09b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeded74 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bb09ba }
	__asm { L_00bb09b8: }
	__asm { xor eax, eax }
	__asm { L_00bb09ba: }
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
	__asm { call fn_00bb10c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f2f0[];
extern "C" char g_0130f2f4[];
extern "C" char g_0130f2f8[];
extern "C" char g_0130f2fc[];
extern "C" void fn_004115f0();
extern "C" void fn_00baf830();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb2160
extern "C" __declspec(naked) void asm_00bb2160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d00e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb1fe0 }
	__asm { push 0x130f2e8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f2fc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb21d9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2fc], eax }
	__asm { mov ecx, 0x130f2f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f2f0], 0 }
	__asm { mov dword ptr [g_0130f2f4], 0 }
	__asm { call fn_00baf830 }
	__asm { push 0xe07e10 }
	__asm { mov dword ptr [g_0130f2f0], eax }
	__asm { mov byte ptr [g_0130f2f8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb21d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f2f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb2320();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb2290
extern "C" __declspec(naked) void asm_00bb2290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d020 }
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
	__asm { je L_00bb22e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeded8c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bb22ea }
	__asm { L_00bb22e8: }
	__asm { xor eax, eax }
	__asm { L_00bb22ea: }
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
	__asm { call fn_00bb2320 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f310[];
extern "C" char g_0130f314[];
extern "C" char g_0130f318[];
extern "C" char g_0130f31c[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb2cd0
extern "C" __declspec(naked) void asm_00bb2cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d06e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb2c50 }
	__asm { push 0x130f308 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f31c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb2d49 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f31c], eax }
	__asm { mov ecx, 0x130f310 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f310], 0 }
	__asm { mov dword ptr [g_0130f314], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07e90 }
	__asm { mov dword ptr [g_0130f310], eax }
	__asm { mov byte ptr [g_0130f318], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb2d49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f310 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb2e90();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb2e00
extern "C" __declspec(naked) void asm_00bb2e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d080 }
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
	__asm { je L_00bb2e58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xededa4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bb2e5a }
	__asm { L_00bb2e58: }
	__asm { xor eax, eax }
	__asm { L_00bb2e5a: }
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
	__asm { call fn_00bb2e90 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f330[];
extern "C" char g_0130f334[];
extern "C" char g_0130f338[];
extern "C" char g_0130f33c[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb35c0
extern "C" __declspec(naked) void asm_00bb35c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d0ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb3540 }
	__asm { push 0x130f328 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f33c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb3639 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f33c], eax }
	__asm { mov ecx, 0x130f330 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f330], 0 }
	__asm { mov dword ptr [g_0130f334], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07f10 }
	__asm { mov dword ptr [g_0130f330], eax }
	__asm { mov byte ptr [g_0130f338], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb3639: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f330 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb38b0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb36f0
extern "C" __declspec(naked) void asm_00bb36f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d0e0 }
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
	__asm { je L_00bb3748 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xededd4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bb374a }
	__asm { L_00bb3748: }
	__asm { xor eax, eax }
	__asm { L_00bb374a: }
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
	__asm { call fn_00bb38b0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00bb38d0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb3820
extern "C" __declspec(naked) void asm_00bb3820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d0f0 }
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
	__asm { je L_00bb3878 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xededbc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bb387a }
	__asm { L_00bb3878: }
	__asm { xor eax, eax }
	__asm { L_00bb387a: }
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
	__asm { call fn_00bb38d0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f384[];
extern "C" char g_0130f388[];
extern "C" char g_0130f38c[];
extern "C" char g_0130f390[];
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb46a0
extern "C" __declspec(naked) void asm_00bb46a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f390] }
	__asm { test al, 1 }
	__asm { jne L_00bb4707 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f390], eax }
	__asm { mov ecx, 0x130f384 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f384], 0 }
	__asm { mov dword ptr [g_0130f388], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe08020 }
	__asm { mov dword ptr [g_0130f384], eax }
	__asm { mov byte ptr [g_0130f38c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb4707: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f394[];
extern "C" char g_0130f398[];
extern "C" char g_0130f39c[];
extern "C" char g_0130f3a0[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb4930
extern "C" __declspec(naked) void asm_00bb4930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d18e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4620 }
	__asm { push 0x130f37c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f3a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb49a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3a0], eax }
	__asm { mov ecx, 0x130f394 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f394], 0 }
	__asm { mov dword ptr [g_0130f398], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07fa0 }
	__asm { mov dword ptr [g_0130f394], eax }
	__asm { mov byte ptr [g_0130f39c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb49a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f394 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f384[];
extern "C" char g_0130f388[];
extern "C" char g_0130f38c[];
extern "C" char g_0130f390[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb49c0
extern "C" __declspec(naked) void asm_00bb49c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb46a0 }
	__asm { push 0x130f374 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f390] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb4a39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f390], eax }
	__asm { mov ecx, 0x130f384 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f384], 0 }
	__asm { mov dword ptr [g_0130f388], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe08020 }
	__asm { mov dword ptr [g_0130f384], eax }
	__asm { mov byte ptr [g_0130f38c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb4a39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f384 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec650[];
extern "C" char g_0130f460[];
extern "C" char g_0130f464[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5030
extern "C" __declspec(naked) void asm_00bb5030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d26e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec650], 0 }
	__asm { jne L_00bb5064 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5064: }
	__asm { push 0xbb4a50 }
	__asm { push 0x130f3e0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f464] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb50ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f464], eax }
	__asm { push 0xeec650 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f460], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb50ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f460] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec7f4[];
extern "C" char g_0130f478[];
extern "C" char g_0130f47c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb50d0
extern "C" __declspec(naked) void asm_00bb50d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec7f4], 0 }
	__asm { jne L_00bb5104 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5104: }
	__asm { push 0xbb4aa0 }
	__asm { push 0x130f3f8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f47c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb514e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f47c], eax }
	__asm { push 0xeec7f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f478], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb514e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f478] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec7f8[];
extern "C" char g_0130f480[];
extern "C" char g_0130f484[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5170
extern "C" __declspec(naked) void asm_00bb5170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec7f8], 0 }
	__asm { jne L_00bb51a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb51a4: }
	__asm { push 0xbb4af0 }
	__asm { push 0x130f400 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f484] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb51ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f484], eax }
	__asm { push 0xeec7f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f480], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb51ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f480] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec8e0[];
extern "C" char g_0130f490[];
extern "C" char g_0130f494[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5210
extern "C" __declspec(naked) void asm_00bb5210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d28e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec8e0], 0 }
	__asm { jne L_00bb5244 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5244: }
	__asm { push 0xbb4b40 }
	__asm { push 0x130f410 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f494] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb528e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f494], eax }
	__asm { push 0xeec8e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f490], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb528e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f490] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec9e8[];
extern "C" char g_0130f4a8[];
extern "C" char g_0130f4ac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb52b0
extern "C" __declspec(naked) void asm_00bb52b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec9e8], 0 }
	__asm { jne L_00bb52e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb52e4: }
	__asm { push 0xbb4b90 }
	__asm { push 0x130f428 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb532e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4ac], eax }
	__asm { push 0xeec9e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb532e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec7a8[];
extern "C" char g_0130f470[];
extern "C" char g_0130f474[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5350
extern "C" __declspec(naked) void asm_00bb5350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec7a8], 0 }
	__asm { jne L_00bb5384 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5384: }
	__asm { push 0xbb4be0 }
	__asm { push 0x130f3f0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f474] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb53ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f474], eax }
	__asm { push 0xeec7a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f470], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb53ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f470] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eecbf0[];
extern "C" char g_0130f4b0[];
extern "C" char g_0130f4b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb53f0
extern "C" __declspec(naked) void asm_00bb53f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d20e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eecbf0], 0 }
	__asm { jne L_00bb5424 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5424: }
	__asm { push 0xbb4c30 }
	__asm { push 0x130f430 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb546e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4b4], eax }
	__asm { push 0xeecbf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb546e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec64c[];
extern "C" char g_0130f458[];
extern "C" char g_0130f45c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5490
extern "C" __declspec(naked) void asm_00bb5490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6145e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec64c], 0 }
	__asm { jne L_00bb54c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb54c4: }
	__asm { push 0xbb4c80 }
	__asm { push 0x130f3d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f45c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb550e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f45c], eax }
	__asm { push 0xeec64c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f458], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb550e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f458] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec7fc[];
extern "C" char g_0130f488[];
extern "C" char g_0130f48c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5530
extern "C" __declspec(naked) void asm_00bb5530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec7fc], 0 }
	__asm { jne L_00bb5564 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5564: }
	__asm { push 0xbb4cd0 }
	__asm { push 0x130f408 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f48c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb55ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f48c], eax }
	__asm { push 0xeec7fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f488], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb55ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f488] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eecd40[];
extern "C" char g_0130f4c0[];
extern "C" char g_0130f4c4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb55d0
extern "C" __declspec(naked) void asm_00bb55d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d22e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eecd40], 0 }
	__asm { jne L_00bb5604 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5604: }
	__asm { push 0xbb4d20 }
	__asm { push 0x130f440 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4c4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb564e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4c4], eax }
	__asm { push 0xeecd40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4c0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb564e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4c0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec934[];
extern "C" char g_0130f498[];
extern "C" char g_0130f49c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5670
extern "C" __declspec(naked) void asm_00bb5670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec934], 0 }
	__asm { jne L_00bb56a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb56a4: }
	__asm { push 0xbb4d70 }
	__asm { push 0x130f418 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f49c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb56ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f49c], eax }
	__asm { push 0xeec934 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f498], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb56ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f498] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec644[];
extern "C" char g_0130f450[];
extern "C" char g_0130f454[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5710
extern "C" __declspec(naked) void asm_00bb5710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6147e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec644], 0 }
	__asm { jne L_00bb5744 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5744: }
	__asm { push 0xbb4dc0 }
	__asm { push 0x130f3d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f454] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb578e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f454], eax }
	__asm { push 0xeec644 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f450], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb578e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f450] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec748[];
extern "C" char g_0130f468[];
extern "C" char g_0130f46c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb57b0
extern "C" __declspec(naked) void asm_00bb57b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec748], 0 }
	__asm { jne L_00bb57e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb57e4: }
	__asm { push 0xbb4e10 }
	__asm { push 0x130f3e8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f46c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb582e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f46c], eax }
	__asm { push 0xeec748 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f468], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb582e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f468] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eecd3c[];
extern "C" char g_0130f4b8[];
extern "C" char g_0130f4bc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5850
extern "C" __declspec(naked) void asm_00bb5850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6159e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eecd3c], 0 }
	__asm { jne L_00bb5884 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5884: }
	__asm { push 0xbb4e60 }
	__asm { push 0x130f438 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb58ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4bc], eax }
	__asm { push 0xeecd3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb58ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec988[];
extern "C" char g_0130f4a0[];
extern "C" char g_0130f4a4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb58f0
extern "C" __declspec(naked) void asm_00bb58f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d24e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eec988], 0 }
	__asm { jne L_00bb5924 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5924: }
	__asm { push 0xbb4eb0 }
	__asm { push 0x130f420 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb596e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4a4], eax }
	__asm { push 0xeec988 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb596e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eecdd4[];
extern "C" char g_0130f4c8[];
extern "C" char g_0130f4cc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00bb5990
extern "C" __declspec(naked) void asm_00bb5990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eecdd4], 0 }
	__asm { jne L_00bb59c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb59c4: }
	__asm { push 0xbb4f00 }
	__asm { push 0x130f448 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4cc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bb5a0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4cc], eax }
	__asm { push 0xeecdd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4c8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb5a0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4c8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009d8360();
extern "C" void fn_00bb5a30();
// FUNCTION: ROBLOXSTUDIO 0x00bb67b0
extern "C" __declspec(naked) void asm_00bb67b0()
{
	__asm { push esi }
	__asm { push dword ptr [ecx + 8] }
	__asm { call fn_009d8360 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { test cl, cl }
	__asm { je L_00bb6805 }
	__asm { test esi, esi }
	__asm { jne L_00bb6805 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00bb67f4 }
	__asm { push 0x338 }
	__asm { push 0xedf868 }
	__asm { push 0xe9688c }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb6805 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb67f4: }
	__asm { movzx eax, cl }
	__asm { push 0xedff60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb6805: }
	__asm { mov ecx, esi }
	__asm { call fn_00bb5a30 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c14920();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb7440
extern "C" __declspec(naked) void asm_00bb7440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x104 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bb748e }
	__asm { push 0xa }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00c14920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb748e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
// FUNCTION: ROBLOXSTUDIO 0x00bb7ae0
extern "C" __declspec(naked) void asm_00bb7ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00bb7b2f }
	__asm { test esi, esi }
	__asm { jne L_00bb7b2f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb7b1e }
	__asm { push 0x41c }
	__asm { push 0xedf868 }
	__asm { push 0xee0220 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb7b2f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb7b1e: }
	__asm { movzx eax, al }
	__asm { push 0xee0228 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb7b2f: }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { jne L_00bb7b64 }
	__asm { cmp byte ptr [esi + 0x112], 0 }
	__asm { jne L_00bb7b64 }
	__asm { cmp dword ptr [edi + 0xa0], 0 }
	__asm { je L_00bb7b59 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c7f0 }
	__asm { cmp dword ptr [edi + 0xa0], eax }
	__asm { je L_00bb7b64 }
	__asm { L_00bb7b59: }
	__asm { pop edi }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bb7b64: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009d3ca0();
extern "C" void fn_00bb8830();
// FUNCTION: ROBLOXSTUDIO 0x00bb8a80
extern "C" __declspec(naked) void asm_00bb8a80()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp edi, eax }
	__asm { je L_00bb8ac4 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00bb8830 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb8830 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x18] }
	__asm { add ecx, 0x380 }
	__asm { call fn_009d3ca0 }
	__asm { L_00bb8ac4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e740();
extern "C" void fn_009d86b0();
// FUNCTION: ROBLOXSTUDIO 0x00bba740
extern "C" __declspec(naked) void asm_00bba740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bba78d }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba78d }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00bba77c }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba78d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba77c: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba78d: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d86b0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00bba7b3 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { sete cl }
	__asm { movzx ecx, cl }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { pop ebp }
	__asm { jmp fn_0099e740 }
	__asm { L_00bba7b3: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00bbbfd0
extern "C" __declspec(naked) void asm_00bbbfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi], edi }
	__asm { jle L_00bbc006 }
	__asm { L_00bbbfe5: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + edi*8 + 4] }
	__asm { test eax, eax }
	__asm { je L_00bbc001 }
	__asm { push eax }
	__asm { call ebx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax + edi*8 + 4], 0 }
	__asm { L_00bbc001: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi] }
	__asm { jl L_00bbbfe5 }
	__asm { L_00bbc006: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00bbc01a }
	__asm { push eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00bbc01a: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00bbc02e }
	__asm { push eax }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00bbc02e: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc02c0
extern "C" __declspec(naked) void asm_00bc02c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_00bc0302 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00bc02d2: }
	__asm { test esi, esi }
	__asm { je L_00bc02f2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], edx }
	__asm { L_00bc02f2: }
	__asm { add ecx, 0x14 }
	__asm { add esi, 0x14 }
	__asm { cmp ecx, edi }
	__asm { jne L_00bc02d2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc0302: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00626ae0();
extern "C" void fn_00bc08e0();
// FUNCTION: ROBLOXSTUDIO 0x00bc0b50
extern "C" __declspec(naked) void asm_00bc0b50()
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
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_00bc0bb8 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x9249249 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_00bc0ba5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00bc0ba5: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00626ae0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc0bb8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc0bc0
extern "C" __declspec(naked) void asm_00bc0bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test bl, bl }
	__asm { je L_00bc0c24 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, edx }
	__asm { je L_00bc0c24 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edi, edi }
	__asm { L_00bc0be0: }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_00bc0beb }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00bc0be0 }
	__asm { L_00bc0beb: }
	__asm { cmp eax, edx }
	__asm { je L_00bc0c24 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc0c13 }
	__asm { push 0x27 }
	__asm { push 0xea3f40 }
	__asm { push 0xee129c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc0c24 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00bc0c13: }
	__asm { movzx eax, bl }
	__asm { push 0xee12d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc0c24: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_008bbcc0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bc23c0
extern "C" __declspec(naked) void asm_00bc23c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jne L_00bc23d6 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc23d6: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bc2419 }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { je L_00bc2419 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bc2408 }
	__asm { push 0x7b }
	__asm { push 0xea3f40 }
	__asm { push 0xee14b0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc2419 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bc2408: }
	__asm { movzx eax, al }
	__asm { push 0xee14c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc2419: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bc5620
extern "C" __declspec(naked) void asm_00bc5620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [esi + 0xc] }
	__asm { jne L_00bc5636 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc5636: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bc5679 }
	__asm { cmp ecx, dword ptr [esi + 0x10] }
	__asm { je L_00bc5679 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bc5668 }
	__asm { push 0x52 }
	__asm { push 0xea3f40 }
	__asm { push 0xee1364 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc5679 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bc5668: }
	__asm { movzx eax, al }
	__asm { push 0xee1378 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc5679: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b653b0();
extern "C" void fn_00babde0();
extern "C" void fn_00bc1c10();
extern "C" void fn_00bc5620();
extern "C" void fn_00bc5d70();
// FUNCTION: ROBLOXSTUDIO 0x00bc5950
extern "C" __declspec(naked) void asm_00bc5950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_00bc596b }
	__asm { L_00bc5962: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, 1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00bc596b: }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00b653b0 }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jae L_00bc59ca }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bc1c10 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { call fn_00bc5620 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00babde0 }
	__asm { mov ecx, eax }
	__asm { call fn_00bc5d70 }
	__asm { movzx ecx, al }
	__asm { test ecx, ecx }
	__asm { jne L_00bc59c8 }
	__asm { xor al, al }
	__asm { jmp L_00bc59cc }
	__asm { L_00bc59c8: }
	__asm { jmp L_00bc5962 }
	__asm { L_00bc59ca: }
	__asm { mov al, 1 }
	__asm { L_00bc59cc: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bc9a90();
// FUNCTION: ROBLOXSTUDIO 0x00bc6280
extern "C" __declspec(naked) void asm_00bc6280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, 5 }
	__asm { je L_00bc62ac }
	__asm { sub eax, 2 }
	__asm { je L_00bc62a5 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov edx, dword ptr [eax + edx*4 + 0x98] }
	__asm { jmp L_00bc62b1 }
	__asm { L_00bc62a5: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { jmp L_00bc62b1 }
	__asm { L_00bc62ac: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { L_00bc62b1: }
	__asm { test edx, edx }
	__asm { je L_00bc62ce }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ecx + eax*4 + 0xbc] }
	__asm { push edx }
	__asm { call fn_00bc9a90 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc62ce: }
	__asm { mov eax, 0xea7e68 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc9420();
// FUNCTION: ROBLOXSTUDIO 0x00bc62e0
extern "C" __declspec(naked) void asm_00bc62e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, 0xbc }
	__asm { mov edi, 0xee1c10 }
	__asm { L_00bc62f4: }
	__asm { mov edx, dword ptr [edi + esi - 0xbc] }
	__asm { mov eax, edx }
	__asm { lea ecx, [eax + 1] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { L_00bc6303: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00bc6303 }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ebx }
	__asm { call fn_00bc9420 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add esi, 4 }
	__asm { mov dword ptr [esi + ecx - 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [eax + esi - 4] }
	__asm { or byte ptr [eax + 5], 0x20 }
	__asm { cmp esi, 0x100 }
	__asm { jl L_00bc62f4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc66d0
extern "C" __declspec(naked) void asm_00bc66d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { xor ecx, ecx }
	__asm { test edi, edi }
	__asm { jle L_00bc6704 }
	__asm { mov ebx, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edi, edi }
	__asm { L_00bc66f0: }
	__asm { cmp dword ptr [eax - 4], edx }
	__asm { jg L_00bc6704 }
	__asm { cmp edx, dword ptr [eax] }
	__asm { jge L_00bc66fc }
	__asm { dec esi }
	__asm { je L_00bc670b }
	__asm { L_00bc66fc: }
	__asm { inc ecx }
	__asm { add eax, 0xc }
	__asm { cmp ecx, edi }
	__asm { jl L_00bc66f0 }
	__asm { L_00bc6704: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc670b: }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ebx + eax*4] }
	__asm { pop esi }
	__asm { add eax, 0x10 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6fc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc6760
extern "C" __declspec(naked) void asm_00bc6760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebx*4 + 0x14] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { mov edi, eax }
	__asm { push 6 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6fc0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x1c }
	__asm { mov byte ptr [edi + 6], 0 }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov byte ptr [edi + 7], bl }
	__asm { test ebx, ebx }
	__asm { je L_00bc67af }
	__asm { lea eax, [ebx + 5] }
	__asm { lea eax, [edi + eax*4] }
	__asm { L_00bc67a3: }
	__asm { lea eax, [eax - 4] }
	__asm { mov dword ptr [eax], 0 }
	__asm { dec ebx }
	__asm { jne L_00bc67a3 }
	__asm { L_00bc67af: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6d00();
// FUNCTION: ROBLOXSTUDIO 0x00bc6ff0
extern "C" __declspec(naked) void asm_00bc6ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [esi + 0x1c], edx }
	__asm { mov cl, byte ptr [edx + 5] }
	__asm { test cl, 7 }
	__asm { jne L_00bc704c }
	__asm { cmp byte ptr [esi + 0x15], 1 }
	__asm { jne L_00bc703f }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { or cl, 4 }
	__asm { mov byte ptr [edx + 5], cl }
	__asm { cmp dword ptr [eax + 8], 4 }
	__asm { jl L_00bc704c }
	__asm { mov eax, dword ptr [eax] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc704c }
	__asm { test cl, 4 }
	__asm { je L_00bc704c }
	__asm { push eax }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_00bc6d00 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc703f: }
	__asm { mov al, byte ptr [esi + 0x14] }
	__asm { and al, 3 }
	__asm { and cl, 0xf8 }
	__asm { or al, cl }
	__asm { mov byte ptr [edx + 5], al }
	__asm { L_00bc704c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc72a0();
extern "C" void fn_00bc7710();
// FUNCTION: ROBLOXSTUDIO 0x00bc7390
extern "C" __declspec(naked) void asm_00bc7390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc73c2 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc73c2: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { cmp dword ptr [eax + 0x50], 4 }
	__asm { jl L_00bc73de }
	__asm { mov eax, dword ptr [eax + 0x48] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc73de }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc73de: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { cmp dword ptr [eax + 0x68], 4 }
	__asm { jl L_00bc73fa }
	__asm { mov eax, dword ptr [eax + 0x60] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc73fa }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc73fa: }
	__asm { push esi }
	__asm { call fn_00bc72a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esi + 0x15], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10688[];
extern "C" void fn_00bc90f0();
extern "C" void fn_00bca570();
// FUNCTION: ROBLOXSTUDIO 0x00bc7f30
extern "C" __declspec(naked) void asm_00bc7f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10688] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00bc7f4c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc7f4c: }
	__asm { push dword ptr [esi] }
	__asm { push esi }
	__asm { call fn_00bc90f0 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { add esp, 8 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_00bc7f7d }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { inc eax }
	__asm { movzx edx, byte ptr [eax - 1] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc7f7d: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00bca570 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], edx }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36d10();
extern "C" void fn_00a45610();
extern "C" void fn_00a457e0();
extern "C" void fn_00bc93a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc8720
extern "C" __declspec(naked) void asm_00bc8720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add eax, 0x10 }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_00a45610 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { push 0xea705c }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x20 }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00bc8779 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc93a0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0xee1d90 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x18 }
	__asm { L_00bc8779: }
	__asm { push 3 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a36d10 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bca570();
// FUNCTION: ROBLOXSTUDIO 0x00bc8850
extern "C" __declspec(naked) void asm_00bc8850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov byte ptr [esi + 0x44], 0x2e }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { mov dword ptr [esi + 0x20], 0x11f }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 4], 1 }
	__asm { mov dword ptr [esi + 8], 1 }
	__asm { push dword ptr [eax + 8] }
	__asm { push dword ptr [eax] }
	__asm { push ecx }
	__asm { call fn_00bc6400 }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [eax + 8], 0x20 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_00bc88cc }
	__asm { mov edx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { inc eax }
	__asm { movzx ecx, byte ptr [eax - 1] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc88cc: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00bca570 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10748[];
extern "C" void fn_00a457e0();
extern "C" void fn_00bc90f0();
// FUNCTION: ROBLOXSTUDIO 0x00bc93a0
extern "C" __declspec(naked) void asm_00bc93a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi - 0x11c] }
	__asm { cmp eax, 2 }
	__asm { ja L_00bc93c8 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bc90f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc93c8: }
	__asm { cmp esi, 0x101 }
	__asm { jge L_00bc9408 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10748] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { je L_00bc93f5 }
	__asm { push 0xee1d80 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc93f5: }
	__asm { push 0xee1d8c }
	__asm { push dword ptr [eax + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc9408: }
	__asm { mov eax, dword ptr [esi*4 + 0xee18c4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00bc95c0
extern "C" __declspec(naked) void asm_00bc95c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, -0x1b }
	__asm { jbe L_00bc95d9 }
	__asm { push esi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bc95d9: }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov edx, eax }
	__asm { mov cl, byte ptr [ecx + 0x14] }
	__asm { add esp, 0x10 }
	__asm { and cl, 3 }
	__asm { mov byte ptr [edx + 5], cl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], edi }
	__asm { mov byte ptr [edx + 4], 7 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov byte ptr [edx + 0x14], 1 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 0x70] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [eax + 0x70] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
// FUNCTION: ROBLOXSTUDIO 0x00bc9880
extern "C" __declspec(naked) void asm_00bc9880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edx, 0xee1e60 }
	__asm { je L_00bc98b0 }
	__asm { mov cl, byte ptr [esi + 8] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { push 0 }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { L_00bc98b0: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 0 }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { push 0 }
	__asm { push 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bca460();
// FUNCTION: ROBLOXSTUDIO 0x00bc9990
extern "C" __declspec(naked) void asm_00bc9990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edx, dword ptr [ecx + 0x20] }
	__asm { test edx, edx }
	__asm { je L_00bc99d9 }
	__asm { mov edi, dword ptr [ecx + 0x10] }
	__asm { mov eax, edx }
	__asm { add eax, eax }
	__asm { cmp dword ptr [edi + eax*8 - 8], 0 }
	__asm { jne L_00bc99d9 }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp edx, 1 }
	__asm { jbe L_00bc99d3 }
	__asm { L_00bc99b4: }
	__asm { lea ecx, [esi + edx] }
	__asm { shr ecx, 1 }
	__asm { mov eax, ecx }
	__asm { add eax, eax }
	__asm { cmp dword ptr [edi + eax*8 - 8], 0 }
	__asm { jne L_00bc99c8 }
	__asm { mov edx, ecx }
	__asm { jmp L_00bc99ca }
	__asm { L_00bc99c8: }
	__asm { mov esi, ecx }
	__asm { L_00bc99ca: }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { ja L_00bc99b4 }
	__asm { L_00bc99d3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc99d9: }
	__asm { cmp dword ptr [ecx + 0x14], 0xee1e60 }
	__asm { jne L_00bc99e7 }
	__asm { mov eax, edx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc99e7: }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00bca460 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc9e10();
// FUNCTION: ROBLOXSTUDIO 0x00bc9d00
extern "C" __declspec(naked) void asm_00bc9d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 1 }
	__asm { mov cl, byte ptr [edx + 8] }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { dec eax }
	__asm { and eax, dword ptr [ecx + 8] }
	__asm { shl eax, 5 }
	__asm { add eax, dword ptr [edx + 0x14] }
	__asm { L_00bc9d20: }
	__asm { cmp dword ptr [eax + 0x18], 4 }
	__asm { jne L_00bc9d2b }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { je L_00bc9d34 }
	__asm { L_00bc9d2b: }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00bc9d20 }
	__asm { jmp L_00bc9d3b }
	__asm { L_00bc9d34: }
	__asm { cmp eax, 0xea7e68 }
	__asm { jne L_00bc9d55 }
	__asm { L_00bc9d3b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 8], 4 }
	__asm { call fn_00bc9e10 }
	__asm { add esp, 0xc }
	__asm { L_00bc9d55: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00bca320
extern "C" __declspec(naked) void asm_00bca320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + 1] }
	__asm { cmp eax, 0xfffffff }
	__asm { ja L_00bca352 }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bca35d }
	__asm { L_00bca352: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bca35d: }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp eax, edi }
	__asm { jge L_00bca381 }
	__asm { mov ecx, eax }
	__asm { mov edx, edi }
	__asm { shl ecx, 4 }
	__asm { sub edx, eax }
	__asm { L_00bca370: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { mov dword ptr [eax + ecx - 8], 0 }
	__asm { dec edx }
	__asm { jne L_00bca370 }
	__asm { L_00bca381: }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bca5e0
extern "C" __declspec(naked) void asm_00bca5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00bca628 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call eax }
	__asm { mov edx, eax }
	__asm { add esp, 0xc }
	__asm { test edx, edx }
	__asm { je L_00bca631 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bca631 }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov dword ptr [esi], ecx }
	__asm { movzx eax, byte ptr [edx] }
	__asm { inc edx }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { cmp eax, -1 }
	__asm { je L_00bca631 }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00bca628: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bca631: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00bca640
extern "C" __declspec(naked) void asm_00bca640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp edi, ecx }
	__asm { jbe L_00bca690 }
	__asm { mov eax, 0x20 }
	__asm { cmp edi, eax }
	__asm { cmovb edi, eax }
	__asm { lea eax, [edi + 1] }
	__asm { cmp eax, -3 }
	__asm { ja L_00bca67c }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bca67c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bca690: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bca980();
extern "C" void fn_00c17640();
// FUNCTION: ROBLOXSTUDIO 0x00bcab60
extern "C" __declspec(naked) void asm_00bcab60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00c17640 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { jne L_00bcabac }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xc }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call dword ptr [ebp - 0x1c] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_00bcabac: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00bca980 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10600[];
extern "C" void fn_00bc9420();
// FUNCTION: ROBLOXSTUDIO 0x00bcc960
extern "C" __declspec(naked) void asm_00bcc960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 8], 3 }
	__asm { je L_00bcc977 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcc977: }
	__asm { fld qword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xee1ed8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10600] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { add esp, 0x10 }
	__asm { lea edx, [ecx + 1] }
	__asm { L_00bcc997: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00bcc997 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc9420 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 4 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bccfa0();
extern "C" void fn_00bcee60();
extern "C" void fn_00c180d0();
extern "C" void fn_00c18860();
// FUNCTION: ROBLOXSTUDIO 0x00bccbf0
extern "C" __declspec(naked) void asm_00bccbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { mov al, byte ptr [esi + 0x32] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov byte ptr [ebp - 3], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { call fn_00bccfa0 }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { movzx eax, byte ptr [edi + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_00bccc57 }
	__asm { movzx eax, byte ptr [edi + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push esi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bccc57: }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00c18860 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
extern "C" void fn_00c180d0();
extern "C" void fn_00c18130();
extern "C" void fn_00c18710();
// FUNCTION: ROBLOXSTUDIO 0x00bccde0
extern "C" __declspec(naked) void asm_00bccde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0x30] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { test esi, esi }
	__asm { je L_00bcce07 }
	__asm { L_00bccdf5: }
	__asm { cmp byte ptr [esi + 0xa], 0 }
	__asm { jne L_00bcce15 }
	__asm { movzx eax, byte ptr [esi + 9] }
	__asm { mov esi, dword ptr [esi] }
	__asm { or edi, eax }
	__asm { test esi, esi }
	__asm { jne L_00bccdf5 }
	__asm { L_00bcce07: }
	__asm { push 0xee2198 }
	__asm { push ecx }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00bcce15: }
	__asm { test edi, edi }
	__asm { je L_00bcce2d }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push ebx }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcce2d: }
	__asm { push ebx }
	__asm { call fn_00c18710 }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c18130 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
// FUNCTION: ROBLOXSTUDIO 0x00bccec0
extern "C" __declspec(naked) void asm_00bccec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0x10], edi }
	__asm { jne L_00bccedd }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bccedd: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00bccef4 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bccf12 }
	__asm { L_00bccef4: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bccf12: }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00c18f70();
// FUNCTION: ROBLOXSTUDIO 0x00bccf30
extern "C" __declspec(naked) void asm_00bccf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x10], 0x11d }
	__asm { je L_00bccf64 }
	__asm { push 0x11d }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bccf64: }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18f70 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ecx + 0x10], 0xffffffff }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 0x14], 0xffffffff }
	__asm { mov dword ptr [ecx], 4 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8720();
// FUNCTION: ROBLOXSTUDIO 0x00bcd4b0
extern "C" __declspec(naked) void asm_00bcd4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { test eax, eax }
	__asm { jne L_00bcd4e7 }
	__asm { push 0xee1fc8 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcd4e7: }
	__asm { push eax }
	__asm { push 0xee1fec }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x14 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bccaa0();
extern "C" void fn_00bce900();
// FUNCTION: ROBLOXSTUDIO 0x00bcd560
extern "C" __declspec(naked) void asm_00bcd560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bce900 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x18], 0xd }
	__asm { jne L_00bcd5a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop esi }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { and eax, 0xff807fff }
	__asm { or eax, 0x4000 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcd5a0: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_00bccaa0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c183e0();
extern "C" void fn_00c18ce0();
extern "C" void fn_00c18dd0();
// FUNCTION: ROBLOXSTUDIO 0x00bce2f0
extern "C" __declspec(naked) void asm_00bce2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { je L_00bce358 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { cmp eax, 0xd }
	__asm { je L_00bce334 }
	__asm { cmp eax, 0xe }
	__asm { je L_00bce334 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00bce31b }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c183e0 }
	__asm { add esp, 8 }
	__asm { L_00bce31b: }
	__asm { push dword ptr [edi + 0x24] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push dword ptr [edi + 0x20] }
	__asm { push dword ptr [eax + 8] }
	__asm { push esi }
	__asm { call fn_00c18ce0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bce334: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c18dd0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push -1 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { push dword ptr [eax + 8] }
	__asm { push esi }
	__asm { call fn_00c18ce0 }
	__asm { add esp, 0x1c }
	__asm { dec dword ptr [edi + 0x20] }
	__asm { pop esi }
	__asm { L_00bce358: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8720();
extern "C" void fn_00bcf6c0();
// FUNCTION: ROBLOXSTUDIO 0x00bce360
extern "C" __declspec(naked) void asm_00bce360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bcf6c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi + 0x20], 0x7ffffffd }
	__asm { jle L_00bce3c7 }
	__asm { mov edi, dword ptr [edi + 0x30] }
	__asm { push 0xee20b4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0x7ffffffd }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { test eax, eax }
	__asm { jne L_00bce3a8 }
	__asm { push 0xee1fc8 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bce3b9 }
	__asm { L_00bce3a8: }
	__asm { push eax }
	__asm { push 0xee1fec }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x14 }
	__asm { L_00bce3b9: }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { L_00bce3c7: }
	__asm { inc dword ptr [esi + 0x20] }
	__asm { inc dword ptr [esi + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8720();
extern "C" void fn_00bcedb0();
// FUNCTION: ROBLOXSTUDIO 0x00bce690
extern "C" __declspec(naked) void asm_00bce690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { cmp eax, 0xc8 }
	__asm { jle L_00bce6f1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0xee205c }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { push 0xc8 }
	__asm { test eax, eax }
	__asm { jne L_00bce6d2 }
	__asm { push 0xee1fc8 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bce6e3 }
	__asm { L_00bce6d2: }
	__asm { push eax }
	__asm { push 0xee1fec }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x14 }
	__asm { L_00bce6e3: }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { L_00bce6f1: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00bcedb0 }
	__asm { movzx ecx, byte ptr [esi + 0x32] }
	__asm { add esp, 8 }
	__asm { add ecx, ebx }
	__asm { pop edi }
	__asm { mov word ptr [esi + ecx*2 + 0xac], ax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bccec0();
extern "C" void fn_00bcf410();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00c181b0();
// FUNCTION: ROBLOXSTUDIO 0x00bce890
extern "C" __declspec(naked) void asm_00bce890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { cmp eax, 0x28 }
	__asm { je L_00bce8c6 }
	__asm { cmp eax, 0x11d }
	__asm { je L_00bce8b7 }
	__asm { push 0xee2140 }
	__asm { push ebx }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bce8b7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00bcf410 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bce8c6: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push ebx }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00bcf6c0 }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { push 0x29 }
	__asm { push ebx }
	__asm { call fn_00bccec0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { call fn_00c181b0 }
	__asm { add esp, 0x28 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bcf480();
extern "C" void fn_00c18f70();
// FUNCTION: ROBLOXSTUDIO 0x00bcf410
extern "C" __declspec(naked) void asm_00bcf410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x10], 0x11d }
	__asm { je L_00bcf445 }
	__asm { push 0x11d }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcf445: }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [esi + 0x30] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bcf480 }
	__asm { add esp, 0x14 }
	__asm { cmp eax, 8 }
	__asm { jne L_00bcf473 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c18f70 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_00bcf473: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00c18460();
// FUNCTION: ROBLOXSTUDIO 0x00bcfaa0
extern "C" __declspec(naked) void asm_00bcfaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00bcf6c0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18460 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [edi + 0x10], 0x5d }
	__asm { je L_00bcfaec }
	__asm { push 0x5d }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcfaec: }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd1ab0
extern "C" __declspec(naked) void asm_00bd1ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd1b0a }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, dword ptr [ecx + 0x1e0] }
	__asm { jb L_00bd1b0a }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd1af5 }
	__asm { push 0x36 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx eax, al }
	__asm { test eax, eax }
	__asm { jne L_00bd1b0a }
	__asm { L_00bd1af5: }
	__asm { push 0xee2ce0 }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd1b0a: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { imul eax, eax, 0xc }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a49de0();
extern "C" void fn_00c191b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd1c40
extern "C" __declspec(naked) void asm_00bd1c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5da88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee2938 }
	__asm { mov ecx, dword ptr [esi + 0xd0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00bd1c87 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { L_00bd1c87: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c191b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00bd1ca4 }
	__asm { push esi }
	__asm { call fn_00a49de0 }
	__asm { add esp, 4 }
	__asm { L_00bd1ca4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00bc14a0();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd2e50();
// FUNCTION: ROBLOXSTUDIO 0x00bd1d80
extern "C" __declspec(naked) void asm_00bd1d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { call fn_00bc14a0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jl L_00bd1df2 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd2e50 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd1df2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd2ce0();
// FUNCTION: ROBLOXSTUDIO 0x00bd2870
extern "C" __declspec(naked) void asm_00bd2870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [eax + 0x18], 0 }
	__asm { je L_00bd28a4 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ecx + 0x1c], 0 }
	__asm { je L_00bd28a4 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00bd2ce0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00bd1080 }
	__asm { jmp L_00bd28f0 }
	__asm { L_00bd28a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd28f0 }
	__asm { xor ecx, ecx }
	__asm { jne L_00bd28f0 }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd28db }
	__asm { push 0x25b }
	__asm { push 0xee29f0 }
	__asm { push 0x10062b8 }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { jne L_00bd28f0 }
	__asm { L_00bd28db: }
	__asm { push 0xee2bf8 }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd28f0: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00532830();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd3050
extern "C" __declspec(naked) void asm_00bd3050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd30a8 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ecx + 0x1e0], 0x28 }
	__asm { jb L_00bd30a8 }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd3093 }
	__asm { push 0x1a }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca80c }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { jne L_00bd30a8 }
	__asm { L_00bd3093: }
	__asm { push 0xeca818 }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd30a8: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [edx + 0x1e0] }
	__asm { imul ecx, ecx, 0xc }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { call fn_00532830 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x1e0] }
	__asm { add ecx, 1 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 0x1e0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd30e0
extern "C" __declspec(naked) void asm_00bd30e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd3138 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ecx + 0xa0], 0x28 }
	__asm { jb L_00bd3138 }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd3123 }
	__asm { push 0x1a }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca80c }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { jne L_00bd3138 }
	__asm { L_00bd3123: }
	__asm { push 0xeca818 }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd3138: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edx + 0xa0] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edx] }
	__asm { mov dword ptr [ecx + eax*4], edx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0xa0] }
	__asm { add ecx, 1 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 0xa0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00bc1c40();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd2e50();
// FUNCTION: ROBLOXSTUDIO 0x00bd3a80
extern "C" __declspec(naked) void asm_00bd3a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { call fn_00bc1c40 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jl L_00bd3af2 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd2e50 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd3af2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00665970();
extern "C" void fn_00b60460();
extern "C" void fn_00b604b0();
extern "C" void fn_00c1acb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bd3fb0
extern "C" __declspec(naked) void asm_00bd3fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dc98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee2e04 }
	__asm { mov ecx, dword ptr [esi + 0xdc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00bd3ff8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { L_00bd3ff8: }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { test edi, edi }
	__asm { je L_00bd401f }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_00b60460 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_00665970 }
	__asm { mov ecx, edi }
	__asm { call fn_00b604b0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bd401f: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c1acb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bd41d0
extern "C" __declspec(naked) void asm_00bd41d0()
{
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00bd4229 }
	__asm { mov dword ptr [edx], 0xee2db0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [edx + 0x18], al }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov dword ptr [edx], 0xee2dcc }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edx + 0x24], eax }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bd4229: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00bc14a0();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd4f90();
// FUNCTION: ROBLOXSTUDIO 0x00bd4230
extern "C" __declspec(naked) void asm_00bd4230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_00bc14a0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jl L_00bd42a2 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd4f90 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd42a2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00bd4600();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00bd48b0
extern "C" __declspec(naked) void asm_00bd48b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x1233a5c }
	__asm { mov esi, ecx }
	__asm { push 0x12339a4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00bd4914 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push 0 }
	__asm { push 0x1233a5c }
	__asm { push 0x12339a4 }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00bd4914 }
	__asm { mov ecx, esi }
	__asm { call fn_00bd4600 }
	__asm { mov ecx, dword ptr [esi + 0xdc] }
	__asm { test ecx, ecx }
	__asm { je L_00bd4914 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x14] }
	__asm { L_00bd4914: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd4e20();
// FUNCTION: ROBLOXSTUDIO 0x00bd4ae0
extern "C" __declspec(naked) void asm_00bd4ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [eax + 0x20], 0 }
	__asm { je L_00bd4b14 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ecx + 0x24], 0 }
	__asm { je L_00bd4b14 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00bd4e20 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00bd1080 }
	__asm { jmp L_00bd4b60 }
	__asm { L_00bd4b14: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd4b60 }
	__asm { xor ecx, ecx }
	__asm { jne L_00bd4b60 }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd4b4b }
	__asm { push 0x28b }
	__asm { push 0xee2e38 }
	__asm { push 0x10062b8 }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { jne L_00bd4b60 }
	__asm { L_00bd4b4b: }
	__asm { push 0xee3160 }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd4b60: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00bc1c40();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd4f90();
// FUNCTION: ROBLOXSTUDIO 0x00bd5ae0
extern "C" __declspec(naked) void asm_00bd5ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_00bc1c40 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jl L_00bd5b52 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd4f90 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd5b52: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0130f770[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00bd6a70
extern "C" __declspec(naked) void asm_00bd6a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov dword ptr [esi], 0xee252c }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { cmp byte ptr [g_0130f770], 0 }
	__asm { jne L_00bd6ad8 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130f76c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xbd77a0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f770], 1 }
	__asm { L_00bd6ad8: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x110], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x114], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x118], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x11c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x120], eax }
	__asm { mov dword ptr [esi], 0xee3754 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd7930
extern "C" __declspec(naked) void asm_00bd7930()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0xd4], esi }
	__asm { jbe L_00bd7998 }
	__asm { mov edi, edi }
	__asm { L_00bd7940: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bd7986 }
	__asm { cmp esi, dword ptr [edi + 0xd4] }
	__asm { jb L_00bd7986 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd7975 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd7986 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd7975: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd7986: }
	__asm { mov ecx, dword ptr [edi + esi*4 + 0x34] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0xd4] }
	__asm { jb L_00bd7940 }
	__asm { L_00bd7998: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd8560
extern "C" __declspec(naked) void asm_00bd8560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x244] }
	__asm { test al, al }
	__asm { je L_00bd85bd }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0xa0] }
	__asm { jb L_00bd85b4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd85a3 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd85b4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd85a3: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd85b4: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd85bd: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd8960
extern "C" __declspec(naked) void asm_00bd8960()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x2e4], esi }
	__asm { jbe L_00bd89cb }
	__asm { mov edi, edi }
	__asm { L_00bd8970: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bd89b6 }
	__asm { cmp esi, dword ptr [edi + 0x2e4] }
	__asm { jb L_00bd89b6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd89a5 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd89b6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd89a5: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd89b6: }
	__asm { mov ecx, dword ptr [edi + esi*4 + 0x244] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x2e4] }
	__asm { jb L_00bd8970 }
	__asm { L_00bd89cb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099dde0();
extern "C" void fn_00b49af0();
extern "C" void fn_00bd9b40();
// FUNCTION: ROBLOXSTUDIO 0x00bd8ec0
extern "C" __declspec(naked) void asm_00bd8ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee3d9c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bd9b40 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bd8f35 }
	__asm { cmp dword ptr [esi + 0x4c], 0 }
	__asm { je L_00bd8f35 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd8f24 }
	__asm { push 0x56 }
	__asm { push 0xee3fa4 }
	__asm { push 0xee4074 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8f35 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd8f24: }
	__asm { movzx eax, al }
	__asm { push 0xee4090 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8f35: }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { push 0 }
	__asm { call fn_0099dde0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b49af0 }
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
// FUNCTION: ROBLOXSTUDIO 0x00bd8f60
extern "C" __declspec(naked) void asm_00bd8f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bd8fb6 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0x20] }
	__asm { jb L_00bd8fad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd8f9c }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8fad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd8f9c: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8fad: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd8fb6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00891b10();
extern "C" void fn_0099c790();
extern "C" void fn_0099ce30();
// FUNCTION: ROBLOXSTUDIO 0x00bd9c70
extern "C" __declspec(naked) void asm_00bd9c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00891b10 }
	__asm { mov edx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x88] }
	__asm { cmp eax, 2 }
	__asm { jne L_00bd9c97 }
	__asm { mov eax, 3 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bd9c97: }
	__asm { mov ecx, esi }
	__asm { call fn_0099c790 }
	__asm { cmp eax, 1 }
	__asm { jne L_00bd9ca6 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bd9ca6: }
	__asm { mov ecx, esi }
	__asm { call fn_0099ce30 }
	__asm { cmp eax, 4 }
	__asm { jne L_00bd9cb5 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bd9cb5: }
	__asm { mov ecx, esi }
	__asm { call fn_0099ce30 }
	__asm { mov edx, 9 }
	__asm { cmp eax, edx }
	__asm { mov ecx, 2 }
	__asm { cmove ecx, edx }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd9cd0
extern "C" __declspec(naked) void asm_00bd9cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x2c] }
	__asm { test al, al }
	__asm { je L_00bd9d27 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0x20] }
	__asm { jb L_00bd9d1e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd9d0d }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd9d1e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd9d0d: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd9d1e: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd9d27: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bd9000();
extern "C" void fn_00c1bca0();
// FUNCTION: ROBLOXSTUDIO 0x00bda1e0
extern "C" __declspec(naked) void asm_00bda1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00bda230 }
	__asm { cmp esi, dword ptr [edi + 0x4c] }
	__asm { jb L_00bda230 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bda21f }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bda230 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bda21f: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bda230: }
	__asm { mov ecx, dword ptr [edi + esi*4 + 0x2c] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00c1bca0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00bd9000 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00914100();
extern "C" void fn_0099dde0();
extern "C" void fn_00bda820();
extern "C" void fn_00bdaa40();
// FUNCTION: ROBLOXSTUDIO 0x00bda9e0
extern "C" __declspec(naked) void asm_00bda9e0()
{
	__asm { fldz }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { mov ecx, esi }
	__asm { test al, al }
	__asm { je L_00bdaa36 }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { je L_00bdaa28 }
	__asm { cmp dword ptr [esi + 0x4c], 0 }
	__asm { jne L_00bdaa13 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov ecx, esi }
	__asm { call fn_00bda820 }
	__asm { L_00bdaa13: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov ecx, esi }
	__asm { call fn_00bdaa40 }
	__asm { L_00bdaa28: }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { push 1 }
	__asm { call fn_0099dde0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bdaa36: }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_0130f7b8[];
extern "C" char g_0130f7bc[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00bdc2e0
extern "C" __declspec(naked) void asm_00bdc2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5debe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f7bc] }
	__asm { test al, 1 }
	__asm { jne L_00bdc322 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f7bc], eax }
	__asm { push 0xee489c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f7b8], eax }
	__asm { L_00bdc322: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00bdc660
extern "C" __declspec(naked) void asm_00bdc660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x64], 2 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xee4948 }
	__asm { mov ecx, 0xe57154 }
	__asm { cmovne edx, ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00bdc6ad }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bdc6ad: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00bdc6b3: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00bdc6b3 }
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
	__asm { ret 4 }
}
