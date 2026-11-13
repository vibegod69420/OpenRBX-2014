// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0069d490();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069b7b0
extern "C" __declspec(naked) void asm_0069b7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14310 }
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
	__asm { je L_0069b808 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4152c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0069b80a }
	__asm { L_0069b808: }
	__asm { xor eax, eax }
	__asm { L_0069b80a: }
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
	__asm { call fn_0069d490 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00afaed0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x0069bae0
extern "C" __declspec(naked) void asm_0069bae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ebx }
	__asm { je L_0069bb33 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0069baf6: }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00afaed0 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { ja L_0069bb2a }
	__asm { add edi, 8 }
	__asm { cmp edi, ebx }
	__asm { jne L_0069baf6 }
	__asm { L_0069bb2a: }
	__asm { pop esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069bb33: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0069e860();
// FUNCTION: ROBLOXSTUDIO 0x0069d4f0
extern "C" __declspec(naked) void asm_0069d4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c751 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_0069e860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0069d550 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { L_0069d550: }
	__asm { add esi, 0x1c }
	__asm { je L_0069d562 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_0069d562: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0065e670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069de10
extern "C" __declspec(naked) void asm_0069de10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { je L_0069de5b }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x24] }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_0065e670 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_0069de5b: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0069de6b }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069de6b: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0069e5f0
extern "C" __declspec(naked) void asm_0069e5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_0069e618 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069e618: }
	__asm { cmp eax, 0x38e38e3 }
	__asm { jbe L_0069e62a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0069e62a: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*8] }
	__asm { shl edi, 3 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0069e650 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069e650: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x006a2760
extern "C" __declspec(naked) void asm_006a2760()
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
	__asm { jae L_006a2795 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_006a279f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_006a279f }
	__asm { L_006a2795: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006a279f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006a3e50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a2ca0
extern "C" __declspec(naked) void asm_006a2ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd149c0 }
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
	__asm { je L_006a2cf8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe422d8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006a2cfa }
	__asm { L_006a2cf8: }
	__asm { xor eax, eax }
	__asm { L_006a2cfa: }
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
	__asm { call fn_006a3e50 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a2dd0
extern "C" __declspec(naked) void asm_006a2dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd149d0 }
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
	__asm { je L_006a2e28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe422c0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006a2e2a }
	__asm { L_006a2e28: }
	__asm { xor eax, eax }
	__asm { L_006a2e2a: }
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
	__asm { je L_006a2e4e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_006a2e4e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006a5160();
extern "C" void fn_006a5bd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a30e0
extern "C" __declspec(naked) void asm_006a30e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14a43 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006a3139 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { pop esi }
	__asm { jmp L_006a313b }
	__asm { L_006a3139: }
	__asm { xor edi, edi }
	__asm { L_006a313b: }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006a5bd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x006a3e90
extern "C" __declspec(naked) void asm_006a3e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14c09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006a3f12 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_006a3f12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10340[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a41d0
extern "C" __declspec(naked) void asm_006a41d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14c28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e10340] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_006a422c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006a422c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a5cb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5ae0
extern "C" __declspec(naked) void asm_006a5ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_006a5b48 }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_006a5b3d }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a5cb0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006a5b2c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5b2c: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_006a5b3d: }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5b48: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
// FUNCTION: ROBLOXSTUDIO 0x006a6a20
extern "C" __declspec(naked) void asm_006a6a20()
{
	__asm { push esi }
	__asm { mov esi, 0xb }
	__asm { cmp dword ptr [ecx + 0x10], esi }
	__asm { cmovb esi, dword ptr [ecx + 0x10] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_006a6a35 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_006a6a35: }
	__asm { mov eax, 0xb }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0x10184cc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { jne L_006a6a6b }
	__asm { cmp esi, 0xb }
	__asm { jae L_006a6a63 }
	__asm { or ecx, 0xffffffff }
	__asm { test ecx, ecx }
	__asm { sete al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_006a6a63: }
	__asm { xor ecx, ecx }
	__asm { cmp esi, 0xb }
	__asm { setne cl }
	__asm { L_006a6a6b: }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sete al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00618ac0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a7c10
extern "C" __declspec(naked) void asm_006a7c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14f30 }
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
	__asm { je L_006a7c68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe42760 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006a7c6a }
	__asm { L_006a7c68: }
	__asm { xor eax, eax }
	__asm { L_006a7c6a: }
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

extern "C" char g_00e103b0[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a9ad0
extern "C" __declspec(naked) void asm_006a9ad0()
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
	__asm { jne L_006a9b06 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [edi + 0xc], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jne L_006a9b06 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9b06: }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006aa160
extern "C" __declspec(naked) void asm_006aa160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test edi, edi }
	__asm { jne L_006aa18a }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006aa18a: }
	__asm { cmp edi, 0xfffffff }
	__asm { jbe L_006aa19d }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006aa19d: }
	__asm { shl edi, 4 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006aa1bf }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006aa1bf: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_0061e5c0();
// FUNCTION: ROBLOXSTUDIO 0x006aa330
extern "C" __declspec(naked) void asm_006aa330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_006aa35e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_006aa35e }
	__asm { sub edi, ecx }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006aa357 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0061e5c0 }
	__asm { L_006aa357: }
	__asm { and edi, 0xfffffff0 }
	__asm { add edi, dword ptr [esi] }
	__asm { jmp L_006aa36c }
	__asm { L_006aa35e: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006aa36c }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0061e5c0 }
	__asm { L_006aa36c: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006aa389 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_006aa389: }
	__asm { add dword ptr [esi + 4], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b3dc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b0370
extern "C" __declspec(naked) void asm_006b0370()
{
	__asm { push -1 }
	__asm { push 0xd157a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006b03c2 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_006b03c2: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { call fn_006b3dc0 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b0440
extern "C" __declspec(naked) void asm_006b0440()
{
	__asm { push -1 }
	__asm { push 0xd157d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x24], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006b048d }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { L_006b048d: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006b049c }
	__asm { mov edx, dword ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { L_006b049c: }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

extern "C" void fn_0042c130();
extern "C" void fn_006b3df0();
// FUNCTION: ROBLOXSTUDIO 0x006b08f0
extern "C" __declspec(naked) void asm_006b08f0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test esi, esi }
	__asm { jne L_006b0902 }
	__asm { mov eax, 0x80004003 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0902: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { push 0xe43428 }
	__asm { push edi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b0937 }
	__asm { push 0xf0d610 }
	__asm { push edi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b0937 }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, 0x80004002 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0937: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 0xc }
}

extern "C" void fn_0042c130();
extern "C" void fn_006b3df0();
// FUNCTION: ROBLOXSTUDIO 0x006b0a30
extern "C" __declspec(naked) void asm_006b0a30()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test esi, esi }
	__asm { jne L_006b0a42 }
	__asm { mov eax, 0x80004003 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0a42: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { push 0xe43438 }
	__asm { push edi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b0a77 }
	__asm { push 0xf0d610 }
	__asm { push edi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b0a77 }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, 0x80004002 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0a77: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 0xc }
}

extern "C" char g_00e132c4[];
extern "C" char g_00e132c8[];
extern "C" char g_00e132d4[];
extern "C" char g_00e132e0[];
extern "C" void fn_006b17e0();
// FUNCTION: ROBLOXSTUDIO 0x006b1c30
extern "C" __declspec(naked) void asm_006b1c30()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { mov edx, dword ptr [eax + 0x20] }
	__asm { add ecx, -0x10 }
	__asm { push esi }
	__asm { call edx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_006b1c4d }
	__asm { lea eax, [esi + 1] }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b1c4d: }
	__asm { push 0 }
	__asm { call dword ptr [g_00e132e0] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push 0xe43498 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe43388 }
	__asm { call dword ptr [g_00e132c8] }
	__asm { test eax, eax }
	__asm { jl L_006b1c8b }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_006b17e0 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { L_006b1c8b: }
	__asm { call dword ptr [g_00e132d4] }
	__asm { call dword ptr [g_00e132c4] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e132c4[];
extern "C" char g_00e132c8[];
extern "C" char g_00e132d4[];
extern "C" char g_00e132e0[];
extern "C" void fn_006b17e0();
// FUNCTION: ROBLOXSTUDIO 0x006b1ca0
extern "C" __declspec(naked) void asm_006b1ca0()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { mov edx, dword ptr [eax + 0x20] }
	__asm { add ecx, -0x10 }
	__asm { push esi }
	__asm { call edx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_006b1cbd }
	__asm { lea eax, [esi + 1] }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b1cbd: }
	__asm { push edi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e132e0] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push 0xe43498 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe43388 }
	__asm { call dword ptr [g_00e132c8] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jl L_006b1d00 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_006b17e0 }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { L_006b1d00: }
	__asm { call dword ptr [g_00e132d4] }
	__asm { call dword ptr [g_00e132c4] }
	__asm { mov eax, edi }
	__asm { sub eax, 0x80070002 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b1d20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b2600
extern "C" __declspec(naked) void asm_006b2600()
{
	__asm { push -1 }
	__asm { push 0xd15a4b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { test esi, esi }
	__asm { jne L_006b2641 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b2641: }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_006b266e }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { add ecx, -0xc }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_006b1d20 }
	__asm { jmp L_006b2670 }
	__asm { L_006b266e: }
	__asm { xor eax, eax }
	__asm { L_006b2670: }
	__asm { mov dword ptr [esi], eax }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, 0x7ff8fff2 }
	__asm { add eax, 0x8007000e }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

