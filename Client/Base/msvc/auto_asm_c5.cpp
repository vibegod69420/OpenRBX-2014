// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aff080
extern "C" __declspec(naked) void asm_00aff080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x78] }
	__asm { je L_00aff09b }
	__asm { mov byte ptr [ecx + 0x78], al }
	__asm { mov dword ptr [ebp + 8], 0x130ce98 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aff09b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b0b950
extern "C" __declspec(naked) void asm_00b0b950()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0xa8] }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b0b96c }
	__asm { cvttss2si eax, dword ptr [eax + 0x6c] }
	__asm { ret }
	__asm { L_00b0b96c: }
	__asm { or eax, 0xffffffff }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b0b970
extern "C" __declspec(naked) void asm_00b0b970()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0xa8] }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b0b98c }
	__asm { cvttss2si eax, dword ptr [eax + 0x70] }
	__asm { ret }
	__asm { L_00b0b98c: }
	__asm { or eax, 0xffffffff }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00b0c540
extern "C" __declspec(naked) void asm_00b0c540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x80], eax }
	__asm { je L_00b0c55e }
	__asm { push 0x130d878 }
	__asm { mov dword ptr [ecx + 0x80], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00b0c55e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b0ce50
extern "C" __declspec(naked) void asm_00b0ce50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00b0ce69 }
	__asm { add eax, 0x1c }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b0ce69: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b0de80
extern "C" __declspec(naked) void asm_00b0de80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, 0x12f9b20 }
	__asm { je L_00b0de94 }
	__asm { cmp eax, 0x12f9960 }
	__asm { jne L_00b0de9b }
	__asm { L_00b0de94: }
	__asm { mov byte ptr [ecx + 0xa8], 1 }
	__asm { L_00b0de9b: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b10160();
// FUNCTION: ROBLOXSTUDIO 0x00b10130
extern "C" __declspec(naked) void asm_00b10130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b10144 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b10160 }
	__asm { L_00b10144: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127d818 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b10d10
extern "C" __declspec(naked) void asm_00b10d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_00b10d26 }
	__asm { add ecx, 0x64 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 8], ecx }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b10d26: }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 8], ecx }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0067af70();
// FUNCTION: ROBLOXSTUDIO 0x00b15f70
extern "C" __declspec(naked) void asm_00b15f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b15f8c }
	__asm { call fn_0067af70 }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { L_00b15f8c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b19460
extern "C" __declspec(naked) void asm_00b19460()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00b19471 }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { ret }
	__asm { L_00b19471: }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00b1b210
extern "C" __declspec(naked) void asm_00b1b210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x64], al }
	__asm { je L_00b1b22b }
	__asm { mov byte ptr [ecx + 0x64], al }
	__asm { mov dword ptr [ebp + 8], 0x130dfb4 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00b1b22b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b222b0
extern "C" __declspec(naked) void asm_00b222b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00b222d4 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub esp, 8 }
	__asm { add ecx, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [eax] }
	__asm { L_00b222d4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b22b40();
// FUNCTION: ROBLOXSTUDIO 0x00b22ab0
extern "C" __declspec(naked) void asm_00b22ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b22ac4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b22b40 }
	__asm { L_00b22ac4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12819d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b22c30();
// FUNCTION: ROBLOXSTUDIO 0x00b22ae0
extern "C" __declspec(naked) void asm_00b22ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b22af4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b22c30 }
	__asm { L_00b22af4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1281ab0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b22d20();
// FUNCTION: ROBLOXSTUDIO 0x00b22b10
extern "C" __declspec(naked) void asm_00b22b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b22b24 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b22d20 }
	__asm { L_00b22b24: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12818d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b26bc0
extern "C" __declspec(naked) void asm_00b26bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b26bd4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b26bd4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b27b00();
// FUNCTION: ROBLOXSTUDIO 0x00b27a30
extern "C" __declspec(naked) void asm_00b27a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b27a44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b27b00 }
	__asm { L_00b27a44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1283770 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b27c40();
// FUNCTION: ROBLOXSTUDIO 0x00b27a60
extern "C" __declspec(naked) void asm_00b27a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b27a74 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b27c40 }
	__asm { L_00b27a74: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1283668 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b27cf0();
// FUNCTION: ROBLOXSTUDIO 0x00b27a90
extern "C" __declspec(naked) void asm_00b27a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b27aa4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b27cf0 }
	__asm { L_00b27aa4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12838c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00b2b740
extern "C" __declspec(naked) void asm_00b2b740()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11f12a0 }
	__asm { jne L_00b2b74f }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00b2b74f: }
	__asm { push eax }
	__asm { mov ecx, 0x11f12a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
}

