// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10580[];
extern "C" char g_00e106f0[];
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x0077a320
extern "C" __declspec(naked) void asm_0077a320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0x801 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { cmp esi, 0x800 }
	__asm { jbe L_0077a34a }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a34a: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0xa25] }
	__asm { push 0x801 }
	__asm { push eax }
	__asm { call dword ptr [g_00e106f0] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebx + 0x1240], esi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10580[];
extern "C" char g_00e106f0[];
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x0077a380
extern "C" __declspec(naked) void asm_0077a380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0x101 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { cmp esi, 0x100 }
	__asm { jbe L_0077a3aa }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a3aa: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0x21] }
	__asm { push 0x101 }
	__asm { push eax }
	__asm { call dword ptr [g_00e106f0] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebx + 0x1230], esi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10580[];
extern "C" char g_00e106f0[];
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x0077a550
extern "C" __declspec(naked) void asm_0077a550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0x801 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { cmp esi, 0x800 }
	__asm { jbe L_0077a57a }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a57a: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0x224] }
	__asm { push 0x801 }
	__asm { push eax }
	__asm { call dword ptr [g_00e106f0] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebx + 0x123c], esi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10580[];
extern "C" char g_00e106f0[];
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x0077a5b0
extern "C" __declspec(naked) void asm_0077a5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0x81 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { cmp esi, 0x80 }
	__asm { jbe L_0077a5da }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a5da: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0x122] }
	__asm { push 0x81 }
	__asm { push eax }
	__asm { call dword ptr [g_00e106f0] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebx + 0x1234], esi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077dc80
extern "C" __declspec(naked) void asm_0077dc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { cmp byte ptr [ebx], 0 }
	__asm { push edi }
	__asm { mov edi, ebx }
	__asm { je L_0077dc96 }
	__asm { L_0077dc90: }
	__asm { inc edi }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_0077dc90 }
	__asm { L_0077dc96: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], ebx }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077dcd0
extern "C" __declspec(naked) void asm_0077dcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, edi }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0077dce6 }
	__asm { nop }
	__asm { L_0077dce0: }
	__asm { inc esi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_0077dce0 }
	__asm { L_0077dce6: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 0xc], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0x10], esi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077e840();
// FUNCTION: ROBLOXSTUDIO 0x0077f660
extern "C" __declspec(naked) void asm_0077f660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { je L_0077f6a2 }
	__asm { mov al, byte ptr [eax] }
	__asm { inc dword ptr [edx] }
	__asm { push dword ptr [ecx + 0xc] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 5 }
	__asm { call fn_0077e840 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f6a2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007804b0();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x0077fd90
extern "C" __declspec(naked) void asm_0077fd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007810b0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_007804b0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jl L_0077fdd0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x50] }
	__asm { cmp dword ptr [eax + 0x4c], ecx }
	__asm { je L_0077fdd0 }
	__asm { add ecx, -4 }
	__asm { mov dword ptr [eax + 0x50], ecx }
	__asm { L_0077fdd0: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00780170();
extern "C" void fn_00781280();
// FUNCTION: ROBLOXSTUDIO 0x00780260
extern "C" __declspec(naked) void asm_00780260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00780170 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jl L_00780283 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780283: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00781280 }
}

extern "C" void fn_00403540();
extern "C" void fn_0077fe60();
extern "C" void fn_00781280();
// FUNCTION: ROBLOXSTUDIO 0x00780450
extern "C" __declspec(naked) void asm_00780450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_0077fe60 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jl L_00780473 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780473: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00781280 }
}

extern "C" void fn_00780620();
// FUNCTION: ROBLOXSTUDIO 0x007807c0
extern "C" __declspec(naked) void asm_007807c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { call fn_00780620 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { js L_007807ed }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007807ed: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007843d0();
// FUNCTION: ROBLOXSTUDIO 0x00783a60
extern "C" __declspec(naked) void asm_00783a60()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov dword ptr [esi], 0xe4f8b0 }
	__asm { mov dword ptr [esi + 0x40], 0xe4f8bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x54], 0xe4f8c4 }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x50], eax }
	__asm { mov dword ptr [esi], 0xe4f85c }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00783ab1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00783ab1 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_00783ab1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007843d0 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00783b40
extern "C" __declspec(naked) void asm_00783b40()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x54], 0x10 }
	__asm { jb L_00783b54 }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783b54: }
	__asm { mov dword ptr [esi + 0x54], 0xf }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { jb L_00783b77 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783b77: }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00783b9a }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783b9a: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785460
