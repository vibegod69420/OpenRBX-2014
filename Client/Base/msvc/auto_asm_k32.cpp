// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00a26140();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a26710
extern "C" __declspec(naked) void asm_00a26710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46858 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push 0x13 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xea5a1c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { push 0x11 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xea5a30 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a26140 }
	__asm { add esp, 0x64 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a267fa }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a267fa: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00a2681d }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2681d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00986a00();
extern "C" void fn_00a26140();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a26830
extern "C" __declspec(naked) void asm_00a26830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd468a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { cmovae ecx, dword ptr [ebp + 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push ecx }
	__asm { push 0xea5a44 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00986a00 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { push 0xe }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xea5a58 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a26140 }
	__asm { add esp, 0x64 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a26914 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a26914: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_00a26937 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a26937: }
	__asm { cmp dword ptr [ebp + 0x50], 0x10 }
	__asm { mov dword ptr [ebp + 0x38], 0xf }
	__asm { mov dword ptr [ebp + 0x34], 0 }
	__asm { mov byte ptr [ebp + 0x24], 0 }
	__asm { jb L_00a2695a }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2695a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
extern "C" void fn_00d02320();
extern "C" void fn_00d026e0();
// FUNCTION: ROBLOXSTUDIO 0x00a26e30
extern "C" __declspec(naked) void asm_00a26e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46900 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00d02320 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a26e65 }
	__asm { lea eax, [esi + 0x18] }
	__asm { jmp L_00a26e67 }
	__asm { L_00a26e65: }
	__asm { xor eax, eax }
	__asm { L_00a26e67: }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00d026e0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a26ea0 }
	__asm { cmp edi, -1 }
	__asm { ja L_00a26e9a }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a26ea0 }
	__asm { L_00a26e9a: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a26ea0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], edx }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
extern "C" void fn_00d02320();
extern "C" void fn_00d026e0();
// FUNCTION: ROBLOXSTUDIO 0x00a26ed0
extern "C" __declspec(naked) void asm_00a26ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46920 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00d02320 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_00d026e0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a26f3b }
	__asm { cmp edi, -1 }
	__asm { ja L_00a26f35 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a26f3b }
	__asm { L_00a26f35: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a26f3b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a27580();
extern "C" void fn_00a29270();
extern "C" void fn_00a2d870();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27320
extern "C" __declspec(naked) void asm_00a27320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46970 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push ebx }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a27580 }
	__asm { cmp ebx, 2 }
	__asm { jne L_00a273d9 }
	__asm { test byte ptr [esi + 0x3c], 1 }
	__asm { je L_00a273d9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { sar eax, 8 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { sar eax, 0x10 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { sar ebx, 0x18 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { sar eax, 8 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { sar eax, 0x10 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { sar ebx, 0x18 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a29270 }
	__asm { add esp, 8 }
	__asm { L_00a273d9: }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { lea eax, [esi + 0x20] }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_00a273eb }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a273eb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00a2d870 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00f10db8[];
extern "C" void fn_00a276b0();
extern "C" void fn_00a29c90();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2bb10();
extern "C" void fn_00a2bb60();
// FUNCTION: ROBLOXSTUDIO 0x00a27430
extern "C" __declspec(naked) void asm_00a27430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd469a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a276b0 }
	__asm { cmp dword ptr [ebp + 0xc], 2 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jne L_00a27531 }
	__asm { mov eax, dword ptr [esi + 0x80] }
	__asm { cmp eax, 1 }
	__asm { je L_00a274ec }
	__asm { cmp eax, 2 }
	__asm { je L_00a274ec }
	__asm { cmp eax, 3 }
	__asm { jne L_00a274a5 }
	__asm { push 5 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00a2bb60 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_00a29c90 }
	__asm { L_00a274a5: }
	__asm { cmp eax, 4 }
	__asm { jne L_00a27531 }
	__asm { cmp dword ptr [esi + 0x60], 3 }
	__asm { je L_00a274cb }
	__asm { push 5 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00a2bb60 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { call fn_00a29c90 }
	__asm { L_00a274cb: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { cmp ecx, dword ptr [eax + 8] }
	__asm { je L_00a27531 }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_00a2bb60 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call fn_00a29c90 }
	__asm { L_00a274ec: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 0xea5ac8 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [g_00f10db8] }
	__asm { mov dword ptr [ebp - 0x38], 0xea5ac0 }
	__asm { mov dword ptr [ebp - 0x24], 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00a29c90 }
	__asm { L_00a27531: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x80], 1 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [eax + 0x80], 1 }
	__asm { call fn_00a2bb10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a29c90 }
}

extern "C" void fn_00a27320();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27800
extern "C" __declspec(naked) void asm_00a27800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd469e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00a27320 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_00a27320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a27320 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa27880 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e1027c[];
extern "C" char g_00e104c8[];
extern "C" void fn_00a31cf0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a27920
extern "C" __declspec(naked) void asm_00a27920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { xor ebx, ebx }
	__asm { test esi, esi }
	__asm { je L_00a27960 }
	__asm { cmp esi, -1 }
	__asm { ja L_00a2795a }
	__asm { push esi }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { jne L_00a27960 }
	__asm { L_00a2795a: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a27960: }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { push edi }
	__asm { L_00a27984: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edx }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e104c8] }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { mov ecx, esi }
	__asm { or ecx, edi }
	__asm { je L_00a279cc }
	__asm { mov ecx, esi }
	__asm { and ecx, edi }
	__asm { cmp ecx, -1 }
	__asm { je L_00a279cc }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00a31cf0 }
	__asm { add dword ptr [ebp - 0x10], esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { adc dword ptr [ebp - 0x14], edi }
	__asm { jmp L_00a27984 }
	__asm { L_00a279cc: }
	__asm { pop edi }
	__asm { test ebx, ebx }
	__asm { je L_00a279da }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a279da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e1027c[];
extern "C" char g_00e104c8[];
extern "C" void fn_00c923b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a279f0
extern "C" __declspec(naked) void asm_00a279f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { xor ebx, ebx }
	__asm { test esi, esi }
	__asm { je L_00a27a30 }
	__asm { cmp esi, -1 }
	__asm { ja L_00a27a2a }
	__asm { push esi }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { jne L_00a27a30 }
	__asm { L_00a27a2a: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a27a30: }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { push edi }
	__asm { L_00a27a54: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e104c8] }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { mov ecx, esi }
	__asm { or ecx, edi }
	__asm { je L_00a27aa0 }
	__asm { mov ecx, esi }
	__asm { and ecx, edi }
	__asm { cmp ecx, -1 }
	__asm { je L_00a27aa0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00c923b0 }
	__asm { add dword ptr [ebp - 0x10], esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { adc dword ptr [ebp - 0x14], edi }
	__asm { jmp L_00a27a54 }
	__asm { L_00a27aa0: }
	__asm { pop edi }
	__asm { test ebx, ebx }
	__asm { je L_00a27aae }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a27aae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a27900();
extern "C" void fn_00a27d20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27dc0
extern "C" __declspec(naked) void asm_00a27dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { call fn_00a27d20 }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a27900 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a27900 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa27e4a }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00a27e60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27f00
extern "C" __declspec(naked) void asm_00a27f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { call fn_00a27e60 }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa27f8a }
	__asm { ret }
}

extern "C" void fn_00a2cb30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27fa0
extern "C" __declspec(naked) void asm_00a27fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp edi, 1 }
	__asm { jne L_00a27fe6 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a27fe6 }
	__asm { or eax, 2 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a27fe6: }
	__asm { cmp edi, 2 }
	__asm { jne L_00a28000 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 4 }
	__asm { jne L_00a28000 }
	__asm { or eax, 4 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a28000: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp eax, 1 }
	__asm { jne L_00a28045 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a2805e }
	__asm { or eax, 2 }
	__asm { push 1 }
	__asm { jmp L_00a28056 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a2cb30 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2802f }
	__asm { ret }
	__asm { L_00a28045: }
	__asm { cmp eax, 2 }
	__asm { jne L_00a2805e }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test al, 4 }
	__asm { jne L_00a2805e }
	__asm { or eax, 4 }
	__asm { push 2 }
	__asm { L_00a28056: }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a2805e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a285b0
extern "C" __declspec(naked) void asm_00a285b0()
{
	__asm { L_00a285b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46b10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { jne L_00a285f2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a285f2: }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, ecx }
	__asm { cmp ecx, 1 }
	__asm { jne L_00a2861f }
	__asm { mov edx, dword ptr [esi + 0x38] }
	__asm { test dl, 2 }
	__asm { jne L_00a28640 }
	__asm { mov eax, dword ptr [esi] }
	__asm { or edx, 2 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x38], edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00a2861f: }
	__asm { cmp edi, 2 }
	__asm { jne L_00a28640 }
	__asm { mov edx, dword ptr [esi + 0x38] }
	__asm { test dl, 4 }
	__asm { jne L_00a28640 }
	__asm { mov eax, dword ptr [esi] }
	__asm { or edx, 4 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x38], edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00a28640: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call L_00a285b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call L_00a285b0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa28692 }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a286b0
extern "C" __declspec(naked) void asm_00a286b0()
{
	__asm { L_00a286b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46b20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { jne L_00a286f2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a286f2: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp edi, 2 }
	__asm { jne L_00a2870f }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a2870f: }
	__asm { cmp edi, 1 }
	__asm { jne L_00a28729 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a28743 }
	__asm { or eax, 2 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a28729: }
	__asm { cmp edi, 2 }
	__asm { jne L_00a28743 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 4 }
	__asm { jne L_00a28743 }
	__asm { or eax, 4 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a28743: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call L_00a286b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call L_00a286b0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2879a }
	__asm { ret }
}

extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a287b0
extern "C" __declspec(naked) void asm_00a287b0()
{
	__asm { L_00a287b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46b30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp ecx, dword ptr [ebp + 0x10] }
	__asm { jne L_00a287f2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a287f2: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov edi, edx }
	__asm { cmp edx, 1 }
	__asm { jne L_00a28824 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a28844 }
	__asm { or eax, 2 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00a28824: }
	__asm { cmp edi, 2 }
	__asm { jne L_00a28844 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 4 }
	__asm { jne L_00a28844 }
	__asm { or eax, 4 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00a28844: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call L_00a287b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call L_00a287b0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa28898 }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a288b0
extern "C" __declspec(naked) void asm_00a288b0()
{
	__asm { L_00a288b0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46b40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { jne L_00a288f2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a288f2: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { cmp edi, 2 }
	__asm { jne L_00a28912 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a28912: }
	__asm { cmp edi, 1 }
	__asm { jne L_00a2892c }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a28946 }
	__asm { or eax, 2 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a2892c: }
	__asm { cmp edi, 2 }
	__asm { jne L_00a28946 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test al, 4 }
	__asm { jne L_00a28946 }
	__asm { or eax, 4 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a28946: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call L_00a288b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call L_00a288b0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2899f }
	__asm { ret }
}

extern "C" char g_00e10288[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00a289c0
extern "C" __declspec(naked) void asm_00a289c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { sub eax, edi }
	__asm { cdq }
	__asm { mov esi, edx }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call dword ptr [g_00e10288] }
	__asm { mov edi, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, esi }
	__asm { jg L_00a28a23 }
	__asm { jl L_00a289fa }
	__asm { cmp edi, ebx }
	__asm { jae L_00a28a23 }
	__asm { L_00a289fa: }
	__asm { test eax, eax }
	__asm { jl L_00a28a23 }
	__asm { jg L_00a28a04 }
	__asm { test edi, edi }
	__asm { je L_00a28a23 }
	__asm { L_00a28a04: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, edi }
	__asm { je L_00a28a26 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a28a26 }
	__asm { L_00a28a23: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00a28a26: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { add eax, ebx }
	__asm { or edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { lea eax, [ecx + edx] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { je L_00a28a53 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a28a53: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10288[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00a28a60
extern "C" __declspec(naked) void asm_00a28a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { sub eax, edi }
	__asm { cdq }
	__asm { mov esi, edx }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call dword ptr [g_00e10288] }
	__asm { mov edi, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, esi }
	__asm { jg L_00a28ac3 }
	__asm { jl L_00a28a9a }
	__asm { cmp edi, ebx }
	__asm { jae L_00a28ac3 }
	__asm { L_00a28a9a: }
	__asm { test eax, eax }
	__asm { jl L_00a28ac3 }
	__asm { jg L_00a28aa4 }
	__asm { test edi, edi }
	__asm { je L_00a28ac3 }
	__asm { L_00a28aa4: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, edi }
	__asm { je L_00a28ac6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a28ac6 }
	__asm { L_00a28ac3: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00a28ac6: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { add eax, ebx }
	__asm { or edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { lea eax, [ecx + edx] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { je L_00a28af3 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a28af3: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00a31c80();
// FUNCTION: ROBLOXSTUDIO 0x00a28b00
extern "C" __declspec(naked) void asm_00a28b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { sub eax, edi }
	__asm { cdq }
	__asm { mov esi, edx }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a31c80 }
	__asm { mov edi, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, esi }
	__asm { jg L_00a28b62 }
	__asm { jl L_00a28b39 }
	__asm { cmp edi, ebx }
	__asm { jae L_00a28b62 }
	__asm { L_00a28b39: }
	__asm { test eax, eax }
	__asm { jl L_00a28b62 }
	__asm { jg L_00a28b43 }
	__asm { test edi, edi }
	__asm { je L_00a28b62 }
	__asm { L_00a28b43: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, edi }
	__asm { je L_00a28b65 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a28b65 }
	__asm { L_00a28b62: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00a28b65: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { add eax, ebx }
	__asm { or edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { lea eax, [ecx + edx] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { je L_00a28b92 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a28b92: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00a31c80();
// FUNCTION: ROBLOXSTUDIO 0x00a28ba0
extern "C" __declspec(naked) void asm_00a28ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { sub eax, edi }
	__asm { cdq }
	__asm { mov esi, edx }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a31c80 }
	__asm { mov edi, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, esi }
	__asm { jg L_00a28c02 }
	__asm { jl L_00a28bd9 }
	__asm { cmp edi, ebx }
	__asm { jae L_00a28c02 }
	__asm { L_00a28bd9: }
	__asm { test eax, eax }
	__asm { jl L_00a28c02 }
	__asm { jg L_00a28be3 }
	__asm { test edi, edi }
	__asm { je L_00a28c02 }
	__asm { L_00a28be3: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, edi }
	__asm { je L_00a28c05 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00a28c05 }
	__asm { L_00a28c02: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00a28c05: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { add eax, ebx }
	__asm { or edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { lea eax, [ecx + edx] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { je L_00a28c32 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a28c32: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00f10dbc[];
extern "C" char g_00f10dd8[];
extern "C" void fn_00a289c0();
extern "C" void fn_00d02510();
extern "C" void fn_00d02580();
extern "C" void fn_00d025b0();
extern "C" void fn_00d028a0();
// FUNCTION: ROBLOXSTUDIO 0x00a29fd0
extern "C" __declspec(naked) void asm_00a29fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { test al, 2 }
	__asm { jne L_00a29ffe }
	__asm { or eax, 2 }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [edx + 0x28], eax }
	__asm { add eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [edx + 0x2c], eax }
	__asm { L_00a29ffe: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { add eax, edi }
	__asm { add esi, 0x18 }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { cmp edi, eax }
	__asm { je L_00a2a0a1 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00a2a022: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jne L_00a2a03a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a289c0 }
	__asm { test al, al }
	__asm { je L_00a2a09e }
	__asm { L_00a2a03a: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [ebx] }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02580 }
	__asm { push dword ptr [g_00f10dd8] }
	__asm { mov ecx, edi }
	__asm { call fn_00d028a0 }
	__asm { push 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02510 }
	__asm { push esi }
	__asm { call fn_00d025b0 }
	__asm { add esp, 4 }
	__asm { cmp esi, dword ptr [g_00f10dbc] }
	__asm { je L_00a2a091 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { je L_00a2a09e }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { jmp L_00a2a022 }
	__asm { L_00a2a091: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a289c0 }
	__asm { L_00a2a09e: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00a2a0a1: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { sub eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { cdq }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00f10dbc[];
extern "C" char g_00f10ddc[];
extern "C" void fn_00a28a60();
extern "C" void fn_00d02510();
extern "C" void fn_00d02580();
extern "C" void fn_00d025b0();
extern "C" void fn_00d028c0();
// FUNCTION: ROBLOXSTUDIO 0x00a2a0b0
extern "C" __declspec(naked) void asm_00a2a0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a2a0de }
	__asm { or eax, 2 }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { add eax, dword ptr [edx + 0x28] }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { L_00a2a0de: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { add eax, edi }
	__asm { add esi, 0x20 }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { cmp edi, eax }
	__asm { je L_00a2a18b }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00a2a102: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jne L_00a2a11a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28a60 }
	__asm { test al, al }
	__asm { je L_00a2a188 }
	__asm { L_00a2a11a: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [ebx] }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02580 }
	__asm { push dword ptr [g_00f10ddc] }
	__asm { mov ecx, edi }
	__asm { call fn_00d028c0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02510 }
	__asm { push esi }
	__asm { call fn_00d025b0 }
	__asm { xor eax, eax }
	__asm { add esp, 4 }
	__asm { cmp esi, dword ptr [g_00f10dbc] }
	__asm { sete al }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { test al, al }
	__asm { jne L_00a2a17b }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { je L_00a2a188 }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { jmp L_00a2a102 }
	__asm { L_00a2a17b: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28a60 }
	__asm { L_00a2a188: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00a2a18b: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { sub eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { cdq }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_009310b0();
// FUNCTION: ROBLOXSTUDIO 0x00a2a1a0
extern "C" __declspec(naked) void asm_00a2a1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp + 8], bl }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a2a1ba }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_00a2a1bc }
	__asm { L_00a2a1ba: }
	__asm { mov edx, ecx }
	__asm { L_00a2a1bc: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, edx }
	__asm { lea edx, [ebp + 9] }
	__asm { push edx }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_009310b0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, ebx }
	__asm { sar eax, 8 }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a2a1e4 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_00a2a1e6 }
	__asm { L_00a2a1e4: }
	__asm { mov edx, ecx }
	__asm { L_00a2a1e6: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, edx }
	__asm { lea edx, [ebp + 9] }
	__asm { push edx }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_009310b0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, ebx }
	__asm { sar eax, 0x10 }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a2a20e }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_00a2a210 }
	__asm { L_00a2a20e: }
	__asm { mov edx, ecx }
	__asm { L_00a2a210: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, edx }
	__asm { lea edx, [ebp + 9] }
	__asm { push edx }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_009310b0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sar ebx, 0x18 }
	__asm { mov byte ptr [ebp + 8], bl }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00a2a238 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_00a2a23a }
	__asm { L_00a2a238: }
	__asm { mov edx, ecx }
	__asm { L_00a2a23a: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, edx }
	__asm { lea edx, [ebp + 9] }
	__asm { push edx }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_009310b0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a26d00();
extern "C" void fn_00a26ed0();
extern "C" void fn_00a2f0f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00d02c40();
extern "C" void fn_00d02c60();
// FUNCTION: ROBLOXSTUDIO 0x00a2a6c0
extern "C" __declspec(naked) void asm_00a2a6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46d09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a2f0f0 }
	__asm { mov edi, eax }
	__asm { push 0x40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a2a719 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00a26ed0 }
	__asm { jmp L_00a2a71b }
	__asm { L_00a2a719: }
	__asm { xor eax, eax }
	__asm { L_00a2a71b: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a26d00 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_00a2a738 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2a738: }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { jb L_00a2a75b }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2a75b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 0x2c], 0xf }
	__asm { mov dword ptr [ecx + 0x28], 0 }
	__asm { mov byte ptr [ecx + 0x18], 0 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00d02c60 }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00d02c40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x80], 1 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00a2a7d0
extern "C" __declspec(naked) void asm_00a2a7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46d4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2a81c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2a81c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84508 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2a862 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2a862: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xea648c }
	__asm { mov dword ptr [esi], 0xea6498 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xea64a0 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00a2a8d0
extern "C" __declspec(naked) void asm_00a2a8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46d4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2a91c }
	__asm { mov dword ptr [edi + 0x28], 0x1016498 }
	__asm { mov dword ptr [edi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2a91c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xe84508 }
	__asm { lea ebx, [esi + 0x14] }
	__asm { lea esi, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2a962 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2a962: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi], 0xea648c }
	__asm { mov dword ptr [esi], 0xea6498 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x28], 0xea64a0 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x24], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2a9d0
extern "C" __declspec(naked) void asm_00a2a9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38784 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2aa1b }
	__asm { mov dword ptr [esi + 0x28], 0x1016498 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2aa1b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84508 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2aa5c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2aa5c: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xea648c }
	__asm { mov dword ptr [esi + 0x14], 0xea6498 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x28], 0xea64a0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00a2aab0
extern "C" __declspec(naked) void asm_00a2aab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46d8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2aafc }
	__asm { mov dword ptr [edi + 0x30], 0xea6514 }
	__asm { mov dword ptr [edi + 0x38], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2aafc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xea5ac0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2ab4e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2ab4e: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [edi], 0xea64f4 }
	__asm { mov dword ptr [esi], 0xea6500 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x30], 0xea6508 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x2c], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00a2abb0
extern "C" __declspec(naked) void asm_00a2abb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46d8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2abfc }
	__asm { mov dword ptr [edi + 0x30], 0xea6514 }
	__asm { mov dword ptr [edi + 0x38], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2abfc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xea5ac0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2ac4e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2ac4e: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [edi], 0xea64f4 }
	__asm { mov dword ptr [esi], 0xea6500 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x30], 0xea6508 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x2c], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2acb0
extern "C" __declspec(naked) void asm_00a2acb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46dc4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2acfb }
	__asm { mov dword ptr [esi + 0x30], 0xea6514 }
	__asm { mov dword ptr [esi + 0x38], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2acfb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xea5ac0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2ad48 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2ad48: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esi], 0xea64f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xea6500 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x30], 0xea6508 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x2c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00a2ada0
extern "C" __declspec(naked) void asm_00a2ada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46dfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2adec }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2adec: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a2ae0e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00a2ae10 }
	__asm { L_00a2ae0e: }
	__asm { xor edx, edx }
	__asm { L_00a2ae10: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2ae2e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00a2ae2e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xea6454 }
	__asm { mov dword ptr [ebx], 0xea6460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xea6468 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_00a2ae77 }
	__asm { add edi, 0xc }
	__asm { jmp L_00a2ae79 }
	__asm { L_00a2ae77: }
	__asm { xor edi, edi }
	__asm { L_00a2ae79: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00a2aea0
extern "C" __declspec(naked) void asm_00a2aea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46dfc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2aeec }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2aeec: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a2af0e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_00a2af10 }
	__asm { L_00a2af0e: }
	__asm { xor edx, edx }
	__asm { L_00a2af10: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2af2e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00a2af2e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xea6454 }
	__asm { mov dword ptr [ebx], 0xea6460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xea6468 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_00a2af77 }
	__asm { add edi, 0xc }
	__asm { jmp L_00a2af79 }
	__asm { L_00a2af77: }
	__asm { xor edi, edi }
	__asm { L_00a2af79: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2afa0
extern "C" __declspec(naked) void asm_00a2afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a54 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2afeb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2afeb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a2b00d }
	__asm { add edi, 0xc }
	__asm { jmp L_00a2b00f }
	__asm { L_00a2b00d: }
	__asm { xor edi, edi }
	__asm { L_00a2b00f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2b025 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2b025: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xea6454 }
	__asm { mov dword ptr [esi + 0xc], 0xea6460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xea6468 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2b120
extern "C" __declspec(naked) void asm_00a2b120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274b8 }
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
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xea5ac0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2b18b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2b18b: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xea64e0 }
	__asm { mov dword ptr [esi + 0x1c], 0xea64ec }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e1037c[];
extern "C" void fn_00a26970();
extern "C" void fn_00a2b9b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a2b3e0
extern "C" __declspec(naked) void asm_00a2b3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46eac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00a2b426 }
	__asm { lea ecx, [edi + 0x28] }
	__asm { mov dword ptr [edi + 8], 0xea6018 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2b426: }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi], 0xea5ff4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi], 0xea6000 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x30 }
	__asm { mov dword ptr [eax + edi + 8], 0xea600c }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea esi, [edi + 0x18] }
	__asm { lea eax, [ecx - 0x20] }
	__asm { mov dword ptr [ecx + edi + 4], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00a2b48f }
	__asm { mov ecx, eax }
	__asm { call fn_00a2b9b0 }
	__asm { jmp L_00a2b491 }
	__asm { L_00a2b48f: }
	__asm { xor eax, eax }
	__asm { L_00a2b491: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a26970 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e10394[];
extern "C" void fn_00a26aa0();
extern "C" void fn_00a2b9b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a2b4c0
extern "C" __declspec(naked) void asm_00a2b4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46efc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00a2b506 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov dword ptr [edi + 8], 0xef885c }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2b506: }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi], 0xea5dd4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi], 0xea5de0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x30 }
	__asm { mov dword ptr [eax + edi + 8], 0xea5dec }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea esi, [edi + 0xc] }
	__asm { lea eax, [ecx - 0x18] }
	__asm { mov dword ptr [ecx + edi + 4], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00a2b56f }
	__asm { mov ecx, eax }
	__asm { call fn_00a2b9b0 }
	__asm { jmp L_00a2b571 }
	__asm { L_00a2b56f: }
	__asm { xor eax, eax }
	__asm { L_00a2b571: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a26aa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1031c[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2f2c0();
// FUNCTION: ROBLOXSTUDIO 0x00a2b680
extern "C" __declspec(naked) void asm_00a2b680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47510 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 4 }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xea61c4 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00a2b727 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2b727: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a2f2c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a29d30();
extern "C" void fn_00a2b5a0();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2bde0();
extern "C" void fn_00a2f330();
// FUNCTION: ROBLOXSTUDIO 0x00a2b760
extern "C" __declspec(naked) void asm_00a2b760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46f28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a2b5a0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xea615c }
	__asm { call fn_00a29d30 }
	__asm { add esp, 0xc }
	__asm { test byte ptr [esi + 0xa0], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2b7da }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2b7da: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a2f330 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a2bde0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a29d50();