extern "C" char g_00e132cc[];
extern "C" char g_00e132d0[];
// FUNCTION: ROBLOXSTUDIO 0x006b27c0
extern "C" __declspec(naked) void asm_006b27c0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x40], ebx }
	__asm { jne L_006b27d5 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b27d5: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e132d0] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_006b27f9 }
	__asm { cmp ebx, dword ptr [esi + 0x40] }
	__asm { ja L_006b27f1 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b27f1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b27f9: }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { je L_006b2809 }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { push eax }
	__asm { call dword ptr [g_00e132cc] }
	__asm { L_006b2809: }
	__asm { mov dword ptr [esi + 0x44], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x40], ebx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10624[];
// FUNCTION: ROBLOXSTUDIO 0x006b2f00
extern "C" __declspec(naked) void asm_006b2f00()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test esi, esi }
	__asm { jne L_006b2f12 }
	__asm { mov eax, 0x80004003 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b2f12: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10624] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov edx, dword ptr [ecx - 0xc] }
	__asm { dec eax }
	__asm { add ecx, -0xc }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { je L_006b2f3a }
	__asm { add eax, 0xc }
	__asm { jmp L_006b2f3c }
	__asm { L_006b2f3a: }
	__asm { xor eax, eax }
	__asm { L_006b2f3c: }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_006b2f50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b2f50: }
	__asm { mov eax, 0x80040216 }
	__asm { pop esi }
	__asm { ret 0xc }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006b2fc0
extern "C" __declspec(naked) void asm_006b2fc0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea edi, [esi + 0x58] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { test eax, eax }
	__asm { jl L_006b3006 }
	__asm { cmp eax, dword ptr [esi + 0x50] }
	__asm { jge L_006b3006 }
	__asm { mov ecx, dword ptr [esi + 0x54] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { test eax, eax }
	__asm { je L_006b2ff6 }
	__asm { push edi }
	__asm { lea esi, [eax + 0x48] }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b2ff6: }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b3006: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e132d0[];
extern "C" void fn_006b2f60();
extern "C" void fn_006b3a80();
// FUNCTION: ROBLOXSTUDIO 0x006b3020
extern "C" __declspec(naked) void asm_006b3020()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_006b3032 }
	__asm { mov eax, 0x80004003 }
	__asm { pop edi }
	__asm { ret 8 }
	__asm { L_006b3032: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { lea eax, [ecx - 0x54] }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, ecx }
	__asm { mov ecx, dword ptr [ecx + 0x94] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b2f60 }
	__asm { mov esi, eax }
	__asm { inc esi }
	__asm { cmp esi, 1 }
	__asm { jge L_006b305e }
	__asm { pop esi }
	__asm { mov eax, 0x80040216 }
	__asm { pop edi }
	__asm { ret 8 }
	__asm { L_006b305e: }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e132d0] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_006b3076 }
	__asm { pop esi }
	__asm { mov eax, 0x8007000e }
	__asm { pop edi }
	__asm { ret 8 }
	__asm { L_006b3076: }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006b3a80 }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { ret 8 }
}

extern "C" char g_00e1018c[];
extern "C" char g_00e101a4[];
// FUNCTION: ROBLOXSTUDIO 0x006b37d0
extern "C" __declspec(naked) void asm_006b37d0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e1018c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { call ebx }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { jne L_006b37ff }
	__asm { test edi, edi }
	__asm { je L_006b37ff }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jl L_006b37ff }
	__asm { mov dword ptr [edi], 0x8007000e }
	__asm { L_006b37ff: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call ebx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { jne L_006b381e }
	__asm { test edi, edi }
	__asm { je L_006b381e }
	__asm { cmp dword ptr [edi], eax }
	__asm { jl L_006b381e }
	__asm { mov dword ptr [edi], 0x8007000e }
	__asm { L_006b381e: }
	__asm { mov edi, dword ptr [g_00e101a4] }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { call edi }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { call edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e1012c[];
extern "C" char g_00e10188[];
extern "C" char g_00e10194[];
extern "C" char g_00e101a8[];
// FUNCTION: ROBLOXSTUDIO 0x006b3840
extern "C" __declspec(naked) void asm_006b3840()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1012c] }
	__asm { mov ebx, dword ptr [g_00e10194] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_006b3869 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10188] }
	__asm { push edi }
	__asm { call ebx }
	__asm { L_006b3869: }
	__asm { mov edi, dword ptr [g_00e101a8] }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { call edi }
	__asm { lea edx, [esi + 0x18] }
	__asm { push edx }
	__asm { call edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_006b3885 }
	__asm { push eax }
	__asm { call ebx }
	__asm { L_006b3885: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { test esi, esi }
	__asm { je L_006b388f }
	__asm { push esi }
	__asm { call ebx }
	__asm { L_006b388f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10120[];
extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006b3a30
extern "C" __declspec(naked) void asm_006b3a30()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea edi, [esi + 0x18] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_006b3a52 }
	__asm { push edi }
	__asm { L_006b3a46: }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_006b3a52: }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 0x6b39e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10120] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_006b3a46 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10208[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b3980();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x006b3a80
extern "C" __declspec(naked) void asm_006b3a80()
{
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { push eax }
	__asm { push 0x1012c70 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push 0xc }
	__asm { push ecx }
	__asm { call fn_006b3980 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jge L_006b3ac7 }
	__asm { xor edx, edx }
	__asm { mov word ptr [esi], dx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
	__asm { L_006b3ac7: }
	__asm { push 0xc }
	__asm { push esi }
	__asm { push -1 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10208] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { pop esi }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" char g_00e42ee4[];
extern "C" char g_00e42ee8[];
extern "C" char g_00e42eec[];
extern "C" char g_00e42ef0[];
extern "C" char g_00e43328[];
extern "C" char g_00e4332c[];
extern "C" char g_00e43330[];
extern "C" char g_00e43334[];
extern "C" char g_00e43338[];
extern "C" char g_00e4333c[];
extern "C" char g_00e43340[];
extern "C" char g_00e43344[];
// FUNCTION: ROBLOXSTUDIO 0x006b3b20
extern "C" __declspec(naked) void asm_006b3b20()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jne L_006b3b54 }
	__asm { L_006b3b2a: }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [g_00e43338] }
	__asm { mov edx, dword ptr [g_00e4333c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_00e43340] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [g_00e43344] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { ret 8 }
	__asm { L_006b3b54: }
	__asm { cmp dword ptr [eax + 0x28], 0x7c00 }
	__asm { mov ecx, 0x1f }
	__asm { jne L_006b3b70 }
	__asm { cmp dword ptr [eax + 0x2c], 0x3e0 }
	__asm { jne L_006b3b70 }
	__asm { cmp dword ptr [eax + 0x30], ecx }
	__asm { je L_006b3b2a }
	__asm { L_006b3b70: }
	__asm { cmp dword ptr [eax + 0x28], 0xf800 }
	__asm { jne L_006b3bb1 }
	__asm { cmp dword ptr [eax + 0x2c], 0x7e0 }
	__asm { jne L_006b3bb1 }
	__asm { cmp dword ptr [eax + 0x30], ecx }
	__asm { jne L_006b3bb1 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [g_00e43328] }
	__asm { mov edx, dword ptr [g_00e4332c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_00e43330] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [g_00e43334] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { ret 8 }
	__asm { L_006b3bb1: }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [g_00e42ee4] }
	__asm { mov edx, dword ptr [g_00e42ee8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_00e42eec] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [g_00e42ef0] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { ret 8 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b3fb0
extern "C" __declspec(naked) void asm_006b3fb0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006b3fc7 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test eax, eax }
	__asm { jne L_006b3fd9 }
	__asm { L_006b3fc7: }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_006b3fd9 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b3fd9: }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_006b3fff }
	__asm { inc dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b3fff: }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { inc dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b3f40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b4090
extern "C" __declspec(naked) void asm_006b4090()
{
	__asm { push -1 }
	__asm { push 0xd15bdb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_006b3f40 }
	__asm { mov esi, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006b40e6 }
	__asm { L_006b40d4: }
	__asm { mov eax, esi }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_006b40d4 }
	__asm { L_006b40e6: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_006b6ab0();
// FUNCTION: ROBLOXSTUDIO 0x006b5180
extern "C" __declspec(naked) void asm_006b5180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { test ebx, ebx }
	__asm { je L_006b51e0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b519e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jmp L_006b51a1 }
	__asm { L_006b519e: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { L_006b51a1: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b51a8 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006b51a8: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b51b8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_006b51ba }
	__asm { L_006b51b8: }
	__asm { mov ecx, edi }
	__asm { L_006b51ba: }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { add edx, edx }
	__asm { add ecx, edx }
	__asm { cmp eax, 8 }
	__asm { jb L_006b51ca }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b51cc }
	__asm { L_006b51ca: }
	__asm { mov eax, edi }
	__asm { L_006b51cc: }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { lea edx, [edx + ebx*2] }
	__asm { push edx }
	__asm { push esi }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006b6ab0 }
	__asm { pop edi }
	__asm { L_006b51e0: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de600[];
extern "C" char g_012de604[];
extern "C" char g_012de608[];
extern "C" void fn_006b51f0();
extern "C" void fn_006b5be0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006b5ac0
extern "C" __declspec(naked) void asm_006b5ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15cdc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de608] }
	__asm { test al, 1 }
	__asm { jne L_006b5b32 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de608], eax }
	__asm { mov eax, dword ptr [g_012de600] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_006b5b20 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de600], eax }
	__asm { push 0x12de5fc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b5be0 }
	__asm { push 0xde0a40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_006b5b20: }
	__asm { push 0x12de5fc }
	__asm { call fn_006b51f0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de604], eax }
	__asm { L_006b5b32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12de604 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b57b0();
extern "C" void fn_006b5ab0();
// FUNCTION: ROBLOXSTUDIO 0x006b6df0
extern "C" __declspec(naked) void asm_006b6df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15dd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov word ptr [esi], ax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006b5ab0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp word ptr [edx], 0 }
	__asm { jne L_006b6e39 }
	__asm { xor ecx, ecx }
	__asm { jmp L_006b6e50 }
	__asm { L_006b6e39: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 2] }
	__asm { nop }
	__asm { L_006b6e40: }
	__asm { mov ax, word ptr [ecx] }
	__asm { add ecx, 2 }
	__asm { test ax, ax }
	__asm { jne L_006b6e40 }
	__asm { sub ecx, edi }
	__asm { sar ecx, 1 }
	__asm { pop edi }
	__asm { L_006b6e50: }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_006b57b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b6fa0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b6f10
