// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0064aae0();
extern "C" void fn_0064ab30();
extern "C" void fn_0064abd0();
// FUNCTION: ROBLOXSTUDIO 0x0064ac70
extern "C" __declspec(naked) void asm_0064ac70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_0064ac94 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0064aae0 }
	__asm { add esp, 0xc }
	__asm { L_0064ac94: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { cmp dword ptr [ebx], eax }
	__asm { jne L_0064acb1 }
	__asm { push esi }
	__asm { push 0x1f }
	__asm { push edi }
	__asm { call fn_0064aae0 }
	__asm { add esp, 0xc }
	__asm { L_0064acb1: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_0064acd1 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0064ab30 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_0064ab30 }
	__asm { add esp, 0x18 }
	__asm { L_0064acd1: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { cmp dword ptr [ebx + 4], eax }
	__asm { jne L_0064acf1 }
	__asm { push esi }
	__asm { push 0xf }
	__asm { push edi }
	__asm { call fn_0064ab30 }
	__asm { add esp, 0xc }
	__asm { L_0064acf1: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_0064ad08 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0064abd0 }
	__asm { add esp, 0xc }
	__asm { L_0064ad08: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { cmp dword ptr [ebx + 8], eax }
	__asm { jne L_0064ad28 }
	__asm { push esi }
	__asm { push 0x1f }
	__asm { push edi }
	__asm { call fn_0064abd0 }
	__asm { add esp, 0xc }
	__asm { L_0064ad28: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0064f5d0();
extern "C" void fn_0064f6a0();
// FUNCTION: ROBLOXSTUDIO 0x0064f490
extern "C" __declspec(naked) void asm_0064f490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [ebx + 4] }
	__asm { jl L_0064f4e1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { lea ecx, [esi + 4] }
	__asm { cmovl ecx, edi }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0064f5d0 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { L_0064f4e1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jge L_0064f51c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { inc ecx }
	__asm { cmp dword ptr [ebx + 4], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea edi, [ebx + 4] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmovge eax, edi }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0064f6a0 }
	__asm { L_0064f51c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0064f770();
extern "C" void fn_0064f840();
// FUNCTION: ROBLOXSTUDIO 0x0064f530
extern "C" __declspec(naked) void asm_0064f530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [ebx + 4] }
	__asm { jl L_0064f581 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { lea ecx, [esi + 4] }
	__asm { cmovl ecx, edi }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0064f770 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { L_0064f581: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jge L_0064f5bc }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { inc ecx }
	__asm { cmp dword ptr [ebx + 4], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea edi, [ebx + 4] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmovge eax, edi }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0064f840 }
	__asm { L_0064f5bc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0064b560();
extern "C" void fn_0064b810();
extern "C" void fn_0064cae0();
extern "C" void fn_0064d010();
// FUNCTION: ROBLOXSTUDIO 0x0064f5d0
extern "C" __declspec(naked) void asm_0064f5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jl L_0064f634 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { lea ecx, [ebx + 8] }
	__asm { lea eax, [edi + 8] }
	__asm { cmovl ecx, eax }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { je L_0064f62f }
	__asm { call fn_0064cae0 }
	__asm { jmp L_0064f634 }
	__asm { L_0064f62f: }
	__asm { call fn_0064b560 }
	__asm { L_0064f634: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jge L_0064f689 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp dword ptr [edx], ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmovge eax, edx }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { je L_0064f684 }
	__asm { call fn_0064d010 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0064f684: }
	__asm { call fn_0064b810 }
	__asm { L_0064f689: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0064bad0();
extern "C" void fn_0064bd80();
extern "C" void fn_0064d540();
extern "C" void fn_0064da70();
// FUNCTION: ROBLOXSTUDIO 0x0064f6a0
extern "C" __declspec(naked) void asm_0064f6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jl L_0064f704 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { lea ecx, [ebx + 8] }
	__asm { lea eax, [edi + 8] }
	__asm { cmovl ecx, eax }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { je L_0064f6ff }
	__asm { call fn_0064d540 }
	__asm { jmp L_0064f704 }
	__asm { L_0064f6ff: }
	__asm { call fn_0064bad0 }
	__asm { L_0064f704: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jge L_0064f759 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp dword ptr [edx], ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmovge eax, edx }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { je L_0064f754 }
	__asm { call fn_0064da70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0064f754: }
	__asm { call fn_0064bd80 }
	__asm { L_0064f759: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0064c020();
extern "C" void fn_0064c2c0();
extern "C" void fn_0064dfa0();
extern "C" void fn_0064e4d0();
// FUNCTION: ROBLOXSTUDIO 0x0064f770
extern "C" __declspec(naked) void asm_0064f770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jl L_0064f7d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { lea ecx, [ebx + 8] }
	__asm { lea eax, [edi + 8] }
	__asm { cmovl ecx, eax }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { je L_0064f7cf }
	__asm { call fn_0064dfa0 }
	__asm { jmp L_0064f7d4 }
	__asm { L_0064f7cf: }
	__asm { call fn_0064c020 }
	__asm { L_0064f7d4: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jge L_0064f829 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp dword ptr [edx], ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmovge eax, edx }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { je L_0064f824 }
	__asm { call fn_0064e4d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0064f824: }
	__asm { call fn_0064c2c0 }
	__asm { L_0064f829: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0064c570();
extern "C" void fn_0064c830();
extern "C" void fn_0064ea10();
extern "C" void fn_0064ef50();
// FUNCTION: ROBLOXSTUDIO 0x0064f840
extern "C" __declspec(naked) void asm_0064f840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jl L_0064f8a4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { lea ecx, [ebx + 8] }
	__asm { lea eax, [edi + 8] }
	__asm { cmovl ecx, eax }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { je L_0064f89f }
	__asm { call fn_0064ea10 }
	__asm { jmp L_0064f8a4 }
	__asm { L_0064f89f: }
	__asm { call fn_0064c570 }
	__asm { L_0064f8a4: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jge L_0064f8f9 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp dword ptr [edx], ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmovge eax, edx }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { je L_0064f8f4 }
	__asm { call fn_0064ef50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0064f8f4: }
	__asm { call fn_0064c830 }
	__asm { L_0064f8f9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006548b0
extern "C" __declspec(naked) void asm_006548b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_006548db }
	__asm { cmp ebx, -1 }
	__asm { ja L_006548d5 }
	__asm { push ebx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_006548db }
	__asm { L_006548d5: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006548db: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, eax }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_00654905 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00654905: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { lea eax, [esi + ebx] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006548b0();
// FUNCTION: ROBLOXSTUDIO 0x00654930
extern "C" __declspec(naked) void asm_00654930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00654995 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { dec eax }
	__asm { cmp eax, edi }
	__asm { jae L_0065495d }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0065495d: }
	__asm { sub esi, ebx }
	__asm { sub edx, ebx }
	__asm { add esi, edi }
	__asm { mov edi, edx }
	__asm { shr edi, 1 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edi }
	__asm { pop ebx }
	__asm { cmp eax, edx }
	__asm { jae L_00654983 }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006548b0 }
	__asm { L_00654983: }
	__asm { add edx, edi }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006548b0 }
	__asm { L_00654995: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
extern "C" void fn_00654b10();
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
// FUNCTION: ROBLOXSTUDIO 0x006549a0
extern "C" __declspec(naked) void asm_006549a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd109e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00654b10 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00654a0e }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00654a0e }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00654a0e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00654a0e: }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 4], esi }
	__asm { jle L_00654a41 }
	__asm { xor edx, edx }
	__asm { L_00654a17: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edi] }
	__asm { fld dword ptr [ecx + edx + 4] }
	__asm { add ecx, edx }
	__asm { add eax, edx }
	__asm { inc esi }
	__asm { fstp dword ptr [eax + 4] }
	__asm { add edx, 0x14 }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_00654a17 }
	__asm { L_00654a41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_00654ea0();
extern "C" void fn_006e84d0();
// FUNCTION: ROBLOXSTUDIO 0x00654b10
extern "C" __declspec(naked) void asm_00654b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { cmp ebx, edi }
	__asm { je L_00654b61 }
	__asm { test edi, edi }
	__asm { je L_00654b50 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00654b49 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_00654b49 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_00654b49: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00654b50: }
	__asm { test ebx, ebx }
	__asm { je L_00654b61 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_00654b61: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test eax, eax }
	__asm { jle L_00654b8d }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00654ea0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00654b8d: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00656c10();
extern "C" void fn_00656c90();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x006564c0
extern "C" __declspec(naked) void asm_006564c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00656c10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_006564e9 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_006564e9 }
	__asm { fld dword ptr [eax + 0x7c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006564e9: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00656c90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00656508 }
	__asm { test edi, edi }
	__asm { je L_00656508 }
	__asm { fld dword ptr [edi + 0x7c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00656508: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00656546 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00656535 }
	__asm { push 0x5b }
	__asm { push 0xe38b98 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00656546 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00656535: }
	__asm { movzx eax, al }
	__asm { push 0xe38c40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00656546: }
	__asm { fldz }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00421060();
extern "C" void fn_00619b90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006566c0
extern "C" __declspec(naked) void asm_006566c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10ae1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_006566f4: }
	__asm { cmp edi, ebx }
	__asm { je L_0065676b }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00656739 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00656739 }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_0065671b }
	__asm { add ecx, -5 }
	__asm { jmp L_0065671d }
	__asm { L_0065671b: }
	__asm { xor ecx, ecx }
	__asm { L_0065671d: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_00656739 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_0065672e }
	__asm { add eax, 5 }
	__asm { jmp L_00656730 }
	__asm { L_0065672e: }
	__asm { xor eax, eax }
	__asm { L_00656730: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00656739: }
	__asm { add esi, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 4 }
	__asm { jmp L_006566f4 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00656762 }
	__asm { L_00656752: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00619b90 }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_00656752 }
	__asm { L_00656762: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0065676b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0052c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00656780
extern "C" __declspec(naked) void asm_00656780()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006567cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_006567cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0065681e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe390dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe39114 }
	__asm { mov dword ptr [esi + 8], 0xe39124 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3912c }
	__asm { mov dword ptr [esi + 8], 0xe3913c }
	__asm { jmp L_00656820 }
	__asm { L_0065681e: }
	__asm { xor esi, esi }
	__asm { L_00656820: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0065683d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0065683d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00656f60();
// FUNCTION: ROBLOXSTUDIO 0x00656860
extern "C" __declspec(naked) void asm_00656860()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006568ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_006568ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_006568fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe38b54 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe390e4 }
	__asm { mov dword ptr [esi + 8], 0xe390f4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe390fc }
	__asm { mov dword ptr [esi + 8], 0xe3910c }
	__asm { jmp L_00656900 }
	__asm { L_006568fe: }
	__asm { xor esi, esi }
	__asm { L_00656900: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00656f60 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0065691d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0065691d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_004226b0();
extern "C" void fn_006566c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00656a10
extern "C" __declspec(naked) void asm_00656a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10af0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test eax, eax }
	__asm { je L_00656a61 }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00656a5b }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { jne L_00656a61 }
	__asm { L_00656a5b: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00656a61: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006566c0 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ecx, eax }
	__asm { sub ecx, esi }
	__asm { sar ecx, 2 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { test esi, esi }
	__asm { je L_00656ac4 }
	__asm { cmp esi, eax }
	__asm { je L_00656aba }
	__asm { L_00656aa0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00656ab2 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00656ab2: }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [ebp - 0x18] }
	__asm { jne L_00656aa0 }
	__asm { L_00656aba: }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00656ac4: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], edi }
	__asm { lea eax, [edi + ecx*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { lea eax, [edi + eax*4] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00656a10();
// FUNCTION: ROBLOXSTUDIO 0x00656b10
extern "C" __declspec(naked) void asm_00656b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 2 }
	__asm { cmp eax, edi }
	__asm { jae L_00656b7d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00656b47 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00656b47: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_00656b6b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00656a10 }
	__asm { L_00656b6b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00656a10 }
	__asm { L_00656b7d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421060();
extern "C" void fn_00656b10();
// FUNCTION: ROBLOXSTUDIO 0x00657110
extern "C" __declspec(naked) void asm_00657110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_0065719c }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_0065719c }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00657150 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00656b10 }
	__asm { L_00657150: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006571f4 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test eax, eax }
	__asm { je L_006571f4 }
	__asm { lea edx, [eax + 5] }
	__asm { test edx, edx }
	__asm { je L_00657183 }
	__asm { add edx, -5 }
	__asm { jmp L_00657185 }
	__asm { L_00657183: }
	__asm { xor edx, edx }
	__asm { L_00657185: }
	__asm { cmp dword ptr [edx - 8], 0 }
	__asm { je L_006571f4 }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { je L_00657197 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { jmp L_006571ec }
	__asm { L_00657197: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { jmp L_006571ec }
	__asm { L_0065719c: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006571aa }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00656b10 }
	__asm { L_006571aa: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006571f4 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_006571f4 }
	__asm { lea edx, [ecx + 5] }
	__asm { test edx, edx }
	__asm { je L_006571d6 }
	__asm { add edx, -5 }
	__asm { jmp L_006571d8 }
	__asm { L_006571d6: }
	__asm { xor edx, edx }
	__asm { L_006571d8: }
	__asm { cmp dword ptr [edx - 8], 0 }
	__asm { je L_006571f4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_006571e9 }
	__asm { add ecx, 5 }
	__asm { jmp L_006571eb }
	__asm { L_006571e9: }
	__asm { xor ecx, ecx }
	__asm { L_006571eb: }
	__asm { push ecx }
	__asm { L_006571ec: }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_006571f4: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0061e030();
extern "C" void fn_00657ee0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00657cf0
extern "C" __declspec(naked) void asm_00657cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10be1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00657d24: }
	__asm { cmp edi, ebx }
	__asm { je L_00657d6b }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00657d3b }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00657ee0 }
	__asm { L_00657d3b: }
	__asm { add esi, 0x40 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x40 }
	__asm { jmp L_00657d24 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00657d62 }
	__asm { L_00657d54: }
	__asm { mov ecx, esi }
	__asm { call fn_0061e030 }
	__asm { add esi, 0x40 }
	__asm { cmp esi, edi }
	__asm { jne L_00657d54 }
	__asm { L_00657d62: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00657d6b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005ec140();
extern "C" void fn_00657b20();
extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00657d80
extern "C" __declspec(naked) void asm_00657d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10bf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_005ec140 }
	__asm { test al, al }
	__asm { je L_00657dfd }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00657b20 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00657dfd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
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

