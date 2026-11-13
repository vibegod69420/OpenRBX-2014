// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_0057db40();
extern "C" void fn_007d5550();
extern "C" void fn_00824ff0();
// FUNCTION: ROBLOXSTUDIO 0x00b2af60
extern "C" __declspec(naked) void asm_00b2af60()
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
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_00824ff0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_0057db40 }
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

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_0057db40();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
extern "C" void fn_00824ff0();
// FUNCTION: ROBLOXSTUDIO 0x00b2b020
extern "C" __declspec(naked) void asm_00b2b020()
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
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00410d50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_00824ff0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_0057db40 }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_009cc290();
extern "C" void fn_00b2b8a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b2b630
extern "C" __declspec(naked) void asm_00b2b630()
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
	__asm { cmp eax, 2 }
	__asm { jb L_00b2b6fb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b2b8a0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00b2b683 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2b683: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b2b6e1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_009cc290 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b2b6d0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00b2b6d0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2b6e1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b2b6fb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b2b6fb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b2b715 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b2b715: }
	__asm { push 2 }
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
extern "C" void fn_007d5550();
extern "C" void fn_00824ff0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b2c7c0();
// FUNCTION: ROBLOXSTUDIO 0x00b2b940
extern "C" __declspec(naked) void asm_00b2b940()
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
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7270 }
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
	__asm { call fn_00824ff0 }
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
	__asm { je L_00b2b9ee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b2b9ee: }
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
extern "C" void fn_00b11950();
extern "C" void fn_00b2c7c0();
// FUNCTION: ROBLOXSTUDIO 0x00b2ba10
extern "C" __declspec(naked) void asm_00b2ba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54d16 }
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
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec71d0 }
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
	__asm { call fn_00b11950 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b2c7c0();
// FUNCTION: ROBLOXSTUDIO 0x00b2bac0
extern "C" __declspec(naked) void asm_00b2bac0()
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
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7234 }
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
	__asm { je L_00b2bb6e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b2bb6e: }
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
extern "C" void fn_00b2c7c0();
extern "C" void fn_00c46420();
// FUNCTION: ROBLOXSTUDIO 0x00b2bb90
extern "C" __declspec(naked) void asm_00b2bb90()
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
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec73e0 }
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
extern "C" void fn_00b2c7c0();
extern "C" void fn_00b30ae0();
// FUNCTION: ROBLOXSTUDIO 0x00b2bc40
extern "C" __declspec(naked) void asm_00b2bc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e0e6 }
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
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7204 }
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
	__asm { call fn_00b30ae0 }
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
extern "C" void fn_00b2c7c0();
extern "C" void fn_00b30b90();
// FUNCTION: ROBLOXSTUDIO 0x00b2bcf0
extern "C" __declspec(naked) void asm_00b2bcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5698c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7170 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00b30b90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00825140();
extern "C" void fn_00b2c7c0();
extern "C" void fn_00b30cc0();
// FUNCTION: ROBLOXSTUDIO 0x00b2bdf0
extern "C" __declspec(naked) void asm_00b2bdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd569d9 }
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
	__asm { call fn_00b2c7c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7418 }
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
	__asm { call fn_00b30cc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b2c8d0();
// FUNCTION: ROBLOXSTUDIO 0x00b2bed0
extern "C" __declspec(naked) void asm_00b2bed0()
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
	__asm { call fn_00b2c8d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7228 }
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
	__asm { je L_00b2bf7e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b2bf7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008251b0();
extern "C" void fn_00b2c710();
// FUNCTION: ROBLOXSTUDIO 0x00b2c240
extern "C" __declspec(naked) void asm_00b2c240()
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
	__asm { call fn_00b2c710 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xec73a8 }
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
	__asm { jae L_00b2c2d2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b2c2d2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00b2c2f5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b2c2f5: }
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
extern "C" void fn_00b2c710();
// FUNCTION: ROBLOXSTUDIO 0x00b2c640
extern "C" __declspec(naked) void asm_00b2c640()
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
	__asm { call fn_00b2c710 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xec7108 }
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
	__asm { jae L_00b2c6d2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b2c6d2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00b2c6f5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b2c6f5: }
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
extern "C" char g_012f1704[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b2c7c0
extern "C" __declspec(naked) void asm_00b2c7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56a26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1704] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b2c83a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1704], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6f74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f15d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b2c83a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f15d8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec70d8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b2c8b2 }
	__asm { push 0x1284b74 }
	__asm { mov ecx, 0x1284b74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b2c8b2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b2c89d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b2c8b2 }
	__asm { L_00b2c89d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b2c8b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1704[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b2c8d0
extern "C" __declspec(naked) void asm_00b2c8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56a46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1704] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b2c94a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1704], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec6f74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f15d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b2c94a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f15d8 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xec721c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b2c9c2 }
	__asm { push 0x1284b74 }
	__asm { mov ecx, 0x1284b74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b2c9c2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b2c9ad }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b2c9c2 }
	__asm { L_00b2c9ad: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b2c9c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b2cd70
extern "C" __declspec(naked) void asm_00b2cd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56b11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { xor eax, eax }
	__asm { mov word ptr [esi + 0x4c], ax }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov word ptr [esi + 0x54], ax }
	__asm { mov al, byte ptr [ebp + 0x28] }
	__asm { mov byte ptr [esi + 0x58], al }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b2ce80 }
	__asm { mov dword ptr [esi + 0x68], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b2ce69 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x7c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { jmp L_00b2ce80 }
	__asm { L_00b2ce69: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x70] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_00b2ce80: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b2cea5 }
	__asm { test cl, 1 }
	__asm { jne L_00b2cea5 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00b2cea5 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b2cea5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b2d060
extern "C" __declspec(naked) void asm_00b2d060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd56b83 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov word ptr [esi + 0x4c], ax }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov word ptr [esi + 0x54], ax }
	__asm { mov byte ptr [esi + 0x58], al }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b2ed70
extern "C" __declspec(naked) void asm_00b2ed70()
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
	__asm { mov dword ptr [ebx + 0x5c], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00b2edcd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00b2edc0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x58] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00b2edc0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x58] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00b2edd8 }
	__asm { L_00b2edcd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x58] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00b2edd8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00b2edee }
	__asm { add ecx, -0x58 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b2edee: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00b2ee00
extern "C" __declspec(naked) void asm_00b2ee00()
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
	__asm { mov dword ptr [ebx + 0xa4], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00b2ee66 }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00b2ee56 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00b2ee56: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00b2ee74 }
	__asm { L_00b2ee66: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00b2ee74: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00b2ee8d }
	__asm { add ecx, 0xffffff60 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b2ee8d: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10528[];
extern "C" void fn_004030b0();
extern "C" void fn_004b64a0();
extern "C" void fn_00b2b0e0();
// FUNCTION: ROBLOXSTUDIO 0x00b2eea0
extern "C" __declspec(naked) void asm_00b2eea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00b2eef3 }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00b2eecf }
	__asm { inc eax }
	__asm { jmp L_00b2eed1 }
	__asm { L_00b2eecf: }
	__asm { xor eax, eax }
	__asm { L_00b2eed1: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b2b0e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jne L_00b2ef1e }
	__asm { L_00b2eef3: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0x1017a58 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b764 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b64a0 }
	__asm { L_00b2ef1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5a20();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00b30ae0
extern "C" __declspec(naked) void asm_00b30ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
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
	__asm { call fn_007d5a20 }
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
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b30b5d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b30b5d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b30b77 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b30b77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_007e9920();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00b30cc0
extern "C" __declspec(naked) void asm_00b30cc0()
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
	__asm { call fn_007d5550 }
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
	__asm { call fn_007e9920 }
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
	__asm { call fn_007d5710 }
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
	__asm { je L_00b30d61 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b30d61: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b30d78 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b30d78: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b30d98 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b30d98: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_00b2da00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b30ec0
extern "C" __declspec(naked) void asm_00b30ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
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
	__asm { L_00b30ee4: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00b30ef2 }
	__asm { add esi, 0xffffff60 }
	__asm { jmp L_00b30ef4 }
	__asm { L_00b30ef2: }
	__asm { xor esi, esi }
	__asm { L_00b30ef4: }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b2da00 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b30f25 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b30f25: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00b30ee4 }
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

extern "C" void fn_00403540();
extern "C" void fn_0078a6b0();
extern "C" void fn_00866310();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b31ed0
extern "C" __declspec(naked) void asm_00b31ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd572a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b31f1f }
	__asm { lea eax, [ecx - 0x1c] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00b31f26 }
	__asm { L_00b31f1f: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00b31f26: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00866310 }
	__asm { mov ebx, dword ptr [edi + 0x28] }
	__asm { mov edi, dword ptr [edi + 0x2c] }
	__asm { mov edx, esp }
	__asm { mov esi, eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + edi] }
	__asm { call ebx }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_00b31f91 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b31f91: }
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
extern "C" void fn_004ae7e0();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00b2e5a0();
// FUNCTION: ROBLOXSTUDIO 0x00b32760
extern "C" __declspec(naked) void asm_00b32760()
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
	__asm { je L_00b327df }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00b327df }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b327ce }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b327df }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00b327ce: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b327df: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b327eb }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00b327ed }
	__asm { L_00b327eb: }
	__asm { xor edi, edi }
	__asm { L_00b327ed: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_004ae7e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b2e5a0 }
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
extern "C" void fn_004ae7e0();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00b2e700();
// FUNCTION: ROBLOXSTUDIO 0x00b32840
extern "C" __declspec(naked) void asm_00b32840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57380 }
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
	__asm { je L_00b328c1 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00b328c1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b328b0 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b328c1 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00b328b0: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b328c1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b328cd }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00b328cf }
	__asm { L_00b328cd: }
	__asm { xor edi, edi }
	__asm { L_00b328cf: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { call fn_004ae7e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b2e700 }
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
extern "C" void fn_00410bb0();
extern "C" void fn_004ae7e0();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00b2e8b0();
// FUNCTION: ROBLOXSTUDIO 0x00b32940
extern "C" __declspec(naked) void asm_00b32940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61da8 }
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
	__asm { je L_00b329bf }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00b329bf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b329ae }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b329bf }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00b329ae: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b329bf: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b329cb }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00b329cd }
	__asm { L_00b329cb: }
	__asm { xor edi, edi }
	__asm { L_00b329cd: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { call fn_004ae7e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b2e8b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b33fa0
extern "C" __declspec(naked) void asm_00b33fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57500 }
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
	__asm { je L_00b34074 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b3404f }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b34022 }
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
	__asm { L_00b34022: }
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
	__asm { L_00b3404f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b34074 }
	__asm { test al, 1 }
	__asm { jne L_00b3406e }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b3406e }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b3406e: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b34074: }
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

extern "C" void fn_004226b0();
extern "C" void fn_005457f0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b49a0();
extern "C" void fn_00b2ab40();
extern "C" void fn_00b35180();
// FUNCTION: ROBLOXSTUDIO 0x00b34400
extern "C" __declspec(naked) void asm_00b34400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42818 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00b344bf }
	__asm { call fn_005457f0 }
	__asm { mov edx, dword ptr [eax + 0x178] }
	__asm { test edx, edx }
	__asm { je L_00b34453 }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_00b35180 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b34453: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xb2fcb0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [eax + 4] }
	__asm { call fn_00b2ab40 }
	__asm { mov edi, eax }
	__asm { add esi, 0x90 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00b344a5 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b9b80 }
	__asm { L_00b344a5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b344bf }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b344bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00b32370();
