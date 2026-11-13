// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004028a0
extern "C" __declspec(naked) void asm_004028a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004028b4 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004028b4: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00403a40
extern "C" __declspec(naked) void asm_00403a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x10], edx }
	__asm { jb L_00403a59 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax + edx], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00403a59: }
	__asm { mov byte ptr [ecx + edx], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00409b40
extern "C" __declspec(naked) void asm_00409b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00409b5b }
	__asm { nop }
	__asm { L_00409b50: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00409b50 }
	__asm { L_00409b5b: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00409b60
extern "C" __declspec(naked) void asm_00409b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00409b7a }
	__asm { mov edi, edi }
	__asm { L_00409b70: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00409b70 }
	__asm { L_00409b7a: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0040c310
extern "C" __declspec(naked) void asm_0040c310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_0040c325 }
	__asm { mov al, byte ptr [edx + eax - 0x1c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040c325: }
	__asm { xor edx, edx }
	__asm { mov al, byte ptr [edx + eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040c380
extern "C" __declspec(naked) void asm_0040c380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_0040c395 }
	__asm { mov eax, dword ptr [edx + eax - 0x1c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040c395: }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040d810
extern "C" __declspec(naked) void asm_0040d810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0040d821 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d821: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4ec0();
// FUNCTION: ROBLOXSTUDIO 0x0040df80
extern "C" __declspec(naked) void asm_0040df80()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call fn_007b4ec0 }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_0040df9b }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0040df9b: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0040e1f0
extern "C" __declspec(naked) void asm_0040e1f0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdba8 }
	__asm { jne L_0040e1ff }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0040e1ff: }
	__asm { push eax }
	__asm { mov ecx, 0x12bdba8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0040e3c0
extern "C" __declspec(naked) void asm_0040e3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0040e3dd }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { L_0040e3dd: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0040fe40
extern "C" __declspec(naked) void asm_0040fe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_0040fe5a }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 8 }
	__asm { call dword ptr [eax] }
	__asm { L_0040fe5a: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de6c8[];
extern "C" void fn_004105d0();
// FUNCTION: ROBLOXSTUDIO 0x00410640
extern "C" __declspec(naked) void asm_00410640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012de6c8], 0 }
	__asm { je L_0041065a }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12de6c8 }
	__asm { call fn_004105d0 }
	__asm { L_0041065a: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004107d0
extern "C" __declspec(naked) void asm_004107d0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdfc0 }
	__asm { jne L_004107df }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_004107df: }
	__asm { push eax }
	__asm { mov ecx, 0x12bdfc0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00410980
extern "C" __declspec(naked) void asm_00410980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00410991 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { L_00410991: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00410b90
extern "C" __declspec(naked) void asm_00410b90()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12bdfcc }
	__asm { jne L_00410b9f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00410b9f: }
	__asm { push eax }
	__asm { mov ecx, 0x12bdfcc }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00410d30
extern "C" __declspec(naked) void asm_00410d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00410d41 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ecx], al }
	__asm { L_00410d41: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x004119b0
extern "C" __declspec(naked) void asm_004119b0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be4a4 }
	__asm { jne L_004119bf }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_004119bf: }
	__asm { push eax }
	__asm { mov ecx, 0x12be4a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00412660
extern "C" __declspec(naked) void asm_00412660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00412670 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00412670: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00412e50
extern "C" __declspec(naked) void asm_00412e50()
{
	__asm { test ecx, ecx }
	__asm { je L_00412e5a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00412e5a: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004254d0
extern "C" __declspec(naked) void asm_004254d0()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_004254e4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_004254e4: }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00426f50();
// FUNCTION: ROBLOXSTUDIO 0x00425580
extern "C" __declspec(naked) void asm_00425580()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00425599 }
	__asm { mov ecx, esi }
	__asm { call fn_00426f50 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00425599: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004258f0
extern "C" __declspec(naked) void asm_004258f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00425907 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_00425907: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00426f50();
// FUNCTION: ROBLOXSTUDIO 0x004259f0
extern "C" __declspec(naked) void asm_004259f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00425a0c }
	__asm { mov ecx, esi }
	__asm { call fn_00426f50 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00425a0c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00426ef0
extern "C" __declspec(naked) void asm_00426ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00426f09 }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00426f09: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00427630
extern "C" __declspec(naked) void asm_00427630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 4] }
	__asm { jne L_00427648 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00427648 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00427648: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1022c[];
extern "C" char g_012fc98f[];
extern "C" void fn_0042b600();
// FUNCTION: ROBLOXSTUDIO 0x0042a4f0
extern "C" __declspec(naked) void asm_0042a4f0()
{
	__asm { mov al, byte ptr [g_012fc98f] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0042a510 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0x1005c1c }
	__asm { push eax }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { L_0042a510: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0042b600 }
}

extern "C" char g_00e1022c[];
extern "C" char g_012fc98f[];
extern "C" void fn_0042b600();
// FUNCTION: ROBLOXSTUDIO 0x0042a520
extern "C" __declspec(naked) void asm_0042a520()
{
	__asm { mov al, byte ptr [g_012fc98f] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0042a540 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0x1005c44 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { L_0042a540: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0042b600 }
}

// FUNCTION: ROBLOXSTUDIO 0x0042add0
extern "C" __declspec(naked) void asm_0042add0()
{
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_0042adee }
	__asm { mov eax, dword ptr [eax + 0x54] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_0042ade8 }
	__asm { add ecx, 0xf0 }
	__asm { jmp L_0042adea }
	__asm { L_0042ade8: }
	__asm { xor ecx, ecx }
	__asm { L_0042adea: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax] }
	__asm { L_0042adee: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0042bd50
extern "C" __declspec(naked) void asm_0042bd50()
{
	__asm { cmp dword ptr [ecx + 0x14], 8 }
	__asm { jb L_0042bd59 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { ret }
	__asm { L_0042bd59: }
	__asm { mov eax, ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0042c000
extern "C" __declspec(naked) void asm_0042c000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x14], 8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x10], edx }
	__asm { jb L_0042c01b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edx*2], cx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042c01b: }
	__asm { xor eax, eax }
	__asm { mov word ptr [ecx + edx*2], ax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00402150();
// FUNCTION: ROBLOXSTUDIO 0x0042d820
extern "C" __declspec(naked) void asm_0042d820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_0042d83c }
	__asm { mov ecx, esi }
	__asm { call fn_00402150 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042d83c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1057c[];
// FUNCTION: ROBLOXSTUDIO 0x0042d8e0
extern "C" __declspec(naked) void asm_0042d8e0()
{
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { test eax, eax }
	__asm { je L_0042d8ef }
	__asm { push eax }
	__asm { call dword ptr [g_00e1057c] }
	__asm { pop ecx }
	__asm { L_0042d8ef: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0042e030
extern "C" __declspec(naked) void asm_0042e030()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { lea eax, [ecx + 0x44] }
	__asm { cmp dword ptr [esi], eax }
	__asm { jne L_0042e04f }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov edx, dword ptr [ecx + 0x3c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { sub edx, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { L_0042e04f: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de648[];
// FUNCTION: ROBLOXSTUDIO 0x0042e6c0
extern "C" __declspec(naked) void asm_0042e6c0()
{
	__asm { mov ecx, dword ptr [g_012de648] }
	__asm { test ecx, ecx }
	__asm { je L_0042e6ce }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax] }
	__asm { L_0042e6ce: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" char g_012e0eb4[];
extern "C" void fn_007a61b0();
extern "C" void fn_007a61f0();
// FUNCTION: ROBLOXSTUDIO 0x00433b80
extern "C" __declspec(naked) void asm_00433b80()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00433ba0 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_00433b9b }
	__asm { push dword ptr [eax + 0x58] }
	__asm { call fn_007a61f0 }
	__asm { ret }
	__asm { L_00433b9b: }
	__asm { jmp fn_007a61b0 }
	__asm { L_00433ba0: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00436ac0
extern "C" __declspec(naked) void asm_00436ac0()
{
	__asm { mov ecx, dword ptr [ecx] }
	__asm { test ecx, ecx }
	__asm { je L_00436acc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00436acc: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0043f020
extern "C" __declspec(naked) void asm_0043f020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_0043f034 }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_0043f034: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
// FUNCTION: ROBLOXSTUDIO 0x004452c0
extern "C" __declspec(naked) void asm_004452c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_004452e5 }
	__asm { push 0x100a258 }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { L_004452e5: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00449aa0
extern "C" __declspec(naked) void asm_00449aa0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_00449ab1 }
	__asm { add eax, -0x5c }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { ret }
	__asm { L_00449ab1: }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044a630
extern "C" __declspec(naked) void asm_0044a630()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c37f4 }
	__asm { jne L_0044a63f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044a63f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c37f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044a780
extern "C" __declspec(naked) void asm_0044a780()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c37d8 }
	__asm { jne L_0044a78f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044a78f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c37d8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044a880
extern "C" __declspec(naked) void asm_0044a880()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c37b8 }
	__asm { jne L_0044a88f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044a88f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c37b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044a970
extern "C" __declspec(naked) void asm_0044a970()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3798 }
	__asm { jne L_0044a97f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044a97f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c3798 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044aa90
extern "C" __declspec(naked) void asm_0044aa90()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c377c }
	__asm { jne L_0044aa9f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044aa9f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c377c }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044ac00
extern "C" __declspec(naked) void asm_0044ac00()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c375c }
	__asm { jne L_0044ac0f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044ac0f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c375c }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044ad30
extern "C" __declspec(naked) void asm_0044ad30()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3884 }
	__asm { jne L_0044ad3f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044ad3f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c3884 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044ae80
extern "C" __declspec(naked) void asm_0044ae80()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3744 }
	__asm { jne L_0044ae8f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044ae8f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c3744 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044af80
extern "C" __declspec(naked) void asm_0044af80()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c372c }
	__asm { jne L_0044af8f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044af8f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c372c }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044b0a0
extern "C" __declspec(naked) void asm_0044b0a0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c35e0 }
	__asm { jne L_0044b0af }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044b0af: }
	__asm { push eax }
	__asm { mov ecx, 0x12c35e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044b1d0
extern "C" __declspec(naked) void asm_0044b1d0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3428 }
	__asm { jne L_0044b1df }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044b1df: }
	__asm { push eax }
	__asm { mov ecx, 0x12c3428 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044b300
extern "C" __declspec(naked) void asm_0044b300()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c33a8 }
	__asm { jne L_0044b30f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044b30f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c33a8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044b430
extern "C" __declspec(naked) void asm_0044b430()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3310 }
	__asm { jne L_0044b43f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044b43f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c3310 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044b560
extern "C" __declspec(naked) void asm_0044b560()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c32cc }
	__asm { jne L_0044b56f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044b56f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c32cc }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044b690
extern "C" __declspec(naked) void asm_0044b690()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c32a4 }
	__asm { jne L_0044b69f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044b69f: }
	__asm { push eax }
	__asm { mov ecx, 0x12c32a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0044d0f0
extern "C" __declspec(naked) void asm_0044d0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0044d109 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { mov word ptr [edx + 4], ax }
	__asm { L_0044d109: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0044d110
extern "C" __declspec(naked) void asm_0044d110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0044d127 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0044d127: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0044da30
extern "C" __declspec(naked) void asm_0044da30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0044da4d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_0044da4d: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044db50
extern "C" __declspec(naked) void asm_0044db50()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { jne L_0044db5f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044db5f: }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044dec0
extern "C" __declspec(naked) void asm_0044dec0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c38a0 }
	__asm { jne L_0044decf }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044decf: }
	__asm { push eax }
	__asm { mov ecx, 0x12c38a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0044e0b0
extern "C" __declspec(naked) void asm_0044e0b0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c38c0 }
	__asm { jne L_0044e0bf }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0044e0bf: }
	__asm { push eax }
	__asm { mov ecx, 0x12c38c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0045f4a0
extern "C" __declspec(naked) void asm_0045f4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0045f4b6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_0045f4b6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00465e60();
// FUNCTION: ROBLOXSTUDIO 0x00465e10
extern "C" __declspec(naked) void asm_00465e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00465e24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00465e60 }
	__asm { L_00465e24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c6608 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00467de0();
// FUNCTION: ROBLOXSTUDIO 0x00467d10
extern "C" __declspec(naked) void asm_00467d10()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00467d1d }
	__asm { push ecx }
	__asm { call fn_00467de0 }
	__asm { L_00467d1d: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0046e600
extern "C" __declspec(naked) void asm_0046e600()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e611 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0046e611: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00471aa0();
extern "C" void fn_004769c0();
// FUNCTION: ROBLOXSTUDIO 0x00471b70
extern "C" __declspec(naked) void asm_00471b70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_004769c0 }
	__asm { test al, al }
	__asm { jne L_00471b7e }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00471b7e: }
	__asm { mov ecx, esi }
	__asm { call fn_00471aa0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00472220();
extern "C" void fn_004769c0();
// FUNCTION: ROBLOXSTUDIO 0x00472300
extern "C" __declspec(naked) void asm_00472300()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_004769c0 }
	__asm { test al, al }
	__asm { jne L_0047230e }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0047230e: }
	__asm { mov ecx, esi }
	__asm { call fn_00472220 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00478740
extern "C" __declspec(naked) void asm_00478740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00478763 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00478763: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e131b0[];
// FUNCTION: ROBLOXSTUDIO 0x0047a090
extern "C" __declspec(naked) void asm_0047a090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_0047a0b1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047a0b1: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e131b0[];
// FUNCTION: ROBLOXSTUDIO 0x0047a2f0
extern "C" __declspec(naked) void asm_0047a2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_0047a30d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0047a30d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00489990();
// FUNCTION: ROBLOXSTUDIO 0x00489630
extern "C" __declspec(naked) void asm_00489630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00489644 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00489990 }
	__asm { L_00489644: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c83f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048af30();
// FUNCTION: ROBLOXSTUDIO 0x0048b070
extern "C" __declspec(naked) void asm_0048b070()
{
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0048b07d }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ecx], edx }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0048b07d: }
	__asm { call fn_0048af30 }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0048b110