extern "C" void fn_005ec140();
extern "C" void fn_0061e640();
extern "C" void fn_00657b70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00657e30
extern "C" __declspec(naked) void asm_00657e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10c00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_005ec140 }
	__asm { test al, al }
	__asm { je L_00657ead }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00657b70 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00657ead: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_0061e640 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0061e030();
extern "C" void fn_00657cf0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006584e0
extern "C" __declspec(naked) void asm_006584e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10c60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test ebx, ebx }
	__asm { je L_00658537 }
	__asm { cmp ebx, 0x3ffffff }
	__asm { ja L_00658531 }
	__asm { mov eax, ebx }
	__asm { shl eax, 6 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { jne L_00658537 }
	__asm { L_00658531: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00658537: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00657cf0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, ecx }
	__asm { sub eax, esi }
	__asm { sar eax, 6 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test esi, esi }
	__asm { je L_00658594 }
	__asm { cmp esi, ecx }
	__asm { je L_00658585 }
	__asm { L_00658576: }
	__asm { mov ecx, esi }
	__asm { call fn_0061e030 }
	__asm { add esi, 0x40 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_00658576 }
	__asm { L_00658585: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_00658597 }
	__asm { L_00658594: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00658597: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { shl ebx, 6 }
	__asm { add ebx, edi }
	__asm { shl eax, 6 }
	__asm { mov dword ptr [esi], edi }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_006583f0();
// FUNCTION: ROBLOXSTUDIO 0x006585e0
extern "C" __declspec(naked) void asm_006585e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0065867b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0xccccccc }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00658631 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00658631: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0xccccccc }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00658668 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_006583f0 }
	__asm { L_00658668: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_006583f0 }
	__asm { L_0065867b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006584e0();
// FUNCTION: ROBLOXSTUDIO 0x00658690
extern "C" __declspec(naked) void asm_00658690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 6 }
	__asm { cmp eax, edi }
	__asm { jae L_006586fd }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3ffffff }
	__asm { sar esi, 6 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006586c7 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006586c7: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_006586eb }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006584e0 }
	__asm { L_006586eb: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006584e0 }
	__asm { L_006586fd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061c850();
extern "C" void fn_00657a80();
// FUNCTION: ROBLOXSTUDIO 0x006587a0
extern "C" __declspec(naked) void asm_006587a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_006587e4 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_006587e4 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0061c850 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006587e4: }
	__asm { cmp eax, edx }
	__asm { je L_0065881e }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00657a80 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_0061c850 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0065881e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006585e0();
// FUNCTION: ROBLOXSTUDIO 0x00658830
extern "C" __declspec(naked) void asm_00658830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_0065889f }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_0065889f }
	__asm { sub edi, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00658868 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006585e0 }
	__asm { L_00658868: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [edi + edi*4] }
	__asm { mov edi, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_006588d0 }
	__asm { mov eax, dword ptr [edi + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { fld dword ptr [edi + edx*4 + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [edi + edx*4 + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [edi + edx*4 + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edi + edx*4 + 0x10] }
	__asm { pop edi }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { add dword ptr [esi + 4], 0x14 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0065889f: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_006588ad }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006585e0 }
	__asm { L_006588ad: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006588d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { fld dword ptr [edi + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [edi + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edi + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { L_006588d0: }
	__asm { add dword ptr [esi + 4], 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00657ee0();
extern "C" void fn_00658690();
// FUNCTION: ROBLOXSTUDIO 0x006588e0
extern "C" __declspec(naked) void asm_006588e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00658934 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00658934 }
	__asm { sub edi, ecx }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0065891d }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00658690 }
	__asm { L_0065891d: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { and edi, 0xffffffc0 }
	__asm { add edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_00658952 }
	__asm { L_00658934: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00658942 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00658690 }
	__asm { L_00658942: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_00658952: }
	__asm { test ecx, ecx }
	__asm { je L_0065895c }
	__asm { push edi }
	__asm { call fn_00657ee0 }
	__asm { L_0065895c: }
	__asm { add dword ptr [esi + 4], 0x40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0063edc0();
extern "C" void fn_0065ae90();
extern "C" void fn_0065b340();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00658a90
extern "C" __declspec(naked) void asm_00658a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00658aef }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063edc0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, ebx }
	__asm { je L_00658ad9 }
	__asm { or eax, 0x10 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0065b340 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00658ad9: }
	__asm { or eax, 8 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0065b340 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00658aef: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0065ae90 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00660110();
// FUNCTION: ROBLOXSTUDIO 0x00658ed0
extern "C" __declspec(naked) void asm_00658ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x2120] }
	__asm { mov ebx, 0x20 }
	__asm { L_00658ee4: }
	__asm { cmp dword ptr [edi - 0x14], 0 }
	__asm { je L_00658f0e }
	__asm { mov ecx, dword ptr [edi - 0x18] }
	__asm { mov eax, dword ptr [edi - 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00658f02 }
	__asm { add eax, -0x20 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { jmp L_00658f18 }
	__asm { L_00658f02: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { jmp L_00658f18 }
	__asm { L_00658f0e: }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { L_00658f18: }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00658f73 }
	__asm { mov edi, edi }
	__asm { L_00658f20: }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00658f65 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { cmp ecx, 1 }
	__asm { jne L_00658f65 }
	__asm { lea ecx, [eax + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00658f3b }
	__asm { add ecx, -0x20 }
	__asm { jmp L_00658f3d }
	__asm { L_00658f3b: }
	__asm { xor ecx, ecx }
	__asm { L_00658f3d: }
	__asm { mov esi, dword ptr [ecx + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00658f55 }
	__asm { add esi, -0x20 }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { call fn_00660110 }
	__asm { mov eax, esi }
	__asm { jmp L_00658f6f }
	__asm { L_00658f55: }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { call fn_00660110 }
	__asm { mov eax, esi }
	__asm { jmp L_00658f6f }
	__asm { L_00658f65: }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00658f73 }
	__asm { add eax, -0x20 }
	__asm { L_00658f6f: }
	__asm { test eax, eax }
	__asm { jne L_00658f20 }
	__asm { L_00658f73: }
	__asm { mov eax, dword ptr [edi - 0x14] }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi - 4], eax }
	__asm { call fn_004038a0 }
	__asm { add edi, 0x34 }
	__asm { dec ebx }
	__asm { jne L_00658ee4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00826ad0();
// FUNCTION: ROBLOXSTUDIO 0x0065e920
extern "C" __declspec(naked) void asm_0065e920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { add ecx, 0xac }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { add eax, 0xac }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0065e96b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { L_0065e96b: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add ecx, 0xac }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0xac }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0065e9f2 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { add ecx, 0xac }
	__asm { add eax, 0xac }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00826ad0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0065e9f2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { L_0065e9f2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0065e920();
// FUNCTION: ROBLOXSTUDIO 0x0065ea00
extern "C" __declspec(naked) void asm_0065ea00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x28 }
	__asm { jle L_0065ea91 }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { shl ecx, 3 }
	__asm { lea ebx, [eax + eax*2] }
	__asm { shl ebx, 2 }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { lea edx, [ebx + edi] }
	__asm { push edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call fn_0065e920 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebx + edi] }
	__asm { push eax }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0065e920 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, esi }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { sub esi, ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0065e920 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0065e920 }
	__asm { add esp, 0x40 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065ea91: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_0065e920 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004036a0();
extern "C" void fn_0040f730();
extern "C" void fn_0065fab0();
// FUNCTION: ROBLOXSTUDIO 0x0065f750
extern "C" __declspec(naked) void asm_0065f750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11603 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp ebx, 0x400 }
	__asm { ja L_0065f7d7 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 0x400 }
	__asm { je L_0065f7d7 }
	__asm { jae L_0065f7c4 }
	__asm { push ebx }
	__asm { push 0x400 }
	__asm { call fn_004036a0 }
	__asm { L_0065f7c4: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { jb L_0065f7d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0065f7d3 }
	__asm { L_0065f7d1: }
	__asm { mov eax, esi }
	__asm { L_0065f7d3: }
	__asm { mov byte ptr [eax + ebx], 0 }
	__asm { L_0065f7d7: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x10 }
	__asm { jae L_0065f7fd }
	__asm { push 0x10 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_0065fab0 }
	__asm { L_0065f7fd: }
	__asm { push 7 }
	__asm { push 0xe394d4 }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0065e670();
extern "C" void fn_0069d130();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0065fab0
extern "C" __declspec(naked) void asm_0065fab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11610 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_0065fb05 }
	__asm { cmp edi, 0x38e38e3 }
	__asm { ja L_0065faff }
	__asm { lea eax, [edi + edi*8] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0065fb05 }
	__asm { L_0065faff: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0065fb05: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0069d130 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0065fb63 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_0065e670 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0065fb63: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*8] }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e10260[];
extern "C" void fn_0065fab0();
// FUNCTION: ROBLOXSTUDIO 0x0065fbb0
extern "C" __declspec(naked) void asm_0065fbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0065fc4b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x38e38e3 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0065fc01 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0065fc01: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x38e38e3 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_0065fc38 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0065fab0 }
	__asm { L_0065fc38: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0065fab0 }
	__asm { L_0065fc4b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0065f820();
extern "C" void fn_0065fbb0();
// FUNCTION: ROBLOXSTUDIO 0x006602d0
extern "C" __declspec(naked) void asm_006602d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_0066033d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_0066033d }
	__asm { sub edi, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0066031e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0065fbb0 }
	__asm { L_0066031e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*8] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00660365 }
	__asm { push eax }
	__asm { jmp L_00660360 }
	__asm { L_0066033d: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0066034b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0065fbb0 }
	__asm { L_0066034b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00660365 }
	__asm { push edi }
	__asm { L_00660360: }
	__asm { call fn_0065f820 }
	__asm { L_00660365: }
	__asm { add dword ptr [esi + 4], 0x48 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011d8f9c[];
extern "C" char g_011d8f9e[];
extern "C" char g_011d8fa0[];
extern "C" void fn_00664040();
extern "C" void fn_00665360();
extern "C" void fn_00666e70();
extern "C" void fn_006673b0();
extern "C" void fn_00667f90();
// FUNCTION: ROBLOXSTUDIO 0x00660dd0
extern "C" __declspec(naked) void asm_00660dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1176a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { movzx eax, word ptr [edi + 4] }
	__asm { shl ax, 5 }
	__asm { movzx esi, ax }
	__asm { movzx eax, word ptr [edi + 2] }
	__asm { shl ax, 4 }
	__asm { movzx edx, ax }
	__asm { movzx eax, word ptr [edi] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add eax, dword ptr [g_011d8f9c] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { movzx eax, word ptr [g_011d8f9e] }
	__asm { add ax, dx }
	__asm { mov word ptr [ebp - 0x12], ax }
	__asm { mov eax, dword ptr [g_011d8fa0] }
	__asm { add eax, esi }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00664040 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], 0x2aaa }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call fn_00666e70 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00660ec9 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00667f90 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], 0x2aaa }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call fn_006673b0 }
	__asm { L_00660ec9: }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00665360 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc99f[];
