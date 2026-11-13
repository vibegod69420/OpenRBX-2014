// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c51d40
extern "C" __declspec(naked) void asm_00c51d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp al, byte ptr [esi + 0xc9] }
	__asm { je L_00c51d6d }
	__asm { push 0x13110bc }
	__asm { mov byte ptr [esi + 0xc9], al }
	__asm { call fn_007b4f50 }
	__asm { push 0x1311978 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c51d6d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426fa0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c51d80
extern "C" __declspec(naked) void asm_00c51d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [esi + 0x6c] }
	__asm { je L_00c51dba }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { cmp byte ptr [esi + 0x120], 0 }
	__asm { je L_00c51dae }
	__asm { cmp dword ptr [esi + 0x90], 0 }
	__asm { lea ecx, [esi + 0x90] }
	__asm { je L_00c51dae }
	__asm { call fn_00426fa0 }
	__asm { L_00c51dae: }
	__asm { push 0x1311354 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c51dba: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10088[];
extern "C" char g_00e10124[];
// FUNCTION: ROBLOXSTUDIO 0x00c54240
extern "C" __declspec(naked) void asm_00c54240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2cc }
	__asm { lea eax, [ebp - 0x2cc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x2cc], 0x10010 }
	__asm { call dword ptr [g_00e10124] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10088] }
	__asm { test eax, eax }
	__asm { je L_00c5427a }
	__asm { cmp byte ptr [ebp - 0x2b4], 0 }
	__asm { je L_00c5427a }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c5427a: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00408320();