extern "C" void fn_00b325f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b34c70
extern "C" __declspec(naked) void asm_00b34c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd575e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b32370 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00b34d21 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { cmp ecx, eax }
	__asm { je L_00b34cdf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b34cdf: }
	__asm { push 0xb }
	__asm { push 0xeae454 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b325f0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b34d21 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b34d21: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b34d32 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b34d32: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00b34d55 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b34d55: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00b32370();
extern "C" void fn_00b325f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b34d70
extern "C" __declspec(naked) void asm_00b34d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd575e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b32370 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00b34e21 }
	__asm { lea ecx, [esi + 0x48] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { cmp ecx, eax }
	__asm { je L_00b34ddf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b34ddf: }
	__asm { push 5 }
	__asm { push 0xe4717c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b325f0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b34e21 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b34e21: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b34e32 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b34e32: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00b34e55 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b34e55: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00b32370();
extern "C" void fn_00b325f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b34f60
extern "C" __declspec(naked) void asm_00b34f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd575e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b32370 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00b35011 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { cmp ecx, eax }
	__asm { je L_00b34fcf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b34fcf: }
	__asm { push 5 }
	__asm { push 0x102b498 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b325f0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b35011 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b35011: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b35022 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b35022: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00b35045 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b35045: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b49a0();
extern "C" void fn_00b2ab40();
// FUNCTION: ROBLOXSTUDIO 0x00b35060
extern "C" __declspec(naked) void asm_00b35060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57610 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], 0xb2fdc0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { call fn_00b2ab40 }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00b350d9 }
	__asm { lea ecx, [ebx + 0x88] }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x88] }
	__asm { call fn_006b9b80 }
	__asm { L_00b350d9: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b350f3 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b350f3: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x20], 0xb2fed0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_00b2ab40 }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x8c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00b3514c }
	__asm { lea ecx, [ebx + 0x8c] }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x8c] }
	__asm { call fn_006b9b80 }
	__asm { L_00b3514c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b35166 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b35166: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008251b0();
extern "C" void fn_00b358d0();
// FUNCTION: ROBLOXSTUDIO 0x00b35800
extern "C" __declspec(naked) void asm_00b35800()
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
	__asm { call fn_00b358d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xec7820 }
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
	__asm { jae L_00b35892 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b35892: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00b358b5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b358b5: }
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
extern "C" char g_012f1834[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b35980
extern "C" __declspec(naked) void asm_00b35980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd576a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1834] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b359fa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1834], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec77e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1708 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b359fa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1708 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec77f4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b35a72 }
	__asm { push 0x128bad8 }
	__asm { mov ecx, 0x128bad8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b35a72 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b35a5d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b35a72 }
	__asm { L_00b35a5d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b35a72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b36160();
// FUNCTION: ROBLOXSTUDIO 0x00b35d40
extern "C" __declspec(naked) void asm_00b35d40()
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
	__asm { call fn_00b36160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7b28 }
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
	__asm { je L_00b35dee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b35dee: }
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
extern "C" void fn_00b14210();
extern "C" void fn_00b36160();
// FUNCTION: ROBLOXSTUDIO 0x00b35e10
extern "C" __declspec(naked) void asm_00b35e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd536f6 }
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
	__asm { call fn_00b36160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7b08 }
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
	__asm { call fn_00b14210 }
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
extern "C" void fn_00b36160();
extern "C" void fn_00b36d20();
// FUNCTION: ROBLOXSTUDIO 0x00b35ec0
extern "C" __declspec(naked) void asm_00b35ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5773c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00b36160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7ac0 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00b36d20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825060();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b36270();
// FUNCTION: ROBLOXSTUDIO 0x00b35fd0
extern "C" __declspec(naked) void asm_00b35fd0()
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
	__asm { call fn_00b36270 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec7b58 }
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
	__asm { call fn_00825060 }
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
	__asm { je L_00b3607e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b3607e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1f54[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b36160
extern "C" __declspec(naked) void asm_00b36160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57786 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1f54] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b361da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1f54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec7900 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1e28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b361da: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1e28 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec7ab4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b36252 }
	__asm { push 0x128be60 }
	__asm { mov ecx, 0x128be60 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b36252 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b3623d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b36252 }
	__asm { L_00b3623d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b36252: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1f54[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b36270
extern "C" __declspec(naked) void asm_00b36270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd577a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1f54] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b362ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1f54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec7900 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1e28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b362ea: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1e28 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xec7b4c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b36362 }
	__asm { push 0x128be60 }
	__asm { mov ecx, 0x128be60 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b36362 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b3634d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b36362 }
	__asm { L_00b3634d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b36362: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00ec7900[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_00439d80();
extern "C" void fn_007b5bb0();
extern "C" void fn_008777b0();
extern "C" void fn_00b360a0();
extern "C" void fn_00b37d40();
extern "C" void fn_00b37dd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b36380
extern "C" __declspec(naked) void asm_00b36380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5780c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b360a0 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xec79bc }
	__asm { mov dword ptr [esi + 4], 0xec7a34 }
	__asm { mov dword ptr [esi + 0x18], 0xec7a3c }
	__asm { mov dword ptr [esi + 0x1c], 0xec7a48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xb37e60 }
	__asm { push 0x130eba8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { call fn_00b37d40 }
	__asm { lea eax, [esi + 0x6c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x877f90 }
	__asm { push 0x12fa4c4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { call fn_008777b0 }
	__asm { lea eax, [esi + 0x70] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { call fn_00439d80 }
	__asm { lea eax, [esi + 0x74] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xb37e70 }
	__asm { push 0x130ebb0 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x20 }
	__asm { call fn_00b37dd0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00ec7900], cl }
	__asm { mov eax, 0x13 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xec7900 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00b364b3 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b364b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0079ae50();
extern "C" void fn_0083e550();
extern "C" void fn_0083e9e0();
extern "C" void fn_00a73e40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b375d0
extern "C" __declspec(naked) void asm_00b375d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4add8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a73e40 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_0079ae50 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0083e9e0 }
	__asm { add esp, 0x34 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00b37649 }
	__asm { add ebx, -0x1c }
	__asm { jmp L_00b3764b }
	__asm { L_00b37649: }
	__asm { xor ebx, ebx }
	__asm { L_00b3764b: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebx + esi] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call edi }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_00b37693 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b37693: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00422570();
extern "C" void fn_004225e0();
// FUNCTION: ROBLOXSTUDIO 0x00b37850
extern "C" __declspec(naked) void asm_00b37850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57978 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b378ac }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push eax }
	__asm { call fn_004225e0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00b378ac: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b378d7 }
	__asm { test al, 1 }
	__asm { jne L_00b378d0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b378d0 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b378d0: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00b378d7: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b378fe }
	__asm { test al, 1 }
	__asm { jne L_00b378fe }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b378fe }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b378fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00422570();
extern "C" void fn_004225e0();
extern "C" void fn_00427010();
extern "C" void fn_00b36810();
extern "C" void fn_00b36b00();
// FUNCTION: ROBLOXSTUDIO 0x00b37a10
extern "C" __declspec(naked) void asm_00b37a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd395b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00b36b00 }
	__asm { test al, al }
	__asm { je L_00b37a72 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_004225e0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x74] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b36810 }
	__asm { jmp L_00b37a9c }
	__asm { L_00b37a72: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0x22 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xec7c48 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { call fn_00427010 }
	__asm { L_00b37a9c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b37ac7 }
	__asm { test al, 1 }
	__asm { jne L_00b37ac0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b37ac0 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b37ac0: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00b37ac7: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b37aee }
	__asm { test al, 1 }
	__asm { jne L_00b37aee }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b37aee }
	__asm { lea ecx, [ebp + 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b37aee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00b37fa0();
extern "C" void fn_00bf8b10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b38920
extern "C" __declspec(naked) void asm_00b38920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd57b26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xd4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b3897a }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00bf8b10 }
	__asm { mov esi, eax }
	__asm { jmp L_00b3897c }
	__asm { L_00b3897a: }
	__asm { xor esi, esi }
	__asm { L_00b3897c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b37fa0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00b389a7 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b389a7 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00b389a7: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00b389b8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b389b8: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00b389db }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b389db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040e0a0();
