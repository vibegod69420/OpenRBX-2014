// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c36180();
// FUNCTION: ROBLOXSTUDIO 0x00c2e080
extern "C" __declspec(naked) void asm_00c2e080()
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
	__asm { je L_00c2e11f }
	__asm { push 0xc362c0 }
	__asm { push 0x1310d50 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c36180 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c2e0e5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c2e0e5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c2e11f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2e11f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2e11f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2e11f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c2e11f: }
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
extern "C" char g_013107e4[];
extern "C" char g_013107e8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2e190
extern "C" __declspec(naked) void asm_00c2e190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62d8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c2e50c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c2e1c2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc36210 }
	__asm { push 0x13107b4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013107e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c2e229 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107e8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2e21d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107e4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c2e22e }
	__asm { L_00c2e21d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107e4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c2e22e }
	__asm { L_00c2e229: }
	__asm { mov eax, dword ptr [g_013107e4] }
	__asm { L_00c2e22e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c2e2b5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e25b }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e25d }
	__asm { L_00c2e25b: }
	__asm { xor eax, eax }
	__asm { L_00c2e25d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e2b2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2e2b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e2a1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e2b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e2a1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e2b2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c2e2b5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c2e3a5 }
	__asm { L_00c2e2c0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c2e3a5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c2e345 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e2e8 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e2ea }
	__asm { L_00c2e2e8: }
	__asm { xor eax, eax }
	__asm { L_00c2e2ea: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e33f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c2e33f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e32e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e33f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e32e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e33f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2e345: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c2e39a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c2e35c }
	__asm { add ebx, -5 }
	__asm { jmp L_00c2e35e }
	__asm { L_00c2e35c: }
	__asm { xor ebx, ebx }
	__asm { L_00c2e35e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e394 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e394 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2e39a }
	__asm { L_00c2e394: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2e39a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c2e2c0 }
	__asm { L_00c2e3a5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c2e409 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2e409 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2e409 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2e409 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c2e3ff }
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
	__asm { je L_00c2e3fd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c2e3ff }
	__asm { L_00c2e3fd: }
	__asm { mov esi, edx }
	__asm { L_00c2e3ff: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c2e409: }
	__asm { test esi, esi }
	__asm { je L_00c2e470 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e419 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e41b }
	__asm { L_00c2e419: }
	__asm { xor eax, eax }
	__asm { L_00c2e41b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e470 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2e470 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e45f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e470 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e45f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e470: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c2e4bf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c2e487 }
	__asm { add edi, -5 }
	__asm { jmp L_00c2e489 }
	__asm { L_00c2e487: }
	__asm { xor edi, edi }
	__asm { L_00c2e489: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e4b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e4b9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2e4bf }
	__asm { L_00c2e4b9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2e4bf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c2e4fe }
	__asm { add esi, 5 }
	__asm { je L_00c2e4d4 }
	__asm { add esi, -5 }
	__asm { jmp L_00c2e4d6 }
	__asm { L_00c2e4d4: }
	__asm { xor esi, esi }
	__asm { L_00c2e4d6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e4fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e4fe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c2e4fe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c2e1c2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c2e50c: }
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
extern "C" char g_0130fe2c[];
extern "C" char g_0130fe30[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2e520
extern "C" __declspec(naked) void asm_00c2e520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62dbe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c2e89c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c2e552: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc01a30 }
	__asm { push 0x130fe1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fe30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c2e5b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fe30], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2e5ad }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130fe2c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c2e5be }
	__asm { L_00c2e5ad: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130fe2c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c2e5be }
	__asm { L_00c2e5b9: }
	__asm { mov eax, dword ptr [g_0130fe2c] }
	__asm { L_00c2e5be: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c2e645 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e5eb }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e5ed }
	__asm { L_00c2e5eb: }
	__asm { xor eax, eax }
	__asm { L_00c2e5ed: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e642 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2e642 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e631 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e642 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e631: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e642: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c2e645: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c2e735 }
	__asm { L_00c2e650: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c2e735 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c2e6d5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e678 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e67a }
	__asm { L_00c2e678: }
	__asm { xor eax, eax }
	__asm { L_00c2e67a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e6cf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c2e6cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e6be }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e6cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e6be: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e6cf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2e6d5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c2e72a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c2e6ec }
	__asm { add ebx, -5 }
	__asm { jmp L_00c2e6ee }
	__asm { L_00c2e6ec: }
	__asm { xor ebx, ebx }
	__asm { L_00c2e6ee: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e724 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e724 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2e72a }
	__asm { L_00c2e724: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2e72a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c2e650 }
	__asm { L_00c2e735: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c2e799 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2e799 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2e799 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2e799 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c2e78f }
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
	__asm { je L_00c2e78d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c2e78f }
	__asm { L_00c2e78d: }
	__asm { mov esi, edx }
	__asm { L_00c2e78f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c2e799: }
	__asm { test esi, esi }
	__asm { je L_00c2e800 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e7a9 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e7ab }
	__asm { L_00c2e7a9: }
	__asm { xor eax, eax }
	__asm { L_00c2e7ab: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e800 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2e800 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e7ef }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e800 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e7ef: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e800: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c2e84f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c2e817 }
	__asm { add edi, -5 }
	__asm { jmp L_00c2e819 }
	__asm { L_00c2e817: }
	__asm { xor edi, edi }
	__asm { L_00c2e819: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e849 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e849 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2e84f }
	__asm { L_00c2e849: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2e84f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c2e88e }
	__asm { add esi, 5 }
	__asm { je L_00c2e864 }
	__asm { add esi, -5 }
	__asm { jmp L_00c2e866 }
	__asm { L_00c2e864: }
	__asm { xor esi, esi }
	__asm { L_00c2e866: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e88e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2e88e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c2e88e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c2e552 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c2e89c: }
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
extern "C" char g_013107dc[];
extern "C" char g_013107e0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2e8b0
extern "C" __declspec(naked) void asm_00c2e8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62dee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c2ec2c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c2e8e2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc36220 }
	__asm { push 0x13107ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013107e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c2e949 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107e0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2e93d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107dc], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c2e94e }
	__asm { L_00c2e93d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107dc], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c2e94e }
	__asm { L_00c2e949: }
	__asm { mov eax, dword ptr [g_013107dc] }
	__asm { L_00c2e94e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c2e9d5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2e97b }
	__asm { add eax, -5 }
	__asm { jmp L_00c2e97d }
	__asm { L_00c2e97b: }
	__asm { xor eax, eax }
	__asm { L_00c2e97d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2e9d2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2e9d2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2e9c1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2e9d2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2e9c1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2e9d2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c2e9d5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c2eac5 }
	__asm { L_00c2e9e0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c2eac5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c2ea65 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2ea08 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2ea0a }
	__asm { L_00c2ea08: }
	__asm { xor eax, eax }
	__asm { L_00c2ea0a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2ea5f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c2ea5f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2ea4e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2ea5f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2ea4e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2ea5f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2ea65: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c2eaba }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c2ea7c }
	__asm { add ebx, -5 }
	__asm { jmp L_00c2ea7e }
	__asm { L_00c2ea7c: }
	__asm { xor ebx, ebx }
	__asm { L_00c2ea7e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2eab4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2eab4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2eaba }
	__asm { L_00c2eab4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2eaba: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c2e9e0 }
	__asm { L_00c2eac5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c2eb29 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2eb29 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2eb29 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2eb29 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c2eb1f }
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
	__asm { je L_00c2eb1d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c2eb1f }
	__asm { L_00c2eb1d: }
	__asm { mov esi, edx }
	__asm { L_00c2eb1f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c2eb29: }
	__asm { test esi, esi }
	__asm { je L_00c2eb90 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2eb39 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2eb3b }
	__asm { L_00c2eb39: }
	__asm { xor eax, eax }
	__asm { L_00c2eb3b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2eb90 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2eb90 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2eb7f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2eb90 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2eb7f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2eb90: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c2ebdf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c2eba7 }
	__asm { add edi, -5 }
	__asm { jmp L_00c2eba9 }
	__asm { L_00c2eba7: }
	__asm { xor edi, edi }
	__asm { L_00c2eba9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ebd9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ebd9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2ebdf }
	__asm { L_00c2ebd9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2ebdf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c2ec1e }
	__asm { add esi, 5 }
	__asm { je L_00c2ebf4 }
	__asm { add esi, -5 }
	__asm { jmp L_00c2ebf6 }
	__asm { L_00c2ebf4: }
	__asm { xor esi, esi }
	__asm { L_00c2ebf6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ec1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ec1e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c2ec1e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c2e8e2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c2ec2c: }
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
extern "C" char g_013107d4[];
extern "C" char g_013107d8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2ec40
extern "C" __declspec(naked) void asm_00c2ec40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62e1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c2efbc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c2ec72: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc36250 }
	__asm { push 0x13107a4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013107d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c2ecd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107d8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2eccd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107d4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c2ecde }
	__asm { L_00c2eccd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107d4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c2ecde }
	__asm { L_00c2ecd9: }
	__asm { mov eax, dword ptr [g_013107d4] }
	__asm { L_00c2ecde: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c2ed65 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2ed0b }
	__asm { add eax, -5 }
	__asm { jmp L_00c2ed0d }
	__asm { L_00c2ed0b: }
	__asm { xor eax, eax }
	__asm { L_00c2ed0d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2ed62 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2ed62 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2ed51 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2ed62 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2ed51: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2ed62: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c2ed65: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c2ee55 }
	__asm { L_00c2ed70: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c2ee55 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c2edf5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2ed98 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2ed9a }
	__asm { L_00c2ed98: }
	__asm { xor eax, eax }
	__asm { L_00c2ed9a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2edef }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c2edef }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2edde }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2edef }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2edde: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2edef: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2edf5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c2ee4a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c2ee0c }
	__asm { add ebx, -5 }
	__asm { jmp L_00c2ee0e }
	__asm { L_00c2ee0c: }
	__asm { xor ebx, ebx }
	__asm { L_00c2ee0e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ee44 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ee44 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2ee4a }
	__asm { L_00c2ee44: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2ee4a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c2ed70 }
	__asm { L_00c2ee55: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c2eeb9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2eeb9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2eeb9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2eeb9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c2eeaf }
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
	__asm { je L_00c2eead }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c2eeaf }
	__asm { L_00c2eead: }
	__asm { mov esi, edx }
	__asm { L_00c2eeaf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c2eeb9: }
	__asm { test esi, esi }
	__asm { je L_00c2ef20 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2eec9 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2eecb }
	__asm { L_00c2eec9: }
	__asm { xor eax, eax }
	__asm { L_00c2eecb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2ef20 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2ef20 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2ef0f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2ef20 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2ef0f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2ef20: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c2ef6f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c2ef37 }
	__asm { add edi, -5 }
	__asm { jmp L_00c2ef39 }
	__asm { L_00c2ef37: }
	__asm { xor edi, edi }
	__asm { L_00c2ef39: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ef69 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2ef69 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2ef6f }
	__asm { L_00c2ef69: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2ef6f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c2efae }
	__asm { add esi, 5 }
	__asm { je L_00c2ef84 }
	__asm { add esi, -5 }
	__asm { jmp L_00c2ef86 }
	__asm { L_00c2ef84: }
	__asm { xor esi, esi }
	__asm { L_00c2ef86: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2efae }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2efae }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c2efae: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c2ec72 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c2efbc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