extern "C" __declspec(naked) void asm_0048b110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp edx, eax }
	__asm { ja L_0048b123 }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0048b123: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10d1c[];
// FUNCTION: ROBLOXSTUDIO 0x0048bd90
extern "C" __declspec(naked) void asm_0048bd90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test esi, esi }
	__asm { je L_0048bda5 }
	__asm { call dword ptr [g_00e10d1c] }
	__asm { test al, al }
	__asm { je L_0048bda5 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0048bda5: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490a20
extern "C" __declspec(naked) void asm_00490a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x7c] }
	__asm { je L_00490a3f }
	__asm { mov dword ptr [ecx + 0x7c], eax }
	__asm { push 0x1319d50 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490a3f: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490a50
extern "C" __declspec(naked) void asm_00490a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x6c] }
	__asm { je L_00490a6f }
	__asm { mov dword ptr [ecx + 0x6c], eax }
	__asm { push 0x1319a94 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490a6f: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490a80
extern "C" __declspec(naked) void asm_00490a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x74] }
	__asm { je L_00490a9f }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { push 0x1319ac8 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490a9f: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490ab0
extern "C" __declspec(naked) void asm_00490ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x70] }
	__asm { je L_00490acf }
	__asm { mov dword ptr [ecx + 0x70], eax }
	__asm { push 0x1319c14 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490acf: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490ae0
extern "C" __declspec(naked) void asm_00490ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x78] }
	__asm { je L_00490aff }
	__asm { mov dword ptr [ecx + 0x78], eax }
	__asm { push 0x1319afc }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490aff: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490b10
