// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00c5e6c0();
extern "C" void fn_00c5e790();
// FUNCTION: ROBLOXSTUDIO 0x00c5e8a0
extern "C" __declspec(naked) void asm_00c5e8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_00c5e790 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00c5e92c }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x64] }
	__asm { call fn_00c5e6c0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x64] }
	__asm { call fn_00c5e6c0 }
	__asm { L_00c5e92c: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c5e9d0
extern "C" __declspec(naked) void asm_00c5e9d0()
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
	__asm { L_00c5e9e0: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00c5e9eb }
	__asm { add esi, -0x28 }
	__asm { jmp L_00c5e9ed }
	__asm { L_00c5e9eb: }
	__asm { xor esi, esi }
	__asm { L_00c5e9ed: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00c5ea17 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_00c5ea17: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00c5e9e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c5f5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c5ef30
extern "C" __declspec(naked) void asm_00c5ef30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66058 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { call fn_00c5f5e0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00c5efaf }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5efaf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00c5f7b0();
extern "C" void fn_00c60a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c5efd0
extern "C" __declspec(naked) void asm_00c5efd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x3c }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00c60a60 }
	__asm { mov ecx, esi }
	__asm { call fn_00c5f7b0 }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_00c5f01f }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f01f: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00c5f042 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f042: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00c5fbd0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c5f100
extern "C" __declspec(naked) void asm_00c5f100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65ff0 }
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
	__asm { je L_00c5f158 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef4f14 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c5f15a }
	__asm { L_00c5f158: }
	__asm { xor eax, eax }
	__asm { L_00c5f15a: }
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
	__asm { call fn_00c5fbd0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c5f230
extern "C" __declspec(naked) void asm_00c5f230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66000 }
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
	__asm { je L_00c5f288 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef4efc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c5f28a }
	__asm { L_00c5f288: }
	__asm { xor eax, eax }
	__asm { L_00c5f28a: }
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
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c60a60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c5f400
extern "C" __declspec(naked) void asm_00c5f400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66043 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00c5f444 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00c60a60 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c5f446 }
	__asm { L_00c5f444: }
	__asm { xor ecx, ecx }
	__asm { L_00c5f446: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [eax], ecx }
	__asm { jb L_00c5f45c }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f45c: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00c5f47f }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f47f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00c5f680();
extern "C" void fn_00c60a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c5f720
extern "C" __declspec(naked) void asm_00c5f720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x3c }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00c60a60 }
	__asm { mov ecx, esi }
	__asm { call fn_00c5f680 }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00c5f776 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f776: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00c5f799 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f799: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00c5f720();
extern "C" void fn_00c60a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c5f7b0
extern "C" __declspec(naked) void asm_00c5f7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x3c }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c60a60 }
	__asm { mov esi, 0xef4ed8 }
	__asm { mov ecx, esi }
	__asm { call fn_00c5f720 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_00c5f80c }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f80c: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp + 0x3c], 0xf }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov byte ptr [ebp + 0x28], 0 }
	__asm { jb L_00c5f82f }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5f82f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_0041eaa0();
extern "C" void fn_00421370();
extern "C" void fn_009e75b0();
// FUNCTION: ROBLOXSTUDIO 0x00c614f0
extern "C" __declspec(naked) void asm_00c614f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009e75b0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0041eaa0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c6153b }
	__asm { push esi }
	__asm { call fn_00421370 }
	__asm { add esp, 4 }
	__asm { L_00c6153b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c61a10
extern "C" __declspec(naked) void asm_00c61a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c61a4a }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c61a4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c61a60
extern "C" __declspec(naked) void asm_00c61a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66300 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, ecx }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c61aa5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c61aa5: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00c61ac8 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c61ac8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c61bd0
extern "C" __declspec(naked) void asm_00c61bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c61c11 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c61c11: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_004030b0();
extern "C" void fn_00410c40();
extern "C" void fn_004b1ea0();
// FUNCTION: ROBLOXSTUDIO 0x00c637b0
extern "C" __declspec(naked) void asm_00c637b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00c637c2 }
	__asm { inc eax }
	__asm { jmp L_00c637c4 }
	__asm { L_00c637c2: }
	__asm { xor eax, eax }
	__asm { L_00c637c4: }
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
	__asm { call fn_004b1ea0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00c637f2 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_00410c40 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c637f2: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004030b0();
extern "C" void fn_004123f0();
extern "C" void fn_004b1ea0();
// FUNCTION: ROBLOXSTUDIO 0x00c63800
extern "C" __declspec(naked) void asm_00c63800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00c63812 }
	__asm { inc eax }
	__asm { jmp L_00c63814 }
	__asm { L_00c63812: }
	__asm { xor eax, eax }
	__asm { L_00c63814: }
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
	__asm { call fn_004b1ea0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00c63842 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_004123f0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c63842: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004030b0();
extern "C" void fn_0044dc00();
extern "C" void fn_004b1ea0();
// FUNCTION: ROBLOXSTUDIO 0x00c63850
extern "C" __declspec(naked) void asm_00c63850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00c6386a }
	__asm { inc eax }
	__asm { jmp L_00c6386c }
	__asm { L_00c6386a: }
	__asm { xor eax, eax }
	__asm { L_00c6386c: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_004b1ea0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00c638a2 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add ecx, 0x18 }
	__asm { call fn_0044dc00 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c638a2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01313770[];
extern "C" char g_01313774[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c66a30
extern "C" __declspec(naked) void asm_00c66a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313774] }
	__asm { test al, 1 }
	__asm { jne L_00c66aa3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313774], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c66a8e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01313770], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c66a8e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01313770], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c66aa3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313770] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313778[];
extern "C" char g_0131377c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c66ac0
extern "C" __declspec(naked) void asm_00c66ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131377c] }
	__asm { test al, 1 }
	__asm { jne L_00c66b33 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131377c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c66b1e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01313778], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c66b1e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01313778], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c66b33: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313778] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313788[];
extern "C" char g_0131378c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c66b50
extern "C" __declspec(naked) void asm_00c66b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd66ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131378c] }
	__asm { test al, 1 }
	__asm { jne L_00c66bc3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131378c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c66bae }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01313788], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c66bae: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01313788], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c66bc3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313788] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