extern "C" void fn_00665460();
extern "C" void fn_006816c0();
extern "C" void fn_006b8ab4();
// FUNCTION: ROBLOXSTUDIO 0x00661700
extern "C" __declspec(naked) void asm_00661700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x68] }
	__asm { call fn_00665460 }
	__asm { mov dl, byte ptr [g_012fc99f] }
	__asm { mov esi, eax }
	__asm { test dl, dl }
	__asm { je L_00661749 }
	__asm { movzx ecx, byte ptr [ebp + 0x10] }
	__asm { movzx eax, byte ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { movsx eax, word ptr [edi + 4] }
	__asm { push eax }
	__asm { movsx eax, word ptr [edi + 2] }
	__asm { push eax }
	__asm { movsx eax, word ptr [edi] }
	__asm { push eax }
	__asm { movzx eax, dl }
	__asm { push 0xe3a180 }
	__asm { push eax }
	__asm { call fn_006b8ab4 }
	__asm { add esp, 0x1c }
	__asm { L_00661749: }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov eax, dword ptr [eax + 0x198] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00661773 }
	__asm { cmp byte ptr [esi + 0x11], 0 }
	__asm { jne L_00661773 }
	__asm { push 1 }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esi + 0x11], 1 }
	__asm { call fn_006816c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00661773: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0066178e }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { jne L_0066178e }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { call fn_006816c0 }
	__asm { L_0066178e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00662f30
extern "C" __declspec(naked) void asm_00662f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11902 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea eax, [edi + edi*2] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 4 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x3c] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00662fb7 }
	__asm { push esi }
	__asm { mov esi, 1 }
	__asm { L_00662f93: }
	__asm { lea ecx, [esi - 1] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { lea edx, [esi + 2] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { lea ecx, [esi + 1] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { add esi, 4 }
	__asm { mov dword ptr [eax + 0x14], edx }
	__asm { lea eax, [eax + 0x18] }
	__asm { dec edi }
	__asm { jne L_00662f93 }
	__asm { pop esi }
	__asm { L_00662fb7: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00662fd0
extern "C" __declspec(naked) void asm_00662fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11925 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 2 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x3c] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { xor edi, edi }
	__asm { test ebx, ebx }
	__asm { je L_00663062 }
	__asm { L_00663030: }
	__asm { lea esi, [edi*4] }
	__asm { mov word ptr [eax], si }
	__asm { lea ecx, [esi + 1] }
	__asm { mov word ptr [eax + 2], cx }
	__asm { lea edx, [esi + 3] }
	__asm { mov word ptr [eax + 4], dx }
	__asm { mov word ptr [eax + 6], cx }
	__asm { lea ecx, [esi + 2] }
	__asm { mov word ptr [eax + 8], cx }
	__asm { inc edi }
	__asm { mov word ptr [eax + 0xa], dx }
	__asm { lea eax, [eax + 0xc] }
	__asm { cmp edi, ebx }
	__asm { jb L_00663030 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00663062: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 0x10] }
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

extern "C" void fn_004037f0();
extern "C" void fn_0040f890();
// FUNCTION: ROBLOXSTUDIO 0x006636c0
extern "C" __declspec(naked) void asm_006636c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e259 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { add eax, dword ptr [ecx + 0x10] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { cmp edi, eax }
	__asm { ja L_0066373e }
	__asm { cmp dword ptr [esi + 0x14], eax }
	__asm { je L_0066373e }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_0066373e }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_00663738 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0066373a }
	__asm { L_00663738: }
	__asm { mov eax, esi }
	__asm { L_0066373a: }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_0066373e: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x006638c0
extern "C" __declspec(naked) void asm_006638c0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0066390b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0066390b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0066395e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3a394 }
	__asm { mov dword ptr [esi + 8], 0xe3a3a4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3a3ac }
	__asm { mov dword ptr [esi + 8], 0xe3a3bc }
	__asm { jmp L_00663960 }
	__asm { L_0066395e: }
	__asm { xor esi, esi }
	__asm { L_00663960: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0066397d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0066397d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x006639a0
extern "C" __declspec(naked) void asm_006639a0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006639eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_006639eb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00663a3e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3a354 }
	__asm { mov dword ptr [esi + 8], 0xe3a364 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3a36c }
	__asm { mov dword ptr [esi + 8], 0xe3a37c }
	__asm { jmp L_00663a40 }
	__asm { L_00663a3e: }
	__asm { xor esi, esi }
	__asm { L_00663a40: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00663a5d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00663a5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00665590
extern "C" __declspec(naked) void asm_00665590()
{
	__asm { mov edx, ecx }
	__asm { movsx eax, word ptr [edx + 4] }
	__asm { inc dword ptr [edx + 0x14] }
	__asm { cmp dword ptr [edx + 0x14], eax }
	__asm { jne L_00665612 }
	__asm { movsx eax, word ptr [edx + 8] }
	__asm { inc dword ptr [edx + 0x18] }
	__asm { mov dword ptr [edx + 0x14], 0 }
	__asm { cmp dword ptr [edx + 0x18], eax }
	__asm { jne L_006655e8 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edx + 0x18], 0 }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { inc word ptr [edx + 0x20] }
	__asm { mov word ptr [edx + 0x1e], ax }
	__asm { movzx eax, word ptr [ecx + 8] }
	__asm { mov word ptr [edx + 0x22], ax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { add dword ptr [edx + 0x24], eax }
	__asm { add dword ptr [edx + 0x28], eax }
	__asm { mov ax, word ptr [edx + 0x20] }
	__asm { cmp ax, word ptr [ecx + 0xc] }
	__asm { setg al }
	__asm { mov byte ptr [edx + 0x1c], al }
	__asm { mov eax, edx }
	__asm { ret }
	__asm { L_006655e8: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { inc word ptr [edx + 0x22] }
	__asm { mov word ptr [edx + 0x1e], ax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { add dword ptr [edx + 0x24], eax }
	__asm { add dword ptr [edx + 0x28], eax }
	__asm { mov ax, word ptr [edx + 0x20] }
	__asm { cmp ax, word ptr [ecx + 0xc] }
	__asm { setg al }
	__asm { mov byte ptr [edx + 0x1c], al }
	__asm { mov eax, edx }
	__asm { ret }
	__asm { L_00665612: }
	__asm { mov ax, word ptr [edx + 0x20] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { inc dword ptr [edx + 0x24] }
	__asm { inc dword ptr [edx + 0x28] }
	__asm { inc word ptr [edx + 0x1e] }
	__asm { cmp ax, word ptr [ecx + 0xc] }
	__asm { setg al }
	__asm { mov byte ptr [edx + 0x1c], al }
	__asm { mov eax, edx }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00663850();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00665810
extern "C" __declspec(naked) void asm_00665810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11a70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test edi, edi }
	__asm { je L_00665867 }
	__asm { cmp edi, 0x7ffffff }
	__asm { ja L_00665861 }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test esi, esi }
	__asm { jne L_00665867 }
	__asm { L_00665861: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00665867: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00663850 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { add esp, 0x18 }
	__asm { sub ebx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006658a0 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006658a0: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { shl edi, 5 }
	__asm { add edi, esi }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { and ebx, 0xffffffe0 }
	__asm { add ebx, esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00665810();
// FUNCTION: ROBLOXSTUDIO 0x006658f0
extern "C" __declspec(naked) void asm_006658f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 5 }
	__asm { cmp eax, edi }
	__asm { jae L_0066595d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x7ffffff }
	__asm { sar esi, 5 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00665927 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00665927: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_0066594b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00665810 }
	__asm { L_0066594b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00665810 }
	__asm { L_0066595d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006659a0
extern "C" __declspec(naked) void asm_006659a0()
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
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_006659fd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_006659f0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_006659f0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00665a08 }
	__asm { L_006659fd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00665a08: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00665a1e }
	__asm { add ecx, -0x24 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00665a1e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_011d9088[];
extern "C" char g_011d908a[];
extern "C" char g_011d908c[];
extern "C" char g_012ddad8[];
extern "C" char g_012ddadc[];
extern "C" char g_012ddae0[];
extern "C" char g_012ddae4[];
extern "C" char g_012ddae8[];
extern "C" void fn_00664830();
// FUNCTION: ROBLOXSTUDIO 0x00665ef0
extern "C" __declspec(naked) void asm_00665ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { mov ebx, dword ptr [edx + 0x1e] }
	__asm { mov dx, word ptr [edx + 0x22] }
	__asm { mov word ptr [ebp - 8], dx }
	__asm { mov edx, ebx }
	__asm { mov ecx, dword ptr [g_011d9088] }
	__asm { and edx, 0x1f }
	__asm { shr ebx, 0x10 }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { and ebx, 0xf }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov word ptr [ebp - 0x18], cx }
	__asm { mov ecx, dword ptr [g_011d908c] }
	__asm { shl ebx, 2 }
	__asm { add bx, word ptr [g_011d908a] }
	__asm { and edx, 0x1f }
	__asm { cmp dword ptr [ebp + 0x10], 2 }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov al, byte ptr [eax] }
	__asm { mov word ptr [ebp - 0x16], bx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov word ptr [ebp - 0x14], cx }
	__asm { jne L_00665fb8 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edi*4 + 0x11d93f0] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { mov si, word ptr [ecx*2 + 0x11d9180] }
	__asm { mov dx, word ptr [ecx*2 + 0x11d9182] }
	__asm { mov cx, word ptr [ecx*2 + 0x11d9184] }
	__asm { shl si, 2 }
	__asm { add word ptr [ebp + 8], si }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { shl dx, 2 }
	__asm { add bx, dx }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { shl cx, 2 }
	__asm { add dx, cx }
	__asm { mov ecx, dword ptr [edi*4 + 0xe39bfc] }
	__asm { mov word ptr [ebp - 0x18], si }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov word ptr [ebp - 0x16], bx }
	__asm { mov word ptr [ebp - 0x14], dx }
	__asm { jmp L_00665fbb }
	__asm { L_00665fb8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00665fbb: }
	__asm { mov edx, dword ptr [g_012ddae8] }
	__asm { test dl, 1 }
	__asm { jne L_00665ff5 }
	__asm { or edx, 1 }
	__asm { mov dword ptr [g_012ddae8], edx }
	__asm { xor edx, edx }
	__asm { mov dword ptr [g_012ddad8], edx }
	__asm { mov dword ptr [g_012ddadc], 0x800 }
	__asm { mov dword ptr [g_012ddae0], 0x8000800 }
	__asm { mov dword ptr [g_012ddae4], 0x8000000 }
	__asm { L_00665ff5: }
	__asm { movzx eax, al }
	__asm { push 0x12ddad8 }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { shl ecx, 5 }
	__asm { mov eax, dword ptr [eax*4 + 0x12f6d50] }
	__asm { add ecx, 0x11d9090 }
	__asm { mov eax, dword ptr [eax*4 + 0xe39c74] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { call fn_00664830 }
	__asm { add esp, 0x14 }
	__asm { sub dword ptr [esi], -0x80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_011d9088[];
extern "C" char g_011d908a[];
extern "C" char g_011d908c[];
extern "C" char g_012ddaec[];
extern "C" char g_012ddaf0[];
extern "C" char g_012ddaf4[];
extern "C" char g_012ddaf8[];
extern "C" char g_012ddafc[];
extern "C" void fn_00664980();
// FUNCTION: ROBLOXSTUDIO 0x00666040
extern "C" __declspec(naked) void asm_00666040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { mov ebx, dword ptr [edx + 0x1e] }
	__asm { mov dx, word ptr [edx + 0x22] }
	__asm { mov word ptr [ebp - 8], dx }
	__asm { mov edx, ebx }
	__asm { mov ecx, dword ptr [g_011d9088] }
	__asm { and edx, 0x1f }
	__asm { shr ebx, 0x10 }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { and ebx, 0xf }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov word ptr [ebp - 0x18], cx }
	__asm { mov ecx, dword ptr [g_011d908c] }
	__asm { shl ebx, 2 }
	__asm { add bx, word ptr [g_011d908a] }
	__asm { and edx, 0x1f }
	__asm { cmp dword ptr [ebp + 0x10], 2 }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov al, byte ptr [eax] }
	__asm { mov word ptr [ebp - 0x16], bx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov word ptr [ebp - 0x14], cx }
	__asm { jne L_00666108 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edi*4 + 0x11d93f0] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { mov si, word ptr [ecx*2 + 0x11d9180] }
	__asm { mov dx, word ptr [ecx*2 + 0x11d9182] }
	__asm { mov cx, word ptr [ecx*2 + 0x11d9184] }
	__asm { shl si, 2 }
	__asm { add word ptr [ebp + 8], si }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { shl dx, 2 }
	__asm { add bx, dx }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { shl cx, 2 }
	__asm { add dx, cx }
	__asm { mov ecx, dword ptr [edi*4 + 0xe39bfc] }
	__asm { mov word ptr [ebp - 0x18], si }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov word ptr [ebp - 0x16], bx }
	__asm { mov word ptr [ebp - 0x14], dx }
	__asm { jmp L_0066610b }
	__asm { L_00666108: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_0066610b: }
	__asm { mov edx, dword ptr [g_012ddafc] }
	__asm { test dl, 1 }
	__asm { jne L_00666145 }
	__asm { or edx, 1 }
	__asm { mov dword ptr [g_012ddafc], edx }
	__asm { xor edx, edx }
	__asm { mov dword ptr [g_012ddaec], edx }
	__asm { mov dword ptr [g_012ddaf0], 0x800 }
	__asm { mov dword ptr [g_012ddaf4], 0x8000800 }
	__asm { mov dword ptr [g_012ddaf8], 0x8000000 }
	__asm { L_00666145: }
	__asm { movzx eax, al }
	__asm { push 0x12ddaec }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { shl ecx, 5 }
	__asm { mov eax, dword ptr [eax*4 + 0x12f6d50] }
	__asm { add ecx, 0x11d9090 }
	__asm { mov eax, dword ptr [eax*4 + 0xe39c74] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { call fn_00664980 }
	__asm { add esp, 0x14 }
	__asm { add dword ptr [esi], 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00666190
extern "C" __declspec(naked) void asm_00666190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { and ax, word ptr [edx] }
	__asm { movzx edi, word ptr [esi + 4] }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [edx + 2] }
	__asm { and ax, word ptr [esi + 0xc] }
	__asm { mov dx, word ptr [esi] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov ecx, edi }
	__asm { imul ecx, dword ptr [ebp - 8] }
	__asm { mov eax, ebx }
	__asm { imul eax, dword ptr [ebp - 6] }
	__asm { add dx, cx }
	__asm { mov cx, word ptr [esi + 2] }
	__asm { add cx, ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov si, word ptr [eax] }
	__asm { add si, dx }
	__asm { mov dx, word ptr [eax + 2] }
	__asm { add dx, cx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov word ptr [ebp - 8], si }
	__asm { mov word ptr [ebp - 6], dx }
	__asm { add edi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebp - 6] }
	__asm { mov word ptr [ebp + 8], di }
	__asm { add esi, ebx }
	__asm { mov bx, word ptr [ebp - 8] }
	__asm { mov word ptr [ebp + 0xa], dx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp + 8], bx }
	__asm { mov word ptr [ebp + 0xa], dx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp + 8], bx }
	__asm { mov word ptr [ebp + 0xa], si }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp + 8], di }
	__asm { pop edi }
	__asm { mov word ptr [ebp + 0xa], si }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00666240