extern "C" __declspec(naked) void asm_006b6f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15df0 }
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
	__asm { je L_006b6f68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe43728 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006b6f6a }
	__asm { L_006b6f68: }
	__asm { xor eax, eax }
	__asm { L_006b6f6a: }
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
	__asm { call fn_006b6fa0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0042bd60();
extern "C" void fn_006b5460();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b72a0
extern "C" __declspec(naked) void asm_006b72a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15e28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { push -1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { call fn_0042bd60 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b5460 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { push -1 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov word ptr [esi], cx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042bd60 }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { jb L_006b7329 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7329: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131a0[];
extern "C" void fn_006b7060();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b7c70
extern "C" __declspec(naked) void asm_006b7c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { test bl, bl }
	__asm { jne L_006b7c9d }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { test esi, esi }
	__asm { je L_006b7cb1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b7c9d: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006b7cb9 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { L_006b7cb1: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b7cb9: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_006b7060 }
	__asm { push 0x10fdc04 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e101c0[];
extern "C" char g_00e131a0[];
extern "C" void fn_006b7060();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b7ce0
extern "C" __declspec(naked) void asm_006b7ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { test bl, bl }
	__asm { jne L_006b7d0d }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_006b7d29 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b7d0d: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e101c0] }
	__asm { test edi, edi }
	__asm { je L_006b7d31 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { L_006b7d29: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b7d31: }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_006b7060 }
	__asm { push 0x10fdc04 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e100f8[];
extern "C" char g_00e10208[];
// FUNCTION: ROBLOXSTUDIO 0x006b89c0
extern "C" __declspec(naked) void asm_006b89c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e100f8] }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { neg eax }
	__asm { sbb edx, edx }
	__asm { sub ecx, esi }
	__asm { sar ecx, 1 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { inc edx }
	__asm { push 1 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10208] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_006b8a00 }
	__asm { pop edi }
	__asm { lea eax, [ecx + 2] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_006b8a00: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + ecx*2] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor eax, eax }
	__asm { mov word ptr [ecx], ax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e100f8[];
extern "C" char g_00e101cc[];
// FUNCTION: ROBLOXSTUDIO 0x006b8a20
extern "C" __declspec(naked) void asm_006b8a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e100f8] }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { neg eax }
	__asm { sbb edx, edx }
	__asm { push 0 }
	__asm { sub ecx, esi }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { sar eax, 1 }
	__asm { push eax }
	__asm { push ecx }
	__asm { inc edx }
	__asm { push 0x400 }
	__asm { push edx }
	__asm { call dword ptr [g_00e101cc] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_006b8a67 }
	__asm { pop edi }
	__asm { lea eax, [ecx + 2] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_006b8a67: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add ecx, esi }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [ecx], 0 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10528[];
extern "C" char g_00e10534[];
extern "C" char g_00e10610[];
extern "C" void fn_0067b270();
extern "C" void fn_006b8d60();
// FUNCTION: ROBLOXSTUDIO 0x006b9500
extern "C" __declspec(naked) void asm_006b9500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16098 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10534] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10610] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b9561 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xe43794 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b270 }
	__asm { L_006b9561: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b8d60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102b0[];
extern "C" char g_011dc6f8[];
extern "C" char g_011dc6fc[];
extern "C" char g_011dc700[];
extern "C" void fn_004272a0();
extern "C" void fn_004276b0();
extern "C" void fn_006b9590();
// FUNCTION: ROBLOXSTUDIO 0x006b96c0
extern "C" __declspec(naked) void asm_006b96c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x40] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_006b9590 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { sub eax, 0 }
	__asm { je L_006b96f0 }
	__asm { dec eax }
	__asm { je L_006b96e8 }
	__asm { dec eax }
	__asm { jne L_006b96ff }
	__asm { push dword ptr [g_011dc6f8] }
	__asm { jmp L_006b96f6 }
	__asm { L_006b96e8: }
	__asm { push dword ptr [g_011dc6fc] }
	__asm { jmp L_006b96f6 }
	__asm { L_006b96f0: }
	__asm { push dword ptr [g_011dc700] }
	__asm { L_006b96f6: }
	__asm { push esi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { L_006b96ff: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_004276b0 }
	__asm { push 0xa }
	__asm { push esi }
	__asm { call fn_004272a0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102b0] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_006b99c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b98f0
extern "C" __declspec(naked) void asm_006b98f0()
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
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_006b99c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovae eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { jb L_006b9961 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b9961: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f610();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b9f30
extern "C" __declspec(naked) void asm_006b9f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd160f0 }
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
	__asm { je L_006b9f88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe439ec }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006b9f8a }
	__asm { L_006b9f88: }
	__asm { xor eax, eax }
	__asm { L_006b9f8a: }
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
	__asm { call fn_0045f610 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006ba9c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006ba060
extern "C" __declspec(naked) void asm_006ba060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16100 }
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
	__asm { je L_006ba0b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe43a04 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006ba0ba }
	__asm { L_006ba0b8: }
	__asm { xor eax, eax }
	__asm { L_006ba0ba: }
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
	__asm { call fn_006ba9c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e131b4[];
extern "C" void fn_006baa00();
extern "C" void fn_006bac70();
// FUNCTION: ROBLOXSTUDIO 0x006ba1a0
extern "C" __declspec(naked) void asm_006ba1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16120 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_006baa00 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bac70 }
	__asm { add esp, 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_006ba209 }
	__asm { test al, 1 }
	__asm { jne L_006ba202 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba202 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba202: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_006ba209: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
// FUNCTION: ROBLOXSTUDIO 0x006bab30
extern "C" __declspec(naked) void asm_006bab30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3baf8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { test eax, eax }
	__asm { jne L_006bab8d }
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
	__asm { L_006bab8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0xe439c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" void fn_006ba230();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bb4a0
extern "C" __declspec(naked) void asm_006bb4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_006bb4bc }
	__asm { cmp eax, -1 }
	__asm { je L_006bb4bc }
	__asm { push eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006bb4bc: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_006bb4f3 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { call fn_006ba230 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_006bb4f3: }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_006bb506 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006bb506: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bb6f0
extern "C" __declspec(naked) void asm_006bb6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3c], 0x10 }
	__asm { jb L_006bb707 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bb707: }
	__asm { mov dword ptr [esi + 0x3c], 0xf }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_006bb740 }
	__asm { test al, 1 }
	__asm { jne L_006bb739 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006bb739 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bb739: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006bb740: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_006bb74f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bb74f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e131b8[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bb760
extern "C" __declspec(naked) void asm_006bb760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64fa9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006bb7ad }
	__asm { test al, 1 }
	__asm { jne L_006bb7a6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006bb7a6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bb7a6: }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { L_006bb7ad: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_006bb7cb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bb7cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e100ec[];
extern "C" char g_011dc71b[];
// FUNCTION: ROBLOXSTUDIO 0x006bb7e0
extern "C" __declspec(naked) void asm_006bb7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0x10fdfb0 }
	__asm { push 0xcf6e22 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { cmp byte ptr [g_011dc71b], 0 }
	__asm { je L_006bb853 }
	__asm { mov dword ptr [ebp - 0x28], 0x1000 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push 4 }
	__asm { push 0 }
	__asm { push 0x406d1388 }
	__asm { call dword ptr [g_00e100ec] }
	__asm { jmp L_006bb84c }
	__asm { or eax, 0xffffffff }
	__asm { ret }
	__asm { mov esp, dword ptr [ebp - 0x18] }
	__asm { L_006bb84c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006bb853: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10130[];
extern "C" char g_00e10528[];
extern "C" char g_00e131a0[];
extern "C" void fn_0040f650();
// FUNCTION: ROBLOXSTUDIO 0x006bb9d0
extern "C" __declspec(naked) void asm_006bb9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10130] }
	__asm { test eax, eax }
	__asm { jne L_006bba4e }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf138fc }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x30], 0xb }
	__asm { mov dword ptr [ebp - 0x2c], esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0xe1826c }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040f650 }
	__asm { L_006bba4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de728[];
extern "C" char g_012de72c[];
extern "C" char g_012de734[];
extern "C" void fn_00403160();
extern "C" void fn_006b9f30();
extern "C" void fn_006bab30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006bbc80
extern "C" __declspec(naked) void asm_006bbc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1647e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de734] }
	__asm { test al, 1 }
	__asm { jne L_006bbceb }
	__asm { or eax, 1 }
	__asm { push esi }
	__asm { mov dword ptr [g_012de734], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_006bab30 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, 0x12de730 }
	__asm { mov dword ptr [g_012de72c], esi }
	__asm { call fn_006b9f30 }
	__asm { push esi }
	__asm { push esi }
	__asm { push 0x12de72c }
	__asm { call fn_00403160 }
	__asm { push 0xde0bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { L_006bbceb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_012de728], 0x12de72c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x006bc2a0
extern "C" __declspec(naked) void asm_006bc2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x40] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jne L_006bc2ed }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_006bc2ed: }
	__asm { lea eax, [ecx + 0x48] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_006bc310();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bc5c0
extern "C" __declspec(naked) void asm_006bc5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd164f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { cmovae eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bc310 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { jne L_006bc627 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_006bc627: }
	__asm { add eax, 8 }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_006bc647 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bc647: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f610();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bca90
extern "C" __declspec(naked) void asm_006bca90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16520 }
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
	__asm { je L_006bcae8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe43af0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006bcaea }
	__asm { L_006bcae8: }
	__asm { xor eax, eax }
	__asm { L_006bcaea: }
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
	__asm { call fn_0045f610 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
// FUNCTION: ROBLOXSTUDIO 0x006bcb20
extern "C" __declspec(naked) void asm_006bcb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3baf8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { test eax, eax }
	__asm { jne L_006bcb7d }
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
	__asm { L_006bcb7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0xe43ae4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de7a8[];
extern "C" char g_012de7b0[];
extern "C" void fn_00403160();
extern "C" void fn_004115f0();
extern "C" void fn_006bca90();
extern "C" void fn_006bcb20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006bcfd0
extern "C" __declspec(naked) void asm_006bcfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd165ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x6bd210 }
	__asm { push 0x12de7b4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de7b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_006bd04d }
	__asm { or eax, 1 }
	__asm { push esi }
	__asm { mov dword ptr [g_012de7b0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_006bcb20 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, 0x12de7ac }
	__asm { mov dword ptr [g_012de7a8], esi }
	__asm { call fn_006bca90 }
	__asm { push esi }
	__asm { push esi }
	__asm { push 0x12de7a8 }
	__asm { call fn_00403160 }
	__asm { push 0xde0ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { L_006bd04d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12de7a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de7a8[];
extern "C" char g_012de7b0[];
extern "C" void fn_00403160();
extern "C" void fn_006bca90();
extern "C" void fn_006bcb20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006bd210
extern "C" __declspec(naked) void asm_006bd210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd165ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de7b0] }
	__asm { test al, 1 }
	__asm { jne L_006bd27b }
	__asm { or eax, 1 }
	__asm { push esi }
	__asm { mov dword ptr [g_012de7b0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_006bcb20 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, 0x12de7ac }
	__asm { mov dword ptr [g_012de7a8], esi }
	__asm { call fn_006bca90 }
	__asm { push esi }
	__asm { push esi }
	__asm { push 0x12de7a8 }
	__asm { call fn_00403160 }
	__asm { push 0xde0ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { L_006bd27b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f610();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bd290
extern "C" __declspec(naked) void asm_006bd290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd165c0 }
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
	__asm { je L_006bd2e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe44834 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006bd2ea }
	__asm { L_006bd2e8: }
	__asm { xor eax, eax }
	__asm { L_006bd2ea: }
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
	__asm { call fn_0045f610 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006bd9f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bd3c0
extern "C" __declspec(naked) void asm_006bd3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd165d0 }
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
	__asm { je L_006bd418 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4487c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006bd41a }
	__asm { L_006bd418: }
	__asm { xor eax, eax }
	__asm { L_006bd41a: }
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
	__asm { call fn_006bd9f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006bda40();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bd4f0
extern "C" __declspec(naked) void asm_006bd4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd165e0 }
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
	__asm { je L_006bd548 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe44864 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006bd54a }
	__asm { L_006bd548: }
	__asm { xor eax, eax }
	__asm { L_006bd54a: }
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
	__asm { call fn_006bda40 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006bda90();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bd620
extern "C" __declspec(naked) void asm_006bd620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd165f0 }
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
	__asm { je L_006bd678 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4484c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006bd67a }
	__asm { L_006bd678: }
	__asm { xor eax, eax }
	__asm { L_006bd67a: }
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
	__asm { call fn_006bda90 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bd9f0
extern "C" __declspec(naked) void asm_006bd9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_006bda36 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 2 }
	__asm { cmp ecx, eax }
	__asm { jl L_006bda17 }
	__asm { sub edx, dword ptr [esi] }
	__asm { sar edx, 2 }
	__asm { sub ecx, edx }
	__asm { L_006bda17: }
	__asm { lea eax, [edi + ecx*4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_006bda2d }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bda2d: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bda36: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bda40
extern "C" __declspec(naked) void asm_006bda40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_006bda86 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_006bda67 }
	__asm { sub edx, dword ptr [esi] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_006bda67: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_006bda7d }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bda7d: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bda86: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
// FUNCTION: ROBLOXSTUDIO 0x006bdae0
extern "C" __declspec(naked) void asm_006bdae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3baf8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { test eax, eax }
	__asm { jne L_006bdb3d }
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
	__asm { L_006bdb3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0xe44820 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006bdbe0
extern "C" __declspec(naked) void asm_006bdbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { sar eax, 2 }
	__asm { cmp eax, ecx }
	__asm { jne L_006bdc1d }
	__asm { test ecx, ecx }
	__asm { je L_006bdc3f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [edx + 0xc], 4 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_006bdc13 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_006bdc13: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006bdc1d: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_006bdc2b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_006bdc2b: }
	__asm { add dword ptr [edx + 0xc], 4 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_006bdc3c }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_006bdc3c: }
	__asm { inc dword ptr [edx + 0x10] }
	__asm { L_006bdc3f: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10528[];
extern "C" void fn_0067b220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bed10
extern "C" __declspec(naked) void asm_006bed10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { cmp eax, 0x3fffffff }
	__asm { jbe L_006bed60 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xe3b868 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe3b758 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b220 }
	__asm { L_006bed60: }
	__asm { test eax, eax }
	__asm { jne L_006bed74 }
	__asm { L_006bed64: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006bed74: }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_006bed8b }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_006bed64 }
	__asm { L_006bed8b: }
	__asm { call dword ptr [g_00e1025c] }
}

// FUNCTION: ROBLOXSTUDIO 0x006bf4b0
extern "C" __declspec(naked) void asm_006bf4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, esi }
	__asm { jne L_006bf4dc }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { L_006bf4c8: }
	__asm { cmp dword ptr [eax + 0x14], edx }
	__asm { jae L_006bf4d2 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_006bf4d6 }
	__asm { L_006bf4d2: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006bf4d6: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006bf4c8 }
	__asm { L_006bf4dc: }
	__asm { cmp ecx, esi }
	__asm { je L_006bf4eb }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp eax, dword ptr [ecx + 0x14] }
	__asm { jae L_006bf4ee }
	__asm { L_006bf4eb: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_006bf4ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x006c01a0
extern "C" __declspec(naked) void asm_006c01a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_006c01e8 }
	__asm { cmp eax, 1 }
	__asm { je L_006c01e8 }
	__asm { cmp eax, 2 }
	__asm { je L_006c01fc }
	__asm { cmp eax, 3 }
	__asm { jne L_006c01d7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dce70 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c01d7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11dce70 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c01e8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_006c01fc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_006c01fc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012df038[];
extern "C" char g_012df280[];
extern "C" void fn_006bdf60();
extern "C" void fn_006c3b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006c0db0
extern "C" __declspec(naked) void asm_006c0db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16a1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012df280] }
	__asm { test al, 1 }
	__asm { jne L_006c0dfe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012df280], eax }
	__asm { mov ecx, 0x12df040 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bdf60 }
	__asm { push 0xde0e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006c0dfe: }
	__asm { push 0 }
	__asm { mov ecx, 0x12df040 }
	__asm { call fn_006c3b40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_012df038], 0x12df040 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c1f30();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006c1d00
