// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_00877e70();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x0086f320
extern "C" __declspec(naked) void asm_0086f320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0086f3bf }
	__asm { push 0x878050 }
	__asm { push 0x12fa514 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00877e70 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0086f385 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_0086f385: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0086f3bf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0086f3bf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0086f3bf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0086f3bf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0086f3bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_00877f00();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x0086f3d0
extern "C" __declspec(naked) void asm_0086f3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0086f46f }
	__asm { push 0x878060 }
	__asm { push 0x12fa4f4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00877f00 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0086f435 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_0086f435: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0086f46f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0086f46f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0086f46f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0086f46f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0086f46f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa4d4[];
extern "C" char g_012fa4d8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0086f5d0
extern "C" __declspec(naked) void asm_0086f5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a8fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0086f94c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0086f602: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877f90 }
	__asm { push 0x12fa4c4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0086f669 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4d8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0086f65d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4d4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0086f66e }
	__asm { L_0086f65d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4d4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0086f66e }
	__asm { L_0086f669: }
	__asm { mov eax, dword ptr [g_012fa4d4] }
	__asm { L_0086f66e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0086f6f5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086f69b }
	__asm { add eax, -5 }
	__asm { jmp L_0086f69d }
	__asm { L_0086f69b: }
	__asm { xor eax, eax }
	__asm { L_0086f69d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086f6f2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0086f6f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086f6e1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086f6f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086f6e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086f6f2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0086f6f5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0086f7e5 }
	__asm { L_0086f700: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0086f7e5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0086f785 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086f728 }
	__asm { add eax, -5 }
	__asm { jmp L_0086f72a }
	__asm { L_0086f728: }
	__asm { xor eax, eax }
	__asm { L_0086f72a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086f77f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0086f77f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086f76e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086f77f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086f76e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086f77f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086f785: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086f7da }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0086f79c }
	__asm { add ebx, -5 }
	__asm { jmp L_0086f79e }
	__asm { L_0086f79c: }
	__asm { xor ebx, ebx }
	__asm { L_0086f79e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086f7d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086f7d4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086f7da }
	__asm { L_0086f7d4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086f7da: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0086f700 }
	__asm { L_0086f7e5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0086f849 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0086f849 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0086f849 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0086f849 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0086f83f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0086f83d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0086f83f }
	__asm { L_0086f83d: }
	__asm { mov esi, edx }
	__asm { L_0086f83f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0086f849: }
	__asm { test esi, esi }
	__asm { je L_0086f8b0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086f859 }
	__asm { add eax, -5 }
	__asm { jmp L_0086f85b }
	__asm { L_0086f859: }
	__asm { xor eax, eax }
	__asm { L_0086f85b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086f8b0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0086f8b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086f89f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086f8b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086f89f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086f8b0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0086f8ff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0086f8c7 }
	__asm { add edi, -5 }
	__asm { jmp L_0086f8c9 }
	__asm { L_0086f8c7: }
	__asm { xor edi, edi }
	__asm { L_0086f8c9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086f8f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086f8f9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086f8ff }
	__asm { L_0086f8f9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086f8ff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0086f93e }
	__asm { add esi, 5 }
	__asm { je L_0086f914 }
	__asm { add esi, -5 }
	__asm { jmp L_0086f916 }
	__asm { L_0086f914: }
	__asm { xor esi, esi }
	__asm { L_0086f916: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086f93e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086f93e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0086f93e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0086f602 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0086f94c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa49c[];
extern "C" char g_012fa4a0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0086f960
extern "C" __declspec(naked) void asm_0086f960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a92e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0086fcdc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0086f992: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877fa0 }
	__asm { push 0x12fa474 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0086f9f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4a0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0086f9ed }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa49c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0086f9fe }
	__asm { L_0086f9ed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa49c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0086f9fe }
	__asm { L_0086f9f9: }
	__asm { mov eax, dword ptr [g_012fa49c] }
	__asm { L_0086f9fe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0086fa85 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086fa2b }
	__asm { add eax, -5 }
	__asm { jmp L_0086fa2d }
	__asm { L_0086fa2b: }
	__asm { xor eax, eax }
	__asm { L_0086fa2d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086fa82 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0086fa82 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086fa71 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086fa82 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086fa71: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086fa82: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0086fa85: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0086fb75 }
	__asm { L_0086fa90: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0086fb75 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0086fb15 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086fab8 }
	__asm { add eax, -5 }
	__asm { jmp L_0086faba }
	__asm { L_0086fab8: }
	__asm { xor eax, eax }
	__asm { L_0086faba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086fb0f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0086fb0f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086fafe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086fb0f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086fafe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086fb0f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086fb15: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086fb6a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0086fb2c }
	__asm { add ebx, -5 }
	__asm { jmp L_0086fb2e }
	__asm { L_0086fb2c: }
	__asm { xor ebx, ebx }
	__asm { L_0086fb2e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fb64 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fb64 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086fb6a }
	__asm { L_0086fb64: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086fb6a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0086fa90 }
	__asm { L_0086fb75: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0086fbd9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0086fbd9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0086fbd9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0086fbd9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0086fbcf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0086fbcd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0086fbcf }
	__asm { L_0086fbcd: }
	__asm { mov esi, edx }
	__asm { L_0086fbcf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0086fbd9: }
	__asm { test esi, esi }
	__asm { je L_0086fc40 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086fbe9 }
	__asm { add eax, -5 }
	__asm { jmp L_0086fbeb }
	__asm { L_0086fbe9: }
	__asm { xor eax, eax }
	__asm { L_0086fbeb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086fc40 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0086fc40 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086fc2f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086fc40 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086fc2f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086fc40: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0086fc8f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0086fc57 }
	__asm { add edi, -5 }
	__asm { jmp L_0086fc59 }
	__asm { L_0086fc57: }
	__asm { xor edi, edi }
	__asm { L_0086fc59: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fc89 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fc89 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086fc8f }
	__asm { L_0086fc89: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086fc8f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0086fcce }
	__asm { add esi, 5 }
	__asm { je L_0086fca4 }
	__asm { add esi, -5 }
	__asm { jmp L_0086fca6 }
	__asm { L_0086fca4: }
	__asm { xor esi, esi }
	__asm { L_0086fca6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fcce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fcce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0086fcce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0086f992 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0086fcdc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa4a4[];
extern "C" char g_012fa4a8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0086fcf0
extern "C" __declspec(naked) void asm_0086fcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a95e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0087006c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0086fd22: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877fb0 }
	__asm { push 0x12fa47c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0086fd89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4a8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0086fd7d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4a4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0086fd8e }
	__asm { L_0086fd7d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4a4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0086fd8e }
	__asm { L_0086fd89: }
	__asm { mov eax, dword ptr [g_012fa4a4] }
	__asm { L_0086fd8e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0086fe15 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086fdbb }
	__asm { add eax, -5 }
	__asm { jmp L_0086fdbd }
	__asm { L_0086fdbb: }
	__asm { xor eax, eax }
	__asm { L_0086fdbd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086fe12 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0086fe12 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086fe01 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086fe12 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086fe01: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086fe12: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0086fe15: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0086ff05 }
	__asm { L_0086fe20: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0086ff05 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0086fea5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086fe48 }
	__asm { add eax, -5 }
	__asm { jmp L_0086fe4a }
	__asm { L_0086fe48: }
	__asm { xor eax, eax }
	__asm { L_0086fe4a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086fe9f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0086fe9f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086fe8e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086fe9f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086fe8e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086fe9f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086fea5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086fefa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0086febc }
	__asm { add ebx, -5 }
	__asm { jmp L_0086febe }
	__asm { L_0086febc: }
	__asm { xor ebx, ebx }
	__asm { L_0086febe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fef4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086fef4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086fefa }
	__asm { L_0086fef4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086fefa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0086fe20 }
	__asm { L_0086ff05: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0086ff69 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0086ff69 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0086ff69 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0086ff69 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0086ff5f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0086ff5d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0086ff5f }
	__asm { L_0086ff5d: }
	__asm { mov esi, edx }
	__asm { L_0086ff5f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0086ff69: }
	__asm { test esi, esi }
	__asm { je L_0086ffd0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0086ff79 }
	__asm { add eax, -5 }
	__asm { jmp L_0086ff7b }
	__asm { L_0086ff79: }
	__asm { xor eax, eax }
	__asm { L_0086ff7b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086ffd0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0086ffd0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086ffbf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086ffd0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086ffbf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086ffd0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0087001f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0086ffe7 }
	__asm { add edi, -5 }
	__asm { jmp L_0086ffe9 }
	__asm { L_0086ffe7: }
	__asm { xor edi, edi }
	__asm { L_0086ffe9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870019 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870019 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0087001f }
	__asm { L_00870019: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0087001f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0087005e }
	__asm { add esi, 5 }
	__asm { je L_00870034 }
	__asm { add esi, -5 }
	__asm { jmp L_00870036 }
	__asm { L_00870034: }
	__asm { xor esi, esi }
	__asm { L_00870036: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0087005e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0087005e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0087005e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0086fd22 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0087006c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa4bc[];
extern "C" char g_012fa4c0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00870080
extern "C" __declspec(naked) void asm_00870080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a98e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008703fc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008700b2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877fc0 }
	__asm { push 0x12fa494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00870119 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4c0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087010d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4bc], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0087011e }
	__asm { L_0087010d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4bc], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0087011e }
	__asm { L_00870119: }
	__asm { mov eax, dword ptr [g_012fa4bc] }
	__asm { L_0087011e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008701a5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0087014b }
	__asm { add eax, -5 }
	__asm { jmp L_0087014d }
	__asm { L_0087014b: }
	__asm { xor eax, eax }
	__asm { L_0087014d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008701a2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008701a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00870191 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008701a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00870191: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008701a2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008701a5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00870295 }
	__asm { L_008701b0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00870295 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00870235 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008701d8 }
	__asm { add eax, -5 }
	__asm { jmp L_008701da }
	__asm { L_008701d8: }
	__asm { xor eax, eax }
	__asm { L_008701da: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0087022f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0087022f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0087021e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087022f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0087021e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087022f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00870235: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0087028a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0087024c }
	__asm { add ebx, -5 }
	__asm { jmp L_0087024e }
	__asm { L_0087024c: }
	__asm { xor ebx, ebx }
	__asm { L_0087024e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870284 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870284 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0087028a }
	__asm { L_00870284: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0087028a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008701b0 }
	__asm { L_00870295: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008702f9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008702f9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008702f9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008702f9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008702ef }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_008702ed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008702ef }
	__asm { L_008702ed: }
	__asm { mov esi, edx }
	__asm { L_008702ef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008702f9: }
	__asm { test esi, esi }
	__asm { je L_00870360 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870309 }
	__asm { add eax, -5 }
	__asm { jmp L_0087030b }
	__asm { L_00870309: }
	__asm { xor eax, eax }
	__asm { L_0087030b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00870360 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00870360 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0087034f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00870360 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0087034f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00870360: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_008703af }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00870377 }
	__asm { add edi, -5 }
	__asm { jmp L_00870379 }
	__asm { L_00870377: }
	__asm { xor edi, edi }
	__asm { L_00870379: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008703a9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008703a9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008703af }
	__asm { L_008703a9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008703af: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008703ee }
	__asm { add esi, 5 }
	__asm { je L_008703c4 }
	__asm { add esi, -5 }
	__asm { jmp L_008703c6 }
	__asm { L_008703c4: }
	__asm { xor esi, esi }
	__asm { L_008703c6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008703ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008703ee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008703ee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008700b2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008703fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa4b4[];
extern "C" char g_012fa4b8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00870410
extern "C" __declspec(naked) void asm_00870410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a9be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0087078c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00870442: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877fd0 }
	__asm { push 0x12fa48c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008704a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4b8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087049d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4b4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_008704ae }
	__asm { L_0087049d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4b4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_008704ae }
	__asm { L_008704a9: }
	__asm { mov eax, dword ptr [g_012fa4b4] }
	__asm { L_008704ae: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00870535 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008704db }
	__asm { add eax, -5 }
	__asm { jmp L_008704dd }
	__asm { L_008704db: }
	__asm { xor eax, eax }
	__asm { L_008704dd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00870532 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00870532 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00870521 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00870532 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00870521: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00870532: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00870535: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00870625 }
	__asm { L_00870540: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00870625 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_008705c5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870568 }
	__asm { add eax, -5 }
	__asm { jmp L_0087056a }
	__asm { L_00870568: }
	__asm { xor eax, eax }
	__asm { L_0087056a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008705bf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_008705bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008705ae }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008705bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008705ae: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008705bf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008705c5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0087061a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_008705dc }
	__asm { add ebx, -5 }
	__asm { jmp L_008705de }
	__asm { L_008705dc: }
	__asm { xor ebx, ebx }
	__asm { L_008705de: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870614 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870614 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0087061a }
	__asm { L_00870614: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0087061a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00870540 }
	__asm { L_00870625: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00870689 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00870689 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00870689 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00870689 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0087067f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0087067d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0087067f }
	__asm { L_0087067d: }
	__asm { mov esi, edx }
	__asm { L_0087067f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00870689: }
	__asm { test esi, esi }
	__asm { je L_008706f0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870699 }
	__asm { add eax, -5 }
	__asm { jmp L_0087069b }
	__asm { L_00870699: }
	__asm { xor eax, eax }
	__asm { L_0087069b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008706f0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008706f0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008706df }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008706f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008706df: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008706f0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0087073f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00870707 }
	__asm { add edi, -5 }
	__asm { jmp L_00870709 }
	__asm { L_00870707: }
	__asm { xor edi, edi }
	__asm { L_00870709: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870739 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870739 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0087073f }
	__asm { L_00870739: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0087073f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0087077e }
	__asm { add esi, 5 }
	__asm { je L_00870754 }
	__asm { add esi, -5 }
	__asm { jmp L_00870756 }
	__asm { L_00870754: }
	__asm { xor esi, esi }
	__asm { L_00870756: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0087077e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0087077e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0087077e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00870442 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0087078c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa4dc[];
extern "C" char g_012fa4e0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008707a0
extern "C" __declspec(naked) void asm_008707a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a9ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00870b1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008707d2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877fe0 }
	__asm { push 0x12fa4cc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00870839 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4e0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087082d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4dc], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0087083e }
	__asm { L_0087082d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4dc], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0087083e }
	__asm { L_00870839: }
	__asm { mov eax, dword ptr [g_012fa4dc] }
	__asm { L_0087083e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008708c5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0087086b }
	__asm { add eax, -5 }
	__asm { jmp L_0087086d }
	__asm { L_0087086b: }
	__asm { xor eax, eax }
	__asm { L_0087086d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008708c2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008708c2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008708b1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008708c2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008708b1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008708c2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008708c5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_008709b5 }
	__asm { L_008708d0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_008709b5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00870955 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008708f8 }
	__asm { add eax, -5 }
	__asm { jmp L_008708fa }
	__asm { L_008708f8: }
	__asm { xor eax, eax }
	__asm { L_008708fa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0087094f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0087094f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0087093e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087094f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0087093e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087094f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00870955: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_008709aa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0087096c }
	__asm { add ebx, -5 }
	__asm { jmp L_0087096e }
	__asm { L_0087096c: }
	__asm { xor ebx, ebx }
	__asm { L_0087096e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008709a4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008709a4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008709aa }
	__asm { L_008709a4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008709aa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008708d0 }
	__asm { L_008709b5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00870a19 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00870a19 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00870a19 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00870a19 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00870a0f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00870a0d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00870a0f }
	__asm { L_00870a0d: }
	__asm { mov esi, edx }
	__asm { L_00870a0f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00870a19: }
	__asm { test esi, esi }
	__asm { je L_00870a80 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870a29 }
	__asm { add eax, -5 }
	__asm { jmp L_00870a2b }
	__asm { L_00870a29: }
	__asm { xor eax, eax }
	__asm { L_00870a2b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00870a80 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00870a80 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00870a6f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00870a80 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00870a6f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00870a80: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00870acf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00870a97 }
	__asm { add edi, -5 }
	__asm { jmp L_00870a99 }
	__asm { L_00870a97: }
	__asm { xor edi, edi }
	__asm { L_00870a99: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870ac9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870ac9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00870acf }
	__asm { L_00870ac9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00870acf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00870b0e }
	__asm { add esi, 5 }
	__asm { je L_00870ae4 }
	__asm { add esi, -5 }
	__asm { jmp L_00870ae6 }
	__asm { L_00870ae4: }
	__asm { xor esi, esi }
	__asm { L_00870ae6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870b0e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870b0e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00870b0e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008707d2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00870b1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fa4ac[];
extern "C" char g_012fa4b0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00870b30
extern "C" __declspec(naked) void asm_00870b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2aa1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00870eac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00870b62: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x877ff0 }
	__asm { push 0x12fa484 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa4b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00870bc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4b0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00870bbd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4ac], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00870bce }
	__asm { L_00870bbd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4ac], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00870bce }
	__asm { L_00870bc9: }
	__asm { mov eax, dword ptr [g_012fa4ac] }
	__asm { L_00870bce: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00870c55 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870bfb }
	__asm { add eax, -5 }
	__asm { jmp L_00870bfd }
	__asm { L_00870bfb: }
	__asm { xor eax, eax }
	__asm { L_00870bfd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00870c52 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00870c52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00870c41 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00870c52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00870c41: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00870c52: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00870c55: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00870d45 }
	__asm { L_00870c60: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00870d45 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00870ce5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870c88 }
	__asm { add eax, -5 }
	__asm { jmp L_00870c8a }
	__asm { L_00870c88: }
	__asm { xor eax, eax }
	__asm { L_00870c8a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00870cdf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00870cdf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00870cce }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00870cdf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00870cce: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00870cdf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00870ce5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00870d3a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00870cfc }
	__asm { add ebx, -5 }
	__asm { jmp L_00870cfe }
	__asm { L_00870cfc: }
	__asm { xor ebx, ebx }
	__asm { L_00870cfe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870d34 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870d34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00870d3a }
	__asm { L_00870d34: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00870d3a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00870c60 }
	__asm { L_00870d45: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00870da9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00870da9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00870da9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00870da9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00870d9f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00870d9d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00870d9f }
	__asm { L_00870d9d: }
	__asm { mov esi, edx }
	__asm { L_00870d9f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00870da9: }
	__asm { test esi, esi }
	__asm { je L_00870e10 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00870db9 }
	__asm { add eax, -5 }
	__asm { jmp L_00870dbb }
	__asm { L_00870db9: }
	__asm { xor eax, eax }
	__asm { L_00870dbb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00870e10 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00870e10 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00870dff }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00870e10 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00870dff: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00870e10: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00870e5f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00870e27 }
	__asm { add edi, -5 }
	__asm { jmp L_00870e29 }
	__asm { L_00870e27: }
	__asm { xor edi, edi }
	__asm { L_00870e29: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870e59 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870e59 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00870e5f }
	__asm { L_00870e59: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00870e5f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00870e9e }
	__asm { add esi, 5 }
	__asm { je L_00870e74 }
	__asm { add esi, -5 }
	__asm { jmp L_00870e76 }
	__asm { L_00870e74: }
	__asm { xor esi, esi }
	__asm { L_00870e76: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870e9e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00870e9e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00870e9e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00870b62 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00870eac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008777b0();
// FUNCTION: ROBLOXSTUDIO 0x00872ca0
extern "C" __declspec(naked) void asm_00872ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00872d08 }
	__asm { test ebx, ebx }
	__asm { jne L_00872d08 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00872cf7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00872d08 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00872cf7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00872d08: }
	__asm { push 0x877f90 }
	__asm { push 0x12fa4c4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008777b0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00872d48 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00872dfd }
	__asm { L_00872d48: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00872db7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00872db7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00872da6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00872db7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00872da6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00872db7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00872dcf }
	__asm { add esi, -5 }
	__asm { jmp L_00872dd1 }
	__asm { L_00872dcf: }
	__asm { xor esi, esi }
	__asm { L_00872dd1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00872dfd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00872dfd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00872dfd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00872e3a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00872e3a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00872e3a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00872e3a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00872e3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
