// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0130f7b8[];
extern "C" char g_0130f7bc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00bdc6d0
extern "C" __declspec(naked) void asm_00bdc6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5debe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbdc2e0 }
	__asm { push 0x130f7b0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f7bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bdc732 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f7bc], eax }
	__asm { push 0xee489c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f7b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bdc732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f7b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00934090();
extern "C" void fn_00ad8fc0();
// FUNCTION: ROBLOXSTUDIO 0x00bdc920
extern "C" __declspec(naked) void asm_00bdc920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bdc96b }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_00bdc96b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bdc95a }
	__asm { push 0x3d }
	__asm { push 0xee4990 }
	__asm { push 0xee49d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bdc96b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bdc95a: }
	__asm { movzx eax, al }
	__asm { push 0xee4a48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bdc96b: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00bdc97a }
	__asm { lea ecx, [eax + 0x128] }
	__asm { jmp L_00bdc97c }
	__asm { L_00bdc97a: }
	__asm { xor ecx, ecx }
	__asm { L_00bdc97c: }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00934090 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { add esp, 0xc }
	__asm { call fn_00ad8fc0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00934090();
extern "C" void fn_00ad8fc0();
// FUNCTION: ROBLOXSTUDIO 0x00bdc9a0
extern "C" __declspec(naked) void asm_00bdc9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bdc9eb }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_00bdc9eb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bdc9da }
	__asm { push 0x36 }
	__asm { push 0xee4990 }
	__asm { push 0xee49d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bdc9eb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bdc9da: }
	__asm { movzx eax, al }
	__asm { push 0xee49e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bdc9eb: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00bdc9fa }
	__asm { lea ecx, [eax + 0x128] }
	__asm { jmp L_00bdc9fc }
	__asm { L_00bdc9fa: }
	__asm { xor ecx, ecx }
	__asm { L_00bdc9fc: }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00934090 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { add esp, 0xc }
	__asm { call fn_00ad8fc0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f7cc[];
extern "C" char g_0130f7d0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00bdcc70
extern "C" __declspec(naked) void asm_00bdcc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e00e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f7d0] }
	__asm { test al, 1 }
	__asm { jne L_00bdccb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f7d0], eax }
	__asm { push 0xee4b58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f7cc], eax }
	__asm { L_00bdccb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f7cc[];
extern "C" char g_0130f7d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00bdd0a0
extern "C" __declspec(naked) void asm_00bdd0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e00e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbdcc70 }
	__asm { push 0x130f7c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f7d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00bdd102 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f7d0], eax }
	__asm { push 0xee4b58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f7cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bdd102: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f7cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bdd880
extern "C" __declspec(naked) void asm_00bdd880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x94 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00bdd8b6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00bdd8b6: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00bdd8c7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bdd8c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00be7c50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bdda50
extern "C" __declspec(naked) void asm_00bdda50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e068 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x18 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bddab0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee65dc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00bddab2 }
	__asm { L_00bddab0: }
	__asm { xor eax, eax }
	__asm { L_00bddab2: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be7c50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00be7c50 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bddaf0
extern "C" __declspec(naked) void asm_00bddaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e080 }
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
	__asm { je L_00bddb48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee661c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bddb4a }
	__asm { L_00bddb48: }
	__asm { xor eax, eax }
	__asm { L_00bddb4a: }
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

extern "C" void fn_00be4b60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bdde40
extern "C" __declspec(naked) void asm_00bdde40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30b20 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00be4b60 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xee4f8c }
	__asm { mov dword ptr [esi + 4], 0xee500c }
	__asm { mov dword ptr [esi + 0x18], 0xee5014 }
	__asm { mov dword ptr [esi + 0x1c], 0xee5020 }
	__asm { jb L_00bdde9e }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bdde9e: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00bddec1 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bddec1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00be1160();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bdf190
extern "C" __declspec(naked) void asm_00bdf190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e2a0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00be1160 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00bdf1d2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bdf1d2: }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bdf20b }
	__asm { test al, 1 }
	__asm { jne L_00bdf20b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdf20b }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdf20b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00bddee0();
extern "C" void fn_00be5e40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bdf590
extern "C" __declspec(naked) void asm_00bdf590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e371 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00be5e40 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00bdf5e3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bddee0 }
	__asm { L_00bdf5e3: }
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

extern "C" char g_0130f974[];
extern "C" char g_0130faac[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00be26f0
extern "C" __declspec(naked) void asm_00be26f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e9b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xee4e3c }
	__asm { mov dword ptr [esi + 4], 0xee4eb4 }
	__asm { mov dword ptr [esi + 0x18], 0xee4ebc }
	__asm { mov dword ptr [esi + 0x1c], 0xee4ec8 }
	__asm { mov eax, dword ptr [g_0130faac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00be2789 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130faac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e00 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x130f980 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00be2789: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130f980 }
	__asm { inc dword ptr [g_0130f974] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f97c[];
extern "C" char g_0130fd0c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0095cae0();
extern "C" void fn_0095e520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00be27b0
extern "C" __declspec(naked) void asm_00be27b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e9d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0095cae0 }
	__asm { mov dword ptr [esi], 0xee518c }
	__asm { mov dword ptr [esi + 4], 0xee5208 }
	__asm { mov dword ptr [esi + 0x18], 0xee5210 }
	__asm { mov dword ptr [esi + 0x1c], 0xee521c }
	__asm { mov eax, dword ptr [g_0130fd0c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00be2847 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e24 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_0095e520 }
	__asm { push eax }
	__asm { mov ecx, 0x130fbe0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00be2847: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x130fbe0 }
	__asm { inc dword ptr [g_0130f97c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be4e30
extern "C" __declspec(naked) void asm_00be4e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4aa33 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00be4e65 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00be4e65: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00be4e96 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00be4e7c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be4e7c: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be4e96: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00be50b0
extern "C" __declspec(naked) void asm_00be50b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ef98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be50fe }
	__asm { test al, 1 }
	__asm { jne L_00be50f7 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x50] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be50f7 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be50f7: }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { L_00be50fe: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00be51a0
extern "C" __declspec(naked) void asm_00be51a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ef98 }
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
	__asm { je L_00be51ed }
	__asm { test al, 1 }
	__asm { jne L_00be51e6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x50] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be51e6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be51e6: }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { L_00be51ed: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x00be5470
extern "C" __declspec(naked) void asm_00be5470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5eee8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be54bd }
	__asm { test al, 1 }
	__asm { jne L_00be54b6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be54b6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be54b6: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00be54bd: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5af0
extern "C" __declspec(naked) void asm_00be5af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14e28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be5b41 }
	__asm { test al, 1 }
	__asm { jne L_00be5b3a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be5b3a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be5b3a: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00be5b41: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00be5b5e }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5b5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00be54e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5b80
extern "C" __declspec(naked) void asm_00be5b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ef98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be5bd1 }
	__asm { test al, 1 }
	__asm { jne L_00be5bca }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x50] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be5bca }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be5bca: }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { L_00be5bd1: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00be5bee }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5bee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008c04d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5ca0