extern "C" void fn_00a2b610();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2be60();
extern "C" void fn_00a2f410();
// FUNCTION: ROBLOXSTUDIO 0x00a2b810
extern "C" __declspec(naked) void asm_00a2b810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46f5b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xa0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a2b610 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xac] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xea6294 }
	__asm { call fn_00a29d50 }
	__asm { add esp, 0xc }
	__asm { test byte ptr [esi + 0xf0], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2b890 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2b890: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a2f410 }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a2be60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1031c[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2f610();
// FUNCTION: ROBLOXSTUDIO 0x00a2b8d0
extern "C" __declspec(naked) void asm_00a2b8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46f80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 4 }
	__asm { test byte ptr [esi + 0x68], 1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xea62fc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { je L_00a2b97d }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2b97d: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a2f610 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2ba10
extern "C" __declspec(naked) void asm_00a2ba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp byte ptr [edx], 0 }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jne L_00a2ba4d }
	__asm { xor eax, eax }
	__asm { jmp L_00a2ba5b }
	__asm { L_00a2ba4d: }
	__asm { mov eax, edx }
	__asm { lea esi, [eax + 1] }
	__asm { L_00a2ba52: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00a2ba52 }
	__asm { sub eax, esi }
	__asm { L_00a2ba5b: }
	__asm { push edi }
	__asm { push eax }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebx + 0x10], edi }
	__asm { mov dword ptr [ebx], 0xe844fc }
	__asm { mov dword ptr [ebx + 0xc], esi }
	__asm { pop edi }
	__asm { jb L_00a2baad }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2baad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebx], 0xe84508 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a2bbb0
extern "C" __declspec(naked) void asm_00a2bbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46f9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2bc60
extern "C" __declspec(naked) void asm_00a2bc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46fcb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push -1 }
	__asm { mov word ptr [esi + 0x14], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x34] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { jb L_00a2bd0c }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2bd0c: }
	__asm { cmp dword ptr [ebp + 0x48], 0x10 }
	__asm { mov dword ptr [ebp + 0x30], 0xf }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov byte ptr [ebp + 0x1c], 0 }
	__asm { jb L_00a2bd2f }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2bd2f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28100();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c4f0
extern "C" __declspec(naked) void asm_00a2c4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xea61c4 }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { lea edx, [esi + 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2c557 }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00a2c557 }
	__asm { push edx }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28100 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00a2c557 }
	__asm { mov eax, 0xa2c554 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c557: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { test eax, eax }
	__asm { je L_00a2c567 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c567: }
	__asm { cmp byte ptr [esi + 0x40], 0 }
	__asm { je L_00a2c571 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { L_00a2c571: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28210();
extern "C" void fn_00a2bde0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c590
extern "C" __declspec(naked) void asm_00a2c590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd470a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xea615c }
	__asm { test byte ptr [esi + 0xa0], 1 }
	__asm { lea edx, [esi + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2c5fd }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00a2c5fd }
	__asm { push edx }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28210 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00a2c5fd }
	__asm { mov eax, 0xa2c5fa }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c5fd: }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00a2c617 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c617: }
	__asm { cmp byte ptr [esi + 0x7c], 0 }
	__asm { je L_00a2c629 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { L_00a2c629: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28330();
extern "C" void fn_00a2be60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c650
extern "C" __declspec(naked) void asm_00a2c650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd470c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xea6294 }
	__asm { test byte ptr [esi + 0xf0], 1 }
	__asm { lea edx, [esi + 0xf0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2c6bd }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00a2c6bd }
	__asm { push edx }
	__asm { lea eax, [esi + 0x40] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28330 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00a2c6bd }
	__asm { mov eax, 0xa2c6ba }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c6bd: }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00a2c6d7 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c6d7: }
	__asm { cmp byte ptr [esi + 0xc8], 0 }
	__asm { je L_00a2c6ef }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_00a2be60 }
	__asm { mov byte ptr [esi + 0xc8], 0 }
	__asm { L_00a2c6ef: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28430();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c710
extern "C" __declspec(naked) void asm_00a2c710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd470d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xea63cc }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { lea edx, [esi + 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2c777 }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00a2c777 }
	__asm { push edx }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28430 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00a2c777 }
	__asm { mov eax, 0xa2c774 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c777: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { test eax, eax }
	__asm { je L_00a2c787 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c787: }
	__asm { cmp byte ptr [esi + 0x3d], 0 }
	__asm { je L_00a2c791 }
	__asm { mov byte ptr [esi + 0x3d], 0 }
	__asm { L_00a2c791: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28430();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c7b0
extern "C" __declspec(naked) void asm_00a2c7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd470f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xea6364 }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { lea edx, [esi + 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2c817 }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00a2c817 }
	__asm { push edx }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28430 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00a2c817 }
	__asm { mov eax, 0xa2c814 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c817: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { test eax, eax }
	__asm { je L_00a2c827 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c827: }
	__asm { cmp byte ptr [esi + 0x3d], 0 }
	__asm { je L_00a2c831 }
	__asm { mov byte ptr [esi + 0x3d], 0 }
	__asm { L_00a2c831: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a28530();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c850
extern "C" __declspec(naked) void asm_00a2c850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47118 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xea62fc }
	__asm { test byte ptr [esi + 0x68], 1 }
	__asm { lea edx, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a2c8b7 }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00a2c8b7 }
	__asm { push edx }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a28530 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00a2c8b7 }
	__asm { mov eax, 0xa2c8b4 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c8b7: }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a2c8c7 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c8c7: }
	__asm { cmp byte ptr [esi + 0x44], 0 }
	__asm { je L_00a2c8d1 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { L_00a2c8d1: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2d5b0();
extern "C" void fn_00a30160();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c9a0
extern "C" __declspec(naked) void asm_00a2c9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47158 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a2d5b0 }
	__asm { jmp L_00a2c9e1 }
	__asm { mov eax, 0xa2c9de }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c9e1: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a30160 }
	__asm { jmp L_00a2c9fe }
	__asm { mov eax, 0xa2c9fb }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_00a2c9fe: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { cmp ecx, dword ptr [edi] }
	__asm { je L_00a2ca25 }
	__asm { L_00a2ca14: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_00a2ca14 }
	__asm { L_00a2ca25: }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2d710();
extern "C" void fn_00a30160();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2ca40
extern "C" __declspec(naked) void asm_00a2ca40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47178 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a2d710 }
	__asm { jmp L_00a2ca81 }
	__asm { mov eax, 0xa2ca7e }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_00a2ca81: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a30160 }
	__asm { jmp L_00a2ca9e }
	__asm { mov eax, 0xa2ca9b }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_00a2ca9e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { cmp ecx, dword ptr [edi] }
	__asm { je L_00a2cac5 }
	__asm { L_00a2cab4: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_00a2cab4 }
	__asm { L_00a2cac5: }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x44], 0x10 }
	__asm { jb L_00a2caf4 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2caf4: }
	__asm { mov dword ptr [esi + 0x44], 0xf }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00a2cb17 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cb17: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00f10da4[];
extern "C" char g_00f10da8[];
extern "C" char g_00f10dac[];
extern "C" void fn_004038a0();
extern "C" void fn_00a2bc60();
// FUNCTION: ROBLOXSTUDIO 0x00a2f0f0
extern "C" __declspec(naked) void asm_00a2f0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd436f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [g_00f10dac] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push 0xf }
	__asm { push dword ptr [g_00f10da8] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [g_00f10da4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a2bc60 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov word ptr [esi + 0x14], 0x101 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2a4f0();
extern "C" void fn_00a2bde0();
extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00a2f330
extern "C" __declspec(naked) void asm_00a2f330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd473c9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { and eax, ebx }
	__asm { mov esi, ecx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f368 }
	__asm { mov edi, 0x80 }
	__asm { xor ebx, ebx }
	__asm { jmp L_00a2f36e }
	__asm { L_00a2f368: }
	__asm { mov eax, edi }
	__asm { or eax, ebx }
	__asm { je L_00a2f37a }
	__asm { L_00a2f36e: }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x88] }
	__asm { call fn_00a301d0 }
	__asm { L_00a2f37a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_00a2a4f0 }
	__asm { cmp byte ptr [esi + 0x7c], 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a2f3aa }
	__asm { mov ecx, eax }
	__asm { call fn_00a2bde0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { mov byte ptr [eax + 0x40], 0 }
	__asm { L_00a2f3aa: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a2a4f0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [esi + 0x7c], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a2bde0 }
	__asm { or dword ptr [esi + 0xa0], 1 }
	__asm { test ebx, ebx }
	__asm { jl L_00a2f3eb }
	__asm { jg L_00a2f3e4 }
	__asm { cmp edi, 1 }
	__asm { jbe L_00a2f3eb }
	__asm { L_00a2f3e4: }
	__asm { or dword ptr [esi + 0xa0], 2 }
	__asm { L_00a2f3eb: }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a2a5a0();
extern "C" void fn_00a2be60();
extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00a2f410
extern "C" __declspec(naked) void asm_00a2f410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd473fc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x88 }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { and eax, ecx }
	__asm { push edi }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f448 }
	__asm { mov edx, 0x80 }
	__asm { xor ecx, ecx }
	__asm { L_00a2f448: }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov eax, ebx }
	__asm { and eax, edi }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f465 }
	__asm { mov ebx, 4 }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp + 0x14], ebx }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { L_00a2f465: }
	__asm { mov dword ptr [ebp + 0xc], 2 }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { test edi, edi }
	__asm { jl L_00a2f483 }
	__asm { jg L_00a2f47e }
	__asm { cmp ebx, 2 }
	__asm { jbe L_00a2f483 }
	__asm { L_00a2f47e: }
	__asm { lea edi, [ebp + 0x14] }
	__asm { jmp L_00a2f486 }
	__asm { L_00a2f483: }
	__asm { lea edi, [ebp + 0xc] }
	__asm { L_00a2f486: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xec], eax }
	__asm { mov eax, edx }
	__asm { or eax, ecx }
	__asm { pop ebx }
	__asm { jne L_00a2f4a5 }
	__asm { mov edx, 1 }
	__asm { xor ecx, ecx }
	__asm { L_00a2f4a5: }
	__asm { add edx, dword ptr [esi + 0xe8] }
	__asm { adc ecx, dword ptr [esi + 0xec] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0x18], ecx }
	__asm { lea ecx, [esi + 0xd8] }
	__asm { call fn_00a301d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_00a2a5a0 }
	__asm { cmp byte ptr [esi + 0xc8], 0 }
	__asm { lea edi, [esi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a2f4f6 }
	__asm { mov ecx, edi }
	__asm { call fn_00a2be60 }
	__asm { mov byte ptr [edi + 0x88], 0 }
	__asm { L_00a2f4f6: }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { lea eax, [ebp - 0x94] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a2a5a0 }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { mov byte ptr [edi + 0x88], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a2be60 }
	__asm { or dword ptr [esi + 0xf0], 1 }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00a2f550
extern "C" __declspec(naked) void asm_00a2f550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { and eax, ebx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f56d }
	__asm { mov ecx, 0x1000 }
	__asm { xor ebx, ebx }
	__asm { L_00a2f56d: }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, edi }
	__asm { and eax, edx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f58a }
	__asm { mov edi, 4 }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { mov dword ptr [ebp + 0x18], edx }
	__asm { L_00a2f58a: }
	__asm { mov dword ptr [ebp + 0xc], 2 }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { test edx, edx }
	__asm { jl L_00a2f5a8 }
	__asm { jg L_00a2f5a3 }
	__asm { cmp edi, 2 }
	__asm { jbe L_00a2f5a8 }
	__asm { L_00a2f5a3: }
	__asm { lea edx, [ebp + 0x14] }
	__asm { jmp L_00a2f5ab }
	__asm { L_00a2f5a8: }
	__asm { lea edx, [ebp + 0xc] }
	__asm { L_00a2f5ab: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, ecx }
	__asm { or eax, ebx }
	__asm { pop edi }
	__asm { je L_00a2f5c2 }
	__asm { mov dword ptr [ebp + 0x18], ebx }
	__asm { jmp L_00a2f5ce }
	__asm { L_00a2f5c2: }
	__asm { mov ecx, 1 }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { L_00a2f5ce: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_00a301d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { cmp byte ptr [esi + 0x3d], 0 }
	__asm { je L_00a2f5ed }
	__asm { mov byte ptr [esi + 0x3d], 0 }
	__asm { L_00a2f5ed: }
	__asm { mov al, byte ptr [ebp + 0x1b] }
	__asm { mov byte ptr [esi + 0x3c], al }
	__asm { mov byte ptr [esi + 0x3d], 1 }
	__asm { or dword ptr [esi + 0x60], 1 }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00a2f610
extern "C" __declspec(naked) void asm_00a2f610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { and eax, ebx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f62d }
	__asm { mov ecx, 0x1000 }
	__asm { xor ebx, ebx }
	__asm { L_00a2f62d: }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, edi }
	__asm { and eax, edx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f64a }
	__asm { mov edi, 4 }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { mov dword ptr [ebp + 0x18], edx }
	__asm { L_00a2f64a: }
	__asm { mov dword ptr [ebp + 0xc], 2 }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { test edx, edx }
	__asm { jl L_00a2f668 }
	__asm { jg L_00a2f663 }
	__asm { cmp edi, 2 }
	__asm { jbe L_00a2f668 }
	__asm { L_00a2f663: }
	__asm { lea edx, [ebp + 0x14] }
	__asm { jmp L_00a2f66b }
	__asm { L_00a2f668: }
	__asm { lea edx, [ebp + 0xc] }
	__asm { L_00a2f66b: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, ecx }
	__asm { or eax, ebx }
	__asm { pop edi }
	__asm { je L_00a2f682 }
	__asm { mov dword ptr [ebp + 0x18], ebx }
	__asm { jmp L_00a2f68e }
	__asm { L_00a2f682: }
	__asm { mov ecx, 1 }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { L_00a2f68e: }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x50] }
	__asm { call fn_00a301d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { cmp byte ptr [esi + 0x44], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { je L_00a2f6b5 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { L_00a2f6b5: }
	__asm { mov dword ptr [esi + 0x3c], ecx }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov byte ptr [esi + 0x44], 1 }
	__asm { or dword ptr [esi + 0x68], 1 }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a301d0();
// FUNCTION: ROBLOXSTUDIO 0x00a2f750
extern "C" __declspec(naked) void asm_00a2f750()
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
	__asm { push edi }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { je L_00a2f7a1 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 0xc], 1 }
	__asm { mov dword ptr [ebp + 0x10], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2f7a1: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, edi }
	__asm { and eax, ebx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2f7ba }
	__asm { mov edi, 0x1000 }
	__asm { xor ebx, ebx }
	__asm { jmp L_00a2f7c0 }
	__asm { L_00a2f7ba: }
	__asm { mov eax, edi }
	__asm { or eax, ebx }
	__asm { je L_00a2f7c9 }
	__asm { L_00a2f7c0: }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_00a301d0 }
	__asm { L_00a2f7c9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { cmp byte ptr [esi + 0x3d], 0 }
	__asm { je L_00a2f7da }
	__asm { mov byte ptr [esi + 0x3d], 0 }
	__asm { L_00a2f7da: }
	__asm { mov al, byte ptr [ebp + 0x13] }
	__asm { mov byte ptr [esi + 0x3c], al }
	__asm { mov byte ptr [esi + 0x3d], 1 }
	__asm { or dword ptr [esi + 0x60], 1 }
	__asm { test ebx, ebx }
	__asm { pop ebx }
	__asm { jl L_00a2f7f8 }
	__asm { jg L_00a2f7f4 }
	__asm { cmp edi, 1 }
	__asm { jbe L_00a2f7f8 }
	__asm { L_00a2f7f4: }
	__asm { or dword ptr [esi + 0x60], 2 }
	__asm { L_00a2f7f8: }
	__asm { and dword ptr [esi + 0x38], 0xfffffff8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_0040f730();
extern "C" void fn_00a312f0();
// FUNCTION: ROBLOXSTUDIO 0x00a2f810
extern "C" __declspec(naked) void asm_00a2f810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f832 }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a2f832 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a2f832: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2f8b7 }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f89d }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2f880 }
	__asm { mov ecx, edi }
	__asm { call fn_00a312f0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2f880 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2f880: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2f89d: }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { mov byte ptr [ebp + 0xb], bl }
	__asm { call fn_0040f730 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2f8b7: }
	__asm { pop edi }
	__asm { xor ebx, ebx }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_00a29f60();
