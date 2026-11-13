// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f6244[];
extern "C" char g_012f6248[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081dd00
extern "C" __declspec(naked) void asm_0081dd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24d2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081e07c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081dd32: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x824690 }
	__asm { push 0x12f620c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6248] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081dd99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6248], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081dd8d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f6244], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081dd9e }
	__asm { L_0081dd8d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f6244], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081dd9e }
	__asm { L_0081dd99: }
	__asm { mov eax, dword ptr [g_012f6244] }
	__asm { L_0081dd9e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081de25 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081ddcb }
	__asm { add eax, -5 }
	__asm { jmp L_0081ddcd }
	__asm { L_0081ddcb: }
	__asm { xor eax, eax }
	__asm { L_0081ddcd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081de22 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081de22 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081de11 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081de22 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081de11: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081de22: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081de25: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081df15 }
	__asm { L_0081de30: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081df15 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081deb5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081de58 }
	__asm { add eax, -5 }
	__asm { jmp L_0081de5a }
	__asm { L_0081de58: }
	__asm { xor eax, eax }
	__asm { L_0081de5a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081deaf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081deaf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081de9e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081deaf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081de9e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081deaf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081deb5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081df0a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081decc }
	__asm { add ebx, -5 }
	__asm { jmp L_0081dece }
	__asm { L_0081decc: }
	__asm { xor ebx, ebx }
	__asm { L_0081dece: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081df04 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081df04 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081df0a }
	__asm { L_0081df04: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081df0a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081de30 }
	__asm { L_0081df15: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081df79 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081df79 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081df79 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081df79 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081df6f }
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
	__asm { je L_0081df6d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081df6f }
	__asm { L_0081df6d: }
	__asm { mov esi, edx }
	__asm { L_0081df6f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081df79: }
	__asm { test esi, esi }
	__asm { je L_0081dfe0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081df89 }
	__asm { add eax, -5 }
	__asm { jmp L_0081df8b }
	__asm { L_0081df89: }
	__asm { xor eax, eax }
	__asm { L_0081df8b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081dfe0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081dfe0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081dfcf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081dfe0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081dfcf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081dfe0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081e02f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081dff7 }
	__asm { add edi, -5 }
	__asm { jmp L_0081dff9 }
	__asm { L_0081dff7: }
	__asm { xor edi, edi }
	__asm { L_0081dff9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e029 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e029 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081e02f }
	__asm { L_0081e029: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e02f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081e06e }
	__asm { add esi, 5 }
	__asm { je L_0081e044 }
	__asm { add esi, -5 }
	__asm { jmp L_0081e046 }
	__asm { L_0081e044: }
	__asm { xor esi, esi }
	__asm { L_0081e046: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e06e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e06e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081e06e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081dd32 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081e07c: }
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
extern "C" char g_012f623c[];
extern "C" char g_012f6240[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081e090
extern "C" __declspec(naked) void asm_0081e090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24d5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081e40c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081e0c2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8246a0 }
	__asm { push 0x12f6204 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6240] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081e129 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6240], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081e11d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f623c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081e12e }
	__asm { L_0081e11d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f623c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081e12e }
	__asm { L_0081e129: }
	__asm { mov eax, dword ptr [g_012f623c] }
	__asm { L_0081e12e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081e1b5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e15b }
	__asm { add eax, -5 }
	__asm { jmp L_0081e15d }
	__asm { L_0081e15b: }
	__asm { xor eax, eax }
	__asm { L_0081e15d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e1b2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081e1b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e1a1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e1b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e1a1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e1b2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081e1b5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081e2a5 }
	__asm { L_0081e1c0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081e2a5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081e245 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e1e8 }
	__asm { add eax, -5 }
	__asm { jmp L_0081e1ea }
	__asm { L_0081e1e8: }
	__asm { xor eax, eax }
	__asm { L_0081e1ea: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e23f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081e23f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e22e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e23f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e22e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e23f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e245: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081e29a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081e25c }
	__asm { add ebx, -5 }
	__asm { jmp L_0081e25e }
	__asm { L_0081e25c: }
	__asm { xor ebx, ebx }
	__asm { L_0081e25e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e294 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e294 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081e29a }
	__asm { L_0081e294: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e29a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081e1c0 }
	__asm { L_0081e2a5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081e309 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081e309 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081e309 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081e309 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081e2ff }
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
	__asm { je L_0081e2fd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081e2ff }
	__asm { L_0081e2fd: }
	__asm { mov esi, edx }
	__asm { L_0081e2ff: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081e309: }
	__asm { test esi, esi }
	__asm { je L_0081e370 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e319 }
	__asm { add eax, -5 }
	__asm { jmp L_0081e31b }
	__asm { L_0081e319: }
	__asm { xor eax, eax }
	__asm { L_0081e31b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e370 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081e370 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e35f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e370 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e35f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e370: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081e3bf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081e387 }
	__asm { add edi, -5 }
	__asm { jmp L_0081e389 }
	__asm { L_0081e387: }
	__asm { xor edi, edi }
	__asm { L_0081e389: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e3b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e3b9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081e3bf }
	__asm { L_0081e3b9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e3bf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081e3fe }
	__asm { add esi, 5 }
	__asm { je L_0081e3d4 }
	__asm { add esi, -5 }
	__asm { jmp L_0081e3d6 }
	__asm { L_0081e3d4: }
	__asm { xor esi, esi }
	__asm { L_0081e3d6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e3fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e3fe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081e3fe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081e0c2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081e40c: }
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
extern "C" char g_012f6234[];
extern "C" char g_012f6238[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081e420
extern "C" __declspec(naked) void asm_0081e420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24d8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081e79c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081e452: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8246b0 }
	__asm { push 0x12f61fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6238] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081e4b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6238], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081e4ad }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f6234], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081e4be }
	__asm { L_0081e4ad: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f6234], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081e4be }
	__asm { L_0081e4b9: }
	__asm { mov eax, dword ptr [g_012f6234] }
	__asm { L_0081e4be: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081e545 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e4eb }
	__asm { add eax, -5 }
	__asm { jmp L_0081e4ed }
	__asm { L_0081e4eb: }
	__asm { xor eax, eax }
	__asm { L_0081e4ed: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e542 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081e542 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e531 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e542 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e531: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e542: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081e545: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081e635 }
	__asm { L_0081e550: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081e635 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081e5d5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e578 }
	__asm { add eax, -5 }
	__asm { jmp L_0081e57a }
	__asm { L_0081e578: }
	__asm { xor eax, eax }
	__asm { L_0081e57a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e5cf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081e5cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e5be }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e5cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e5be: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e5cf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e5d5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081e62a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081e5ec }
	__asm { add ebx, -5 }
	__asm { jmp L_0081e5ee }
	__asm { L_0081e5ec: }
	__asm { xor ebx, ebx }
	__asm { L_0081e5ee: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e624 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e624 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081e62a }
	__asm { L_0081e624: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e62a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081e550 }
	__asm { L_0081e635: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081e699 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081e699 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081e699 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081e699 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081e68f }
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
	__asm { je L_0081e68d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081e68f }
	__asm { L_0081e68d: }
	__asm { mov esi, edx }
	__asm { L_0081e68f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081e699: }
	__asm { test esi, esi }
	__asm { je L_0081e700 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e6a9 }
	__asm { add eax, -5 }
	__asm { jmp L_0081e6ab }
	__asm { L_0081e6a9: }
	__asm { xor eax, eax }
	__asm { L_0081e6ab: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e700 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081e700 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e6ef }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e700 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e6ef: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e700: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081e74f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081e717 }
	__asm { add edi, -5 }
	__asm { jmp L_0081e719 }
	__asm { L_0081e717: }
	__asm { xor edi, edi }
	__asm { L_0081e719: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e749 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e749 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081e74f }
	__asm { L_0081e749: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e74f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081e78e }
	__asm { add esi, 5 }
	__asm { je L_0081e764 }
	__asm { add esi, -5 }
	__asm { jmp L_0081e766 }
	__asm { L_0081e764: }
	__asm { xor esi, esi }
	__asm { L_0081e766: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e78e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e78e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081e78e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081e452 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081e79c: }
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
extern "C" char g_012f6224[];
extern "C" char g_012f6228[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081e7b0
extern "C" __declspec(naked) void asm_0081e7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24dbe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081eb2c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081e7e2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8246c0 }
	__asm { push 0x12f61ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6228] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081e849 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6228], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081e83d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f6224], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081e84e }
	__asm { L_0081e83d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f6224], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081e84e }
	__asm { L_0081e849: }
	__asm { mov eax, dword ptr [g_012f6224] }
	__asm { L_0081e84e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081e8d5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e87b }
	__asm { add eax, -5 }
	__asm { jmp L_0081e87d }
	__asm { L_0081e87b: }
	__asm { xor eax, eax }
	__asm { L_0081e87d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e8d2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081e8d2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e8c1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e8d2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e8c1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e8d2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081e8d5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081e9c5 }
	__asm { L_0081e8e0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081e9c5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081e965 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081e908 }
	__asm { add eax, -5 }
	__asm { jmp L_0081e90a }
	__asm { L_0081e908: }
	__asm { xor eax, eax }
	__asm { L_0081e90a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081e95f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081e95f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081e94e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081e95f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081e94e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081e95f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e965: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081e9ba }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081e97c }
	__asm { add ebx, -5 }
	__asm { jmp L_0081e97e }
	__asm { L_0081e97c: }
	__asm { xor ebx, ebx }
	__asm { L_0081e97e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e9b4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081e9b4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081e9ba }
	__asm { L_0081e9b4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081e9ba: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081e8e0 }
	__asm { L_0081e9c5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081ea29 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081ea29 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081ea29 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081ea29 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081ea1f }
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
	__asm { je L_0081ea1d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081ea1f }
	__asm { L_0081ea1d: }
	__asm { mov esi, edx }
	__asm { L_0081ea1f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081ea29: }
	__asm { test esi, esi }
	__asm { je L_0081ea90 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081ea39 }
	__asm { add eax, -5 }
	__asm { jmp L_0081ea3b }
	__asm { L_0081ea39: }
	__asm { xor eax, eax }
	__asm { L_0081ea3b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081ea90 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081ea90 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081ea7f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ea90 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081ea7f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ea90: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081eadf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081eaa7 }
	__asm { add edi, -5 }
	__asm { jmp L_0081eaa9 }
	__asm { L_0081eaa7: }
	__asm { xor edi, edi }
	__asm { L_0081eaa9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081ead9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081ead9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081eadf }
	__asm { L_0081ead9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081eadf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081eb1e }
	__asm { add esi, 5 }
	__asm { je L_0081eaf4 }
	__asm { add esi, -5 }
	__asm { jmp L_0081eaf6 }
	__asm { L_0081eaf4: }
	__asm { xor esi, esi }
	__asm { L_0081eaf6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081eb1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081eb1e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081eb1e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081e7e2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081eb2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