extern "C" __declspec(naked) void asm_00be5ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00be5cd8 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_008c04d0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_00be5cd8: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_00be5ced }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5ced: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00be7c50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5d00
extern "C" __declspec(naked) void asm_00be5d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be7c50 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_00be5d43 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5d43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5d60
extern "C" __declspec(naked) void asm_00be5d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00be5d9b }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { push 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_00be5d9b: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_00be5db0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5db0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5e80
extern "C" __declspec(naked) void asm_00be5e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { cmp dword ptr [esi + 0x70], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_00be5ebb }
	__asm { push dword ptr [esi + 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5ebb: }
	__asm { mov dword ptr [esi + 0x70], 0xf }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov byte ptr [esi + 0x5c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00be5ee0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be5ee0: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00be5ef0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5ef0: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bdeb50();
// FUNCTION: ROBLOXSTUDIO 0x00be6280
extern "C" __declspec(naked) void asm_00be6280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f0a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { add ecx, 0xc }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bdeb50 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be62db }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be62db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_006b98c0();
extern "C" void fn_008523c0();
// FUNCTION: ROBLOXSTUDIO 0x00be68b0
extern "C" __declspec(naked) void asm_00be68b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008523c0 }
	__asm { mov ebx, dword ptr [eax + 0xdfc] }
	__asm { lea eax, [edi + 0xc4] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00be68dd }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00be68dd: }
	__asm { cmp dword ptr [edi + 0x90], 0x10 }
	__asm { lea esi, [edi + 0x7c] }
	__asm { jb L_00be68eb }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00be68eb: }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x78] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xee5ed8 }
	__asm { push esi }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x18 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421060();
// FUNCTION: ROBLOXSTUDIO 0x00be71b0
extern "C" __declspec(naked) void asm_00be71b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00be7216 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be7216 }
	__asm { lea edx, [eax + 5] }
	__asm { test edx, edx }
	__asm { je L_00be71f8 }
	__asm { add edx, -5 }
	__asm { jmp L_00be71fa }
	__asm { L_00be71f8: }
	__asm { xor edx, edx }
	__asm { L_00be71fa: }
	__asm { cmp dword ptr [edx - 8], 0 }
	__asm { je L_00be7216 }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { je L_00be720b }
	__asm { add eax, 5 }
	__asm { jmp L_00be720d }
	__asm { L_00be720b: }
	__asm { xor eax, eax }
	__asm { L_00be720d: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00be7216: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105a8[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00be8190
extern "C" __declspec(naked) void asm_00be8190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0x1016ac0 }
	__asm { push 0x64 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e105a8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [ebp - 0x68], 0 }
	__asm { jne L_00be81ea }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00be81ea: }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { lea edx, [ecx + 1] }
	__asm { L_00be81f0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00be81f0 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130fd50[];
extern "C" char g_0130fd54[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00be9890
extern "C" __declspec(naked) void asm_00be9890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f4de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbe1680 }
	__asm { push 0x130fd38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fd54] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00be98f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd54], eax }
	__asm { push 0xee4df4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fd50], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00be98f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fd50] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130fd48[];
extern "C" char g_0130fd4c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00be9910
extern "C" __declspec(naked) void asm_00be9910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e6ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbe1630 }
	__asm { push 0x130fd30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fd4c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00be9972 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd4c], eax }
	__asm { push 0xee4dfc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fd48], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00be9972: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fd48] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130fd58[];
extern "C" char g_0130fd5c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00be9990
extern "C" __declspec(naked) void asm_00be9990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f4fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbe15e0 }
	__asm { push 0x130fd40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fd5c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00be99f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd5c], eax }
	__asm { push 0xee4df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fd58], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00be99f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fd58] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00bea670
extern "C" __declspec(naked) void asm_00bea670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00bea686 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea686: }
	__asm { cmp eax, 1 }
	__asm { jne L_00bea69d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea69d: }
	__asm { cmp eax, 2 }
	__asm { jne L_00bea6ad }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea6ad: }
	__asm { cmp eax, 3 }
	__asm { jne L_00bea6d0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1292fb8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bea6d0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1292fb8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130fd18[];
extern "C" char g_0130fd1c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bee340
extern "C" __declspec(naked) void asm_00bee340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5fb2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fd1c] }
	__asm { test al, 1 }
	__asm { jne L_00bee3b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd1c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bee39e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130fd18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bee39e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130fd18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bee3b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fd18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00beeaa0
extern "C" __declspec(naked) void asm_00beeaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { lea esi, [ebx + 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { cmp edi, esi }
	__asm { je L_00beeaeb }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00beead1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00beead1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00beeaeb }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00beeaeb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { cmp ecx, eax }
	__asm { je L_00beeb02 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00beeb02: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038064[];
extern "C" void fn_0099cca0();
extern "C" void fn_0099d1b0();
extern "C" void fn_00b49ed0();
// FUNCTION: ROBLOXSTUDIO 0x00befda0
extern "C" __declspec(naked) void asm_00befda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0099cca0 }
	__asm { test eax, eax }
	__asm { je L_00befdd0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00befdb6: }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { cmp esi, ecx }
	__asm { jne L_00befdc0 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { L_00befdc0: }
	__asm { cmp ecx, edi }
	__asm { je L_00befdd8 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099d1b0 }
	__asm { test eax, eax }
	__asm { jne L_00befdb6 }
	__asm { L_00befdd0: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00befdd8: }
	__asm { fld dword ptr [g_01038064] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b49ed0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006ebcc0();
// FUNCTION: ROBLOXSTUDIO 0x00befdf0
extern "C" __declspec(naked) void asm_00befdf0()
{
	__asm { L_00befdf0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_00befe16 }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { test ecx, ecx }
	__asm { je L_00befe0e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00befe0e: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00befe16: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jb L_00befe3b }
	__asm { lea eax, [eax + ecx*4] }
	__asm { cmp edi, eax }
	__asm { jae L_00befe3b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call L_00befdf0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00befe3b: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006ebcc0 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + edx*4 - 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130fe0c[];
extern "C" void fn_00bf8230();
extern "C" void fn_00bf8660();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bf82e0
extern "C" __declspec(naked) void asm_00bf82e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60123 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 4 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bf8328 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00bf8660 }
	__asm { jmp L_00bf832a }
	__asm { L_00bf8328: }
	__asm { xor esi, esi }
	__asm { L_00bf832a: }
	__asm { mov edi, dword ptr [g_0130fe0c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [g_0130fe0c], esi }
	__asm { test edi, edi }
	__asm { je L_00bf8360 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00bf8357 }
	__asm { mov ecx, esi }
	__asm { call fn_00bf8230 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8357: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8360: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092ac70();
extern "C" void fn_00bf8c50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bf8d80
extern "C" __declspec(naked) void asm_00bf8d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00bf8dee }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bf8c50 }
	__asm { push dword ptr [esi + 0xb4] }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 0x94] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0092ac70 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00bf8dee }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8dee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bf8e00
extern "C" __declspec(naked) void asm_00bf8e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60230 }
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
	__asm { je L_00bf8e58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee84bc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bf8e5a }
	__asm { L_00bf8e58: }
	__asm { xor eax, eax }
	__asm { L_00bf8e5a: }
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

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bf9270
extern "C" __declspec(naked) void asm_00bf9270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60240 }
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
	__asm { je L_00bf92c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee84d4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bf92ca }
	__asm { L_00bf92c8: }
	__asm { xor eax, eax }
	__asm { L_00bf92ca: }
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
	__asm { je L_00bf92ee }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00bf92ee: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bf93a0
extern "C" __declspec(naked) void asm_00bf93a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60250 }
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
	__asm { je L_00bf93f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee84ec }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00bf93fa }
	__asm { L_00bf93f8: }
	__asm { xor eax, eax }
	__asm { L_00bf93fa: }
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
	__asm { je L_00bf941e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00bf941e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00b1c170();
extern "C" void fn_00bf8e00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bfac30
extern "C" __declspec(naked) void asm_00bfac30()
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
	__asm { push 0x328 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bfac7e }
	__asm { mov ecx, eax }
	__asm { call fn_00b1c170 }
	__asm { mov esi, eax }
	__asm { jmp L_00bfac80 }
	__asm { L_00bfac7e: }
	__asm { xor esi, esi }
	__asm { L_00bfac80: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00bf8e00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bfacb1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00bfacb1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00bfacb1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00bfacd0
extern "C" __declspec(naked) void asm_00bfacd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd603a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { test eax, eax }
	__asm { je L_00bfad22 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00bfad1d }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10344] }
	__asm { jmp L_00bfad22 }
	__asm { L_00bfad1d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { L_00bfad22: }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bfad4f }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00bfad4f }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10344] }
	__asm { L_00bfad4f: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00bfb230
extern "C" __declspec(naked) void asm_00bfb230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00bfb279 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00bfb275 }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bfb275: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00bfb279: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130fe2c[];
extern "C" char g_0130fe30[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c01910
extern "C" __declspec(naked) void asm_00c01910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60b4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fe30] }
	__asm { test al, 1 }
	__asm { jne L_00c01983 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fe30], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c0196e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130fe2c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c0196e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130fe2c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c01983: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fe2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c02ad0