extern "C" void fn_00420990();
extern "C" void fn_00884260();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b389f0
extern "C" __declspec(naked) void asm_00b389f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x468 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b38a41 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00884260 }
	__asm { mov esi, eax }
	__asm { jmp L_00b38a43 }
	__asm { L_00b38a41: }
	__asm { xor esi, esi }
	__asm { L_00b38a43: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420990 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b38a74 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b38a74 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00b38a74: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00b38030();
extern "C" void fn_00b39040();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b38a90
extern "C" __declspec(naked) void asm_00b38a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b38ae2 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00b39040 }
	__asm { mov esi, eax }
	__asm { jmp L_00b38ae4 }
	__asm { L_00b38ae2: }
	__asm { xor esi, esi }
	__asm { L_00b38ae4: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b38030 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b38b15 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b38b15 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00b38b15: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc990[];
extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_006b8a90();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b464e0
extern "C" __declspec(naked) void asm_00b464e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b4651a }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xec7e10 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b4651a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push 0xb }
	__asm { push 0x101889c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_00b4657a }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b4657a }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00b4657a }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_00b4657c }
	__asm { L_00b4657a: }
	__asm { xor esi, esi }
	__asm { L_00b4657c: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { jb L_00b46595 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b46595: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_00b465c2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [esi + 0x8c], al }
	__asm { L_00b465c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc990[];
extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_006b8a90();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b46cd0
extern "C" __declspec(naked) void asm_00b46cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b46d0a }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xec7dfc }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b46d0a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push 0xc }
	__asm { push 0x10188a8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_00b46d6a }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b46d6a }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00b46d6a }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_00b46d6c }
	__asm { L_00b46d6a: }
	__asm { xor esi, esi }
	__asm { L_00b46d6c: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { jb L_00b46d85 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b46d85: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_00b46db2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [esi + 0x8c], al }
	__asm { L_00b46db2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00b47000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b46dd0
extern "C" __declspec(naked) void asm_00b46dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc }
	__asm { mov ebx, ecx }
	__asm { push 0x10188a8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0xbc8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_00b46e4d }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b46e4d }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00b46e4d }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_00b46e4f }
	__asm { L_00b46e4d: }
	__asm { xor esi, esi }
	__asm { L_00b46e4f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b46e67 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b46e67: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_00b46e95 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b46e95 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00b47000 }
	__asm { L_00b46e95: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b4ab60
extern "C" __declspec(naked) void asm_00b4ab60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00b4abed }
	__asm { cmp edi, dword ptr [esi + 0x20] }
	__asm { jb L_00b4abab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b4ab96 }
	__asm { push 0x20 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4abab }
	__asm { L_00b4ab96: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca880 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4abab: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b4abed }
	__asm { cmp dword ptr [esi + 0x20], 8 }
	__asm { jbe L_00b4abed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b4abd8 }
	__asm { push 0x21 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca8dc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4abed }
	__asm { L_00b4abd8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca8e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4abed: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi + eax*4 - 4] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { dec dword ptr [esi + 0x20] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a11390();
// FUNCTION: ROBLOXSTUDIO 0x00b4bbb0
extern "C" __declspec(naked) void asm_00b4bbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, 0xc }
	__asm { jge L_00b4bbf0 }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { and edx, 3 }
	__asm { add eax, edx }
	__asm { sar eax, 2 }
	__asm { and esi, 0x80000003 }
	__asm { jns L_00b4bbd7 }
	__asm { dec esi }
	__asm { or esi, 0xfffffffc }
	__asm { inc esi }
	__asm { L_00b4bbd7: }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov eax, dword ptr [eax*4 + 0xed6ce0] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4bbf0: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 0xc] }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { and edx, 3 }
	__asm { lea esi, [edx + eax] }
	__asm { sar esi, 2 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b4bc49 }
	__asm { push esi }
	__asm { call fn_00a11390 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b4bc49 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b4bc34 }
	__asm { push 0x72 }
	__asm { push 0xec9af8 }
	__asm { push 0xec9b38 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4bc49 }
	__asm { L_00b4bc34: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xec9b50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4bc49: }
	__asm { lea eax, [ebx + esi*4] }
	__asm { pop ebx }
	__asm { mov eax, dword ptr [eax*4 + 0xed6ce4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b4d780
extern "C" __declspec(naked) void asm_00b4d780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, 3 }
	__asm { jne L_00b4d7bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi + 0x1c] }
	__asm { jne L_00b4d7b8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jne L_00b4d7b8 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [esi + 0x34] }
	__asm { L_00b4d7a4: }
	__asm { jne L_00b4d7b8 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmp eax, dword ptr [esi + 0x30] }
	__asm { jne L_00b4d7b8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00b4d7b8: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00b4d7bf: }
	__asm { cmp eax, 4 }
	__asm { jne L_00b4d7dc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi + 0x1c] }
	__asm { jne L_00b4d7b8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jne L_00b4d7b8 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [esi + 0x2c] }
	__asm { jmp L_00b4d7a4 }
	__asm { L_00b4d7dc: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b4d823 }
	__asm { cmp eax, 5 }
	__asm { je L_00b4d823 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b4d812 }
	__asm { push 0x85 }
	__asm { push 0xec9bb8 }
	__asm { push 0xec9c4c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4d823 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b4d812: }
	__asm { movzx eax, cl }
	__asm { push 0xec9c68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4d823: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, dword ptr [esi + 0x1c] }
	__asm { jne L_00b4d844 }
	__asm { cmp edx, dword ptr [esi + 0x20] }
	__asm { jne L_00b4d844 }
	__asm { cmp ecx, dword ptr [esi + 0x2c] }
	__asm { jne L_00b4d844 }
	__asm { cmp eax, dword ptr [esi + 0x30] }
	__asm { je L_00b4d858 }
	__asm { L_00b4d844: }
	__asm { cmp ebx, dword ptr [esi + 0x20] }
	__asm { jne L_00b4d863 }
	__asm { cmp edx, dword ptr [esi + 0x1c] }
	__asm { jne L_00b4d863 }
	__asm { cmp ecx, dword ptr [esi + 0x30] }
	__asm { jne L_00b4d863 }
	__asm { cmp eax, dword ptr [esi + 0x2c] }
	__asm { jne L_00b4d863 }
	__asm { L_00b4d858: }
	__asm { pop ebx }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00b4d863: }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_0130ec2c[];
extern "C" void fn_0093d360();
extern "C" void fn_00b50fa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b50ea0
extern "C" __declspec(naked) void asm_00b50ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58f14 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0xb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xecb3e4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b50f21 }
	__asm { mov ecx, eax }
	__asm { call fn_00b50fa0 }
	__asm { jmp L_00b50f23 }
	__asm { L_00b50f21: }
	__asm { xor eax, eax }
	__asm { L_00b50f23: }
	__asm { push 0x1838 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b50f50 }
	__asm { push 0xe60df8 }
	__asm { mov ecx, eax }
	__asm { call fn_0093d360 }
	__asm { jmp L_00b50f52 }
	__asm { L_00b50f50: }
	__asm { xor eax, eax }
	__asm { L_00b50f52: }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { push 0x1838 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_00b50f7f }
	__asm { push 0xe60e08 }
	__asm { mov ecx, eax }
	__asm { call fn_0093d360 }
	__asm { jmp L_00b50f81 }
	__asm { L_00b50f7f: }
	__asm { xor eax, eax }
	__asm { L_00b50f81: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { inc dword ptr [g_0130ec2c] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b50fa0
extern "C" __declspec(naked) void asm_00b50fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58f91 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x50] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x60] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x70] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x80] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0x90] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00b5cbf0 }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_00b5cbf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130ec2c[];
extern "C" void fn_006b9740();
extern "C" void fn_00b51140();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b51060
extern "C" __declspec(naked) void asm_00b51060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58fbe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xecb3e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { dec dword ptr [g_0130ec2c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_00b510d6 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00b510d6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b510c5 }
	__asm { push 0x2a }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b510d6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b510c5: }
	__asm { movzx eax, al }
	__asm { push 0xecc50c }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b510d6: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { test edi, edi }
	__asm { je L_00b510ee }
	__asm { mov ecx, edi }
	__asm { call fn_00b51140 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b510ee: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_00b51100 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00b51100: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b51111 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00b51111: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00b51126 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00b51126: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210343[];
extern "C" char g_01210344[];
extern "C" void fn_00b4e340();
extern "C" void fn_00b4eb80();
extern "C" void fn_00b51a60();
extern "C" void fn_00b51e70();
extern "C" void fn_00b52600();
extern "C" void fn_00b526b0();
extern "C" void fn_00b52760();
extern "C" void fn_00b52810();
extern "C" void fn_00b53c30();
// FUNCTION: ROBLOXSTUDIO 0x00b51540
extern "C" __declspec(naked) void asm_00b51540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [eax + 0x38], 0 }
	__asm { jne L_00b51573 }
	__asm { cmp dword ptr [esi + 0xf4], 0 }
	__asm { jge L_00b5161f }
	__asm { push esi }
	__asm { call fn_00b53c30 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00b52810 }
	__asm { jmp L_00b5160e }
	__asm { L_00b51573: }
	__asm { cmp dword ptr [esi + 0x110], 0 }
	__asm { jg L_00b515f6 }
	__asm { cmp dword ptr [esi + 0x114], 0 }
	__asm { jle L_00b515b8 }
	__asm { cmp byte ptr [g_01210344], 0 }
	__asm { je L_00b515f6 }
	__asm { cmp dword ptr [esi + 0xfc], 0 }
	__asm { jge L_00b5161f }
	__asm { push esi }
	__asm { call fn_00b53c30 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_00b52600 }
	__asm { call fn_00b4e340 }
	__asm { fstp dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b515b8: }
	__asm { cmp byte ptr [g_01210343], 0 }
	__asm { je L_00b515f6 }
	__asm { cmp dword ptr [esi + 0x100], 0 }
	__asm { jne L_00b515f6 }
	__asm { cmp dword ptr [esi + 0xf0], 0 }
	__asm { jge L_00b5161f }
	__asm { push esi }
	__asm { call fn_00b53c30 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b526b0 }
	__asm { call fn_00b4e340 }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { call fn_00b51e70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b515f6: }
	__asm { cmp dword ptr [esi + 0xf8], 0 }
	__asm { jge L_00b5161f }
	__asm { push esi }
	__asm { call fn_00b53c30 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00b52760 }
	__asm { L_00b5160e: }
	__asm { call fn_00b4eb80 }
	__asm { fstp dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { call fn_00b51a60 }
	__asm { L_00b5161f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b521c0();
// FUNCTION: ROBLOXSTUDIO 0x00b51b80
extern "C" __declspec(naked) void asm_00b51b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b51c18 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { jl L_00b51bd3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b51bbe }
	__asm { push 0xdc }
	__asm { push 0xecb3f0 }
	__asm { push 0xecbda0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b51bd3 }
	__asm { L_00b51bbe: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecc2b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b51bd3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b51c18 }
	__asm { cmp dword ptr [esi + 0x24], 0 }
	__asm { jg L_00b51c18 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b51c03 }
	__asm { push 0xdd }
	__asm { push 0xecb3f0 }
	__asm { push 0xecc320 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b51c18 }
	__asm { L_00b51c03: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecc340 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b51c18: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x40] }
	__asm { call fn_00b521c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b51c68 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { jge L_00b51c68 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b51c57 }
	__asm { push 0xdf }
	__asm { push 0xecb3f0 }
	__asm { push 0xecc3b0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b51c68 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b51c57: }
	__asm { movzx eax, al }
	__asm { push 0xecc3c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b51c68: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b54200();
// FUNCTION: ROBLOXSTUDIO 0x00b520d0
extern "C" __declspec(naked) void asm_00b520d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b5211e }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_00b5211e }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b5210d }
	__asm { push 0xad }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5211e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5210d: }
	__asm { movzx eax, al }
	__asm { push 0xecc9a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5211e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b5213a }
	__asm { dec dword ptr [esi + 8] }
	__asm { jne L_00b5213a }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b54200 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00b5213a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov edx, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { add eax, dword ptr [edx + 0x24] }
	__asm { add eax, dword ptr [edx + 0x14] }
	__asm { add eax, dword ptr [edx + 4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edx + 0xa4] }
	__asm { lea eax, [eax + ecx*2] }
	__asm { add eax, dword ptr [edx + 0x94] }
	__asm { add eax, dword ptr [edx + 0x84] }
	__asm { add eax, dword ptr [edx + 0x74] }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
extern "C" void fn_00b530c0();
// FUNCTION: ROBLOXSTUDIO 0x00b521c0
extern "C" __declspec(naked) void asm_00b521c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { je L_00b52253 }
	__asm { test edi, edi }
	__asm { jne L_00b5220b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b521f6 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5220b }
	__asm { L_00b521f6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5220b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52253 }
	__asm { mov ecx, edi }
	__asm { call fn_00b530c0 }
	__asm { cmp dword ptr [eax], -1 }
	__asm { je L_00b52253 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5223e }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52253 }
	__asm { L_00b5223e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52253: }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00b530c0 }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b52280