extern "C" __declspec(naked) void asm_006c1d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16aa0 }
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
	__asm { je L_006c1d58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe45494 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006c1d5a }
	__asm { L_006c1d58: }
	__asm { xor eax, eax }
	__asm { L_006c1d5a: }
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
	__asm { call fn_006c1f30 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x006c1f50
extern "C" __declspec(naked) void asm_006c1f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { cmp eax, esi }
	__asm { je L_006c1f95 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { L_006c1f65: }
	__asm { test ecx, ecx }
	__asm { je L_006c1f6d }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [ecx] }
	__asm { L_006c1f6d: }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_006c1f7d }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { L_006c1f7d: }
	__asm { xor edi, edi }
	__asm { cmp eax, dword ptr [edx + 0xc] }
	__asm { cmove eax, edi }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, esi }
	__asm { jne L_006c1f65 }
	__asm { pop edi }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c1f95: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c2170();
// FUNCTION: ROBLOXSTUDIO 0x006c20a0
extern "C" __declspec(naked) void asm_006c20a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test edx, edx }
	__asm { jle L_006c20ec }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { cmp edx, eax }
	__asm { jl L_006c20cf }
	__asm { sub edi, dword ptr [esi] }
	__asm { sar edi, 3 }
	__asm { sub edx, edi }
	__asm { L_006c20cf: }
	__asm { lea ecx, [ecx + edx*8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { pop edi }
	__asm { cmp ecx, dword ptr [esi + 0xc] }
	__asm { jne L_006c20ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006c20ec: }
	__asm { jns L_006c20ff }
	__asm { neg edx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_006c2170 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { L_006c20ff: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c2170();
// FUNCTION: ROBLOXSTUDIO 0x006c2110
extern "C" __declspec(naked) void asm_006c2110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jle L_006c2154 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, ebx }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_006c2139 }
	__asm { sub edx, dword ptr [edi] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_006c2139: }
	__asm { lea eax, [ebx + ecx*8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { cmp eax, dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { jne L_006c2162 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c2154: }
	__asm { jns L_006c2160 }
	__asm { neg ecx }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006c2170 }
	__asm { L_006c2160: }
	__asm { mov eax, esi }
	__asm { L_006c2162: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c2110();
// FUNCTION: ROBLOXSTUDIO 0x006c2170
extern "C" __declspec(naked) void asm_006c2170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { jle L_006c21b5 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_006c2189 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { L_006c2189: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 3 }
	__asm { cmp edx, eax }
	__asm { jle L_006c21a1 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 3 }
	__asm { sub edx, eax }
	__asm { L_006c21a1: }
	__asm { lea eax, [edx*8] }
	__asm { sub ecx, eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c21b5: }
	__asm { jns L_006c21bf }
	__asm { neg edx }
	__asm { push edx }
	__asm { call fn_006c2110 }
	__asm { L_006c21bf: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006c2250
extern "C" __declspec(naked) void asm_006c2250()
{
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp esi, eax }
	__asm { jl L_006c226d }
	__asm { sub edx, dword ptr [ecx] }
	__asm { sar edx, 3 }
	__asm { sub esi, edx }
	__asm { L_006c226d: }
	__asm { lea eax, [edi + esi*8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx + 0x48], 1 }
	__asm { mov esi, dword ptr [ecx + 0x2c] }
	__asm { mov edi, dword ptr [ecx + 0x30] }
	__asm { mov edx, dword ptr [ecx + 0x38] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp edx, eax }
	__asm { jl L_006c229a }
	__asm { sub esi, dword ptr [ecx + 0x28] }
	__asm { sar esi, 3 }
	__asm { sub edx, esi }
	__asm { L_006c229a: }
	__asm { lea eax, [edi + edx*8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0041fe80();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006c2680
extern "C" __declspec(naked) void asm_006c2680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { je L_006c26e5 }
	__asm { nop }
	__asm { L_006c2690: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006c26d7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0x1c], 0 }
	__asm { je L_006c26d7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c26c2 }
	__asm { push 0xe9 }
	__asm { push 0xe45098 }
	__asm { push 0xe45324 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c26d7 }
	__asm { L_006c26c2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe45338 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c26d7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esi, 8 }
	__asm { mov byte ptr [eax + 0x1c], 1 }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jne L_006c2690 }
	__asm { L_006c26e5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006c35a0
extern "C" __declspec(naked) void asm_006c35a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_006c35c2 }
	__asm { sub edx, dword ptr [esi] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_006c35c2: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006c35d7 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c35d7: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { lea eax, [ecx + eax*8] }
	__asm { cmp edx, eax }
	__asm { cmove edx, ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006c41b0
extern "C" __declspec(naked) void asm_006c41b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x2c] }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_006c41d0 }
	__asm { sub edx, dword ptr [esi + 0x28] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_006c41d0: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_006c41e6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c41e6: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_006c4201 }
	__asm { sub edx, dword ptr [esi] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_006c4201: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_006c4216 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_006c4216: }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006c52b0
extern "C" __declspec(naked) void asm_006c52b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { cmp edx, eax }
	__asm { jae L_006c52ed }
	__asm { mov eax, dword ptr [ecx + edx*4] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { setne bl }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c52ed: }
	__asm { push esi }
	__asm { mov bl, 1 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c6500();
extern "C" void fn_006c6520();
// FUNCTION: ROBLOXSTUDIO 0x006c6580
extern "C" __declspec(naked) void asm_006c6580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c6500 }
	__asm { cmp eax, 1 }
	__asm { jb L_006c65b2 }
	__asm { call fn_006c6520 }
	__asm { test eax, eax }
	__asm { je L_006c65b2 }
	__asm { mov eax, 1 }
	__asm { cpuid }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { L_006c65b2: }
	__asm { test dword ptr [ebp - 4], 0x10000000 }
	__asm { jne L_006c65c5 }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c65c5: }
	__asm { xor eax, eax }
	__asm { cpuid }
	__asm { cmp eax, 4 }
	__asm { jl L_006c65df }
	__asm { mov eax, 4 }
	__asm { mov ecx, 0 }
	__asm { cpuid }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { jmp L_006c65e1 }
	__asm { L_006c65df: }
	__asm { xor eax, eax }
	__asm { L_006c65e1: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { shr eax, 0x1a }
	__asm { inc eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_006cf030();
// FUNCTION: ROBLOXSTUDIO 0x006cf100
extern "C" __declspec(naked) void asm_006cf100()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_006cf16c }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006cf135 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006cf135: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { jae L_006cf159 }
	__asm { xor edx, edx }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006cf030 }
	__asm { L_006cf159: }
	__asm { add edx, eax }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006cf030 }
	__asm { L_006cf16c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006cf100();
// FUNCTION: ROBLOXSTUDIO 0x006cf630
extern "C" __declspec(naked) void asm_006cf630()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { cmp edi, eax }
	__asm { jae L_006cf676 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_006cf676 }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006cf658 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006cf100 }
	__asm { L_006cf658: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006cf695 }
	__asm { fld dword ptr [ecx + edi*8] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + edi*8 + 4] }
	__asm { pop edi }
	__asm { fstp dword ptr [eax + 4] }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006cf676: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006cf684 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006cf100 }
	__asm { L_006cf684: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_006cf695 }
	__asm { fld dword ptr [edi] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [edi + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { L_006cf695: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006e88f0();
// FUNCTION: ROBLOXSTUDIO 0x006d1690
extern "C" __declspec(naked) void asm_006d1690()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, 4 }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_006d16c6 }
	__asm { jg L_006d16ae }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_006d16c6 }
	__asm { L_006d16ae: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add ecx, edx }
	__asm { adc eax, dword ptr [esi + 0x5c] }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_006d16c6: }
	__asm { add dword ptr [esi + 0x58], 4 }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_006d16ff }
	__asm { add ecx, dword ptr [esi + 0x58] }
	__asm { pop esi }
	__asm { movzx eax, byte ptr [ecx - 1] }
	__asm { mov byte ptr [esp], al }
	__asm { movzx eax, byte ptr [ecx - 2] }
	__asm { mov byte ptr [esp + 1], al }
	__asm { movzx eax, byte ptr [ecx - 3] }
	__asm { mov byte ptr [esp + 2], al }
	__asm { movzx eax, byte ptr [ecx - 4] }
	__asm { mov byte ptr [esp + 3], al }
	__asm { mov eax, dword ptr [esp] }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_006d16ff: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax - 4] }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e1055c[];