extern "C" void fn_00a31340();
// FUNCTION: ROBLOXSTUDIO 0x00a2f8d0
extern "C" __declspec(naked) void asm_00a2f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0xa0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f8f5 }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a2f8f5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a2f8f5: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2f989 }
	__asm { mov eax, dword ptr [edi + 0xa0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f95d }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2f940 }
	__asm { mov ecx, edi }
	__asm { call fn_00a31340 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { je L_00a2f97f }
	__asm { L_00a2f940: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2f95d: }
	__asm { push dword ptr [edi + 0x80] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp + 0xb], bl }
	__asm { call fn_00a29f60 }
	__asm { cmp eax, 1 }
	__asm { jne L_00a2f97f }
	__asm { test edx, edx }
	__asm { je L_00a2f98b }
	__asm { L_00a2f97f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2f989: }
	__asm { xor ebx, ebx }
	__asm { L_00a2f98b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_00a29db0();
extern "C" void fn_00a31400();
// FUNCTION: ROBLOXSTUDIO 0x00a2f9a0
extern "C" __declspec(naked) void asm_00a2f9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0xf0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f9c5 }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a2f9c5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a2f9c5: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2fa59 }
	__asm { mov eax, dword ptr [edi + 0xf0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2fa2d }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fa10 }
	__asm { mov ecx, edi }
	__asm { call fn_00a31400 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { je L_00a2fa4f }
	__asm { L_00a2fa10: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fa2d: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xd0] }
	__asm { lea ecx, [edi + 0x40] }
	__asm { mov byte ptr [ebp + 0xb], bl }
	__asm { call fn_00a29db0 }
	__asm { cmp eax, 1 }
	__asm { jne L_00a2fa4f }
	__asm { test edx, edx }
	__asm { je L_00a2fa5b }
	__asm { L_00a2fa4f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fa59: }
	__asm { xor ebx, ebx }
	__asm { L_00a2fa5b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2d3d0();
extern "C" void fn_00a314c0();
// FUNCTION: ROBLOXSTUDIO 0x00a2fa70
extern "C" __declspec(naked) void asm_00a2fa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2faaa }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a2faaa }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a2faaa: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2fb37 }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2fb1e }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fb08 }
	__asm { mov ecx, edi }
	__asm { call fn_00a314c0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fb08 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fb08: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { jmp L_00a2fb39 }
	__asm { L_00a2fb1e: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d3d0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2fb37: }
	__asm { xor ebx, ebx }
	__asm { L_00a2fb39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_00a31510();
// FUNCTION: ROBLOXSTUDIO 0x00a2fb50
extern "C" __declspec(naked) void asm_00a2fb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2fb72 }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a2fb72 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a2fb72: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2fbdd }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2fbdf }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fbc0 }
	__asm { mov ecx, edi }
	__asm { call fn_00a31510 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fbc0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fbc0: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fbdd: }
	__asm { xor ebx, ebx }
	__asm { L_00a2fbdf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2d3d0();
extern "C" void fn_00a31550();
// FUNCTION: ROBLOXSTUDIO 0x00a2fbf0
extern "C" __declspec(naked) void asm_00a2fbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2fc2a }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a2fc2a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a2fc2a: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2fcb7 }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2fc9e }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fc88 }
	__asm { mov ecx, edi }
	__asm { call fn_00a31550 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a2fc88 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fc88: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { jmp L_00a2fcb9 }
	__asm { L_00a2fc9e: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d3d0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2fcb7: }
	__asm { xor ebx, ebx }
	__asm { L_00a2fcb9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101b4[];
extern "C" char g_00e101c0[];
extern "C" char g_00e130e0[];
extern "C" char g_00e130e8[];
extern "C" void fn_0077a640();
extern "C" void fn_0077a660();
// FUNCTION: ROBLOXSTUDIO 0x00a30000
extern "C" __declspec(naked) void asm_00a30000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { lea esi, [edi + 4] }
	__asm { jne L_00a3005d }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e130e0] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [edi] }
	__asm { call ebx }
	__asm { test eax, eax }
	__asm { jne L_00a3005c }
	__asm { L_00a30025: }
	__asm { call dword ptr [g_00e101c0] }
	__asm { cmp eax, 0x3e5 }
	__asm { jne L_00a3003c }
	__asm { push 0x64 }
	__asm { call dword ptr [g_00e101b4] }
	__asm { jmp L_00a3004f }
	__asm { L_00a3003c: }
	__asm { push 0xea5b30 }
	__asm { push 0xea5a68 }
	__asm { push eax }
	__asm { call fn_0077a660 }
	__asm { add esp, 0xc }
	__asm { L_00a3004f: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [edi] }
	__asm { call ebx }
	__asm { test eax, eax }
	__asm { je L_00a30025 }
	__asm { L_00a3005c: }
	__asm { pop ebx }
	__asm { L_00a3005d: }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { jne L_00a30070 }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { or edx, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a30070: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0xea5b4c }
	__asm { push 0xea5a68 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { cmp eax, edx }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { cmovae ecx, esi }
	__asm { push dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e130e8] }
	__asm { cmp eax, 1 }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_0077a640 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { sub dword ptr [esi], eax }
	__asm { add esp, 0xc }
	__asm { xor edx, edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a30310
extern "C" __declspec(naked) void asm_00a30310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47431 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x38] }
	__asm { mov dword ptr [ebp - 0x1c], 0xea6514 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x4c], 0xea5ac0 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a30398 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a30398: }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x4c], 0xea64f4 }
	__asm { mov dword ptr [ebp - 0x30], 0xea6500 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x114330c }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xea6508 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a30400
extern "C" __declspec(naked) void asm_00a30400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a30463 }
	__asm { add esi, 0xc }
	__asm { jmp L_00a30465 }
	__asm { L_00a30463: }
	__asm { xor esi, esi }
	__asm { L_00a30465: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a3047b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a3047b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xea6454 }
	__asm { mov dword ptr [ebp - 0x30], 0xea6460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x114323c }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xea6468 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_0040f730();
// FUNCTION: ROBLOXSTUDIO 0x00a30bd0
extern "C" __declspec(naked) void asm_00a30bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47440 }
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
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { jl L_00a30c3d }
	__asm { jg L_00a30c19 }
	__asm { test edi, edi }
	__asm { je L_00a30c3d }
	__asm { L_00a30c19: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0040f730 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { L_00a30c3d: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov bl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00a30c57 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { movzx ebx, bl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { cmove ebx, ecx }
	__asm { L_00a30c57: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30c70 }
	__asm { ret }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a30d50
extern "C" __declspec(naked) void asm_00a30d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47470 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a30dba }
	__asm { jg L_00a30d9d }
	__asm { test edi, edi }
	__asm { je L_00a30dba }
	__asm { L_00a30d9d: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00a30dba: }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov bl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00a30dd4 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { movzx ebx, bl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { cmove ebx, ecx }
	__asm { L_00a30dd4: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30ded }
	__asm { ret }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
// FUNCTION: ROBLOXSTUDIO 0x00a30e00
extern "C" __declspec(naked) void asm_00a30e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47480 }
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
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { test edx, edx }
	__asm { jl L_00a30e61 }
	__asm { jg L_00a30e47 }
	__asm { test eax, eax }
	__asm { je L_00a30e61 }
	__asm { L_00a30e47: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { L_00a30e61: }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov bl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00a30e7b }
	__asm { call dword ptr [g_00e104c4] }
	__asm { movzx ebx, bl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { cmove ebx, ecx }
	__asm { L_00a30e7b: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30e94 }
	__asm { ret }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a30eb0
extern "C" __declspec(naked) void asm_00a30eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47490 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a30f1a }
	__asm { jg L_00a30efd }
	__asm { test edi, edi }
	__asm { je L_00a30f1a }
	__asm { L_00a30efd: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00a30f1a: }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov bl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00a30f34 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { movzx ebx, bl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { cmove ebx, ecx }
	__asm { L_00a30f34: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30f4d }
	__asm { ret }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_0040f730();
// FUNCTION: ROBLOXSTUDIO 0x00a30f60
extern "C" __declspec(naked) void asm_00a30f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd474a0 }
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
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { jl L_00a30fcd }
	__asm { jg L_00a30fa9 }
	__asm { test edi, edi }
	__asm { je L_00a30fcd }
	__asm { L_00a30fa9: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0040f730 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { L_00a30fcd: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00a30fda }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a30fda: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30ff3 }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a310f0
extern "C" __declspec(naked) void asm_00a310f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd474d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a3115a }
	__asm { jg L_00a3113d }
	__asm { test edi, edi }
	__asm { je L_00a3115a }
	__asm { L_00a3113d: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00a3115a: }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_00a31167 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a31167: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa31180 }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