extern "C" __declspec(naked) void asm_00490b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x18] }
	__asm { je L_00490b2e }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov dword ptr [ebp + 8], 0x1319afc }
	__asm { add ecx, 0x70 }
	__asm { pop ebp }
	__asm { jmp fn_00490c50 }
	__asm { L_00490b2e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00492f80
extern "C" __declspec(naked) void asm_00492f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00492f97 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 8 }
	__asm { call dword ptr [eax] }
	__asm { L_00492f97: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00496280();
// FUNCTION: ROBLOXSTUDIO 0x00496230
extern "C" __declspec(naked) void asm_00496230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00496244 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00496280 }
	__asm { L_00496244: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ca978 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e13304[];
// FUNCTION: ROBLOXSTUDIO 0x00499c60
extern "C" __declspec(naked) void asm_00499c60()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00499c7a }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e13304] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00499c7a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10c90[];
// FUNCTION: ROBLOXSTUDIO 0x0049fee0
extern "C" __declspec(naked) void asm_0049fee0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0049fef2 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10c90] }
	__asm { L_0049fef2: }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b5210();
// FUNCTION: ROBLOXSTUDIO 0x004b3b80
extern "C" __declspec(naked) void asm_004b3b80()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_004b3b99 }
	__asm { mov ecx, esi }
	__asm { call fn_004b5210 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b3b99: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de6c8[];
extern "C" void fn_004105d0();
// FUNCTION: ROBLOXSTUDIO 0x004c8700
extern "C" __declspec(naked) void asm_004c8700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [g_012de6c8], 0 }
	__asm { je L_004c8717 }
	__asm { mov ecx, 0x12de6c8 }
	__asm { pop ebp }
	__asm { jmp fn_004105d0 }
	__asm { L_004c8717: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004cef90
extern "C" __declspec(naked) void asm_004cef90()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_004cef9d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_004cef9d: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004d1b10
extern "C" __declspec(naked) void asm_004d1b10()
{
	__asm { cmp dword ptr [ecx + 0x3c], 0 }
	__asm { je L_004d1b22 }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { sar eax, 3 }
	__asm { ret }
	__asm { L_004d1b22: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_004b52e0();
// FUNCTION: ROBLOXSTUDIO 0x004d1e00
extern "C" __declspec(naked) void asm_004d1e00()
{
	__asm { cmp dword ptr [ecx + 0x30], 0 }
	__asm { jne L_004d1e09 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_004d1e09: }
	__asm { push dword ptr [ecx + 8] }
	__asm { lea ecx, [ecx + 0x30] }
	__asm { call fn_004b52e0 }
	__asm { ret }
}

extern "C" void fn_004b52e0();
// FUNCTION: ROBLOXSTUDIO 0x004d1e20
extern "C" __declspec(naked) void asm_004d1e20()
{
	__asm { cmp dword ptr [ecx + 0x50], 0 }
	__asm { lea eax, [ecx + 0x50] }
	__asm { jne L_004d1e2c }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_004d1e2c: }
	__asm { push dword ptr [ecx + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_004b52e0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004d4140
extern "C" __declspec(naked) void asm_004d4140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jne L_004d4159 }
	__asm { mov dword ptr [eax], 0x23 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004d4159: }
	__asm { mov dword ptr [eax], 0x21 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e125cc[];
// FUNCTION: ROBLOXSTUDIO 0x004d6670
extern "C" __declspec(naked) void asm_004d6670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_004d668e }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e125cc] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004d668e: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11170[];
// FUNCTION: ROBLOXSTUDIO 0x004ef860
extern "C" __declspec(naked) void asm_004ef860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x410], 0 }
	__asm { je L_004ef873 }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11170] }
	__asm { L_004ef873: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004f3950
extern "C" __declspec(naked) void asm_004f3950()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x3c4] }
	__asm { test ecx, ecx }
	__asm { je L_004f396e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 0x3c4], 0 }
	__asm { L_004f396e: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0049a3f0();
// FUNCTION: ROBLOXSTUDIO 0x004f4ed0
extern "C" __declspec(naked) void asm_004f4ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x8c] }
	__asm { je L_004f4eee }
	__asm { mov byte ptr [ecx + 0x8c], al }
	__asm { push eax }
	__asm { add ecx, 0x68 }
	__asm { call fn_0049a3f0 }
	__asm { L_004f4eee: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004fe8b0
extern "C" __declspec(naked) void asm_004fe8b0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004fe8c2 }
	__asm { L_004fe8b8: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_004fe8b8 }
	__asm { L_004fe8c2: }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" void fn_005001c0();