extern "C" __declspec(naked) void asm_00c02ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xee8634 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c02b20 }
	__asm { cmp dword ptr [esi + 4], -1 }
	__asm { je L_00c02b20 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c02b0f }
	__asm { push 0x16 }
	__asm { push 0xee8568 }
	__asm { push 0xee85b0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c02b20 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c02b0f: }
	__asm { movzx eax, al }
	__asm { push 0xee85c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c02b20: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c02b2f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c02b2f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b6c690();
// FUNCTION: ROBLOXSTUDIO 0x00c02dc0
extern "C" __declspec(naked) void asm_00c02dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, esi }
	__asm { je L_00c02e06 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { add esi, 8 }
	__asm { L_00c02dd6: }
	__asm { fld dword ptr [esi - 0x24] }
	__asm { sub esi, 0x1c }
	__asm { sub edi, 0x1c }
	__asm { lea ecx, [esi + 4] }
	__asm { fstp dword ptr [edi] }
	__asm { push ecx }
	__asm { fld dword ptr [esi - 4] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { call fn_00b6c690 }
	__asm { lea ecx, [esi - 8] }
	__asm { cmp ecx, ebx }
	__asm { jne L_00c02dd6 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c02e06: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b6c690();
// FUNCTION: ROBLOXSTUDIO 0x00c02e60
extern "C" __declspec(naked) void asm_00c02e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_00c02ea6 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { add esi, 8 }
	__asm { L_00c02e76: }
	__asm { fld dword ptr [esi - 8] }
	__asm { lea eax, [esi + 4] }
	__asm { fstp dword ptr [edi] }
	__asm { push eax }
	__asm { fld dword ptr [esi - 4] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { call fn_00b6c690 }
	__asm { add esi, 0x1c }
	__asm { add edi, 0x1c }
	__asm { lea ecx, [esi - 8] }
	__asm { cmp ecx, ebx }
	__asm { jne L_00c02e76 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c02ea6: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c02f00
extern "C" __declspec(naked) void asm_00c02f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_00c02f4e }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00c02f12: }
	__asm { test esi, esi }
	__asm { je L_00c02f3e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], edx }
	__asm { L_00c02f3e: }
	__asm { add ecx, 0x1c }
	__asm { add esi, 0x1c }
	__asm { cmp ecx, edi }
	__asm { jne L_00c02f12 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c02f4e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c360();
// FUNCTION: ROBLOXSTUDIO 0x00c03a40
extern "C" __declspec(naked) void asm_00c03a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c03a8a }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_00c03a8a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00c03a79 }
	__asm { push 0xc }
	__asm { push 0xee8640 }
	__asm { push 0xecebe0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c03a8a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c03a79: }
	__asm { movzx eax, al }
	__asm { push 0xee8680 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c03a8a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0xc] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c620();
// FUNCTION: ROBLOXSTUDIO 0x00c03aa0
extern "C" __declspec(naked) void asm_00c03aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c03aea }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_00c03aea }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00c03ad9 }
	__asm { push 0x13 }
	__asm { push 0xee8640 }
	__asm { push 0xecebe0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c03aea }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c03ad9: }
	__asm { movzx eax, al }
	__asm { push 0xee86e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c03aea: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c03b90();
// FUNCTION: ROBLOXSTUDIO 0x00c03b10
extern "C" __declspec(naked) void asm_00c03b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00c03b81 }
	__asm { mov edi, edi }
	__asm { L_00c03b20: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c03b6a }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00c03b6a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c03b59 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c03b6a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c03b59: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c03b6a: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call fn_00c03b90 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00c03b20 }
	__asm { L_00c03b81: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ba3bf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c03c20
extern "C" __declspec(naked) void asm_00c03c20()
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
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c03c65 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00ba3bf0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c03c67 }
	__asm { L_00c03c65: }
	__asm { xor ecx, ecx }
	__asm { L_00c03c67: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0xee8750 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00c04c80
extern "C" __declspec(naked) void asm_00c04c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60ca3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xee8ad4 }
	__asm { mov dword ptr [esi + 4], 0xee8b30 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8b64 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c04cef }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee8b68 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c04cef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00c04df0
extern "C" __declspec(naked) void asm_00c04df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x40], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xee8b9c }
	__asm { mov eax, 0xee8bb0 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00c04e3a }
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
	__asm { L_00c04e3a: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00c04e40: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c04e40 }
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

extern "C" char g_0130f0ec[];
extern "C" char g_0130f0f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c04e60
extern "C" __declspec(naked) void asm_00c04e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5be8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb940c0 }
	__asm { push 0x130f03c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c04ec2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0f0], eax }
	__asm { push 0xee8ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c04ec2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc98e[];
extern "C" void fn_004038a0();
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00c051c0
extern "C" __declspec(naked) void asm_00c051c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60cc3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xee8bcc }
	__asm { mov dword ptr [esi + 4], 0xee8c28 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8c5c }
	__asm { push 0xb }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe57074 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c05241 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee8c60 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c05241: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00933390();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c05260
extern "C" __declspec(naked) void asm_00c05260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60cc3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee8bcc }
	__asm { mov dword ptr [esi + 4], 0xee8c28 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8c5c }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c052b5 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee8c78 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c052b5: }
	__asm { cmp dword ptr [esi + 0x54], 0x10 }
	__asm { jb L_00c052c6 }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c052c6: }
	__asm { mov dword ptr [esi + 0x54], 0xf }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933390 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f0f4[];