// FUNCTION: ROBLOXSTUDIO 0x00a311a0
extern "C" __declspec(naked) void asm_00a311a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd474e0 }
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
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { test edx, edx }
	__asm { jl L_00a31201 }
	__asm { jg L_00a311e7 }
	__asm { test eax, eax }
	__asm { je L_00a31201 }
	__asm { L_00a311e7: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { L_00a31201: }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_00a3120e }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a3120e: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa31227 }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a31240
extern "C" __declspec(naked) void asm_00a31240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd474f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a312aa }
	__asm { jg L_00a3128d }
	__asm { test edi, edi }
	__asm { je L_00a312aa }
	__asm { L_00a3128d: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00a312aa: }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { test ecx, ecx }
	__asm { je L_00a312b7 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a312b7: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa312d0 }
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

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" void fn_00a29f60();
// FUNCTION: ROBLOXSTUDIO 0x00a31340
extern "C" __declspec(naked) void asm_00a31340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov esi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a313eb }
	__asm { jg L_00a3136e }
	__asm { test esi, esi }
	__asm { je L_00a313eb }
	__asm { L_00a3136e: }
	__asm { push dword ptr [edi + 0x80] }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_00a29f60 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp eax, esi }
	__asm { jne L_00a313b1 }
	__asm { cmp edx, ebx }
	__asm { jne L_00a313b1 }
	__asm { mov ecx, dword ptr [edi + 0x88] }
	__asm { mov eax, dword ptr [edi + 0x90] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a313b1: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov edx, dword ptr [edi + 0x88] }
	__asm { mov ecx, dword ptr [edi + 0x90] }
	__asm { add ecx, edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, edx }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10314] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10290] }
	__asm { L_00a313eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e10314[];
extern "C" void fn_00a29db0();
// FUNCTION: ROBLOXSTUDIO 0x00a31400
extern "C" __declspec(naked) void asm_00a31400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a314b6 }
	__asm { jg L_00a31435 }
	__asm { test eax, eax }
	__asm { je L_00a314b6 }
	__asm { L_00a31435: }
	__asm { mov esi, dword ptr [edi + 0xd0] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea ecx, [edi + 0x40] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a29db0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp eax, dword ptr [ebp - 4] }
	__asm { jne L_00a3147c }
	__asm { cmp edx, ebx }
	__asm { jne L_00a3147c }
	__asm { mov ecx, dword ptr [edi + 0xd8] }
	__asm { mov eax, dword ptr [edi + 0xe0] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3147c: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov edx, dword ptr [edi + 0xd8] }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { add ecx, edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { add ecx, edx }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10314] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10290] }
	__asm { L_00a314b6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
extern "C" void fn_00a29440();
// FUNCTION: ROBLOXSTUDIO 0x00a31620
extern "C" __declspec(naked) void asm_00a31620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a3163b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a3163b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jae L_00a31662 }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a31662: }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edi + 0x5c], edx }
	__asm { jg L_00a3168c }
	__asm { jl L_00a31687 }
	__asm { cmp dword ptr [edi + 0x58], eax }
	__asm { jae L_00a3168c }
	__asm { L_00a31687: }
	__asm { lea ecx, [edi + 0x58] }
	__asm { jmp L_00a3168f }
	__asm { L_00a3168c: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a3168f: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a316c0 }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a316c0 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a316c0: }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov edx, dword ptr [edi + 0x48] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { sub ecx, dword ptr [edi + 0x58] }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { sbb eax, dword ptr [edi + 0x5c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { add eax, dword ptr [edi + 0x48] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x44] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29440 }
}

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00a31980
extern "C" __declspec(naked) void asm_00a31980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a3199b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a3199b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jae L_00a319c2 }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a319c2: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edi + 0x5c], edx }
	__asm { jg L_00a319ed }
	__asm { jl L_00a319e8 }
	__asm { cmp dword ptr [edi + 0x58], eax }
	__asm { jae L_00a319ed }
	__asm { L_00a319e8: }
	__asm { lea ecx, [edi + 0x58] }
	__asm { jmp L_00a319f0 }
	__asm { L_00a319ed: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a319f0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a31a21 }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a31a21 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a31a21: }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov edx, dword ptr [edi + 0x48] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { add eax, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
extern "C" void fn_00a29440();
// FUNCTION: ROBLOXSTUDIO 0x00a31a70
extern "C" __declspec(naked) void asm_00a31a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a31a8b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a31a8b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jae L_00a31ab2 }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a31ab2: }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edi + 0x5c], edx }
	__asm { jg L_00a31adc }
	__asm { jl L_00a31ad7 }
	__asm { cmp dword ptr [edi + 0x58], eax }
	__asm { jae L_00a31adc }
	__asm { L_00a31ad7: }
	__asm { lea ecx, [edi + 0x58] }
	__asm { jmp L_00a31adf }
	__asm { L_00a31adc: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a31adf: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a31b10 }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a31b10 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a31b10: }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov edx, dword ptr [edi + 0x48] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { sub ecx, dword ptr [edi + 0x58] }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { sbb eax, dword ptr [edi + 0x5c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { add eax, dword ptr [edi + 0x48] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x40] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29440 }
}

extern "C" char g_00e10288[];
// FUNCTION: ROBLOXSTUDIO 0x00a31c80
extern "C" __declspec(naked) void asm_00a31c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { jl L_00a31cd7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jg L_00a31ca0 }
	__asm { test ebx, ebx }
	__asm { je L_00a31cca }
	__asm { mov edi, edi }
	__asm { L_00a31ca0: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { sbb eax, edi }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10288] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { adc edi, edx }
	__asm { cmp edi, eax }
	__asm { jl L_00a31ca0 }
	__asm { jg L_00a31cca }
	__asm { cmp esi, ebx }
	__asm { jb L_00a31ca0 }
	__asm { L_00a31cca: }
	__asm { pop ebx }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a31cd7: }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1027c[];
extern "C" char g_00e10288[];
// FUNCTION: ROBLOXSTUDIO 0x00a31cf0
extern "C" __declspec(naked) void asm_00a31cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov eax, ecx }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp + 0x10], esi }
	__asm { jl L_00a31d5d }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jg L_00a31d10 }
	__asm { test ebx, ebx }
	__asm { je L_00a31d50 }
	__asm { mov edi, edi }
	__asm { L_00a31d10: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, ebx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub ecx, esi }
	__asm { sbb eax, edi }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10288] }
	__asm { add esi, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { adc edi, edx }
	__asm { cmp edi, dword ptr [ebp + 0x10] }
	__asm { jl L_00a31d10 }
	__asm { jg L_00a31d50 }
	__asm { cmp esi, ebx }
	__asm { jb L_00a31d10 }
	__asm { L_00a31d50: }
	__asm { pop ebx }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a31d5d: }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1031c[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00c89a40();
// FUNCTION: ROBLOXSTUDIO 0x00a31f00
extern "C" __declspec(naked) void asm_00a31f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47510 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 4 }
	__asm { test byte ptr [esi + 0x60], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xea67fc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00a31fa7 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a29c40 }
	__asm { L_00a31fa7: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c89a40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e10300[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2d3d0();
extern "C" void fn_00a33980();
// FUNCTION: ROBLOXSTUDIO 0x00a334a0
extern "C" __declspec(naked) void asm_00a334a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a334da }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { jne L_00a334da }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x5c] }
	__asm { L_00a334da: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a33567 }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a3354e }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a33538 }
	__asm { mov ecx, edi }
	__asm { call fn_00a33980 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10300] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp eax, esi }
	__asm { jne L_00a33538 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a33538: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [eax], bl }
	__asm { call dword ptr [g_00e10290] }
	__asm { jmp L_00a33569 }
	__asm { L_00a3354e: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d3d0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00a33567: }
	__asm { xor ebx, ebx }
	__asm { L_00a33569: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a33820
extern "C" __declspec(naked) void asm_00a33820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47760 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a3388a }
	__asm { jg L_00a3386d }
	__asm { test edi, edi }
	__asm { je L_00a3388a }
	__asm { L_00a3386d: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00a3388a: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov bl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00a338a4 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { movzx ebx, bl }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { cmove ebx, ecx }
	__asm { L_00a338a4: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa338bd }
	__asm { ret }
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

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a338d0
extern "C" __declspec(naked) void asm_00a338d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47770 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { sub edi, eax }
	__asm { mov eax, edi }
	__asm { cdq }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jl L_00a3393a }
	__asm { jg L_00a3391d }
	__asm { test edi, edi }
	__asm { je L_00a3393a }
	__asm { L_00a3391d: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
	__asm { L_00a3393a: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00a33947 }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a33947: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa33960 }
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

extern "C" void fn_00665970();
extern "C" void fn_00a09100();
extern "C" void fn_00a33b00();
extern "C" void fn_00a33b70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a33d20
extern "C" __declspec(naked) void asm_00a33d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47780 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov edx, esi }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, edi }
	__asm { jbe L_00a33d8a }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [edi + edi*2] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00a33b70 }
	__asm { L_00a33d77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a33d8a: }
	__asm { jae L_00a33d77 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00a09100 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a33b00 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0x14 }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { lea eax, [edi + edi*2] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*2] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" void fn_00a33e10();
extern "C" void fn_00a343d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a33f60
extern "C" __declspec(naked) void asm_00a33f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd477b3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a33fc6 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { jmp L_00a33fc8 }
	__asm { L_00a33fc6: }
	__asm { xor eax, eax }
	__asm { L_00a33fc8: }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_00a33e10 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { and dword ptr [edi + 0x18], 0xffffffe0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { inc dword ptr [eax] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, 8 }
	__asm { call fn_00a343d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6470();
extern "C" void fn_00bc6e50();
// FUNCTION: ROBLOXSTUDIO 0x00a342a0
extern "C" __declspec(naked) void asm_00a342a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { push esi }
	__asm { call fn_00bc6470 }
	__asm { push esi }
	__asm { call fn_00bc6e50 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [ecx] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { push dword ptr [edi + 0x34] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push 0 }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x20] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x4c }
	__asm { lea eax, [esi - 0x2c] }
	__asm { push 0 }
	__asm { push 0x1a4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a349d0();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6fc0();
// FUNCTION: ROBLOXSTUDIO 0x00a345e0
extern "C" __declspec(naked) void asm_00a345e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0xa4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { lea edi, [eax + 0x2c] }
	__asm { push 8 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc6fc0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x36], 0x1000000 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov word ptr [edi + 0x34], ax }
	__asm { mov byte ptr [edi + 6], al }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x74], eax }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { call fn_00a349d0 }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [edi + 0x50], ecx }
	__asm { mov cl, byte ptr [esi + 0x38] }
	__asm { mov byte ptr [edi + 0x38], cl }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edi + 0x3c], ecx }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [edi + 0x44], ecx }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [edi + 0x40], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a34c10