extern "C" void fn_00b33b80();
// FUNCTION: ROBLOXSTUDIO 0x00b33af0
extern "C" __declspec(naked) void asm_00b33af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b33b04 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b33b80 }
	__asm { L_00b33b04: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1285270 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b33c70();
// FUNCTION: ROBLOXSTUDIO 0x00b33b20
extern "C" __declspec(naked) void asm_00b33b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b33b34 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b33c70 }
	__asm { L_00b33b34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1284cc8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b33d60();
// FUNCTION: ROBLOXSTUDIO 0x00b33b50
extern "C" __declspec(naked) void asm_00b33b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b33b64 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b33d60 }
	__asm { L_00b33b64: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1284fa0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a07b0();
extern "C" void fn_00b36b00();
// FUNCTION: ROBLOXSTUDIO 0x00b36cd0
extern "C" __declspec(naked) void asm_00b36cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b36b00 }
	__asm { test al, al }
	__asm { je L_00b36cea }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call fn_007a07b0 }
	__asm { L_00b36cea: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0086be30();
extern "C" void fn_00b36b00();
// FUNCTION: ROBLOXSTUDIO 0x00b36cf0
extern "C" __declspec(naked) void asm_00b36cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b36b00 }
	__asm { test al, al }
	__asm { je L_00b36d0d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0086be30 }
	__asm { L_00b36d0d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x00b46420
extern "C" __declspec(naked) void asm_00b46420()
{
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b46430 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_007b5ea0 }
	__asm { L_00b46430: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b49390
extern "C" __declspec(naked) void asm_00b49390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { fstp qword ptr [eax + edx*8] }
	__asm { je L_00b493b0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { inc eax }
	__asm { xor edx, edx }
	__asm { div dword ptr [ecx] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00b493b0: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00b49710
extern "C" __declspec(naked) void asm_00b49710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00b4972c }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { cmp ax, word ptr [edx + 4] }
	__asm { jne L_00b4972c }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4972c: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b49740
extern "C" __declspec(naked) void asm_00b49740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00b4975c }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { cmp ax, word ptr [edx + 4] }
	__asm { jne L_00b4975c }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4975c: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b49770
extern "C" __declspec(naked) void asm_00b49770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jb L_00b4978e }
	__asm { jne L_00b49788 }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { cmp ax, word ptr [edx + 4] }
	__asm { jb L_00b4978e }
	__asm { L_00b49788: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4978e: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b49cb0();
// FUNCTION: ROBLOXSTUDIO 0x00b49dd0
extern "C" __declspec(naked) void asm_00b49dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b49de5 }
	__asm { push esi }
	__asm { call fn_00b49cb0 }
	__asm { add esp, 4 }
	__asm { L_00b49de5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b49d10();
// FUNCTION: ROBLOXSTUDIO 0x00b49df0
extern "C" __declspec(naked) void asm_00b49df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b49e05 }
	__asm { push esi }
	__asm { call fn_00b49d10 }
	__asm { add esp, 4 }
	__asm { L_00b49e05: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b49d70();
// FUNCTION: ROBLOXSTUDIO 0x00b49eb0
extern "C" __declspec(naked) void asm_00b49eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b49ec5 }
	__asm { push esi }
	__asm { call fn_00b49d70 }
	__asm { add esp, 4 }
	__asm { L_00b49ec5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b4ba70
extern "C" __declspec(naked) void asm_00b4ba70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00b4ba83 }
	__asm { mov eax, dword ptr [ecx + 0x90] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b4ba83: }
	__asm { mov eax, dword ptr [ecx + 0x94] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01210342[];
// FUNCTION: ROBLOXSTUDIO 0x00b4d870
extern "C" __declspec(naked) void asm_00b4d870()
{
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { test ecx, ecx }
	__asm { jne L_00b4d87a }
	__asm { xor eax, eax }
	__asm { ret }
	__asm { L_00b4d87a: }
	__asm { cmp byte ptr [g_01210342], 0 }
	__asm { je L_00b4d88e }
	__asm { mov eax, dword ptr [ecx + 0x48] }
	__asm { lea eax, [eax + eax*8] }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x20] }
	__asm { ret }
	__asm { L_00b4d88e: }
	__asm { mov eax, dword ptr [ecx + 0x6c] }
	__asm { ret }
}

