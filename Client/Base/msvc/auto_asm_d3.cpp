// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00575a00();
// FUNCTION: ROBLOXSTUDIO 0x005758c0
extern "C" __declspec(naked) void asm_005758c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_005758dc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00575a00 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005758dc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d76f8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00575930();
// FUNCTION: ROBLOXSTUDIO 0x005758f0
extern "C" __declspec(naked) void asm_005758f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00575913 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00575930 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00575913: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d76b4 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12314[];
extern "C" char g_00e125a0[];
// FUNCTION: ROBLOXSTUDIO 0x00575f90
extern "C" __declspec(naked) void asm_00575f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e125a0] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { sub eax, dword ptr [edx + 0x14] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { sub eax, dword ptr [edx + 0x10] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e12314] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0057d610
extern "C" __declspec(naked) void asm_0057d610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94b11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_0057e180();
// FUNCTION: ROBLOXSTUDIO 0x0057df80
extern "C" __declspec(naked) void asm_0057df80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0057df9c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0057e180 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057df9c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d7ce8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0057e030
extern "C" __declspec(naked) void asm_0057e030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x12d7dd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0057e050 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0057e050: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f7c[];
// FUNCTION: ROBLOXSTUDIO 0x00584bd0
extern "C" __declspec(naked) void asm_00584bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push 4 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov esi, eax }
	__asm { lea edx, [esi - 8] }
	__asm { test edx, edx }
	__asm { je L_00584bf4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_00584bf4: }
	__asm { add edx, 4 }
	__asm { je L_00584c02 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [edx], al }
	__asm { mov eax, esi }
	__asm { L_00584c02: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00584ee0();
// FUNCTION: ROBLOXSTUDIO 0x00584e20
extern "C" __declspec(naked) void asm_00584e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00584e43 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00584ee0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00584e43: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d8108 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x005852c0
extern "C" __declspec(naked) void asm_005852c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c08e8 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x005852f0
extern "C" __declspec(naked) void asm_005852f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x12c08e8 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x00586680
extern "C" __declspec(naked) void asm_00586680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0968 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x005866c0
extern "C" __declspec(naked) void asm_005866c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 4 }
	__asm { push 0x12c0968 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x00588160
extern "C" __declspec(naked) void asm_00588160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0a08 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x00589890
extern "C" __declspec(naked) void asm_00589890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0b08 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0058e510
extern "C" __declspec(naked) void asm_0058e510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { test eax, eax }
	__asm { je L_0058e53a }
	__asm { mov dword ptr [eax], 0x1036ff0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax], 0x1036fdc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058e53a: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012bfc74[];
extern "C" char g_01318fc4[];
// FUNCTION: ROBLOXSTUDIO 0x0058fec0
extern "C" __declspec(naked) void asm_0058fec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x40] }
	__asm { cmp dword ptr [edx + 8], 0 }
	__asm { je L_0058fedb }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { dec dword ptr [edx + 8] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0058fedb: }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012bfc74] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00591530
extern "C" __declspec(naked) void asm_00591530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x28 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00591568 }
	__asm { mov dword ptr [eax], 0x1036ff0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax], 0x1036b94 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00591568: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x005915c0