extern "C" __declspec(naked) void asm_00785460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4fa3c }
	__asm { cmp dword ptr [esi + 0x3c], 0x10 }
	__asm { jb L_0078547d }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078547d: }
	__asm { mov dword ptr [esi + 0x3c], 0xf }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_007854a0 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007854a0: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe4fa2c }
	__asm { je L_007854c7 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007854c7: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007843d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007855e0
extern "C" __declspec(naked) void asm_007855e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f85c }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_0078560c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0078560c }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_0078560c: }
	__asm { mov ecx, esi }
	__asm { call fn_007843d0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00785622 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00785622: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00785750
extern "C" __declspec(naked) void asm_00785750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f508 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_0078576d }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078576d: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe4f020 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0078579c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078579c: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10388[];
extern "C" void fn_00610420();
// FUNCTION: ROBLOXSTUDIO 0x00787f40
extern "C" __declspec(naked) void asm_00787f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_00787f75 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10388] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00610420 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { L_00787f75: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0078e220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078bb60
extern "C" __declspec(naked) void asm_0078bb60()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_0078bb74 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078bb74: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0078bbbc }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_0078bba3 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0078e220 }
	__asm { L_0078bba3: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0078bbbc: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_008e9590();
// FUNCTION: ROBLOXSTUDIO 0x0078c470
extern "C" __declspec(naked) void asm_0078c470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_008e9590 }
	__asm { test al, al }
	__asm { je L_0078c4a9 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, esi }
	__asm { mov edx, eax }
	__asm { test esi, esi }
	__asm { je L_0078c4a3 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_0078c495: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea edx, [edx + 4] }
	__asm { dec ecx }
	__asm { jne L_0078c495 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { L_0078c4a3: }
	__asm { lea eax, [eax + esi*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_0078c4a9: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078fb40();
// FUNCTION: ROBLOXSTUDIO 0x0078ff20
extern "C" __declspec(naked) void asm_0078ff20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { push esi }
	__asm { je L_0078ff40 }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_0078ff40 }
	__asm { add eax, -0x40 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_0078ff47 }
	__asm { L_0078ff40: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0078ff47: }
	__asm { lea esi, [ebp - 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_0078ff64 }
	__asm { L_0078ff50: }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0078fb40 }
	__asm { mov esi, dword ptr [esi + 0x40] }
	__asm { test esi, esi }
	__asm { je L_0078ff64 }
	__asm { add esi, -0x40 }
	__asm { jne L_0078ff50 }
	__asm { L_0078ff64: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00788a50();
// FUNCTION: ROBLOXSTUDIO 0x007902c0
extern "C" __declspec(naked) void asm_007902c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 0x28], 0 }
	__asm { je L_007902e1 }
	__asm { mov edx, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [ecx + 0x34] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_007902e1 }
	__asm { add eax, -0x14 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_007902e8 }
	__asm { L_007902e1: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_007902e8: }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], 0x78d0f0 }
	__asm { call fn_00788a50 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdcc90();
// FUNCTION: ROBLOXSTUDIO 0x00790310
extern "C" __declspec(naked) void asm_00790310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [edi + 4] }
	__asm { push edi }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00790341 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00790341: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00788a50();
// FUNCTION: ROBLOXSTUDIO 0x00791da0
extern "C" __declspec(naked) void asm_00791da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 0x28], 0 }
	__asm { je L_00791dc1 }
	__asm { mov edx, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [ecx + 0x34] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00791dc1 }
	__asm { add eax, -0x14 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00791dc8 }
	__asm { L_00791dc1: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00791dc8: }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], 0x791df0 }
	__asm { call fn_00788a50 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0131b6d8[];
extern "C" void fn_006b9b20();
extern "C" void fn_00794a90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00794230
extern "C" __declspec(naked) void asm_00794230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00794a90 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0079424b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00794269 }
	__asm { jmp L_00794264 }
	__asm { L_0079424b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0131b6d8] }
	__asm { cmp edx, eax }
	__asm { ja L_0079425e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0131b6d8], eax }
	__asm { L_0079425e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00794264: }
	__asm { call fn_006b9b20 }
	__asm { L_00794269: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00794900
extern "C" __declspec(naked) void asm_00794900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_00794910: }
	__asm { test eax, eax }
	__asm { je L_00794919 }
	__asm { lea ecx, [eax - 8] }
	__asm { jmp L_0079491b }
	__asm { L_00794919: }
	__asm { xor ecx, ecx }
	__asm { L_0079491b: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00794910 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079b370
extern "C" __declspec(naked) void asm_0079b370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079b39d }
	__asm { mov dword ptr [eax], 0xe5479c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0079b39f }
	__asm { L_0079b39d: }
	__asm { xor eax, eax }
	__asm { L_0079b39f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079b3c0
extern "C" __declspec(naked) void asm_0079b3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079b3ed }
	__asm { mov dword ptr [eax], 0xe54738 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0079b3ef }
	__asm { L_0079b3ed: }
	__asm { xor eax, eax }
	__asm { L_0079b3ef: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079b410
extern "C" __declspec(naked) void asm_0079b410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0079b44b }
	__asm { mov dword ptr [edx], 0xe54760 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0079b44d }
	__asm { L_0079b44b: }
	__asm { xor edx, edx }
	__asm { L_0079b44d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079b470
extern "C" __declspec(naked) void asm_0079b470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079b49d }
	__asm { mov dword ptr [eax], 0xe54788 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0079b49f }
	__asm { L_0079b49d: }
	__asm { xor eax, eax }
	__asm { L_0079b49f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079b4c0
extern "C" __declspec(naked) void asm_0079b4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079b4ed }
	__asm { mov dword ptr [eax], 0xe5474c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0079b4ef }
	__asm { L_0079b4ed: }
	__asm { xor eax, eax }
	__asm { L_0079b4ef: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079b510
extern "C" __declspec(naked) void asm_0079b510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079b53d }
	__asm { mov dword ptr [eax], 0xe54774 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0079b53f }
	__asm { L_0079b53d: }
	__asm { xor eax, eax }
	__asm { L_0079b53f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00797bc0();
// FUNCTION: ROBLOXSTUDIO 0x0079bd90
extern "C" __declspec(naked) void asm_0079bd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub esi, edi }
	__asm { cmp esi, 1 }
	__asm { jle L_0079bdc7 }
	__asm { L_0079bda2: }
	__asm { movzx eax, byte ptr [edi + esi - 1] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { movzx eax, byte ptr [edi] }
	__asm { mov byte ptr [edi + esi - 1], al }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { dec esi }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00797bc0 }
	__asm { add esp, 0x10 }
	__asm { cmp esi, 1 }
	__asm { jg L_0079bda2 }
	__asm { L_0079bdc7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00436cf0();
extern "C" void fn_008c0750();
// FUNCTION: ROBLOXSTUDIO 0x0079fe60
extern "C" __declspec(naked) void asm_0079fe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008c0750 }
	__asm { mov al, byte ptr [esi + 0x20] }
	__asm { mov byte ptr [edi + 0x20], al }
	__asm { lea eax, [esi + 0x24] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_00436cf0 }
	__asm { add esi, 0x30 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { cmp ecx, esi }
	__asm { je L_0079fea0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00403540 }
	__asm { L_0079fea0: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0b40
extern "C" __declspec(naked) void asm_007a0b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_007a0b94 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { push esi }
	__asm { je L_007a0b90 }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 8] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_007a0b90: }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop esi }
	__asm { L_007a0b94: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 4] }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0da0