extern "C" __declspec(naked) void asm_00666240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { movsx edi, word ptr [edx + 2] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { and edi, esi }
	__asm { lea eax, [esi + 1] }
	__asm { imul edi, eax }
	__asm { movsx eax, word ptr [edx] }
	__asm { and eax, esi }
	__asm { sub edi, eax }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { add edi, esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add edi, edi }
	__asm { movzx eax, word ptr [ecx + edi*8] }
	__asm { add ax, word ptr [esi] }
	__asm { mov word ptr [ebp + 8], ax }
	__asm { movzx eax, word ptr [ecx + edi*8 + 2] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { mov word ptr [ebp + 0xa], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { movzx eax, word ptr [ecx + edi*8 + 4] }
	__asm { add ax, word ptr [esi] }
	__asm { mov word ptr [ebp + 8], ax }
	__asm { movzx eax, word ptr [ecx + edi*8 + 6] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { mov word ptr [ebp + 0xa], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { movzx eax, word ptr [esi] }
	__asm { add ax, word ptr [ecx + edi*8 + 8] }
	__asm { mov word ptr [ebp + 8], ax }
	__asm { movzx eax, word ptr [ecx + edi*8 + 0xa] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { mov word ptr [ebp + 0xa], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { movzx eax, word ptr [ecx + edi*8 + 0xc] }
	__asm { add ax, word ptr [esi] }
	__asm { mov word ptr [ebp + 8], ax }
	__asm { movzx eax, word ptr [ecx + edi*8 + 0xe] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { pop edi }
	__asm { mov word ptr [ebp + 0xa], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006f67e0();
// FUNCTION: ROBLOXSTUDIO 0x006663f0
extern "C" __declspec(naked) void asm_006663f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ax, word ptr [esi + 0x18] }
	__asm { mov bx, word ptr [esi + 0x1a] }
	__asm { mov di, word ptr [esi + 0x1c] }
	__asm { add ax, 0x24 }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { add bx, 0x13 }
	__asm { add di, 0x24 }
	__asm { call fn_006f67e0 }
	__asm { mov dx, word ptr [ebp - 2] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub dx, word ptr [eax] }
	__asm { sub bx, word ptr [eax + 2] }
	__asm { sub di, word ptr [eax + 4] }
	__asm { movzx eax, word ptr [ecx] }
	__asm { cmp word ptr [esi + 0x18], ax }
	__asm { jg L_00666463 }
	__asm { cmp ax, dx }
	__asm { jg L_00666463 }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { cmp word ptr [esi + 0x1a], ax }
	__asm { jg L_00666463 }
	__asm { cmp ax, bx }
	__asm { jg L_00666463 }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { cmp word ptr [esi + 0x1c], ax }
	__asm { jg L_00666463 }
	__asm { cmp ax, di }
	__asm { jg L_00666463 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00666463: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00667ba0();
extern "C" void fn_00667be0();
// FUNCTION: ROBLOXSTUDIO 0x00667c70
extern "C" __declspec(naked) void asm_00667c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx*4 + 0x11d93f0] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { mov cl, byte ptr [edx] }
	__asm { mov al, byte ptr [edx + eax] }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { lea edx, [edx + edx*2] }
	__asm { lea edx, [ebx + edx*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { je L_00667d3b }
	__asm { movzx edx, al }
	__asm { push esi }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [ebx*4 + 0xe39bfc] }
	__asm { lea edx, [edx + esi*2] }
	__asm { pop esi }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { je L_00667d3b }
	__asm { cmp cl, byte ptr [g_012f8550] }
	__asm { je L_00667ce7 }
	__asm { shr cl, 3 }
	__asm { and cl, 7 }
	__asm { je L_00667ce7 }
	__asm { cmp cl, 5 }
	__asm { je L_00667ce3 }
	__asm { mov ecx, edi }
	__asm { call fn_00667ba0 }
	__asm { test al, al }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { je L_00667ce7 }
	__asm { L_00667ce3: }
	__asm { mov bl, 1 }
	__asm { jmp L_00667ce9 }
	__asm { L_00667ce7: }
	__asm { xor bl, bl }
	__asm { L_00667ce9: }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00667d0f }
	__asm { shr al, 3 }
	__asm { and al, 7 }
	__asm { je L_00667d0f }
	__asm { cmp al, 5 }
	__asm { je L_00667d0b }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00667be0 }
	__asm { test al, al }
	__asm { je L_00667d0f }
	__asm { L_00667d0b: }
	__asm { mov al, 1 }
	__asm { jmp L_00667d11 }
	__asm { L_00667d0f: }
	__asm { xor al, al }
	__asm { L_00667d11: }
	__asm { cmp bl, al }
	__asm { setne dl }
	__asm { test dl, dl }
	__asm { je L_00667d2e }
	__asm { test al, al }
	__asm { je L_00667d2e }
	__asm { movzx eax, dl }
	__asm { mov ecx, 1 }
	__asm { pop edi }
	__asm { add eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00667d2e: }
	__asm { movzx eax, dl }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { add eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00667d3b: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006644c0();
extern "C" void fn_00666190();
// FUNCTION: ROBLOXSTUDIO 0x00667d50
extern "C" __declspec(naked) void asm_00667d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { mov eax, edx }
	__asm { shl eax, 5 }
	__asm { add eax, 0x11d9090 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, byte ptr [ebp + 8] }
	__asm { push ebx }
	__asm { lea eax, [eax + eax*2] }
	__asm { push esi }
	__asm { lea eax, [edx + eax*2] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea eax, [eax*4 + 0x12f6d50] }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { movzx eax, byte ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { lea eax, [eax + edx*2] }
	__asm { lea ebx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movzx ecx, word ptr [ebx*4 + 0x11d91aa] }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { movzx edx, word ptr [eax] }
	__asm { imul cx, si }
	__asm { movzx edi, word ptr [eax + 4] }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91ac] }
	__asm { imul ax, di }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91a8] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91b0] }
	__asm { mov word ptr [ebp + 0x14], cx }
	__asm { imul ax, si }
	__asm { movzx ecx, word ptr [ebx*4 + 0x11d91ae] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91b2] }
	__asm { imul ax, di }
	__asm { add cx, ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov word ptr [ebp + 0x16], cx }
	__asm { mov ecx, dword ptr [ebx*4 + 0x11d91b4] }
	__asm { lea esi, [eax*4 + 0x12dd3b4] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { mov ecx, dword ptr [ebx*4 + 0x11d91b8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006644c0 }
	__asm { add esp, 0x1c }
	__asm { add dword ptr [ebx], 0x60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_006646e0();
extern "C" void fn_00666190();
// FUNCTION: ROBLOXSTUDIO 0x00667e70
extern "C" __declspec(naked) void asm_00667e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { mov eax, edx }
	__asm { shl eax, 5 }
	__asm { add eax, 0x11d9090 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, byte ptr [ebp + 8] }
	__asm { push ebx }
	__asm { lea eax, [eax + eax*2] }
	__asm { push esi }
	__asm { lea eax, [edx + eax*2] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea eax, [eax*4 + 0x12f6d50] }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { movzx eax, byte ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { lea eax, [eax + edx*2] }
	__asm { lea ebx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movzx ecx, word ptr [ebx*4 + 0x11d91aa] }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { movzx edx, word ptr [eax] }
	__asm { imul cx, si }
	__asm { movzx edi, word ptr [eax + 4] }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91ac] }
	__asm { imul ax, di }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91a8] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91b0] }
	__asm { mov word ptr [ebp + 0x14], cx }
	__asm { imul ax, si }
	__asm { movzx ecx, word ptr [ebx*4 + 0x11d91ae] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx*4 + 0x11d91b2] }
	__asm { imul ax, di }
	__asm { add cx, ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov word ptr [ebp + 0x16], cx }
	__asm { mov ecx, dword ptr [ebx*4 + 0x11d91b4] }
	__asm { lea esi, [eax*4 + 0x12dd3b4] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { mov ecx, dword ptr [ebx*4 + 0x11d91b8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006646e0 }
	__asm { add esp, 0x1c }
	__asm { sub dword ptr [ebx], -0x80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10268[];
extern "C" void fn_00663770();
extern "C" void fn_006637d0();
extern "C" void fn_006658f0();
extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00667f90
extern "C" __declspec(naked) void asm_00667f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11a80 }
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
	__asm { sar ecx, 5 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_00668006 }
	__asm { shl esi, 5 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_00667ff2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_00667fdc: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_00667fdf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00667ff2: }
	__asm { cmp esi, eax }
	__asm { je L_00667fdf }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_00663770 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00667fdc }
	__asm { L_00668006: }
	__asm { jae L_00667fdf }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006658f0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { sar eax, 5 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006637d0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar eax, 5 }
	__asm { sub esi, eax }
	__asm { add esp, 0x14 }
	__asm { shl esi, 5 }
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

extern "C" void fn_00668840();
extern "C" void fn_00668bb0();
extern "C" void fn_00668c70();
extern "C" void fn_0066d040();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00668a40
extern "C" __declspec(naked) void asm_00668a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11ac0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { cmp dword ptr [ebp + 0xc], esi }
	__asm { je L_00668a6c }
	__asm { xor bl, bl }
	__asm { jmp L_00668ade }
	__asm { L_00668a6c: }
	__asm { push 0x78 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00668a98 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0066d040 }
	__asm { mov dword ptr [esi], 0xe3adcc }
	__asm { jmp L_00668a9a }
	__asm { L_00668a98: }
	__asm { xor esi, esi }
	__asm { L_00668a9a: }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00668840 }
	__asm { mov eax, dword ptr [esi + 0x74] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00668ac5 }
	__asm { dec eax }
	__asm { jne L_00668acd }
	__asm { mov ecx, esi }
	__asm { call fn_00668bb0 }
	__asm { jmp L_00668acd }
	__asm { L_00668ac5: }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00668c70 }
	__asm { L_00668acd: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { mov bl, al }
	__asm { L_00668ade: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00668af1 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx] }
	__asm { L_00668af1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0041ace0();
extern "C" void fn_00668c70();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00668bb0
extern "C" __declspec(naked) void asm_00668bb0()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x74] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00668bc5 }
	__asm { call fn_0041ace0 }
	__asm { mov edi, eax }
	__asm { jmp L_00668bc7 }
	__asm { L_00668bc5: }
	__asm { xor edi, edi }
	__asm { L_00668bc7: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00668c09 }
	__asm { cmp dword ptr [edi + 0x68], 0 }
	__asm { jne L_00668c09 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00668bf4 }
	__asm { push 0x48 }
	__asm { push 0xe33a48 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00668c09 }
	__asm { L_00668bf4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe39400 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00668c09: }
	__asm { mov esi, dword ptr [edi + 0x68] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov edi, edi }
	__asm { L_00668c10: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00668c52 }
	__asm { cmp dword ptr [edi + 0x68], 0 }
	__asm { jne L_00668c52 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00668c3d }
	__asm { push 0x48 }
	__asm { push 0xe33a48 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00668c52 }
	__asm { L_00668c3d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe39400 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00668c52: }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { je L_00668c68 }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, ebx }
	__asm { call fn_00668c70 }
	__asm { add esi, 8 }
	__asm { jmp L_00668c10 }
	__asm { L_00668c68: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_0066a0c0();
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
extern "C" void fn_006ede20();
extern "C" void fn_006ee7b0();
extern "C" void fn_006efb00();
// FUNCTION: ROBLOXSTUDIO 0x0066a250
extern "C" __declspec(naked) void asm_0066a250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11c1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ede20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0066a2c5 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0066a2be }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_0066a2be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0066a2be: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_0066a2c5: }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { call fn_0066a0c0 }
	__asm { test al, al }
	__asm { jne L_0066a2db }
	__asm { xor bl, bl }
	__asm { jmp L_0066a2ea }
	__asm { L_0066a2db: }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_006efb00 }
	__asm { mov bl, 1 }
	__asm { L_0066a2ea: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006ee7b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10140[];
extern "C" void fn_0066a0c0();
extern "C" void fn_0066c7a0();
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
extern "C" void fn_006ede20();
extern "C" void fn_006ee7b0();
extern "C" void fn_006efc20();
extern "C" void fn_006f7940();
extern "C" void fn_006f7aa0();
extern "C" void fn_006f7c50();
// FUNCTION: ROBLOXSTUDIO 0x0066a310
extern "C" __declspec(naked) void asm_0066a310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11c40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ede20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0066a385 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_0066a37e }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_0066a37e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0066a37e: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_0066a385: }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0066a0c0 }
	__asm { test al, al }
	__asm { jne L_0066a39b }
	__asm { xor bl, bl }
	__asm { jmp L_0066a3e9 }
	__asm { L_0066a39b: }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { call fn_006f7940 }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006f7c50 }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { push 5 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_006efc20 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { add eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_0066c7a0 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { mov bl, 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006f7aa0 }
	__asm { L_0066a3e9: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006ee7b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0066c680();
extern "C" void fn_0066c980();
extern "C" void fn_0066ddb0();
// FUNCTION: ROBLOXSTUDIO 0x0066a550
extern "C" __declspec(naked) void asm_0066a550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [ecx + 0x34] }
	__asm { sub esp, 8 }
	__asm { inc eax }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x34] }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { je L_0066a567 }
	__asm { inc eax }
	__asm { jmp L_0066a569 }
	__asm { L_0066a567: }
	__asm { xor eax, eax }
	__asm { L_0066a569: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, edi }
	__asm { call fn_0066ddb0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0066c980 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0066a59a }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_0066c680 }
	__asm { L_0066a59a: }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_0066a5a5 }
	__asm { inc eax }
	__asm { jmp L_0066a5a7 }
	__asm { L_0066a5a5: }
	__asm { xor eax, eax }
	__asm { L_0066a5a7: }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, edi }
	__asm { call fn_0066ddb0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0066c980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e103d8[];
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x0066c170
extern "C" __declspec(naked) void asm_0066c170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x1009354 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { lea esi, [eax + ecx*2] }
	__asm { mov ebx, 3 }
	__asm { L_0066c1a1: }
	__asm { movzx eax, word ptr [esi] }
	__asm { add eax, dword ptr [ebp + 0x18] }
	__asm { push 0x1009354 }
	__asm { push eax }
	__asm { push 0x10189d0 }
	__asm { push eax }
	__asm { push 0x10189d0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e103d8] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e103d8] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e103d8] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { lea esi, [esi + 2] }
	__asm { dec ebx }
	__asm { jne L_0066c1a1 }
	__asm { push 0x1004e20 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e103dc[];
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x0066c210
extern "C" __declspec(naked) void asm_0066c210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0xe3b050 }
	__asm { push 0x1010da0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xe3b054 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [esi] }
	__asm { push 0x101173c }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xe3b058 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { fld dword ptr [esi + 4] }
	__asm { add esp, 8 }
	__asm { push 0x101173c }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xe3b060 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { fld dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { push 0x1009354 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xe3b068 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e103dc] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { push 0x1030838 }
	__asm { push edi }
	__asm { call fn_004276b0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_0066cc70();
extern "C" void fn_0066cdb0();
extern "C" void fn_0066d3d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0066c4d0
extern "C" __declspec(naked) void asm_0066c4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11e74 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0066c504: }
	__asm { cmp edi, ebx }
	__asm { je L_0066c587 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0066c556 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0066cdb0 }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0066cc70 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { L_0066c556: }
	__asm { add esi, 0x34 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x34 }
	__asm { jmp L_0066c504 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_0066c57e }
	__asm { nop }
	__asm { L_0066c570: }
	__asm { mov ecx, esi }
	__asm { call fn_0066d3d0 }
	__asm { add esi, 0x34 }
	__asm { cmp esi, edi }
	__asm { jne L_0066c570 }
	__asm { L_0066c57e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0066c587: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b2270();
extern "C" void fn_004b3a00();
extern "C" void fn_00789cb0();
extern "C" void fn_00896c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066c5a0
extern "C" __declspec(naked) void asm_0066c5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { shr edi, 3 }
	__asm { add edi, dword ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_0066c5d4 }
	__asm { inc eax }
	__asm { jmp L_0066c5d6 }
	__asm { L_0066c5d4: }
	__asm { xor eax, eax }
	__asm { L_0066c5d6: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2270 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0066c606 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0066c606: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_0066c610 }
	__asm { inc eax }
	__asm { jmp L_0066c612 }
	__asm { L_0066c610: }
	__asm { xor eax, eax }
	__asm { L_0066c612: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00789cb0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00896c40 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b3a00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0066c66b }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066c66b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004063f0();
extern "C" void fn_0066c370();
extern "C" void fn_0066d730();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0066cc70
extern "C" __declspec(naked) void asm_0066cc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sar eax, 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0066d730 }
	__asm { test al, al }
	__asm { je L_0066ccde }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0066c370 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0066ccde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_004063f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00665970();
extern "C" void fn_0066c3a0();
extern "C" void fn_0066d7a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0066cd10
extern "C" __declspec(naked) void asm_0066cd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11f10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sar eax, 5 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0066d7a0 }
	__asm { test al, al }
	__asm { je L_0066cd7f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0066c3a0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0066cd7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
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

extern "C" void fn_004063f0();
extern "C" void fn_0066c410();
extern "C" void fn_0066d810();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0066cdb0
extern "C" __declspec(naked) void asm_0066cdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11f20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0066d810 }
	__asm { test al, al }
	__asm { je L_0066ce2d }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0066c410 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0066ce2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_004063f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0066da40();