extern "C" void fn_00cb9740();
// FUNCTION: ROBLOXSTUDIO 0x00c54bb0
extern "C" __declspec(naked) void asm_00c54bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00cb9740 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c526f0();
// FUNCTION: ROBLOXSTUDIO 0x00c54be0
extern "C" __declspec(naked) void asm_00c54be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c526f0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c52780();
// FUNCTION: ROBLOXSTUDIO 0x00c54c10
extern "C" __declspec(naked) void asm_00c54c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c52780 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c52810();
// FUNCTION: ROBLOXSTUDIO 0x00c54c40
extern "C" __declspec(naked) void asm_00c54c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c52810 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00c528a0();
// FUNCTION: ROBLOXSTUDIO 0x00c54c70
extern "C" __declspec(naked) void asm_00c54c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00c528a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c54d50
extern "C" __declspec(naked) void asm_00c54d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xf12f2d }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c575a0
extern "C" __declspec(naked) void asm_00c575a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { test eax, eax }
	__asm { cmovs eax, edx }
	__asm { cmp eax, dword ptr [ecx + 0x120] }
	__asm { je L_00c575c8 }
	__asm { mov dword ptr [ecx + 0x120], eax }
	__asm { mov dword ptr [ebp + 8], 0x1313384 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00c575c8: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c57840
extern "C" __declspec(naked) void asm_00c57840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jns L_00c5784e }
	__asm { xor eax, eax }
	__asm { jmp L_00c57858 }
	__asm { L_00c5784e: }
	__asm { mov edx, 0xf4240 }
	__asm { cmp eax, edx }
	__asm { cmovg eax, edx }
	__asm { L_00c57858: }
	__asm { cmp eax, dword ptr [ecx + 0x124] }
	__asm { je L_00c57866 }
	__asm { mov dword ptr [ecx + 0x124], eax }
	__asm { L_00c57866: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c58490();
// FUNCTION: ROBLOXSTUDIO 0x00c57cc0
extern "C" __declspec(naked) void asm_00c57cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00c58490 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c57f00();
// FUNCTION: ROBLOXSTUDIO 0x00c586e0
extern "C" __declspec(naked) void asm_00c586e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c57f00 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi], 0xef32ac }
	__asm { mov dword ptr [esi + 4], 0xef3324 }
	__asm { mov dword ptr [esi + 0x18], 0xef332c }
	__asm { mov dword ptr [esi + 0x1c], 0xef3338 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c63ec0();
// FUNCTION: ROBLOXSTUDIO 0x00c63e40
extern "C" __declspec(naked) void asm_00c63e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c63e63 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c63ec0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c63e63: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a3c28 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c64050();
// FUNCTION: ROBLOXSTUDIO 0x00c63e80
extern "C" __declspec(naked) void asm_00c63e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00c63ea3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c64050 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c63ea3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12a3ae8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c679a0
extern "C" __declspec(naked) void asm_00c679a0()
{
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00c679b4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00c679b4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00c679bf }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c679bf: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c679c8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c679c8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_00c67ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c67bf0
extern "C" __declspec(naked) void asm_00c67bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea esi, [ecx + 0x214] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c67ab0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { je L_00c67c16 }
	__asm { mov byte ptr [eax + 0x2c], 1 }
	__asm { L_00c67c16: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c688b0
extern "C" __declspec(naked) void asm_00c688b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { movzx eax, word ptr [edx + 0x12] }
	__asm { mov word ptr [ecx + 0x12], ax }
	__asm { movzx eax, word ptr [edx + 0x10] }
	__asm { mov word ptr [ecx + 0x10], ax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c68910
extern "C" __declspec(naked) void asm_00c68910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [ecx + 2] }
	__asm { cmp ax, word ptr [edx + 2] }
	__asm { jne L_00c68934 }
	__asm { cmp word ptr [ecx], 2 }
	__asm { jne L_00c68934 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00c68934 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c68934: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c68960
extern "C" __declspec(naked) void asm_00c68960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [ecx + 2] }
	__asm { cmp ax, word ptr [edx + 2] }
	__asm { jne L_00c6898e }
	__asm { cmp word ptr [ecx], 2 }
	__asm { jne L_00c6898e }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00c6898e }
	__asm { mov ecx, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6898e: }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012a55f0[];
extern "C" char g_012a55f4[];
extern "C" void fn_00c68ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c68c50
extern "C" __declspec(naked) void asm_00c68c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 4 }
	__asm { push 0 }
	__asm { jne L_00c68c6a }
	__asm { push dword ptr [g_012a55f4] }
	__asm { call fn_00c68ab0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c68c6a: }
	__asm { push dword ptr [g_012a55f0] }
	__asm { call fn_00c68ab0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cc4ce0();
// FUNCTION: ROBLOXSTUDIO 0x00c68c80
extern "C" __declspec(naked) void asm_00c68c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { lea eax, [esi + 2] }
	__asm { push 2 }
	__asm { push eax }
	__asm { call fn_00cc4ce0 }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push 4 }
	__asm { push eax }
	__asm { call fn_00cc4ce0 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013137e4[];
extern "C" void fn_00c68d00();
// FUNCTION: ROBLOXSTUDIO 0x00c68cb0
extern "C" __declspec(naked) void asm_00c68cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_013137e4] }
	__asm { mov dl, al }
	__asm { movzx edx, dl }
	__asm { inc al }
	__asm { and edx, 7 }
	__asm { mov byte ptr [g_013137e4], al }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [edx*8] }
	__asm { sub eax, edx }
	__asm { lea esi, [eax*4 + 0x13137e8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c68d00 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038228[];
// FUNCTION: ROBLOXSTUDIO 0x00c6b750
extern "C" __declspec(naked) void asm_00c6b750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 0x218], 0 }
	__asm { lea edx, [ebp - 8] }
	__asm { jne L_00c6b76a }
	__asm { fld qword ptr [g_01038228] }
	__asm { jmp L_00c6b76c }
	__asm { L_00c6b76a: }
	__asm { fldz }
	__asm { L_00c6b76c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6c740
extern "C" __declspec(naked) void asm_00c6c740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { lea eax, [ecx + 8] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jbe L_00c6c755 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c755: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { shr ecx, 3 }
	__asm { mov cl, byte ptr [ecx + eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { add dword ptr [edx + 8], 8 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6c770
extern "C" __declspec(naked) void asm_00c6c770()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { mov ecx, edi }
	__asm { and ecx, 7 }
	__asm { mov eax, 0x80 }
	__asm { sar eax, cl }
	__asm { mov esi, edi }
	__asm { shr esi, 3 }
	__asm { lea ecx, [edi + 1] }
	__asm { test byte ptr [esi + edx], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 8], ecx }
	__asm { setne al }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6ca80
extern "C" __declspec(naked) void asm_00c6ca80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { xor eax, eax }
	__asm { test esi, esi }
	__asm { je L_00c6caa5 }
	__asm { lea edx, [esi - 1] }
	__asm { add edx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00c6ca97: }
	__asm { mov cl, byte ptr [edx] }
	__asm { mov byte ptr [eax + edi], cl }
	__asm { inc eax }
	__asm { lea edx, [edx - 1] }
	__asm { cmp eax, esi }
	__asm { jb L_00c6ca97 }
	__asm { pop edi }
	__asm { L_00c6caa5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6c350();
// FUNCTION: ROBLOXSTUDIO 0x00c6cdf0
extern "C" __declspec(naked) void asm_00c6cdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 8 }
	__asm { mov edi, ecx }
	__asm { call fn_00c6c350 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { shr esi, 3 }
	__asm { mov byte ptr [esi + edx], al }
	__asm { add dword ptr [edi], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6db00
extern "C" __declspec(naked) void asm_00c6db00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { lea ecx, [esi + 8] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { add esp, 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6bf20();
extern "C" void fn_00c6d500();
// FUNCTION: ROBLOXSTUDIO 0x00c6dec0
extern "C" __declspec(naked) void asm_00c6dec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c6d500 }
	__asm { add esp, 8 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00c6bf20 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6d460();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6df40
extern "C" __declspec(naked) void asm_00c6df40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6d460 }
	__asm { mov cx, word ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov word ptr [edi + 4], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6df70
extern "C" __declspec(naked) void asm_00c6df70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { add esp, 0x10 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e160();
// FUNCTION: ROBLOXSTUDIO 0x00c6dfa0
extern "C" __declspec(naked) void asm_00c6dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e160 }
	__asm { lea ecx, [esi + 2] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e160 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e160();
// FUNCTION: ROBLOXSTUDIO 0x00c6dfd0
extern "C" __declspec(naked) void asm_00c6dfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e160 }
	__asm { lea ecx, [esi + 2] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e160 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e160 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00afae40();
// FUNCTION: ROBLOXSTUDIO 0x00c6e4c0
extern "C" __declspec(naked) void asm_00c6e4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00c6e4ee }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, esi }
	__asm { L_00c6e4ee: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b1060();
extern "C" void fn_009004e0();
extern "C" void fn_00c6d460();
// FUNCTION: ROBLOXSTUDIO 0x00c6f000
extern "C" __declspec(naked) void asm_00c6f000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d460 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c6f02f }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b1060 }
	__asm { L_00c6f02f: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b10d0();
extern "C" void fn_00c6da30();
// FUNCTION: ROBLOXSTUDIO 0x00c6f040
extern "C" __declspec(naked) void asm_00c6f040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xc2 }
	__asm { call fn_00c6da30 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c6f06c }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b10d0 }
	__asm { L_00c6f06c: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b1290();
extern "C" void fn_009004e0();
extern "C" void fn_00c6d460();
// FUNCTION: ROBLOXSTUDIO 0x00c6f0f0
extern "C" __declspec(naked) void asm_00c6f0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d460 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c6f11f }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b1290 }
	__asm { L_00c6f11f: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008afe80();
extern "C" void fn_008e9ec0();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c6f3d0
extern "C" __declspec(naked) void asm_00c6f3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008afe80 }
	__asm { mov ecx, eax }
	__asm { call fn_008e9ec0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 6 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0170();
extern "C" void fn_00c70160();
// FUNCTION: ROBLOXSTUDIO 0x00c6f4d0
extern "C" __declspec(naked) void asm_00c6f4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_008b0170 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70160 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70160 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e3a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6fe50
extern "C" __declspec(naked) void asm_00c6fe50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e3a0 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e3a0 }
	__asm { lea ecx, [esi + 8] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00c6e3a0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c70160();
// FUNCTION: ROBLOXSTUDIO 0x00c70130
extern "C" __declspec(naked) void asm_00c70130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c70160 }
	__asm { lea ecx, [esi + 8] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c70160 }
	__asm { add esp, 0x10 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c70200
extern "C" __declspec(naked) void asm_00c70200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { fld dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c70320();
// FUNCTION: ROBLOXSTUDIO 0x00c70230
extern "C" __declspec(naked) void asm_00c70230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { movzx eax, word ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c70320 }
	__asm { movzx ecx, word ptr [esi + 2] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c70320 }
	__asm { add esp, 0x10 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c70320();
// FUNCTION: ROBLOXSTUDIO 0x00c702a0
extern "C" __declspec(naked) void asm_00c702a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { movzx eax, word ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c70320 }
	__asm { movzx ecx, word ptr [esi + 2] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c70320 }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00c70320 }
	__asm { add esp, 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c707d0
extern "C" __declspec(naked) void asm_00c707d0()
{
	__asm { push 0x24 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00c707e4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00c707e4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00c707ef }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c707ef: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c707f8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c707f8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c70800
extern "C" __declspec(naked) void asm_00c70800()
{
	__asm { push esi }
	__asm { push 0x24 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00c70819 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c70819: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00c70828 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c70828: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c70833 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00c70833: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c34f20();
// FUNCTION: ROBLOXSTUDIO 0x00c714d0
extern "C" __declspec(naked) void asm_00c714d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00c714fe }
	__asm { mov ecx, dword ptr [ecx + 0xe80] }
	__asm { push esi }
	__asm { call fn_00c34f20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov byte ptr [eax], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c714fe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c719b0
extern "C" __declspec(naked) void asm_00c719b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67230 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00c6cf00();
extern "C" void fn_00cc6290();
// FUNCTION: ROBLOXSTUDIO 0x00c722d0
extern "C" __declspec(naked) void asm_00c722d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebx] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call fn_00cc6290 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0xe90] }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c72590
extern "C" __declspec(naked) void asm_00c72590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00afae40();
// FUNCTION: ROBLOXSTUDIO 0x00c740d0
extern "C" __declspec(naked) void asm_00c740d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00c740fe }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov al, byte ptr [edx + 8] }
	__asm { mov byte ptr [edi + 8], al }
	__asm { mov eax, esi }
	__asm { L_00c740fe: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c74110
extern "C" __declspec(naked) void asm_00c74110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, esi }
	__asm { je L_00c74137 }
	__asm { L_00c74121: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dx, word ptr [ecx + 4] }
	__asm { mov word ptr [eax + 4], dx }
	__asm { add ecx, 6 }
	__asm { add eax, 6 }
	__asm { cmp ecx, esi }
	__asm { jne L_00c74121 }
	__asm { L_00c74137: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c74a70
extern "C" __declspec(naked) void asm_00c74a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edx }
	__asm { je L_00c74a9f }
	__asm { push esi }
	__asm { L_00c74a81: }
	__asm { test eax, eax }
	__asm { je L_00c74a91 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov si, word ptr [ecx + 4] }
	__asm { mov word ptr [eax + 4], si }
	__asm { L_00c74a91: }
	__asm { add ecx, 6 }
	__asm { add eax, 6 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_00c74a81 }
	__asm { pop esi }
	__asm { L_00c74a9f: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_007d09e0();
// FUNCTION: ROBLOXSTUDIO 0x00c74ae0
extern "C" __declspec(naked) void asm_00c74ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d09e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0f10();
extern "C" void fn_00c6d460();
// FUNCTION: ROBLOXSTUDIO 0x00c75f80
extern "C" __declspec(naked) void asm_00c75f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d460 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c75fa5 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b0f10 }
	__asm { L_00c75fa5: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0f80();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c75fb0
extern "C" __declspec(naked) void asm_00c75fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d640 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c75fd5 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b0f80 }
	__asm { L_00c75fd5: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0ff0();
extern "C" void fn_00c6d6e0();
// FUNCTION: ROBLOXSTUDIO 0x00c75fe0
extern "C" __declspec(naked) void asm_00c75fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d6e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c76007 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008b0ff0 }
	__asm { L_00c76007: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b1140();
extern "C" void fn_00c6db00();
// FUNCTION: ROBLOXSTUDIO 0x00c76090
extern "C" __declspec(naked) void asm_00c76090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6db00 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c760b7 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_008b1140 }
	__asm { L_00c760b7: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_008b1220();
extern "C" void fn_00c6dc10();
// FUNCTION: ROBLOXSTUDIO 0x00c760c0
extern "C" __declspec(naked) void asm_00c760c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dc10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c760ef }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_008b1220 }
	__asm { L_00c760ef: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b1450();
extern "C" void fn_00c6df70();
// FUNCTION: ROBLOXSTUDIO 0x00c76100
extern "C" __declspec(naked) void asm_00c76100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6df70 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c76135 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008b1450 }
	__asm { L_00c76135: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b14c0();
extern "C" void fn_00c6dfa0();
// FUNCTION: ROBLOXSTUDIO 0x00c76140
extern "C" __declspec(naked) void asm_00c76140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dfa0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c7616a }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b14c0 }
	__asm { L_00c7616a: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b1530();
extern "C" void fn_00c6db00();
// FUNCTION: ROBLOXSTUDIO 0x00c76170
extern "C" __declspec(naked) void asm_00c76170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6db00 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c761ac }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_008b1530 }
	__asm { L_00c761ac: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b15a0();
extern "C" void fn_00c6dfd0();
// FUNCTION: ROBLOXSTUDIO 0x00c761b0
extern "C" __declspec(naked) void asm_00c761b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dfd0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00c761e0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008b15a0 }
	__asm { L_00c761e0: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004109a0();
extern "C" void fn_007d5470();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c761f0
extern "C" __declspec(naked) void asm_00c761f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d640 }
	__asm { add esp, 8 }
	__asm { call fn_007d5470 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_004109a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cfc10();
extern "C" void fn_007d54e0();
extern "C" void fn_00c6d6e0();
// FUNCTION: ROBLOXSTUDIO 0x00c76220
extern "C" __declspec(naked) void asm_00c76220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d6e0 }
	__asm { add esp, 8 }
	__asm { call fn_007d54e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_007cfc10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cfca0();
extern "C" void fn_007d6030();
extern "C" void fn_009004e0();
extern "C" void fn_00c6dda0();
// FUNCTION: ROBLOXSTUDIO 0x00c762d0
extern "C" __declspec(naked) void asm_00c762d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dda0 }
	__asm { add esp, 8 }
	__asm { call fn_007d6030 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_007cfca0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cfe20();
extern "C" void fn_007d57f0();
extern "C" void fn_00c6da30();
// FUNCTION: ROBLOXSTUDIO 0x00c76390
extern "C" __declspec(naked) void asm_00c76390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xc2 }
	__asm { call fn_00c6da30 }
	__asm { add esp, 8 }
	__asm { call fn_007d57f0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_007cfe20 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040e3e0();
extern "C" void fn_007d5860();
extern "C" void fn_00c6db00();
// FUNCTION: ROBLOXSTUDIO 0x00c763d0
extern "C" __declspec(naked) void asm_00c763d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6db00 }
	__asm { add esp, 8 }
	__asm { call fn_007d5860 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_0040e3e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_007b78e0();
extern "C" void fn_0088bd20();
extern "C" void fn_00c6dc10();
// FUNCTION: ROBLOXSTUDIO 0x00c76490
extern "C" __declspec(naked) void asm_00c76490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dc10 }
	__asm { add esp, 8 }
	__asm { call fn_0088bd20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_007b78e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cfeb0();
extern "C" void fn_007d5940();
extern "C" void fn_009004e0();
extern "C" void fn_00c6dda0();
// FUNCTION: ROBLOXSTUDIO 0x00c764d0
extern "C" __declspec(naked) void asm_00c764d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dda0 }
	__asm { add esp, 8 }
	__asm { call fn_007d5940 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_007cfeb0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d0340();
extern "C" void fn_007d5a90();
extern "C" void fn_00c6df40();
// FUNCTION: ROBLOXSTUDIO 0x00c765f0
extern "C" __declspec(naked) void asm_00c765f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { xor eax, eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00c6df40 }
	__asm { add esp, 8 }
	__asm { call fn_007d5a90 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_007d0340 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d03e0();
extern "C" void fn_007d5b00();
extern "C" void fn_00c6df70();
// FUNCTION: ROBLOXSTUDIO 0x00c76630
extern "C" __declspec(naked) void asm_00c76630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6df70 }
	__asm { add esp, 8 }
	__asm { call fn_007d5b00 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_007d03e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d0480();
extern "C" void fn_007d5b70();
extern "C" void fn_00c6dfa0();
// FUNCTION: ROBLOXSTUDIO 0x00c76670
extern "C" __declspec(naked) void asm_00c76670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dfa0 }
	__asm { add esp, 8 }
	__asm { call fn_007d5b70 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_007d0480 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d05c0();
extern "C" void fn_007d5c50();
extern "C" void fn_00c6dfd0();
// FUNCTION: ROBLOXSTUDIO 0x00c76700
extern "C" __declspec(naked) void asm_00c76700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6dfd0 }
	__asm { add esp, 8 }
	__asm { call fn_007d5c50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_007d05c0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_0080ee10();
// FUNCTION: ROBLOXSTUDIO 0x00c781a0
extern "C" __declspec(naked) void asm_00c781a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c781c7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0080ee10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c781c7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c781c7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00812790();
// FUNCTION: ROBLOXSTUDIO 0x00c781d0
extern "C" __declspec(naked) void asm_00c781d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c781f7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00812790 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c781f7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c781f7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d630();
extern "C" void fn_00c70130();
// FUNCTION: ROBLOXSTUDIO 0x00c79710
extern "C" __declspec(naked) void asm_00c79710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044d630 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70130 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d5a0();
extern "C" void fn_00c70160();
// FUNCTION: ROBLOXSTUDIO 0x00c79750
extern "C" __declspec(naked) void asm_00c79750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044d5a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70160 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044e0d0();
extern "C" void fn_00c70260();
// FUNCTION: ROBLOXSTUDIO 0x00c797f0
extern "C" __declspec(naked) void asm_00c797f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044e0d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70260 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d360();
extern "C" void fn_00c702a0();
// FUNCTION: ROBLOXSTUDIO 0x00c79830
extern "C" __declspec(naked) void asm_00c79830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044d360 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 6], ecx }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { lea eax, [ebp - 6] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c702a0 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c7ad60();
// FUNCTION: ROBLOXSTUDIO 0x00c7aeb0
extern "C" __declspec(naked) void asm_00c7aeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c7ad60 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { shl eax, 0xe }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c7e000();
// FUNCTION: ROBLOXSTUDIO 0x00c7e180
extern "C" __declspec(naked) void asm_00c7e180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00c7e000 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00c81480
extern "C" __declspec(naked) void asm_00c81480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0xef7304 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 1 }
	__asm { mov dword ptr [ebp - 8], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c85520();
// FUNCTION: ROBLOXSTUDIO 0x00c816b0
extern "C" __declspec(naked) void asm_00c816b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00c816d9 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { push dword ptr [eax + 0xe8] }
	__asm { call fn_00c85520 }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { setg al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c816d9: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a27320();
// FUNCTION: ROBLOXSTUDIO 0x00c819b0
extern "C" __declspec(naked) void asm_00c819b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { jne L_00c819e8 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push 1 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { add ecx, 0x3c }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a27320 }
	__asm { L_00c819e8: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c75470();
// FUNCTION: ROBLOXSTUDIO 0x00c81e20
extern "C" __declspec(naked) void asm_00c81e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c81e4e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c75470 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c81e4e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3b00();
// FUNCTION: ROBLOXSTUDIO 0x00c81e60
extern "C" __declspec(naked) void asm_00c81e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c81e8e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3b00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c81e8e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c841f0();
// FUNCTION: ROBLOXSTUDIO 0x00c84190
extern "C" __declspec(naked) void asm_00c84190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c841ab }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c841f0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c841ab: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c841f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00abd7b0();
// FUNCTION: ROBLOXSTUDIO 0x00c841c0
extern "C" __declspec(naked) void asm_00c841c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c841db }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abd7b0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c841db: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abd7b0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c72a40();
// FUNCTION: ROBLOXSTUDIO 0x00c85790
extern "C" __declspec(naked) void asm_00c85790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x7c }
	__asm { push 0 }
	__asm { lea eax, [ecx + 0xeb0] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c72a40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104d8[];
// FUNCTION: ROBLOXSTUDIO 0x00c86230
extern "C" __declspec(naked) void asm_00c86230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ecx + 0xa0], 1 }
	__asm { je L_00c8626b }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_00c8626b }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e104d8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00c8626b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00c8626b }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00c8626b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c703b0();