extern "C" __declspec(naked) void asm_007a0da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_007a0dd3 }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_007a0dbd }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0dbd: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_007a0dd3: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_007a0de8 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0de8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a13c0
extern "C" __declspec(naked) void asm_007a13c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_007a13f4 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { push 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_007a13f4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00439d00();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007a1990
extern "C" __declspec(naked) void asm_007a1990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007a19c5 }
	__asm { add edi, 0x1c }
	__asm { je L_007a19c5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00439d00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007a19c5 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a19c5: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007a1a40
extern "C" __declspec(naked) void asm_007a1a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { je L_007a1a6d }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_007a1a6d }
	__asm { add eax, -8 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a1a6d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a2990
extern "C" __declspec(naked) void asm_007a2990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_007a29e6 }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { push esi }
	__asm { je L_007a29e1 }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x18] }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { L_007a29e1: }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { pop esi }
	__asm { L_007a29e6: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043d870();
extern "C" void fn_0043e620();
// FUNCTION: ROBLOXSTUDIO 0x007a3380
extern "C" __declspec(naked) void asm_007a3380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { add eax, 0x78 }
	__asm { push eax }
	__asm { call fn_0043d870 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { add esp, 0x10 }
	__asm { lea esi, [edi - 0x78] }
	__asm { cmp esi, edi }
	__asm { je L_007a33b6 }
	__asm { L_007a33a8: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_007a33a8 }
	__asm { L_007a33b6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add dword ptr [ebx + 4], -0x78 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6f2b0();
// FUNCTION: ROBLOXSTUDIO 0x007a3930
extern "C" __declspec(naked) void asm_007a3930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x6c], 0 }
	__asm { je L_007a396c }
	__asm { movzx eax, byte ptr [ecx + 0x64] }
	__asm { add ecx, 0x64 }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_007a3949 }
	__asm { inc eax }
	__asm { jmp L_007a394b }
	__asm { L_007a3949: }
	__asm { xor eax, eax }
	__asm { L_007a394b: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c6f2b0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_007a396c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a396c: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0eb8[];
extern "C" void fn_007a3980();
extern "C" void fn_007a8080();
extern "C" void fn_008d9ca0();
// FUNCTION: ROBLOXSTUDIO 0x007a5c20
extern "C" __declspec(naked) void asm_007a5c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi], 3 }
	__asm { jne L_007a5c3b }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008d9ca0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a5c3b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_012e0eb8] }
	__asm { call fn_007a3980 }
	__asm { test eax, eax }
	__asm { je L_007a5c58 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_007a8080 }
	__asm { L_007a5c58: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0eb8[];
extern "C" char g_012e1720[];
extern "C" char g_012e1728[];
extern "C" void fn_006bcba0();
extern "C" void fn_006bcd60();
extern "C" void fn_0079a6d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007a5c89
extern "C" __declspec(naked) void asm_007a5c89()
{
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_006bcba0 }
	__asm { mov eax, dword ptr [g_012e1728] }
	__asm { test al, 1 }
	__asm { jne L_007a5cd6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e1728], eax }
	__asm { push 0x12e1720 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0079a6d0 }
	__asm { push 0xde3070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 8 }
	__asm { L_007a5cd6: }
	__asm { mov eax, dword ptr [g_012e1720] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [g_012e0eb8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bcd60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797d80();
// FUNCTION: ROBLOXSTUDIO 0x007a8710
extern "C" __declspec(naked) void asm_007a8710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [edi + 4] }
	__asm { push edi }
	__asm { call fn_00797d80 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x71c71c6 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007a8741 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007a8741: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007a2070();
// FUNCTION: ROBLOXSTUDIO 0x007a9a40
extern "C" __declspec(naked) void asm_007a9a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_007a9a5c }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { mov ecx, edx }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_007a9a5c: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xa4] }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007a9a7d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007a9a7d: }
	__asm { lea ecx, [esi + 0xac] }
	__asm { call fn_007a2070 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov word ptr [esi + 0xbc], 0x100 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ad8e0
extern "C" __declspec(naked) void asm_007ad8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007ad930 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_007ad927 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_007ad927: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ad930: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae130
extern "C" __declspec(naked) void asm_007ae130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ae15d }
	__asm { mov dword ptr [eax], 0xe56080 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007ae15f }
	__asm { L_007ae15d: }
	__asm { xor eax, eax }
	__asm { L_007ae15f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae180
extern "C" __declspec(naked) void asm_007ae180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007ae1bb }
	__asm { mov dword ptr [edx], 0xe560a8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007ae1bd }
	__asm { L_007ae1bb: }
	__asm { xor edx, edx }
	__asm { L_007ae1bd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae1e0
extern "C" __declspec(naked) void asm_007ae1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ae20d }
	__asm { mov dword ptr [eax], 0xe56094 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007ae20f }
	__asm { L_007ae20d: }
	__asm { xor eax, eax }
	__asm { L_007ae20f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae230
extern "C" __declspec(naked) void asm_007ae230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007ae26b }
	__asm { mov dword ptr [edx], 0xe560bc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007ae26d }
	__asm { L_007ae26b: }
	__asm { xor edx, edx }
	__asm { L_007ae26d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae290
extern "C" __declspec(naked) void asm_007ae290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007ae2cb }
	__asm { mov dword ptr [edx], 0xe5606c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007ae2cd }
	__asm { L_007ae2cb: }
	__asm { xor edx, edx }
	__asm { L_007ae2cd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012e1fbc[];
extern "C" void fn_006b9b20();
extern "C" void fn_007b4090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b05b0
extern "C" __declspec(naked) void asm_007b05b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_007b4090 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_007b05cb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_007b05e9 }
	__asm { jmp L_007b05e4 }
	__asm { L_007b05cb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012e1fbc] }
	__asm { cmp edx, eax }
	__asm { ja L_007b05de }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012e1fbc], eax }
	__asm { L_007b05de: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b05e4: }
	__asm { call fn_006b9b20 }
	__asm { L_007b05e9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012e1fc4[];
extern "C" void fn_006b9b20();
extern "C" void fn_007b40f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b0620
extern "C" __declspec(naked) void asm_007b0620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_007b40f0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_007b063b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_007b0659 }
	__asm { jmp L_007b0654 }
	__asm { L_007b063b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012e1fc4] }
	__asm { cmp edx, eax }
	__asm { ja L_007b064e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012e1fc4], eax }
	__asm { L_007b064e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b0654: }
	__asm { call fn_006b9b20 }
	__asm { L_007b0659: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b2f20
extern "C" __declspec(naked) void asm_007b2f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_007b2f73 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_007b2f6a }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_007b2f6a: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b2f73: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007b3bb0
extern "C" __declspec(naked) void asm_007b3bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007b3bc9 }
	__asm { add eax, -0x1c }
	__asm { jmp L_007b3bcb }
	__asm { L_007b3bc9: }
	__asm { xor eax, eax }
	__asm { L_007b3bcb: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { push esi }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0dd4[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792cf0();
extern "C" void fn_007b5110();
// FUNCTION: ROBLOXSTUDIO 0x007b5210
extern "C" __declspec(naked) void asm_007b5210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_007b524f }
	__asm { push esi }
	__asm { push dword ptr [g_012e0dd4] }
	__asm { mov ecx, edi }
	__asm { call fn_00792cc0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_007b524e }
	__asm { L_007b5232: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_007b5110 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00792cf0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_007b5232 }
	__asm { L_007b524e: }
	__asm { pop esi }
	__asm { L_007b524f: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0043eed0();
// FUNCTION: ROBLOXSTUDIO 0x007b6900
extern "C" __declspec(naked) void asm_007b6900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x38] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test esi, esi }
	__asm { je L_007b6936 }
	__asm { cmp esi, eax }
	__asm { je L_007b6936 }
	__asm { test eax, eax }
	__asm { je L_007b692d }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { cmp eax, esi }
	__asm { je L_007b6936 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0043eed0 }
	__asm { test al, al }
	__asm { jne L_007b6936 }
	__asm { L_007b692d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { L_007b6936: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b8a90
extern "C" __declspec(naked) void asm_007b8a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007b8acb }
	__asm { mov dword ptr [edx], 0xe56f40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007b8acd }
	__asm { L_007b8acb: }
	__asm { xor edx, edx }
	__asm { L_007b8acd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b8af0
extern "C" __declspec(naked) void asm_007b8af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007b8b2b }
	__asm { mov dword ptr [edx], 0xe56f54 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007b8b2d }
	__asm { L_007b8b2b: }
	__asm { xor edx, edx }
	__asm { L_007b8b2d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b8b50
extern "C" __declspec(naked) void asm_007b8b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007b8b8b }
	__asm { mov dword ptr [edx], 0xe56f68 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007b8b8d }
	__asm { L_007b8b8b: }
	__asm { xor edx, edx }
	__asm { L_007b8b8d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b8bb0
extern "C" __declspec(naked) void asm_007b8bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007b8beb }
	__asm { mov dword ptr [edx], 0xe56f7c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007b8bed }
	__asm { L_007b8beb: }
	__asm { xor edx, edx }
	__asm { L_007b8bed: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007ba810
extern "C" __declspec(naked) void asm_007ba810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, esi }
	__asm { shr ecx, 1 }
	__asm { mov eax, 0x2aaaaaa }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_007ba849 }
	__asm { xor esi, esi }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007ba849: }
	__asm { add esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b1a40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007bacf0
extern "C" __declspec(naked) void asm_007bacf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007bad25 }
	__asm { add edi, 0x1c }
	__asm { je L_007bad25 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007bad25 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007bad25: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x007bb4f0
extern "C" __declspec(naked) void asm_007bb4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 7 }
	__asm { push 0 }
	__asm { push 0xe56840 }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { je L_007bb516 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007bb516: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { push 0 }
	__asm { push 0xe56880 }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { je L_007bb539 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007bb539: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e357c[];
extern "C" void fn_00790e70();
extern "C" void fn_00a52750();
// FUNCTION: ROBLOXSTUDIO 0x007c39e0
extern "C" __declspec(naked) void asm_007c39e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012e357c], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007c3a23 }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov byte ptr [g_012e357c], 0 }
	__asm { call fn_00a52750 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_007c3a17 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007c3a17: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { L_007c3a23: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00933fa0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007c3d90
extern "C" __declspec(naked) void asm_007c3d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { add ecx, -4 }
	__asm { test eax, eax }
	__asm { je L_007c3dd4 }
	__asm { cmp byte ptr [ecx + 0x40], 0 }
	__asm { jne L_007c3da9 }
	__asm { push eax }
	__asm { call fn_00933fa0 }
	__asm { L_007c3da9: }
	__asm { test eax, eax }
	__asm { je L_007c3dd4 }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_007c3dd4 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x28] }
	__asm { L_007c3dd4: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00933fa0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007c3e10
extern "C" __declspec(naked) void asm_007c3e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { test eax, eax }
	__asm { je L_007c3e60 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_007c3e26 }
	__asm { cmp byte ptr [ecx + 0x40], 0 }
	__asm { je L_007c3e60 }
	__asm { L_007c3e26: }
	__asm { cmp byte ptr [ecx + 0x40], 0 }
	__asm { jne L_007c3e32 }
	__asm { push eax }
	__asm { call fn_00933fa0 }
	__asm { L_007c3e32: }
	__asm { test eax, eax }
	__asm { je L_007c3e60 }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_007c3e60 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], 2 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [edx + 0x28] }
	__asm { L_007c3e60: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004b0630();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c5810
extern "C" __declspec(naked) void asm_007c5810()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_007c5854 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_007c5850 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_007c5837 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_004b0630 }
	__asm { L_007c5837: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_007c5850: }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop esi }
	__asm { L_007c5854: }
	__asm { pop edi }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_007c5600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c5970