extern "C" char g_00e10644[];
extern "C" char g_012dfa80[];
extern "C" void fn_00403540();
extern "C" void fn_006d7bc0();
extern "C" void fn_006d7d00();
// FUNCTION: ROBLOXSTUDIO 0x006d87c0
extern "C" __declspec(naked) void asm_006d87c0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { call fn_006d7d00 }
	__asm { mov ecx, eax }
	__asm { call fn_006d7bc0 }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006d87e7 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_006d87e9 }
	__asm { L_006d87e7: }
	__asm { mov ecx, edi }
	__asm { L_006d87e9: }
	__asm { push ecx }
	__asm { push 0x100dedc }
	__asm { push esi }
	__asm { call dword ptr [g_00e10644] }
	__asm { mov eax, dword ptr [g_012dfa80] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_006d8808 }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_006d8808: }
	__asm { push esi }
	__asm { call dword ptr [g_00e1055c] }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_006d88c0();
extern "C" void fn_00701ad0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006d8840
extern "C" __declspec(naked) void asm_006d8840()
{
	__asm { push -1 }
	__asm { push 0xd1727b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x38] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { call fn_00701ad0 }
	__asm { mov esi, dword ptr [esp + 0x3c] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call fn_006d88c0 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_006d88a1 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006d88a1: }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret }
}