extern "C" char g_012de768[];
extern "C" char g_012de76c[];
// FUNCTION: ROBLOXSTUDIO 0x00b557c0
extern "C" __declspec(naked) void asm_00b557c0()
{
	__asm { mov ecx, dword ptr [g_012de768] }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012de76c] }
	__asm { xor eax, eax }
	__asm { cmp ecx, esi }
	__asm { je L_00b557de }
	__asm { L_00b557d3: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add ecx, 4 }
	__asm { add eax, dword ptr [edx] }
	__asm { cmp ecx, esi }
	__asm { jne L_00b557d3 }
	__asm { L_00b557de: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00baa520();
// FUNCTION: ROBLOXSTUDIO 0x00b5a030
extern "C" __declspec(naked) void asm_00b5a030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b5a046 }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00baa520 }
	__asm { L_00b5a046: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00baa520 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b5c8e0
extern "C" __declspec(naked) void asm_00b5c8e0()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00b5c8ec }
	__asm { add eax, -8 }
	__asm { jmp L_00b5c8ee }
	__asm { L_00b5c8ec: }
	__asm { xor eax, eax }
	__asm { L_00b5c8ee: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00b5c8fc }
	__asm { add eax, -8 }
	__asm { ret }
	__asm { L_00b5c8fc: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b5f060
extern "C" __declspec(naked) void asm_00b5f060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xecfab8 }
	__asm { je L_00b5f07b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b5f07b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b65420();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b60040
extern "C" __declspec(naked) void asm_00b60040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b6005d }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b65420 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b6005d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b60140
extern "C" __declspec(naked) void asm_00b60140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b6014f }
	__asm { add eax, -0x70 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b6014f: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b65420();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b613f0
extern "C" __declspec(naked) void asm_00b613f0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b6140a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b65420 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b6140a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b65ce0
extern "C" __declspec(naked) void asm_00b65ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xed04ac }
	__asm { je L_00b65cfb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b65cfb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b688c0
extern "C" __declspec(naked) void asm_00b688c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xed0ad4 }
	__asm { je L_00b688db }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b688db: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6c280
extern "C" __declspec(naked) void asm_00b6c280()
{
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00b6c299 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00b6c299: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00b6c800();
extern "C" void fn_00b6cb50();
// FUNCTION: ROBLOXSTUDIO 0x00b6c7e0
extern "C" __declspec(naked) void asm_00b6c7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 0x1000b }
	__asm { jge L_00b6c7f6 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b6c800 }
	__asm { L_00b6c7f6: }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b6cb50 }
}