extern "C" void fn_0099d070();
extern "C" void fn_00b5cb90();
// FUNCTION: ROBLOXSTUDIO 0x00c67c20
extern "C" __declspec(naked) void asm_00c67c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [eax + 0xe0] }
	__asm { mov ecx, esi }
	__asm { call fn_0099d070 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, eax }
	__asm { je L_00c67c91 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c7f0 }
	__asm { push eax }
	__asm { call fn_00b5cb90 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00c67c91 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c67c7c }
	__asm { push 0x107 }
	__asm { push 0xef5118 }
	__asm { push 0xef5568 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c67c91 }
	__asm { L_00c67c7c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef55a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c67c91: }
	__asm { cmp edi, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00ef58d8[];
extern "C" char g_013137a1[];
extern "C" void fn_008929a0();
extern "C" void fn_00896cc0();
extern "C" void fn_00897dd0();
extern "C" void fn_00897f30();
extern "C" void fn_00b49740();
// FUNCTION: ROBLOXSTUDIO 0x00c67ca0
extern "C" __declspec(naked) void asm_00c67ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008929a0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b49740 }
	__asm { test al, al }
	__asm { je L_00c67d08 }
	__asm { cmp byte ptr [g_013137a1], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { je L_00c67cdc }
	__asm { call fn_00897f30 }
	__asm { jmp L_00c67ce1 }
	__asm { L_00c67cdc: }
	__asm { call fn_00897dd0 }
	__asm { L_00c67ce1: }
	__asm { fld qword ptr [g_00ef58d8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp qword ptr [esp] }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { call fn_00896cc0 }
	__asm { L_00c67d08: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a55f0[];
extern "C" char g_012a55f4[];
extern "C" void fn_00c68ab0();
extern "C" void fn_00c68d00();
// FUNCTION: ROBLOXSTUDIO 0x00c689e0
extern "C" __declspec(naked) void asm_00c689e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x80 }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push esi }
	__asm { push 0x7c }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { call fn_00c68d00 }
	__asm { mov edx, dword ptr [g_012a55f0] }
	__asm { lea eax, [ebp - 0x80] }
	__asm { L_00c68a02: }
	__asm { mov cl, byte ptr [eax] }
	__asm { cmp cl, byte ptr [edx] }
	__asm { jne L_00c68a22 }
	__asm { test cl, cl }
	__asm { je L_00c68a1e }
	__asm { mov cl, byte ptr [eax + 1] }
	__asm { cmp cl, byte ptr [edx + 1] }
	__asm { jne L_00c68a22 }
	__asm { add eax, 2 }
	__asm { add edx, 2 }
	__asm { test cl, cl }
	__asm { jne L_00c68a02 }
	__asm { L_00c68a1e: }
	__asm { xor eax, eax }
	__asm { jmp L_00c68a27 }
	__asm { L_00c68a22: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00c68a27: }
	__asm { test eax, eax }
	__asm { jne L_00c68a43 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp word ptr [eax], 2 }
	__asm { jne L_00c68a43 }
	__asm { push 0 }
	__asm { push dword ptr [g_012a55f4] }
	__asm { mov ecx, esi }
	__asm { call fn_00c68ab0 }
	__asm { L_00c68a43: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c68dd0
extern "C" __declspec(naked) void asm_00c68dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66c00 }
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
	__asm { je L_00c68e28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef5b9c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c68e2a }
	__asm { L_00c68e28: }
	__asm { xor eax, eax }
	__asm { L_00c68e2a: }
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
	__asm { je L_00c68e4e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c68e4e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c68f00
extern "C" __declspec(naked) void asm_00c68f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66c10 }
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
	__asm { je L_00c68f58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef5b84 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c68f5a }
	__asm { L_00c68f58: }
	__asm { xor eax, eax }
	__asm { L_00c68f5a: }
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
	__asm { je L_00c68f7e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c68f7e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c68f90
extern "C" __declspec(naked) void asm_00c68f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66c20 }
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
	__asm { je L_00c68fe8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef5bb4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c68fea }
	__asm { L_00c68fe8: }
	__asm { xor eax, eax }
	__asm { L_00c68fea: }
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
	__asm { je L_00c6900e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c6900e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c6a040();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6ae40
extern "C" __declspec(naked) void asm_00c6ae40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor edi, edi }
	__asm { L_00c6ae51: }
	__asm { test eax, eax }
	__asm { je L_00c6ae5d }
	__asm { lea esi, [eax - 0x1c8] }
	__asm { jmp L_00c6ae5f }
	__asm { L_00c6ae5d: }
	__asm { xor esi, esi }
	__asm { L_00c6ae5f: }
	__asm { mov eax, dword ptr [esi + 0x1c8] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebx], eax }
	__asm { call fn_00c6a040 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { inc edi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00c6ae51 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b460
extern "C" __declspec(naked) void asm_00c6b460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00c6b4d0 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00c6b480: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00c6b48e }
	__asm { add esi, 0xfffffe38 }
	__asm { jmp L_00c6b490 }
	__asm { L_00c6b48e: }
	__asm { xor esi, esi }
	__asm { L_00c6b490: }
	__asm { mov eax, dword ptr [esi + 0x1cc] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00c6b4b1 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x1c8] }
	__asm { jmp L_00c6b4c9 }
	__asm { L_00c6b4b1: }
	__asm { mov eax, dword ptr [esi + 0x1c8] }
	__asm { lea edx, [esi + 0x1c8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00c6b4c9: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00c6b480 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00c6b4d0: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b4e0
extern "C" __declspec(naked) void asm_00c6b4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00c6b541 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00c6b500: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00c6b50b }
	__asm { add esi, -0x38 }
	__asm { jmp L_00c6b50d }
	__asm { L_00c6b50b: }
	__asm { xor esi, esi }
	__asm { L_00c6b50d: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00c6b528 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x38] }
	__asm { jmp L_00c6b53a }
	__asm { L_00c6b528: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { lea edx, [esi + 0x38] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00c6b53a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00c6b500 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00c6b541: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00c6b460();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b650
extern "C" __declspec(naked) void asm_00c6b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00c6b684 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6b684: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00c6b6ba }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00c6b6ba }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6b460 }
	__asm { L_00c6b6ba: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00c6b4e0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b6d0
extern "C" __declspec(naked) void asm_00c6b6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00c6b704 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6b704: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00c6b73a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00c6b73a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6b4e0 }
	__asm { L_00c6b73a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c440();
extern "C" void fn_00c6c7a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6bf20
extern "C" __declspec(naked) void asm_00c6bf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c6c440 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { push 0x10 }
	__asm { test al, al }
	__asm { je L_00c6bf61 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { test al, al }
	__asm { je L_00c6bf58 }
	__asm { mov ax, word ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov byte ptr [ecx + 1], al }
	__asm { mov byte ptr [ecx], ah }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6bf58: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6bf61: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6c7a0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c440();
extern "C" void fn_00c6c8b0();
// FUNCTION: ROBLOXSTUDIO 0x00c6bf70
extern "C" __declspec(naked) void asm_00c6bf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c6c440 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { push 0x20 }
	__asm { test al, al }
	__asm { je L_00c6bfbc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c6c8b0 }
	__asm { test al, al }
	__asm { je L_00c6bfb3 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov byte ptr [ecx], al }
	__asm { mov al, byte ptr [ebp - 2] }
	__asm { mov byte ptr [ecx + 1], al }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov byte ptr [ecx + 3], al }
	__asm { mov byte ptr [ecx + 2], ah }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6bfb3: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6bfbc: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6c8b0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
// FUNCTION: ROBLOXSTUDIO 0x00c6c130
extern "C" __declspec(naked) void asm_00c6c130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp byte ptr [eax], 0 }
	__asm { mov esi, ecx }
	__asm { je L_00c6c179 }
	__asm { push edi }
	__asm { push 1 }
	__asm { call fn_00c6c350 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { shr ecx, 3 }
	__asm { and edi, 7 }
	__asm { jne L_00c6c161 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [ecx + eax], 0x80 }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c161: }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { add edx, ecx }
	__asm { mov ecx, edi }
	__asm { mov eax, 0x80 }
	__asm { sar eax, cl }
	__asm { pop edi }
	__asm { or byte ptr [edx], al }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c179: }
	__asm { push 1 }
	__asm { call fn_00c6c350 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test cl, 7 }
	__asm { jne L_00c6c191 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov byte ptr [ecx + eax], 0 }
	__asm { L_00c6c191: }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012afa44[];