extern "C" char g_00e100c4[];
extern "C" char g_00e100c8[];
extern "C" char g_00e100cc[];
extern "C" char g_00e100d0[];
extern "C" char g_00e13024[];
extern "C" char g_00e13028[];
extern "C" char g_00e1302c[];
extern "C" char g_00e1306c[];
// FUNCTION: ROBLOXSTUDIO 0x006d8970
extern "C" __declspec(naked) void asm_006d8970()
{
	__asm { push 0 }
	__asm { call dword ptr [g_00e13024] }
	__asm { test eax, eax }
	__asm { je L_006d89e1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_006d8987: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006d8987 }
	__asm { sub ecx, edx }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { push 0x2042 }
	__asm { call dword ptr [g_00e100d0] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_006d89d2 }
	__asm { push edi }
	__asm { call dword ptr [g_00e100cc] }
	__asm { sub eax, esi }
	__asm { mov edi, edi }
	__asm { L_006d89b0: }
	__asm { mov cl, byte ptr [esi] }
	__asm { mov byte ptr [eax + esi], cl }
	__asm { lea esi, [esi + 1] }
	__asm { test cl, cl }
	__asm { jne L_006d89b0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e100c8] }
	__asm { call dword ptr [g_00e1306c] }
	__asm { push edi }
	__asm { push 1 }
	__asm { call dword ptr [g_00e1302c] }
	__asm { L_006d89d2: }
	__asm { call dword ptr [g_00e13028] }
	__asm { push edi }
	__asm { call dword ptr [g_00e100c4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006d89e1: }
	__asm { ret }
}

extern "C" char g_00e100e8[];
extern "C" char g_00e101b4[];
// FUNCTION: ROBLOXSTUDIO 0x006d92c0
extern "C" __declspec(naked) void asm_006d92c0()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e100e8] }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { push edi }
	__asm { mov bl, 1 }
	__asm { call esi }
	__asm { cmp eax, 1 }
	__asm { jne L_006d92fe }
	__asm { mov ebx, dword ptr [g_00e101b4] }
	__asm { mov byte ptr [esp + 0xf], 0 }
	__asm { L_006d92e5: }
	__asm { push 0 }
	__asm { call ebx }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call esi }
	__asm { cmp eax, 1 }
	__asm { je L_006d92e5 }
	__asm { mov al, byte ptr [esp + 0xf] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_006d92fe: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00705190();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006dfdf0
extern "C" __declspec(naked) void asm_006dfdf0()
{
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x2c] }
	__asm { push edi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { jne L_006dfe2e }
	__asm { xor edx, edx }
	__asm { jmp L_006dfe3c }
	__asm { L_006dfe2e: }
	__asm { mov edx, esi }
	__asm { lea ecx, [edx + 1] }
	__asm { L_006dfe33: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_006dfe33 }
	__asm { sub edx, ecx }
	__asm { L_006dfe3c: }
	__asm { push edx }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_00705190 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { mov esi, eax }
	__asm { jb L_006dfe70 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006dfe70: }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x24 }
	__asm { ret 4 }
}

extern "C" void fn_006e88f0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006e9210
extern "C" __declspec(naked) void asm_006e9210()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, edi }
	__asm { adc eax, ebx }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_006e924b }
	__asm { jg L_006e9235 }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_006e924b }
	__asm { L_006e9235: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add ecx, edx }
	__asm { adc eax, dword ptr [esi + 0x5c] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_006e924b: }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { add eax, dword ptr [esi + 0x58] }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x58], edi }
	__asm { pop edi }
	__asm { adc dword ptr [esi + 0x5c], ebx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006ea6b0
extern "C" __declspec(naked) void asm_006ea6b0()
{
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { test ecx, ecx }
	__asm { jns L_006ea6ec }
	__asm { mov eax, ecx }
	__asm { neg eax }
	__asm { cmp edx, eax }
	__asm { jae L_006ea6ec }
	__asm { add edx, ecx }
	__asm { or ecx, 0xffffffff }
	__asm { sub ecx, edx }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, 0xfffffffc }
	__asm { sub eax, ecx }
	__asm { add esi, eax }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { and edx, 0x1f }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_006ea6ec: }
	__asm { add edx, ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 5 }
	__asm { and edx, 0x1f }
	__asm { lea esi, [esi + eax*4] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" void fn_006f1800();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ea710
extern "C" __declspec(naked) void asm_006ea710()
{
	__asm { push -1 }
	__asm { push 0xd1845b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esi], 0xe46c04 }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { je L_006ea74c }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call fn_006f1800 }
	__asm { add esp, 4 }
	__asm { L_006ea74c: }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_006ea764 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ea764: }
	__asm { test byte ptr [esp + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { je L_006ea786 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ea786: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006eac30();
// FUNCTION: ROBLOXSTUDIO 0x006eada0
extern "C" __declspec(naked) void asm_006eada0()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006eae04 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { dec eax }
	__asm { cmp eax, edi }
	__asm { jae L_006eadcb }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006eadcb: }
	__asm { sub esi, ebx }
	__asm { add esi, edi }
	__asm { sub edx, ebx }
	__asm { mov edi, edx }
	__asm { shr edi, 1 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edi }
	__asm { cmp eax, edx }
	__asm { jae L_006eadf1 }
	__asm { xor edx, edx }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006eac30 }
	__asm { L_006eadf1: }
	__asm { add edx, edi }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006eac30 }
	__asm { L_006eae04: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006eaca0();
// FUNCTION: ROBLOXSTUDIO 0x006eae10
extern "C" __declspec(naked) void asm_006eae10()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { sar eax, 1 }
	__asm { cmp eax, edi }
	__asm { jae L_006eae79 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x7fffffff }
	__asm { sar esi, 1 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006eae43 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006eae43: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { jae L_006eae66 }
	__asm { xor edx, edx }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006eaca0 }
	__asm { L_006eae66: }
	__asm { add edx, eax }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006eaca0 }
	__asm { L_006eae79: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006ead20();
// FUNCTION: ROBLOXSTUDIO 0x006eae80
extern "C" __declspec(naked) void asm_006eae80()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_006eaeec }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006eaeb5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006eaeb5: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { jae L_006eaed9 }
	__asm { xor edx, edx }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006ead20 }
	__asm { L_006eaed9: }
	__asm { add edx, eax }
	__asm { pop ebx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [esp + 4], edx }
	__asm { jmp fn_006ead20 }
	__asm { L_006eaeec: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006eb050();
// FUNCTION: ROBLOXSTUDIO 0x006eaf00
extern "C" __declspec(naked) void asm_006eaf00()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, -1 }
	__asm { jbe L_006eaf18 }
	__asm { push 0xe46d68 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006eaf18: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { sub eax, edx }
	__asm { lea ebx, [esi + 0x1f] }
	__asm { shr ebx, 5 }
	__asm { sar eax, 2 }
	__asm { cmp ebx, eax }
	__asm { jae L_006eaf40 }
	__asm { push ecx }
	__asm { lea eax, [edx + ebx*4] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006eb050 }
	__asm { L_006eaf40: }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { and esi, 0x1f }
	__asm { jbe L_006eaf5a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { lea edx, [eax + ebx*4] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { dec eax }
	__asm { and dword ptr [edx - 4], eax }
	__asm { L_006eaf5a: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006eaf60
extern "C" __declspec(naked) void asm_006eaf60()
{
	__asm { push -1 }
	__asm { push 0xd184d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0x24 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x24], esi }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_006eafda }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006eafda: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006eaff0
extern "C" __declspec(naked) void asm_006eaff0()
{
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test edx, edx }
	__asm { je L_006eb040 }
	__asm { jns L_006eb030 }
	__asm { mov eax, edx }
	__asm { neg eax }
	__asm { je L_006eb030 }
	__asm { or ecx, 0xffffffff }
	__asm { sub ecx, edx }
	__asm { shr ecx, 5 }
	__asm { mov eax, esi }
	__asm { lea ecx, [ecx*4 + 4] }
	__asm { sub edi, ecx }
	__asm { mov dword ptr [esi], edi }
	__asm { and edx, 0x1f }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006eb030: }
	__asm { mov eax, edx }
	__asm { shr eax, 5 }
	__asm { and edx, 0x1f }
	__asm { lea eax, [edi + eax*4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { L_006eb040: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x006eb050
extern "C" __declspec(naked) void asm_006eb050()
{
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { cmp edi, ecx }
	__asm { jne L_006eb075 }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jne L_006eb075 }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_006eb06a: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret 0xc }
	__asm { L_006eb075: }
	__asm { cmp edi, eax }
	__asm { je L_006eb06a }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, eax }
	__asm { push esi }
	__asm { sar ecx, 2 }
	__asm { lea esi, [ecx*4] }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + edi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { ret 0xc }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x006eb0b0
extern "C" __declspec(naked) void asm_006eb0b0()
{
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { cmp edi, ecx }
	__asm { jne L_006eb0d5 }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jne L_006eb0d5 }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_006eb0ca: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret 0xc }
	__asm { L_006eb0d5: }
	__asm { cmp edi, eax }
	__asm { je L_006eb0ca }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, eax }
	__asm { push esi }
	__asm { sar ecx, 3 }
	__asm { lea esi, [ecx*8] }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + edi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { ret 0xc }
}