extern "C" __declspec(naked) void asm_00b52280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5230c }
	__asm { test esi, esi }
	__asm { jne L_00b522ca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b522b5 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b522ca }
	__asm { L_00b522b5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b522ca: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5230c }
	__asm { cmp dword ptr [esi + 0x14], -1 }
	__asm { je L_00b5230c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b522f7 }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5230c }
	__asm { L_00b522f7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5230c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b52330
extern "C" __declspec(naked) void asm_00b52330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b523bc }
	__asm { test esi, esi }
	__asm { jne L_00b5237a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52365 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5237a }
	__asm { L_00b52365: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5237a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b523bc }
	__asm { cmp dword ptr [esi + 4], -1 }
	__asm { je L_00b523bc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b523a7 }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b523bc }
	__asm { L_00b523a7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b523bc: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b523e0
extern "C" __declspec(naked) void asm_00b523e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5246c }
	__asm { test esi, esi }
	__asm { jne L_00b5242a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52415 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5242a }
	__asm { L_00b52415: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5242a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5246c }
	__asm { cmp dword ptr [esi + 0x10], -1 }
	__asm { je L_00b5246c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52457 }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5246c }
	__asm { L_00b52457: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5246c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b52490
extern "C" __declspec(naked) void asm_00b52490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5251c }
	__asm { test esi, esi }
	__asm { jne L_00b524da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b524c5 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b524da }
	__asm { L_00b524c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b524da: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5251c }
	__asm { cmp dword ptr [esi + 0xc], -1 }
	__asm { je L_00b5251c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52507 }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5251c }
	__asm { L_00b52507: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5251c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
extern "C" void fn_00b61fa0();
// FUNCTION: ROBLOXSTUDIO 0x00b52540
extern "C" __declspec(naked) void asm_00b52540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { je L_00b525d3 }
	__asm { test edi, edi }
	__asm { jne L_00b5258b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52576 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5258b }
	__asm { L_00b52576: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5258b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b525d3 }
	__asm { mov ecx, edi }
	__asm { call fn_00b61fa0 }
	__asm { cmp dword ptr [eax], -1 }
	__asm { je L_00b525d3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b525be }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b525d3 }
	__asm { L_00b525be: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b525d3: }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00b61fa0 }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b52600
extern "C" __declspec(naked) void asm_00b52600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5268f }
	__asm { test esi, esi }
	__asm { jne L_00b5264a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52635 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5264a }
	__asm { L_00b52635: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5264a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5268f }
	__asm { cmp dword ptr [esi + 0xfc], -1 }
	__asm { je L_00b5268f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5267a }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5268f }
	__asm { L_00b5267a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5268f: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xfc], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b526b0
extern "C" __declspec(naked) void asm_00b526b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5273f }
	__asm { test esi, esi }
	__asm { jne L_00b526fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b526e5 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b526fa }
	__asm { L_00b526e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b526fa: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5273f }
	__asm { cmp dword ptr [esi + 0xf0], -1 }
	__asm { je L_00b5273f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5272a }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5273f }
	__asm { L_00b5272a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5273f: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xf0], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b52760
extern "C" __declspec(naked) void asm_00b52760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b527ef }
	__asm { test esi, esi }
	__asm { jne L_00b527aa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52795 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b527aa }
	__asm { L_00b52795: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b527aa: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b527ef }
	__asm { cmp dword ptr [esi + 0xf8], -1 }
	__asm { je L_00b527ef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b527da }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b527ef }
	__asm { L_00b527da: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b527ef: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xf8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00b52810
extern "C" __declspec(naked) void asm_00b52810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5289f }
	__asm { test esi, esi }
	__asm { jne L_00b5285a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52845 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5285a }
	__asm { L_00b52845: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5285a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5289f }
	__asm { cmp dword ptr [esi + 0xf4], -1 }
	__asm { je L_00b5289f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5288a }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5289f }
	__asm { L_00b5288a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5289f: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
extern "C" void fn_00b530c0();
// FUNCTION: ROBLOXSTUDIO 0x00b528c0
extern "C" __declspec(naked) void asm_00b528c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00b530c0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { je L_00b52957 }
	__asm { test esi, esi }
	__asm { jns L_00b52914 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b528ff }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52914 }
	__asm { L_00b528ff: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52914: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52957 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52957 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52942 }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52957 }
	__asm { L_00b52942: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52957: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edx + eax*4 - 4] }
	__asm { mov dword ptr [edx + esi*4], ecx }
	__asm { call fn_00b530c0 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b530c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52990
extern "C" __declspec(naked) void asm_00b52990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52a21 }
	__asm { test esi, esi }
	__asm { jns L_00b529de }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b529c9 }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b529de }
	__asm { L_00b529c9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b529de: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52a21 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52a21 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52a0c }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52a21 }
	__asm { L_00b52a0c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52a21: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0x14], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x14], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52a50
extern "C" __declspec(naked) void asm_00b52a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52ae1 }
	__asm { test esi, esi }
	__asm { jns L_00b52a9e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52a89 }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52a9e }
	__asm { L_00b52a89: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52a9e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52ae1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52ae1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52acc }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52ae1 }
	__asm { L_00b52acc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52ae1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52b10
extern "C" __declspec(naked) void asm_00b52b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52ba1 }
	__asm { test esi, esi }
	__asm { jns L_00b52b5e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52b49 }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52b5e }
	__asm { L_00b52b49: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52b5e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52ba1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52ba1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52b8c }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52ba1 }
	__asm { L_00b52b8c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52ba1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0x10], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x10], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52bd0
extern "C" __declspec(naked) void asm_00b52bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52c61 }
	__asm { test esi, esi }
	__asm { jns L_00b52c1e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52c09 }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52c1e }
	__asm { L_00b52c09: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52c1e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52c61 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52c61 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52c4c }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52c61 }
	__asm { L_00b52c4c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52c61: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
extern "C" void fn_00b61fa0();
// FUNCTION: ROBLOXSTUDIO 0x00b52c90
extern "C" __declspec(naked) void asm_00b52c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00b61fa0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { je L_00b52d27 }
	__asm { test esi, esi }
	__asm { jns L_00b52ce4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52ccf }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52ce4 }
	__asm { L_00b52ccf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52ce4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52d27 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52d27 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52d12 }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52d27 }
	__asm { L_00b52d12: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52d27: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edx + eax*4 - 4] }
	__asm { mov dword ptr [edx + esi*4], ecx }
	__asm { call fn_00b61fa0 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b61fa0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52d60
extern "C" __declspec(naked) void asm_00b52d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xfc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52df4 }
	__asm { test esi, esi }
	__asm { jns L_00b52db1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52d9c }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52db1 }
	__asm { L_00b52d9c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52db1: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52df4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52df4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52ddf }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52df4 }
	__asm { L_00b52ddf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52df4: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0xfc], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xfc], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52e30
extern "C" __declspec(naked) void asm_00b52e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xf0] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52ec4 }
	__asm { test esi, esi }
	__asm { jns L_00b52e81 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52e6c }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52e81 }
	__asm { L_00b52e6c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52e81: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52ec4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52ec4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52eaf }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52ec4 }
	__asm { L_00b52eaf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52ec4: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0xf0], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xf0], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00b52f00
extern "C" __declspec(naked) void asm_00b52f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xf8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b52f94 }
	__asm { test esi, esi }
	__asm { jns L_00b52f51 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52f3c }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52f51 }
	__asm { L_00b52f3c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52f51: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b52f94 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00b52f94 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b52f7f }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b52f94 }
	__asm { L_00b52f7f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b52f94: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0xf8], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xf8], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b54260();