extern "C" void fn_00c76ae0();
// FUNCTION: ROBLOXSTUDIO 0x00c8e670
extern "C" __declspec(naked) void asm_00c8e670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x2050] }
	__asm { push 0xfffe }
	__asm { push dword ptr [esi] }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { lea eax, [edi + 0x140] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c76ae0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c703b0();
extern "C" void fn_00c76e80();
// FUNCTION: ROBLOXSTUDIO 0x00c8e6b0
extern "C" __declspec(naked) void asm_00c8e6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x2050] }
	__asm { push 0xfffe }
	__asm { push dword ptr [esi] }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { lea eax, [edi + 0x140] }
	__asm { push -1 }
	__asm { push dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c76e80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c703b0();
extern "C" void fn_00c77220();
// FUNCTION: ROBLOXSTUDIO 0x00c8e6f0
extern "C" __declspec(naked) void asm_00c8e6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x2050] }
	__asm { push 0xfffe }
	__asm { push dword ptr [esi] }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { lea eax, [edi + 0x140] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c77220 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c94430();
// FUNCTION: ROBLOXSTUDIO 0x00c96520
extern "C" __declspec(naked) void asm_00c96520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9654e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c94430 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c9654e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009a6a20();
// FUNCTION: ROBLOXSTUDIO 0x00c96560
extern "C" __declspec(naked) void asm_00c96560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9658e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009a6a20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c9658e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c96b50();
// FUNCTION: ROBLOXSTUDIO 0x00c96b20
extern "C" __declspec(naked) void asm_00c96b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c96b3b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c96b50 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c96b3b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c96b50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c3dee0();
extern "C" void fn_00c96fc0();
extern "C" void fn_00ca7a20();
// FUNCTION: ROBLOXSTUDIO 0x00c97830
extern "C" __declspec(naked) void asm_00c97830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c96fc0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00c97857 }
	__asm { mov ecx, eax }
	__asm { call fn_00c3dee0 }
	__asm { test eax, eax }
	__asm { je L_00c97857 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_00ca7a20 }
	__asm { L_00c97857: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c9baa0
extern "C" __declspec(naked) void asm_00c9baa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c992a0();
// FUNCTION: ROBLOXSTUDIO 0x00c9c2b0
extern "C" __declspec(naked) void asm_00c9c2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c9c2de }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c992a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c9c2de: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c9c790();
// FUNCTION: ROBLOXSTUDIO 0x00c9c760
extern "C" __declspec(naked) void asm_00c9c760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c9c77b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00c9c790 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c9c77b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00c9c790 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca0f60
extern "C" __declspec(naked) void asm_00ca0f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00ca0f97 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00ca0f7c }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca0f7c: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca0f97: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00c2cbd0();
// FUNCTION: ROBLOXSTUDIO 0x00ca1840
extern "C" __declspec(naked) void asm_00ca1840()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00c2cbd0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ca185e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00ca185e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00ca6060();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca35f0
extern "C" __declspec(naked) void asm_00ca35f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00ca6060 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ca5740
extern "C" __declspec(naked) void asm_00ca5740()
{
	__asm { push esi }
	__asm { push 0x20 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00ca5759 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ca5759: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00ca5768 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00ca5768: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00ca5773 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00ca5773: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_008929a0();
extern "C" void fn_00b49710();
extern "C" void fn_00c72ac0();
// FUNCTION: ROBLOXSTUDIO 0x00ca5cc0
extern "C" __declspec(naked) void asm_00ca5cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ecx + 0x4658] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00c72ac0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_008929a0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b49710 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { sete cl }
	__asm { mov al, cl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca6000
extern "C" __declspec(naked) void asm_00ca6000()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00ca6034 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00ca6019 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca6019: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca6034: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c8c2d0();
extern "C" void fn_00ca9e10();
extern "C" void fn_00ca9fe0();
// FUNCTION: ROBLOXSTUDIO 0x00ca9dd0
extern "C" __declspec(naked) void asm_00ca9dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, 0xd }
	__asm { je L_00ca9df5 }
	__asm { cmp eax, 0x10 }
	__asm { je L_00ca9de9 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { pop ebp }
	__asm { jmp fn_00c8c2d0 }
	__asm { L_00ca9de9: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ca9fe0 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ca9df5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ca9e10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c70320();
extern "C" void fn_00c703b0();
extern "C" void fn_00cc7750();
// FUNCTION: ROBLOXSTUDIO 0x00cac830
extern "C" __declspec(naked) void asm_00cac830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0xc }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00cc7750 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { movzx eax, word ptr [edi + 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c70320 }
	__asm { add esp, 0x18 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c92870();
extern "C" void fn_00caca80();
// FUNCTION: ROBLOXSTUDIO 0x00caca10
extern "C" __declspec(naked) void asm_00caca10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00caca80 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c92870 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c92aa0();
extern "C" void fn_00caca80();
// FUNCTION: ROBLOXSTUDIO 0x00caca40
extern "C" __declspec(naked) void asm_00caca40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00caca80 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c92aa0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004118e0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00cb0610
extern "C" __declspec(naked) void asm_00cb0610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00cb0637 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00cb0637 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb0637: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c7bf10();
// FUNCTION: ROBLOXSTUDIO 0x00cb0fa0
extern "C" __declspec(naked) void asm_00cb0fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push 0xefe1a4 }
	__asm { call fn_00c7bf10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x210], eax }
	__asm { mov dword ptr [esi], 0xefe188 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cb02a0();
// FUNCTION: ROBLOXSTUDIO 0x00cb30b0
extern "C" __declspec(naked) void asm_00cb30b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cb30de }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00cb02a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cb30de: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cb3720();
// FUNCTION: ROBLOXSTUDIO 0x00cb36f0
extern "C" __declspec(naked) void asm_00cb36f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00cb370b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00cb3720 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb370b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00cb3720 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131470c[];
extern "C" char g_01314710[];
extern "C" void fn_00cb8fc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cb9510
extern "C" __declspec(naked) void asm_00cb9510()
{
	__asm { mov eax, dword ptr [g_01314710] }
	__asm { test eax, eax }
	__asm { jle L_00cb9547 }
	__asm { dec eax }
	__asm { mov dword ptr [g_01314710], eax }
	__asm { jne L_00cb9547 }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0131470c] }
	__asm { test esi, esi }
	__asm { je L_00cb953c }
	__asm { mov ecx, esi }
	__asm { call fn_00cb8fc0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cb953c: }
	__asm { mov dword ptr [g_0131470c], 0 }
	__asm { pop esi }
	__asm { L_00cb9547: }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00812f90();
// FUNCTION: ROBLOXSTUDIO 0x00cb97e0
extern "C" __declspec(naked) void asm_00cb97e0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00812f90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cb97fe }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00cb97fe: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00813390();
// FUNCTION: ROBLOXSTUDIO 0x00cb9810
extern "C" __declspec(naked) void asm_00cb9810()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00813390 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cb982e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00cb982e: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbb8a0
extern "C" __declspec(naked) void asm_00cbb8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea edx, [esi + edi] }
	__asm { cmp edx, eax }
	__asm { jb L_00cbb8c2 }
	__asm { sub esi, eax }
	__asm { add esi, dword ptr [ecx] }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cbb8c2: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { add eax, esi }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cbc7e0();