extern "C" void fn_006e88f0();
// FUNCTION: ROBLOXSTUDIO 0x006eb4b0
extern "C" __declspec(naked) void asm_006eb4b0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, 2 }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_006eb4e6 }
	__asm { jg L_006eb4ce }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_006eb4e6 }
	__asm { L_006eb4ce: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add ecx, edx }
	__asm { adc eax, dword ptr [esi + 0x5c] }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_006eb4e6: }
	__asm { add dword ptr [esi + 0x58], 2 }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_006eb510 }
	__asm { add ecx, dword ptr [esi + 0x58] }
	__asm { pop esi }
	__asm { movzx eax, byte ptr [ecx - 1] }
	__asm { mov byte ptr [esp], al }
	__asm { movzx eax, byte ptr [ecx - 2] }
	__asm { mov byte ptr [esp + 1], al }
	__asm { mov ax, word ptr [esp] }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_006eb510: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { pop esi }
	__asm { mov ax, word ptr [ecx + eax - 2] }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" void fn_006ed780();
// FUNCTION: ROBLOXSTUDIO 0x006ee0c0
extern "C" __declspec(naked) void asm_006ee0c0()
{
	__asm { push -1 }
	__asm { push 0xd17a63 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esi], 0xe46d84 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ee101 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_006ee101: }
	__asm { push dword ptr [esp + 0x18] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_006ed780 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
// FUNCTION: ROBLOXSTUDIO 0x006ee7b0
extern "C" __declspec(naked) void asm_006ee7b0()
{
	__asm { push -1 }
	__asm { push 0xd17ae8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { mov dword ptr [edi], 0xe46d84 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006ee833 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_006ee82c }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_006ee82c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_006ee82c: }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_006ee833: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_006f1830();
// FUNCTION: ROBLOXSTUDIO 0x006ee850
extern "C" __declspec(naked) void asm_006ee850()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { imul edi, ecx }
	__asm { imul edi, eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test edi, edi }
	__asm { je L_006ee8b2 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp byte ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { je L_006ee8b2 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_006f1830 }
	__asm { add esp, 0xc }
	__asm { L_006ee8b2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 0x10 }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
// FUNCTION: ROBLOXSTUDIO 0x006f5380
extern "C" __declspec(naked) void asm_006f5380()
{
	__asm { push -1 }
	__asm { push 0xd1843b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006f53fb }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_006f53f4 }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_006f53f4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_006f53f4: }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_006f53fb: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006f59b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f5690
extern "C" __declspec(naked) void asm_006f5690()
{
	__asm { push -1 }
	__asm { push 0xd18f9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esi], 0xe470fc }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_006f59b0 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006f56f8 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_006f56f1 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_006f56f1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_006f56f1: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_006f56f8: }
	__asm { test byte ptr [esp + 0x1c], 1 }
	__asm { je L_006f5708 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5708: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006f5840
extern "C" __declspec(naked) void asm_006f5840()
{
	__asm { push -1 }
	__asm { push 0xd184d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0x38 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x24], esi }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_006f58cc }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006f58cc: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_006f6020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f6150
extern "C" __declspec(naked) void asm_006f6150()
{
	__asm { push -1 }
	__asm { push 0xd46230 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x50] }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { call fn_006f6020 }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_006f61ca }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f61ca: }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { jb L_006f61f2 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f61f2: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x3c }
	__asm { ret 4 }
}

extern "C" char g_00e475f0[];
extern "C" void fn_00402fd0();
extern "C" void fn_006f1750();
extern "C" void fn_006f77a0();
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x006f78c0
extern "C" __declspec(naked) void asm_006f78c0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { fild dword ptr [esi + 0x34] }
	__asm { fmul qword ptr [g_00e475f0] }
	__asm { call fn_00cf6840 }
	__asm { push 8 }
	__asm { push 0xe46c50 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { xor ebx, ebx }
	__asm { mov edi, 0x64 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { sub edi, eax }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_006f78fa }
	__asm { cmp edi, 0x17d78400 }
	__asm { jae L_006f7918 }
	__asm { L_006f78fa: }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_006f1750 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_006f7918 }
	__asm { mov dword ptr [esi + 0x38], edi }
	__asm { L_006f790f: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x30], ebx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006f7918: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_006f790f }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { call fn_006f77a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" void fn_006f78c0();
// FUNCTION: ROBLOXSTUDIO 0x006f80c0
extern "C" __declspec(naked) void asm_006f80c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { add edx, 2 }
	__asm { mov eax, ecx }
	__asm { cmp eax, edx }
	__asm { cmovge edx, eax }
	__asm { mov dword ptr [esi + 0x34], edx }
	__asm { cmp edx, dword ptr [esi + 0x38] }
	__asm { jle L_006f80e5 }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_006f80e5: }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { je L_006f810b }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dx, word ptr [esp + 8] }
	__asm { mov byte ptr [ecx + eax], dh }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ecx + eax + 1], dl }
	__asm { add dword ptr [esi + 0x3c], 2 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006f810b: }
	__asm { mov edx, dword ptr [esi + 0x30] }
	__asm { mov ax, word ptr [esp + 8] }
	__asm { mov word ptr [edx + ecx], ax }
	__asm { add dword ptr [esi + 0x3c], 2 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006f78c0();
// FUNCTION: ROBLOXSTUDIO 0x006f8120
extern "C" __declspec(naked) void asm_006f8120()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { add edx, 4 }
	__asm { mov eax, ecx }
	__asm { cmp eax, edx }
	__asm { cmovge edx, eax }
	__asm { mov dword ptr [esi + 0x34], edx }
	__asm { cmp edx, dword ptr [esi + 0x38] }
	__asm { jle L_006f8145 }
	__asm { push ecx }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_006f8145: }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { je L_006f8186 }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov al, byte ptr [esp + 0xb] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov al, byte ptr [esp + 0xa] }
	__asm { mov byte ptr [edx + ecx + 1], al }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { mov byte ptr [ecx + eax + 2], dh }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ecx + eax + 3], dl }
	__asm { add dword ptr [esi + 0x3c], 4 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006f8186: }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov edx, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [edx + ecx], eax }
	__asm { add dword ptr [esi + 0x3c], 4 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
extern "C" void fn_007022e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00704100
extern "C" __declspec(naked) void asm_00704100()
{
	__asm { push -1 }
	__asm { push 0xd18b2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00704145 }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jg L_00704145 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_007022e0 }
	__asm { add esp, 4 }
	__asm { L_00704145: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0070415c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070415c: }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_004038a0();
extern "C" void fn_007022e0();
extern "C" void fn_00702370();
// FUNCTION: ROBLOXSTUDIO 0x00704180
extern "C" __declspec(naked) void asm_00704180()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00702370 }
	__asm { cmp esi, edi }
	__asm { je L_007041f7 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_007041a7 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { L_007041a7: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_007041c7 }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jg L_007041c7 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_007022e0 }
	__asm { add esp, 4 }
	__asm { L_007041c7: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_007041f7 }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e100d4] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { L_007041f7: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00702370();
extern "C" void fn_00702ef0();
extern "C" void fn_00719760();
extern "C" void fn_0071a710();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00706330
extern "C" __declspec(naked) void asm_00706330()
{
	__asm { push -1 }
	__asm { push 0xd18e0f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00702370 }
	__asm { mov esi, dword ptr [esp + 0x50] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00719760 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x50], 0 }
	__asm { call fn_00702ef0 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0071a710 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00706396 }
	__asm { push dword ptr [esp] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00706396: }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x44 }
	__asm { ret 4 }
}

