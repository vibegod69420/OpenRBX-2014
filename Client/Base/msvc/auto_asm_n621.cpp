// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f3058[];
extern "C" char g_012f305c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081cb30
extern "C" __declspec(naked) void asm_0081cb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24c3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081ceac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081cb62: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x824650 }
	__asm { push 0x12e5a28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f305c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081cbc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f305c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081cbbd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f3058], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081cbce }
	__asm { L_0081cbbd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f3058], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081cbce }
	__asm { L_0081cbc9: }
	__asm { mov eax, dword ptr [g_012f3058] }
	__asm { L_0081cbce: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081cc55 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081cbfb }
	__asm { add eax, -5 }
	__asm { jmp L_0081cbfd }
	__asm { L_0081cbfb: }
	__asm { xor eax, eax }
	__asm { L_0081cbfd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081cc52 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081cc52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081cc41 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081cc52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081cc41: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081cc52: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081cc55: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081cd45 }
	__asm { L_0081cc60: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081cd45 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081cce5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081cc88 }
	__asm { add eax, -5 }
	__asm { jmp L_0081cc8a }
	__asm { L_0081cc88: }
	__asm { xor eax, eax }
	__asm { L_0081cc8a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081ccdf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081ccdf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081ccce }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ccdf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081ccce: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ccdf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081cce5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081cd3a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081ccfc }
	__asm { add ebx, -5 }
	__asm { jmp L_0081ccfe }
	__asm { L_0081ccfc: }
	__asm { xor ebx, ebx }
	__asm { L_0081ccfe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081cd34 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081cd34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081cd3a }
	__asm { L_0081cd34: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081cd3a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081cc60 }
	__asm { L_0081cd45: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081cda9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081cda9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081cda9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081cda9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081cd9f }
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
	__asm { je L_0081cd9d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081cd9f }
	__asm { L_0081cd9d: }
	__asm { mov esi, edx }
	__asm { L_0081cd9f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081cda9: }
	__asm { test esi, esi }
	__asm { je L_0081ce10 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081cdb9 }
	__asm { add eax, -5 }
	__asm { jmp L_0081cdbb }
	__asm { L_0081cdb9: }
	__asm { xor eax, eax }
	__asm { L_0081cdbb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081ce10 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081ce10 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081cdff }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ce10 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081cdff: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ce10: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081ce5f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081ce27 }
	__asm { add edi, -5 }
	__asm { jmp L_0081ce29 }
	__asm { L_0081ce27: }
	__asm { xor edi, edi }
	__asm { L_0081ce29: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081ce59 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081ce59 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081ce5f }
	__asm { L_0081ce59: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081ce5f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081ce9e }
	__asm { add esi, 5 }
	__asm { je L_0081ce74 }
	__asm { add esi, -5 }
	__asm { jmp L_0081ce76 }
	__asm { L_0081ce74: }
	__asm { xor esi, esi }
	__asm { L_0081ce76: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081ce9e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081ce9e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081ce9e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081cb62 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081ceac: }
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
extern "C" char g_012f621c[];
extern "C" char g_012f6220[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081cec0
extern "C" __declspec(naked) void asm_0081cec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24c6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081d23c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081cef2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x824660 }
	__asm { push 0x12f61e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081cf59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6220], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081cf4d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f621c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081cf5e }
	__asm { L_0081cf4d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f621c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081cf5e }
	__asm { L_0081cf59: }
	__asm { mov eax, dword ptr [g_012f621c] }
	__asm { L_0081cf5e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081cfe5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081cf8b }
	__asm { add eax, -5 }
	__asm { jmp L_0081cf8d }
	__asm { L_0081cf8b: }
	__asm { xor eax, eax }
	__asm { L_0081cf8d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081cfe2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081cfe2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081cfd1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081cfe2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081cfd1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081cfe2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081cfe5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081d0d5 }
	__asm { L_0081cff0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081d0d5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081d075 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d018 }
	__asm { add eax, -5 }
	__asm { jmp L_0081d01a }
	__asm { L_0081d018: }
	__asm { xor eax, eax }
	__asm { L_0081d01a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d06f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081d06f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d05e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d06f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d05e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d06f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d075: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081d0ca }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081d08c }
	__asm { add ebx, -5 }
	__asm { jmp L_0081d08e }
	__asm { L_0081d08c: }
	__asm { xor ebx, ebx }
	__asm { L_0081d08e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d0c4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d0c4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081d0ca }
	__asm { L_0081d0c4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d0ca: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081cff0 }
	__asm { L_0081d0d5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081d139 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081d139 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081d139 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081d139 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081d12f }
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
	__asm { je L_0081d12d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081d12f }
	__asm { L_0081d12d: }
	__asm { mov esi, edx }
	__asm { L_0081d12f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081d139: }
	__asm { test esi, esi }
	__asm { je L_0081d1a0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d149 }
	__asm { add eax, -5 }
	__asm { jmp L_0081d14b }
	__asm { L_0081d149: }
	__asm { xor eax, eax }
	__asm { L_0081d14b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d1a0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081d1a0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d18f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d1a0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d18f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d1a0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081d1ef }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081d1b7 }
	__asm { add edi, -5 }
	__asm { jmp L_0081d1b9 }
	__asm { L_0081d1b7: }
	__asm { xor edi, edi }
	__asm { L_0081d1b9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d1e9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d1e9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081d1ef }
	__asm { L_0081d1e9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d1ef: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081d22e }
	__asm { add esi, 5 }
	__asm { je L_0081d204 }
	__asm { add esi, -5 }
	__asm { jmp L_0081d206 }
	__asm { L_0081d204: }
	__asm { xor esi, esi }
	__asm { L_0081d206: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d22e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d22e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081d22e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081cef2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081d23c: }
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
extern "C" char g_012f3060[];
extern "C" char g_012f3064[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081d250
extern "C" __declspec(naked) void asm_0081d250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24c9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081d5cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081d282: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x824670 }
	__asm { push 0x12eec40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3064] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081d2e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3064], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081d2dd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f3060], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081d2ee }
	__asm { L_0081d2dd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f3060], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081d2ee }
	__asm { L_0081d2e9: }
	__asm { mov eax, dword ptr [g_012f3060] }
	__asm { L_0081d2ee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081d375 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d31b }
	__asm { add eax, -5 }
	__asm { jmp L_0081d31d }
	__asm { L_0081d31b: }
	__asm { xor eax, eax }
	__asm { L_0081d31d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d372 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081d372 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d361 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d372 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d361: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d372: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081d375: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081d465 }
	__asm { L_0081d380: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081d465 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081d405 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d3a8 }
	__asm { add eax, -5 }
	__asm { jmp L_0081d3aa }
	__asm { L_0081d3a8: }
	__asm { xor eax, eax }
	__asm { L_0081d3aa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d3ff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081d3ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d3ee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d3ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d3ee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d3ff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d405: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081d45a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081d41c }
	__asm { add ebx, -5 }
	__asm { jmp L_0081d41e }
	__asm { L_0081d41c: }
	__asm { xor ebx, ebx }
	__asm { L_0081d41e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d454 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d454 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081d45a }
	__asm { L_0081d454: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d45a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081d380 }
	__asm { L_0081d465: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081d4c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081d4c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081d4c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081d4c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081d4bf }
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
	__asm { je L_0081d4bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081d4bf }
	__asm { L_0081d4bd: }
	__asm { mov esi, edx }
	__asm { L_0081d4bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081d4c9: }
	__asm { test esi, esi }
	__asm { je L_0081d530 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d4d9 }
	__asm { add eax, -5 }
	__asm { jmp L_0081d4db }
	__asm { L_0081d4d9: }
	__asm { xor eax, eax }
	__asm { L_0081d4db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d530 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081d530 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d51f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d530 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d51f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d530: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081d57f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081d547 }
	__asm { add edi, -5 }
	__asm { jmp L_0081d549 }
	__asm { L_0081d547: }
	__asm { xor edi, edi }
	__asm { L_0081d549: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d579 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d579 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081d57f }
	__asm { L_0081d579: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d57f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081d5be }
	__asm { add esi, 5 }
	__asm { je L_0081d594 }
	__asm { add esi, -5 }
	__asm { jmp L_0081d596 }
	__asm { L_0081d594: }
	__asm { xor esi, esi }
	__asm { L_0081d596: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d5be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d5be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081d5be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081d282 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081d5cc: }
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
extern "C" char g_012f622c[];
extern "C" char g_012f6230[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081d5e0
extern "C" __declspec(naked) void asm_0081d5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24cce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081d95c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081d612: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x824680 }
	__asm { push 0x12f61f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6230] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081d679 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6230], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081d66d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f622c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081d67e }
	__asm { L_0081d66d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f622c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081d67e }
	__asm { L_0081d679: }
	__asm { mov eax, dword ptr [g_012f622c] }
	__asm { L_0081d67e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081d705 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d6ab }
	__asm { add eax, -5 }
	__asm { jmp L_0081d6ad }
	__asm { L_0081d6ab: }
	__asm { xor eax, eax }
	__asm { L_0081d6ad: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d702 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081d702 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d6f1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d702 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d6f1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d702: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081d705: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081d7f5 }
	__asm { L_0081d710: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081d7f5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081d795 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d738 }
	__asm { add eax, -5 }
	__asm { jmp L_0081d73a }
	__asm { L_0081d738: }
	__asm { xor eax, eax }
	__asm { L_0081d73a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d78f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081d78f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d77e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d78f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d77e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d78f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d795: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081d7ea }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081d7ac }
	__asm { add ebx, -5 }
	__asm { jmp L_0081d7ae }
	__asm { L_0081d7ac: }
	__asm { xor ebx, ebx }
	__asm { L_0081d7ae: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d7e4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d7e4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081d7ea }
	__asm { L_0081d7e4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d7ea: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081d710 }
	__asm { L_0081d7f5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081d859 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081d859 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081d859 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081d859 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081d84f }
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
	__asm { je L_0081d84d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081d84f }
	__asm { L_0081d84d: }
	__asm { mov esi, edx }
	__asm { L_0081d84f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081d859: }
	__asm { test esi, esi }
	__asm { je L_0081d8c0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081d869 }
	__asm { add eax, -5 }
	__asm { jmp L_0081d86b }
	__asm { L_0081d869: }
	__asm { xor eax, eax }
	__asm { L_0081d86b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081d8c0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081d8c0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081d8af }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081d8c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081d8af: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081d8c0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081d90f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081d8d7 }
	__asm { add edi, -5 }
	__asm { jmp L_0081d8d9 }
	__asm { L_0081d8d7: }
	__asm { xor edi, edi }
	__asm { L_0081d8d9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d909 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d909 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081d90f }
	__asm { L_0081d909: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081d90f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081d94e }
	__asm { add esi, 5 }
	__asm { je L_0081d924 }
	__asm { add esi, -5 }
	__asm { jmp L_0081d926 }
	__asm { L_0081d924: }
	__asm { xor esi, esi }
	__asm { L_0081d926: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d94e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081d94e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081d94e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081d612 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081d95c: }
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
extern "C" char g_0131ec04[];
extern "C" char g_0131ec08[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0081d970
extern "C" __declspec(naked) void asm_0081d970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24cfe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0081dcec }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0081d9a2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x4c8e70 }
	__asm { push 0x131c738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ec04] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0081da09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ec04], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0081d9fd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131ec08], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0081da0e }
	__asm { L_0081d9fd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131ec08], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0081da0e }
	__asm { L_0081da09: }
	__asm { mov eax, dword ptr [g_0131ec08] }
	__asm { L_0081da0e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0081da95 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081da3b }
	__asm { add eax, -5 }
	__asm { jmp L_0081da3d }
	__asm { L_0081da3b: }
	__asm { xor eax, eax }
	__asm { L_0081da3d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081da92 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081da92 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081da81 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081da92 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081da81: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081da92: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0081da95: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0081db85 }
	__asm { L_0081daa0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0081db85 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0081db25 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081dac8 }
	__asm { add eax, -5 }
	__asm { jmp L_0081daca }
	__asm { L_0081dac8: }
	__asm { xor eax, eax }
	__asm { L_0081daca: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081db1f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0081db1f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081db0e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081db1f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081db0e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081db1f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081db25: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0081db7a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0081db3c }
	__asm { add ebx, -5 }
	__asm { jmp L_0081db3e }
	__asm { L_0081db3c: }
	__asm { xor ebx, ebx }
	__asm { L_0081db3e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081db74 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081db74 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081db7a }
	__asm { L_0081db74: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081db7a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0081daa0 }
	__asm { L_0081db85: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0081dbe9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081dbe9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081dbe9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081dbe9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0081dbdf }
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
	__asm { je L_0081dbdd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0081dbdf }
	__asm { L_0081dbdd: }
	__asm { mov esi, edx }
	__asm { L_0081dbdf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0081dbe9: }
	__asm { test esi, esi }
	__asm { je L_0081dc50 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0081dbf9 }
	__asm { add eax, -5 }
	__asm { jmp L_0081dbfb }
	__asm { L_0081dbf9: }
	__asm { xor eax, eax }
	__asm { L_0081dbfb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0081dc50 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0081dc50 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0081dc3f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081dc50 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0081dc3f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081dc50: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0081dc9f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0081dc67 }
	__asm { add edi, -5 }
	__asm { jmp L_0081dc69 }
	__asm { L_0081dc67: }
	__asm { xor edi, edi }
	__asm { L_0081dc69: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081dc99 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081dc99 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0081dc9f }
	__asm { L_0081dc99: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0081dc9f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0081dcde }
	__asm { add esi, 5 }
	__asm { je L_0081dcb4 }
	__asm { add esi, -5 }
	__asm { jmp L_0081dcb6 }
	__asm { L_0081dcb4: }
	__asm { xor esi, esi }
	__asm { L_0081dcb6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081dcde }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0081dcde }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0081dcde: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0081d9a2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0081dcec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