extern "C" __declspec(naked) void asm_007c5970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0xa8] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_007c598b }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_007c598b: }
	__asm { cmp dword ptr [esi + 0x9c], 0x10 }
	__asm { jb L_007c59a2 }
	__asm { push dword ptr [esi + 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c59a2: }
	__asm { mov dword ptr [esi + 0x9c], 0xf }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { call fn_007c5600 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_007c59d3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c59d3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b0630();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c5c20
extern "C" __declspec(naked) void asm_007c5c20()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_007c5c66 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_007c5c61 }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { je L_007c5c48 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_004b0630 }
	__asm { L_007c5c48: }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { L_007c5c61: }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { pop esi }
	__asm { L_007c5c66: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c7f00
extern "C" __declspec(naked) void asm_007c7f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007c7f3b }
	__asm { mov dword ptr [edx], 0xe5860c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007c7f3d }
	__asm { L_007c7f3b: }
	__asm { xor edx, edx }
	__asm { L_007c7f3d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c7f60
extern "C" __declspec(naked) void asm_007c7f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007c7f9b }
	__asm { mov dword ptr [edx], 0xe58620 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007c7f9d }
	__asm { L_007c7f9b: }
	__asm { xor edx, edx }
	__asm { L_007c7f9d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c7fc0
extern "C" __declspec(naked) void asm_007c7fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_007c7ffb }
	__asm { mov dword ptr [edx], 0xe585f8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_007c7ffd }
	__asm { L_007c7ffb: }
	__asm { xor edx, edx }
	__asm { L_007c7ffd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007c9de0
extern "C" __declspec(naked) void asm_007c9de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x74], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_007c9e21 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0xa4 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c9e21: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4790();
extern "C" void fn_007c9470();
extern "C" void fn_008e0460();
extern "C" void fn_008e2cc0();
// FUNCTION: ROBLOXSTUDIO 0x007ca4d0
extern "C" __declspec(naked) void asm_007ca4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007b4790 }
	__asm { mov ecx, esi }
	__asm { call fn_007c9470 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { mov edi, eax }
	__asm { cmp ecx, edi }
	__asm { je L_007ca518 }
	__asm { test ecx, ecx }
	__asm { je L_007ca506 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { call fn_008e0460 }
	__asm { L_007ca506: }
	__asm { mov dword ptr [esi + 0x80], edi }
	__asm { test edi, edi }
	__asm { je L_007ca518 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008e2cc0 }
	__asm { L_007ca518: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_007c9470();
extern "C" void fn_008e0460();
extern "C" void fn_008e2cc0();
// FUNCTION: ROBLOXSTUDIO 0x007caa00
extern "C" __declspec(naked) void asm_007caa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x8c], al }
	__asm { je L_007caa5c }
	__asm { push edi }
	__asm { mov byte ptr [esi + 0x8c], al }
	__asm { call fn_007c9470 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { mov edi, eax }
	__asm { cmp ecx, edi }
	__asm { je L_007caa4f }
	__asm { test ecx, ecx }
	__asm { je L_007caa3d }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { call fn_008e0460 }
	__asm { L_007caa3d: }
	__asm { mov dword ptr [esi + 0x80], edi }
	__asm { test edi, edi }
	__asm { je L_007caa4f }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008e2cc0 }
	__asm { L_007caa4f: }
	__asm { push 0x12e3b00 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop edi }
	__asm { L_007caa5c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d12e0
extern "C" __declspec(naked) void asm_007d12e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007d1324 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d12f5 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d12fa }
	__asm { L_007d12f5: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d12fa: }
	__asm { cmp ecx, 0x12be4a4 }
	__asm { jne L_007d1308 }
	__asm { L_007d1302: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d1308: }
	__asm { test eax, eax }
	__asm { je L_007d1310 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1315 }
	__asm { L_007d1310: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1315: }
	__asm { push 0x12be4a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007d1302 }
	__asm { L_007d1324: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d14e0
extern "C" __declspec(naked) void asm_007d14e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007d1524 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d14f5 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d14fa }
	__asm { L_007d14f5: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d14fa: }
	__asm { cmp ecx, 0x12c32cc }
	__asm { jne L_007d1508 }
	__asm { L_007d1502: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d1508: }
	__asm { test eax, eax }
	__asm { je L_007d1510 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1515 }
	__asm { L_007d1510: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1515: }
	__asm { push 0x12c32cc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007d1502 }
	__asm { L_007d1524: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d1530
extern "C" __declspec(naked) void asm_007d1530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007d1574 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d1545 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d154a }
	__asm { L_007d1545: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d154a: }
	__asm { cmp ecx, 0x12c3310 }
	__asm { jne L_007d1558 }
	__asm { L_007d1552: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d1558: }
	__asm { test eax, eax }
	__asm { je L_007d1560 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1565 }
	__asm { L_007d1560: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1565: }
	__asm { push 0x12c3310 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007d1552 }
	__asm { L_007d1574: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d1580
extern "C" __declspec(naked) void asm_007d1580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007d15c4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d1595 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d159a }
	__asm { L_007d1595: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d159a: }
	__asm { cmp ecx, 0x12c33a8 }
	__asm { jne L_007d15a8 }
	__asm { L_007d15a2: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d15a8: }
	__asm { test eax, eax }
	__asm { je L_007d15b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d15b5 }
	__asm { L_007d15b0: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d15b5: }
	__asm { push 0x12c33a8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007d15a2 }
	__asm { L_007d15c4: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d15d0
extern "C" __declspec(naked) void asm_007d15d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007d1614 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d15e5 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d15ea }
	__asm { L_007d15e5: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d15ea: }
	__asm { cmp ecx, 0x11e66c8 }
	__asm { jne L_007d15f8 }
	__asm { L_007d15f2: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d15f8: }
	__asm { test eax, eax }
	__asm { je L_007d1600 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1605 }
	__asm { L_007d1600: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1605: }
	__asm { push 0x11e66c8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007d15f2 }
	__asm { L_007d1614: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d1620
extern "C" __declspec(naked) void asm_007d1620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007d1664 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d1635 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d163a }
	__asm { L_007d1635: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d163a: }
	__asm { cmp ecx, 0x12c37f4 }
	__asm { jne L_007d1648 }
	__asm { L_007d1642: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d1648: }
	__asm { test eax, eax }
	__asm { je L_007d1650 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1655 }
	__asm { L_007d1650: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1655: }
	__asm { push 0x12c37f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007d1642 }
	__asm { L_007d1664: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00792e10();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7400
extern "C" __declspec(naked) void asm_007d7400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7434 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { test al, al }
	__asm { je L_007d7434 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7434: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00792ed0();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7440
extern "C" __declspec(naked) void asm_007d7440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7474 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { test al, al }
	__asm { je L_007d7474 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7474: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00792f70();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7480
extern "C" __declspec(naked) void asm_007d7480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d74b7 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792f70 }
	__asm { test al, al }
	__asm { je L_007d74b7 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d74b7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0e08[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792e10();
extern "C" void fn_00793430();
extern "C" void fn_009004e0();
// FUNCTION: ROBLOXSTUDIO 0x007d7550
extern "C" __declspec(naked) void asm_007d7550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7594 }
	__asm { push dword ptr [g_012e0e08] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00792cc0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x10] }
	__asm { call fn_00792e10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { L_007d7594: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00792e10();
extern "C" void fn_00793430();
extern "C" void fn_008e7680();
// FUNCTION: ROBLOXSTUDIO 0x007d7720
extern "C" __declspec(naked) void asm_007d7720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d775d }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { test al, al }
	__asm { je L_007d775d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_008e7680 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { L_007d775d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0e04[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792e10();
extern "C" void fn_00793430();
extern "C" void fn_009004e0();
// FUNCTION: ROBLOXSTUDIO 0x007d78f0
extern "C" __declspec(naked) void asm_007d78f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7934 }
	__asm { push dword ptr [g_012e0e04] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00792cc0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x10] }
	__asm { call fn_00792e10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { L_007d7934: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007d6610();
// FUNCTION: ROBLOXSTUDIO 0x007d7cd0
extern "C" __declspec(naked) void asm_007d7cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6610 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d7d10 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7d10: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00793380();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7dc0
extern "C" __declspec(naked) void asm_007d7dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7df4 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00793380 }
	__asm { test al, al }
	__asm { je L_007d7df4 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp + 0xf] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7df4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008b8590();
// FUNCTION: ROBLOXSTUDIO 0x007d7e00
extern "C" __declspec(naked) void asm_007d7e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008b8590 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d7e32 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d7e32: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008b86c0();
// FUNCTION: ROBLOXSTUDIO 0x007d7e40
extern "C" __declspec(naked) void asm_007d7e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008b86c0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d7e72 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d7e72: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008b87e0();
// FUNCTION: ROBLOXSTUDIO 0x007d7e80
extern "C" __declspec(naked) void asm_007d7e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008b87e0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d7eb4 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d7eb4: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e6ba0();
// FUNCTION: ROBLOXSTUDIO 0x007d7f70
extern "C" __declspec(naked) void asm_007d7f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008e6ba0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d7fa4 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d7fa4: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x007d8050
extern "C" __declspec(naked) void asm_007d8050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d808f }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d808f: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e7010();
// FUNCTION: ROBLOXSTUDIO 0x007d80a0
extern "C" __declspec(naked) void asm_007d80a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7010 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d80e2 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d80e2: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e70c0();
// FUNCTION: ROBLOXSTUDIO 0x007d80f0
extern "C" __declspec(naked) void asm_007d80f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008e70c0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d8127 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d8127: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e7170();
// FUNCTION: ROBLOXSTUDIO 0x007d8130
extern "C" __declspec(naked) void asm_007d8130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7170 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d8179 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d8179: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e7270();
// FUNCTION: ROBLOXSTUDIO 0x007d8190
extern "C" __declspec(naked) void asm_007d8190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008e7270 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d81cd }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d81cd: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008b8900();
// FUNCTION: ROBLOXSTUDIO 0x007d81e0
extern "C" __declspec(naked) void asm_007d81e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_008b8900 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d8212 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 1] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d8212: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cd560();
extern "C" void fn_0080f990();
// FUNCTION: ROBLOXSTUDIO 0x0080e820
extern "C" __declspec(naked) void asm_0080e820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0080e855 }
	__asm { add edi, 0x1c }
	__asm { je L_0080e855 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080f990 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0080e855 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0080e855: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00824c10
extern "C" __declspec(naked) void asm_00824c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00824c54 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00824c25 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824c2a }
	__asm { L_00824c25: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824c2a: }
	__asm { cmp ecx, 0x12c3428 }
	__asm { jne L_00824c38 }
	__asm { L_00824c32: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824c38: }
	__asm { test eax, eax }
	__asm { je L_00824c40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824c45 }
	__asm { L_00824c40: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824c45: }
	__asm { push 0x12c3428 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00824c32 }
	__asm { L_00824c54: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00825b50
extern "C" __declspec(naked) void asm_00825b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00825b8b }
	__asm { mov dword ptr [edx], 0xe5c0c4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00825b8d }
	__asm { L_00825b8b: }
	__asm { xor edx, edx }
	__asm { L_00825b8d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004031c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00826a70
extern "C" __declspec(naked) void asm_00826a70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00826a84 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00826a84: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00826acc }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00826ab3 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004031c0 }
	__asm { L_00826ab3: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00826acc: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00826b00
extern "C" __declspec(naked) void asm_00826b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { jbe L_00826b3a }
	__asm { push esi }
	__asm { mov edi, edi }
	__asm { L_00826b10: }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00826b1c }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_00826b1e }
	__asm { L_00826b1c: }
	__asm { mov esi, eax }
	__asm { L_00826b1e: }
	__asm { cmp byte ptr [esi + ecx], 0x5c }
	__asm { jne L_00826b33 }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00826b2d }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_00826b2f }
	__asm { L_00826b2d: }
	__asm { mov edx, eax }
	__asm { L_00826b2f: }
	__asm { mov byte ptr [edx + ecx], 0x2f }
	__asm { L_00826b33: }
	__asm { inc ecx }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { jb L_00826b10 }
	__asm { pop esi }
	__asm { L_00826b3a: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00c2cf50();
extern "C" void fn_00c363b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0082a2c0
extern "C" __declspec(naked) void asm_0082a2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082a2e8 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082a2ec }
	__asm { L_0082a2e8: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082a2ec: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5c604 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0082b4d0
extern "C" __declspec(naked) void asm_0082b4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_0082b51c }
	__asm { test esi, esi }
	__asm { jne L_0082b51c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082b50b }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082b51c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082b50b: }
	__asm { movzx eax, al }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082b51c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011edc12[];