// FUNCTION: ROBLOXSTUDIO 0x00500130
extern "C" __declspec(naked) void asm_00500130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_005001c0 }
	__asm { lea edx, [eax + 0x10] }
	__asm { mov word ptr [eax + 0xc], 0 }
	__asm { test edx, edx }
	__asm { je L_0050014c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_0050014c: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00500330
extern "C" __declspec(naked) void asm_00500330()
{
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { jb L_00500343 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0 }
	__asm { ret }
	__asm { L_00500343: }
	__asm { mov byte ptr [ecx], 0 }
	__asm { ret }
}

extern "C" char g_00e12bcc[];
extern "C" void fn_005014f0();
// FUNCTION: ROBLOXSTUDIO 0x00502710
extern "C" __declspec(naked) void asm_00502710()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x38], 0 }
	__asm { je L_00502725 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { call fn_005014f0 }
	__asm { mov byte ptr [esi + 0x38], 0 }
	__asm { L_00502725: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e12bcc] }
}

extern "C" char g_00e11504[];
extern "C" char g_00e12908[];
// FUNCTION: ROBLOXSTUDIO 0x0050f840
extern "C" __declspec(naked) void asm_0050f840()
{
	__asm { cmp dword ptr [ecx + 0x3c], 0 }
	__asm { je L_0050f849 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_0050f849: }
	__asm { mov ecx, dword ptr [ecx + 0x40] }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { jmp dword ptr [g_00e11504] }
}