extern "C" void fn_007078f0();
// FUNCTION: ROBLOXSTUDIO 0x00707d10
extern "C" __declspec(naked) void asm_00707d10()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { mov esi, edi }
	__asm { sub esi, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00707d5d }
	__asm { L_00707d35: }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_007078f0 }
	__asm { sub esi, 0x18 }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0xc }
	__asm { sub edi, 0x18 }
	__asm { cmp eax, 1 }
	__asm { jg L_00707d35 }
	__asm { L_00707d5d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_006f5380();
extern "C" void fn_00708ae0();
extern "C" void fn_00709120();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00708ce0
extern "C" __declspec(naked) void asm_00708ce0()
{
	__asm { push -1 }
	__asm { push 0xd18ff9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { lea esi, [edi + 0x30] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { lea ecx, [esi + 0x44] }
	__asm { mov byte ptr [esp + 0x18], 3 }
	__asm { call fn_00708ae0 }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { mov byte ptr [esp + 0x18], 2 }
	__asm { call fn_00708ae0 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_00708d3a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00708d3a: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { call fn_006f5380 }
	__asm { mov ecx, edi }
	__asm { call fn_00709120 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_007094a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00708f70
extern "C" __declspec(naked) void asm_00708f70()
{
	__asm { push -1 }
	__asm { push 0xd18f9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esi], 0xe47bf8 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_007094a0 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00708fd8 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00708fd1 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_00708fd1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_00708fd1: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00708fd8: }
	__asm { test byte ptr [esp + 0x1c], 1 }
	__asm { je L_00708fe8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00708fe8: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_00709640();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00709000
extern "C" __declspec(naked) void asm_00709000()
{
	__asm { push -1 }
	__asm { push 0xd18f9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esi], 0xe47b28 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_00709640 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00709068 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00709061 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_00709061 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_00709061: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00709068: }
	__asm { test byte ptr [esp + 0x1c], 1 }
	__asm { je L_00709078 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00709078: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0070ab80
extern "C" __declspec(naked) void asm_0070ab80()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { cmp edi, ebx }
	__asm { je L_0070abbc }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { L_0070ab98: }
	__asm { movsx eax, byte ptr [edi] }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov byte ptr [esi], al }
	__asm { mov esi, dword ptr [esp + 0x24] }
	__asm { inc edi }
	__asm { inc esi }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { cmp edi, ebx }
	__asm { jne L_0070ab98 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0070abbc: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e1062c[];
extern "C" void fn_00403380();
// FUNCTION: ROBLOXSTUDIO 0x0070abd0
extern "C" __declspec(naked) void asm_0070abd0()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { cmp dword ptr [ebx + 8], esi }
	__asm { jle L_0070ac0f }
	__asm { mov ebp, dword ptr [esp + 0x14] }
	__asm { xor edi, edi }
	__asm { L_0070abe3: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { add eax, edi }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0070abf0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0070abf0: }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { call fn_00403380 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1062c] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0070ac18 }
	__asm { inc esi }
	__asm { add edi, 0x1c }
	__asm { cmp esi, dword ptr [ebx + 8] }
	__asm { jl L_0070abe3 }
	__asm { L_0070ac0f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_0070ac18: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" void fn_0070c750();
extern "C" void fn_0070d110();
extern "C" void fn_0070d280();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070c940
extern "C" __declspec(naked) void asm_0070c940()
{
	__asm { push -1 }
	__asm { push 0xd1947c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x44] }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_0070d110 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { call fn_0070d280 }
	__asm { add esp, 0x10 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { lea eax, [esp + 8] }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x4c], 1 }
	__asm { call fn_0070c750 }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { pop edi }
	__asm { jb L_0070c9b3 }
	__asm { push dword ptr [esp] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c9b3: }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { mov dword ptr [esp + 0x14], 0xf }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { mov byte ptr [esp], 0 }
	__asm { jb L_0070c9da }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c9da: }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x3c }
	__asm { ret 0xc }
}

extern "C" void fn_004038a0();
extern "C" void fn_004278c0();
extern "C" void fn_0060e370();
// FUNCTION: ROBLOXSTUDIO 0x0070d0a0
extern "C" __declspec(naked) void asm_0070d0a0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push 0x100d138 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0060e370 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test eax, eax }
	__asm { js L_0070d0dd }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { sub edx, eax }
	__asm { push edx }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004278c0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0070d0dd: }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006f5410();
extern "C" void fn_0070e240();
// FUNCTION: ROBLOXSTUDIO 0x0070ddb0
extern "C" __declspec(naked) void asm_0070ddb0()
{
	__asm { push -1 }
	__asm { push 0xd195c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { lea edi, [ebx + 0x14] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov dword ptr [esp + 0x10], edi }
	__asm { mov dword ptr [edi], 0xe47ec8 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { call fn_0070e240 }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { test esi, esi }
	__asm { je L_0070de26 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070de1f }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_0070de1f }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0070de1f: }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { L_0070de26: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call fn_006f5410 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0070e9f0();
// FUNCTION: ROBLOXSTUDIO 0x0070de50
extern "C" __declspec(naked) void asm_0070de50()
{
	__asm { push ecx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push 1 }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ebp, ecx }
	__asm { call fn_0070e9f0 }
	__asm { cmp dword ptr [ebp + 4], 0 }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { jle L_0070deab }
	__asm { push ebx }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { L_0070de75: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp] }
	__asm { add esi, ebx }
	__asm { add edi, ebx }
	__asm { cmp edi, esi }
	__asm { je L_0070de8e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_0070de8e: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { inc eax }
	__asm { add ebx, 0x1c }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { cmp eax, dword ptr [ebp + 4] }
	__asm { jl L_0070de75 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0070deab: }
	__asm { pop esi }
	__asm { mov eax, ebp }
	__asm { pop ebp }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_0070e240();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070df00
extern "C" __declspec(naked) void asm_0070df00()
{
	__asm { push -1 }
	__asm { push 0xd18f9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esi], 0xe47ec8 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0070e240 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0070df68 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0070df61 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_0070df61 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_0070df61: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0070df68: }
	__asm { test byte ptr [esp + 0x1c], 1 }
	__asm { je L_0070df78 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070df78: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" char g_012e0104[];
extern "C" void fn_0070da00();
extern "C" void fn_0070daf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0070df90
extern "C" __declspec(naked) void asm_0070df90()
{
	__asm { push -1 }
	__asm { push 0xd19633 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e0104] }
	__asm { test eax, eax }
	__asm { jne L_0070e01b }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_0070e000 }
	__asm { mov ecx, esi }
	__asm { call fn_0070da00 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [esp + 0x10], 1 }
	__asm { mov dword ptr [esi + 0x10], 0x41200000 }
	__asm { call fn_0070daf0 }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { mov dword ptr [g_012e0104], esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_0070e000: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [g_012e0104], esi }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_0070e01b: }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_012e0104[];
extern "C" void fn_0070c2a0();
extern "C" void fn_0070da00();
extern "C" void fn_0070daf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0070e550
extern "C" __declspec(naked) void asm_0070e550()
{
	__asm { push -1 }
	__asm { push 0xd19633 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0104] }
	__asm { test esi, esi }
	__asm { jne L_0070e5ba }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_0070e5aa }
	__asm { mov ecx, esi }
	__asm { call fn_0070da00 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [esp + 0x10], 1 }
	__asm { mov dword ptr [esi + 0x10], 0x41200000 }
	__asm { call fn_0070daf0 }
	__asm { jmp L_0070e5ac }
	__asm { L_0070e5aa: }
	__asm { xor esi, esi }
	__asm { L_0070e5ac: }
	__asm { mov dword ptr [esp + 0x10], 0xffffffff }
	__asm { mov dword ptr [g_012e0104], esi }
	__asm { L_0070e5ba: }
	__asm { push dword ptr [esp + 0x18] }
	__asm { mov ecx, esi }
	__asm { call fn_0070c2a0 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_012e0104[];
extern "C" void fn_0070c9f0();
extern "C" void fn_0070da00();
extern "C" void fn_0070daf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0070e5e0
extern "C" __declspec(naked) void asm_0070e5e0()
{
	__asm { push -1 }
	__asm { push 0xd19633 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0104] }
	__asm { test esi, esi }
	__asm { jne L_0070e64a }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_0070e63a }
	__asm { mov ecx, esi }
	__asm { call fn_0070da00 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [esp + 0x10], 1 }
	__asm { mov dword ptr [esi + 0x10], 0x41200000 }
	__asm { call fn_0070daf0 }
	__asm { jmp L_0070e63c }
	__asm { L_0070e63a: }
	__asm { xor esi, esi }
	__asm { L_0070e63c: }
	__asm { mov dword ptr [esp + 0x10], 0xffffffff }
	__asm { mov dword ptr [g_012e0104], esi }
	__asm { L_0070e64a: }
	__asm { push dword ptr [esp + 0x18] }
	__asm { mov ecx, esi }
	__asm { call fn_0070c9f0 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_0070da00();
extern "C" void fn_0070dcd0();
extern "C" void fn_0070e820();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070e940
extern "C" __declspec(naked) void asm_0070e940()
{
	__asm { push -1 }
	__asm { push 0xd19650 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x1c], 0xf }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov byte ptr [esp + 8], 0 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { mov word ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x22], 0 }
	__asm { call fn_0070da00 }
	__asm { fldz }
	__asm { fstp qword ptr [esp + 0x38] }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x5c] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x58], 1 }
	__asm { call fn_0070e820 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov bl, al }
	__asm { mov byte ptr [esp + 0x48], 0 }
	__asm { call fn_0070dcd0 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_0070e9d3 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070e9d3: }
	__asm { mov ecx, dword ptr [esp + 0x40] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x44 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00717980
extern "C" __declspec(naked) void asm_00717980()
{
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x24] }
	__asm { cmp esi, eax }
	__asm { jl L_00717990 }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00717990: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x14] }
	__asm { inc esi }
	__asm { mov dl, byte ptr [edi + esi - 1] }
	__asm { mov dword ptr [ecx + 0x24], esi }
	__asm { cmp dl, 0xd }
	__asm { jne L_007179c3 }
	__asm { inc dword ptr [ecx + 0x28] }
	__asm { mov dword ptr [ecx + 0x2c], 1 }
	__asm { cmp esi, eax }
	__asm { jge L_007179db }
	__asm { cmp byte ptr [esi + edi], 0xa }
	__asm { jne L_007179db }
	__asm { lea eax, [esi + 1] }
	__asm { mov dl, 0xa }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { movzx eax, dl }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007179c3: }
	__asm { cmp dl, 0xa }
	__asm { jne L_007179d8 }
	__asm { inc dword ptr [ecx + 0x28] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 0x2c], 1 }
	__asm { movzx eax, dl }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007179d8: }
	__asm { inc dword ptr [ecx + 0x2c] }
	__asm { L_007179db: }
	__asm { pop edi }
	__asm { movzx eax, dl }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_0071a400();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071a460
extern "C" __declspec(naked) void asm_0071a460()
{
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_0071a400 }
	__asm { mov edi, dword ptr [esp + 0x48] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0071a4a8 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0071a4b2 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0071a4b2 }
	__asm { L_0071a4a8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0071a4b2: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [esp + 0x20], 0x10 }
	__asm { jb L_0071a4e2 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071a4e2: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x3c }
	__asm { ret 4 }
}