// FUNCTION: ROBLOXSTUDIO 0x00c6c1f0
extern "C" __declspec(naked) void asm_00c6c1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { cmp edi, 0x100 }
	__asm { ja L_00c6c228 }
	__asm { lea eax, [esi + 0x11] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], 0x800 }
	__asm { mov eax, esi }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c228: }
	__asm { push 0x50 }
	__asm { push 0xef5bc8 }
	__asm { push edi }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi*8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00c6c500
extern "C" __declspec(naked) void asm_00c6c500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 7] }
	__asm { shr eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_00c6c55a }
	__asm { lea eax, [ecx - 1] }
	__asm { and eax, 7 }
	__asm { sub ecx, eax }
	__asm { lea eax, [ecx + 7] }
	__asm { mov dword ptr [esi], eax }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub edi, eax }
	__asm { mov ecx, esi }
	__asm { lea eax, [edi*8] }
	__asm { push eax }
	__asm { call fn_00c6c350 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { lea eax, [edi*8] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi], eax }
	__asm { L_00c6c55a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c7a0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00c6c560
extern "C" __declspec(naked) void asm_00c6c560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { test dl, 7 }
	__asm { jne L_00c6c5a6 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea edi, [ecx*8] }
	__asm { lea eax, [edi + edx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jbe L_00c6c588 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c6c588: }
	__asm { shr edx, 3 }
	__asm { add edx, dword ptr [esi + 0xc] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c6c5a6: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6c7a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00c6c5c0
extern "C" __declspec(naked) void asm_00c6c5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { jne L_00c6c5d4 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c6c5d4: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { lea eax, [ecx - 1] }
	__asm { and eax, 7 }
	__asm { sub ecx, eax }
	__asm { add ecx, 7 }
	__asm { lea edi, [edx*8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { lea eax, [edi + ecx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jbe L_00c6c5fc }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c6c5fc: }
	__asm { shr ecx, 3 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { push edx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6c440();
// FUNCTION: ROBLOXSTUDIO 0x00c6c620
extern "C" __declspec(naked) void asm_00c6c620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, 0x10 }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jbe L_00c6c637 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c637: }
	__asm { call fn_00c6c440 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shr ecx, 3 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { je L_00c6c66c }
	__asm { mov al, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c66c: }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edx], al }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov al, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
extern "C" void fn_00c6cf00();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00c6cc40
extern "C" __declspec(naked) void asm_00c6cc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_00c6cc92 }
	__asm { test byte ptr [esi], 7 }
	__asm { lea eax, [edi*8] }
	__asm { jne L_00c6cc87 }
	__asm { push eax }
	__asm { call fn_00c6c350 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 7 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { shr eax, 3 }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi*8] }
	__asm { add dword ptr [esi], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c6cc87: }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6cf00 }
	__asm { L_00c6cc92: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6c350();
extern "C" void fn_00c6cf00();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00c6cca0
extern "C" __declspec(naked) void asm_00c6cca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx - 1] }
	__asm { and eax, 7 }
	__asm { sub edx, eax }
	__asm { add edx, 7 }
	__asm { mov dword ptr [esi], edx }
	__asm { test edi, edi }
	__asm { je L_00c6cd01 }
	__asm { lea eax, [edi*8] }
	__asm { test dl, 7 }
	__asm { jne L_00c6ccf6 }
	__asm { push eax }
	__asm { call fn_00c6c350 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 7 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { shr eax, 3 }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi*8] }
	__asm { add dword ptr [esi], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c6ccf6: }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6cf00 }
	__asm { L_00c6cd01: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e220();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d460
extern "C" __declspec(naked) void asm_00c6d460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e220 }
	__asm { test al, al }
	__asm { jne L_00c6d4ef }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef6104 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d4ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e220();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d500
extern "C" __declspec(naked) void asm_00c6d500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e220 }
	__asm { test al, al }
	__asm { jne L_00c6d58f }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef612c }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d58f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e220();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d5a0
extern "C" __declspec(naked) void asm_00c6d5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e220 }
	__asm { test al, al }
	__asm { jne L_00c6d62f }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef60ac }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d62f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e220();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d640
extern "C" __declspec(naked) void asm_00c6d640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e220 }
	__asm { test al, al }
	__asm { jne L_00c6d6cf }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef6204 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d6cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e2e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6d6e0
extern "C" __declspec(naked) void asm_00c6d6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e2e0 }
	__asm { test al, al }
	__asm { jne L_00c6d76f }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef622c }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6d76f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00c6e2e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c6e000
extern "C" __declspec(naked) void asm_00c6e000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd671b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e2e0 }
	__asm { test al, al }
	__asm { jne L_00c6e08f }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xef60d4 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x48], 0xef5c28 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x116eac8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00c6e08f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c6e3a0
extern "C" __declspec(naked) void asm_00c6e3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c6e3e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c6e3ec }
	__asm { L_00c6e3e7: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c6e3ec: }
	__asm { test al, al }
	__asm { jne L_00c6e40b }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 1 }
	__asm { push 0x20 }
	__asm { push eax }
	__asm { jmp L_00c6e412 }
	__asm { L_00c6e40b: }
	__asm { push 1 }
	__asm { push 0x20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { L_00c6e412: }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c6e430
extern "C" __declspec(naked) void asm_00c6e430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c6e479 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c6e47e }
	__asm { L_00c6e479: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c6e47e: }
	__asm { test al, al }
	__asm { jne L_00c6e49d }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { jmp L_00c6e4a4 }
	__asm { L_00c6e49d: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push dword ptr [ebp + 8] }
	__asm { L_00c6e4a4: }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6d780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6f070
extern "C" __declspec(naked) void asm_00c6f070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d780 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { test edx, edx }
	__asm { je L_00c6f0cb }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea esi, [ebp - 0x24] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x28] }
	__asm { pop esi }
	__asm { L_00c6f0cb: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c6f0dc }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c6f0dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b1370();