extern "C" char g_0130f0f8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c05330
extern "C" __declspec(naked) void asm_00c05330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60cde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb94070 }
	__asm { push 0x130f044 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c05392 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0f8], eax }
	__asm { push 0xee8bc0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0f4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c05392: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0f4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00891b30();
extern "C" void fn_009341c0();
// FUNCTION: ROBLOXSTUDIO 0x00c055c0
extern "C" __declspec(naked) void asm_00c055c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0x13000f4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_009341c0 }
	__asm { test eax, eax }
	__asm { jne L_00c055eb }
	__asm { push 0xe }
	__asm { push 0xed7080 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c055eb: }
	__asm { mov ecx, eax }
	__asm { call fn_00891b30 }
	__asm { cmp byte ptr [eax + 0x48], 0 }
	__asm { je L_00c0560c }
	__asm { push 0xb }
	__asm { push 0xe57074 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0560c: }
	__asm { push 0xa }
	__asm { push 0xe57154 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c05620
extern "C" __declspec(naked) void asm_00c05620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60d10 }
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
	__asm { je L_00c05678 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee8d80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c0567a }
	__asm { L_00c05678: }
	__asm { xor eax, eax }
	__asm { L_00c0567a: }
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

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00c057d0
extern "C" __declspec(naked) void asm_00c057d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60ca3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xee8c9c }
	__asm { mov dword ptr [esi + 4], 0xee8cf8 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8d2c }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c0583f }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee8d30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c0583f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f0fc[];
extern "C" char g_0130f100[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c059a0
extern "C" __declspec(naked) void asm_00c059a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60d7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb93ed0 }
	__asm { push 0x130f04c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c05a02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f100], eax }
	__asm { push 0xee8c90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0fc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c05a02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0fc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00c05d80
extern "C" __declspec(naked) void asm_00c05d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60cc3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xee8d9c }
	__asm { mov dword ptr [esi + 4], 0xee8df8 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8e2c }
	__asm { mov dword ptr [esi + 0x54], 0xf }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c05df3 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee8e30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c05df3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00933390();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c05e10
extern "C" __declspec(naked) void asm_00c05e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60cc3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee8d9c }
	__asm { mov dword ptr [esi + 4], 0xee8df8 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8e2c }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00c05e65 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee8e48 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c05e65: }
	__asm { cmp dword ptr [esi + 0x54], 0x10 }
	__asm { jb L_00c05e76 }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c05e76: }
	__asm { mov dword ptr [esi + 0x54], 0xf }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933390 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f10c[];
extern "C" char g_0130f110[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c05f20
extern "C" __declspec(naked) void asm_00c05f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bd0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb93fd0 }
	__asm { push 0x130f05c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f110] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c05f82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f110], eax }
	__asm { push 0xee8d94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f10c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c05f82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f10c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00790e70();
extern "C" void fn_0099a4f0();
// FUNCTION: ROBLOXSTUDIO 0x00c06c10
extern "C" __declspec(naked) void asm_00c06c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 0x64], 0 }
	__asm { je L_00c06c54 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { call fn_0099a4f0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { call dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00c06c48 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00c06c48: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { L_00c06c54: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007c37d0();
extern "C" void fn_00c07810();
// FUNCTION: ROBLOXSTUDIO 0x00c07f90
extern "C" __declspec(naked) void asm_00c07f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00c07fdd }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { je L_00c07fdd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c07fcc }
	__asm { push 0x109 }
	__asm { push 0xee91b0 }
	__asm { push 0xee90e8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c07fdd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c07fcc: }
	__asm { movzx eax, al }
	__asm { push 0xee91f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c07fdd: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c07810 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { test eax, eax }
	__asm { je L_00c07ff6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { jmp L_00c07ff8 }
	__asm { L_00c07ff6: }
	__asm { xor eax, eax }
	__asm { L_00c07ff8: }
	__asm { push dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { setne al }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x8c], al }
	__asm { call fn_007c37d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130fe88[];
extern "C" char g_0130fe8c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c0eb90
extern "C" __declspec(naked) void asm_00c0eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd611de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fe8c] }
	__asm { test al, 1 }
	__asm { jne L_00c0ebd2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fe8c], eax }
	__asm { push 0xee9658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fe88], eax }
	__asm { L_00c0ebd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00c0ed70
extern "C" __declspec(naked) void asm_00c0ed70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ecx + 0x58], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xee4948 }
	__asm { mov eax, 0xe57154 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00c0edba }
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
	__asm { L_00c0edba: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00c0edc0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c0edc0 }
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

extern "C" char g_0130fe88[];
extern "C" char g_0130fe8c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c0ee60
extern "C" __declspec(naked) void asm_00c0ee60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd611de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc0eb90 }
	__asm { push 0x130fe80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fe8c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c0eec2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fe8c], eax }
	__asm { push 0xee9658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fe88], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c0eec2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fe88] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c1c3a0();
// FUNCTION: ROBLOXSTUDIO 0x00c0ef20
extern "C" __declspec(naked) void asm_00c0ef20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { cmp eax, 8 }
	__asm { je L_00c0ef59 }
	__asm { cmp eax, 0x1b }
	__asm { je L_00c0ef59 }
	__asm { cmp eax, 0x7f }
	__asm { je L_00c0ef59 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00c1c3a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c0ef59: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x68] }
	__asm { add ecx, 0x68 }
	__asm { push esi }
	__asm { call dword ptr [edx] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130fe9c[];
extern "C" char g_0130fea0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c0f1d0
extern "C" __declspec(naked) void asm_00c0f1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6123e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fea0] }
	__asm { test al, 1 }
	__asm { jne L_00c0f212 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fea0], eax }
	__asm { push 0xee9970 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fe9c], eax }
	__asm { L_00c0f212: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00c0f3a0
extern "C" __declspec(naked) void asm_00c0f3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ecx + 0x4c], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xee4948 }
	__asm { mov eax, 0xe57154 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00c0f3ea }
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
	__asm { L_00c0f3ea: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00c0f3f0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c0f3f0 }
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

extern "C" char g_013000f0[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00c0f410
extern "C" __declspec(naked) void asm_00c0f410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_013000f0], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, 0xee4c00 }
	__asm { mov eax, 0xee9798 }
	__asm { cmove edx, eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00c0f45d }
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
	__asm { L_00c0f45d: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00c0f463: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c0f463 }
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