extern "C" char g_011edc13[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x0082d7b0
extern "C" __declspec(naked) void asm_0082d7b0()
{
	__asm { cmp byte ptr [g_011edc13], 0 }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { je L_0082d7e6 }
	__asm { test al, al }
	__asm { je L_0082d7d5 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cd14 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082d7d5: }
	__asm { mov byte ptr [g_011edc13], 0 }
	__asm { mov byte ptr [g_011edc12], 1 }
	__asm { ret 4 }
	__asm { L_0082d7e6: }
	__asm { test al, al }
	__asm { je L_0082d7fd }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cd34 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082d7fd: }
	__asm { mov byte ptr [g_011edc13], 1 }
	__asm { mov byte ptr [g_011edc12], 1 }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f610
extern "C" __declspec(naked) void asm_0083f610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f63d }
	__asm { mov dword ptr [eax], 0xe614b8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f63f }
	__asm { L_0083f63d: }
	__asm { xor eax, eax }
	__asm { L_0083f63f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f660
extern "C" __declspec(naked) void asm_0083f660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f68d }
	__asm { mov dword ptr [eax], 0xe6147c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f68f }
	__asm { L_0083f68d: }
	__asm { xor eax, eax }
	__asm { L_0083f68f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f6b0
extern "C" __declspec(naked) void asm_0083f6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f6dd }
	__asm { mov dword ptr [eax], 0xe614a4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f6df }
	__asm { L_0083f6dd: }
	__asm { xor eax, eax }
	__asm { L_0083f6df: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f700
extern "C" __declspec(naked) void asm_0083f700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f72d }
	__asm { mov dword ptr [eax], 0xe61490 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f72f }
	__asm { L_0083f72d: }
	__asm { xor eax, eax }
	__asm { L_0083f72f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f750
extern "C" __declspec(naked) void asm_0083f750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f77d }
	__asm { mov dword ptr [eax], 0xe61468 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f77f }
	__asm { L_0083f77d: }
	__asm { xor eax, eax }
	__asm { L_0083f77f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f7a0
extern "C" __declspec(naked) void asm_0083f7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f7cd }
	__asm { mov dword ptr [eax], 0xe61454 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f7cf }
	__asm { L_0083f7cd: }
	__asm { xor eax, eax }
	__asm { L_0083f7cf: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f7f0
extern "C" __declspec(naked) void asm_0083f7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f81d }
	__asm { mov dword ptr [eax], 0xe61440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f81f }
	__asm { L_0083f81d: }
	__asm { xor eax, eax }
	__asm { L_0083f81f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f840
extern "C" __declspec(naked) void asm_0083f840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0083f86d }
	__asm { mov dword ptr [eax], 0xe6142c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083f86f }
	__asm { L_0083f86d: }
	__asm { xor eax, eax }
	__asm { L_0083f86f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0083f890
extern "C" __declspec(naked) void asm_0083f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0083f8cb }
	__asm { mov dword ptr [edx], 0xe61418 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0083f8cd }
	__asm { L_0083f8cb: }
	__asm { xor edx, edx }
	__asm { L_0083f8cd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00847c10
extern "C" __declspec(naked) void asm_00847c10()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe61374 }
	__asm { mov dword ptr [esi + 0x14], 0xe61380 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe61388 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe61360 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847c61 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847c61 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847c61: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849f20
extern "C" __declspec(naked) void asm_00849f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe61360 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00849f4c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00849f4c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00849f4c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00849f63 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00849f63: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10514[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849f70
extern "C" __declspec(naked) void asm_00849f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe61554 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00849f9c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00849f9c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00849f9c: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe5d3b8 }
	__asm { call dword ptr [g_00e10514] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00849fb9 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00849fb9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00849fc0
extern "C" __declspec(naked) void asm_00849fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe614e4 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00849fec }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00849fec }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00849fec: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0084a003 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084a003: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084a010
extern "C" __declspec(naked) void asm_0084a010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe618a4 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0084a03c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0084a03c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_0084a03c: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0084a053 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084a053: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0084aad0
extern "C" __declspec(naked) void asm_0084aad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 6 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, esi }
	__asm { shr ecx, 1 }
	__asm { mov eax, 0x2492492 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_0084ab0b }
	__asm { xor esi, esi }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0084ab0b: }
	__asm { add esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10300[];
extern "C" char g_00e10310[];
extern "C" char g_00e10314[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084edb0
extern "C" __declspec(naked) void asm_0084edb0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x3c], 0 }
	__asm { je L_0084edec }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, esi }
	__asm { test eax, eax }
	__asm { je L_0084edcd }
	__asm { call dword ptr [g_00e10300] }
	__asm { jmp L_0084edd3 }
	__asm { L_0084edcd: }
	__asm { call dword ptr [g_00e10310] }
	__asm { L_0084edd3: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084edec: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x3c], 0 }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0084f520