extern "C" void fn_00c6d460();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6f1f0
extern "C" __declspec(naked) void asm_00c6f1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { pop esi }
	__asm { je L_00c6f25c }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_008b1370 }
	__asm { L_00c6f25c: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00465ec0();
extern "C" void fn_00c6fc90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6f400
extern "C" __declspec(naked) void asm_00c6f400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00465ec0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6fc90 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c6f44b }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c6f44b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00c6f8c0
extern "C" __declspec(naked) void asm_00c6f8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd670b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00c6f90d }
	__asm { sub eax, 4 }
	__asm { L_00c6f90d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x218], 1 }
	__asm { push 0x4028a0 }
	__asm { push 0x4030e0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [esi + 0x21c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf676b }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c70320
extern "C" __declspec(naked) void asm_00c70320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00c70364 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c70369 }
	__asm { L_00c70364: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c70369: }
	__asm { push esi }
	__asm { test al, al }
	__asm { jne L_00c70385 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { jmp L_00c70388 }
	__asm { L_00c70385: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { L_00c70388: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c703b0
extern "C" __declspec(naked) void asm_00c703b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00c703f4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c703f9 }
	__asm { L_00c703f4: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c703f9: }
	__asm { push esi }
	__asm { test al, al }
	__asm { jne L_00c70415 }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { jmp L_00c70418 }
	__asm { L_00c70415: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { L_00c70418: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0x20 }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c70440
extern "C" __declspec(naked) void asm_00c70440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { sub esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c70486 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c7048b }
	__asm { L_00c70486: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c7048b: }
	__asm { push esi }
	__asm { test al, al }
	__asm { jne L_00c704a7 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x14] }
	__asm { jmp L_00c704aa }
	__asm { L_00c704a7: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { L_00c704aa: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c704d0
extern "C" __declspec(naked) void asm_00c704d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c70523 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00c70528 }
	__asm { L_00c70523: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00c70528: }
	__asm { test al, al }
	__asm { jne L_00c70543 }
	__asm { push 2 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { jmp L_00c70546 }
	__asm { L_00c70543: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { L_00c70546: }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e570();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c70890
extern "C" __declspec(naked) void asm_00c70890()
{
	__asm { L_00c70890: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, ecx }
	__asm { mov edi, esi }
	__asm { jne L_00c708f7 }
	__asm { L_00c708a3: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_00c70890 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00c708e6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00c6e570 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00c708e6: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { je L_00c708a3 }
	__asm { L_00c708f7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_00c71fa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c72030
extern "C" __declspec(naked) void asm_00c72030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x21c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c71fa0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ecx], eax }
	__asm { jb L_00c720a6 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c720a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6f360();
extern "C" void fn_00c71210();
extern "C" void fn_00c71510();
// FUNCTION: ROBLOXSTUDIO 0x00c720c0
extern "C" __declspec(naked) void asm_00c720c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xe88] }
	__asm { call fn_00c71510 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { cmp esi, dword ptr [ebx + 0xe88] }
	__asm { je L_00c72126 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], 0x90d358 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c6f360 }
	__asm { add esp, 0x1c }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xe88] }
	__asm { call fn_00c71210 }
	__asm { L_00c72126: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c6cf00();
extern "C" void fn_00cc6290();
// FUNCTION: ROBLOXSTUDIO 0x00c72130
extern "C" __declspec(naked) void asm_00c72130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_00c72167 }
	__asm { push dword ptr [edi + 4] }
	__asm { lea ecx, [ebx + 0x64] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cc6290 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebx + 0xe90] }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c72167: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c72250
extern "C" __declspec(naked) void asm_00c72250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov esi, dword ptr [esi + 0x28] }
	__asm { test cl, cl }
	__asm { je L_00c722b1 }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jb L_00c722b1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c722a0 }
	__asm { push 0x26 }
	__asm { push 0xef5ef0 }
	__asm { push 0xef5f2c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c722b1 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c722a0: }
	__asm { movzx eax, cl }
	__asm { push 0xef5f50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c722b1: }
	__asm { test edi, edi }
	__asm { jne L_00c722b8 }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { L_00c722b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c34f20();
extern "C" void fn_00c6cf00();
extern "C" void fn_00cc6290();
// FUNCTION: ROBLOXSTUDIO 0x00c72310
extern "C" __declspec(naked) void asm_00c72310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00c72361 }
	__asm { mov ecx, dword ptr [edi + 0xe80] }
	__asm { push esi }
	__asm { call fn_00c34f20 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00cc6290 }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0xe90] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c72361: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0042d740();
extern "C" void fn_0042e6e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c725d0
extern "C" __declspec(naked) void asm_00c725d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0xe394e0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_0042d740 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00c7263a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7263a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00c68cf0();
// FUNCTION: ROBLOXSTUDIO 0x00c72a40
extern "C" __declspec(naked) void asm_00c72a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c68cf0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [ebp - 0x24], 0 }
	__asm { jne L_00c72a8f }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c72a8f: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { lea edx, [ecx + 1] }
	__asm { L_00c72a95: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00c72a95 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c72f90
extern "C" __declspec(naked) void asm_00c72f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67330 }
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
	__asm { je L_00c72fe8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9ba8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c72fea }
	__asm { L_00c72fe8: }
	__asm { xor eax, eax }
	__asm { L_00c72fea: }
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

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x00c73170
extern "C" __declspec(naked) void asm_00c73170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00c731d8 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c731c5 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00c731c5: }
	__asm { mov eax, 0xef9b18 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00c731d8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c733f0
extern "C" __declspec(naked) void asm_00c733f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67340 }
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
	__asm { je L_00c73448 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9be0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c7344a }
	__asm { L_00c73448: }
	__asm { xor eax, eax }
	__asm { L_00c7344a: }
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
	__asm { je L_00c7346f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00c7346f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73520
extern "C" __declspec(naked) void asm_00c73520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67350 }
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
	__asm { je L_00c73578 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9c10 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c7357a }
	__asm { L_00c73578: }
	__asm { xor eax, eax }
	__asm { L_00c7357a: }
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
	__asm { je L_00c7359f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00c7359f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73650
extern "C" __declspec(naked) void asm_00c73650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67360 }
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
	__asm { je L_00c736a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9bf8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c736aa }
	__asm { L_00c736a8: }
	__asm { xor eax, eax }
	__asm { L_00c736aa: }
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
	__asm { je L_00c736cf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00c736cf: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73780
extern "C" __declspec(naked) void asm_00c73780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67370 }
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
	__asm { je L_00c737d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9bc8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c737da }
	__asm { L_00c737d8: }
	__asm { xor eax, eax }
	__asm { L_00c737da: }
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
	__asm { je L_00c737ff }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00c737ff: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73810
extern "C" __declspec(naked) void asm_00c73810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67380 }
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
	__asm { je L_00c73868 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9ad4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c7386a }
	__asm { L_00c73868: }
	__asm { xor eax, eax }
	__asm { L_00c7386a: }
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
	__asm { je L_00c7388e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c7388e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c738a0
extern "C" __declspec(naked) void asm_00c738a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67390 }
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
	__asm { je L_00c738f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9abc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c738fa }
	__asm { L_00c738f8: }
	__asm { xor eax, eax }
	__asm { L_00c738fa: }
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
	__asm { je L_00c7391e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c7391e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c739d0
extern "C" __declspec(naked) void asm_00c739d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd673a0 }
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
	__asm { je L_00c73a28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9c28 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c73a2a }
	__asm { L_00c73a28: }
	__asm { xor eax, eax }
	__asm { L_00c73a2a: }
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
	__asm { je L_00c73a4f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00c73a4f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73a60
extern "C" __declspec(naked) void asm_00c73a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd673b0 }
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
	__asm { je L_00c73ab8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9aa4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c73aba }
	__asm { L_00c73ab8: }
	__asm { xor eax, eax }
	__asm { L_00c73aba: }
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
	__asm { je L_00c73ade }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c73ade: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73af0