extern "C" char g_0130fe9c[];
extern "C" char g_0130fea0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c0f480
extern "C" __declspec(naked) void asm_00c0f480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6123e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc0f1d0 }
	__asm { push 0x130fe94 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fea0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c0f4e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fea0], eax }
	__asm { push 0xee9970 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fe9c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c0f4e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130fe9c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c1cd30();
// FUNCTION: ROBLOXSTUDIO 0x00c0f540
extern "C" __declspec(naked) void asm_00c0f540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { cmp eax, 8 }
	__asm { je L_00c0f579 }
	__asm { cmp eax, 0x1b }
	__asm { je L_00c0f579 }
	__asm { cmp eax, 0x7f }
	__asm { je L_00c0f579 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00c1cd30 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c0f579: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x5c] }
	__asm { add ecx, 0x5c }
	__asm { push esi }
	__asm { call dword ptr [edx] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c0f880
extern "C" __declspec(naked) void asm_00c0f880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6127b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00c0f919 }
	__asm { cmp dword ptr [ecx + 0x64], 0 }
	__asm { je L_00c0f919 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c0f908 }
	__asm { push 0x65 }
	__asm { push 0xee9b40 }
	__asm { push 0xee9f60 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0f919 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c0f908: }
	__asm { movzx eax, al }
	__asm { push 0xee9f88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0f919: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c102b0();
// FUNCTION: ROBLOXSTUDIO 0x00c10330
extern "C" __declspec(naked) void asm_00c10330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c10392 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { je L_00c1035f }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { jne L_00c10392 }
	__asm { L_00c1035f: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1037d }
	__asm { push 0x28 }
	__asm { push 0xeea314 }
	__asm { push 0xeea4d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c10392 }
	__asm { L_00c1037d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeea4f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c10392: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c102b0();
// FUNCTION: ROBLOXSTUDIO 0x00c10d20
extern "C" __declspec(naked) void asm_00c10d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c10d82 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { je L_00c10d4f }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { jne L_00c10d82 }
	__asm { L_00c10d4f: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c10d6d }
	__asm { push 0x2f }
	__asm { push 0xeea314 }
	__asm { push 0xeea4d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c10d82 }
	__asm { L_00c10d6d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeea558 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c10d82: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008bbcc0();
extern "C" void fn_00c102b0();
// FUNCTION: ROBLOXSTUDIO 0x00c10ff0
extern "C" __declspec(naked) void asm_00c10ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { je L_00c11043 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { jne L_00c11043 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1102e }
	__asm { push 0x53 }
	__asm { push 0xeea314 }
	__asm { push 0xeea61c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11043 }
	__asm { L_00c1102e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeea638 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11043: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jne L_00c1104e }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { L_00c1104e: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00c102b0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test al, al }
	__asm { je L_00c11069 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_008bbcc0 }
	__asm { L_00c11069: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c1d2a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c11070
extern "C" __declspec(naked) void asm_00c11070()
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
	__asm { je L_00c110b5 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00c1d2a0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c110b7 }
	__asm { L_00c110b5: }
	__asm { xor ecx, ecx }
	__asm { L_00c110b7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0xeead98 }
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
extern "C" void fn_00b5b160();
// FUNCTION: ROBLOXSTUDIO 0x00c11290
extern "C" __declspec(naked) void asm_00c11290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6136b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeeadb4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00c11300 }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_00c11300 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c112ef }
	__asm { push 0x2d }
	__asm { push 0xeeadc8 }
	__asm { push 0xeeae08 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11300 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c112ef: }
	__asm { movzx eax, al }
	__asm { push 0xeeae18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11300: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5cd00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c11cf0
extern "C" __declspec(naked) void asm_00c11cf0()
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
	__asm { push 0x70 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c11d35 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b5cd00 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c11d37 }
	__asm { L_00c11d35: }
	__asm { xor ecx, ecx }
	__asm { L_00c11d37: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0xeeb3e0 }
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
extern "C" void fn_00b5b980();
extern "C" void fn_00ba07c0();
// FUNCTION: ROBLOXSTUDIO 0x00c11fa0
extern "C" __declspec(naked) void asm_00c11fa0()
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
	__asm { je L_00c11ff5 }
	__asm { test esi, esi }
	__asm { jne L_00c11ff5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c11fe4 }
	__asm { push 0xd0 }
	__asm { push 0xe68b68 }
	__asm { push 0x100a87c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c11ff5 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00c11fe4: }
	__asm { movzx eax, dl }
	__asm { push 0xe68bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c11ff5: }
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

extern "C" void fn_0099c830();
extern "C" void fn_0099cef0();
extern "C" void fn_00ba09f0();
extern "C" void fn_00c12330();
// FUNCTION: ROBLOXSTUDIO 0x00c120f0
extern "C" __declspec(naked) void asm_00c120f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c12119 }
	__asm { cmp esi, dword ptr [ecx + 0x50] }
	__asm { je L_00c12119 }
	__asm { mov ecx, dword ptr [ecx + 0xb4] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { call fn_00ba09f0 }
	__asm { L_00c12119: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0x9c], edi }
	__asm { jle L_00c1213c }
	__asm { L_00c12123: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0099c830 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c12330 }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 0x9c] }
	__asm { jl L_00c12123 }
	__asm { L_00c1213c: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0xc0], edi }
	__asm { jle L_00c1215f }
	__asm { L_00c12146: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0099cef0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c12330 }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 0xc0] }
	__asm { jl L_00c12146 }
	__asm { L_00c1215f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5cfb0();
extern "C" void fn_00ba48c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c12600
extern "C" __declspec(naked) void asm_00c12600()
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
	__asm { push 0x110 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c1264d }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00ba48c0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c1264f }
	__asm { L_00c1264d: }
	__asm { xor ecx, ecx }
	__asm { L_00c1264f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi], 0xeeb864 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130ff08[];
extern "C" char g_0130ff0c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14880
extern "C" __declspec(naked) void asm_00c14880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6143e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130ff0c] }
	__asm { test al, 1 }
	__asm { jne L_00c148c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff0c], eax }
	__asm { push 0xeec648 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ff08], eax }
	__asm { L_00c148c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ff08[];
extern "C" char g_0130ff0c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c149c0
extern "C" __declspec(naked) void asm_00c149c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6143e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc14880 }
	__asm { push 0x130ff00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130ff0c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14a22 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff0c], eax }
	__asm { push 0xeec648 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ff08], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c14a22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130ff08] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f458[];
extern "C" char g_0130f45c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14a40
extern "C" __declspec(naked) void asm_00c14a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6145e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4c80 }
	__asm { push 0x130f3d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f45c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14aa2 }
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
	__asm { L_00c14aa2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f458] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f450[];
extern "C" char g_0130f454[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14ac0
extern "C" __declspec(naked) void asm_00c14ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6147e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4dc0 }
	__asm { push 0x130f3d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f454] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14b22 }
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
	__asm { L_00c14b22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f450] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f468[];
extern "C" char g_0130f46c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14ca0
extern "C" __declspec(naked) void asm_00c14ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4e10 }
	__asm { push 0x130f3e8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f46c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14d02 }
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
	__asm { L_00c14d02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f468] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f470[];
extern "C" char g_0130f474[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14d60
extern "C" __declspec(naked) void asm_00c14d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4be0 }
	__asm { push 0x130f3f0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f474] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14dc2 }
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
	__asm { L_00c14dc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f470] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010381b0[];
extern "C" char g_0130f3a8[];
extern "C" void fn_0099e500();
extern "C" void fn_009d8ed0();
extern "C" void fn_00bb5b90();
// FUNCTION: ROBLOXSTUDIO 0x00c14de0
extern "C" __declspec(naked) void asm_00c14de0()
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
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bb5b90 }
	__asm { mov dword ptr [esi], 0xeec80c }
	__asm { mov dword ptr [esi + 4], 0xeec848 }
	__asm { cmp byte ptr [g_0130f3a8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c14e5b }
	__asm { test edi, edi }
	__asm { je L_00c14e5b }
	__asm { mov ecx, edi }
	__asm { call fn_009d8ed0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00c14e5b }
	__asm { mov edx, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xe4] }
	__asm { fld dword ptr [g_010381b0] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099e500 }
	__asm { L_00c14e5b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130f478[];
extern "C" char g_0130f47c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14f00
extern "C" __declspec(naked) void asm_00c14f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4aa0 }
	__asm { push 0x130f3f8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f47c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14f62 }
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
	__asm { L_00c14f62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f478] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f480[];