extern "C" void fn_00a356d0();
extern "C" void fn_00a35780();
// FUNCTION: ROBLOXSTUDIO 0x00b6ebf0
extern "C" __declspec(naked) void asm_00b6ebf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35780 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b6ec0d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356d0 }
	__asm { add esp, 4 }
	__asm { L_00b6ec0d: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b77a90();
// FUNCTION: ROBLOXSTUDIO 0x00b77a30
extern "C" __declspec(naked) void asm_00b77a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b77a44 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b77a90 }
	__asm { L_00b77a44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128d7c8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b77b80();
// FUNCTION: ROBLOXSTUDIO 0x00b77a60
extern "C" __declspec(naked) void asm_00b77a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b77a74 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b77b80 }
	__asm { L_00b77a74: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128d6f8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b80d00();
// FUNCTION: ROBLOXSTUDIO 0x00b80c20
extern "C" __declspec(naked) void asm_00b80c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b80c34 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b80d00 }
	__asm { L_00b80c34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128dde0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b80de0();
// FUNCTION: ROBLOXSTUDIO 0x00b80c50
extern "C" __declspec(naked) void asm_00b80c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b80c64 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b80de0 }
	__asm { L_00b80c64: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128deb0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b842a0
extern "C" __declspec(naked) void asm_00b842a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00b842b7 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_00b842b7: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b8a7c0();
// FUNCTION: ROBLOXSTUDIO 0x00b8a790
extern "C" __declspec(naked) void asm_00b8a790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b8a7a4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00b8a7c0 }
	__asm { L_00b8a7a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128e7e8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b8d190();
// FUNCTION: ROBLOXSTUDIO 0x00b8d280
extern "C" __declspec(naked) void asm_00b8d280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8d295 }
	__asm { push esi }
	__asm { call fn_00b8d190 }
	__asm { add esp, 4 }
	__asm { L_00b8d295: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b91440();
// FUNCTION: ROBLOXSTUDIO 0x00b8f270
extern "C" __declspec(naked) void asm_00b8f270()
{
	__asm { mov eax, dword ptr [ecx + 0xd0] }
	__asm { test eax, eax }
	__asm { je L_00b8f28b }
	__asm { fld dword ptr [ecx + 0xd4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b91440 }
	__asm { L_00b8f28b: }
	__asm { ret }
}

extern "C" void fn_00b91490();
// FUNCTION: ROBLOXSTUDIO 0x00b8f290
extern "C" __declspec(naked) void asm_00b8f290()
{
	__asm { mov eax, dword ptr [ecx + 0xd0] }
	__asm { test eax, eax }
	__asm { je L_00b8f2ab }
	__asm { fld dword ptr [ecx + 0xd4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b91490 }
	__asm { L_00b8f2ab: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b91360
extern "C" __declspec(naked) void asm_00b91360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00b91373 }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b91373: }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b92da0
extern "C" __declspec(naked) void asm_00b92da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe81a00 }
	__asm { je L_00b92dbb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b92dbb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b9c680();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9ad50
extern "C" __declspec(naked) void asm_00b9ad50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b9ad6d }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b9c680 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b9ad6d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b9c7d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9ad70
extern "C" __declspec(naked) void asm_00b9ad70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b9ad8d }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b9c7d0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b9ad8d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b9c920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9ad90
extern "C" __declspec(naked) void asm_00b9ad90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00b9adad }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b9c920 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b9adad: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b9c680();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9b6c0
extern "C" __declspec(naked) void asm_00b9b6c0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b9b6da }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b9c680 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b9b6da: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b9c7d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9b6e0
extern "C" __declspec(naked) void asm_00b9b6e0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b9b6fa }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b9c7d0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b9b6fa: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b9c920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9b700
extern "C" __declspec(naked) void asm_00b9b700()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b9b71a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00b9c920 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00b9b71a: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00baa5c0
extern "C" __declspec(naked) void asm_00baa5c0()
{
	__asm { L_00baa5c0: }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { L_00baa5c3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00baa5d6 }
	__asm { call L_00baa5c0 }
	__asm { L_00baa5d6: }
	__asm { mov esi, dword ptr [esi + 0x1c] }
	__asm { test esi, esi }
	__asm { jne L_00baa5c3 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bad980();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bad080
extern "C" __declspec(naked) void asm_00bad080()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bad09a }
	__asm { push dword ptr [esi + 4] }
	__asm { push esi }
	__asm { call fn_00bad980 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bad09a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00baed30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bae1c0
extern "C" __declspec(naked) void asm_00bae1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bae1dd }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00baed30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bae1dd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00baee80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bae1e0
extern "C" __declspec(naked) void asm_00bae1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bae1fd }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00baee80 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bae1fd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00baed30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bae600
extern "C" __declspec(naked) void asm_00bae600()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bae61a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00baed30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bae61a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00baee80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bae620
extern "C" __declspec(naked) void asm_00bae620()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bae63a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00baee80 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bae63a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bb0560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00baf580
extern "C" __declspec(naked) void asm_00baf580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00baf59d }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push esi }
	__asm { call fn_00bb0560 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00baf59d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb0560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bafb60
extern "C" __declspec(naked) void asm_00bafb60()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bafb7a }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push esi }
	__asm { call fn_00bb0560 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bafb7a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bb1e90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb10c0
extern "C" __declspec(naked) void asm_00bb10c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bb10dd }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push esi }
	__asm { call fn_00bb1e90 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb10dd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb1e90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb1500
extern "C" __declspec(naked) void asm_00bb1500()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bb151a }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push esi }
	__asm { call fn_00bb1e90 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb151a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bb2b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb2320
extern "C" __declspec(naked) void asm_00bb2320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bb233d }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb2b00 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb233d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb2b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb2630
extern "C" __declspec(naked) void asm_00bb2630()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bb264a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb2b00 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb264a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bb33f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb2e90
extern "C" __declspec(naked) void asm_00bb2e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bb2ead }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb33f0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb2ead: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb33f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb31a0
extern "C" __declspec(naked) void asm_00bb31a0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bb31ba }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb33f0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb31ba: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bb4380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb38b0
extern "C" __declspec(naked) void asm_00bb38b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bb38cd }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb4380 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb38cd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb44d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb38d0
extern "C" __declspec(naked) void asm_00bb38d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bb38ed }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb44d0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb38ed: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bb4380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb3d10
extern "C" __declspec(naked) void asm_00bb3d10()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bb3d2a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb4380 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb3d2a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bb44d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb3d30
extern "C" __declspec(naked) void asm_00bb3d30()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00bb3d4a }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bb44d0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { L_00bb3d4a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009d54e0();
// FUNCTION: ROBLOXSTUDIO 0x00bb6c20
extern "C" __declspec(naked) void asm_00bb6c20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d54e0 }
	__asm { test al, al }
	__asm { je L_00bb6c3a }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bb6c3a: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc1360