extern "C" __declspec(naked) void asm_00c73af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd673c0 }
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
	__asm { je L_00c73b48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9a8c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c73b4a }
	__asm { L_00c73b48: }
	__asm { xor eax, eax }
	__asm { L_00c73b4a: }
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
	__asm { je L_00c73b6e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c73b6e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c751c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73c20
extern "C" __declspec(naked) void asm_00c73c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd673d0 }
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
	__asm { je L_00c73c78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9aec }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c73c7a }
	__asm { L_00c73c78: }
	__asm { xor eax, eax }
	__asm { L_00c73c7a: }
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
	__asm { call fn_00c751c0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c75250();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73d50
extern "C" __declspec(naked) void asm_00c73d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd673e0 }
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
	__asm { je L_00c73da8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9b04 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c73daa }
	__asm { L_00c73da8: }
	__asm { xor eax, eax }
	__asm { L_00c73daa: }
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
	__asm { call fn_00c75250 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c73e80
extern "C" __declspec(naked) void asm_00c73e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd673f0 }
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
	__asm { je L_00c73ed8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xef9c40 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c73eda }
	__asm { L_00c73ed8: }
	__asm { xor eax, eax }
	__asm { L_00c73eda: }
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
	__asm { je L_00c73eff }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00c73eff: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01313d34[];
extern "C" char g_01313d38[];
extern "C" char g_01313d3c[];
extern "C" char g_01313d40[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c73f10
extern "C" __declspec(naked) void asm_00c73f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01313d40] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c73f52 }
	__asm { or eax, 1 }
	__asm { push 0xe0dbc0 }
	__asm { mov dword ptr [g_01313d40], eax }
	__asm { mov dword ptr [g_01313d34], 0x11efd14 }
	__asm { mov dword ptr [g_01313d3c], 0x40d810 }
	__asm { mov dword ptr [g_01313d38], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c73f52: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1313d34 }
	__asm { jne L_00c73f6b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c73f6b: }
	__asm { test ecx, ecx }
	__asm { je L_00c73f81 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c73f81: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c73f8f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c73f8f: }
	__asm { mov dword ptr [esi], 0x1313d34 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01313d44[];
extern "C" char g_01313d48[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c75050
extern "C" __declspec(naked) void asm_00c75050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6750e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313d48] }
	__asm { test al, 1 }
	__asm { jne L_00c7508a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d48], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01313d44], eax }
	__asm { L_00c7508a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313d4c[];
extern "C" char g_01313d50[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00c750a0
extern "C" __declspec(naked) void asm_00c750a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6752e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01313d50] }
	__asm { test al, 1 }
	__asm { jne L_00c750da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d50], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01313d4c], eax }
	__asm { L_00c750da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00c75170
extern "C" __declspec(naked) void asm_00c75170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00c751b6 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c751ac }
	__asm { push edi }
	__asm { L_00c75187: }
	__asm { mov edi, dword ptr [ecx + ebx - 8] }
	__asm { lea eax, [ecx + ebx] }
	__asm { push ecx }
	__asm { mov ebx, dword ptr [eax - 4] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { test edi, edi }
	__asm { jne L_00c75187 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop edi }
	__asm { L_00c751ac: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop ebx }
	__asm { L_00c751b6: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00c751c0
extern "C" __declspec(naked) void asm_00c751c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd67548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00c7523e }
	__asm { push 0x4028a0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [esi + 0xc0c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf669e }
	__asm { push 0x4028a0 }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cf669e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_00c7523e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2fd60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c752d0
extern "C" __declspec(naked) void asm_00c752d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67570 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test byte ptr [eax + 0x28], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c7530b }
	__asm { call fn_00a2fd60 }
	__asm { L_00c7530b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c75520
extern "C" __declspec(naked) void asm_00c75520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67599 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c7559d }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00c75596 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00c75596: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { L_00c7559d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00c72f90();
extern "C" void fn_00cbab70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c75680
extern "C" __declspec(naked) void asm_00c75680()
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
	__asm { je L_00c756cb }
	__asm { mov ecx, eax }
	__asm { call fn_00cbab70 }
	__asm { mov esi, eax }
	__asm { jmp L_00c756cd }
	__asm { L_00c756cb: }
	__asm { xor esi, esi }
	__asm { L_00c756cd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00c72f90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c756fe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00c756fe }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00c756fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3ee0[];
extern "C" char g_01313d0c[];
extern "C" char g_01313d10[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c75710
extern "C" __declspec(naked) void asm_00c75710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd675be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ef3ee0], 0 }
	__asm { jne L_00c75744 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c75744: }
	__asm { push 0xc74f10 }
	__asm { push 0x1313cbc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01313d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c7578e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d10], eax }
	__asm { push 0xef3ee0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313d0c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c7578e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313d0c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3ea4[];
extern "C" char g_01313d14[];
extern "C" char g_01313d18[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00c757b0
extern "C" __declspec(naked) void asm_00c757b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd674ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ef3ea4], 0 }
	__asm { jne L_00c757e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c757e4: }
	__asm { push 0xc74f60 }
	__asm { push 0x1313cc4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01313d18] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c7582e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d18], eax }
	__asm { push 0xef3ea4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313d14], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c7582e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313d14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6d8e0();
extern "C" void fn_00c79870();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c76010
extern "C" __declspec(naked) void asm_00c76010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d8e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c76065 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00c79870 }
	__asm { L_00c76065: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c76076 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c76076: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_00c6d780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c76250
extern "C" __declspec(naked) void asm_00c76250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d780 }
	__asm { add esp, 8 }
	__asm { call fn_007d5550 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_0048e3f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c762bb }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c762bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cfd30();
extern "C" void fn_007d5780();
extern "C" void fn_00c6d8e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c76310
extern "C" __declspec(naked) void asm_00c76310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6d8e0 }
	__asm { add esp, 8 }
	__asm { call fn_007d5780 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_007cfd30 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c7637b }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7637b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c7180();
extern "C" void fn_007cb440();
extern "C" void fn_007d58d0();
extern "C" void fn_00c6db30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c76400
extern "C" __declspec(naked) void asm_00c76400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00c6db30 }
	__asm { add esp, 8 }
	__asm { call fn_007d58d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_007c7180 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00c7647a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7647a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083d1d0();
// FUNCTION: ROBLOXSTUDIO 0x00c789e0
extern "C" __declspec(naked) void asm_00c789e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00c78a31 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c78a00 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c78a02 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c78a02 }
	__asm { L_00c78a00: }
	__asm { mov eax, ecx }
	__asm { L_00c78a02: }
	__asm { test eax, eax }
	__asm { je L_00c78a31 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c78a31 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c78a31 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c78a31 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083d1d0 }
	__asm { L_00c78a31: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00405b90();
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5780();
// FUNCTION: ROBLOXSTUDIO 0x00c78ba0
extern "C" __declspec(naked) void asm_00c78ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c78c01 }
	__asm { call fn_007d5780 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00c78c01 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c78bec }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c78c01 }
	__asm { L_00c78bec: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c78c01: }
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
extern "C" void fn_007d59b0();
// FUNCTION: ROBLOXSTUDIO 0x00c78c20
extern "C" __declspec(naked) void asm_00c78c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00c78c79 }
	__asm { call fn_007d59b0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00c78c79 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c78c64 }
	__asm { push 0x122 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c78c79 }
	__asm { L_00c78c64: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c78c79: }
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