extern "C" __declspec(naked) void asm_00a34c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { jle L_00a34c37 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shl esi, 4 }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, esi }
	__asm { cmp ecx, dword ptr [edx + 8] }
	__asm { mov eax, 0xea7e68 }
	__asm { cmovb eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34c37: }
	__asm { cmp esi, 0xffffd8f0 }
	__asm { jle L_00a34c4d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl esi, 4 }
	__asm { add esi, dword ptr [ecx + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34c4d: }
	__asm { cmp esi, 0xffffd8ee }
	__asm { je L_00a34cb8 }
	__asm { cmp esi, 0xffffd8ef }
	__asm { je L_00a34c9b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp esi, 0xffffd8f0 }
	__asm { je L_00a34c92 }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov ecx, 0xffffd8ee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub ecx, esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { movzx eax, byte ptr [edx + 7] }
	__asm { cmp ecx, eax }
	__asm { jg L_00a34c8a }
	__asm { shl ecx, 4 }
	__asm { pop esi }
	__asm { lea eax, [ecx + 8] }
	__asm { add eax, edx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34c8a: }
	__asm { mov eax, 0xea7e68 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34c92: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, 0x60 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34c9b: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { lea eax, [ecx + 0x58] }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], 5 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34cb8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x48 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6720();
extern "C" void fn_00bc7100();
// FUNCTION: ROBLOXSTUDIO 0x00a35580
extern "C" __declspec(naked) void asm_00a35580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a3559c }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a3559c: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jne L_00a355a9 }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { jmp L_00a355b1 }
	__asm { L_00a355a9: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { L_00a355b1: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc6720 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { shl ecx, 4 }
	__asm { sub dword ptr [esi + 8], ecx }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test edi, edi }
	__asm { je L_00a35600 }
	__asm { push ebx }
	__asm { lea edx, [ecx + 0x18] }
	__asm { mov ebx, 0xffffffe8 }
	__asm { add edx, eax }
	__asm { sub ebx, eax }
	__asm { L_00a355e1: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { lea edx, [edx - 0x10] }
	__asm { add ecx, ebx }
	__asm { mov eax, dword ptr [ecx + edx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + edx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { dec edi }
	__asm { jne L_00a355e1 }
	__asm { pop ebx }
	__asm { L_00a35600: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], 6 }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00a379c0();
extern "C" void fn_00bc6ce0();
extern "C" void fn_00bc9c60();
// FUNCTION: ROBLOXSTUDIO 0x00a358d0
extern "C" __declspec(naked) void asm_00a358d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a34c10 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp byte ptr [ecx + 7], 0 }
	__asm { je L_00a358fc }
	__asm { push 0xea6eac }
	__asm { push edi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a358fc: }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { lea eax, [esi - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { push edi }
	__asm { call fn_00bc9c60 }
	__asm { mov ecx, dword ptr [esi - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax - 8], 4 }
	__asm { pop esi }
	__asm { jl L_00a35945 }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00a35945 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test byte ptr [eax + 5], 4 }
	__asm { je L_00a35945 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc6ce0 }
	__asm { add esp, 8 }
	__asm { L_00a35945: }
	__asm { add dword ptr [edi + 8], -0x20 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00a379c0();
extern "C" void fn_00bc6ce0();
extern "C" void fn_00bc9cc0();
// FUNCTION: ROBLOXSTUDIO 0x00a35950
extern "C" __declspec(naked) void asm_00a35950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a34c10 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp byte ptr [ecx + 7], 0 }
	__asm { je L_00a3597c }
	__asm { push 0xea6eac }
	__asm { push edi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a3597c: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { push dword ptr [ebx] }
	__asm { push edi }
	__asm { call fn_00bc9cc0 }
	__asm { mov ecx, dword ptr [esi - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax - 8], 4 }
	__asm { pop esi }
	__asm { jl L_00a359c4 }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00a359c4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test byte ptr [eax + 5], 4 }
	__asm { je L_00a359c4 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc6ce0 }
	__asm { add esp, 8 }
	__asm { L_00a359c4: }
	__asm { add dword ptr [edi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00a379c0();
extern "C" void fn_00bc6d00();
// FUNCTION: ROBLOXSTUDIO 0x00a35a20
extern "C" __declspec(naked) void asm_00a35a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, 0xffffd8ef }
	__asm { jne L_00a35a49 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jne L_00a35a49 }
	__asm { push 0xea6e88 }
	__asm { push esi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a35a49: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { cmp edi, 0xffffd8ef }
	__asm { jne L_00a35a99 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [eax - 8], 4 }
	__asm { jl L_00a35ae0 }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00a35ae0 }
	__asm { test byte ptr [ecx + 5], 4 }
	__asm { je L_00a35ae0 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc6d00 }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35a99: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx - 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx - 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { cmp edi, 0xffffd8ee }
	__asm { jge L_00a35ae0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [eax - 8], 4 }
	__asm { jl L_00a35ae0 }
	__asm { mov ecx, dword ptr [eax - 0x10] }
	__asm { test byte ptr [ecx + 5], 3 }
	__asm { je L_00a35ae0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test byte ptr [eax + 5], 4 }
	__asm { je L_00a35ae0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc6d00 }
	__asm { add esp, 0xc }
	__asm { L_00a35ae0: }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc6d00();
// FUNCTION: ROBLOXSTUDIO 0x00a35af0
extern "C" __declspec(naked) void asm_00a35af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ebx, 1 }
	__asm { call fn_00a34c10 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { sub eax, 6 }
	__asm { je L_00a35b39 }
	__asm { dec eax }
	__asm { je L_00a35b39 }
	__asm { dec eax }
	__asm { je L_00a35b25 }
	__asm { xor ebx, ebx }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35b25: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { mov dword ptr [ecx + 0x48], eax }
	__asm { mov dword ptr [ecx + 0x50], 5 }
	__asm { jmp L_00a35b44 }
	__asm { L_00a35b39: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00a35b44: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax - 0x10] }
	__asm { test byte ptr [edi + 5], 3 }
	__asm { je L_00a35b64 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test byte ptr [ecx + 5], 4 }
	__asm { je L_00a35b64 }
	__asm { push edi }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc6d00 }
	__asm { add esp, 0xc }
	__asm { L_00a35b64: }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00a379c0();
extern "C" void fn_00bc6ce0();
extern "C" void fn_00bc6d00();
// FUNCTION: ROBLOXSTUDIO 0x00a35bf0
extern "C" __declspec(naked) void asm_00a35bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a34c10 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi - 8], 0 }
	__asm { mov ebx, eax }
	__asm { jne L_00a35c14 }
	__asm { xor esi, esi }
	__asm { jmp L_00a35c17 }
	__asm { L_00a35c14: }
	__asm { mov esi, dword ptr [esi - 0x10] }
	__asm { L_00a35c17: }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov eax, ecx }
	__asm { sub eax, 5 }
	__asm { je L_00a35c6e }
	__asm { sub eax, 2 }
	__asm { je L_00a35c3e }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [eax + ecx*4 + 0x98], esi }
	__asm { add dword ptr [edi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35c3e: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00a35ca5 }
	__asm { test byte ptr [esi + 5], 3 }
	__asm { je L_00a35ca5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test byte ptr [eax + 5], 4 }
	__asm { je L_00a35ca5 }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc6d00 }
	__asm { add esp, 0xc }
	__asm { add dword ptr [edi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35c6e: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp byte ptr [eax + 7], 0 }
	__asm { je L_00a35c84 }
	__asm { push 0xea6eac }
	__asm { push edi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a35c84: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_00a35ca5 }
	__asm { test byte ptr [esi + 5], 3 }
	__asm { je L_00a35ca5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test byte ptr [eax + 5], 4 }
	__asm { je L_00a35ca5 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc6ce0 }
	__asm { add esp, 8 }
	__asm { L_00a35ca5: }
	__asm { add dword ptr [edi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34b80();
extern "C" void fn_00a34c10();
extern "C" void fn_00bc6d00();
// FUNCTION: ROBLOXSTUDIO 0x00a35d60
extern "C" __declspec(naked) void asm_00a35d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00a34c10 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push eax }
	__asm { call fn_00a34b80 }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_00a35dd2 }
	__asm { add dword ptr [ebx + 8], -0x10 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { pop esi }
	__asm { cmp dword ptr [ecx + 8], 4 }
	__asm { jl L_00a35dd0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { test byte ptr [ecx + 5], 3 }
	__asm { je L_00a35dd0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test byte ptr [eax + 5], 4 }
	__asm { je L_00a35dd0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00bc6d00 }
	__asm { add esp, 0xc }
	__asm { L_00a35dd0: }
	__asm { mov eax, edi }
	__asm { L_00a35dd2: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f86ac[];
extern "C" void fn_00a34c10();
extern "C" void fn_00bc7100();
extern "C" void fn_00bcc960();
// FUNCTION: ROBLOXSTUDIO 0x00a35ef0
extern "C" __declspec(naked) void asm_00a35ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 4 }
	__asm { je L_00a35f4f }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcc960 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a35f31 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a35f29 }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00a35f29: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35f31: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a35f45 }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a35f45: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { L_00a35f4f: }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0xc] }
	__asm { mov edi, ebx }
	__asm { shr edi, 5 }
	__asm { inc edi }
	__asm { lea ecx, [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov edx, ebx }
	__asm { mov esi, ebx }
	__asm { cmp ebx, edi }
	__asm { jb L_00a35f92 }
	__asm { mov ebx, ecx }
	__asm { L_00a35f71: }
	__asm { movzx ecx, byte ptr [ebx + esi - 1] }
	__asm { mov eax, edx }
	__asm { shl eax, 5 }
	__asm { add ecx, eax }
	__asm { mov eax, edx }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { sub esi, edi }
	__asm { xor edx, ecx }
	__asm { cmp esi, edi }
	__asm { jae L_00a35f71 }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { L_00a35f92: }
	__asm { cmp edx, dword ptr [eax + 8] }
	__asm { jne L_00a35faa }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00a35fa0 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { L_00a35fa0: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35faa: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { or dword ptr [g_012f86ac], 0x4000 }
	__asm { test eax, eax }
	__asm { je L_00a35fc1 }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00a35fc1: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36630();
extern "C" void fn_00a36c30();
// FUNCTION: ROBLOXSTUDIO 0x00a362c0
extern "C" __declspec(naked) void asm_00a362c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { sub ebx, dword ptr [esi + 0x20] }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { call fn_00a36630 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a363b9 }
	__asm { test byte ptr [esi + 0x38], 2 }
	__asm { je L_00a363b9 }
	__asm { push edi }
	__asm { mov edi, edi }
	__asm { L_00a36300: }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { lea eax, [ecx - 1] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { test ecx, ecx }
	__asm { je L_00a363b5 }
	__asm { mov edi, dword ptr [esi + 0x44] }
	__asm { test edi, edi }
	__asm { je L_00a363ab }
	__asm { cmp byte ptr [esi + 0x39], 0 }
	__asm { je L_00a363ab }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { sub eax, dword ptr [esi + 0x20] }
	__asm { sub ebx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x64], 4 }
	__asm { mov dword ptr [ebp - 0x50], 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp eax, 0x140 }
	__asm { jg L_00a36376 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { cmp eax, 0x14 }
	__asm { jl L_00a36369 }
	__asm { add eax, eax }
	__asm { jmp L_00a3636c }
	__asm { L_00a36369: }
	__asm { add eax, 0x14 }
	__asm { L_00a3636c: }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36c30 }
	__asm { add esp, 8 }
	__asm { L_00a36376: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add ecx, 0x140 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x39], 0 }
	__asm { call edi }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [esi + 0x39], 1 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add esp, 8 }
	__asm { add eax, ebx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00a363ab: }
	__asm { test byte ptr [esi + 0x38], 2 }
	__asm { jne L_00a36300 }
	__asm { L_00a363b5: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { L_00a363b9: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { pop esi }
	__asm { add eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a363d0();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
extern "C" void fn_00bc6760();
extern "C" void fn_00bc6860();
extern "C" void fn_00bc7100();
extern "C" void fn_00bca5e0();
extern "C" void fn_00bce5d0();
// FUNCTION: ROBLOXSTUDIO 0x00a36460
extern "C" __declspec(naked) void asm_00a36460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00bca5e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a3648a }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a3648a: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { push esi }
	__asm { call fn_00bce5d0 }
	__asm { push dword ptr [esi + 0x48] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { movzx ecx, byte ptr [edi + 0x48] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc6760 }
	__asm { xor ebx, ebx }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [eax + 0x10], edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp byte ptr [edi + 0x48], bl }
	__asm { jbe L_00a364da }
	__asm { lea edi, [eax + 0x14] }
	__asm { nop }
	__asm { L_00a364c0: }
	__asm { push esi }
	__asm { call fn_00bc6860 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { movzx eax, byte ptr [eax + 0x48] }
	__asm { add esp, 4 }
	__asm { lea edi, [edi + 4] }
	__asm { cmp ebx, eax }
	__asm { jl L_00a364c0 }
	__asm { L_00a364da: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], 6 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00a3654e }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { lea edi, [ecx + ecx] }
	__asm { cmp ecx, 1 }
	__asm { jge L_00a36508 }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00a36508: }
	__asm { lea ebx, [edi + 6] }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, 0xfffffff }
	__asm { ja L_00a3652b }
	__asm { mov eax, ebx }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { shl ecx, 4 }
	__asm { push ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a36534 }
	__asm { L_00a3652b: }
	__asm { push esi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00a36534: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { shl edi, 4 }
	__asm { add edi, eax }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], ebx }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { call fn_00a363d0 }
	__asm { add esp, 8 }
	__asm { L_00a3654e: }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36c30();
// FUNCTION: ROBLOXSTUDIO 0x00a36630
extern "C" __declspec(naked) void asm_00a36630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x44] }
	__asm { test edi, edi }
	__asm { je L_00a366f2 }
	__asm { cmp byte ptr [esi + 0x39], 0 }
	__asm { je L_00a366f2 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { sub ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x68], ecx }
	__asm { cmp ecx, 4 }
	__asm { jne L_00a3667f }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { jmp L_00a36696 }
	__asm { L_00a3667f: }
	__asm { sub edx, dword ptr [esi + 0x28] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00a36696: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x140 }
	__asm { jg L_00a366bc }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { cmp eax, 0x14 }
	__asm { jl L_00a366af }
	__asm { add eax, eax }
	__asm { jmp L_00a366b2 }
	__asm { L_00a366af: }
	__asm { add eax, 0x14 }
	__asm { L_00a366b2: }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36c30 }
	__asm { add esp, 8 }
	__asm { L_00a366bc: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add ecx, 0x140 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x39], 0 }
	__asm { call edi }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [esi + 0x39], 1 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add esp, 8 }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00a366f2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36ae0();