extern "C" void fn_00cbe800();
extern "C" void fn_00ccfe60();
extern "C" void fn_00cf3c10();
// FUNCTION: ROBLOXSTUDIO 0x00cc0350
extern "C" __declspec(naked) void asm_00cc0350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00cbc7e0 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00cc0381 }
	__asm { mov ecx, esi }
	__asm { call fn_00cbe800 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, -0x1c }
	__asm { push eax }
	__asm { call fn_00ccfe60 }
	__asm { push edx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xea0] }
	__asm { call fn_00cf3c10 }
	__asm { L_00cc0381: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc0fc0
extern "C" __declspec(naked) void asm_00cc0fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx ecx, word ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { movzx edx, word ptr [eax + 0xe] }
	__asm { cmp cx, dx }
	__asm { jae L_00cc0fe1 }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc0fe1: }
	__asm { xor eax, eax }
	__asm { cmp cx, dx }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c853c0();
extern "C" void fn_00cc8b80();
// FUNCTION: ROBLOXSTUDIO 0x00cc8d70
extern "C" __declspec(naked) void asm_00cc8d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cc8b80 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xef699c }
	__asm { je L_00cc8d98 }
	__asm { lea ecx, [esi - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00c853c0 }
	__asm { L_00cc8d98: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc9720
extern "C" __declspec(naked) void asm_00cc9720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { fstp qword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov dword ptr [ecx], 0xf0037c }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc98c0
extern "C" __declspec(naked) void asm_00cc98c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { fstp qword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov dword ptr [ecx], 0xf003d0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc99d0
extern "C" __declspec(naked) void asm_00cc99d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { fstp qword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov dword ptr [ecx], 0xf003fc }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00baca30();
extern "C" void fn_00cc9d50();
// FUNCTION: ROBLOXSTUDIO 0x00ccab50
extern "C" __declspec(naked) void asm_00ccab50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_00baca30 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cc9d50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c70e70();
extern "C" void fn_00ccdf20();
// FUNCTION: ROBLOXSTUDIO 0x00ccdd60
extern "C" __declspec(naked) void asm_00ccdd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x208] }
	__asm { call fn_00c70e70 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ccdf20 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cd0880
extern "C" __declspec(naked) void asm_00cd0880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0xdc], 0 }
	__asm { je L_00cd08a9 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0x7c] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00cd08a9 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cd08a9: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00cd31b0