extern "C" void fn_00c029e0();
extern "C" void fn_00c02b60();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b53430
extern "C" __declspec(naked) void asm_00b53430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b53494 }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_00b53494 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00b53483 }
	__asm { push 0x93 }
	__asm { push 0xecc4f8 }
	__asm { push 0xe857f0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b53494 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b53483: }
	__asm { movzx eax, al }
	__asm { push 0xecc970 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b53494: }
	__asm { push 0x34 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b534ba }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00c029e0 }
	__asm { mov esi, eax }
	__asm { jmp L_00b534bc }
	__asm { L_00b534ba: }
	__asm { xor esi, esi }
	__asm { L_00b534bc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c02b60 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b54260 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b52d60();
extern "C" void fn_00b52e30();
extern "C" void fn_00b52f00();
extern "C" void fn_00b52ff0();
extern "C" void fn_00b540b0();
extern "C" void fn_00b67c60();
// FUNCTION: ROBLOXSTUDIO 0x00b53c30
extern "C" __declspec(naked) void asm_00b53c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0xf4], 0 }
	__asm { mov edi, ecx }
	__asm { jl L_00b53c60 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b540b0 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00b52ff0 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b53c60: }
	__asm { cmp dword ptr [esi + 0xf8], 0 }
	__asm { jl L_00b53c86 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b540b0 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00b52f00 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b53c86: }
	__asm { cmp dword ptr [esi + 0xfc], 0 }
	__asm { jl L_00b53ca5 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_00b52d60 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b53ca5: }
	__asm { cmp dword ptr [esi + 0xf0], 0 }
	__asm { jl L_00b53cc2 }
	__asm { push esi }
	__asm { call fn_00b52e30 }
	__asm { mov ecx, esi }
	__asm { call fn_00b67c60 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00b53cc2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b54150();
// FUNCTION: ROBLOXSTUDIO 0x00b540b0
extern "C" __declspec(naked) void asm_00b540b0()
{
	__asm { L_00b540b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [ebx + 0x10], esi }
	__asm { jle L_00b5413a }
	__asm { push edi }
	__asm { L_00b540c6: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b54113 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00b54113 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b540ff }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b54110 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b540ff: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b54110: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_00b54113: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov edi, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [edi + 0x20], 0 }
	__asm { jl L_00b54127 }
	__asm { push edi }
	__asm { mov ecx, edx }
	__asm { call fn_00b54150 }
	__asm { L_00b54127: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { call L_00b540b0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0x10] }
	__asm { jl L_00b540c6 }
	__asm { pop edi }
	__asm { L_00b5413a: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b528c0();
// FUNCTION: ROBLOXSTUDIO 0x00b54150
extern "C" __declspec(naked) void asm_00b54150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b541a1 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { jge L_00b541a1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b54190 }
	__asm { push 0xe4 }
	__asm { push 0xecb3f0 }
	__asm { push 0xecc3b0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b541a1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b54190: }
	__asm { movzx eax, al }
	__asm { push 0xecc428 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b541a1: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x40] }
	__asm { call fn_00b528c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b541f1 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { jl L_00b541f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b541e0 }
	__asm { push 0xe6 }
	__asm { push 0xecb3f0 }
	__asm { push 0xecbda0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b541f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b541e0: }
	__asm { movzx eax, al }
	__asm { push 0xecc490 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b541f1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b55390
extern "C" __declspec(naked) void asm_00b55390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00b553d9 }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { cmp dword ptr [ecx + 0xf0], 0 }
	__asm { jge L_00b553d5 }
	__asm { cmp dword ptr [ecx + 0xf4], 0 }
	__asm { jge L_00b553d5 }
	__asm { cmp dword ptr [ecx + 0xf8], 0 }
	__asm { jge L_00b553d5 }
	__asm { cmp dword ptr [ecx + 0xfc], 0 }
	__asm { jge L_00b553d5 }
	__asm { cmp dword ptr [eax + 0x20], 0 }
	__asm { jl L_00b553d9 }
	__asm { L_00b553d5: }
	__asm { mov bl, 1 }
	__asm { jmp L_00b553db }
	__asm { L_00b553d9: }
	__asm { xor bl, bl }
	__asm { L_00b553db: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00b55418 }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { cmp dword ptr [ecx + 0xf0], 0 }
	__asm { jge L_00b55424 }
	__asm { cmp dword ptr [ecx + 0xf4], 0 }
	__asm { jge L_00b55424 }
	__asm { cmp dword ptr [ecx + 0xf8], 0 }
	__asm { jge L_00b55424 }
	__asm { cmp dword ptr [ecx + 0xfc], 0 }
	__asm { jge L_00b55424 }
	__asm { cmp dword ptr [eax + 0x20], 0 }
	__asm { jge L_00b55424 }
	__asm { L_00b55418: }
	__asm { test bl, bl }
	__asm { jne L_00b55424 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b55424: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00b557e0
extern "C" __declspec(naked) void asm_00b557e0()
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
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b5582b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00b5582b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00b55872 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeccf84 }
	__asm { mov dword ptr [esi + 8], 0xeccf94 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xeccf9c }
	__asm { mov dword ptr [esi + 8], 0xeccfac }
	__asm { jmp L_00b55874 }
	__asm { L_00b55872: }
	__asm { xor esi, esi }
	__asm { L_00b55874: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00b55891 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b55891: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00701940();
extern "C" void fn_00b55df0();
// FUNCTION: ROBLOXSTUDIO 0x00b558b0
extern "C" __declspec(naked) void asm_00b558b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00b558ed }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0xc], 0x3f800000 }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 0x3f000000 }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x38] }
	__asm { jmp L_00b55984 }
	__asm { L_00b558ed: }
	__asm { cmp byte ptr [ebp + 0x28], 0 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { jne L_00b55940 }
	__asm { test eax, eax }
	__asm { jne L_00b5590b }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x40] }
	__asm { jmp L_00b55984 }
	__asm { L_00b5590b: }
	__asm { cmp eax, 1 }
	__asm { je L_00b5592f }
	__asm { cmp eax, 3 }
	__asm { je L_00b5592f }
	__asm { cmp eax, 2 }
	__asm { jne L_00b5599e }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x50] }
	__asm { jmp L_00b55984 }
	__asm { L_00b5592f: }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x48] }
	__asm { jmp L_00b55984 }
	__asm { L_00b55940: }
	__asm { test eax, eax }
	__asm { jne L_00b55955 }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x58] }
	__asm { jmp L_00b55984 }
	__asm { L_00b55955: }
	__asm { cmp eax, 1 }
	__asm { je L_00b5592f }
	__asm { cmp eax, 3 }
	__asm { jne L_00b55970 }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x60] }
	__asm { jmp L_00b55984 }
	__asm { L_00b55970: }
	__asm { cmp eax, 2 }
	__asm { jne L_00b5599e }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x68] }
	__asm { L_00b55984: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b55df0 }
	__asm { L_00b5599e: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00701940();
extern "C" void fn_00b56020();
// FUNCTION: ROBLOXSTUDIO 0x00b559b0
extern "C" __declspec(naked) void asm_00b559b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00b559ed }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0xc], 0x3f800000 }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 0x3f000000 }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x38] }
	__asm { jmp L_00b55a84 }
	__asm { L_00b559ed: }
	__asm { cmp byte ptr [ebp + 0x28], 0 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { jne L_00b55a40 }
	__asm { test eax, eax }
	__asm { jne L_00b55a0b }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x40] }
	__asm { jmp L_00b55a84 }
	__asm { L_00b55a0b: }
	__asm { cmp eax, 1 }
	__asm { je L_00b55a2f }
	__asm { cmp eax, 3 }
	__asm { je L_00b55a2f }
	__asm { cmp eax, 2 }
	__asm { jne L_00b55a9e }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x50] }
	__asm { jmp L_00b55a84 }
	__asm { L_00b55a2f: }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x48] }
	__asm { jmp L_00b55a84 }
	__asm { L_00b55a40: }
	__asm { test eax, eax }
	__asm { jne L_00b55a55 }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x58] }
	__asm { jmp L_00b55a84 }
	__asm { L_00b55a55: }
	__asm { cmp eax, 1 }
	__asm { je L_00b55a2f }
	__asm { cmp eax, 3 }
	__asm { jne L_00b55a70 }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x60] }
	__asm { jmp L_00b55a84 }
	__asm { L_00b55a70: }
	__asm { cmp eax, 2 }
	__asm { jne L_00b55a9e }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { call fn_00701940 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x68] }
	__asm { L_00b55a84: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b56020 }
	__asm { L_00b55a9e: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_004034a0();
extern "C" void fn_00b56c10();
// FUNCTION: ROBLOXSTUDIO 0x00b56df0
extern "C" __declspec(naked) void asm_00b56df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59218 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ax, word ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [ecx], ax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00b56e3b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00b56e3d }
	__asm { L_00b56e3b: }
	__asm { mov ecx, esi }
	__asm { L_00b56e3d: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00b56e4b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00b56e4d }
	__asm { L_00b56e4b: }
	__asm { mov ecx, esi }
	__asm { L_00b56e4d: }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00b56c10 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 0x14 }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00b56e69 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00b56e6b }
	__asm { L_00b56e69: }
	__asm { mov ecx, esi }
	__asm { L_00b56e6b: }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00b56e74 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_00b56e76 }
	__asm { L_00b56e74: }
	__asm { mov edi, esi }
	__asm { L_00b56e76: }
	__asm { test ecx, ecx }
	__asm { jne L_00b56e7e }
	__asm { xor edx, edx }
	__asm { jmp L_00b56e82 }
	__asm { L_00b56e7e: }
	__asm { mov edx, ecx }
	__asm { sub edx, edi }
	__asm { L_00b56e82: }
	__asm { test eax, eax }
	__asm { je L_00b56e88 }
	__asm { sub eax, ecx }
	__asm { L_00b56e88: }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004034a0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b56eb0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00b56eb0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00b56eb0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004034a0();
extern "C" void fn_00b56ca0();
// FUNCTION: ROBLOXSTUDIO 0x00b56ec0
extern "C" __declspec(naked) void asm_00b56ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00b56eee }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_00b56ef0 }
	__asm { L_00b56eee: }
	__asm { mov eax, edi }
	__asm { L_00b56ef0: }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { add esi, eax }
	__asm { mov ax, word ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov word ptr [ecx], ax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00b56f1b }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_00b56f1d }
	__asm { L_00b56f1b: }
	__asm { mov ecx, edi }
	__asm { L_00b56f1d: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00b56f2b }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_00b56f2d }
	__asm { L_00b56f2b: }
	__asm { mov ecx, edi }
	__asm { L_00b56f2d: }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b56ca0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00b56f47 }
	__asm { mov edx, dword ptr [edi] }
	__asm { jmp L_00b56f49 }
	__asm { L_00b56f47: }
	__asm { mov edx, edi }
	__asm { L_00b56f49: }
	__asm { test eax, eax }
	__asm { jne L_00b56f51 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00b56f55 }
	__asm { L_00b56f51: }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { L_00b56f55: }
	__asm { test esi, esi }
	__asm { je L_00b56f5b }
	__asm { sub esi, eax }
	__asm { L_00b56f5b: }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_004034a0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b56f83 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00b56f83 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00b56f83: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_00513a40();
extern "C" void fn_00660470();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b57370
extern "C" __declspec(naked) void asm_00b57370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00660470 }
	__asm { mov edi, dword ptr [ebx] }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp esi, eax }
	__asm { je L_00b57402 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea edx, [esi + 0x10] }
	__asm { jb L_00b573c7 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_00b573c7: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovae ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 0x18], ebx }
	__asm { mov eax, ebx }
	__asm { cmovb eax, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00b573f8 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { cmp ecx, ebx }
	__asm { jb L_00b573ff }
	__asm { cmp ecx, ebx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { L_00b573f8: }
	__asm { js L_00b573ff }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jmp L_00b57405 }
	__asm { L_00b573ff: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_00b57402: }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_00b57405: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], edi }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b5741e }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b5741e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00b57a70