extern "C" void fn_00a36bb0();
extern "C" void fn_00a36c90();
extern "C" void fn_00bc6470();
// FUNCTION: ROBLOXSTUDIO 0x00a36730
extern "C" __declspec(naked) void asm_00a36730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { movzx eax, word ptr [edi + 0x34] }
	__asm { mov esi, dword ptr [edi + 0x74] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { sub eax, dword ptr [edi + 0x28] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov al, byte ptr [edi + 0x39] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [edi + 0x74], eax }
	__asm { call fn_00a36ae0 }
	__asm { mov ebx, eax }
	__asm { add esp, 0xc }
	__asm { test ebx, ebx }
	__asm { je L_00a367ef }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { add esi, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bc6470 }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a36c90 }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add ecx, edx }
	__asm { mov word ptr [edi + 0x34], ax }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [edi + 0x30], 0x4e20 }
	__asm { mov byte ptr [edi + 0x39], al }
	__asm { jle L_00a367e0 }
	__asm { sub ecx, edx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc eax }
	__asm { add eax, edx }
	__asm { cmp eax, 0x4e20 }
	__asm { jge L_00a367e0 }
	__asm { push 0x4e20 }
	__asm { push edi }
	__asm { call fn_00a36bb0 }
	__asm { add esp, 8 }
	__asm { L_00a367e0: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi + 0x74], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a367ef: }
	__asm { mov dword ptr [edi + 0x74], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a362c0();
// FUNCTION: ROBLOXSTUDIO 0x00a36800
extern "C" __declspec(naked) void asm_00a36800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test byte ptr [esi + 0x38], 2 }
	__asm { je L_00a36820 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a362c0 }
	__asm { add esp, 8 }
	__asm { mov ebx, eax }
	__asm { jmp L_00a36823 }
	__asm { L_00a36820: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_00a36823: }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { lea ecx, [edx - 0x18] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edi, dword ptr [edx + 0x10] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx - 0xc] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test ecx, ecx }
	__asm { je L_00a3686e }
	__asm { L_00a36846: }
	__asm { cmp ebx, dword ptr [esi + 8] }
	__asm { jae L_00a3686b }
	__asm { mov edx, ebx }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { add eax, 0x10 }
	__asm { add ebx, 0x10 }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { dec edi }
	__asm { jne L_00a36846 }
	__asm { L_00a3686b: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00a3686e: }
	__asm { test edi, edi }
	__asm { jle L_00a36881 }
	__asm { L_00a36872: }
	__asm { dec edi }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { add eax, 0x10 }
	__asm { test edi, edi }
	__asm { jg L_00a36872 }
	__asm { L_00a36881: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { lea eax, [ecx + 1] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a379c0();
// FUNCTION: ROBLOXSTUDIO 0x00a36ae0
extern "C" __declspec(naked) void asm_00a36ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47820 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { jmp L_00a36b47 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [eax + 0x14], 1 }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { jne L_00a36b3e }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { L_00a36b3e: }
	__asm { mov eax, 0xa36b44 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00a36b47: }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0x100dedc }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a379c0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 0xa36b44 }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [eax + 0x14], 1 }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { jne L_00a36b9b }
	__asm { mov dword ptr [ebp - 0x20], 0xffffffff }
	__asm { L_00a36b9b: }
	__asm { mov eax, 0xa36b81 }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00a36bb0
extern "C" __declspec(naked) void asm_00a36bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea eax, [edi + 1] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp eax, 0xaaaaaaa }
	__asm { ja L_00a36be9 }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a36bf2 }
	__asm { L_00a36be9: }
	__asm { push esi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00a36bf2: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { dec edi }
	__asm { lea eax, [ebx + eax*8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { lea eax, [edi + edi*2] }
	__asm { pop edi }
	__asm { lea eax, [ebx + eax*8] }
	__asm { mov dword ptr [esi + 0x28], ebx }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36ae0();
extern "C" void fn_00a36c90();
extern "C" void fn_00a36fa0();
// FUNCTION: ROBLOXSTUDIO 0x00a36d80
extern "C" __declspec(naked) void asm_00a36d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [esi + 6] }
	__asm { cmp al, 1 }
	__asm { je L_00a36dab }
	__asm { test al, al }
	__asm { jne L_00a36d9a }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { je L_00a36dab }
	__asm { L_00a36d9a: }
	__asm { push 0xea6f1c }
	__asm { push esi }
	__asm { call fn_00a36fa0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a36dab: }
	__asm { mov eax, 0xc8 }
	__asm { cmp word ptr [esi + 0x34], ax }
	__asm { jb L_00a36dc7 }
	__asm { push 0xea6f08 }
	__asm { push esi }
	__asm { call fn_00a36fa0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a36dc7: }
	__asm { and byte ptr [esi - 0x10], 0xfe }
	__asm { inc word ptr [esi + 0x34] }
	__asm { mov ax, word ptr [esi + 0x34] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov word ptr [esi + 0x36], ax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { shl ecx, 4 }
	__asm { push ebx }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push 0xa36f00 }
	__asm { push esi }
	__asm { call fn_00a36ae0 }
	__asm { mov ebx, eax }
	__asm { add esp, 0xc }
	__asm { test ebx, ebx }
	__asm { je L_00a36e20 }
	__asm { push dword ptr [esi + 8] }
	__asm { mov byte ptr [esi + 6], bl }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00a36c90 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add esp, 0xc }
	__asm { mov eax, 0xffff }
	__asm { add word ptr [esi + 0x34], ax }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a36e20: }
	__asm { movzx ebx, byte ptr [esi + 6] }
	__asm { mov eax, 0xffff }
	__asm { add word ptr [esi + 0x34], ax }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36800();
extern "C" void fn_00a36890();
extern "C" void fn_00bcb4c0();
// FUNCTION: ROBLOXSTUDIO 0x00a36f00
extern "C" __declspec(naked) void asm_00a36f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi + 6], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { jne L_00a36f28 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { add eax, -0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36890 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a36f98 }
	__asm { jmp L_00a36f77 }
	__asm { L_00a36f28: }
	__asm { mov byte ptr [esi + 6], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { je L_00a36f72 }
	__asm { sub ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { push esi }
	__asm { sete bl }
	__asm { call fn_00a36800 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a36f6b }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00a36f6b: }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { jne L_00a36f98 }
	__asm { jmp L_00a36f77 }
	__asm { L_00a36f72: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { L_00a36f77: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcb4c0 }
	__asm { add esp, 8 }
	__asm { L_00a36f98: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a373c0();
extern "C" void fn_00a45610();
extern "C" void fn_00a457e0();
// FUNCTION: ROBLOXSTUDIO 0x00a37130
extern "C" __declspec(naked) void asm_00a37130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [eax + 8], 6 }
	__asm { jne L_00a3719d }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a3719d }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a373c0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 8], 6 }
	__asm { mov ebx, eax }
	__asm { jne L_00a37172 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp byte ptr [ecx + 6], 0 }
	__asm { jne L_00a37172 }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { jmp L_00a37174 }
	__asm { L_00a37172: }
	__asm { xor eax, eax }
	__asm { L_00a37174: }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { add eax, 0x10 }
	__asm { push 0x3c }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00a45610 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push 0xea705c }
	__asm { push edi }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x20 }
	__asm { pop ebx }
	__asm { L_00a3719d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36700();
extern "C" void fn_00bc9ad0();
extern "C" void fn_00bc9cc0();
// FUNCTION: ROBLOXSTUDIO 0x00a37320
extern "C" __declspec(naked) void asm_00a37320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { test ebx, ebx }
	__asm { je L_00a37391 }
	__asm { cmp byte ptr [ebx + 6], 0 }
	__asm { jne L_00a37391 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bc9ad0 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { xor edi, edi }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { cmp dword ptr [ecx + 0x30], edi }
	__asm { jle L_00a3737f }
	__asm { L_00a37356: }
	__asm { push dword ptr [edx + edi*4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc9cc0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { inc edi }
	__asm { add esp, 0xc }
	__asm { cmp edi, dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jl L_00a37356 }
	__asm { L_00a3737f: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], 5 }
	__asm { pop edi }
	__asm { jmp L_00a3739e }
	__asm { L_00a37391: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { L_00a3739e: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00a373b4 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00a373b4: }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc66d0();
// FUNCTION: ROBLOXSTUDIO 0x00a37410
extern "C" __declspec(naked) void asm_00a37410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 8], 6 }
	__asm { jne L_00a37460 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a37460 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00a37460 }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jne L_00a37442 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00a37442: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { sub ecx, dword ptr [eax + 0xc] }
	__asm { sar ecx, 2 }
	__asm { dec ecx }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edx }
	__asm { call fn_00bc66d0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a37486 }
	__asm { L_00a37460: }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jne L_00a3746a }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { jmp L_00a3746d }
	__asm { L_00a3746a: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { L_00a3746d: }
	__asm { sub eax, dword ptr [esi] }
	__asm { sar eax, 4 }
	__asm { cmp eax, ebx }
	__asm { jl L_00a37484 }
	__asm { test ebx, ebx }
	__asm { jle L_00a37484 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 0xe53568 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37484: }
	__asm { xor eax, eax }
	__asm { L_00a37486: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a365b0();
extern "C" void fn_00a36630();
extern "C" void fn_00a36700();
extern "C" void fn_00a36d10();
// FUNCTION: ROBLOXSTUDIO 0x00a378d0
extern "C" __declspec(naked) void asm_00a378d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test byte ptr [esi + 0x38], 0x20 }
	__asm { je L_00a378ea }
	__asm { push -1 }
	__asm { push 5 }
	__asm { push esi }
	__asm { call fn_00a36630 }
	__asm { add esp, 0xc }
	__asm { L_00a378ea: }
	__asm { mov eax, dword ptr [esi + 0x74] }
	__asm { test eax, eax }
	__asm { je L_00a3795d }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { add edi, eax }
	__asm { cmp dword ptr [edi + 8], 6 }
	__asm { je L_00a37908 }
	__asm { push 5 }
	__asm { push esi }
	__asm { call fn_00a36d10 }
	__asm { add esp, 8 }
	__asm { L_00a37908: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ecx - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ecx - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { pop edi }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00a37947 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00a37947: }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 1 }
	__asm { add eax, -0x20 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a365b0 }
	__asm { add esp, 0xc }
	__asm { L_00a3795d: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a36d10 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10688[];
extern "C" void fn_00a36700();
extern "C" void fn_00a371b0();
extern "C" void fn_00a37320();
// FUNCTION: ROBLOXSTUDIO 0x00a37ab0
extern "C" __declspec(naked) void asm_00a37ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [ebx], 0x3e }
	__asm { jne L_00a37ad7 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc ebx }
	__asm { mov edi, dword ptr [eax - 0x10] }
	__asm { add eax, -0x10 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { jmp L_00a37aec }
	__asm { L_00a37ad7: }
	__asm { mov eax, dword ptr [edx + 0x60] }
	__asm { test eax, eax }
	__asm { je L_00a37aec }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [eax + ecx*8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { L_00a37aec: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push edx }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00a371b0 }
	__asm { push 0x66 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call dword ptr [g_00e10688] }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00a37b38 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test edi, edi }
	__asm { jne L_00a37b15 }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { jmp L_00a37b1e }
	__asm { L_00a37b15: }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 8], 6 }
	__asm { L_00a37b1e: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00a37b34 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00a37b34: }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { L_00a37b38: }
	__asm { push 0x4c }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10688] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a37b52 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a37320 }
	__asm { add esp, 8 }
	__asm { L_00a37b52: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37bb0
extern "C" __declspec(naked) void asm_00a37bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { test eax, eax }
	__asm { jle L_00a37be1 }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { L_00a37bc5: }
	__asm { cmp edx, esi }
	__asm { jbe L_00a37bdf }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { dec eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp byte ptr [ecx + 6], 0 }
	__asm { jne L_00a37bd8 }
	__asm { sub eax, dword ptr [edx + 0x14] }
	__asm { L_00a37bd8: }
	__asm { sub edx, 0x18 }
	__asm { test eax, eax }
	__asm { jg L_00a37bc5 }
	__asm { L_00a37bdf: }
	__asm { test eax, eax }
	__asm { L_00a37be1: }
	__asm { jne L_00a37c0c }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { cmp edx, eax }
	__asm { jbe L_00a37c23 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub edx, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 0x60], esi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37c0c: }
	__asm { test eax, eax }
	__asm { jns L_00a37c23 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 0x60], 0 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37c23: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a351c0();