extern "C" char g_0130f484[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c14f80
extern "C" __declspec(naked) void asm_00c14f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4af0 }
	__asm { push 0x130f400 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f484] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c14fe2 }
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
	__asm { L_00c14fe2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f480] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f488[];
extern "C" char g_0130f48c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c15000
extern "C" __declspec(naked) void asm_00c15000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4cd0 }
	__asm { push 0x130f408 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f48c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c15062 }
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
	__asm { L_00c15062: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f488] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f490[];
extern "C" char g_0130f494[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c15130
extern "C" __declspec(naked) void asm_00c15130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d28e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4b40 }
	__asm { push 0x130f410 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f494] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c15192 }
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
	__asm { L_00c15192: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f490] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb5f40();
extern "C" void fn_00bb90d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c151f0
extern "C" __declspec(naked) void asm_00c151f0()
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeec93c }
	__asm { mov dword ptr [esi + 4], 0xeec978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [eax + 0x20c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bb5f40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c1524c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c1524c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f498[];
extern "C" char g_0130f49c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c15260
extern "C" __declspec(naked) void asm_00c15260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4d70 }
	__asm { push 0x130f418 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f49c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c152c2 }
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
	__asm { L_00c152c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f498] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f4a0[];
extern "C" char g_0130f4a4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c153c0
extern "C" __declspec(naked) void asm_00c153c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d24e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4eb0 }
	__asm { push 0x130f420 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c15422 }
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
	__asm { L_00c15422: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f4a8[];
extern "C" char g_0130f4ac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c15730
extern "C" __declspec(naked) void asm_00c15730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4b90 }
	__asm { push 0x130f428 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c15792 }
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
	__asm { L_00c15792: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f4b0[];
extern "C" char g_0130f4b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c16300
extern "C" __declspec(naked) void asm_00c16300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d20e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4c30 }
	__asm { push 0x130f430 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c16362 }
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
	__asm { L_00c16362: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_009ddb10();
extern "C" void fn_00bb5f40();
extern "C" void fn_00bb90d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c167d0
extern "C" __declspec(naked) void asm_00c167d0()
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeecd90 }
	__asm { mov dword ptr [esi + 4], 0xeecdcc }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, eax }
	__asm { call fn_009ddb10 }
	__asm { mov ecx, esi }
	__asm { call fn_00bb90d0 }
	__asm { lea ecx, [eax + 0x38c] }
	__asm { call fn_0043f040 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bb5f40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c16840 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c16840: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009ddb40();
extern "C" void fn_00bb5f40();
extern "C" void fn_00bb90d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c16860
extern "C" __declspec(naked) void asm_00c16860()
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
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeecd48 }
	__asm { mov dword ptr [esi + 4], 0xeecd84 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, eax }
	__asm { call fn_009ddb40 }
	__asm { mov ecx, esi }
	__asm { call fn_00bb90d0 }
	__asm { lea ecx, [eax + 0x388] }
	__asm { call fn_0043f040 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bb5f40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c168d0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c168d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f4c0[];
extern "C" char g_0130f4c4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c168f0
extern "C" __declspec(naked) void asm_00c168f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d22e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4d20 }
	__asm { push 0x130f440 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4c4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c16952 }
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
	__asm { L_00c16952: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4c0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f4b8[];
extern "C" char g_0130f4bc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c16970
extern "C" __declspec(naked) void asm_00c16970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6159e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4e60 }
	__asm { push 0x130f438 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c169d2 }
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
	__asm { L_00c169d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f4c8[];
extern "C" char g_0130f4cc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c16b50
extern "C" __declspec(naked) void asm_00c16b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xbb4f00 }
	__asm { push 0x130f448 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f4cc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c16bb2 }
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
	__asm { L_00c16bb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f4c8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
extern "C" void fn_00c17ba0();
// FUNCTION: ROBLOXSTUDIO 0x00c17b40
extern "C" __declspec(naked) void asm_00c17b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi], 0xc }
	__asm { je L_00c17b90 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { inc ebx }
	__asm { cmp ebx, eax }
	__asm { jle L_00c17b7c }
	__asm { cmp ebx, 0xfa }
	__asm { jl L_00c17b77 }
	__asm { push 0xeecf1c }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00c17b77: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + 0x4b], bl }
	__asm { L_00c17b7c: }
	__asm { inc dword ptr [esi + 0x24] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { dec eax }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c17ba0 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00c17b90: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c17d20();
extern "C" void fn_00c181b0();
extern "C" void fn_00c183e0();
// FUNCTION: ROBLOXSTUDIO 0x00c18390
extern "C" __declspec(naked) void asm_00c18390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c181b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi], 0xc }
	__asm { jne L_00c183cf }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp ecx, dword ptr [esi + 0x14] }
	__asm { je L_00c183d9 }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c183cf }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c17d20 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c183cf: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c183e0 }
	__asm { add esp, 8 }
	__asm { L_00c183d9: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc88e0();
extern "C" void fn_00c17d20();
extern "C" void fn_00c181b0();
// FUNCTION: ROBLOXSTUDIO 0x00c183e0
extern "C" __declspec(naked) void asm_00c183e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c181b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [edi], 0xc }
	__asm { jne L_00c18411 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, 0x100 }
	__asm { jne L_00c18411 }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c18411 }
	__asm { dec dword ptr [esi + 0x24] }
	__asm { L_00c18411: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { inc ebx }
	__asm { cmp ebx, eax }
	__asm { jle L_00c1843c }
	__asm { cmp ebx, 0xfa }
	__asm { jl L_00c18437 }
	__asm { push 0xeecf1c }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00c18437: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + 0x4b], bl }
	__asm { L_00c1843c: }
	__asm { inc dword ptr [esi + 0x24] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { dec eax }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c17d20 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c17d20();
extern "C" void fn_00c181b0();
extern "C" void fn_00c183e0();
// FUNCTION: ROBLOXSTUDIO 0x00c18460
extern "C" __declspec(naked) void asm_00c18460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { je L_00c184b2 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c181b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi], 0xc }
	__asm { jne L_00c184a4 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { je L_00c184a0 }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp ecx, eax }
	__asm { jl L_00c184a4 }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c17d20 }
	__asm { add esp, 0xc }
	__asm { L_00c184a0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c184a4: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c183e0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c184b2: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c181b0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c18fa0
extern "C" __declspec(naked) void asm_00c18fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp ecx, -1 }
	__asm { je L_00c18ff1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { L_00c18fb5: }
	__asm { lea edx, [edi + ecx*4] }
	__asm { cmp ecx, 1 }
	__asm { jl L_00c18fcf }
	__asm { mov eax, dword ptr [edx - 4] }
	__asm { lea esi, [edx - 4] }
	__asm { and eax, 0x3f }
	__asm { test byte ptr [eax + 0xee2218], 0x80 }
	__asm { jne L_00c18fd1 }
	__asm { L_00c18fcf: }
	__asm { mov esi, edx }
	__asm { L_00c18fd1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { and eax, 0x3f }
	__asm { cmp al, 0x1b }
	__asm { jne L_00c18ff7 }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 0xe }
	__asm { sub eax, 0x1ffff }
	__asm { cmp eax, -1 }
	__asm { je L_00c18ff1 }
	__asm { inc ecx }
	__asm { add ecx, eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00c18fb5 }
	__asm { L_00c18ff1: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c18ff7: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b49af0();
extern "C" void fn_00c192f0();
// FUNCTION: ROBLOXSTUDIO 0x00c191b0
extern "C" __declspec(naked) void asm_00c191b0()
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
	__asm { mov dword ptr [esi], 0xee24bc }
	__asm { lea eax, [esi + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c192f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c1922c }
	__asm { cmp dword ptr [esi + 0xcc], 0 }
	__asm { je L_00c1922c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1921b }
	__asm { push 0xf }
	__asm { push 0xeecf58 }
	__asm { push 0xee37d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1922c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c1921b: }
	__asm { movzx eax, al }
	__asm { push 0xeecf98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1922c: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c194e0
extern "C" __declspec(naked) void asm_00c194e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x2c] }
	__asm { test al, al }
	__asm { je L_00c1953a }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0xa0] }
	__asm { jb L_00c19531 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c19520 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c19531 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c19520: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c19531: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c1953a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c19b40
extern "C" __declspec(naked) void asm_00c19b40()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0xcc], esi }
	__asm { jbe L_00c19ba8 }
	__asm { mov edi, edi }
	__asm { L_00c19b50: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c19b96 }
	__asm { cmp esi, dword ptr [edi + 0xcc] }
	__asm { jb L_00c19b96 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c19b85 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c19b96 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c19b85: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c19b96: }
	__asm { mov ecx, dword ptr [edi + esi*4 + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0xcc] }
	__asm { jb L_00c19b50 }
	__asm { L_00c19ba8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b49af0();
extern "C" void fn_00c1af70();
// FUNCTION: ROBLOXSTUDIO 0x00c1acb0
extern "C" __declspec(naked) void asm_00c1acb0()
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
	__asm { mov dword ptr [esi], 0xee2d78 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c1af70 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c1ad2c }
	__asm { cmp dword ptr [esi + 0xd8], 0 }
	__asm { je L_00c1ad2c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1ad1b }
	__asm { push 0x13 }
	__asm { push 0xeed478 }
	__asm { push 0xee37d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1ad2c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c1ad1b: }
	__asm { movzx eax, al }
	__asm { push 0xeed4b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1ad2c: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c1b0b0
extern "C" __declspec(naked) void asm_00c1b0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x38] }
	__asm { test al, al }
	__asm { je L_00c1b10a }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0xa0] }
	__asm { jb L_00c1b101 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1b0f0 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1b101 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c1b0f0: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1b101: }
	__asm { mov eax, dword ptr [esi + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c1b10a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c1b580
extern "C" __declspec(naked) void asm_00c1b580()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0xd8], esi }
	__asm { jbe L_00c1b5e8 }
	__asm { mov edi, edi }
	__asm { L_00c1b590: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c1b5d6 }
	__asm { cmp esi, dword ptr [edi + 0xd8] }
	__asm { jb L_00c1b5d6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c1b5c5 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1b5d6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c1b5c5: }
	__asm { movzx eax, al }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1b5d6: }
	__asm { mov ecx, dword ptr [edi + esi*4 + 0x38] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0xd8] }
	__asm { jb L_00c1b590 }
	__asm { L_00c1b5e8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_0130ff80[];
extern "C" char g_0130ff84[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c1bf60
extern "C" __declspec(naked) void asm_00c1bf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd616be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130ff84] }
	__asm { test al, 1 }
	__asm { jne L_00c1bfa2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff84], eax }
	__asm { push 0xeed888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ff80], eax }
	__asm { L_00c1bfa2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ff80[];
extern "C" char g_0130ff84[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c1c320
extern "C" __declspec(naked) void asm_00c1c320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd616be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc1bf60 }
	__asm { push 0x130ff78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130ff84] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c1c382 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff84], eax }
	__asm { push 0xeed888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ff80], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c1c382: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130ff80] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ff94[];