extern "C" void fn_00c6fd60();
extern "C" void fn_00c78ba0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c792c0
extern "C" __declspec(naked) void asm_00c792c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00c78ba0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6fd60 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c7930b }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7930b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004d1ca0();
extern "C" void fn_00c6fc90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c79490
extern "C" __declspec(naked) void asm_00c79490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6fc90 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c794db }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c794db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6fd60();
extern "C" void fn_00c750f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c79520
extern "C" __declspec(naked) void asm_00c79520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00c750f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6fd60 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c7956b }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7956b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a62b0();
extern "C" void fn_00c6fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c79600
extern "C" __declspec(naked) void asm_00c79600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_009a62b0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6fe80 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00c7964b }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7964b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5780();
// FUNCTION: ROBLOXSTUDIO 0x00c79870
extern "C" __declspec(naked) void asm_00c79870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00c798c9 }
	__asm { call fn_007d5780 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00c798c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c798b4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c798c9 }
	__asm { L_00c798b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c798c9: }
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
extern "C" void fn_007d59b0();
// FUNCTION: ROBLOXSTUDIO 0x00c798e0
extern "C" __declspec(naked) void asm_00c798e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00c79939 }
	__asm { call fn_007d59b0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00c79939 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c79924 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c79939 }
	__asm { L_00c79924: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c79939: }
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

extern "C" char g_01310a84[];
extern "C" char g_01312438[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00c6f810();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c79f80
extern "C" __declspec(naked) void asm_00c79f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67746 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c6f810 }
	__asm { mov dword ptr [esi], 0xef69ac }
	__asm { mov dword ptr [esi + 4], 0xef6a2c }
	__asm { mov dword ptr [esi + 0x18], 0xef6a34 }
	__asm { mov dword ptr [esi + 0x1c], 0xef6a40 }
	__asm { mov eax, dword ptr [g_01310a84] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00c7a017 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef66ac }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c7a017: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1310958 }
	__asm { inc dword ptr [g_01312438] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310a84[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c7a260
extern "C" __declspec(naked) void asm_00c7a260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62c8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01310a84] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c7a2d5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xef66ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00c7a2d5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x1310958 }
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

extern "C" void fn_00c75170();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c7ae10
extern "C" __declspec(naked) void asm_00c7ae10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd677f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0x1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c7ae80 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov dword ptr [edx + 0x10], 0x20 }
	__asm { mov dword ptr [edx + 0x14], 0x20 }
	__asm { mov dword ptr [edx + 0x18], 0 }
	__asm { jmp L_00c7ae82 }
	__asm { L_00c7ae80: }
	__asm { xor edx, edx }
	__asm { L_00c7ae82: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00c75170 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc97f[];
extern "C" void fn_006b8a90();
extern "C" void fn_00b7f8d0();
// FUNCTION: ROBLOXSTUDIO 0x00c7af60
extern "C" __declspec(naked) void asm_00c7af60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6783b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi], 0xef6dac }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov dword ptr [edi + 0x28], 0xffffffff }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov al, byte ptr [g_012fc97f] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00c7affa }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xef6e60 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c7affa: }
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
extern "C" void fn_0068b610();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c7df10
extern "C" __declspec(naked) void asm_00c7df10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test dl, dl }
	__asm { je L_00c7df66 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [ecx + 0xc], eax }
	__asm { je L_00c7df66 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c7df55 }
	__asm { push 0xe7 }
	__asm { push 0xef66cc }
	__asm { push 0xef6710 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c7df66 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00c7df55: }
	__asm { movzx eax, dl }
	__asm { push 0xef6758 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c7df66: }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { je L_00c7df7a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [ecx], esi }
	__asm { lea eax, [ecx + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c7df7a: }
	__asm { mov ecx, edx }
	__asm { call fn_0068b610 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ecx], esi }
	__asm { lea eax, [ecx + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c7e000();
extern "C" void fn_00c7e220();
extern "C" void fn_00c81190();
// FUNCTION: ROBLOXSTUDIO 0x00c7e1b0
extern "C" __declspec(naked) void asm_00c7e1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_00c7e220 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { cmp ecx, eax }
	__asm { je L_00c7e1df }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c81190 }
	__asm { L_00c7e1df: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esi, 0x30 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { call fn_00c7e000 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebx + 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x40], eax }
	__asm { lea eax, [esi + 0x44] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { call fn_00c7e000 }
	__asm { mov al, byte ptr [esi + 0x50] }
	__asm { pop edi }
	__asm { mov byte ptr [ebx + 0x50], al }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a2bde0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7e7c0
extern "C" __declspec(naked) void asm_00c7e7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd68228 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c7e7f9 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7e7f9: }
	__asm { cmp byte ptr [esi + 0x7c], 0 }
	__asm { push edi }
	__asm { je L_00c7e80c }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { L_00c7e80c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { pop edi }
	__asm { je L_00c7e824 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7e824: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c7cd70();
extern "C" void fn_00ccf490();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7e920
extern "C" __declspec(naked) void asm_00c7e920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd68248 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ccf490 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c7cd70 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c7e96b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7e96b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc97f[];
extern "C" void fn_006b8aae();
extern "C" void fn_00941e40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7e980
extern "C" __declspec(naked) void asm_00c7e980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6783b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xef6dac }
	__asm { mov al, byte ptr [g_012fc97f] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00c7e9cd }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { movzx eax, al }
	__asm { push dword ptr [edi + 0x30] }
	__asm { push edi }
	__asm { push 0xef6e7c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00c7e9cd: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { pop esi }
	__asm { je L_00c7e9f1 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7e9f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c7f940
extern "C" __declspec(naked) void asm_00c7f940()
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
	__asm { jne L_00c7f968 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c7f968: }
	__asm { cmp eax, 0x2aaaaaaa }
	__asm { jbe L_00c7f97a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00c7f97a: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*2] }
	__asm { add edi, edi }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c7f99f }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c7f99f: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_012a58ac[];
extern "C" char g_012a58b0[];
extern "C" char g_012a58b4[];
// FUNCTION: ROBLOXSTUDIO 0x00c816e0
extern "C" __declspec(naked) void asm_00c816e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp word ptr [esi + 8], 0 }
	__asm { jbe L_00c8172b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012a58ac] }
	__asm { movsx edx, word ptr [eax] }
	__asm { movsx edi, word ptr [eax + 2] }
	__asm { movsx eax, word ptr [eax + 4] }
	__asm { sar edx, cl }
	__asm { mov ecx, dword ptr [g_012a58b0] }
	__asm { sar edi, cl }
	__asm { mov ecx, dword ptr [g_012a58b4] }
	__asm { sar eax, cl }
	__asm { cmp edx, dword ptr [esi + 0xc] }
	__asm { jne L_00c8172b }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { jne L_00c8172b }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jne L_00c8172b }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8172b: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