extern "C" __declspec(naked) void asm_00bc1360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 4], eax }
	__asm { je L_00bc1376 }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { je L_00bc1376 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc1376: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd0060();
// FUNCTION: ROBLOXSTUDIO 0x00bd0180
extern "C" __declspec(naked) void asm_00bd0180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00bd0195 }
	__asm { push esi }
	__asm { call fn_00bd0060 }
	__asm { add esp, 4 }
	__asm { L_00bd0195: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd00c0();
// FUNCTION: ROBLOXSTUDIO 0x00bd01a0
extern "C" __declspec(naked) void asm_00bd01a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00bd01b5 }
	__asm { push esi }
	__asm { call fn_00bd00c0 }
	__asm { add esp, 4 }
	__asm { L_00bd01b5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd0120();
// FUNCTION: ROBLOXSTUDIO 0x00bd01f0
extern "C" __declspec(naked) void asm_00bd01f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00bd0205 }
	__asm { push esi }
	__asm { call fn_00bd0120 }
	__asm { add esp, 4 }
	__asm { L_00bd0205: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd1a80();
// FUNCTION: ROBLOXSTUDIO 0x00bd1be0
extern "C" __declspec(naked) void asm_00bd1be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0x110], 0xe370e4 }
	__asm { je L_00bd1bff }
	__asm { push esi }
	__asm { call fn_00bd1a80 }
	__asm { add esp, 4 }
	__asm { L_00bd1bff: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bd1c10
extern "C" __declspec(naked) void asm_00bd1c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xee28f0 }
	__asm { je L_00bd1c2b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bd1c2b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bd4140
extern "C" __declspec(naked) void asm_00bd4140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xee2db0 }
	__asm { je L_00bd415b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bd415b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd6c90();
// FUNCTION: ROBLOXSTUDIO 0x00bd7d60
extern "C" __declspec(naked) void asm_00bd7d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xee3754 }
	__asm { je L_00bd7d7b }
	__asm { push esi }
	__asm { call fn_00bd6c90 }
	__asm { add esp, 4 }
	__asm { L_00bd7d7b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008c04d0();
// FUNCTION: ROBLOXSTUDIO 0x00be8140
extern "C" __declspec(naked) void asm_00be8140()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00be8155 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_008c04d0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_00be8155: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00be8170
extern "C" __declspec(naked) void asm_00be8170()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_00be8188 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { push 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_00be8188: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bea670();
// FUNCTION: ROBLOXSTUDIO 0x00bea4d0
extern "C" __declspec(naked) void asm_00bea4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea4e4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00bea670 }
	__asm { L_00bea4e4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1292fb8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bea6f0();
// FUNCTION: ROBLOXSTUDIO 0x00bea500
extern "C" __declspec(naked) void asm_00bea500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00bea514 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00bea6f0 }
	__asm { L_00bea514: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1292fc8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b4eca0();
// FUNCTION: ROBLOXSTUDIO 0x00c02b40
extern "C" __declspec(naked) void asm_00c02b40()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov edx, dword ptr [eax + 0x30] }
	__asm { test edx, edx }
	__asm { je L_00c02b5c }
	__asm { lea eax, [ecx + 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x28] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00b4eca0 }
	__asm { L_00c02b5c: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c045a0
extern "C" __declspec(naked) void asm_00c045a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00c045af }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00c045af: }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c05190
extern "C" __declspec(naked) void asm_00c05190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { test ecx, ecx }
	__asm { je L_00c051ae }
	__asm { mov eax, dword ptr [ecx + 0x98] }
	__asm { add ecx, 0x98 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x28] }
	__asm { L_00c051ae: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e3580[];
// FUNCTION: ROBLOXSTUDIO 0x00c0a110
extern "C" __declspec(naked) void asm_00c0a110()
{
	__asm { mov eax, dword ptr [g_012e3580] }
	__asm { dec eax }
	__asm { je L_00c0a124 }
	__asm { dec eax }
	__asm { je L_00c0a121 }
	__asm { mov eax, 1 }
	__asm { ret }
	__asm { L_00c0a121: }
	__asm { xor eax, eax }
	__asm { ret }
	__asm { L_00c0a124: }
	__asm { mov eax, 5 }
	__asm { ret }
}

extern "C" void fn_00c11320();
// FUNCTION: ROBLOXSTUDIO 0x00c11190
extern "C" __declspec(naked) void asm_00c11190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_00c11320 }
	__asm { lea edx, [eax + 0x10] }
	__asm { mov word ptr [eax + 0xc], 0 }
	__asm { test edx, edx }
	__asm { je L_00c111ac }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_00c111ac: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c17e70