extern "C" void fn_0066dc20();
extern "C" void fn_0066dc90();
extern "C" void fn_0084f520();
extern "C" void fn_008f6780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066d460
extern "C" __declspec(naked) void asm_0066d460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11fc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe3adbc }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0066da40 }
	__asm { mov ecx, dword ptr [edi + 0x60] }
	__asm { test ecx, ecx }
	__asm { je L_0066d4cc }
	__asm { cmp dword ptr [edi + 0x54], 0 }
	__asm { je L_0066d4b3 }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x4c] }
	__asm { call fn_0084f520 }
	__asm { L_0066d4b3: }
	__asm { push dword ptr [edi + 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { L_0066d4cc: }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { test ecx, ecx }
	__asm { je L_0066d503 }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_0066d4ea }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call fn_0066dc90 }
	__asm { L_0066d4ea: }
	__asm { push dword ptr [edi + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { L_0066d503: }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { test ecx, ecx }
	__asm { je L_0066d53a }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { je L_0066d521 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call fn_008f6780 }
	__asm { L_0066d521: }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { L_0066d53a: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0066d571 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_0066d558 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0066dc20 }
	__asm { L_0066d558: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0066d571: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0066da90();
extern "C" void fn_0066db20();
extern "C" void fn_0066e0d0();
extern "C" void fn_00c59c90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066d5f0
extern "C" __declspec(naked) void asm_0066d5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd11fd8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ebx, esi }
	__asm { shr ebx, 3 }
	__asm { inc eax }
	__asm { add ebx, esi }
	__asm { add eax, edi }
	__asm { je L_0066d627 }
	__asm { inc eax }
	__asm { jmp L_0066d629 }
	__asm { L_0066d627: }
	__asm { xor eax, eax }
	__asm { L_0066d629: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c59c90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0066d6e9 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_0066d64c }
	__asm { inc eax }
	__asm { jmp L_0066d64e }
	__asm { L_0066d64c: }
	__asm { xor eax, eax }
	__asm { L_0066d64e: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0066db20 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_0066d676 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_0066d676: }
	__asm { add eax, 4 }
	__asm { je L_0066d68c }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { L_0066d68c: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_0066e0d0 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0066da90 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_0066d6e7 }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_0066d6de }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_0066d6cc }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066d6cc: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { L_0066d6de: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066d6e7: }
	__asm { mov eax, edi }
	__asm { L_0066d6e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0066c4d0();
extern "C" void fn_0066d3d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0066d880
extern "C" __declspec(naked) void asm_0066d880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11ff0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test ebx, ebx }
	__asm { je L_0066d8d7 }
	__asm { cmp ebx, 0x4ec4ec4 }
	__asm { ja L_0066d8d1 }
	__asm { mov eax, ebx }
	__asm { imul eax, eax, 0x34 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { jne L_0066d8d7 }
	__asm { L_0066d8d1: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0066d8d7: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_0066c4d0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test esi, esi }
	__asm { je L_0066d943 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { je L_0066d934 }
	__asm { L_0066d925: }
	__asm { mov ecx, esi }
	__asm { call fn_0066d3d0 }
	__asm { add esi, 0x34 }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { jne L_0066d925 }
	__asm { L_0066d934: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_0066d946 }
	__asm { L_0066d943: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0066d946: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { imul ebx, ebx, 0x34 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { imul eax, eax, 0x34 }
	__asm { add ebx, edi }
	__asm { mov dword ptr [esi], edi }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_0066d880();
// FUNCTION: ROBLOXSTUDIO 0x0066d990
extern "C" __declspec(naked) void asm_0066d990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0066da2b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x4ec4ec4 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0066d9e1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0066d9e1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x4ec4ec4 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_0066da18 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0066d880 }
	__asm { L_0066da18: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0066d880 }
	__asm { L_0066da2b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0066da90
extern "C" __declspec(naked) void asm_0066da90()
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
	__asm { mov dword ptr [ebx + 0x20], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_0066daed }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0066dae0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0066dae0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_0066daf8 }
	__asm { L_0066daed: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0066daf8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0066db0e }
	__asm { add ecx, -0x1c }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0066db0e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0066deb0
extern "C" __declspec(naked) void asm_0066deb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { cmp edi, 4 }
	__asm { jb L_0066deef }
	__asm { mov esi, dword ptr [edx] }
	__asm { sub edi, 4 }
	__asm { add edx, 4 }
	__asm { cmp edi, 4 }
	__asm { jb L_0066deef }
	__asm { push ebx }
	__asm { mov ebx, edi }
	__asm { shr ebx, 2 }
	__asm { L_0066ded5: }
	__asm { mov ecx, esi }
	__asm { mov eax, esi }
	__asm { shl ecx, 6 }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { add ecx, dword ptr [edx] }
	__asm { sub edi, 4 }
	__asm { xor esi, ecx }
	__asm { add edx, 4 }
	__asm { dec ebx }
	__asm { jne L_0066ded5 }
	__asm { pop ebx }
	__asm { L_0066deef: }
	__asm { test edi, edi }
	__asm { je L_0066df1d }
	__asm { push edi }
	__asm { push edx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { call fn_00cf67fe }
	__asm { mov edx, esi }
	__asm { shl edx, 6 }
	__asm { add edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { add esp, 0xc }
	__asm { shr eax, 2 }
	__asm { add eax, edx }
	__asm { pop edi }
	__asm { xor eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066df1d: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00673ed0();
extern "C" void fn_006da0e0();
extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x0066e150
extern "C" __declspec(naked) void asm_0066e150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd120a4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00673ed0 }
	__asm { mov dword ptr [edi], 0xe3b08c }
	__asm { mov dword ptr [edi + 0x9c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0xa0], 0 }
	__asm { mov dword ptr [edi + 0xa4], 0 }
	__asm { mov dword ptr [edi + 0xa8], 0 }
	__asm { lea ecx, [edi + 0xac] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006da0e0 }
	__asm { call fn_006dea00 }
	__asm { mov esi, eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0xdc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0xe0], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0xe4], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xe8], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 0xec], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 0xf0], eax }
	__asm { mov word ptr [edi + 0xf4], 0 }
	__asm { mov dword ptr [edi + 0xf8], 0 }
	__asm { mov dword ptr [edi + 0xfc], 0 }
	__asm { mov dword ptr [edi + 0x100], 0 }
	__asm { mov dword ptr [edi + 0x104], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0061a520();
extern "C" void fn_0061b580();
extern "C" void fn_006741b0();
extern "C" void fn_006b8240();
// FUNCTION: ROBLOXSTUDIO 0x0066e840
extern "C" __declspec(naked) void asm_0066e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xf5], 0 }
	__asm { jne L_0066e895 }
	__asm { mov ecx, dword ptr [esi + 0xf8] }
	__asm { test ecx, ecx }
	__asm { je L_0066e86e }
	__asm { call fn_0061b580 }
	__asm { test eax, eax }
	__asm { jne L_0066e86e }
	__asm { lea ecx, [esi + 0xf8] }
	__asm { call fn_006b8240 }
	__asm { L_0066e86e: }
	__asm { cmp byte ptr [esi + 0xf5], 0 }
	__asm { jne L_0066e895 }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { test ecx, ecx }
	__asm { je L_0066e895 }
	__asm { call fn_0061b580 }
	__asm { test eax, eax }
	__asm { jne L_0066e895 }
	__asm { lea ecx, [esi + 0x100] }
	__asm { call fn_006b8240 }
	__asm { L_0066e895: }
	__asm { mov ecx, dword ptr [esi + 0xf8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0066e8a8 }
	__asm { push edi }
	__asm { call fn_0061a520 }
	__asm { L_0066e8a8: }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { test ecx, ecx }
	__asm { je L_0066e8b8 }
	__asm { push edi }
	__asm { call fn_0061a520 }
	__asm { L_0066e8b8: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [eax + 0x1b8] }
	__asm { cmp byte ptr [eax + 0x24], 0 }
	__asm { je L_0066e8e0 }
	__asm { cmp dword ptr [esi + 0xf8], 0 }
	__asm { jne L_0066e8d9 }
	__asm { cmp dword ptr [esi + 0x100], 0 }
	__asm { je L_0066e8e0 }
	__asm { L_0066e8d9: }
	__asm { mov ecx, esi }
	__asm { call fn_006741b0 }
	__asm { L_0066e8e0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de198[];
extern "C" char g_012de19c[];
extern "C" char g_012de1a0[];
extern "C" char g_012de1a4[];
extern "C" char g_012de1a8[];
extern "C" char g_012de1ac[];
extern "C" char g_012de1b0[];
extern "C" char g_012de1b4[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00670700
extern "C" __declspec(naked) void asm_00670700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1223e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de1ac] }
	__asm { test al, 1 }
	__asm { jne L_00670742 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de1ac], eax }
	__asm { push 0xe9d464 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de1a8], eax }
	__asm { L_00670742: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1221e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de1b4] }
	__asm { test al, 1 }
	__asm { jne L_00670792 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de1b4], eax }
	__asm { push 0xe9d738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de1b0], eax }
	__asm { L_00670792: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1225e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de19c] }
	__asm { test al, 1 }
	__asm { jne L_006707e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de19c], eax }
	__asm { push 0xe9cef8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de198], eax }
	__asm { L_006707e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1227e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de1a4] }
	__asm { test al, 1 }
	__asm { jne L_00670832 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de1a4], eax }
	__asm { push 0xe9d1f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de1a0], eax }
	__asm { L_00670832: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0052c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00670860
extern "C" __declspec(naked) void asm_00670860()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006708ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_006708ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_006708fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe390dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3b320 }
	__asm { mov dword ptr [esi + 8], 0xe3b330 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3b338 }
	__asm { mov dword ptr [esi + 8], 0xe3b348 }
	__asm { jmp L_00670900 }
	__asm { L_006708fe: }
	__asm { xor esi, esi }
	__asm { L_00670900: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0067091d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0067091d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00656f60();
// FUNCTION: ROBLOXSTUDIO 0x00670940
extern "C" __declspec(naked) void asm_00670940()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0067098b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0067098b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_006709de }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe38b54 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3b2f0 }
	__asm { mov dword ptr [esi + 8], 0xe3b300 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3b308 }
	__asm { mov dword ptr [esi + 8], 0xe3b318 }
	__asm { jmp L_006709e0 }
	__asm { L_006709de: }
	__asm { xor esi, esi }
	__asm { L_006709e0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00656f60 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_006709fd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_006709fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012ddb64[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00670c90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00671df0
extern "C" __declspec(naked) void asm_00671df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3b0d8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671eab }
	__asm { cmp dword ptr [g_012ddb64], 0x29a }
	__asm { je L_00671e60 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671e4b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671e60 }
	__asm { L_00671e4b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671e60: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671eab }
	__asm { cmp dword ptr [g_012ddb64], 0x29a }
	__asm { je L_00671eab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671e96 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671eab }
	__asm { L_00671e96: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671eab: }
	__asm { call fn_00670c90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00671f02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00671f02: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb6c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00670d30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00671f40
extern "C" __declspec(naked) void asm_00671f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3b0e0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671ffb }
	__asm { cmp dword ptr [g_012ddb6c], 0x29a }
	__asm { je L_00671fb0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671f9b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671fb0 }
	__asm { L_00671f9b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671fb0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00671ffb }
	__asm { cmp dword ptr [g_012ddb6c], 0x29a }
	__asm { je L_00671ffb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00671fe6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00671ffb }
	__asm { L_00671fe6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00671ffb: }
	__asm { call fn_00670d30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00672052 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00672052: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb54[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00670dd0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00672090
extern "C" __declspec(naked) void asm_00672090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3b0c8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067214b }
	__asm { cmp dword ptr [g_012ddb54], 0x29a }
	__asm { je L_00672100 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006720eb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00672100 }
	__asm { L_006720eb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00672100: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067214b }
	__asm { cmp dword ptr [g_012ddb54], 0x29a }
	__asm { je L_0067214b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00672136 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067214b }
	__asm { L_00672136: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067214b: }
	__asm { call fn_00670dd0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_006721a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006721a2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddb5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00670e70();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006721e0
extern "C" __declspec(naked) void asm_006721e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3b0d0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067229b }
	__asm { cmp dword ptr [g_012ddb5c], 0x29a }
	__asm { je L_00672250 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0067223b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00672250 }
	__asm { L_0067223b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00672250: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0067229b }
	__asm { cmp dword ptr [g_012ddb5c], 0x29a }
	__asm { je L_0067229b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00672286 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067229b }
	__asm { L_00672286: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067229b: }
	__asm { call fn_00670e70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_006722f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006722f2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006e20a0();
// FUNCTION: ROBLOXSTUDIO 0x00672ce0
extern "C" __declspec(naked) void asm_00672ce0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_006e20a0 }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { call fn_006e20a0 }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_006e20a0 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi + 0xe4], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov dword ptr [esi + 0xec], 0 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { mov dword ptr [esi + 0xfc], 0 }
	__asm { mov dword ptr [esi + 0x100], 0 }
	__asm { mov dword ptr [esi + 0x110], 0 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x104], 0 }
	__asm { mov dword ptr [esi + 0x114], 0 }
	__asm { mov dword ptr [esi + 0x118], 0 }
	__asm { mov dword ptr [esi + 0x11c], 0 }
	__asm { mov dword ptr [esi + 0x12c], 0 }
	__asm { mov dword ptr [esi + 0x128], 0 }
	__asm { mov dword ptr [esi + 0x124], 0 }
	__asm { mov dword ptr [esi + 0x120], 0 }
	__asm { mov dword ptr [esi + 0x130], 0 }
	__asm { mov dword ptr [esi + 0x134], 0 }
	__asm { mov dword ptr [esi + 0x138], 0 }
	__asm { mov dword ptr [esi + 0x148], 0 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x140], 0 }
	__asm { mov dword ptr [esi + 0x13c], 0 }
	__asm { mov dword ptr [esi + 0x14c], 0 }
	__asm { mov dword ptr [esi + 0x150], 0 }
	__asm { mov dword ptr [esi + 0x154], 0 }
	__asm { mov dword ptr [esi + 0x164], 0 }
	__asm { mov dword ptr [esi + 0x160], 0 }
	__asm { mov dword ptr [esi + 0x15c], 0 }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov dword ptr [esi + 0x168], 0 }
	__asm { mov dword ptr [esi + 0x16c], 0 }
	__asm { mov dword ptr [esi + 0x170], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00673dd0
extern "C" __declspec(naked) void asm_00673dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00673e1a }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { jae L_00673e1a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00673e09 }
	__asm { push 0x2d }
	__asm { push 0xe3b448 }
	__asm { push 0xe3b490 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00673e1a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00673e09: }
	__asm { movzx eax, al }
	__asm { push 0xe3b4a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00673e1a: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 0x6c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 0x70] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 0x74] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { fld dword ptr [edx + 0x90] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [edx + 0x78] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x7c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x80] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { fld dword ptr [edx + 0x94] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [edx + 0x84] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0x88] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x8c] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { fld dword ptr [edx + 0x98] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00674050
extern "C" __declspec(naked) void asm_00674050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov esi, dword ptr [edi + 0x60] }
	__asm { cmp esi, eax }
	__asm { je L_0067406f }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_00674064: }
	__asm { cmp dword ptr [esi], edx }
	__asm { je L_0067406f }
	__asm { add esi, 4 }
	__asm { cmp esi, eax }
	__asm { jne L_00674064 }
	__asm { L_0067406f: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006740b2 }
	__asm { cmp esi, eax }
	__asm { jne L_006740b2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006740a1 }
	__asm { push 0x59 }
	__asm { push 0xe3b448 }
	__asm { push 0xe3b580 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006740b2 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006740a1: }
	__asm { movzx eax, cl }
	__asm { push 0xe3b598 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006740b2: }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { lea ecx, [esi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [edi + 0x64], -4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00674e40();
extern "C" void fn_00674f30();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006743b0
extern "C" __declspec(naked) void asm_006743b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00674447 }
	__asm { dec eax }
	__asm { je L_00674429 }
	__asm { dec eax }
	__asm { je L_00674407 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00674447 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006743f2 }
	__asm { push 0x3a }
	__asm { push 0xe3b668 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00674447 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006743f2: }
	__asm { movzx eax, al }
	__asm { push 0xe3b6b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00674407: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edx, eax }
	__asm { sub edx, ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00674e40 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00674429: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edx, eax }
	__asm { sub edx, ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00674f30 }
	__asm { add esp, 0x10 }
	__asm { L_00674447: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00674a00();
// FUNCTION: ROBLOXSTUDIO 0x00674be0
extern "C" __declspec(naked) void asm_00674be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub eax, esi }
	__asm { sar eax, 4 }
	__asm { cmp eax, 0x28 }
	__asm { jle L_00674c66 }
	__asm { inc eax }
	__asm { cdq }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { and edx, 7 }
	__asm { lea edi, [edx + eax] }
	__asm { sar edi, 3 }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { shl edi, 4 }
	__asm { add eax, esi }
	__asm { lea ecx, [edi + esi] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { call fn_00674a00 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00674a00 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00674a00 }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 8] }
	__asm { call fn_00674a00 }
	__asm { add esp, 0x40 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00674c66: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00674a00 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00674ad0();
// FUNCTION: ROBLOXSTUDIO 0x00674c80
extern "C" __declspec(naked) void asm_00674c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub eax, esi }
	__asm { sar eax, 4 }
	__asm { cmp eax, 0x28 }
	__asm { jle L_00674d06 }
	__asm { inc eax }
	__asm { cdq }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { and edx, 7 }
	__asm { lea edi, [edx + eax] }
	__asm { sar edi, 3 }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { shl edi, 4 }
	__asm { add eax, esi }
	__asm { lea ecx, [edi + esi] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { call fn_00674ad0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00674ad0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00674ad0 }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 8] }
	__asm { call fn_00674ad0 }
	__asm { add esp, 0x40 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00674d06: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00674ad0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00674480();
// FUNCTION: ROBLOXSTUDIO 0x00675020
extern "C" __declspec(naked) void asm_00675020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff0 }
	__asm { cmp eax, 0x10 }
	__asm { jle L_0067509c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add esi, -0x10 }
	__asm { L_00675043: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ecx - 0x10] }
	__asm { sar eax, 4 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00674480 }
	__asm { sub esi, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { add ecx, 0x10 }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff0 }
	__asm { add esp, 0x14 }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00675043 }
	__asm { pop ebx }
	__asm { L_0067509c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00674530();
// FUNCTION: ROBLOXSTUDIO 0x006750b0
extern "C" __declspec(naked) void asm_006750b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff0 }
	__asm { cmp eax, 0x10 }
	__asm { jle L_0067512c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add esi, -0x10 }
	__asm { L_006750d3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ecx - 0x10] }
	__asm { sar eax, 4 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00674530 }
	__asm { sub esi, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { add ecx, 0x10 }
	__asm { mov eax, ecx }
	__asm { and eax, 0xfffffff0 }
	__asm { add esp, 0x14 }
	__asm { cmp eax, 0x10 }
	__asm { jg L_006750d3 }
	__asm { pop ebx }
	__asm { L_0067512c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010381d0[];
extern "C" void fn_006ad6d0();
extern "C" void fn_0076e7e0();
extern "C" void fn_0076e9d0();
extern "C" void fn_0076ed70();
extern "C" void fn_0093d380();
extern "C" void fn_0093d4b0();
// FUNCTION: ROBLOXSTUDIO 0x00676350
extern "C" __declspec(naked) void asm_00676350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12539 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x28] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_0093d380 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [eax + 0x1b0] }
	__asm { mov ecx, ebx }
	__asm { call fn_0076e9d0 }
	__asm { fstp dword ptr [edi + 0xa8] }
	__asm { fld dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [edi + 0x1c] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fild dword ptr [edi + 0x10] }
	__asm { test eax, eax }
	__asm { jns L_006763c2 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006763c2: }
	__asm { mov ecx, ebx }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_0076ed70 }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { cmp dword ptr [eax + 0xba0], 0 }
	__asm { je L_006763ed }
	__asm { mov eax, dword ptr [eax + 0xba0] }
	__asm { fld dword ptr [edi + 0xa8] }
	__asm { fstp dword ptr [eax + 0x238] }
	__asm { L_006763ed: }
	__asm { mov esi, dword ptr [edi + 0xac] }
	__asm { test esi, esi }
	__asm { je L_00676426 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0076e7e0 }
	__asm { fld qword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { fstp qword ptr [esi + 0x98] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov al, byte ptr [ebp - 0x28] }
	__asm { mov byte ptr [esi + 0x8c], al }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { L_00676426: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { call fn_006ad6d0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0093d4b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ee70();
extern "C" void fn_004d2250();
extern "C" void fn_006c5e50();
extern "C" void fn_00774920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00677cd0
extern "C" __declspec(naked) void asm_00677cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1260b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { sub esp, 0x60 }
	__asm { test ecx, ecx }
	__asm { je L_00677de5 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00677de5 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x54] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c5e50 }
	__asm { push 0x1009354 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043ee70 }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004d2250 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_00677d56 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00677d56: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_00677d79 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00677d79: }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { jb L_00677da0 }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00677da0: }
	__asm { cmp dword ptr [ebp - 0x58], 0x10 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { cmovae eax, dword ptr [ebp - 0x6c] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xe3c014 }
	__asm { push 0xf13380 }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x58], 0x10 }
	__asm { jb L_00677de5 }
	__asm { push dword ptr [ebp - 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00677de5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00679850
extern "C" __declspec(naked) void asm_00679850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { jne L_0067986a }
	__asm { cmp eax, 0x80000000 }
	__asm { je L_00679896 }
	__asm { L_0067986a: }
	__asm { cmp esi, -1 }
	__asm { jne L_00679876 }
	__asm { cmp eax, 0x7fffffff }
	__asm { je L_00679896 }
	__asm { L_00679876: }
	__asm { cmp esi, -2 }
	__asm { jne L_00679882 }
	__asm { cmp eax, 0x7fffffff }
	__asm { je L_006798c9 }
	__asm { L_00679882: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { je L_00679896 }
	__asm { cmp edx, -1 }
	__asm { je L_00679896 }
	__asm { cmp edx, -2 }
	__asm { jne L_0067992b }
	__asm { L_00679896: }
	__asm { cmp esi, -2 }
	__asm { jne L_006798a2 }
	__asm { cmp eax, 0x7fffffff }
	__asm { je L_006798c9 }
	__asm { L_006798a2: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { cmp edx, -2 }
	__asm { je L_006798c9 }
	__asm { cmp esi, -1 }
	__asm { jne L_006798b9 }
	__asm { cmp eax, 0x7fffffff }
	__asm { jne L_006798b9 }
	__asm { test edx, edx }
	__asm { je L_006798c9 }
	__asm { L_006798b9: }
	__asm { test esi, esi }
	__asm { jne L_006798df }
	__asm { cmp eax, 0x80000000 }
	__asm { jne L_006798df }
	__asm { cmp edx, -1 }
	__asm { jne L_006798eb }
	__asm { L_006798c9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xfffffffe }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006798df: }
	__asm { cmp esi, -1 }
	__asm { jne L_006798fe }
	__asm { cmp eax, 0x7fffffff }
	__asm { jne L_006798fe }
	__asm { L_006798eb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006798fe: }
	__asm { cmp edx, -1 }
	__asm { jne L_00679915 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], 0x7fffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00679915: }
	__asm { test edx, edx }
	__asm { jne L_0067992b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], 0x80000000 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0067992b: }
	__asm { xor ecx, ecx }
	__asm { add edx, esi }
	__asm { adc ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00679eb0
extern "C" __declspec(naked) void asm_00679eb0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00679efb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00679efb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00679f4e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3c8e4 }
	__asm { mov dword ptr [esi + 8], 0xe3c8f4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3c8fc }
	__asm { mov dword ptr [esi + 8], 0xe3c90c }
	__asm { jmp L_00679f50 }
	__asm { L_00679f4e: }
	__asm { xor esi, esi }
	__asm { L_00679f50: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00679f6d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00679f6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0052c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00679f90
extern "C" __declspec(naked) void asm_00679f90()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00679fdb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00679fdb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0067a02e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe390dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3c8b4 }
	__asm { mov dword ptr [esi + 8], 0xe3c8c4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe3c8cc }
	__asm { mov dword ptr [esi + 8], 0xe3c8dc }
	__asm { jmp L_0067a030 }
	__asm { L_0067a02e: }
	__asm { xor esi, esi }
	__asm { L_0067a030: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0067a04d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0067a04d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00679260();
extern "C" void fn_0067b2c0();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067a070
extern "C" __declspec(naked) void asm_0067a070()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0067a0c1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0067b2c0 }
	__asm { mov esi, eax }
	__asm { jmp L_0067a0c3 }
	__asm { L_0067a0c1: }
	__asm { xor esi, esi }
	__asm { L_0067a0c3: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00679260 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067a0f4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0067a0f4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0067a0f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006792f0();
extern "C" void fn_0067b3d0();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067a110
extern "C" __declspec(naked) void asm_0067a110()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0067a161 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0067b3d0 }
	__asm { mov esi, eax }
	__asm { jmp L_0067a163 }
	__asm { L_0067a161: }
	__asm { xor esi, esi }
	__asm { L_0067a163: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_006792f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067a194 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0067a194 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0067a194: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004959d0();
extern "C" void fn_00679380();
extern "C" void fn_007af680();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067a1b0
extern "C" __declspec(naked) void asm_0067a1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd127ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xa0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0067a28a }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fst qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { fstp qword ptr [esi + 0x98] }
	__asm { mov dword ptr [esi], 0xe3be54 }
	__asm { mov dword ptr [esi + 4], 0xe3bed0 }
	__asm { mov dword ptr [esi + 0x18], 0xe3bed8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bee4 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov byte ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { jmp L_0067a28c }
	__asm { L_0067a28a: }
	__asm { xor esi, esi }
	__asm { L_0067a28c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00679380 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0067a2bd }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0067a2bd }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0067a2bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_0040c260();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0067b2c0
extern "C" __declspec(naked) void asm_0067b2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [esi], 0xe3c814 }
	__asm { mov dword ptr [esi + 4], 0xe3c890 }
	__asm { mov dword ptr [esi + 0x18], 0xe3c898 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3c8a4 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0x496100 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0067b3ad }
	__asm { lea ecx, [esi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_0067b38c }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0067b38c: }
	__asm { mov eax, 0xe3ca14 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0067b3ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_0040c260();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0067b3d0
extern "C" __declspec(naked) void asm_0067b3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [esi], 0xe3c774 }
	__asm { mov dword ptr [esi + 4], 0xe3c7f0 }
	__asm { mov dword ptr [esi + 0x18], 0xe3c7f8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3c804 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0x496100 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0067b4bd }
	__asm { lea ecx, [esi + 0x90] }
	__asm { test ecx, ecx }
	__asm { je L_0067b49c }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0067b49c: }
	__asm { mov eax, 0xe3ca0c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0067b4bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0067b4e0
extern "C" __declspec(naked) void asm_0067b4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1295c }
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
	__asm { je L_0067b52c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067b52c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b79c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067b54e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067b550 }
	__asm { L_0067b54e: }
	__asm { xor edx, edx }
	__asm { L_0067b550: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067b56e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0067b56e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b8c8 }
	__asm { mov dword ptr [ebx], 0xe3b8d4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8dc }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067b5b7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067b5b9 }
	__asm { L_0067b5b7: }
	__asm { xor edi, edi }
	__asm { L_0067b5b9: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067b5e0
extern "C" __declspec(naked) void asm_0067b5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1295c }
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
	__asm { je L_0067b62c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067b62c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b79c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067b64e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067b650 }
	__asm { L_0067b64e: }
	__asm { xor edx, edx }
	__asm { L_0067b650: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067b66e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0067b66e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b8c8 }
	__asm { mov dword ptr [ebx], 0xe3b8d4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8dc }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067b6b7 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067b6b9 }
	__asm { L_0067b6b7: }
	__asm { xor edi, edi }
	__asm { L_0067b6b9: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067b6e0
extern "C" __declspec(naked) void asm_0067b6e0()
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
	__asm { je L_0067b72b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067b72b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b79c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067b74d }
	__asm { add edi, 0xc }
	__asm { jmp L_0067b74f }
	__asm { L_0067b74d: }
	__asm { xor edi, edi }
	__asm { L_0067b74f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067b765 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067b765: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b8c8 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b8d4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8dc }
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
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0067b7c0
extern "C" __declspec(naked) void asm_0067b7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1299c }
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
	__asm { je L_0067b80c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067b80c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b808 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067b82e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067b830 }
	__asm { L_0067b82e: }
	__asm { xor edx, edx }
	__asm { L_0067b830: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067b84e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0067b84e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b938 }
	__asm { mov dword ptr [ebx], 0xe3b944 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b94c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067b897 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067b899 }
	__asm { L_0067b897: }
	__asm { xor edi, edi }
	__asm { L_0067b899: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067b8c0
extern "C" __declspec(naked) void asm_0067b8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1299c }
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
	__asm { je L_0067b90c }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067b90c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b808 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067b92e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067b930 }
	__asm { L_0067b92e: }
	__asm { xor edx, edx }
	__asm { L_0067b930: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067b94e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0067b94e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b938 }
	__asm { mov dword ptr [ebx], 0xe3b944 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b94c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067b997 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067b999 }
	__asm { L_0067b997: }
	__asm { xor edi, edi }
	__asm { L_0067b999: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067b9c0
extern "C" __declspec(naked) void asm_0067b9c0()
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
	__asm { je L_0067ba0b }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067ba0b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b808 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067ba2d }
	__asm { add edi, 0xc }
	__asm { jmp L_0067ba2f }
	__asm { L_0067ba2d: }
	__asm { xor edi, edi }
	__asm { L_0067ba2f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067ba45 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067ba45: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b938 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b944 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b94c }
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
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0067baa0
extern "C" __declspec(naked) void asm_0067baa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd129dc }
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
	__asm { je L_0067baec }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067baec: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b7d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067bb0e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067bb10 }
	__asm { L_0067bb0e: }
	__asm { xor edx, edx }
	__asm { L_0067bb10: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067bb2e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0067bb2e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b900 }
	__asm { mov dword ptr [ebx], 0xe3b90c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b914 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067bb77 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067bb79 }
	__asm { L_0067bb77: }
	__asm { xor edi, edi }
	__asm { L_0067bb79: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067bba0
extern "C" __declspec(naked) void asm_0067bba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd129dc }
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
	__asm { je L_0067bbec }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067bbec: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b7d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067bc0e }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067bc10 }
	__asm { L_0067bc0e: }
	__asm { xor edx, edx }
	__asm { L_0067bc10: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067bc2e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0067bc2e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b900 }
	__asm { mov dword ptr [ebx], 0xe3b90c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b914 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067bc77 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067bc79 }
	__asm { L_0067bc77: }
	__asm { xor edi, edi }
	__asm { L_0067bc79: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067bca0
extern "C" __declspec(naked) void asm_0067bca0()
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
	__asm { je L_0067bceb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067bceb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b7d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067bd0d }
	__asm { add edi, 0xc }
	__asm { jmp L_0067bd0f }
	__asm { L_0067bd0d: }
	__asm { xor edi, edi }
	__asm { L_0067bd0f: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067bd25 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067bd25: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b900 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b90c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b914 }
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
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0067bd80
extern "C" __declspec(naked) void asm_0067bd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a1c }
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
	__asm { je L_0067bdcc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067bdcc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067bdee }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067bdf0 }
	__asm { L_0067bdee: }
	__asm { xor edx, edx }
	__asm { L_0067bdf0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067be0e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0067be0e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b970 }
	__asm { mov dword ptr [ebx], 0xe3b97c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b984 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067be57 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067be59 }
	__asm { L_0067be57: }
	__asm { xor edi, edi }
	__asm { L_0067be59: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067be80
extern "C" __declspec(naked) void asm_0067be80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a1c }
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
	__asm { je L_0067becc }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067becc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067beee }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067bef0 }
	__asm { L_0067beee: }
	__asm { xor edx, edx }
	__asm { L_0067bef0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067bf0e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0067bf0e: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b970 }
	__asm { mov dword ptr [ebx], 0xe3b97c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b984 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067bf57 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067bf59 }
	__asm { L_0067bf57: }
	__asm { xor edi, edi }
	__asm { L_0067bf59: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067bf80
extern "C" __declspec(naked) void asm_0067bf80()
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
	__asm { je L_0067bfcb }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067bfcb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067bfed }
	__asm { add edi, 0xc }
	__asm { jmp L_0067bfef }
	__asm { L_0067bfed: }
	__asm { xor edi, edi }
	__asm { L_0067bfef: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c005 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c005: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b970 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b97c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b984 }
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
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0067c060
extern "C" __declspec(naked) void asm_0067c060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a8c }
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
	__asm { je L_0067c0ac }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067c0ac: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067c0ce }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067c0d0 }
	__asm { L_0067c0ce: }
	__asm { xor edx, edx }
	__asm { L_0067c0d0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c0ee }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0067c0ee: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b890 }
	__asm { mov dword ptr [ebx], 0xe3b89c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8a4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067c137 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c139 }
	__asm { L_0067c137: }
	__asm { xor edi, edi }
	__asm { L_0067c139: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067c160
extern "C" __declspec(naked) void asm_0067c160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12a8c }
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
	__asm { je L_0067c1ac }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067c1ac: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067c1ce }
	__asm { lea edx, [edi + 0xc] }
	__asm { jmp L_0067c1d0 }
	__asm { L_0067c1ce: }
	__asm { xor edx, edx }
	__asm { L_0067c1d0: }
	__asm { lea ebx, [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c1ee }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0067c1ee: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b890 }
	__asm { mov dword ptr [ebx], 0xe3b89c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8a4 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { test edi, edi }
	__asm { je L_0067c237 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c239 }
	__asm { L_0067c237: }
	__asm { xor edi, edi }
	__asm { L_0067c239: }
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
// FUNCTION: ROBLOXSTUDIO 0x0067c260
extern "C" __declspec(naked) void asm_0067c260()
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
	__asm { je L_0067c2ab }
	__asm { mov dword ptr [esi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [esi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0067c2ab: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0067c2cd }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c2cf }
	__asm { L_0067c2cd: }
	__asm { xor edi, edi }
	__asm { L_0067c2cf: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c2e5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c2e5: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b890 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b89c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8a4 }
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

extern "C" void fn_00679850();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x0067c340
extern "C" __declspec(naked) void asm_0067c340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 1 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0067c3bb }
	__asm { cmp eax, -1 }
	__asm { je L_0067c3bb }
	__asm { cmp eax, -2 }
	__asm { je L_0067c3bb }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test edx, edx }
	__asm { jne L_0067c37e }
	__asm { cmp ecx, 0x80000000 }
	__asm { je L_0067c3bb }
	__asm { L_0067c37e: }
	__asm { cmp edx, -1 }
	__asm { jne L_0067c38b }
	__asm { cmp ecx, 0x7fffffff }
	__asm { je L_0067c3bb }
	__asm { L_0067c38b: }
	__asm { cmp edx, -2 }
	__asm { jne L_0067c398 }
	__asm { cmp ecx, 0x7fffffff }
	__asm { je L_0067c3bb }
	__asm { L_0067c398: }
	__asm { push 0x14 }
	__asm { push 0x1dd76000 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { add eax, dword ptr [edi] }
	__asm { adc edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0067c3bb: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_00679850 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_0067b130();
extern "C" void fn_0067de10();
extern "C" void fn_0067dec0();
// FUNCTION: ROBLOXSTUDIO 0x0067cb60
extern "C" __declspec(naked) void asm_0067cb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12ab0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { mov ax, word ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov si, word ptr [ebp + 0x10] }
	__asm { mov word ptr [ebp - 0x12], ax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov word ptr [ebp - 0x10], si }
	__asm { call fn_0067de10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0067dec0 }
	__asm { add esp, 0xc }
	__asm { cmp ax, si }
	__asm { jae L_0067cc0c }
	__asm { push 0x22 }
	__asm { push 0xe3b834 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_004038a0 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { cmovae eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe3b79c }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0067b130 }
	__asm { L_0067cc0c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x0067cc40
extern "C" __declspec(naked) void asm_0067cc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { push 0 }
	__asm { test esi, esi }
	__asm { js L_0067cc78 }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { push 0xf4240 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebx], edi }
	__asm { mov eax, edx }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0067cc78: }
	__asm { xor eax, eax }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { mov ebx, eax }
	__asm { mov ecx, edx }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { push 0xe4c }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { mov esi, edx }
	__asm { call fn_00cf6a20 }
	__asm { add edi, eax }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { adc esi, edx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00cf6a20 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov ecx, eax }
	__asm { xor eax, eax }
	__asm { mov esi, edx }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { xor edi, edi }
	__asm { xor edi, edx }
	__asm { sub edi, edx }
	__asm { sbb eax, edx }
	__asm { neg edi }
	__asm { adc eax, 0 }
	__asm { neg eax }
	__asm { sub edi, ecx }
	__asm { sbb eax, esi }
	__asm { mov dword ptr [ebx], edi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00679940();
// FUNCTION: ROBLOXSTUDIO 0x0067d6f0
extern "C" __declspec(naked) void asm_0067d6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { test edi, edi }
	__asm { jne L_0067d712 }
	__asm { cmp edx, 0x80000000 }
	__asm { je L_0067d74f }
	__asm { L_0067d712: }
	__asm { cmp edi, -1 }
	__asm { jne L_0067d71f }
	__asm { cmp edx, 0x7fffffff }
	__asm { je L_0067d74f }
	__asm { L_0067d71f: }
	__asm { cmp edi, -2 }
	__asm { jne L_0067d72c }
	__asm { cmp edx, 0x7fffffff }
	__asm { je L_0067d74f }
	__asm { L_0067d72c: }
	__asm { test esi, esi }
	__asm { jne L_0067d737 }
	__asm { cmp eax, 0x80000000 }
	__asm { je L_0067d74f }
	__asm { L_0067d737: }
	__asm { cmp esi, -1 }
	__asm { jne L_0067d743 }
	__asm { cmp eax, 0x7fffffff }
	__asm { je L_0067d74f }
	__asm { L_0067d743: }
	__asm { cmp esi, -2 }
	__asm { jne L_0067d782 }
	__asm { cmp eax, 0x7fffffff }
	__asm { jne L_0067d782 }
	__asm { L_0067d74f: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_00679940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067d782: }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov edx, edi }
	__asm { add edx, esi }
	__asm { adc ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0067de10
extern "C" __declspec(naked) void asm_0067de10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movzx esi, word ptr [ebx + 2] }
	__asm { mov eax, esi }
	__asm { mov ecx, 0xe }
	__asm { sub ecx, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { movzx ecx, ax }
	__asm { mov ax, word ptr [ebx] }
	__asm { sub ax, cx }
	__asm { mov edx, 0x12c0 }
	__asm { add ax, dx }
	__asm { push edi }
	__asm { movzx edi, ax }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [eax*4 - 3] }
	__asm { add eax, esi }
	__asm { movzx ecx, ax }
	__asm { imul ecx, ecx, 0x99 }
	__asm { add ecx, 2 }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { add ecx, eax }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { add ecx, eax }
	__asm { mov eax, 0x51eb851f }
	__asm { imul edi }
	__asm { sar edx, 7 }
	__asm { add ecx, edx }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, ecx }
	__asm { mov ecx, edi }
	__asm { imul ecx, ecx, 0x16d }
	__asm { mov eax, 0x51eb851f }
	__asm { imul edi }
	__asm { add esi, ecx }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { sub esi, ecx }
	__asm { pop edi }
	__asm { lea eax, [esi - 0x7d2d] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_006769a0();
// FUNCTION: ROBLOXSTUDIO 0x0067e070
extern "C" __declspec(naked) void asm_0067e070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, 0xb }
	__asm { cmp dword ptr [esi + 0x10], edi }
	__asm { mov ebx, ecx }
	__asm { cmovb edi, dword ptr [esi + 0x10] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_0067e099 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0067e09b }
	__asm { L_0067e099: }
	__asm { mov ecx, esi }
	__asm { L_0067e09b: }
	__asm { mov eax, 0xb }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x1018864 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0067e0df }
	__asm { cmp edi, 0xb }
	__asm { jb L_0067e0df }
	__asm { cmp edi, 0xb }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0067e0df }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_006769a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0067e0df: }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402f60();
