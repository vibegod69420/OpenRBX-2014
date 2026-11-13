// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130b104[];
extern "C" char g_0130b108[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aa02d0
extern "C" __declspec(naked) void asm_00aa02d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d51e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aa064c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00aa0302: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xaa1910 }
	__asm { push 0x130b0f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130b108] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00aa0369 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130b108], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aa035d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130b104], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00aa036e }
	__asm { L_00aa035d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130b104], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00aa036e }
	__asm { L_00aa0369: }
	__asm { mov eax, dword ptr [g_0130b104] }
	__asm { L_00aa036e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00aa03f5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa039b }
	__asm { add eax, -5 }
	__asm { jmp L_00aa039d }
	__asm { L_00aa039b: }
	__asm { xor eax, eax }
	__asm { L_00aa039d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa03f2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aa03f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa03e1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa03f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa03e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa03f2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00aa03f5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00aa04e5 }
	__asm { L_00aa0400: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00aa04e5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00aa0485 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa0428 }
	__asm { add eax, -5 }
	__asm { jmp L_00aa042a }
	__asm { L_00aa0428: }
	__asm { xor eax, eax }
	__asm { L_00aa042a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa047f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00aa047f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa046e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa047f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa046e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa047f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa0485: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00aa04da }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00aa049c }
	__asm { add ebx, -5 }
	__asm { jmp L_00aa049e }
	__asm { L_00aa049c: }
	__asm { xor ebx, ebx }
	__asm { L_00aa049e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa04d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa04d4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aa04da }
	__asm { L_00aa04d4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa04da: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00aa0400 }
	__asm { L_00aa04e5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00aa0549 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa0549 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa0549 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa0549 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00aa053f }
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
	__asm { je L_00aa053d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00aa053f }
	__asm { L_00aa053d: }
	__asm { mov esi, edx }
	__asm { L_00aa053f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00aa0549: }
	__asm { test esi, esi }
	__asm { je L_00aa05b0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa0559 }
	__asm { add eax, -5 }
	__asm { jmp L_00aa055b }
	__asm { L_00aa0559: }
	__asm { xor eax, eax }
	__asm { L_00aa055b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa05b0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aa05b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa059f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa05b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa059f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa05b0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00aa05ff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00aa05c7 }
	__asm { add edi, -5 }
	__asm { jmp L_00aa05c9 }
	__asm { L_00aa05c7: }
	__asm { xor edi, edi }
	__asm { L_00aa05c9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa05f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa05f9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aa05ff }
	__asm { L_00aa05f9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa05ff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aa063e }
	__asm { add esi, 5 }
	__asm { je L_00aa0614 }
	__asm { add esi, -5 }
	__asm { jmp L_00aa0616 }
	__asm { L_00aa0614: }
	__asm { xor esi, esi }
	__asm { L_00aa0616: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa063e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa063e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00aa063e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00aa0302 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00aa064c: }
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
extern "C" void fn_00aa16c0();
// FUNCTION: ROBLOXSTUDIO 0x00aa0950
extern "C" __declspec(naked) void asm_00aa0950()
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
	__asm { je L_00aa09b8 }
	__asm { test ebx, ebx }
	__asm { jne L_00aa09b8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa09a7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa09b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa09a7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa09b8: }
	__asm { push 0xaa1900 }
	__asm { push 0x130b0ec }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa16c0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00aa09f8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00aa0aad }
	__asm { L_00aa09f8: }
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
	__asm { je L_00aa0a67 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00aa0a67 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aa0a56 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa0a67 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00aa0a56: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa0a67: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aa0a7f }
	__asm { add esi, -5 }
	__asm { jmp L_00aa0a81 }
	__asm { L_00aa0a7f: }
	__asm { xor esi, esi }
	__asm { L_00aa0a81: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0aad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0aad }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aa0aad: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00aa0aea }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa0aea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa0aea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa0aea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa0aea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
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
extern "C" void fn_00aa1750();
// FUNCTION: ROBLOXSTUDIO 0x00aa0b00
extern "C" __declspec(naked) void asm_00aa0b00()
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
	__asm { je L_00aa0b68 }
	__asm { test ebx, ebx }
	__asm { jne L_00aa0b68 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa0b57 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa0b68 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa0b57: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa0b68: }
	__asm { push 0xaa1910 }
	__asm { push 0x130b0f4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa1750 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00aa0ba8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00aa0c5d }
	__asm { L_00aa0ba8: }
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
	__asm { je L_00aa0c17 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00aa0c17 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aa0c06 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa0c17 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00aa0c06: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa0c17: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aa0c2f }
	__asm { add esi, -5 }
	__asm { jmp L_00aa0c31 }
	__asm { L_00aa0c2f: }
	__asm { xor esi, esi }
	__asm { L_00aa0c31: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0c5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0c5d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aa0c5d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00aa0c9a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa0c9a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa0c9a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa0c9a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa0c9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00aa16c0();
// FUNCTION: ROBLOXSTUDIO 0x00aa0f50
extern "C" __declspec(naked) void asm_00aa0f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00aa0f88 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00aa0f88: }
	__asm { push 0xaa1900 }
	__asm { push 0x130b0ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa16c0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00aa0fc4 }
	__asm { push ebx }
	__asm { jmp L_00aa0fc8 }
	__asm { L_00aa0fc4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00aa0fc8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00aa100a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa100a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa100a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa100a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa100a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aa104d }
	__asm { add esi, 5 }
	__asm { je L_00aa101f }
	__asm { add esi, -5 }
	__asm { jmp L_00aa1021 }
	__asm { L_00aa101f: }
	__asm { xor esi, esi }
	__asm { L_00aa1021: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa104d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa104d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aa104d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00aa1750();
// FUNCTION: ROBLOXSTUDIO 0x00aa1070
extern "C" __declspec(naked) void asm_00aa1070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00aa10a8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00aa10a8: }
	__asm { push 0xaa1910 }
	__asm { push 0x130b0f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa1750 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00aa10e4 }
	__asm { push ebx }
	__asm { jmp L_00aa10e8 }
	__asm { L_00aa10e4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00aa10e8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00aa112a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa112a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa112a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa112a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa112a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aa116d }
	__asm { add esi, 5 }
	__asm { je L_00aa113f }
	__asm { add esi, -5 }
	__asm { jmp L_00aa1141 }
	__asm { L_00aa113f: }
	__asm { xor esi, esi }
	__asm { L_00aa1141: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa116d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa116d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aa116d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