extern "C" __declspec(naked) void asm_00c17e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax], 0xc }
	__asm { jne L_00c17e94 }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { test edx, 0x100 }
	__asm { jne L_00c17e94 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [ecx + 0x32] }
	__asm { cmp edx, eax }
	__asm { jl L_00c17e94 }
	__asm { dec dword ptr [ecx + 0x24] }
	__asm { L_00c17e94: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c2fed0();
// FUNCTION: ROBLOXSTUDIO 0x00c2feb0
extern "C" __declspec(naked) void asm_00c2feb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2fec7 }
	__asm { mov eax, dword ptr [eax + 0x64] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c2fec7: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c30360
extern "C" __declspec(naked) void asm_00c30360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00c30380 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add ecx, 8 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax] }
	__asm { L_00c30380: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c32770();
// FUNCTION: ROBLOXSTUDIO 0x00c32660
extern "C" __declspec(naked) void asm_00c32660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c32674 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c32770 }
	__asm { L_00c32674: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12969b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c32840();
// FUNCTION: ROBLOXSTUDIO 0x00c32690
extern "C" __declspec(naked) void asm_00c32690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c326a4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c32840 }
	__asm { L_00c326a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1296c38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c32930();
// FUNCTION: ROBLOXSTUDIO 0x00c32700
extern "C" __declspec(naked) void asm_00c32700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c32714 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c32930 }
	__asm { L_00c32714: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1296ab0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c36490
extern "C" __declspec(naked) void asm_00c36490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x159] }
	__asm { je L_00c364b1 }
	__asm { mov byte ptr [ecx + 0x159], al }
	__asm { mov dword ptr [ebp + 8], 0x131052c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c364b1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c9e820();
// FUNCTION: ROBLOXSTUDIO 0x00c4aad0
extern "C" __declspec(naked) void asm_00c4aad0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c9e820 }
	__asm { test al, al }
	__asm { je L_00c4aae8 }
	__asm { cmp dword ptr [esi + 0xcc], 0 }
	__asm { pop esi }
	__asm { setl al }
	__asm { ret }
	__asm { L_00c4aae8: }
	__asm { mov al, byte ptr [esi + 0xc9] }
	__asm { pop esi }
	__asm { ret }
	__asm { mov al, byte ptr [ecx + 0xca] }
	__asm { ret }
}