extern "C" __declspec(naked) void asm_00b57a70()
{
	__asm { L_00b57a70: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00b57acc }
	__asm { lea ebx, [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00b57ac9 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00b57ac9 }
	__asm { add ebx, -0x1c }
	__asm { je L_00b57ac9 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax + 0x98] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b57ac9 }
	__asm { mov eax, dword ptr [ebx + 0xe0] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008bbcc0 }
	__asm { jmp L_00b57acc }
	__asm { L_00b57ac9: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_00b57acc: }
	__asm { xor esi, esi }
	__asm { mov edi, edi }
	__asm { L_00b57ad0: }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_00b57b3b }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { sar eax, 3 }
	__asm { cmp esi, eax }
	__asm { jae L_00b57b3b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b57b27 }
	__asm { test ecx, ecx }
	__asm { jne L_00b57b27 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b57b16 }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b57b27 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b57b16: }
	__asm { movzx eax, al }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b57b27: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [eax + esi*8] }
	__asm { call L_00b57a70 }
	__asm { add esp, 8 }
	__asm { inc esi }
	__asm { jmp L_00b57ad0 }
	__asm { L_00b57b3b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a21680();
extern "C" void fn_00a4f5c0();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b586e0
extern "C" __declspec(naked) void asm_00b586e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b5875d }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { jg L_00b5875d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5874c }
	__asm { push 0x19 }
	__asm { push 0xecd148 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5875d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5874c: }
	__asm { movzx eax, al }
	__asm { push 0xecd188 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5875d: }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a21680 }
	__asm { add esp, 0x14 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b587cf }
	__asm { fld dword ptr [g_01038064] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00a4f5c0 }
	__asm { test al, al }
	__asm { je L_00b587cf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b587ba }
	__asm { push 0x1c }
	__asm { push 0xecd148 }
	__asm { push 0xe900e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b587cf }
	__asm { L_00b587ba: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xecd1f0 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b587cf: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b58c80
extern "C" __declspec(naked) void asm_00b58c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b58ca6 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { lea ecx, [eax*8] }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b58ca6: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp esi, eax }
	__asm { jae L_00b58cda }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { pop edi }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { lea eax, [esi + eax*8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b58cda: }
	__asm { sub esi, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { lea ecx, [eax*8] }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b58e20
extern "C" __declspec(naked) void asm_00b58e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59331 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00b58e51: }
	__asm { cmp esi, dword ptr [ebp + 0x14] }
	__asm { je L_00b58ebd }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00b58e8d }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00b58e8d: }
	__asm { add esi, 0x38 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jne L_00b58ea1 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_00b58ea1: }
	__asm { xor ecx, ecx }
	__asm { cmp esi, dword ptr [eax + 0xc] }
	__asm { cmove esi, ecx }
	__asm { add edi, 0x38 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { jmp L_00b58e51 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00b58ebd: }
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

extern "C" void fn_00b58fc0();
// FUNCTION: ROBLOXSTUDIO 0x00b58f30
extern "C" __declspec(naked) void asm_00b58f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jle L_00b58f9f }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [edi + 4] }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jl L_00b58f78 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { L_00b58f78: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { lea eax, [esi*8] }
	__asm { sub eax, esi }
	__asm { lea eax, [ecx + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { cmp eax, dword ptr [ebx + 0xc] }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { jne L_00b58fab }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b58f9f: }
	__asm { jns L_00b58fa9 }
	__asm { neg esi }
	__asm { push esi }
	__asm { call fn_00b58fc0 }
	__asm { L_00b58fa9: }
	__asm { mov eax, edi }
	__asm { L_00b58fab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b58f30();
// FUNCTION: ROBLOXSTUDIO 0x00b58fc0
extern "C" __declspec(naked) void asm_00b58fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jle L_00b59034 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { test ebx, ebx }
	__asm { jne L_00b58fdb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [eax + 0xc] }
	__asm { L_00b58fdb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp esi, ecx }
	__asm { jle L_00b5901a }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { L_00b5901a: }
	__asm { lea eax, [esi*8] }
	__asm { sub eax, esi }
	__asm { shl eax, 3 }
	__asm { sub ebx, eax }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b59034: }
	__asm { jns L_00b5903e }
	__asm { neg esi }
	__asm { push esi }
	__asm { call fn_00b58f30 }
	__asm { L_00b5903e: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b58c80();
extern "C" void fn_00b58f30();
extern "C" void fn_00b59050();
extern "C" void fn_00b593c0();
// FUNCTION: ROBLOXSTUDIO 0x00b594c0
extern "C" __declspec(naked) void asm_00b594c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00b593c0 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { jne L_00b594fd }
	__asm { xor eax, eax }
	__asm { jmp L_00b59500 }
	__asm { L_00b594fd: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { L_00b59500: }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00b58c80 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, eax }
	__asm { call fn_00b58c80 }
	__asm { mov ecx, eax }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { mov ecx, edi }
	__asm { add esi, edx }
	__asm { call fn_00b59050 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { jne L_00b59547 }
	__asm { xor eax, eax }
	__asm { jmp L_00b5954a }
	__asm { L_00b59547: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { L_00b5954a: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_00b58f30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b59c00
extern "C" __declspec(naked) void asm_00b59c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x10], ecx }
	__asm { jbe L_00b59c28 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { L_00b59c12: }
	__asm { add eax, 0x38 }
	__asm { inc ecx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00b59c23 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00b59c23: }
	__asm { cmp ecx, dword ptr [esi + 0x10] }
	__asm { jb L_00b59c12 }
	__asm { L_00b59c28: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b59c37 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b59c37: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi], edi }
	__asm { lea ecx, [eax*8] }
	__asm { sub ecx, eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { lea eax, [edi + ecx*8] }
	__asm { cmp ebx, eax }
	__asm { cmove ebx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0088fa20();
extern "C" void fn_00b58e20();
extern "C" void fn_00b58f30();
extern "C" void fn_00b59c00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b59ef0
extern "C" __declspec(naked) void asm_00b59ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59340 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { sub esi, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp ecx, eax }
	__asm { je L_00b59fa1 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0088fa20 }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test edx, edx }
	__asm { jne L_00b59f4a }
	__asm { xor ebx, ebx }
	__asm { jmp L_00b59f4d }
	__asm { L_00b59f4a: }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { L_00b59f4d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp edx, ecx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { lea edx, [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmovae eax, edx }
	__asm { push ecx }
	__asm { push dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { call fn_00b58f30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { call fn_00b58e20 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b59c00 }
	__asm { L_00b59fa1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { test eax, eax }
	__asm { je L_00b59fc4 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b59fc4: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5ac80();
// FUNCTION: ROBLOXSTUDIO 0x00b5aa40
extern "C" __declspec(naked) void asm_00b5aa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5aa56 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5aa58 }
	__asm { L_00b5aa56: }
	__asm { xor esi, esi }
	__asm { L_00b5aa58: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5aadb }
	__asm { test esi, esi }
	__asm { jne L_00b5aa98 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5aa83 }
	__asm { push 0x6b }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5aa98 }
	__asm { L_00b5aa83: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece198 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5aa98: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5aadb }
	__asm { test esi, esi }
	__asm { jne L_00b5aadb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5aac6 }
	__asm { push 0xd0 }
	__asm { push 0xe68b68 }
	__asm { push 0x100a87c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5aadb }
	__asm { L_00b5aac6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe68bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5aadb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b5ac80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009189d0();
// FUNCTION: ROBLOXSTUDIO 0x00b5ab00
extern "C" __declspec(naked) void asm_00b5ab00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5ab16 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5ab18 }
	__asm { L_00b5ab16: }
	__asm { xor esi, esi }
	__asm { L_00b5ab18: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5ab9b }
	__asm { test esi, esi }
	__asm { jne L_00b5ab58 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5ab43 }
	__asm { push 0x6b }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5ab58 }
	__asm { L_00b5ab43: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece198 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5ab58: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5ab9b }
	__asm { test esi, esi }
	__asm { jne L_00b5ab9b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5ab86 }
	__asm { push 0xd0 }
	__asm { push 0xe68b68 }
	__asm { push 0x100a87c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5ab9b }
	__asm { L_00b5ab86: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe68bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5ab9b: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009189d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5ad40();
// FUNCTION: ROBLOXSTUDIO 0x00b5abb0
extern "C" __declspec(naked) void asm_00b5abb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5abc6 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5abc8 }
	__asm { L_00b5abc6: }
	__asm { xor esi, esi }
	__asm { L_00b5abc8: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5ac4b }
	__asm { test esi, esi }
	__asm { jne L_00b5ac08 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5abf3 }
	__asm { push 0x6b }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5ac08 }
	__asm { L_00b5abf3: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece198 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5ac08: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5ac4b }
	__asm { test esi, esi }
	__asm { jne L_00b5ac4b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5ac36 }
	__asm { push 0xd0 }
	__asm { push 0xe68b68 }
	__asm { push 0x100a87c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5ac4b }
	__asm { L_00b5ac36: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe68bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5ac4b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b5ad40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5be10();
// FUNCTION: ROBLOXSTUDIO 0x00b5ac80
extern "C" __declspec(naked) void asm_00b5ac80()
{
	__asm { L_00b5ac80: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebx + 0x18], esi }
	__asm { jle L_00b5ad36 }
	__asm { L_00b5aca5: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b5acef }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00b5acef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5acde }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5acef }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b5acde: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5acef: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov edi, dword ptr [eax + esi*4] }
	__asm { test edi, edi }
	__asm { je L_00b5acfe }
	__asm { add edi, -8 }
	__asm { jmp L_00b5ad00 }
	__asm { L_00b5acfe: }
	__asm { xor edi, edi }
	__asm { L_00b5ad00: }
	__asm { push edi }
	__asm { call fn_00b5be10 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b5ad2c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call L_00b5ac80 }
	__asm { L_00b5ad2c: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0x18] }
	__asm { jl L_00b5aca5 }
	__asm { L_00b5ad36: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5be10();
// FUNCTION: ROBLOXSTUDIO 0x00b5ad40
extern "C" __declspec(naked) void asm_00b5ad40()
{
	__asm { L_00b5ad40: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [ebx + 0x18], esi }
	__asm { jle L_00b5adf9 }
	__asm { L_00b5ad62: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b5adac }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00b5adac }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5ad9b }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5adac }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b5ad9b: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5adac: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov edi, dword ptr [eax + esi*4] }
	__asm { test edi, edi }
	__asm { je L_00b5adbb }
	__asm { add edi, -8 }
	__asm { jmp L_00b5adbd }
	__asm { L_00b5adbb: }
	__asm { xor edi, edi }
	__asm { L_00b5adbd: }
	__asm { push edi }
	__asm { call fn_00b5be10 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00b5adef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call L_00b5ad40 }
	__asm { L_00b5adef: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0x18] }
	__asm { jl L_00b5ad62 }
	__asm { L_00b5adf9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_01038044[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006ddf90();
extern "C" void fn_009f33e0();
extern "C" void fn_009f3c40();
// FUNCTION: ROBLOXSTUDIO 0x00b5aee0
extern "C" __declspec(naked) void asm_00b5aee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [g_01038044] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_006ddf90 }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5afe9 }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_009f33e0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00b5af9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5af85 }
	__asm { push 0x1e }
	__asm { push 0xecda30 }
	__asm { push 0xecda7c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5af9a }
	__asm { L_00b5af85: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecdac0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5af9a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5afe9 }
	__asm { fld dword ptr [esi + 0xc] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f3c40 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00b5afe9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5afd4 }
	__asm { push 0x1f }
	__asm { push 0xecda30 }
	__asm { push 0xecdaa0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5afe9 }
	__asm { L_00b5afd4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecdb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5afe9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5aa40();
extern "C" void fn_00ba9040();
// FUNCTION: ROBLOXSTUDIO 0x00b5b400
extern "C" __declspec(naked) void asm_00b5b400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00b5b419 }
	__asm { add esi, -8 }
	__asm { jmp L_00b5b41b }
	__asm { L_00b5b419: }
	__asm { xor esi, esi }
	__asm { L_00b5b41b: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5b45d }
	__asm { test esi, esi }
	__asm { jne L_00b5b45d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5b44c }
	__asm { push 0x6b }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5b45d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5b44c: }
	__asm { movzx eax, al }
	__asm { push 0xece198 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5b45d: }
	__asm { mov ecx, dword ptr [esi + 0x104] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00ba9040 }
	__asm { fldz }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [eax], 0xb5b4a0 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { lea edx, [ebp - 4] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { call fn_00b5aa40 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
extern "C" void fn_00896d00();
extern "C" void fn_0099c7f0();
extern "C" void fn_0099ccc0();
extern "C" void fn_0099d1d0();
// FUNCTION: ROBLOXSTUDIO 0x00b5b690
extern "C" __declspec(naked) void asm_00b5b690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { je L_00b5b6eb }
	__asm { mov ecx, ebx }
	__asm { call fn_0099c7f0 }
	__asm { cmp eax, esi }
	__asm { je L_00b5b6eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5b6d6 }
	__asm { push 0x13c }
	__asm { push 0xecdd40 }
	__asm { push 0xece580 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5b6eb }
	__asm { L_00b5b6d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece5a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5b6eb: }
	__asm { mov ecx, ebx }
	__asm { call fn_0099ccc0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00b5b770 }
	__asm { L_00b5b6f8: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { cmp ebx, ecx }
	__asm { jne L_00b5b702 }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { L_00b5b702: }
	__asm { test ecx, ecx }
	__asm { je L_00b5b762 }
	__asm { call fn_0099c7f0 }
	__asm { cmp eax, esi }
	__asm { je L_00b5b762 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { cmp ecx, dword ptr [esi + 0x4c] }
	__asm { jge L_00b5b728 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00b5b723 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_00b5b723: }
	__asm { inc dword ptr [esi + 0x48] }
	__asm { jmp L_00b5b75f }
	__asm { L_00b5b728: }
	__asm { lea edx, [ebp - 8] }
	__asm { cmp edx, eax }
	__asm { jb L_00b5b747 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { cmp edx, eax }
	__asm { jae L_00b5b747 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x44] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_0088fab0 }
	__asm { jmp L_00b5b75f }
	__asm { L_00b5b747: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x44] }
	__asm { call fn_00896d00 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [eax + ecx*4 - 4], edi }
	__asm { L_00b5b75f: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00b5b762: }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_0099d1d0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_00b5b6f8 }
	__asm { L_00b5b770: }
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
extern "C" void fn_008950e0();
extern "C" void fn_00b5abb0();
// FUNCTION: ROBLOXSTUDIO 0x00b5b800
extern "C" __declspec(naked) void asm_00b5b800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_00b5b856 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 5 }
	__asm { jge L_00b5b856 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5b841 }
	__asm { push 0x150 }
	__asm { push 0xecdd40 }
	__asm { push 0xece608 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5b856 }
	__asm { L_00b5b841: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5b856: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { test eax, eax }
	__asm { je L_00b5b886 }
	__asm { mov ecx, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { test ecx, ecx }
	__asm { jns L_00b5b886 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x44] }
	__asm { jne L_00b5b87a }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { jmp L_00b5b881 }
	__asm { L_00b5b87a: }
	__asm { mov dword ptr [esi + 0x4c], 0xa }
	__asm { L_00b5b881: }
	__asm { call fn_008950e0 }
	__asm { L_00b5b886: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0xb5b690 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], esi }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00b5abb0 }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x44] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008950e0();