// FUNCTION: ROBLOXSTUDIO 0x00510420
extern "C" __declspec(naked) void asm_00510420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { test ecx, ecx }
	__asm { je L_00510433 }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x58] }
	__asm { L_00510433: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041ace0();
extern "C" void fn_00421600();
// FUNCTION: ROBLOXSTUDIO 0x00520640
extern "C" __declspec(naked) void asm_00520640()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0052065e }
	__asm { call fn_0041ace0 }
	__asm { test eax, eax }
	__asm { je L_0052065e }
	__asm { mov ecx, eax }
	__asm { call fn_00421600 }
	__asm { test eax, eax }
	__asm { je L_0052065e }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_0052065e: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00524020
extern "C" __declspec(naked) void asm_00524020()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [eax + 0xba0] }
	__asm { test eax, eax }
	__asm { je L_00524034 }
	__asm { mov al, byte ptr [eax + 0x1d9] }
	__asm { ret }
	__asm { L_00524034: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_01318fb3[];
extern "C" void fn_0047ec70();
// FUNCTION: ROBLOXSTUDIO 0x00525cc0
extern "C" __declspec(naked) void asm_00525cc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0047ec70 }
	__asm { cmp byte ptr [eax + 0x8d], 0 }
	__asm { je L_00525ce4 }
	__asm { cmp byte ptr [g_01318fb3], 0 }
	__asm { jne L_00525ce4 }
	__asm { cmp byte ptr [esi + 0x45], 0 }
	__asm { jne L_00525ce4 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00525ce4: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0052fcf0
extern "C" __declspec(naked) void asm_0052fcf0()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0052fcfe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0052fcfe: }
	__asm { ret }
}