extern "C" __declspec(naked) void asm_0084f520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_0084f530: }
	__asm { test eax, eax }
	__asm { je L_0084f539 }
	__asm { lea ecx, [eax - 4] }
	__asm { jmp L_0084f53b }
	__asm { L_0084f539: }
	__asm { xor ecx, ecx }
	__asm { L_0084f53b: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_0084f530 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_011fa332[];
extern "C" void fn_006b98f0();
extern "C" void fn_00b2deb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0085ad30
extern "C" __declspec(naked) void asm_0085ad30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0xcf0 }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_0085ad52 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_0085ad52 }
	__asm { cmp byte ptr [g_011fa332], 0 }
	__asm { jne L_0085ad58 }
	__asm { L_0085ad52: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0085ad58: }
	__asm { push eax }
	__asm { call fn_00b2deb0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe5ee40 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005457f0();
extern "C" void fn_0083dda0();
// FUNCTION: ROBLOXSTUDIO 0x0085ce60
extern "C" __declspec(naked) void asm_0085ce60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_0085ce6e }
	__asm { call fn_005457f0 }
	__asm { jmp L_0085ce70 }
	__asm { L_0085ce6e: }
	__asm { xor eax, eax }
	__asm { L_0085ce70: }
	__asm { mov ecx, dword ptr [eax + 0x178] }
	__asm { test ecx, ecx }
	__asm { je L_0085ce97 }
	__asm { call fn_0083dda0 }
	__asm { test eax, eax }
	__asm { je L_0085ce97 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [eax + 0x68] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0085ce97: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fc98c[];
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x0085d060
extern "C" __declspec(naked) void asm_0085d060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc98c] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0085d085 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe60280 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0085d085: }
	__asm { mov ecx, dword ptr [esi + 0xba0] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x14c] }
	__asm { add ecx, 0x14c }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { call dword ptr [eax] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0085e3a0
extern "C" __declspec(naked) void asm_0085e3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 4] }
	__asm { mov dword ptr [ecx], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x60], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x64], 0x7fffffff }
	__asm { mov dword ptr [ecx + 0x68], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_0085e3d0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0085e3d0: }
	__asm { mov byte ptr [eax], 0 }
	__asm { cmp dword ptr [ecx + 0x30], 0x10 }
	__asm { lea eax, [ecx + 0x1c] }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_0085e3e5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0085e3e5: }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { mov dword ptr [ecx + 0x3c], 0 }
	__asm { mov dword ptr [ecx + 0x40], 6 }
	__asm { mov dword ptr [ecx + 0x44], 0 }
	__asm { mov byte ptr [ecx + 0x48], al }
	__asm { mov dword ptr [ecx + 0x4c], 0x201 }
	__asm { mov dword ptr [ecx + 0x54], 0 }
	__asm { mov dword ptr [ecx + 0x50], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008490b0();
// FUNCTION: ROBLOXSTUDIO 0x0085f540
extern "C" __declspec(naked) void asm_0085f540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0085f553 }
	__asm { add esi, -0x1c }
	__asm { jmp L_0085f555 }
	__asm { L_0085f553: }
	__asm { xor esi, esi }
	__asm { L_0085f555: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, esi }
	__asm { call fn_008490b0 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_0085f570 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { L_0085f570: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0121034e[];
extern "C" void fn_006b8a90();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0085f990
extern "C" __declspec(naked) void asm_0085f990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_0121034e] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0085f9b5 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe60fe0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0085f9b5: }
	__asm { cmp dword ptr [edi + 0xe04], esi }
	__asm { je L_0085f9cf }
	__asm { push 0x12f909c }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0xe04], esi }
	__asm { call fn_007b4f50 }
	__asm { L_0085f9cf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866d40
extern "C" __declspec(naked) void asm_00866d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866d7b }
	__asm { mov dword ptr [edx], 0xe639e4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866d7d }
	__asm { L_00866d7b: }
	__asm { xor edx, edx }
	__asm { L_00866d7d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866da0
extern "C" __declspec(naked) void asm_00866da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866ddb }
	__asm { mov dword ptr [edx], 0xe63a70 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866ddd }
	__asm { L_00866ddb: }
	__asm { xor edx, edx }
	__asm { L_00866ddd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866e00
extern "C" __declspec(naked) void asm_00866e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866e3b }
	__asm { mov dword ptr [edx], 0xe63a5c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866e3d }
	__asm { L_00866e3b: }
	__asm { xor edx, edx }
	__asm { L_00866e3d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866e60
extern "C" __declspec(naked) void asm_00866e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866e9b }
	__asm { mov dword ptr [edx], 0xe63a20 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866e9d }
	__asm { L_00866e9b: }
	__asm { xor edx, edx }
	__asm { L_00866e9d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866ec0
extern "C" __declspec(naked) void asm_00866ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866efb }
	__asm { mov dword ptr [edx], 0xe63a34 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866efd }
	__asm { L_00866efb: }
	__asm { xor edx, edx }
	__asm { L_00866efd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866f20
extern "C" __declspec(naked) void asm_00866f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866f5b }
	__asm { mov dword ptr [edx], 0xe639bc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866f5d }
	__asm { L_00866f5b: }
	__asm { xor edx, edx }
	__asm { L_00866f5d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866f80
extern "C" __declspec(naked) void asm_00866f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00866fbb }
	__asm { mov dword ptr [edx], 0xe63a0c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00866fbd }
	__asm { L_00866fbb: }
	__asm { xor edx, edx }
	__asm { L_00866fbd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00866ff0
extern "C" __declspec(naked) void asm_00866ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0086702b }
	__asm { mov dword ptr [edx], 0xe639d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0086702d }
	__asm { L_0086702b: }
	__asm { xor edx, edx }
	__asm { L_0086702d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00867050
extern "C" __declspec(naked) void asm_00867050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0086708b }
	__asm { mov dword ptr [edx], 0xe639f8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_0086708d }
	__asm { L_0086708b: }
	__asm { xor edx, edx }
	__asm { L_0086708d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008670b0
extern "C" __declspec(naked) void asm_008670b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008670eb }
	__asm { mov dword ptr [edx], 0xe63a48 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008670ed }
	__asm { L_008670eb: }
	__asm { xor edx, edx }
	__asm { L_008670ed: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b2110();
// FUNCTION: ROBLOXSTUDIO 0x00871260
extern "C" __declspec(naked) void asm_00871260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [edx] }
	__asm { inc eax }
	__asm { add eax, edx }
	__asm { je L_00871273 }
	__asm { lea esi, [eax + 1] }
	__asm { jmp L_00871275 }
	__asm { L_00871273: }
	__asm { xor esi, esi }
	__asm { L_00871275: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { call fn_004b2110 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00877760
extern "C" __declspec(naked) void asm_00877760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_0087779f }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00877796 }
	__asm { test al, 1 }
	__asm { jne L_0087778f }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0087778f }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0087778f: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00877796: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087779f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