extern "C" void fn_00a35690();
extern "C" void fn_00a35d10();
extern "C" void fn_00a35e70();
extern "C" void fn_00a381e0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00a38520
extern "C" __declspec(naked) void asm_00a38520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { push eax }
	__asm { push -1 }
	__asm { push ebx }
	__asm { call fn_00a35e70 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { sub ecx, edx }
	__asm { add ecx, 0x20c }
	__asm { add esp, 0xc }
	__asm { cmp esi, ecx }
	__asm { ja L_00a3856b }
	__asm { push esi }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add dword ptr [edi], eax }
	__asm { push -2 }
	__asm { push ebx }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3856b: }
	__asm { sub edx, edi }
	__asm { sub edx, 0xc }
	__asm { je L_00a3858f }
	__asm { push edx }
	__asm { lea esi, [edi + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a35690 }
	__asm { inc dword ptr [edi + 4] }
	__asm { push -2 }
	__asm { push ebx }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00a351c0 }
	__asm { add esp, 0x14 }
	__asm { L_00a3858f: }
	__asm { inc dword ptr [edi + 4] }
	__asm { push edi }
	__asm { call fn_00a381e0 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a37ab0();
extern "C" void fn_00a37bb0();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00a385a0
extern "C" __declspec(naked) void asm_00a385a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a37bb0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a385d6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xea7068 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a385d6: }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { push 0xea7080 }
	__asm { push esi }
	__asm { call fn_00a37ab0 }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0xea6fac }
	__asm { L_00a385f0: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a38610 }
	__asm { test dl, dl }
	__asm { je L_00a3860c }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a38610 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a385f0 }
	__asm { L_00a3860c: }
	__asm { xor eax, eax }
	__asm { jmp L_00a38615 }
	__asm { L_00a38610: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a38615: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_00a38638 }
	__asm { dec edx }
	__asm { jne L_00a38638 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp - 0x60] }
	__asm { push 0xea7084 }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38638: }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x101eb04 }
	__asm { cmovne ecx, eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { push 0xea70a4 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x60], ecx }
	__asm { call fn_00a38a50 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34d20();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35150();
extern "C" void fn_00a35710();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35850();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a38680
extern "C" __declspec(naked) void asm_00a38680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + 0x270f] }
	__asm { cmp eax, 0x270f }
	__asm { ja L_00a386a4 }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { inc edi }
	__asm { add esp, 4 }
	__asm { add edi, eax }
	__asm { L_00a386a4: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a386dd }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_00a386e3 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a386dd: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a386e3: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a34d20 }
	__asm { add esp, 0x1c }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35620();
extern "C" void fn_00a360d0();
extern "C" void fn_00a385a0();
extern "C" void fn_00a387b0();
// FUNCTION: ROBLOXSTUDIO 0x00a38890
extern "C" __declspec(naked) void asm_00a38890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00a388b6 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jle L_00a388c6 }
	__asm { push 0 }
	__asm { push esi }
	__asm { jmp L_00a388bb }
	__asm { L_00a388b6: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { L_00a388bb: }
	__asm { push ebx }
	__asm { call fn_00a387b0 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { L_00a388c6: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor esi, esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a38907 }
	__asm { L_00a388d1: }
	__asm { mov ecx, edi }
	__asm { L_00a388d3: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a388f3 }
	__asm { test dl, dl }
	__asm { je L_00a388ef }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a388f3 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a388d3 }
	__asm { L_00a388ef: }
	__asm { xor eax, eax }
	__asm { jmp L_00a388f8 }
	__asm { L_00a388f3: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a388f8: }
	__asm { test eax, eax }
	__asm { je L_00a38925 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { inc esi }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { test eax, eax }
	__asm { jne L_00a388d1 }
	__asm { L_00a38907: }
	__asm { push edi }
	__asm { push 0xea70e4 }
	__asm { push ebx }
	__asm { call fn_00a35620 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38925: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35620();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36100();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00a389c0
extern "C" __declspec(naked) void asm_00a389c0()
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
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a38a1b }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a38a1b }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { je L_00a38a1b }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38a1b: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0xea70c4 }
	__asm { push esi }
	__asm { call fn_00a35620 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0x2c }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34dd0();
extern "C" void fn_00a34ed0();
extern "C" void fn_00a35620();
extern "C" void fn_00a35690();
extern "C" void fn_00a357e0();
extern "C" void fn_00a37ab0();
extern "C" void fn_00a37bb0();
// FUNCTION: ROBLOXSTUDIO 0x00a38a50
extern "C" __declspec(naked) void asm_00a38a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a37bb0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00a38a9b }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { push 0xea70d8 }
	__asm { push esi }
	__asm { call fn_00a37ab0 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jle L_00a38a9b }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push 0xea70dc }
	__asm { push esi }
	__asm { call fn_00a35620 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a38aab }
	__asm { L_00a38a9b: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { L_00a38aab: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a357e0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a34dd0 }
	__asm { push esi }
	__asm { call fn_00a34ed0 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a35480();
extern "C" void fn_00a35890();
extern "C" void fn_00a35950();
extern "C" void fn_00a35d10();
extern "C" void fn_00a35e20();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a39190
extern "C" __declspec(naked) void asm_00a39190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + 0x270f] }
	__asm { cmp eax, 0x270f }
	__asm { ja L_00a391b4 }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { inc edi }
	__asm { add esp, 4 }
	__asm { add edi, eax }
	__asm { L_00a391b4: }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a391d5 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a391d5: }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35890 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35e20 }
	__asm { push -2 }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x1c }
	__asm { test ebx, ebx }
	__asm { je L_00a3921e }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35890 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35950 }
	__asm { add esp, 0x18 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35950 }
	__asm { add esp, 0xc }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3921e: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35480 }
	__asm { add esp, 8 }
	__asm { lea ebx, [eax + 1] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a35950 }
	__asm { add esp, 0xc }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10264[];
extern "C" char g_0124ead0[];
extern "C" void fn_006b98f0();
extern "C" void fn_008e9bd0();
extern "C" void fn_00a35060();
extern "C" void fn_00a35150();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35e20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a39f20
extern "C" __declspec(naked) void asm_00a39f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { xor esi, esi }
	__asm { cmp eax, 1 }
	__asm { lea ecx, [ebp - 4] }
	__asm { lea edx, [ebp - 8] }
	__asm { cmovge ecx, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { jne L_00a39f62 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a35e20 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { js L_00a39fcc }
	__asm { L_00a39f62: }
	__asm { call fn_008e9bd0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { sar ecx, 2 }
	__asm { cmp esi, ecx }
	__asm { jge L_00a39fcc }
	__asm { call fn_008e9bd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { cmp eax, esi }
	__asm { ja L_00a39f91 }
	__asm { push 0x1017a80 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_00a39f91: }
	__asm { mov esi, dword ptr [ecx + esi*4] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a39fa5 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a39fa5: }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a39fcc: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0xea78b0 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" void fn_006b98f0();
extern "C" void fn_00a10ea0();
extern "C" void fn_00a3aca0();
extern "C" void fn_00a3b4a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3a680
extern "C" __declspec(naked) void asm_00a3a680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a3aca0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3a6ee }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efcf8 }
	__asm { je L_00a3a6bc }
	__asm { push eax }
	__asm { mov ecx, 0x11efcf8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a3a6ee }
	__asm { L_00a3a6bc: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00a10ea0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00a3b4a0 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3a6ee: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xea7640 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" void fn_006b98f0();
extern "C" void fn_00a10ea0();
extern "C" void fn_00a3aca0();
extern "C" void fn_00a3b4a0();
extern "C" void fn_00a56030();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3a710
extern "C" __declspec(naked) void asm_00a3a710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a3aca0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3a782 }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11f0ae0 }
	__asm { je L_00a3a74c }
	__asm { push eax }
	__asm { mov ecx, 0x11f0ae0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a3a782 }
	__asm { L_00a3a74c: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00a56030 }
	__asm { push eax }
	__asm { call fn_00a10ea0 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00a3b4a0 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3a782: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xea7674 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a35060();
extern "C" void fn_00a35150();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35e20();
extern "C" void fn_00a3bcb0();
// FUNCTION: ROBLOXSTUDIO 0x00a3abb0
extern "C" __declspec(naked) void asm_00a3abb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp eax, 3 }
	__asm { lea ecx, [ebp - 4] }
	__asm { lea edx, [ebp - 8] }
	__asm { cmovge ecx, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], 3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { jne L_00a3ac7c }
	__asm { push 8 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3ac04 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { L_00a3ac04: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { L_00a3ac20: }
	__asm { push esi }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a35e20 }
	__asm { push 1 }
	__asm { push edi }
	__asm { movzx esi, ax }
	__asm { call fn_00a3bcb0 }
	__asm { push 8 }
	__asm { push edi }
	__asm { fstp dword ptr [ebp - 0xc] }
	__asm { mov word ptr [ebp - 8], si }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { L_00a3ac47: }
	__asm { test eax, eax }
	__asm { je L_00a3ac56 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { L_00a3ac56: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3ac7c: }
	__asm { cmp eax, 1 }
	__asm { jne L_00a3ac20 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a3bcb0 }
	__asm { fstp dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { push 8 }
	__asm { push edi }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a3ac47 }
}

extern "C" char g_0124eb20[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3adb0
extern "C" __declspec(naked) void asm_00a3adb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { je L_00a3ae22 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3ae22 }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a3ae1a }
	__asm { call fn_00a35d10 }
	__asm { fld dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { fstp dword ptr [eax + 4] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3ae1a: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a3ae22: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3aeb0
extern "C" __declspec(naked) void asm_00a3aeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { je L_00a3af28 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3af28 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a3af20 }
	__asm { call fn_00a35d10 }
	__asm { fld dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [edi + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { fstp dword ptr [eax + 8] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3af20: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a3af28: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3af30
extern "C" __declspec(naked) void asm_00a3af30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { je L_00a3afa4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3afa4 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a3af9c }
	__asm { call fn_00a35d10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edi + 4] }
	__asm { pop edi }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3af9c: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a3afa4: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b2a0
extern "C" __declspec(naked) void asm_00a3b2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x3c }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a3b30d }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { L_00a3b30d: }
	__asm { push dword ptr [g_0124ead8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038048[];
extern "C" char g_0124eb14[];
extern "C" void fn_009f2b40();
extern "C" void fn_00a35150();
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bcb0();
// FUNCTION: ROBLOXSTUDIO 0x00a3ba50
extern "C" __declspec(naked) void asm_00a3ba50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov ebx, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp esi, 2 }
	__asm { jle L_00a3baa0 }
	__asm { push 3 }
	__asm { push edi }
	__asm { call fn_00a3bcb0 }
	__asm { fabs }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp - 4] }
	__asm { jmp L_00a3baab }
	__asm { L_00a3baa0: }
	__asm { fld dword ptr [g_01038048] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { L_00a3baab: }
	__asm { push ebx }
	__asm { call fn_009f2b40 }
	__asm { movzx eax, al }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_008eac30();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3bdb0
extern "C" __declspec(naked) void asm_00a3bdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb30] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb30] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_008eac30 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3be1a }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { L_00a3be1a: }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10604[];
extern "C" void fn_006b98f0();
extern "C" void fn_00a35650();
extern "C" void fn_00a356f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3e300
extern "C" __declspec(naked) void asm_00a3e300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, 0x100a8dc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { L_00a3e311: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a3e331 }
	__asm { test dl, dl }
	__asm { je L_00a3e32d }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a3e331 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a3e311 }
	__asm { L_00a3e32d: }
	__asm { xor eax, eax }
	__asm { jmp L_00a3e336 }
	__asm { L_00a3e331: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a3e336: }
	__asm { test eax, eax }
	__asm { jne L_00a3e35a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [eax] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3e35a: }
	__asm { mov ecx, 0x100a8e4 }
	__asm { mov eax, esi }
	__asm { L_00a3e361: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a3e381 }
	__asm { test dl, dl }
	__asm { je L_00a3e37d }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a3e381 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a3e361 }
	__asm { L_00a3e37d: }
	__asm { xor eax, eax }
	__asm { jmp L_00a3e386 }
	__asm { L_00a3e381: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a3e386: }
	__asm { test eax, eax }
	__asm { jne L_00a3e3a7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movsx eax, word ptr [eax + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a35650 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3e3a7: }
	__asm { test esi, esi }
	__asm { je L_00a3e3dc }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10604] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a3e3dc }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xea7990 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00a3e3dc: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6f03c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0124eb30[];
extern "C" void fn_008eab10();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3fcc0
extern "C" __declspec(naked) void asm_00a3fcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb30] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb30] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_008eab10 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3fd2a }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { L_00a3fd2a: }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_008eab70();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a40490
extern "C" __declspec(naked) void asm_00a40490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_008eab70 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push 0x10 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a404e9 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { L_00a404e9: }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35580();
extern "C" void fn_00a35710();
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35ce0();
extern "C" void fn_00a35d10();
// FUNCTION: ROBLOXSTUDIO 0x00a40e96
extern "C" __declspec(naked) void asm_00a40e96()
{
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xe5332c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b60 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xa3cd60 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b68 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xa3caa0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x40 }
	__asm { push 0xea7b70 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xa40370 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b7c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xa3bdb0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b84 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { add esp, 0x40 }
	__asm { push 0 }
	__asm { push 0xa3fcc0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 0xea7b9c }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0 }
	__asm { push 0xa40490 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x44 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}