extern "C" void fn_00b5a1e0();
extern "C" void fn_00b5a710();
// FUNCTION: ROBLOXSTUDIO 0x00b5b8c0
extern "C" __declspec(naked) void asm_00b5b8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00b5b8f9 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ecx, ecx }
	__asm { jns L_00b5b8f9 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { jne L_00b5b8ed }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { jmp L_00b5b8f4 }
	__asm { L_00b5b8ed: }
	__asm { mov dword ptr [esi + 8], 0xa }
	__asm { L_00b5b8f4: }
	__asm { call fn_008950e0 }
	__asm { L_00b5b8f9: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edi, dword ptr [edi + 0x28] }
	__asm { test al, al }
	__asm { je L_00b5b941 }
	__asm { test edi, edi }
	__asm { jne L_00b5b941 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5b930 }
	__asm { push 0x9c }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5b941 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5b930: }
	__asm { movzx eax, al }
	__asm { push 0xece2a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5b941: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00b5a1e0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0xb5bec0 }
	__asm { lea ecx, [edx + eax*4] }
	__asm { mov eax, ecx }
	__asm { sub eax, edx }
	__asm { sar eax, 2 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00b5a710 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008950e0();
extern "C" void fn_00b5a060();
extern "C" void fn_00b5a710();
// FUNCTION: ROBLOXSTUDIO 0x00b5baa0
extern "C" __declspec(naked) void asm_00b5baa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00b5bad9 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ecx, ecx }
	__asm { jns L_00b5bad9 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { jne L_00b5bacd }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { jmp L_00b5bad4 }
	__asm { L_00b5bacd: }
	__asm { mov dword ptr [esi + 8], 0xa }
	__asm { L_00b5bad4: }
	__asm { call fn_008950e0 }
	__asm { L_00b5bad9: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edi, dword ptr [edi + 0x28] }
	__asm { test al, al }
	__asm { je L_00b5bb21 }
	__asm { test edi, edi }
	__asm { jne L_00b5bb21 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5bb10 }
	__asm { push 0xa3 }
	__asm { push 0xecdd40 }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5bb21 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5bb10: }
	__asm { movzx eax, al }
	__asm { push 0xece300 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5bb21: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00b5a060 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0xb5bec0 }
	__asm { lea ecx, [edx + eax*4] }
	__asm { mov eax, ecx }
	__asm { sub eax, edx }
	__asm { sar eax, 2 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00b5a710 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00595fa0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b5be10
extern "C" __declspec(naked) void asm_00b5be10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor bl, bl }
	__asm { test esi, esi }
	__asm { je L_00b5be3a }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00b5be3a }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00b5be3a }
	__asm { movzx ebx, bl }
	__asm { add eax, -8 }
	__asm { mov ecx, 1 }
	__asm { cmovne ebx, ecx }
	__asm { L_00b5be3a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5beb1 }
	__asm { test bl, bl }
	__asm { je L_00b5beb1 }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5be63 }
	__asm { mov ecx, eax }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5be63 }
	__asm { add eax, -8 }
	__asm { jmp L_00b5be65 }
	__asm { L_00b5be63: }
	__asm { xor eax, eax }
	__asm { L_00b5be65: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00b5be74 }
	__asm { add eax, -8 }
	__asm { jmp L_00b5be76 }
	__asm { L_00b5be74: }
	__asm { xor eax, eax }
	__asm { L_00b5be76: }
	__asm { cmp eax, esi }
	__asm { je L_00b5beb1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5be9c }
	__asm { push 0x103 }
	__asm { push 0xecdd40 }
	__asm { push 0xece3f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5beb1 }
	__asm { L_00b5be9c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xece460 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5beb1: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00595fa0();
extern "C" void fn_006b9740();
extern "C" void fn_00b5bd60();
// FUNCTION: ROBLOXSTUDIO 0x00b5cac0
extern "C" __declspec(naked) void asm_00b5cac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b5cafc }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_00b5cafc }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b5cafc }
	__asm { lea eax, [ecx - 8] }
	__asm { test eax, eax }
	__asm { je L_00b5cafc }
	__asm { test ecx, ecx }
	__asm { je L_00b5caea }
	__asm { add ecx, -8 }
	__asm { jmp L_00b5caec }
	__asm { L_00b5caea: }
	__asm { xor ecx, ecx }
	__asm { L_00b5caec: }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00b5cafc }
	__asm { add eax, -8 }
	__asm { je L_00b5cafc }
	__asm { mov bl, 1 }
	__asm { jmp L_00b5cafe }
	__asm { L_00b5cafc: }
	__asm { xor bl, bl }
	__asm { L_00b5cafe: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5cb85 }
	__asm { test bl, bl }
	__asm { je L_00b5cb85 }
	__asm { push esi }
	__asm { call fn_00b5bd60 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b5cb29 }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5cb29 }
	__asm { add eax, -8 }
	__asm { jmp L_00b5cb2b }
	__asm { L_00b5cb29: }
	__asm { xor eax, eax }
	__asm { L_00b5cb2b: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00b5cb37 }
	__asm { add eax, -8 }
	__asm { jmp L_00b5cb39 }
	__asm { L_00b5cb37: }
	__asm { xor eax, eax }
	__asm { L_00b5cb39: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00b5cb48 }
	__asm { add eax, -8 }
	__asm { jmp L_00b5cb4a }
	__asm { L_00b5cb48: }
	__asm { xor eax, eax }
	__asm { L_00b5cb4a: }
	__asm { cmp eax, esi }
	__asm { je L_00b5cb85 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5cb70 }
	__asm { push 0x92 }
	__asm { push 0xece80c }
	__asm { push 0xece978 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5cb85 }
	__asm { L_00b5cb70: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecea08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5cb85: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5e370();
// FUNCTION: ROBLOXSTUDIO 0x00b5d010
extern "C" __declspec(naked) void asm_00b5d010()
{
	__asm { L_00b5d010: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_00b5d04a }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { lea edx, [eax + edx*4] }
	__asm { test edx, edx }
	__asm { je L_00b5d040 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_00b5d040: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5d04a: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, edx }
	__asm { jb L_00b5d082 }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edx + eax*4] }
	__asm { cmp edi, eax }
	__asm { jae L_00b5d082 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call L_00b5d010 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5d082: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b5e370 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b5d560
extern "C" __declspec(naked) void asm_00b5d560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5d5ec }
	__asm { test esi, esi }
	__asm { jne L_00b5d5aa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5d595 }
	__asm { push 0x42 }
	__asm { push 0xe78b18 }
	__asm { push 0xecec60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5d5aa }
	__asm { L_00b5d595: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecec68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5d5aa: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5d5ec }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jne L_00b5d5ec }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5d5d7 }
	__asm { push 0x43 }
	__asm { push 0xe78b18 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5d5ec }
	__asm { L_00b5d5d7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xececc8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5d5ec: }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { test edi, edi }
	__asm { je L_00b5d613 }
	__asm { test esi, esi }
	__asm { je L_00b5d613 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { cmp eax, esi }
	__asm { jle L_00b5d613 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5d613: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f9400[];
extern "C" char g_012f9404[];
extern "C" char g_012f9408[];
extern "C" void fn_006b9740();
extern "C" void fn_00893c50();
extern "C" void fn_00b49710();
extern "C" void fn_00b5b980();
// FUNCTION: ROBLOXSTUDIO 0x00b5da90
extern "C" __declspec(naked) void asm_00b5da90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5db1b }
	__asm { mov eax, dword ptr [g_012f9408] }
	__asm { test al, 1 }
	__asm { jne L_00b5dac5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9408], eax }
	__asm { mov eax, 1 }
	__asm { xor edx, edx }
	__asm { mov dword ptr [g_012f9400], eax }
	__asm { mov word ptr [g_012f9404], dx }
	__asm { jmp L_00b5daca }
	__asm { L_00b5dac5: }
	__asm { mov eax, dword ptr [g_012f9400] }
	__asm { L_00b5daca: }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [g_012f9404] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { add ecx, 0x14 }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { jne L_00b5db1b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5db06 }
	__asm { push 0x8b }
	__asm { push 0xeced48 }
	__asm { push 0xecf2a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5db1b }
	__asm { L_00b5db06: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecf2e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5db1b: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5b980 }
	__asm { mov ecx, dword ptr [eax + 0x70] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [eax + 0x74] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00893c50 }
	__asm { xor ecx, ecx }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { sete cl }
	__asm { mov al, cl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5d0c0();
extern "C" void fn_00b8c530();
// FUNCTION: ROBLOXSTUDIO 0x00b5df00
extern "C" __declspec(naked) void asm_00b5df00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { mov edi, ecx }
	__asm { je L_00b5df3c }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 4], 7 }
	__asm { call fn_00b5d0c0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5df3c: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b5df83 }
	__asm { cmp dword ptr [esi + 0x70], 7 }
	__asm { je L_00b5df83 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b5df72 }
	__asm { push 0x17f }
	__asm { push 0xeced48 }
	__asm { push 0xecf90c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5df83 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b5df72: }
	__asm { movzx eax, al }
	__asm { push 0xecf940 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5df83: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b600();
extern "C" void fn_00b5cb90();
extern "C" void fn_00b5d0c0();
extern "C" void fn_00b8c2b0();
// FUNCTION: ROBLOXSTUDIO 0x00b5df90
extern "C" __declspec(naked) void asm_00b5df90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00b5e037 }
	__asm { push esi }
	__asm { call fn_00b5cb90 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00b5dfed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5dfd8 }
	__asm { push 0x161 }
	__asm { push 0xeced48 }
	__asm { push 0xecf7ec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5dfed }
	__asm { L_00b5dfd8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecf810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5dfed: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b5e037 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { jne L_00b5e037 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b5e022 }
	__asm { push 0x162 }
	__asm { push 0xeced48 }
	__asm { push 0xecf888 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b5e037 }
	__asm { L_00b5e022: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xecf8a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b5e037: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c2b0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 8], 7 }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call fn_00b5d0c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5ece0();