extern "C" void fn_0076f130();
// FUNCTION: ROBLOXSTUDIO 0x0067e100
extern "C" __declspec(naked) void asm_0067e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, 3 }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { mov ebx, ecx }
	__asm { cmovb esi, dword ptr [edi + 0x10] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0067e121 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_0067e123 }
	__asm { L_0067e121: }
	__asm { mov ecx, edi }
	__asm { L_0067e123: }
	__asm { mov eax, 3 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0x102eff4 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0067e166 }
	__asm { cmp esi, 3 }
	__asm { jb L_0067e166 }
	__asm { cmp esi, 3 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0067e166 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov ecx, eax }
	__asm { call fn_0076f130 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0067e166: }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0067d390();
extern "C" void fn_00b13870();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067e860
extern "C" __declspec(naked) void asm_0067e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0067e8d1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x24 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0067e8bb }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b13870 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e8bb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e8d1: }
	__asm { cmp eax, 1 }
	__asm { jne L_0067e8f5 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e8f5: }
	__asm { cmp eax, 2 }
	__asm { jne L_0067e91f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0067e90a }
	__asm { push 1 }
	__asm { call fn_0067d390 }
	__asm { L_0067e90a: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e91f: }
	__asm { cmp eax, 3 }
	__asm { jne L_0067e94e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11da910 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0067e90a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e94e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x11da910 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067eb60
extern "C" __declspec(naked) void asm_0067eb60()
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
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b79c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067ebc3 }
	__asm { add esi, 0xc }
	__asm { jmp L_0067ebc5 }
	__asm { L_0067ebc3: }
	__asm { xor esi, esi }
	__asm { L_0067ebc5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067ebdb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067ebdb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b8c8 }
	__asm { mov dword ptr [ebp - 0x30], 0xe3b8d4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x10f9038 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe3b8dc }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067ec40