extern "C" __declspec(naked) void asm_00cd31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00cd31d6 }
	__asm { push 0xccf490 }
	__asm { push 0x28 }
	__asm { push 0x28 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cd31d6: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010381d0[];
// FUNCTION: ROBLOXSTUDIO 0x00cd5220
extern "C" __declspec(naked) void asm_00cd5220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 0x118] }
	__asm { jbe L_00cd5234 }
	__asm { mov dword ptr [ecx + 0x118], eax }
	__asm { L_00cd5234: }
	__asm { inc dword ptr [ecx + 0x88] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { fild dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jns L_00cd524a }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_00cd524a: }
	__asm { fadd qword ptr [ecx + 0x90] }
	__asm { fstp qword ptr [ecx + 0x90] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099c980();
extern "C" void fn_00b5bb60();
extern "C" void fn_00cd8e30();
extern "C" void fn_00cd9150();
// FUNCTION: ROBLOXSTUDIO 0x00cd8f90
extern "C" __declspec(naked) void asm_00cd8f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00b5bb60 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c980 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_00cd8e30 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_00cd9150 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00421eb0();
extern "C" void fn_00cda5e0();
// FUNCTION: ROBLOXSTUDIO 0x00cda830
extern "C" __declspec(naked) void asm_00cda830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00cda5e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421eb0();
extern "C" void fn_00cddb20();
// FUNCTION: ROBLOXSTUDIO 0x00cddd10
extern "C" __declspec(naked) void asm_00cddd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00cddb20 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cdfee0();
extern "C" void fn_00ce0260();
// FUNCTION: ROBLOXSTUDIO 0x00cdffd0
extern "C" __declspec(naked) void asm_00cdffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00cdffe1 }
	__asm { call fn_00cdfee0 }
	__asm { L_00cdffe1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00ce0260 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { inc dword ptr [esi + 0x28] }
	__asm { add ecx, 7 }
	__asm { shr ecx, 3 }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { setl al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421eb0();
extern "C" void fn_00ce1160();
// FUNCTION: ROBLOXSTUDIO 0x00ce12e0
extern "C" __declspec(naked) void asm_00ce12e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00ce1160 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce4700
extern "C" __declspec(naked) void asm_00ce4700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x208] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [eax + 0x21c0] }
	__asm { fld dword ptr [eax + 0x110] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00ce4eb0
extern "C" __declspec(naked) void asm_00ce4eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x208] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [eax + 0x21c0] }
	__asm { fld dword ptr [eax + 0x110] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c722d0();
extern "C" void fn_00cc7750();
// FUNCTION: ROBLOXSTUDIO 0x00ce5b00
extern "C" __declspec(naked) void asm_00ce5b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push 0xf }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cc7750 }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { add esp, 8 }
	__asm { lea eax, [edi + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c722d0 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c688b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce6f10
extern "C" __declspec(naked) void asm_00ce6f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cee3a0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce70b0
extern "C" __declspec(naked) void asm_00ce70b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x5a0] }
	__asm { call fn_00cf40a0 }
	__asm { push 0x1009 }
	__asm { push 0xf045f0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x5b8] }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [esi + 0x5a0] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ce98d0();
// FUNCTION: ROBLOXSTUDIO 0x00ce99e0
extern "C" __declspec(naked) void asm_00ce99e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { call fn_00ce98d0 }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9dd0
extern "C" __declspec(naked) void asm_00ce9dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x458] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x45c] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [ecx + 0x460] }
	__asm { mov ecx, dword ptr [ecx + 0x464] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce9ec0
extern "C" __declspec(naked) void asm_00ce9ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x26c] }
	__asm { call fn_00cf40a0 }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x26c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add edx, 7 }
	__asm { shr edx, 3 }
	__asm { mov dword ptr [eax], edx }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cbd3b0();
// FUNCTION: ROBLOXSTUDIO 0x00cea8c0
extern "C" __declspec(naked) void asm_00cea8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, word ptr [ecx + 0xe] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, eax }
	__asm { jge L_00cea8f6 }
	__asm { mov eax, dword ptr [ecx + 0x22c] }
	__asm { imul edx, edx, 0x1208 }
	__asm { cmp byte ptr [edx + eax], 0 }
	__asm { je L_00cea8f6 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [eax + 0xf8] }
	__asm { add ecx, edx }
	__asm { call fn_00cbd3b0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cea8f6: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}
