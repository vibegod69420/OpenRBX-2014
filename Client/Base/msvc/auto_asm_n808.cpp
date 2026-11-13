// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0097e7e0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009777d0
extern "C" __declspec(naked) void asm_009777d0()
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
	__asm { je L_0097786f }
	__asm { push 0x97e920 }
	__asm { push 0x1301bc0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0097e7e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00977835 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00977835: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0097786f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0097786f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0097786f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0097786f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0097786f: }
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
extern "C" char g_012faeac[];
extern "C" char g_012faeb0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009779a0
extern "C" __declspec(naked) void asm_009779a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b63e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00977d1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009779d2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x883080 }
	__asm { push 0x12faea4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012faeb0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00977a39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012faeb0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00977a2d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012faeac], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00977a3e }
	__asm { L_00977a2d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012faeac], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00977a3e }
	__asm { L_00977a39: }
	__asm { mov eax, dword ptr [g_012faeac] }
	__asm { L_00977a3e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00977ac5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00977a6b }
	__asm { add eax, -5 }
	__asm { jmp L_00977a6d }
	__asm { L_00977a6b: }
	__asm { xor eax, eax }
	__asm { L_00977a6d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00977ac2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00977ac2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00977ab1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00977ac2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00977ab1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00977ac2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00977ac5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00977bb5 }
	__asm { L_00977ad0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00977bb5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00977b55 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00977af8 }
	__asm { add eax, -5 }
	__asm { jmp L_00977afa }
	__asm { L_00977af8: }
	__asm { xor eax, eax }
	__asm { L_00977afa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00977b4f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00977b4f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00977b3e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00977b4f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00977b3e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00977b4f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00977b55: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00977baa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00977b6c }
	__asm { add ebx, -5 }
	__asm { jmp L_00977b6e }
	__asm { L_00977b6c: }
	__asm { xor ebx, ebx }
	__asm { L_00977b6e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977ba4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977ba4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00977baa }
	__asm { L_00977ba4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00977baa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00977ad0 }
	__asm { L_00977bb5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00977c19 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00977c19 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00977c19 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00977c19 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00977c0f }
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
	__asm { je L_00977c0d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00977c0f }
	__asm { L_00977c0d: }
	__asm { mov esi, edx }
	__asm { L_00977c0f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00977c19: }
	__asm { test esi, esi }
	__asm { je L_00977c80 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00977c29 }
	__asm { add eax, -5 }
	__asm { jmp L_00977c2b }
	__asm { L_00977c29: }
	__asm { xor eax, eax }
	__asm { L_00977c2b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00977c80 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00977c80 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00977c6f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00977c80 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00977c6f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00977c80: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00977ccf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00977c97 }
	__asm { add edi, -5 }
	__asm { jmp L_00977c99 }
	__asm { L_00977c97: }
	__asm { xor edi, edi }
	__asm { L_00977c99: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977cc9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977cc9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00977ccf }
	__asm { L_00977cc9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00977ccf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00977d0e }
	__asm { add esi, 5 }
	__asm { je L_00977ce4 }
	__asm { add esi, -5 }
	__asm { jmp L_00977ce6 }
	__asm { L_00977ce4: }
	__asm { xor esi, esi }
	__asm { L_00977ce6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977d0e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977d0e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00977d0e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009779d2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00977d1c: }
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
extern "C" char g_01301b88[];
extern "C" char g_01301b8c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00977d30
extern "C" __declspec(naked) void asm_00977d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b66e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009780ac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00977d62: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x97e870 }
	__asm { push 0x1301b58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301b8c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00977dc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301b8c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00977dbd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301b88], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00977dce }
	__asm { L_00977dbd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301b88], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00977dce }
	__asm { L_00977dc9: }
	__asm { mov eax, dword ptr [g_01301b88] }
	__asm { L_00977dce: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00977e55 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00977dfb }
	__asm { add eax, -5 }
	__asm { jmp L_00977dfd }
	__asm { L_00977dfb: }
	__asm { xor eax, eax }
	__asm { L_00977dfd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00977e52 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00977e52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00977e41 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00977e52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00977e41: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00977e52: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00977e55: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00977f45 }
	__asm { L_00977e60: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00977f45 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00977ee5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00977e88 }
	__asm { add eax, -5 }
	__asm { jmp L_00977e8a }
	__asm { L_00977e88: }
	__asm { xor eax, eax }
	__asm { L_00977e8a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00977edf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00977edf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00977ece }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00977edf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00977ece: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00977edf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00977ee5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00977f3a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00977efc }
	__asm { add ebx, -5 }
	__asm { jmp L_00977efe }
	__asm { L_00977efc: }
	__asm { xor ebx, ebx }
	__asm { L_00977efe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977f34 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00977f34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00977f3a }
	__asm { L_00977f34: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00977f3a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00977e60 }
	__asm { L_00977f45: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00977fa9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00977fa9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00977fa9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00977fa9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00977f9f }
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
	__asm { je L_00977f9d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00977f9f }
	__asm { L_00977f9d: }
	__asm { mov esi, edx }
	__asm { L_00977f9f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00977fa9: }
	__asm { test esi, esi }
	__asm { je L_00978010 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00977fb9 }
	__asm { add eax, -5 }
	__asm { jmp L_00977fbb }
	__asm { L_00977fb9: }
	__asm { xor eax, eax }
	__asm { L_00977fbb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978010 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978010 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00977fff }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978010 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00977fff: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978010: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0097805f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00978027 }
	__asm { add edi, -5 }
	__asm { jmp L_00978029 }
	__asm { L_00978027: }
	__asm { xor edi, edi }
	__asm { L_00978029: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978059 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978059 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0097805f }
	__asm { L_00978059: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0097805f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0097809e }
	__asm { add esi, 5 }
	__asm { je L_00978074 }
	__asm { add esi, -5 }
	__asm { jmp L_00978076 }
	__asm { L_00978074: }
	__asm { xor esi, esi }
	__asm { L_00978076: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097809e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097809e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0097809e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00977d62 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009780ac: }
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
extern "C" char g_01301ba0[];
extern "C" char g_01301ba4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009780c0
extern "C" __declspec(naked) void asm_009780c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b69e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0097843c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009780f2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x97e880 }
	__asm { push 0x1301b70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301ba4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00978159 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301ba4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0097814d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301ba0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0097815e }
	__asm { L_0097814d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301ba0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0097815e }
	__asm { L_00978159: }
	__asm { mov eax, dword ptr [g_01301ba0] }
	__asm { L_0097815e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009781e5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0097818b }
	__asm { add eax, -5 }
	__asm { jmp L_0097818d }
	__asm { L_0097818b: }
	__asm { xor eax, eax }
	__asm { L_0097818d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009781e2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009781e2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009781d1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009781e2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009781d1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009781e2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009781e5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009782d5 }
	__asm { L_009781f0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009782d5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00978275 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978218 }
	__asm { add eax, -5 }
	__asm { jmp L_0097821a }
	__asm { L_00978218: }
	__asm { xor eax, eax }
	__asm { L_0097821a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0097826f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0097826f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097825e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097826f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097825e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097826f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978275: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009782ca }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0097828c }
	__asm { add ebx, -5 }
	__asm { jmp L_0097828e }
	__asm { L_0097828c: }
	__asm { xor ebx, ebx }
	__asm { L_0097828e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009782c4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009782c4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009782ca }
	__asm { L_009782c4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009782ca: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009781f0 }
	__asm { L_009782d5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00978339 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00978339 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00978339 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00978339 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0097832f }
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
	__asm { je L_0097832d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0097832f }
	__asm { L_0097832d: }
	__asm { mov esi, edx }
	__asm { L_0097832f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00978339: }
	__asm { test esi, esi }
	__asm { je L_009783a0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978349 }
	__asm { add eax, -5 }
	__asm { jmp L_0097834b }
	__asm { L_00978349: }
	__asm { xor eax, eax }
	__asm { L_0097834b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009783a0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009783a0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097838f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009783a0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097838f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009783a0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009783ef }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009783b7 }
	__asm { add edi, -5 }
	__asm { jmp L_009783b9 }
	__asm { L_009783b7: }
	__asm { xor edi, edi }
	__asm { L_009783b9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009783e9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009783e9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009783ef }
	__asm { L_009783e9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009783ef: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0097842e }
	__asm { add esi, 5 }
	__asm { je L_00978404 }
	__asm { add esi, -5 }
	__asm { jmp L_00978406 }
	__asm { L_00978404: }
	__asm { xor esi, esi }
	__asm { L_00978406: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097842e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097842e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0097842e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009780f2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0097843c: }
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
extern "C" char g_01301b98[];
extern "C" char g_01301b9c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00978450
extern "C" __declspec(naked) void asm_00978450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b6ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009787cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00978482: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x97e890 }
	__asm { push 0x1301b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301b9c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009784e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301b9c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009784dd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301b98], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009784ee }
	__asm { L_009784dd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301b98], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009784ee }
	__asm { L_009784e9: }
	__asm { mov eax, dword ptr [g_01301b98] }
	__asm { L_009784ee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00978575 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0097851b }
	__asm { add eax, -5 }
	__asm { jmp L_0097851d }
	__asm { L_0097851b: }
	__asm { xor eax, eax }
	__asm { L_0097851d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978572 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978572 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00978561 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978572 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00978561: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978572: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00978575: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00978665 }
	__asm { L_00978580: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00978665 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00978605 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009785a8 }
	__asm { add eax, -5 }
	__asm { jmp L_009785aa }
	__asm { L_009785a8: }
	__asm { xor eax, eax }
	__asm { L_009785aa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009785ff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009785ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009785ee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009785ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009785ee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009785ff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978605: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0097865a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0097861c }
	__asm { add ebx, -5 }
	__asm { jmp L_0097861e }
	__asm { L_0097861c: }
	__asm { xor ebx, ebx }
	__asm { L_0097861e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978654 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978654 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0097865a }
	__asm { L_00978654: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0097865a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00978580 }
	__asm { L_00978665: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009786c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009786c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009786c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009786c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009786bf }
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
	__asm { je L_009786bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009786bf }
	__asm { L_009786bd: }
	__asm { mov esi, edx }
	__asm { L_009786bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009786c9: }
	__asm { test esi, esi }
	__asm { je L_00978730 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009786d9 }
	__asm { add eax, -5 }
	__asm { jmp L_009786db }
	__asm { L_009786d9: }
	__asm { xor eax, eax }
	__asm { L_009786db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978730 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978730 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097871f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978730 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097871f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978730: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0097877f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00978747 }
	__asm { add edi, -5 }
	__asm { jmp L_00978749 }
	__asm { L_00978747: }
	__asm { xor edi, edi }
	__asm { L_00978749: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978779 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978779 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0097877f }
	__asm { L_00978779: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0097877f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009787be }
	__asm { add esi, 5 }
	__asm { je L_00978794 }
	__asm { add esi, -5 }
	__asm { jmp L_00978796 }
	__asm { L_00978794: }
	__asm { xor esi, esi }
	__asm { L_00978796: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009787be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009787be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009787be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00978482 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009787cc: }
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
extern "C" char g_01301b80[];
extern "C" char g_01301b84[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009787e0
extern "C" __declspec(naked) void asm_009787e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b6fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00978b5c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00978812: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x97e8a0 }
	__asm { push 0x1301b50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301b84] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00978879 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301b84], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0097886d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301b80], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0097887e }
	__asm { L_0097886d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301b80], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0097887e }
	__asm { L_00978879: }
	__asm { mov eax, dword ptr [g_01301b80] }
	__asm { L_0097887e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00978905 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009788ab }
	__asm { add eax, -5 }
	__asm { jmp L_009788ad }
	__asm { L_009788ab: }
	__asm { xor eax, eax }
	__asm { L_009788ad: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978902 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978902 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009788f1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978902 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009788f1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978902: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00978905: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009789f5 }
	__asm { L_00978910: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009789f5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00978995 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978938 }
	__asm { add eax, -5 }
	__asm { jmp L_0097893a }
	__asm { L_00978938: }
	__asm { xor eax, eax }
	__asm { L_0097893a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0097898f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0097898f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097897e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097898f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097897e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097898f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978995: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009789ea }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009789ac }
	__asm { add ebx, -5 }
	__asm { jmp L_009789ae }
	__asm { L_009789ac: }
	__asm { xor ebx, ebx }
	__asm { L_009789ae: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009789e4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009789e4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009789ea }
	__asm { L_009789e4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009789ea: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00978910 }
	__asm { L_009789f5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00978a59 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00978a59 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00978a59 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00978a59 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00978a4f }
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
	__asm { je L_00978a4d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00978a4f }
	__asm { L_00978a4d: }
	__asm { mov esi, edx }
	__asm { L_00978a4f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00978a59: }
	__asm { test esi, esi }
	__asm { je L_00978ac0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978a69 }
	__asm { add eax, -5 }
	__asm { jmp L_00978a6b }
	__asm { L_00978a69: }
	__asm { xor eax, eax }
	__asm { L_00978a6b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978ac0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978ac0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00978aaf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978ac0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00978aaf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978ac0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00978b0f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00978ad7 }
	__asm { add edi, -5 }
	__asm { jmp L_00978ad9 }
	__asm { L_00978ad7: }
	__asm { xor edi, edi }
	__asm { L_00978ad9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978b09 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978b09 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00978b0f }
	__asm { L_00978b09: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978b0f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00978b4e }
	__asm { add esi, 5 }
	__asm { je L_00978b24 }
	__asm { add esi, -5 }
	__asm { jmp L_00978b26 }
	__asm { L_00978b24: }
	__asm { xor esi, esi }
	__asm { L_00978b26: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978b4e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978b4e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00978b4e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00978812 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00978b5c: }
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
extern "C" char g_01301b78[];
extern "C" char g_01301b7c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00978b70
extern "C" __declspec(naked) void asm_00978b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b72e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00978eec }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00978ba2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x97e8b0 }
	__asm { push 0x1301b48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301b7c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00978c09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301b7c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00978bfd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301b78], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00978c0e }
	__asm { L_00978bfd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301b78], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00978c0e }
	__asm { L_00978c09: }
	__asm { mov eax, dword ptr [g_01301b78] }
	__asm { L_00978c0e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00978c95 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978c3b }
	__asm { add eax, -5 }
	__asm { jmp L_00978c3d }
	__asm { L_00978c3b: }
	__asm { xor eax, eax }
	__asm { L_00978c3d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978c92 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978c92 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00978c81 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978c92 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00978c81: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978c92: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00978c95: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00978d85 }
	__asm { L_00978ca0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00978d85 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00978d25 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978cc8 }
	__asm { add eax, -5 }
	__asm { jmp L_00978cca }
	__asm { L_00978cc8: }
	__asm { xor eax, eax }
	__asm { L_00978cca: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978d1f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00978d1f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00978d0e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978d1f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00978d0e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978d1f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978d25: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00978d7a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00978d3c }
	__asm { add ebx, -5 }
	__asm { jmp L_00978d3e }
	__asm { L_00978d3c: }
	__asm { xor ebx, ebx }
	__asm { L_00978d3e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978d74 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978d74 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00978d7a }
	__asm { L_00978d74: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978d7a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00978ca0 }
	__asm { L_00978d85: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00978de9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00978de9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00978de9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00978de9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00978ddf }
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
	__asm { je L_00978ddd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00978ddf }
	__asm { L_00978ddd: }
	__asm { mov esi, edx }
	__asm { L_00978ddf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00978de9: }
	__asm { test esi, esi }
	__asm { je L_00978e50 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978df9 }
	__asm { add eax, -5 }
	__asm { jmp L_00978dfb }
	__asm { L_00978df9: }
	__asm { xor eax, eax }
	__asm { L_00978dfb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00978e50 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00978e50 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00978e3f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00978e50 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00978e3f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00978e50: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00978e9f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00978e67 }
	__asm { add edi, -5 }
	__asm { jmp L_00978e69 }
	__asm { L_00978e67: }
	__asm { xor edi, edi }
	__asm { L_00978e69: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978e99 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978e99 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00978e9f }
	__asm { L_00978e99: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00978e9f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00978ede }
	__asm { add esi, 5 }
	__asm { je L_00978eb4 }
	__asm { add esi, -5 }
	__asm { jmp L_00978eb6 }
	__asm { L_00978eb4: }
	__asm { xor esi, esi }
	__asm { L_00978eb6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978ede }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00978ede }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00978ede: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00978ba2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00978eec: }
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
extern "C" char g_01301b90[];
extern "C" char g_01301b94[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00978f10
extern "C" __declspec(naked) void asm_00978f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b75e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0097928c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00978f42: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x97e8c0 }
	__asm { push 0x1301b60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301b94] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00978fa9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301b94], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00978f9d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301b90], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00978fae }
	__asm { L_00978f9d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301b90], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00978fae }
	__asm { L_00978fa9: }
	__asm { mov eax, dword ptr [g_01301b90] }
	__asm { L_00978fae: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00979035 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00978fdb }
	__asm { add eax, -5 }
	__asm { jmp L_00978fdd }
	__asm { L_00978fdb: }
	__asm { xor eax, eax }
	__asm { L_00978fdd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00979032 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00979032 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00979021 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00979032 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00979021: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00979032: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00979035: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00979125 }
	__asm { L_00979040: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00979125 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009790c5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00979068 }
	__asm { add eax, -5 }
	__asm { jmp L_0097906a }
	__asm { L_00979068: }
	__asm { xor eax, eax }
	__asm { L_0097906a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009790bf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009790bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009790ae }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009790bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009790ae: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009790bf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009790c5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0097911a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009790dc }
	__asm { add ebx, -5 }
	__asm { jmp L_009790de }
	__asm { L_009790dc: }
	__asm { xor ebx, ebx }
	__asm { L_009790de: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00979114 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00979114 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0097911a }
	__asm { L_00979114: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0097911a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00979040 }
	__asm { L_00979125: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00979189 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00979189 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00979189 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00979189 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0097917f }
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
	__asm { je L_0097917d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0097917f }
	__asm { L_0097917d: }
	__asm { mov esi, edx }
	__asm { L_0097917f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00979189: }
	__asm { test esi, esi }
	__asm { je L_009791f0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00979199 }
	__asm { add eax, -5 }
	__asm { jmp L_0097919b }
	__asm { L_00979199: }
	__asm { xor eax, eax }
	__asm { L_0097919b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009791f0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009791f0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009791df }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009791f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009791df: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009791f0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0097923f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00979207 }
	__asm { add edi, -5 }
	__asm { jmp L_00979209 }
	__asm { L_00979207: }
	__asm { xor edi, edi }
	__asm { L_00979209: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00979239 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00979239 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0097923f }
	__asm { L_00979239: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0097923f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0097927e }
	__asm { add esi, 5 }
	__asm { je L_00979254 }
	__asm { add esi, -5 }
	__asm { jmp L_00979256 }
	__asm { L_00979254: }
	__asm { xor esi, esi }
	__asm { L_00979256: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097927e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097927e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0097927e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00978f42 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0097928c: }
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
extern "C" char g_01320154[];
extern "C" char g_01320158[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009792a0
extern "C" __declspec(naked) void asm_009792a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b78e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0097961c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009792d2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x573dc0 }
	__asm { push 0x131ca78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01320154] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00979339 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320154], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0097932d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01320158], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0097933e }
	__asm { L_0097932d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01320158], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0097933e }
	__asm { L_00979339: }
	__asm { mov eax, dword ptr [g_01320158] }
	__asm { L_0097933e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009793c5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0097936b }
	__asm { add eax, -5 }
	__asm { jmp L_0097936d }
	__asm { L_0097936b: }
	__asm { xor eax, eax }
	__asm { L_0097936d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009793c2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009793c2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009793b1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009793c2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009793b1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009793c2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009793c5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009794b5 }
	__asm { L_009793d0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009794b5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00979455 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009793f8 }
	__asm { add eax, -5 }
	__asm { jmp L_009793fa }
	__asm { L_009793f8: }
	__asm { xor eax, eax }
	__asm { L_009793fa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0097944f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0097944f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097943e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097944f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097943e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097944f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00979455: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009794aa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0097946c }
	__asm { add ebx, -5 }
	__asm { jmp L_0097946e }
	__asm { L_0097946c: }
	__asm { xor ebx, ebx }
	__asm { L_0097946e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009794a4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009794a4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009794aa }
	__asm { L_009794a4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009794aa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009793d0 }
	__asm { L_009794b5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00979519 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00979519 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00979519 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00979519 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0097950f }
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
	__asm { je L_0097950d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0097950f }
	__asm { L_0097950d: }
	__asm { mov esi, edx }
	__asm { L_0097950f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00979519: }
	__asm { test esi, esi }
	__asm { je L_00979580 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00979529 }
	__asm { add eax, -5 }
	__asm { jmp L_0097952b }
	__asm { L_00979529: }
	__asm { xor eax, eax }
	__asm { L_0097952b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00979580 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00979580 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097956f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00979580 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097956f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00979580: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009795cf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00979597 }
	__asm { add edi, -5 }
	__asm { jmp L_00979599 }
	__asm { L_00979597: }
	__asm { xor edi, edi }
	__asm { L_00979599: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009795c9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009795c9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009795cf }
	__asm { L_009795c9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009795cf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0097960e }
	__asm { add esi, 5 }
	__asm { je L_009795e4 }
	__asm { add esi, -5 }
	__asm { jmp L_009795e6 }
	__asm { L_009795e4: }
	__asm { xor esi, esi }
	__asm { L_009795e6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097960e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097960e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0097960e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009792d2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0097961c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