extern "C" void fn_00536fb0();
// FUNCTION: ROBLOXSTUDIO 0x00538010
extern "C" __declspec(naked) void asm_00538010()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00536fb0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_00538026 }
	__asm { and dword ptr [esi + 0x3c], 0xfffffffd }
	__asm { L_00538026: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_005461c0();
// FUNCTION: ROBLOXSTUDIO 0x00546090
extern "C" __declspec(naked) void asm_00546090()
{
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0054609d }
	__asm { push ecx }
	__asm { call fn_005461c0 }
	__asm { L_0054609d: }
	__asm { ret }
}

extern "C" char g_00e116a4[];
extern "C" void fn_005505c0();
// FUNCTION: ROBLOXSTUDIO 0x0054e600
extern "C" __declspec(naked) void asm_0054e600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp word ptr [eax + 8], 0x6e }
	__asm { jne L_0054e619 }
	__asm { push eax }
	__asm { call fn_005505c0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0054e619: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e116a4] }
}

extern "C" void fn_004c92a0();
// FUNCTION: ROBLOXSTUDIO 0x00573220
extern "C" __declspec(naked) void asm_00573220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00573243 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00573243 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dl, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax + ecx + 0x124], dl }
	__asm { L_00573243: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0057e100();
// FUNCTION: ROBLOXSTUDIO 0x0057df30
extern "C" __declspec(naked) void asm_0057df30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0057df44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0057e100 }
	__asm { L_0057df44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d7d80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc6c[];
// FUNCTION: ROBLOXSTUDIO 0x0058a080
extern "C" __declspec(naked) void asm_0058a080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0058a096 }
	__asm { push dword ptr [eax - 4] }
	__asm { call dword ptr [g_012bfc6c] }
	__asm { add esp, 4 }
	__asm { L_0058a096: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058a0b0
extern "C" __declspec(naked) void asm_0058a0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0058a0ca }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_012bfc70] }
	__asm { L_0058a0ca: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e5e00();
// FUNCTION: ROBLOXSTUDIO 0x005dfa60
extern "C" __declspec(naked) void asm_005dfa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x18], ecx }
	__asm { je L_005dfa75 }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { call fn_005e5e00 }
	__asm { L_005dfa75: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e0810
extern "C" __declspec(naked) void asm_005e0810()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x2c] }
	__asm { test edx, edx }
	__asm { je L_005e0827 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_005e0827: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e3d00
extern "C" __declspec(naked) void asm_005e3d00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x38] }
	__asm { test edx, edx }
	__asm { je L_005e3d17 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_005e3d17: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e5110
extern "C" __declspec(naked) void asm_005e5110()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { test ecx, ecx }
	__asm { je L_005e5134 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { cmp dword ptr [eax*8 + 0xe1a98c], 0 }
	__asm { jne L_005e5134 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_005e5134: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e5380
extern "C" __declspec(naked) void asm_005e5380()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { test ecx, ecx }
	__asm { je L_005e53a4 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { cmp dword ptr [eax*8 + 0xe1a98c], 0 }
	__asm { jne L_005e53a4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_005e53a4: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e6ce0
extern "C" __declspec(naked) void asm_005e6ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_005e6cf5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005e6cf5: }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e9f50
extern "C" __declspec(naked) void asm_005e9f50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_005e9f74 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { cmp dword ptr [eax*8 + 0xe1b7b0], 0 }
	__asm { jne L_005e9f74 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { L_005e9f74: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005eb770
extern "C" __declspec(naked) void asm_005eb770()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { test esi, esi }
	__asm { je L_005eb786 }
	__asm { L_005eb778: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { test esi, esi }
	__asm { jne L_005eb778 }
	__asm { L_005eb786: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005eb790
extern "C" __declspec(naked) void asm_005eb790()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { test esi, esi }
	__asm { je L_005eb7a6 }
	__asm { L_005eb798: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { test esi, esi }
	__asm { jne L_005eb798 }
	__asm { L_005eb7a6: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005eb7e0
extern "C" __declspec(naked) void asm_005eb7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe1c6bc }
	__asm { je L_005eb7fb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005eb7fb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005f2630
extern "C" __declspec(naked) void asm_005f2630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { jne L_005f263e }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f263e: }
	__asm { cmp byte ptr [ecx], al }
	__asm { je L_005f2649 }
	__asm { L_005f2642: }
	__asm { inc eax }
	__asm { cmp byte ptr [eax + ecx], 0 }
	__asm { jne L_005f2642 }
	__asm { L_005f2649: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00606210
extern "C" __declspec(naked) void asm_00606210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe2f918 }
	__asm { je L_0060622b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060622b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012db2b0[];
// FUNCTION: ROBLOXSTUDIO 0x00606ff0
extern "C" __declspec(naked) void asm_00606ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012db2b0] }
	__asm { test eax, eax }
	__asm { je L_0060700a }
	__asm { push dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push 0x824a }
	__asm { call eax }
	__asm { L_0060700a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012db274[];
// FUNCTION: ROBLOXSTUDIO 0x00607020
extern "C" __declspec(naked) void asm_00607020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012db274] }
	__asm { test eax, eax }
	__asm { je L_00607044 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0x826b }
	__asm { push 0 }
	__asm { push 0x8268 }
	__asm { push 0x824a }
	__asm { call eax }
	__asm { L_00607044: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012d97c4[];
extern "C" void fn_006b8a9c();
// FUNCTION: ROBLOXSTUDIO 0x006084f0
extern "C" __declspec(naked) void asm_006084f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_00608510 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { movzx eax, al }
	__asm { push 0xe303ec }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_00608510: }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// FUNCTION: ROBLOXSTUDIO 0x0060a0c0
extern "C" __declspec(naked) void asm_0060a0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0xc }
	__asm { jae L_0060a0d4 }
	__asm { mov eax, dword ptr [eax*4 + 0x11d6e98] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060a0d4: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410e50();
extern "C" void fn_00985e80();
// FUNCTION: ROBLOXSTUDIO 0x0060ceb0
extern "C" __declspec(naked) void asm_0060ceb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00985e80 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0060ced2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00410e50 }
	__asm { mov eax, esi }
	__asm { L_0060ced2: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0060f640
extern "C" __declspec(naked) void asm_0060f640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, 0x10 }
	__asm { cmp ecx, eax }
	__asm { je L_0060f657 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0060f657: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006105a0();
// FUNCTION: ROBLOXSTUDIO 0x00610570
extern "C" __declspec(naked) void asm_00610570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00610584 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_006105a0 }
	__asm { L_00610584: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11d7100 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00618f20
extern "C" __declspec(naked) void asm_00618f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33210 }
	__asm { je L_00618f3b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00618f3b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00618f50
extern "C" __declspec(naked) void asm_00618f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe32df8 }
	__asm { je L_00618f6b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00618f6b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
// FUNCTION: ROBLOXSTUDIO 0x00619b90
extern "C" __declspec(naked) void asm_00619b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00619ba8 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00619ba8: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00648020();
extern "C" void fn_00648130();
// FUNCTION: ROBLOXSTUDIO 0x00645560
extern "C" __declspec(naked) void asm_00645560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0x60], 0 }
	__asm { je L_0064556f }
	__asm { pop ebp }
	__asm { jmp fn_00648130 }
	__asm { L_0064556f: }
	__asm { pop ebp }
	__asm { jmp fn_00648020 }
}

extern "C" char g_012dce50[];
extern "C" void fn_006459f0();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x00647090
extern "C" __declspec(naked) void asm_00647090()
{
	__asm { mov al, byte ptr [g_012dce50] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006470af }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3805c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006470af: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_006459f0 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00654880
extern "C" __declspec(naked) void asm_00654880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe370e4 }
	__asm { je L_0065489b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065489b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00681470();
// FUNCTION: ROBLOXSTUDIO 0x006556c0
extern "C" __declspec(naked) void asm_006556c0()
{
	__asm { cmp byte ptr [ecx + 0xcc], 0 }
	__asm { jne L_006556df }
	__asm { mov byte ptr [ecx + 0xcc], 1 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { call fn_00681470 }
	__asm { L_006556df: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0065d370
extern "C" __declspec(naked) void asm_0065d370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { test eax, eax }
	__asm { jne L_0065d380 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { L_0065d380: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00681470();
// FUNCTION: ROBLOXSTUDIO 0x0066e5c0
extern "C" __declspec(naked) void asm_0066e5c0()
{
	__asm { cmp byte ptr [ecx + 0xf4], 0 }
	__asm { jne L_0066e5df }
	__asm { mov byte ptr [ecx + 0xf4], 1 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { call fn_00681470 }
	__asm { L_0066e5df: }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067d6a0
extern "C" __declspec(naked) void asm_0067d6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe3b994 }
	__asm { je L_0067d6bb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067d6bb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0067e6e0
extern "C" __declspec(naked) void asm_0067e6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0067e6f6 }
	__asm { cmp dword ptr [ebp + 0xc], 0x80000000 }
	__asm { jne L_0067e6f6 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e6f6: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067e7a0();
// FUNCTION: ROBLOXSTUDIO 0x0067e700
extern "C" __declspec(naked) void asm_0067e700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0067e714 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0067e7a0 }
	__asm { L_0067e714: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11daaa0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067e800();
// FUNCTION: ROBLOXSTUDIO 0x0067e730
extern "C" __declspec(naked) void asm_0067e730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0067e744 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_0067e800 }
	__asm { L_0067e744: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11daa38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00646f90();
// FUNCTION: ROBLOXSTUDIO 0x006868c0
extern "C" __declspec(naked) void asm_006868c0()
{
	__asm { mov eax, dword ptr [ecx + 0x180] }
	__asm { mov ecx, dword ptr [eax + 0x1cc] }
	__asm { test ecx, ecx }
	__asm { je L_006868dd }
	__asm { call fn_00646f90 }
	__asm { test eax, eax }
	__asm { je L_006868dd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { ret }
	__asm { L_006868dd: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00695a60();
extern "C" void fn_00c84b70();
// FUNCTION: ROBLOXSTUDIO 0x00693510
extern "C" __declspec(naked) void asm_00693510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x30], -1 }
	__asm { jle L_00693527 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp fn_00695a60 }
	__asm { L_00693527: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00c84b70 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00693840
extern "C" __declspec(naked) void asm_00693840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { cmp dword ptr [eax + 0x34], edx }
	__asm { jge L_0069385d }
	__asm { mov dword ptr [eax + 0x34], edx }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008bbcc0 }
	__asm { L_0069385d: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 0xc }
}