extern "C" void fn_00c4d730();
// FUNCTION: ROBLOXSTUDIO 0x00c4d4a0
extern "C" __declspec(naked) void asm_00c4d4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d4b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4d730 }
	__asm { L_00c4d4b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129b188 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4d800();
// FUNCTION: ROBLOXSTUDIO 0x00c4d4d0
extern "C" __declspec(naked) void asm_00c4d4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d4e4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4d800 }
	__asm { L_00c4d4e4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129a920 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4d940();
// FUNCTION: ROBLOXSTUDIO 0x00c4d540
extern "C" __declspec(naked) void asm_00c4d540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d554 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4d940 }
	__asm { L_00c4d554: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129aa80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4da20();
// FUNCTION: ROBLOXSTUDIO 0x00c4d570
extern "C" __declspec(naked) void asm_00c4d570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d584 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4da20 }
	__asm { L_00c4d584: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129a3b0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4dad0();
// FUNCTION: ROBLOXSTUDIO 0x00c4d5e0
extern "C" __declspec(naked) void asm_00c4d5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d5f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4dad0 }
	__asm { L_00c4d5f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129a310 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4dbc0();
// FUNCTION: ROBLOXSTUDIO 0x00c4d610
extern "C" __declspec(naked) void asm_00c4d610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d624 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4dbc0 }
	__asm { L_00c4d624: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129af10 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4dcb0();
// FUNCTION: ROBLOXSTUDIO 0x00c4d640
extern "C" __declspec(naked) void asm_00c4d640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d654 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4dcb0 }
	__asm { L_00c4d654: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129acc0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4dda0();
// FUNCTION: ROBLOXSTUDIO 0x00c4d670
extern "C" __declspec(naked) void asm_00c4d670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d684 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4dda0 }
	__asm { L_00c4d684: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129abe0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4de90();
// FUNCTION: ROBLOXSTUDIO 0x00c4d6a0
extern "C" __declspec(naked) void asm_00c4d6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d6b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4de90 }
	__asm { L_00c4d6b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129a210 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4df80();
// FUNCTION: ROBLOXSTUDIO 0x00c4d6d0
extern "C" __declspec(naked) void asm_00c4d6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d6e4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4df80 }
	__asm { L_00c4d6e4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129ade0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c4e070();
// FUNCTION: ROBLOXSTUDIO 0x00c4d700
extern "C" __declspec(naked) void asm_00c4d700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c4d714 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c4e070 }
	__asm { L_00c4d714: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x129b038 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c4b50();
// FUNCTION: ROBLOXSTUDIO 0x00c4f740
extern "C" __declspec(naked) void asm_00c4f740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { test ecx, ecx }
	__asm { je L_00c4f75b }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xc50fa0 }
	__asm { call fn_007c4b50 }
	__asm { L_00c4f75b: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c511d0
extern "C" __declspec(naked) void asm_00c511d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0xc8] }
	__asm { je L_00c511f1 }
	__asm { mov byte ptr [ecx + 0xc8], al }
	__asm { mov dword ptr [ebp + 8], 0x1311a74 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c511f1: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c51840
extern "C" __declspec(naked) void asm_00c51840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0xf0] }
	__asm { je L_00c51861 }
	__asm { mov byte ptr [ecx + 0xf0], al }
	__asm { mov dword ptr [ebp + 8], 0x1311a48 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c51861: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c51dc0
extern "C" __declspec(naked) void asm_00c51dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0xca] }
	__asm { je L_00c51dd4 }
	__asm { mov byte ptr [ecx + 0xca], al }
	__asm { L_00c51dd4: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c54cd0();
// FUNCTION: ROBLOXSTUDIO 0x00c54ca0
extern "C" __declspec(naked) void asm_00c54ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c54cb4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c54cd0 }
	__asm { L_00c54cb4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a12f8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c571b0
extern "C" __declspec(naked) void asm_00c571b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 0xd0] }
	__asm { je L_00c571d3 }
	__asm { mov dword ptr [ecx + 0xd0], eax }
	__asm { mov dword ptr [ebp + 8], 0x1313128 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c571d3: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c57500
extern "C" __declspec(naked) void asm_00c57500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 0xd8] }
	__asm { je L_00c57523 }
	__asm { mov dword ptr [ecx + 0xd8], eax }
	__asm { mov dword ptr [ebp + 8], 0x1313410 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c57523: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c57620
extern "C" __declspec(naked) void asm_00c57620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 0xcc] }
	__asm { je L_00c57643 }
	__asm { mov dword ptr [ecx + 0xcc], eax }
	__asm { mov dword ptr [ebp + 8], 0x1313188 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c57643: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c57650
extern "C" __declspec(naked) void asm_00c57650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 0xd4] }
	__asm { je L_00c57673 }
	__asm { mov dword ptr [ecx + 0xd4], eax }
	__asm { mov dword ptr [ebp + 8], 0x13135c0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c57673: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01300d75[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c57760
extern "C" __declspec(naked) void asm_00c57760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_01300d75] }
	__asm { je L_00c57780 }
	__asm { mov byte ptr [g_01300d75], al }
	__asm { mov dword ptr [ebp + 8], 0x131329c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c57780: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c688f0
extern "C" __declspec(naked) void asm_00c688f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00c6890a }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00c6890a }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6890a: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c68940
extern "C" __declspec(naked) void asm_00c68940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00c6895a }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00c6895a }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6895a: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c689c0
extern "C" __declspec(naked) void asm_00c689c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp word ptr [ecx], 2 }
	__asm { jne L_00c689da }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { cmp ecx, dword ptr [eax + 4] }
	__asm { jne L_00c689da }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c689da: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