extern "C" char g_0130ff98[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c1ca30
extern "C" __declspec(naked) void asm_00c1ca30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6176e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130ff98] }
	__asm { test al, 1 }
	__asm { jne L_00c1ca72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff98], eax }
	__asm { push 0xeedb74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ff94], eax }
	__asm { L_00c1ca72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ff94[];
extern "C" char g_0130ff98[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c1ccb0
extern "C" __declspec(naked) void asm_00c1ccb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6176e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc1ca30 }
	__asm { push 0x130ff8c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130ff98] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c1cd12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff98], eax }
	__asm { push 0xeedb74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ff94], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c1cd12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130ff94] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ba2430();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c1d2a0
extern "C" __declspec(naked) void asm_00c1d2a0()
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
	__asm { push 0x3c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c1d2e5 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00ba2430 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c1d2e7 }
	__asm { L_00c1d2e5: }
	__asm { xor ecx, ecx }
	__asm { L_00c1d2e7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi], 0xeedec4 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130ffa8[];
extern "C" char g_0130ffac[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c1dd80
extern "C" __declspec(naked) void asm_00c1dd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd617ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130ffac] }
	__asm { test al, 1 }
	__asm { jne L_00c1ddc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ffac], eax }
	__asm { push 0xeee284 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ffa8], eax }
	__asm { L_00c1ddc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c1f500
extern "C" __declspec(naked) void asm_00c1f500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61920 }
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
	__asm { je L_00c1f558 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeefa74 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c1f55a }
	__asm { L_00c1f558: }
	__asm { xor eax, eax }
	__asm { L_00c1f55a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c1f590
extern "C" __declspec(naked) void asm_00c1f590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61930 }
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
	__asm { je L_00c1f5e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeefa1c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c1f5ea }
	__asm { L_00c1f5e8: }
	__asm { xor eax, eax }
	__asm { L_00c1f5ea: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c1f620
extern "C" __declspec(naked) void asm_00c1f620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61940 }
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
	__asm { je L_00c1f678 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeefa5c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c1f67a }
	__asm { L_00c1f678: }
	__asm { xor eax, eax }
	__asm { L_00c1f67a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00c1f6b0
extern "C" __declspec(naked) void asm_00c1f6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61950 }
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
	__asm { je L_00c1f708 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeefa34 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c1f70a }
	__asm { L_00c1f708: }
	__asm { xor eax, eax }
	__asm { L_00c1f70a: }
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