extern "C" __declspec(naked) void asm_005915c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0x90 }
	__asm { mov ecx, dword ptr [eax - 0x90] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0x90 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_00595280();
// FUNCTION: ROBLOXSTUDIO 0x00595250
extern "C" __declspec(naked) void asm_00595250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00595280 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00595275 }
	__asm { test esi, esi }
	__asm { je L_00595275 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00595275: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x00595da0
extern "C" __declspec(naked) void asm_00595da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x1036d34 }
	__asm { je L_00595dc2 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00595dc2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x00595e40
extern "C" __declspec(naked) void asm_00595e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x1036df4 }
	__asm { je L_00595e62 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00595e62: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005960c0();
// FUNCTION: ROBLOXSTUDIO 0x00595fb0
extern "C" __declspec(naked) void asm_00595fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_005960c0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00595fd5 }
	__asm { test esi, esi }
	__asm { je L_00595fd5 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00595fd5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_0059ad40();
// FUNCTION: ROBLOXSTUDIO 0x0059b5a0
extern "C" __declspec(naked) void asm_0059b5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0059ad40 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0059b5c5 }
	__asm { test esi, esi }
	__asm { je L_0059b5c5 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059b5c5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059c570
extern "C" __declspec(naked) void asm_0059c570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x1036f3c }
	__asm { mov byte ptr [ecx + 0x14], 1 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005a01f0
extern "C" __declspec(naked) void asm_005a01f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { jle L_005a0221 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 8 }
	__asm { L_005a0200: }
	__asm { mov dword ptr [eax - 8], 0 }
	__asm { mov dword ptr [eax - 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { lea eax, [eax + 0x10] }
	__asm { dec ecx }
	__asm { jne L_005a0200 }
	__asm { L_005a0221: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0059df60();
// FUNCTION: ROBLOXSTUDIO 0x005ac330
extern "C" __declspec(naked) void asm_005ac330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0059df60 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x005b2ec0
extern "C" __declspec(naked) void asm_005b2ec0()
{
	__asm { L_005b2ec0: }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { test esi, esi }
	__asm { je L_005b2edc }
	__asm { mov ecx, esi }
	__asm { call L_005b2ec0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005b2edc: }
	__asm { mov esi, dword ptr [ebx + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_005b2ef4 }
	__asm { mov ecx, esi }
	__asm { call L_005b2ec0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005b2ef4: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005b4460();
// FUNCTION: ROBLOXSTUDIO 0x005b2f20
extern "C" __declspec(naked) void asm_005b2f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x103732c }
	__asm { call fn_005b4460 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005b2f47 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005b2f47: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005b4460();
// FUNCTION: ROBLOXSTUDIO 0x005b40c0
extern "C" __declspec(naked) void asm_005b40c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_005b4460 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005b40e5 }
	__asm { test esi, esi }
	__asm { je L_005b40e5 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005b40e5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005c7ee0
extern "C" __declspec(naked) void asm_005c7ee0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0x30] }
	__asm { test esi, esi }
	__asm { je L_005c7eee }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { L_005c7eee: }
	__asm { mov esi, dword ptr [edx + 0x2c] }
	__asm { test esi, esi }
	__asm { je L_005c7efb }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { L_005c7efb: }
	__asm { pop esi }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_005c7f05 }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005c7f05: }
	__asm { dec dword ptr [ecx + 4] }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005d6540();
// FUNCTION: ROBLOXSTUDIO 0x005d6510
extern "C" __declspec(naked) void asm_005d6510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_005d6540 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005d6535 }
	__asm { test esi, esi }
	__asm { je L_005d6535 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d6535: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005db380
extern "C" __declspec(naked) void asm_005db380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, esi }
	__asm { je L_005db3b0 }
	__asm { mov edx, ecx }
	__asm { sub edx, eax }
	__asm { L_005db395: }
	__asm { fld dword ptr [ecx] }
	__asm { add ecx, 0xc }
	__asm { fstp dword ptr [eax] }
	__asm { add eax, 0xc }
	__asm { fld dword ptr [edx + eax - 8] }
	__asm { fstp dword ptr [eax - 8] }
	__asm { fld dword ptr [ecx - 4] }
	__asm { fstp dword ptr [eax - 4] }
	__asm { cmp ecx, esi }
	__asm { jne L_005db395 }
	__asm { L_005db3b0: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00409230();
// FUNCTION: ROBLOXSTUDIO 0x005dd480
extern "C" __declspec(naked) void asm_005dd480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 2 }
	__asm { cmp eax, edx }
	__asm { jae L_005dd4ae }
	__asm { cmp edx, 0x3fffffff }
	__asm { jbe L_005dd4a5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005dd4a5: }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00409230 }
	__asm { L_005dd4ae: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e136b4[];
extern "C" void fn_005dc4a0();
// FUNCTION: ROBLOXSTUDIO 0x005dd670
extern "C" __declspec(naked) void asm_005dd670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { mov esi, ecx }
	__asm { je L_005dd6a1 }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_005dc4a0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_005dd6a0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_005dd69d }
	__asm { push ecx }
	__asm { call dword ptr [g_00e136b4] }
	__asm { add esp, 4 }
	__asm { L_005dd69d: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { L_005dd6a0: }
	__asm { pop edi }
	__asm { L_005dd6a1: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x005e16c0
extern "C" __declspec(naked) void asm_005e16c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe19990 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e3a50
extern "C" __declspec(naked) void asm_005e3a50()
{
	__asm { push 0x34 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_005e3a64 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_005e3a64: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_005e3a6f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005e3a6f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_005e3a78 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005e3a78: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_005e5560();
// FUNCTION: ROBLOXSTUDIO 0x005e5140
extern "C" __declspec(naked) void asm_005e5140()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { cmp dword ptr [ecx*8 + 0xe1a98c], 0 }
	__asm { jne L_005e5168 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { call fn_005e5560 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { L_005e5168: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_005e55d0();
// FUNCTION: ROBLOXSTUDIO 0x005e53b0
extern "C" __declspec(naked) void asm_005e53b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { cmp dword ptr [ecx*8 + 0xe1a98c], 0 }
	__asm { jne L_005e53d8 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { call fn_005e55d0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { L_005e53d8: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e5e00
extern "C" __declspec(naked) void asm_005e5e00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { push edi }
	__asm { call dword ptr [edx + 0x170] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { push edi }
	__asm { call dword ptr [ecx + 0x1ac] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_005e76f0();
extern "C" void fn_008bb540();
// FUNCTION: ROBLOXSTUDIO 0x005e7920
extern "C" __declspec(naked) void asm_005e7920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_008bb540 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e7944 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005e76f0 }
	__asm { mov eax, esi }
	__asm { L_005e7944: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e8b40
extern "C" __declspec(naked) void asm_005e8b40()
{
	__asm { push 0x2c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_005e8b54 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_005e8b54: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_005e8b5f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005e8b5f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_005e8b68 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005e8b68: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e8b70
extern "C" __declspec(naked) void asm_005e8b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_005e8ba8 }
	__asm { nop }
	__asm { L_005e8b80: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_005e8b90 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e8b90: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { add esi, 0x24 }
	__asm { cmp esi, edi }
	__asm { jne L_005e8b80 }
	__asm { L_005e8ba8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005ea030();
// FUNCTION: ROBLOXSTUDIO 0x005e9f80
extern "C" __declspec(naked) void asm_005e9f80()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { cmp dword ptr [ecx*8 + 0xe1b7b0], 0 }
	__asm { jne L_005e9fbc }
	__asm { push dword ptr [ecx*8 + 0xe1b7b4] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { push dword ptr [esi + 0x38] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { call fn_005ea030 }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { L_005e9fbc: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e9fc0
extern "C" __declspec(naked) void asm_005e9fc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x50] }
	__asm { test edx, edx }
	__asm { je L_005e9fe4 }
	__asm { cmp byte ptr [esi + 0x54], 0 }
	__asm { je L_005e9fe4 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x7c] }
	__asm { mov byte ptr [esi + 0x54], 0 }
	__asm { L_005e9fe4: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005eaf20
extern "C" __declspec(naked) void asm_005eaf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jb L_005eaf41 }
	__asm { cmp dword ptr [ecx], edx }
	__asm { jb L_005eaf3b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jb L_005eaf41 }
	__asm { L_005eaf3b: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005eaf41: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005eb3a0
extern "C" __declspec(naked) void asm_005eb3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax + 0x18] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [edx + 0x48] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov dword ptr [ecx], 0xe1c6bc }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x005eb9b0
extern "C" __declspec(naked) void asm_005eb9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0060f3f0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi], 0xe1ca58 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0060f500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005eba70
extern "C" __declspec(naked) void asm_005eba70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe1ca6c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_005eba9e }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_005eba9e: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0060f500 }
}

extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x005ebb20
extern "C" __declspec(naked) void asm_005ebb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0060f3f0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi], 0xe1ca7c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x005ebb50
extern "C" __declspec(naked) void asm_005ebb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0060f3f0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi], 0xe1ca98 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x005ebb80
extern "C" __declspec(naked) void asm_005ebb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0060f3f0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi], 0xe1cab4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e108c4[];
extern "C" void fn_005f2830();
// FUNCTION: ROBLOXSTUDIO 0x005f1630
extern "C" __declspec(naked) void asm_005f1630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x1f03 }
	__asm { call dword ptr [g_00e108c4] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_005f164a }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005f164a: }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx], al }
	__asm { je L_005f1657 }
	__asm { L_005f1650: }
	__asm { inc eax }
	__asm { cmp byte ptr [eax + ecx], 0 }
	__asm { jne L_005f1650 }
	__asm { L_005f1657: }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005f2830 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da940[];
extern "C" char g_012da948[];
// FUNCTION: ROBLOXSTUDIO 0x005f4330
extern "C" __declspec(naked) void asm_005f4330()
{
	__asm { push ebx }
	__asm { push 0xe1e338 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1e358 }
	__asm { mov dword ptr [g_012da940], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012da948], eax }
	__asm { test eax, eax }
	__asm { je L_005f4362 }
	__asm { test bl, bl }
	__asm { jne L_005f4362 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4362: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dab14[];
extern "C" char g_012dab18[];
// FUNCTION: ROBLOXSTUDIO 0x005f4870
extern "C" __declspec(naked) void asm_005f4870()
{
	__asm { push ebx }
	__asm { push 0xe1e84c }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1e864 }
	__asm { mov dword ptr [g_012dab14], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dab18], eax }
	__asm { test eax, eax }
	__asm { je L_005f48a2 }
	__asm { test bl, bl }
	__asm { jne L_005f48a2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f48a2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dab3c[];
extern "C" char g_012dab44[];
// FUNCTION: ROBLOXSTUDIO 0x005f4900
extern "C" __declspec(naked) void asm_005f4900()
{
	__asm { push ebx }
	__asm { push 0xe1e8d4 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1e8f4 }
	__asm { mov dword ptr [g_012dab3c], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dab44], eax }
	__asm { test eax, eax }
	__asm { je L_005f4932 }
	__asm { test bl, bl }
	__asm { jne L_005f4932 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4932: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daca4[];
extern "C" char g_012dacb0[];
// FUNCTION: ROBLOXSTUDIO 0x005f4cf0
extern "C" __declspec(naked) void asm_005f4cf0()
{
	__asm { push ebx }
	__asm { push 0xe1ed34 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1ed54 }
	__asm { mov dword ptr [g_012daca4], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dacb0], eax }
	__asm { test eax, eax }
	__asm { je L_005f4d22 }
	__asm { test bl, bl }
	__asm { jne L_005f4d22 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4d22: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dadb4[];
extern "C" char g_012dadc0[];
// FUNCTION: ROBLOXSTUDIO 0x005f5070
extern "C" __declspec(naked) void asm_005f5070()
{
	__asm { push ebx }
	__asm { push 0xe1f014 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1f02c }
	__asm { mov dword ptr [g_012dadb4], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dadc0], eax }
	__asm { test eax, eax }
	__asm { je L_005f50a2 }
	__asm { test bl, bl }
	__asm { jne L_005f50a2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f50a2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db09c[];
extern "C" char g_012db0a8[];
// FUNCTION: ROBLOXSTUDIO 0x005f5840
extern "C" __declspec(naked) void asm_005f5840()
{
	__asm { push ebx }
	__asm { push 0xe1f764 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1f788 }
	__asm { mov dword ptr [g_012db09c], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db0a8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5872 }
	__asm { test bl, bl }
	__asm { jne L_005f5872 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5872: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db110[];
extern "C" char g_012db11c[];
// FUNCTION: ROBLOXSTUDIO 0x005f59a0
extern "C" __declspec(naked) void asm_005f59a0()
{
	__asm { push ebx }
	__asm { push 0xe1f8c8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1f8e4 }
	__asm { mov dword ptr [g_012db110], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db11c], eax }
	__asm { test eax, eax }
	__asm { je L_005f59d2 }
	__asm { test bl, bl }
	__asm { jne L_005f59d2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f59d2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db320[];
extern "C" char g_012db324[];
// FUNCTION: ROBLOXSTUDIO 0x005f5f10
extern "C" __declspec(naked) void asm_005f5f10()
{
	__asm { push ebx }
	__asm { push 0xe1fde8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe1fe00 }
	__asm { mov dword ptr [g_012db320], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db324], eax }
	__asm { test eax, eax }
	__asm { je L_005f5f42 }
	__asm { test bl, bl }
	__asm { jne L_005f5f42 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5f42: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db7d4[];
extern "C" char g_012db7e4[];
// FUNCTION: ROBLOXSTUDIO 0x005f6890
extern "C" __declspec(naked) void asm_005f6890()
{
	__asm { push ebx }
	__asm { push 0xe2076c }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe20780 }
	__asm { mov dword ptr [g_012db7d4], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db7e4], eax }
	__asm { test eax, eax }
	__asm { je L_005f68c2 }
	__asm { test bl, bl }
	__asm { jne L_005f68c2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f68c2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dba54[];
extern "C" char g_012dba5c[];
// FUNCTION: ROBLOXSTUDIO 0x005f6db0
extern "C" __declspec(naked) void asm_005f6db0()
{
	__asm { push ebx }
	__asm { push 0xe20c18 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe20c30 }
	__asm { mov dword ptr [g_012dba54], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dba5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f6de2 }
	__asm { test bl, bl }
	__asm { jne L_005f6de2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f6de2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbabc[];
extern "C" char g_012dbac4[];
// FUNCTION: ROBLOXSTUDIO 0x005f6f00
extern "C" __declspec(naked) void asm_005f6f00()
{
	__asm { push ebx }
	__asm { push 0xe20ce8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe20cfc }
	__asm { mov dword ptr [g_012dbabc], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dbac4], eax }
	__asm { test eax, eax }
	__asm { je L_005f6f32 }
	__asm { test bl, bl }
	__asm { jne L_005f6f32 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f6f32: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc08[];
extern "C" char g_012dbc10[];
// FUNCTION: ROBLOXSTUDIO 0x005f72f0
extern "C" __declspec(naked) void asm_005f72f0()
{
	__asm { push ebx }
	__asm { push 0xe21090 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe210b4 }
	__asm { mov dword ptr [g_012dbc08], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dbc10], eax }
	__asm { test eax, eax }
	__asm { je L_005f7322 }
	__asm { test bl, bl }
	__asm { jne L_005f7322 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f7322: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9c88[];
extern "C" char g_012d9c94[];
// FUNCTION: ROBLOXSTUDIO 0x005f85f0
extern "C" __declspec(naked) void asm_005f85f0()
{
	__asm { push ebx }
	__asm { push 0xe22260 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe22278 }
	__asm { mov dword ptr [g_012d9c88], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9c94], eax }
	__asm { test eax, eax }
	__asm { je L_005f8622 }
	__asm { test bl, bl }
	__asm { jne L_005f8622 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8622: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9c98[];
extern "C" char g_012d9ca0[];
// FUNCTION: ROBLOXSTUDIO 0x005f8630
extern "C" __declspec(naked) void asm_005f8630()
{
	__asm { push ebx }
	__asm { push 0xe22290 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe222a4 }
	__asm { mov dword ptr [g_012d9c98], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9ca0], eax }
	__asm { test eax, eax }
	__asm { je L_005f8662 }
	__asm { test bl, bl }
	__asm { jne L_005f8662 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8662: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9ca8[];
extern "C" char g_012d9cb0[];
// FUNCTION: ROBLOXSTUDIO 0x005f8670
extern "C" __declspec(naked) void asm_005f8670()
{
	__asm { push ebx }
	__asm { push 0xe222b8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe222d4 }
	__asm { mov dword ptr [g_012d9ca8], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9cb0], eax }
	__asm { test eax, eax }
	__asm { je L_005f86a2 }
	__asm { test bl, bl }
	__asm { jne L_005f86a2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f86a2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9f7c[];
extern "C" char g_012d9f84[];
// FUNCTION: ROBLOXSTUDIO 0x005f8ce0
extern "C" __declspec(naked) void asm_005f8ce0()
{
	__asm { push ebx }
	__asm { push 0xe22908 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe2291c }
	__asm { mov dword ptr [g_012d9f7c], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9f84], eax }
	__asm { test eax, eax }
	__asm { je L_005f8d12 }
	__asm { test bl, bl }
	__asm { jne L_005f8d12 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8d12: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9f90[];
extern "C" char g_012d9f9c[];
// FUNCTION: ROBLOXSTUDIO 0x005f8d20
extern "C" __declspec(naked) void asm_005f8d20()
{
	__asm { push ebx }
	__asm { push 0xe22934 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe22944 }
	__asm { mov dword ptr [g_012d9f90], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9f9c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8d52 }
	__asm { test bl, bl }
	__asm { jne L_005f8d52 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8d52: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da048[];
extern "C" char g_012da050[];
// FUNCTION: ROBLOXSTUDIO 0x005f8e90
extern "C" __declspec(naked) void asm_005f8e90()
{
	__asm { push ebx }
	__asm { push 0xe22acc }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe22ae4 }
	__asm { mov dword ptr [g_012da048], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012da050], eax }
	__asm { test eax, eax }
	__asm { je L_005f8ec2 }
	__asm { test bl, bl }
	__asm { jne L_005f8ec2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8ec2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da098[];
extern "C" char g_012da0a4[];
// FUNCTION: ROBLOXSTUDIO 0x005f8f50
extern "C" __declspec(naked) void asm_005f8f50()
{
	__asm { push ebx }
	__asm { push 0xe22b68 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe22b80 }
	__asm { mov dword ptr [g_012da098], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012da0a4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8f82 }
	__asm { test bl, bl }
	__asm { jne L_005f8f82 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8f82: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daad8[];
extern "C" char g_012daae0[];
// FUNCTION: ROBLOXSTUDIO 0x005fa790
extern "C" __declspec(naked) void asm_005fa790()
{
	__asm { push ebx }
	__asm { push 0xe24888 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe248a8 }
	__asm { mov dword ptr [g_012daad8], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012daae0], eax }
	__asm { test eax, eax }
	__asm { je L_005fa7c2 }
	__asm { test bl, bl }
	__asm { jne L_005fa7c2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fa7c2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daca8[];
extern "C" char g_012dacac[];
// FUNCTION: ROBLOXSTUDIO 0x005fac50
extern "C" __declspec(naked) void asm_005fac50()
{
	__asm { push ebx }
	__asm { push 0xe24d18 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe24d30 }
	__asm { mov dword ptr [g_012daca8], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dacac], eax }
	__asm { test eax, eax }
	__asm { je L_005fac82 }
	__asm { test bl, bl }
	__asm { jne L_005fac82 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fac82: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dacb8[];
extern "C" char g_012dacbc[];
// FUNCTION: ROBLOXSTUDIO 0x005fac90
extern "C" __declspec(naked) void asm_005fac90()
{
	__asm { push ebx }
	__asm { push 0xe24d48 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe24d58 }
	__asm { mov dword ptr [g_012dacb8], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dacbc], eax }
	__asm { test eax, eax }
	__asm { je L_005facc2 }
	__asm { test bl, bl }
	__asm { jne L_005facc2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005facc2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dad44[];
extern "C" char g_012dad50[];
// FUNCTION: ROBLOXSTUDIO 0x005fae50
extern "C" __declspec(naked) void asm_005fae50()
{
	__asm { push ebx }
	__asm { push 0xe24ef4 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe24f04 }
	__asm { mov dword ptr [g_012dad44], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dad50], eax }
	__asm { test eax, eax }
	__asm { je L_005fae82 }
	__asm { test bl, bl }
	__asm { jne L_005fae82 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fae82: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daed0[];
extern "C" char g_012daed8[];
// FUNCTION: ROBLOXSTUDIO 0x005fb2c0
extern "C" __declspec(naked) void asm_005fb2c0()
{
	__asm { push ebx }
	__asm { push 0xe252d8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe252f0 }
	__asm { mov dword ptr [g_012daed0], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012daed8], eax }
	__asm { test eax, eax }
	__asm { je L_005fb2f2 }
	__asm { test bl, bl }
	__asm { jne L_005fb2f2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb2f2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db1b4[];
extern "C" char g_012db1c0[];
// FUNCTION: ROBLOXSTUDIO 0x005fba60
extern "C" __declspec(naked) void asm_005fba60()
{
	__asm { push ebx }
	__asm { push 0xe25a88 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe25aa4 }
	__asm { mov dword ptr [g_012db1b4], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db1c0], eax }
	__asm { test eax, eax }
	__asm { je L_005fba92 }
	__asm { test bl, bl }
	__asm { jne L_005fba92 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fba92: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db250[];
extern "C" char g_012db254[];
// FUNCTION: ROBLOXSTUDIO 0x005fbc20
extern "C" __declspec(naked) void asm_005fbc20()
{
	__asm { push ebx }
	__asm { push 0xe25c34 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe25c4c }
	__asm { mov dword ptr [g_012db250], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db254], eax }
	__asm { test eax, eax }
	__asm { je L_005fbc52 }
	__asm { test bl, bl }
	__asm { jne L_005fbc52 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fbc52: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db3c4[];
extern "C" char g_012db3d0[];
// FUNCTION: ROBLOXSTUDIO 0x005fc010
extern "C" __declspec(naked) void asm_005fc010()
{
	__asm { push ebx }
	__asm { push 0xe25f90 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe25fac }
	__asm { mov dword ptr [g_012db3c4], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db3d0], eax }
	__asm { test eax, eax }
	__asm { je L_005fc042 }
	__asm { test bl, bl }
	__asm { jne L_005fc042 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc042: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db3dc[];
extern "C" char g_012db3e0[];
// FUNCTION: ROBLOXSTUDIO 0x005fc050
extern "C" __declspec(naked) void asm_005fc050()
{
	__asm { push ebx }
	__asm { push 0xe25fc8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe25fec }
	__asm { mov dword ptr [g_012db3dc], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db3e0], eax }
	__asm { test eax, eax }
	__asm { je L_005fc082 }
	__asm { test bl, bl }
	__asm { jne L_005fc082 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc082: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db480[];
extern "C" char g_012db484[];
// FUNCTION: ROBLOXSTUDIO 0x005fc1c0
extern "C" __declspec(naked) void asm_005fc1c0()
{
	__asm { push ebx }
	__asm { push 0xe26184 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe26198 }
	__asm { mov dword ptr [g_012db480], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db484], eax }
	__asm { test eax, eax }
	__asm { je L_005fc1f2 }
	__asm { test bl, bl }
	__asm { jne L_005fc1f2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc1f2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc64[];
extern "C" char g_012dbc6c[];
// FUNCTION: ROBLOXSTUDIO 0x005fd2f0
extern "C" __declspec(naked) void asm_005fd2f0()
{
	__asm { push ebx }
	__asm { push 0xe27194 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe271ac }
	__asm { mov dword ptr [g_012dbc64], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dbc6c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd322 }
	__asm { test bl, bl }
	__asm { jne L_005fd322 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd322: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc74[];
extern "C" char g_012dbc80[];
// FUNCTION: ROBLOXSTUDIO 0x005fd330
extern "C" __declspec(naked) void asm_005fd330()
{
	__asm { push ebx }
	__asm { push 0xe271c0 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe271d4 }
	__asm { mov dword ptr [g_012dbc74], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dbc80], eax }
	__asm { test eax, eax }
	__asm { je L_005fd362 }
	__asm { test bl, bl }
	__asm { jne L_005fd362 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd362: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbcb8[];
extern "C" char g_012dbcc0[];
// FUNCTION: ROBLOXSTUDIO 0x005fd400
extern "C" __declspec(naked) void asm_005fd400()
{
	__asm { push ebx }
	__asm { push 0xe27268 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe27284 }
	__asm { mov dword ptr [g_012dbcb8], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dbcc0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd432 }
	__asm { test bl, bl }
	__asm { jne L_005fd432 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd432: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbd2c[];
extern "C" char g_012dbd38[];
// FUNCTION: ROBLOXSTUDIO 0x005fd570
extern "C" __declspec(naked) void asm_005fd570()
{
	__asm { push ebx }
	__asm { push 0xe27414 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe27434 }
	__asm { mov dword ptr [g_012dbd2c], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012dbd38], eax }
	__asm { test eax, eax }
	__asm { je L_005fd5a2 }
	__asm { test bl, bl }
	__asm { jne L_005fd5a2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd5a2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d98c0[];
extern "C" char g_012d98cc[];
// FUNCTION: ROBLOXSTUDIO 0x005fda30
extern "C" __declspec(naked) void asm_005fda30()
{
	__asm { push ebx }
	__asm { push 0xe2795c }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe27978 }
	__asm { mov dword ptr [g_012d98c0], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d98cc], eax }
	__asm { test eax, eax }
	__asm { je L_005fda62 }
	__asm { test bl, bl }
	__asm { jne L_005fda62 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fda62: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9e08[];
extern "C" char g_012d9e10[];
// FUNCTION: ROBLOXSTUDIO 0x005fe8f0
extern "C" __declspec(naked) void asm_005fe8f0()
{
	__asm { push ebx }
	__asm { push 0xe2869c }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe286b0 }
	__asm { mov dword ptr [g_012d9e08], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9e10], eax }
	__asm { test eax, eax }
	__asm { je L_005fe922 }
	__asm { test bl, bl }
	__asm { jne L_005fe922 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe922: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9e24[];
extern "C" char g_012d9e30[];
// FUNCTION: ROBLOXSTUDIO 0x005fe930
extern "C" __declspec(naked) void asm_005fe930()
{
	__asm { push ebx }
	__asm { push 0xe286c8 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe286d8 }
	__asm { mov dword ptr [g_012d9e24], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9e30], eax }
	__asm { test eax, eax }
	__asm { je L_005fe962 }
	__asm { test bl, bl }
	__asm { jne L_005fe962 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe962: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9e38[];
extern "C" char g_012d9e40[];
// FUNCTION: ROBLOXSTUDIO 0x005fe970
extern "C" __declspec(naked) void asm_005fe970()
{
	__asm { push ebx }
	__asm { push 0xe286ec }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe28700 }
	__asm { mov dword ptr [g_012d9e38], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9e40], eax }
	__asm { test eax, eax }
	__asm { je L_005fe9a2 }
	__asm { test bl, bl }
	__asm { jne L_005fe9a2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe9a2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9e50[];
extern "C" char g_012d9e5c[];
// FUNCTION: ROBLOXSTUDIO 0x005fe9b0
extern "C" __declspec(naked) void asm_005fe9b0()
{
	__asm { push ebx }
	__asm { push 0xe28714 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe2872c }
	__asm { mov dword ptr [g_012d9e50], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9e5c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe9e2 }
	__asm { test bl, bl }
	__asm { jne L_005fe9e2 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe9e2: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9e64[];
extern "C" char g_012d9e74[];
// FUNCTION: ROBLOXSTUDIO 0x005fe9f0
extern "C" __declspec(naked) void asm_005fe9f0()
{
	__asm { push ebx }
	__asm { push 0xe28744 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe28758 }
	__asm { mov dword ptr [g_012d9e64], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9e74], eax }
	__asm { test eax, eax }
	__asm { je L_005fea22 }
	__asm { test bl, bl }
	__asm { jne L_005fea22 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fea22: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9e84[];
extern "C" char g_012d9e8c[];
// FUNCTION: ROBLOXSTUDIO 0x005fea30
extern "C" __declspec(naked) void asm_005fea30()
{
	__asm { push ebx }
	__asm { push 0xe2876c }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe28784 }
	__asm { mov dword ptr [g_012d9e84], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012d9e8c], eax }
	__asm { test eax, eax }
	__asm { je L_005fea62 }
	__asm { test bl, bl }
	__asm { jne L_005fea62 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fea62: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e1300c[];
// FUNCTION: ROBLOXSTUDIO 0x00606360
extern "C" __declspec(naked) void asm_00606360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 4] }
	__asm { call dword ptr [g_00e1300c] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { sub edx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012da20c[];
extern "C" void fn_00606530();
// FUNCTION: ROBLOXSTUDIO 0x006076e0
extern "C" __declspec(naked) void asm_006076e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { test eax, eax }
	__asm { je L_00607704 }
	__asm { cmp byte ptr [esi + 0x48], 0 }
	__asm { jne L_00607704 }
	__asm { push eax }
	__asm { push 0x88bf }
	__asm { call dword ptr [g_012da20c] }
	__asm { L_00607704: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { call fn_00606530 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00607ac0
extern "C" __declspec(naked) void asm_00607ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe30644 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006090c0
extern "C" __declspec(naked) void asm_006090c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_006090ec }
	__asm { L_006090d2: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { add ecx, 0xc }
	__asm { add esi, 0xc }
	__asm { cmp ecx, edi }
	__asm { jne L_006090d2 }
	__asm { L_006090ec: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006092d0
extern "C" __declspec(naked) void asm_006092d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edx }
	__asm { je L_006092f3 }
	__asm { push ebx }
	__asm { L_006092e1: }
	__asm { test eax, eax }
	__asm { je L_006092e9 }
	__asm { mov bl, byte ptr [ecx] }
	__asm { mov byte ptr [eax], bl }
	__asm { L_006092e9: }
	__asm { inc ecx }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_006092e1 }
	__asm { pop ebx }
	__asm { L_006092f3: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060aef0
extern "C" __declspec(naked) void asm_0060aef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe319bc }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060b070
extern "C" __declspec(naked) void asm_0060b070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe319bc }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0060ce00();
extern "C" void fn_00626a40();
// FUNCTION: ROBLOXSTUDIO 0x0060ce80
extern "C" __declspec(naked) void asm_0060ce80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00626a40 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0060cea4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0060ce00 }
	__asm { mov eax, esi }
	__asm { L_0060cea4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060ddc0
extern "C" __declspec(naked) void asm_0060ddc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_0060ddf8 }
	__asm { nop }
	__asm { L_0060ddd0: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0060dde0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060dde0: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { add esi, 0x28 }
	__asm { cmp esi, edi }
	__asm { jne L_0060ddd0 }
	__asm { L_0060ddf8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060de00
extern "C" __declspec(naked) void asm_0060de00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_0060de38 }
	__asm { nop }
	__asm { L_0060de10: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0060de20 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060de20: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { add esi, 0x1c }
	__asm { cmp esi, edi }
	__asm { jne L_0060de10 }
	__asm { L_0060de38: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0060fef0
extern "C" __declspec(naked) void asm_0060fef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov edx, dword ptr [edx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp edx, ecx }
	__asm { je L_0060ff27 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { L_0060ff27: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00610420();
// FUNCTION: ROBLOXSTUDIO 0x006101f0
extern "C" __declspec(naked) void asm_006101f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_0061021f }
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
	__asm { L_0061021f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00610600
extern "C" __declspec(naked) void asm_00610600()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp dword ptr [edi], esi }
	__asm { je L_00610632 }
	__asm { cmp dword ptr [esi - 4], 0x10 }
	__asm { jb L_0061061c }
	__asm { push dword ptr [esi - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0061061c: }
	__asm { mov dword ptr [esi - 4], 0xf }
	__asm { mov dword ptr [esi - 8], 0 }
	__asm { mov byte ptr [esi - 0x18], 0 }
	__asm { add dword ptr [edi + 4], -0x18 }
	__asm { L_00610632: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00610640
extern "C" __declspec(naked) void asm_00610640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00610840
extern "C" __declspec(naked) void asm_00610840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_00610850: }
	__asm { test eax, eax }
	__asm { jne L_0061085c }
	__asm { test edx, edx }
	__asm { jne L_0061085c }
	__asm { test ecx, ecx }
	__asm { je L_00610865 }
	__asm { L_0061085c: }
	__asm { inc esi }
	__asm { shr eax, 1 }
	__asm { shr edx, 1 }
	__asm { shr ecx, 1 }
	__asm { jmp L_00610850 }
	__asm { L_00610865: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_006aab60();
// FUNCTION: ROBLOXSTUDIO 0x00611710
extern "C" __declspec(naked) void asm_00611710()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov dword ptr [edi + 0x68], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov dword ptr [edi + 0x74], eax }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx + 0x19c] }
	__asm { pop esi }
	__asm { jmp fn_006aab60 }
}

// FUNCTION: ROBLOXSTUDIO 0x00619d20
extern "C" __declspec(naked) void asm_00619d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0061c020
extern "C" __declspec(naked) void asm_0061c020()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0061c04a }
	__asm { cmp dword ptr [esi + 0x44], 0 }
	__asm { je L_0061c04a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_0061c04a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012dc240[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x006202b0
extern "C" __declspec(naked) void asm_006202b0()
{
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006202d4 }
	__asm { push esi }
	__asm { push dword ptr [esi + 4] }
	__asm { movzx eax, al }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xe347d0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006202d4: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 4] }
}

extern "C" char g_012dc240[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x006203c0
extern "C" __declspec(naked) void asm_006203c0()
{
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006203e4 }
	__asm { push esi }
	__asm { push dword ptr [esi + 4] }
	__asm { movzx eax, al }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xe348a8 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006203e4: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0xce], 1 }
	__asm { ret }
}

extern "C" char g_012dc240[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00620400
extern "C" __declspec(naked) void asm_00620400()
{
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00620424 }
	__asm { push esi }
	__asm { push dword ptr [esi + 4] }
	__asm { movzx eax, al }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xe348f0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00620424: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0xce], 1 }
	__asm { ret }
}

extern "C" char g_012dc240[];
extern "C" void fn_00681500();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x00620f40
extern "C" __declspec(naked) void asm_00620f40()
{
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00620f5e }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe34cb8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00620f5e: }
	__asm { cmp byte ptr [esi + 0xcd], 0 }
	__asm { jne L_00620f7d }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov byte ptr [esi + 0xcd], 1 }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { push esi }
	__asm { call fn_00681500 }
	__asm { L_00620f7d: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012dc240[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00621830
extern "C" __declspec(naked) void asm_00621830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0xcc], 0 }
	__asm { jne L_00621866 }
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { test al, al }
	__asm { je L_0062185f }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe34fac }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0062185f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00621866: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00622430
extern "C" __declspec(naked) void asm_00622430()
{
	__asm { cmp dword ptr [ecx + 0xc4], 0 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov eax, dword ptr [eax + 0x1c8] }
	__asm { je L_00622448 }
	__asm { add eax, 0xb4 }
	__asm { ret }
	__asm { L_00622448: }
	__asm { cmp byte ptr [ecx + 0xcc], 0 }
	__asm { je L_00622457 }
	__asm { add eax, 0xac }
	__asm { ret }
	__asm { L_00622457: }
	__asm { add eax, 0xa4 }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00624a40
extern "C" __declspec(naked) void asm_00624a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00624a57 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00624a57: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0052e690();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00624a70
extern "C" __declspec(naked) void asm_00624a70()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0052e690 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00624a8e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00624a8e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00629f20();
// FUNCTION: ROBLOXSTUDIO 0x00624ce0
extern "C" __declspec(naked) void asm_00624ce0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00629f20 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0060de00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00625d40
extern "C" __declspec(naked) void asm_00625d40()
{
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { je L_00625d7c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi] }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00625d7c: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00626830
extern "C" __declspec(naked) void asm_00626830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jb L_00626851 }
	__asm { cmp dword ptr [ecx], edx }
	__asm { jb L_0062684b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jl L_00626851 }
	__asm { L_0062684b: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00626851: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00626a00
extern "C" __declspec(naked) void asm_00626a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x48 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00626a17 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00626a17: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00626a24 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00626a27 }
	__asm { L_00626a24: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00626a27: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00626a32 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00626a32: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00626a40
extern "C" __declspec(naked) void asm_00626a40()
{
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00626a59 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00626a59: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00626a68 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00626a68: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00626a73 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00626a73: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00625d80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00627030
extern "C" __declspec(naked) void asm_00627030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00627061 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00625d80 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_00627061: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00627660();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0063c010
extern "C" __declspec(naked) void asm_0063c010()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00627660 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0063c02e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0063c02e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0052e610();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0063c040
extern "C" __declspec(naked) void asm_0063c040()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0052e610 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0063c05e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0063c05e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006471a0
extern "C" __declspec(naked) void asm_006471a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [ecx + 0x34] }
	__asm { jae L_006471c3 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp eax, dword ptr [ecx + 0x38] }
	__asm { jae L_006471c3 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x3c] }
	__asm { jae L_006471c3 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006471c3: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0064ad30
extern "C" __declspec(naked) void asm_0064ad30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x4014] }
	__asm { cmp edx, dword ptr [ecx + 0x4014] }
	__asm { jb L_0064ad53 }
	__asm { jne L_0064ad4f }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { ja L_0064ad53 }
	__asm { L_0064ad4f: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064ad53: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0064ada0
extern "C" __declspec(naked) void asm_0064ada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [eax*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { test eax, eax }
	__asm { jns L_0064adbb }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064adbb: }
	__asm { mov ecx, dword ptr [ecx + 0x12dce54] }
	__asm { cmp eax, ecx }
	__asm { jl L_0064adca }
	__asm { sub eax, ecx }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064adca: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0064add0
extern "C" __declspec(naked) void asm_0064add0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0064adf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0064ade1: }
	__asm { test eax, eax }
	__asm { je L_0064ade9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0064ade9: }
	__asm { add eax, 4 }
	__asm { dec edx }
	__asm { jne L_0064ade1 }
	__asm { pop esi }
	__asm { L_0064adf0: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00655680
extern "C" __declspec(naked) void asm_00655680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov edx, dword ptr [edi + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov edx, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 0x5c] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00681240();
extern "C" void fn_006812d0();
// FUNCTION: ROBLOXSTUDIO 0x00655eb0
extern "C" __declspec(naked) void asm_00655eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00655ecb }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { pop ebp }
	__asm { jmp fn_006812d0 }
	__asm { L_00655ecb: }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { pop ebp }
	__asm { jmp fn_00681240 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00657210
extern "C" __declspec(naked) void asm_00657210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_00657248 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6698 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00657248: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00658760
extern "C" __declspec(naked) void asm_00658760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { je L_0065878e }
	__asm { cmp eax, 0xccccccc }
	__asm { ja L_00658788 }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0065878e }
	__asm { L_00658788: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0065878e: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00667670();
// FUNCTION: ROBLOXSTUDIO 0x00662ed0
extern "C" __declspec(naked) void asm_00662ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00667670 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00666e70();
// FUNCTION: ROBLOXSTUDIO 0x00662f00
extern "C" __declspec(naked) void asm_00662f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00666e70 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00663830
extern "C" __declspec(naked) void asm_00663830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0066384e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00663841: }
	__asm { test eax, eax }
	__asm { je L_00663849 }
	__asm { mov cl, byte ptr [esi] }
	__asm { mov byte ptr [eax], cl }
	__asm { L_00663849: }
	__asm { inc eax }
	__asm { dec edx }
	__asm { jne L_00663841 }
	__asm { pop esi }
	__asm { L_0066384e: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00665970
extern "C" __declspec(naked) void asm_00665970()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0066599c }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0066599c: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00668bb0();
extern "C" void fn_00668c70();
// FUNCTION: ROBLOXSTUDIO 0x00668b70
extern "C" __declspec(naked) void asm_00668b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x74] }
	__asm { mov edx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00668b98 }
	__asm { dec eax }
	__asm { je L_00668b8d }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00668b8d: }
	__asm { call fn_00668bb0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00668b98: }
	__asm { push edx }
	__asm { call fn_00668c70 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0066c370
extern "C" __declspec(naked) void asm_0066c370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edx }
	__asm { je L_0066c399 }
	__asm { push esi }
	__asm { L_0066c381: }
	__asm { test eax, eax }
	__asm { je L_0066c38b }
	__asm { mov si, word ptr [ecx] }
	__asm { mov word ptr [eax], si }
	__asm { L_0066c38b: }
	__asm { add ecx, 2 }
	__asm { add eax, 2 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_0066c381 }
	__asm { pop esi }
	__asm { L_0066c399: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0066eaa0();
extern "C" void fn_00686550();
// FUNCTION: ROBLOXSTUDIO 0x0066e5e0
extern "C" __declspec(naked) void asm_0066e5e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jne L_0066e5fe }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { call fn_00686550 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0066e5fe: }
	__asm { call fn_0066eaa0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { mov byte ptr [esi + 0xf4], 0 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00681240();
extern "C" void fn_006812d0();
// FUNCTION: ROBLOXSTUDIO 0x0066ea70
extern "C" __declspec(naked) void asm_0066ea70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_0066ea8b }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { pop ebp }
	__asm { jmp fn_006812d0 }
	__asm { L_0066ea8b: }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { pop ebp }
	__asm { jmp fn_00681240 }
}

extern "C" void fn_00672360();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00670f10
extern "C" __declspec(naked) void asm_00670f10()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00672360 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00670f2e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00670f2e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00673360
extern "C" __declspec(naked) void asm_00673360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fabs }
	__asm { fld dword ptr [eax + 4] }
	__asm { fabs }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, ecx }
	__asm { fabs }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { pop ebp }
	__asm { ret 4 }
}