extern "C" __declspec(naked) void asm_0067ec40()
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
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b808 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067eca3 }
	__asm { add esi, 0xc }
	__asm { jmp L_0067eca5 }
	__asm { L_0067eca3: }
	__asm { xor esi, esi }
	__asm { L_0067eca5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067ecbb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067ecbb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b938 }
	__asm { mov dword ptr [ebp - 0x30], 0xe3b944 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x10f9148 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe3b94c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067ed20
extern "C" __declspec(naked) void asm_0067ed20()
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
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b7d4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067ed83 }
	__asm { add esi, 0xc }
	__asm { jmp L_0067ed85 }
	__asm { L_0067ed83: }
	__asm { xor esi, esi }
	__asm { L_0067ed85: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067ed9b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067ed9b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b900 }
	__asm { mov dword ptr [ebp - 0x30], 0xe3b90c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x10f90c0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe3b914 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067ee00
extern "C" __declspec(naked) void asm_0067ee00()
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
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067ee63 }
	__asm { add esi, 0xc }
	__asm { jmp L_0067ee65 }
	__asm { L_0067ee63: }
	__asm { xor esi, esi }
	__asm { L_0067ee65: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067ee7b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067ee7b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b970 }
	__asm { mov dword ptr [ebp - 0x30], 0xe3b97c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x10f91d0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe3b984 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}