extern "C" void fn_00c22c50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c1f7e0
extern "C" __declspec(naked) void asm_00c1f7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61960 }
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
	__asm { je L_00c1f838 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeef9dc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c1f83a }
	__asm { L_00c1f838: }
	__asm { xor eax, eax }
	__asm { L_00c1f83a: }
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
	__asm { call fn_00c22c50 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c21df0();
extern "C" void fn_00c262b0();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c1fcc0
extern "C" __declspec(naked) void asm_00c1fcc0()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x48 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c262b0 }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { call fn_00c21df0 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00c1fd2d }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c1fd2d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00c22d30();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c200c0
extern "C" __declspec(naked) void asm_00c200c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619a0 }
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
	__asm { je L_00c20118 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeef9c4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c2011a }
	__asm { L_00c20118: }
	__asm { xor eax, eax }
	__asm { L_00c2011a: }
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
	__asm { call fn_00c22d30 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c22d50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c201f0
extern "C" __declspec(naked) void asm_00c201f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619d0 }
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
	__asm { je L_00c20248 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xeef9f4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c2024a }
	__asm { L_00c20248: }
	__asm { xor eax, eax }
	__asm { L_00c2024a: }
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
	__asm { call fn_00c22d50 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01310d08[];
extern "C" char g_01310d0c[];
extern "C" char g_01310d10[];
extern "C" char g_01310d14[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c20280
extern "C" __declspec(naked) void asm_00c20280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01310d14] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c202c2 }
	__asm { or eax, 1 }
	__asm { push 0xe09ea0 }
	__asm { mov dword ptr [g_01310d14], eax }
	__asm { mov dword ptr [g_01310d08], 0x1296488 }
	__asm { mov dword ptr [g_01310d10], 0x40d810 }
	__asm { mov dword ptr [g_01310d0c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c202c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1310d08 }
	__asm { jne L_00c202db }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c202db: }
	__asm { test ecx, ecx }
	__asm { je L_00c202f1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c202f1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c202ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c202ff: }
	__asm { mov dword ptr [esi], 0x1310d08 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01310d18[];
extern "C" char g_01310d1c[];
extern "C" char g_01310d20[];
extern "C" char g_01310d24[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c20310
extern "C" __declspec(naked) void asm_00c20310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01310d24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c20352 }
	__asm { or eax, 1 }
	__asm { push 0xe09eb0 }
	__asm { mov dword ptr [g_01310d24], eax }
	__asm { mov dword ptr [g_01310d18], 0x12964b8 }
	__asm { mov dword ptr [g_01310d20], 0x40d810 }
	__asm { mov dword ptr [g_01310d1c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c20352: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1310d18 }
	__asm { jne L_00c2036b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c2036b: }
	__asm { test ecx, ecx }
	__asm { je L_00c20381 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c20381: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c2038f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c2038f: }
	__asm { mov dword ptr [esi], 0x1310d18 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c26d30();
extern "C" void fn_00c2b340();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c208d0
extern "C" __declspec(naked) void asm_00c208d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61a71 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2b340 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00c20921 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c26d30 }
	__asm { L_00c20921: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00c214b0
extern "C" __declspec(naked) void asm_00c214b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00c214d9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c214de }
	__asm { L_00c214d9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c214de: }
	__asm { cmp ecx, 0x1296488 }
	__asm { je L_00c21527 }
	__asm { test eax, eax }
	__asm { je L_00c214ee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c214f3 }
	__asm { L_00c214ee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c214f3: }
	__asm { push 0x1296488 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c21527 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c21527: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00c21540
extern "C" __declspec(naked) void asm_00c21540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00c21569 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c2156e }
	__asm { L_00c21569: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c2156e: }
	__asm { cmp ecx, 0x12964b8 }
	__asm { je L_00c215b7 }
	__asm { test eax, eax }
	__asm { je L_00c2157e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00c21583 }
	__asm { L_00c2157e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00c21583: }
	__asm { push 0x12964b8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00c215b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00c215b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310dc0[];
extern "C" char g_01310dc4[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c22b60
extern "C" __declspec(naked) void asm_00c22b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61d4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310dc4] }
	__asm { test al, 1 }
	__asm { jne L_00c22b9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310dc4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01310dc0], eax }
	__asm { L_00c22b9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310da8[];
extern "C" char g_01310dac[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c22bb0
extern "C" __declspec(naked) void asm_00c22bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61d6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310dac] }
	__asm { test al, 1 }
	__asm { jne L_00c22bea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310dac], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01310da8], eax }
	__asm { L_00c22bea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310db8[];
extern "C" char g_01310dbc[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c22c00
extern "C" __declspec(naked) void asm_00c22c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61d8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01310dbc] }
	__asm { test al, 1 }
	__asm { jne L_00c22c3a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310dbc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01310db8], eax }
	__asm { L_00c22c3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c233e0
extern "C" __declspec(naked) void asm_00c233e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61ddc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00c2345a }
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
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { pop esi }
	__asm { L_00c2345a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c23500();
// FUNCTION: ROBLOXSTUDIO 0x00c23650
extern "C" __declspec(naked) void asm_00c23650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c236a1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c23670 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c23672 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c23672 }
	__asm { L_00c23670: }
	__asm { mov eax, ecx }
	__asm { L_00c23672: }
	__asm { test eax, eax }
	__asm { je L_00c236a1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c236a1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c236a1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c236a1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00c23500 }
	__asm { L_00c236a1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c1f590();
extern "C" void fn_00c951f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c236b0
extern "C" __declspec(naked) void asm_00c236b0()
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
	__asm { push 0xb10 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c236fe }
	__asm { mov ecx, eax }
	__asm { call fn_00c951f0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c23700 }
	__asm { L_00c236fe: }
	__asm { xor esi, esi }
	__asm { L_00c23700: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c1f590 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c23731 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c23731 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c23731: }
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
extern "C" void fn_00c1f620();
extern "C" void fn_00c93af0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c23750
extern "C" __declspec(naked) void asm_00c23750()
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
	__asm { push 0x70 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c2379b }
	__asm { mov ecx, eax }
	__asm { call fn_00c93af0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c2379d }
	__asm { L_00c2379b: }
	__asm { xor esi, esi }
	__asm { L_00c2379d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c1f620 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c237ce }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c237ce }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c237ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00c237e0();
// FUNCTION: ROBLOXSTUDIO 0x00c23930
extern "C" __declspec(naked) void asm_00c23930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c23981 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c23950 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c23952 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c23952 }
	__asm { L_00c23950: }
	__asm { mov eax, ecx }
	__asm { L_00c23952: }
	__asm { test eax, eax }
	__asm { je L_00c23981 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c23981 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c23981 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c23981 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00c237e0 }
	__asm { L_00c23981: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c1f6b0();
extern "C" void fn_00c9aef0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c23990
extern "C" __declspec(naked) void asm_00c23990()
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
	__asm { push 0xb78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c239de }
	__asm { mov ecx, eax }
	__asm { call fn_00c9aef0 }
	__asm { mov esi, eax }
	__asm { jmp L_00c239e0 }
	__asm { L_00c239de: }
	__asm { xor esi, esi }
	__asm { L_00c239e0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c1f6b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c23a11 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c23a11 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c23a11: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3200[];
extern "C" char g_01310ce8[];
extern "C" char g_01310cec[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c23a30
extern "C" __declspec(naked) void asm_00c23a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61e3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ef3200], 0 }
	__asm { jne L_00c23a64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23a64: }
	__asm { push 0xc229d0 }
	__asm { push 0x1310934 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310cec] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c23aae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310cec], eax }
	__asm { push 0xef3200 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310ce8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c23aae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01310ce8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