// FUNCTION: ROBLOXSTUDIO 0x00c81910
extern "C" __declspec(naked) void asm_00c81910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, 1 }
	__asm { jne L_00c81952 }
	__asm { cmp dword ptr [esi + 0x48], 0 }
	__asm { je L_00c819a1 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c81952: }
	__asm { cmp eax, 2 }
	__asm { jne L_00c81990 }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { je L_00c819a1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c81990: }
	__asm { cmp eax, 3 }
	__asm { jne L_00c819a1 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { L_00c819a1: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c82890
extern "C" __declspec(naked) void asm_00c82890()
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
	__asm { L_00c828a0: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00c828ab }
	__asm { add esi, -0x30 }
	__asm { jmp L_00c828ad }
	__asm { L_00c828ab: }
	__asm { xor esi, esi }
	__asm { L_00c828ad: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00c828d7 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00c828d7: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00c828a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00421e70();
extern "C" void fn_006b9810();
extern "C" void fn_006c0860();
extern "C" void fn_006c0d90();
// FUNCTION: ROBLOXSTUDIO 0x00c84760
extern "C" __declspec(naked) void asm_00c84760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x20f0] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea ecx, [esi + 0x210] }
	__asm { call fn_006b9810 }
	__asm { test eax, eax }
	__asm { jne L_00c847be }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00421e70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006c0860 }
	__asm { L_00c847be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c84c30();
// FUNCTION: ROBLOXSTUDIO 0x00c84a80
extern "C" __declspec(naked) void asm_00c84a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00c84a98 }
	__asm { lea ecx, [eax + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00c84a98 }
	__asm { add ecx, -0x14 }
	__asm { jmp L_00c84a9a }
	__asm { L_00c84a98: }
	__asm { xor ecx, ecx }
	__asm { L_00c84a9a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00c84abc }
	__asm { add ecx, -0x14 }
	__asm { push ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00c84c30 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c84abc: }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00c84c30 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c84ad0
extern "C" __declspec(naked) void asm_00c84ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp edx, eax }
	__asm { jne L_00c84af6 }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jne L_00c84af6 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c84af6: }
	__asm { cmp edx, esi }
	__asm { je L_00c84b1f }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov ecx, edx }
	__asm { cmp esi, ebx }
	__asm { je L_00c84b1b }
	__asm { L_00c84b04: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { add esi, 8 }
	__asm { add ecx, 8 }
	__asm { cmp esi, ebx }
	__asm { jne L_00c84b04 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00c84b1b: }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop ebx }
	__asm { L_00c84b1f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0068b160();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c853c0
extern "C" __declspec(naked) void asm_00c853c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test bl, bl }
	__asm { je L_00c85421 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0068b160 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00c85421 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c85410 }
	__asm { push 0x108 }
	__asm { push 0xef66cc }
	__asm { push 0xef67e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c85421 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00c85410: }
	__asm { movzx eax, bl }
	__asm { push 0xef6800 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c85421: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ecx], esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01313d04[];
extern "C" char g_01313d08[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00c85590
extern "C" __declspec(naked) void asm_00c85590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd674ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc74fb0 }
	__asm { push 0x1313cb4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01313d08] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c855f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313d08], eax }
	__asm { push 0xef6660 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313d04], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c855f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01313d04] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c85b50
extern "C" __declspec(naked) void asm_00c85b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test dl, dl }
	__asm { je L_00c85baa }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { cmp dword ptr [eax + 0xfc], 0 }
	__asm { jle L_00c85baa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c85b99 }
	__asm { push 0xf30 }
	__asm { push 0xef7818 }
	__asm { push 0xef9760 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c85baa }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00c85b99: }
	__asm { movzx eax, dl }
	__asm { push 0xef9788 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c85baa: }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov ecx, dword ptr [eax + 0xfc] }
	__asm { add ecx, dword ptr [esi + 0x1dc0] }
	__asm { lea eax, [ebp - 4] }
	__asm { test ecx, ecx }
	__asm { cmovle eax, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1045c[];
extern "C" char g_00e104d8[];
// FUNCTION: ROBLOXSTUDIO 0x00c86270
extern "C" __declspec(naked) void asm_00c86270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { je L_00c862d8 }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edx }
	__asm { call dword ptr [g_00e1045c] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c862ac }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00c862ac }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00c862ac: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00c862d8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e104d8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c862d8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00c862d8 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00c862d8: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c86360