extern "C" void fn_00b5f0c0();
extern "C" void fn_00b5f160();
extern "C" void fn_00b5fab0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00b5ef50
extern "C" __declspec(naked) void asm_00b5ef50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx esi, word ptr [ebx + 4] }
	__asm { movsx eax, word ptr [ebx + 2] }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movsx eax, word ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_00b5ef93 }
	__asm { inc eax }
	__asm { jmp L_00b5ef95 }
	__asm { L_00b5ef93: }
	__asm { xor eax, eax }
	__asm { L_00b5ef95: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b5ece0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00b5f042 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00b5efb6 }
	__asm { inc eax }
	__asm { jmp L_00b5efb8 }
	__asm { L_00b5efb6: }
	__asm { xor eax, eax }
	__asm { L_00b5efb8: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov bx, word ptr [ebx + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00b5f160 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00b5eff0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov word ptr [eax + 4], bx }
	__asm { L_00b5eff0: }
	__asm { add eax, 8 }
	__asm { je L_00b5f00e }
	__asm { push 0x800 }
	__asm { mov dword ptr [eax], 0 }
	__asm { add eax, 4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_00b5f00e: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00b5fab0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b5f0c0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00b5f040 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b5f040: }
	__asm { mov eax, esi }
	__asm { L_00b5f042: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b5f0c0
extern "C" __declspec(naked) void asm_00b5f0c0()
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
	__asm { mov dword ptr [ebx + 0x810], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00b5f126 }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00b5f116 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x80c] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00b5f116: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x80c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00b5f134 }
	__asm { L_00b5f126: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x80c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00b5f134: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00b5f14d }
	__asm { add ecx, 0xfffff7f4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b5f14d: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0057db00();
extern "C" void fn_00b5f1d0();
// FUNCTION: ROBLOXSTUDIO 0x00b5f220
extern "C" __declspec(naked) void asm_00b5f220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { jne L_00b5f237 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5f237: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx edx, word ptr [eax + 4] }
	__asm { push esi }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { movsx ebx, dx }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax] }
	__asm { movsx eax, si }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { movsx eax, di }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00b5f2c2 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00b5f2c2 }
	__asm { L_00b5f283: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00b5f2c2 }
	__asm { cmp esi, ebx }
	__asm { jne L_00b5f2ba }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp ax, word ptr [ecx - 0x80c] }
	__asm { jne L_00b5f2ba }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp ax, word ptr [ecx - 0x80a] }
	__asm { jne L_00b5f2ba }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp ax, word ptr [ecx - 0x808] }
	__asm { je L_00b5f2cd }
	__asm { L_00b5f2ba: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00b5f283 }
	__asm { L_00b5f2c2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5f2cd: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00b5f2da }
	__asm { add eax, 0xfffff7f4 }
	__asm { jmp L_00b5f2dc }
	__asm { L_00b5f2da: }
	__asm { xor eax, eax }
	__asm { L_00b5f2dc: }
	__asm { push dword ptr [eax + 0x80c] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { call fn_00b5f1d0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
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

extern "C" char g_00e10268[];
extern "C" void fn_00b61410();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b5fee0
extern "C" __declspec(naked) void asm_00b5fee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00b5ff6b }
	__asm { push ebx }
	__asm { L_00b5fef3: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b61410 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { seta bl }
	__asm { cmp dword ptr [ebp - 0xc], 0 }
	__asm { je L_00b5ff57 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00b5ff57: }
	__asm { test bl, bl }
	__asm { je L_00b5ff62 }
	__asm { add esi, 6 }
	__asm { cmp esi, edi }
	__asm { jne L_00b5fef3 }
	__asm { L_00b5ff62: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5ff6b: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00595370();
// FUNCTION: ROBLOXSTUDIO 0x00b60dc0
extern "C" __declspec(naked) void asm_00b60dc0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00595370();
// FUNCTION: ROBLOXSTUDIO 0x00b61030
extern "C" __declspec(naked) void asm_00b61030()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00595370();
// FUNCTION: ROBLOXSTUDIO 0x00b61170
extern "C" __declspec(naked) void asm_00b61170()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00595370();
// FUNCTION: ROBLOXSTUDIO 0x00b612b0
extern "C" __declspec(naked) void asm_00b612b0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0xc0000000 }
	__asm { mov dword ptr [ebp - 8], 0x40000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0x40000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0xc0000000 }
	__asm { mov dword ptr [ebp - 0xc], 0x40000000 }
	__asm { mov dword ptr [ebp - 8], 0xc0000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call fn_00595370 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00a33b70();
extern "C" void fn_00b60160();
extern "C" void fn_00b61bb0();
// FUNCTION: ROBLOXSTUDIO 0x00b61cf0
extern "C" __declspec(naked) void asm_00b61cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0x3e4ccccd }
	__asm { push eax }
	__asm { call fn_00b61bb0 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, esi }
	__asm { sub edx, ecx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_00b61d64 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { push esi }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b60160 }
	__asm { add esp, 0x1c }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00a33b70 }
	__asm { L_00b61d64: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { xor ecx, ecx }
	__asm { cmp ecx, eax }
	__asm { pop edi }
	__asm { sbb eax, eax }
	__asm { pop esi }
	__asm { neg eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00a09f00();
// FUNCTION: ROBLOXSTUDIO 0x00b61eb0
extern "C" __declspec(naked) void asm_00b61eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x14 }
	__asm { test edx, edx }
	__asm { je L_00b61f0c }
	__asm { movzx eax, word ptr [ecx] }
	__asm { cmp word ptr [edx + 4], ax }
	__asm { jg L_00b61f0c }
	__asm { cmp ax, word ptr [edx + 0xa] }
	__asm { jg L_00b61f0c }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { cmp word ptr [edx + 6], ax }
	__asm { jg L_00b61f0c }
	__asm { cmp ax, word ptr [edx + 0xc] }
	__asm { jg L_00b61f0c }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { cmp word ptr [edx + 8], ax }
	__asm { jg L_00b61f0c }
	__asm { cmp ax, word ptr [edx + 0xe] }
	__asm { jg L_00b61f0c }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b61f0c: }
	__asm { movzx eax, word ptr [ecx] }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { sar ax, 4 }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { shl eax, 5 }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { shl eax, 4 }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { shl esi, 5 }
	__asm { mov word ptr [ebp - 0xc], si }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edx + 0x1f] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp - 0xe] }
	__asm { add eax, 0xf }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [ebp - 0xe], eax }
	__asm { lea eax, [ebp - 0xe] }
	__asm { push eax }
	__asm { add ecx, 0x1f }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov word ptr [ebp - 0x10], si }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov word ptr [ebp - 0xa], cx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { call fn_00a09f00 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b5fd00();
extern "C" void fn_00b60220();
extern "C" void fn_00b607b0();
extern "C" void fn_00b65600();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00bb2650();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b61fd0
extern "C" __declspec(naked) void asm_00b61fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd595be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00b65600 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00b62034 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00b6208a }
	__asm { L_00b62034: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b62079 }
	__asm { push 0x30 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b607b0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b62073 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00b60220 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b6207b }
	__asm { L_00b62073: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b6207b }
	__asm { L_00b62079: }
	__asm { xor esi, esi }
	__asm { L_00b6207b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00b6208a: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b620b0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00b620b2 }
	__asm { L_00b620b0: }
	__asm { xor eax, eax }
	__asm { L_00b620b2: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b5fd00 }
	__asm { test ebx, ebx }
	__asm { je L_00b620c4 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00b620c4: }
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

extern "C" char g_012f8550[];
extern "C" void fn_00b600f0();
// FUNCTION: ROBLOXSTUDIO 0x00b62100
extern "C" __declspec(naked) void asm_00b62100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { jne L_00b62116 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b62116: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov dx, word ptr [ebx] }
	__asm { and ax, 0xf }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { and ax, 0x1f }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp - 6] }
	__asm { shl eax, 5 }
	__asm { cwde }
	__asm { add edi, eax }
	__asm { shl ecx, 0xa }
	__asm { movsx eax, cx }
	__asm { add edi, eax }
	__asm { and dx, 0x1f }
	__asm { movsx eax, dx }
	__asm { add edi, eax }
	__asm { mov al, byte ptr [edi] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00b62188 }
	__asm { shr al, 3 }
	__asm { and al, 7 }
	__asm { je L_00b62188 }
	__asm { cmp al, 5 }
	__asm { je L_00b6217a }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b600f0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00b62188 }
	__asm { L_00b6217a: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b62188: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00b65810();
// FUNCTION: ROBLOXSTUDIO 0x00b65690
extern "C" __declspec(naked) void asm_00b65690()
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
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b656db }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00b656db: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00b65722 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xed0474 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xed047c }
	__asm { mov dword ptr [esi + 8], 0xed048c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xed0494 }
	__asm { mov dword ptr [esi + 8], 0xed04a4 }
	__asm { jmp L_00b65724 }
	__asm { L_00b65722: }
	__asm { xor esi, esi }
	__asm { L_00b65724: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b65810 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00b65741 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b65741: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
// FUNCTION: ROBLOXSTUDIO 0x00b682b0
extern "C" __declspec(naked) void asm_00b682b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5971a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea edi, [ebx + 8] }
	__asm { mov dword ptr [ebx], 0xed0d04 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [edi], 0x1004fbc }
	__asm { mov dword ptr [edi + 0x10], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x18] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe18340 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0xe1827c }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00410e50();
extern "C" void fn_00b69120();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b69bd0
extern "C" __declspec(naked) void asm_00b69bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { sub eax, dword ptr [edx + 8] }
	__asm { sar eax, 4 }
	__asm { test eax, eax }
	__asm { je L_00b69c63 }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { sub eax, dword ptr [edx + 0x14] }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_00b69c63 }
	__asm { mov dword ptr [ecx + 0x14], 2 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { sub eax, dword ptr [edx + 8] }
	__asm { push dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [edx + 0x18] }
	__asm { sub ecx, dword ptr [edx + 0x14] }
	__asm { sar eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [edx + 0x14] }
	__asm { sar ecx, 2 }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { shr edx, 1 }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00b69120 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_00b69c85 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b69c63: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { L_00b69c85: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00403160();
extern "C" void fn_0061e5c0();
extern "C" void fn_00665970();
extern "C" void fn_006a9de0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b6af20
extern "C" __declspec(naked) void asm_00b6af20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59a30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_00b6af93 }
	__asm { shl esi, 4 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_00b6af82 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_00b6af6c: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_00b6af6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b6af82: }
	__asm { cmp esi, eax }
	__asm { je L_00b6af6f }
	__asm { push esi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_006a9de0 }
	__asm { add esp, 0xc }
	__asm { jmp L_00b6af6c }
	__asm { L_00b6af93: }
	__asm { jae L_00b6af6f }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061e5c0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { sar eax, 4 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403160 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar eax, 4 }
	__asm { sub esi, eax }
	__asm { add esp, 0x14 }
	__asm { shl esi, 4 }
	__asm { add dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}