// FUNCTION: ROBLOXSTUDIO 0x00c6cac0
extern "C" __declspec(naked) void asm_00c6cac0()
{
	__asm { push esi }
	__asm { push 1 }
	__asm { mov esi, ecx }
	__asm { call fn_00c6c350 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test cl, 7 }
	__asm { jne L_00c6cadb }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov byte ptr [ecx + eax], 0 }
	__asm { L_00c6cadb: }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c6cac0();
extern "C" void fn_00c6cae0();
// FUNCTION: ROBLOXSTUDIO 0x00c70570
extern "C" __declspec(naked) void asm_00c70570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { je L_00c70588 }
	__asm { call fn_00c6cae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c70588: }
	__asm { call fn_00c6cac0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b9e50();
extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x00c818e0
extern "C" __declspec(naked) void asm_00c818e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_006b9e50 }
	__asm { cmp byte ptr [esi + 0xc], 0 }
	__asm { je L_00c81900 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_007b5ea0 }
	__asm { L_00c81900: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c85cb0
extern "C" __declspec(naked) void asm_00c85cb0()
{
	__asm { cmp dword ptr [ecx + 0xea8], 0 }
	__asm { je L_00c85cc0 }
	__asm { lea eax, [ecx + 0x1e90] }
	__asm { ret }
	__asm { L_00c85cc0: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00ccd6e0();
// FUNCTION: ROBLOXSTUDIO 0x00c86750
extern "C" __declspec(naked) void asm_00c86750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x20f8] }
	__asm { test ecx, ecx }
	__asm { je L_00c86763 }
	__asm { pop ebp }
	__asm { jmp fn_00ccd6e0 }
	__asm { L_00c86763: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c87380();
// FUNCTION: ROBLOXSTUDIO 0x00c87290
extern "C" __declspec(naked) void asm_00c87290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c872a4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c87380 }
	__asm { L_00c872a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5db8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c87460();
// FUNCTION: ROBLOXSTUDIO 0x00c872c0
extern "C" __declspec(naked) void asm_00c872c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c872d4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c87460 }
	__asm { L_00c872d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5c08 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c874d0();
// FUNCTION: ROBLOXSTUDIO 0x00c872f0
extern "C" __declspec(naked) void asm_00c872f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c87304 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c874d0 }
	__asm { L_00c87304: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5b50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c87540();
// FUNCTION: ROBLOXSTUDIO 0x00c87320
extern "C" __declspec(naked) void asm_00c87320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c87334 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c87540 }
	__asm { L_00c87334: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5cf0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c875b0();
// FUNCTION: ROBLOXSTUDIO 0x00c87350
extern "C" __declspec(naked) void asm_00c87350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c87364 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c875b0 }
	__asm { L_00c87364: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a5e60 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6a740();
extern "C" void fn_00c96fc0();
// FUNCTION: ROBLOXSTUDIO 0x00c97430
extern "C" __declspec(naked) void asm_00c97430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c96fc0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00c97450 }
	__asm { mov ecx, dword ptr [eax + 0xab8] }
	__asm { pop ebp }
	__asm { jmp fn_00c6a740 }
	__asm { L_00c97450: }
	__asm { fldz }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c97510();
// FUNCTION: ROBLOXSTUDIO 0x00c974e0
extern "C" __declspec(naked) void asm_00c974e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c974f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c97510 }
	__asm { L_00c974f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a9140 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c9c650();
// FUNCTION: ROBLOXSTUDIO 0x00c9b2f0
extern "C" __declspec(naked) void asm_00c9b2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ecx], 0 }
	__asm { je L_00c9b301 }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00c9c650 }
	__asm { L_00c9b301: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c9d9e0();
// FUNCTION: ROBLOXSTUDIO 0x00c9d9b0
extern "C" __declspec(naked) void asm_00c9d9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c9d9c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c9d9e0 }
	__asm { L_00c9d9c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12aa508 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c40
extern "C" __declspec(naked) void asm_00ca3c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_00ca3c5b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca3c5b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c9cf90();
// FUNCTION: ROBLOXSTUDIO 0x00ca7400
extern "C" __declspec(naked) void asm_00ca7400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_00c9cf90 }
	__asm { test al, al }
	__asm { je L_00ca741e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx + 4], al }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ca741e: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ca9020();
// FUNCTION: ROBLOXSTUDIO 0x00ca8ff0
extern "C" __declspec(naked) void asm_00ca8ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ca9004 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ca9020 }
	__asm { L_00ca9004: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ac668 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}