extern "C" __declspec(naked) void asm_00c86360()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov edx, dword ptr [ecx + 0x48] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x4c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { sub esi, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ecx + 0x48] }
	__asm { test eax, eax }
	__asm { je L_00c863ba }
	__asm { mov edx, dword ptr [ecx + 0x50] }
	__asm { test edx, edx }
	__asm { je L_00c863ba }
	__asm { cmp eax, edx }
	__asm { jne L_00c863ba }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00c863ba }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { sub esi, edx }
	__asm { sub dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { add dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00c863ba: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c86400
extern "C" __declspec(naked) void asm_00c86400()
{
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov edx, dword ptr [ecx + 0x50] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x54] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { sub esi, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ecx + 0x48] }
	__asm { test esi, esi }
	__asm { je L_00c8645a }
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { test eax, eax }
	__asm { je L_00c8645a }
	__asm { cmp esi, eax }
	__asm { jne L_00c8645a }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov edx, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { je L_00c8645a }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { sub edx, esi }
	__asm { sub dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { add dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00c8645a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_004b2270();
// FUNCTION: ROBLOXSTUDIO 0x00c86b40
extern "C" __declspec(naked) void asm_00c86b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x2144] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { movzx eax, byte ptr [edi + 0x215c] }
	__asm { lea ecx, [edi + 0x215c] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_00c86b6a }
	__asm { inc eax }
	__asm { jmp L_00c86b6c }
	__asm { L_00c86b6a: }
	__asm { xor eax, eax }
	__asm { L_00c86b6c: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { shr edx, 3 }
	__asm { add edx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_004b2270 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00c87460
extern "C" __declspec(naked) void asm_00c87460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c874a8 }
	__asm { cmp eax, 1 }
	__asm { je L_00c874a8 }
	__asm { cmp eax, 2 }
	__asm { je L_00c874c8 }
	__asm { cmp eax, 3 }
	__asm { jne L_00c87497 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12a5c08 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c87497: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5c08 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c874a8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00c874c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00c874c8: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00c874d0
extern "C" __declspec(naked) void asm_00c874d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c87518 }
	__asm { cmp eax, 1 }
	__asm { je L_00c87518 }
	__asm { cmp eax, 2 }
	__asm { je L_00c87538 }
	__asm { cmp eax, 3 }
	__asm { jne L_00c87507 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12a5b50 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c87507: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5b50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c87518: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00c87538 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00c87538: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00c87540
extern "C" __declspec(naked) void asm_00c87540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c87588 }
	__asm { cmp eax, 1 }
	__asm { je L_00c87588 }
	__asm { cmp eax, 2 }
	__asm { je L_00c875a8 }
	__asm { cmp eax, 3 }
	__asm { jne L_00c87577 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12a5cf0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c87577: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5cf0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c87588: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00c875a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00c875a8: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00c898c0();
// FUNCTION: ROBLOXSTUDIO 0x00c89b00
extern "C" __declspec(naked) void asm_00c89b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd68d18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { cmp dword ptr [ecx + 0x48], 0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jne L_00c89b5a }
	__asm { cmp dword ptr [ecx + 0x50], 0 }
	__asm { jne L_00c89b5a }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c898c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00c89b5a: }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00b894c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c8acb0
extern "C" __declspec(naked) void asm_00c8acb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00c8acc6 }
	__asm { push 1 }
	__asm { call fn_00b894c0 }
	__asm { L_00c8acc6: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_00c8ad02 }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00c8acfc }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c8acfc: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_00c8ad02: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [edi + eax] }
	__asm { pop edi }
	__asm { test edx, edx }
	__asm { je L_00c8ad26 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00c8ad26: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
extern "C" void fn_00c6c7a0();
// FUNCTION: ROBLOXSTUDIO 0x00c8cfe0
extern "C" __declspec(naked) void asm_00c8cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c7a0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { sub eax, edx }
	__asm { sar eax, 3 }
	__asm { cmp eax, ecx }
	__asm { ja L_00c8d01c }
	__asm { push 0x1017a80 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_00c8d01c: }
	__asm { mov eax, dword ptr [edx + ecx*8] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { je L_00c8d054 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_00c8d054 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, edx }
	__asm { sar eax, 3 }
	__asm { cmp eax, ecx }
	__asm { ja L_00c8d047 }
	__asm { push 0x1017a80 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_00c8d047: }
	__asm { cmp byte ptr [edx + ecx*8 + 4], 0 }
	__asm { je L_00c8d054 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00c8d054: }
	__asm { pop edi }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0068a890();
// FUNCTION: ROBLOXSTUDIO 0x00c8d400
extern "C" __declspec(naked) void asm_00c8d400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_0068a890 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00c8d461 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00c8d420: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00c8d42b }
	__asm { add esi, -8 }
	__asm { jmp L_00c8d42d }
	__asm { L_00c8d42b: }
	__asm { xor esi, esi }
	__asm { L_00c8d42d: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00c8d448 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { jmp L_00c8d45a }
	__asm { L_00c8d448: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea edx, [esi + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00c8d45a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00c8d420 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00c8d461: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00532480();
extern "C" void fn_007cd560();
extern "C" void fn_00814010();
extern "C" void fn_00c2feb0();
// FUNCTION: ROBLOXSTUDIO 0x00c8d470
extern "C" __declspec(naked) void asm_00c8d470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x20d4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { cmp eax, ecx }
	__asm { je L_00c8d49f }
	__asm { test ecx, ecx }
	__asm { je L_00c8d492 }
	__asm { push eax }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { jne L_00c8d49f }
	__asm { L_00c8d492: }
	__asm { push esi }
	__asm { call fn_00c2feb0 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jne L_00c8d4a6 }
	__asm { L_00c8d49f: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8d4a6: }
	__asm { push edi }
	__asm { lea edi, [esi + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c8d4d1 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00814010 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c8d4d1 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00c8d4d1 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8d4d1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00c5e000();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00c8d700
extern "C" __declspec(naked) void asm_00c8d700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00c8d734 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8d734: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00c8d76a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00c8d76a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c5e000 }
	__asm { L_00c8d76a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a890();
extern "C" void fn_00c876a0();
extern "C" void fn_00c8d400();
// FUNCTION: ROBLOXSTUDIO 0x00c8d780
extern "C" __declspec(naked) void asm_00c8d780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00c8d7b4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_0068a890 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8d7b4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00c8d7ea }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00c8d7ea }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c8d400 }
	__asm { L_00c8d7ea: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a29bb0();
// FUNCTION: ROBLOXSTUDIO 0x00c8e070
extern "C" __declspec(naked) void asm_00c8e070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { adc ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c8e092 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c8e092: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { push dword ptr [esi + 0x80] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29bb0 }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00c8e0f0
extern "C" __declspec(naked) void asm_00c8e0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { adc ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00c8e112 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c8e112: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29be0 }
}

extern "C" void fn_00403540();
extern "C" void fn_00c7e4b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c8f010
extern "C" __declspec(naked) void asm_00c8f010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x45df], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c8f073 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [esi + 0x45df], 0 }
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
	__asm { lea ecx, [esi + 0x1f90] }
	__asm { call fn_00c7e4b0 }
	__asm { L_00c8f073: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00c8f084 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c8f084: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" void fn_008475a0();
extern "C" void fn_00849030();
extern "C" void fn_00c8ebd0();
// FUNCTION: ROBLOXSTUDIO 0x00c90d30
extern "C" __declspec(naked) void asm_00c90d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69328 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xef70b0 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { mov eax, dword ptr [esi + 0x208] }
	__asm { test eax, eax }
	__asm { je L_00c90da1 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_008475a0 }
	__asm { mov ecx, dword ptr [esi + 0x208] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c8ebd0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00849030 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c90da1: }
	__asm { call dword ptr [g_00e13084] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00c91670();
// FUNCTION: ROBLOXSTUDIO 0x00c91420
extern "C" __declspec(naked) void asm_00c91420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69420 }
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
	__asm { call fn_00c91670 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_00c9145d }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c9145d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xc9145d }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00c91670();
// FUNCTION: ROBLOXSTUDIO 0x00c91570
extern "C" __declspec(naked) void asm_00c91570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69440 }
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
	__asm { call fn_00c91670 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_00c915ad }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00c915ad: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xc915c6 }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2d350();
extern "C" void fn_00c86360();
// FUNCTION: ROBLOXSTUDIO 0x00c91e40
extern "C" __declspec(naked) void asm_00c91e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x48], 0 }
	__asm { jne L_00c91e7d }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d350 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00c91e7d: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00c91e8a }
	__asm { call fn_00c86360 }
	__asm { L_00c91e8a: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { pop esi }
	__asm { je L_00c91ea6 }
	__asm { movzx eax, byte ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c91ea6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f730();
// FUNCTION: ROBLOXSTUDIO 0x00c923b0
extern "C" __declspec(naked) void asm_00c923b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { xor ecx, ecx }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test edx, edx }
	__asm { jl L_00c9240a }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { jg L_00c923d1 }
	__asm { test eax, eax }
	__asm { je L_00c9240a }
	__asm { L_00c923d1: }
	__asm { push ebx }
	__asm { push edi }
	__asm { L_00c923d3: }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub edi, esi }
	__asm { mov ebx, edx }
	__asm { sbb ebx, ecx }
	__asm { add eax, esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_0040f730 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esi, edi }
	__asm { adc ecx, ebx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp ecx, edx }
	__asm { jl L_00c923d3 }
	__asm { jg L_00c92408 }
	__asm { cmp esi, eax }
	__asm { jb L_00c923d3 }
	__asm { L_00c92408: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c9240a: }
	__asm { mov eax, esi }
	__asm { mov edx, ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
