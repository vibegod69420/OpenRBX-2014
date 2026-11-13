// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_009f0c40();
// FUNCTION: ROBLOXSTUDIO 0x009ea360
extern "C" __declspec(naked) void asm_009ea360()
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
	__asm { je L_009ea3ff }
	__asm { push 0x9f0ed0 }
	__asm { push 0x1306118 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009f0c40 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ea3c5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009ea3c5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ea3ff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ea3ff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ea3ff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ea3ff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ea3ff: }
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
extern "C" char g_013060f8[];
extern "C" char g_013060fc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009eaaa0
extern "C" __declspec(naked) void asm_009eaaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4245e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009eae1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009eaad2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9f0e90 }
	__asm { push 0x13060d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013060fc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009eab39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013060fc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009eab2d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013060f8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009eab3e }
	__asm { L_009eab2d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013060f8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009eab3e }
	__asm { L_009eab39: }
	__asm { mov eax, dword ptr [g_013060f8] }
	__asm { L_009eab3e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009eabc5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eab6b }
	__asm { add eax, -5 }
	__asm { jmp L_009eab6d }
	__asm { L_009eab6b: }
	__asm { xor eax, eax }
	__asm { L_009eab6d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eabc2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009eabc2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eabb1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eabc2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eabb1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eabc2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009eabc5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009eacb5 }
	__asm { L_009eabd0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009eacb5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009eac55 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eabf8 }
	__asm { add eax, -5 }
	__asm { jmp L_009eabfa }
	__asm { L_009eabf8: }
	__asm { xor eax, eax }
	__asm { L_009eabfa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eac4f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009eac4f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eac3e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eac4f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eac3e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eac4f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eac55: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009eacaa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009eac6c }
	__asm { add ebx, -5 }
	__asm { jmp L_009eac6e }
	__asm { L_009eac6c: }
	__asm { xor ebx, ebx }
	__asm { L_009eac6e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eaca4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eaca4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009eacaa }
	__asm { L_009eaca4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eacaa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009eabd0 }
	__asm { L_009eacb5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009ead19 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ead19 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ead19 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ead19 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009ead0f }
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
	__asm { je L_009ead0d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009ead0f }
	__asm { L_009ead0d: }
	__asm { mov esi, edx }
	__asm { L_009ead0f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009ead19: }
	__asm { test esi, esi }
	__asm { je L_009ead80 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ead29 }
	__asm { add eax, -5 }
	__asm { jmp L_009ead2b }
	__asm { L_009ead29: }
	__asm { xor eax, eax }
	__asm { L_009ead2b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ead80 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009ead80 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ead6f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ead80 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ead6f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ead80: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009eadcf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009ead97 }
	__asm { add edi, -5 }
	__asm { jmp L_009ead99 }
	__asm { L_009ead97: }
	__asm { xor edi, edi }
	__asm { L_009ead99: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eadc9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eadc9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009eadcf }
	__asm { L_009eadc9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eadcf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009eae0e }
	__asm { add esi, 5 }
	__asm { je L_009eade4 }
	__asm { add esi, -5 }
	__asm { jmp L_009eade6 }
	__asm { L_009eade4: }
	__asm { xor esi, esi }
	__asm { L_009eade6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eae0e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eae0e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009eae0e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009eaad2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009eae1c: }
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
extern "C" char g_013060f0[];
extern "C" char g_013060f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009eae30
extern "C" __declspec(naked) void asm_009eae30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4248e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009eb1ac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009eae62: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9f0ea0 }
	__asm { push 0x13060d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013060f4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009eaec9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013060f4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009eaebd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013060f0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009eaece }
	__asm { L_009eaebd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013060f0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009eaece }
	__asm { L_009eaec9: }
	__asm { mov eax, dword ptr [g_013060f0] }
	__asm { L_009eaece: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009eaf55 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eaefb }
	__asm { add eax, -5 }
	__asm { jmp L_009eaefd }
	__asm { L_009eaefb: }
	__asm { xor eax, eax }
	__asm { L_009eaefd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eaf52 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009eaf52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eaf41 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eaf52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eaf41: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eaf52: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009eaf55: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009eb045 }
	__asm { L_009eaf60: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009eb045 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009eafe5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eaf88 }
	__asm { add eax, -5 }
	__asm { jmp L_009eaf8a }
	__asm { L_009eaf88: }
	__asm { xor eax, eax }
	__asm { L_009eaf8a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eafdf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009eafdf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eafce }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eafdf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eafce: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eafdf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eafe5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009eb03a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009eaffc }
	__asm { add ebx, -5 }
	__asm { jmp L_009eaffe }
	__asm { L_009eaffc: }
	__asm { xor ebx, ebx }
	__asm { L_009eaffe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb034 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb034 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009eb03a }
	__asm { L_009eb034: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eb03a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009eaf60 }
	__asm { L_009eb045: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009eb0a9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009eb0a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009eb0a9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009eb0a9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009eb09f }
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
	__asm { je L_009eb09d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009eb09f }
	__asm { L_009eb09d: }
	__asm { mov esi, edx }
	__asm { L_009eb09f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009eb0a9: }
	__asm { test esi, esi }
	__asm { je L_009eb110 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eb0b9 }
	__asm { add eax, -5 }
	__asm { jmp L_009eb0bb }
	__asm { L_009eb0b9: }
	__asm { xor eax, eax }
	__asm { L_009eb0bb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eb110 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009eb110 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eb0ff }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eb110 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eb0ff: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eb110: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009eb15f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009eb127 }
	__asm { add edi, -5 }
	__asm { jmp L_009eb129 }
	__asm { L_009eb127: }
	__asm { xor edi, edi }
	__asm { L_009eb129: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb159 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb159 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009eb15f }
	__asm { L_009eb159: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eb15f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009eb19e }
	__asm { add esi, 5 }
	__asm { je L_009eb174 }
	__asm { add esi, -5 }
	__asm { jmp L_009eb176 }
	__asm { L_009eb174: }
	__asm { xor esi, esi }
	__asm { L_009eb176: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb19e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb19e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009eb19e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009eae62 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009eb1ac: }
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
extern "C" char g_01306108[];
extern "C" char g_0130610c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009eb1c0
extern "C" __declspec(naked) void asm_009eb1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd424be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009eb53c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009eb1f2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9f0eb0 }
	__asm { push 0x13060e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130610c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009eb259 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130610c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009eb24d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01306108], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009eb25e }
	__asm { L_009eb24d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01306108], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009eb25e }
	__asm { L_009eb259: }
	__asm { mov eax, dword ptr [g_01306108] }
	__asm { L_009eb25e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009eb2e5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eb28b }
	__asm { add eax, -5 }
	__asm { jmp L_009eb28d }
	__asm { L_009eb28b: }
	__asm { xor eax, eax }
	__asm { L_009eb28d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eb2e2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009eb2e2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eb2d1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eb2e2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eb2d1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eb2e2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009eb2e5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009eb3d5 }
	__asm { L_009eb2f0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009eb3d5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009eb375 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eb318 }
	__asm { add eax, -5 }
	__asm { jmp L_009eb31a }
	__asm { L_009eb318: }
	__asm { xor eax, eax }
	__asm { L_009eb31a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eb36f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009eb36f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eb35e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eb36f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eb35e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eb36f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eb375: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009eb3ca }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009eb38c }
	__asm { add ebx, -5 }
	__asm { jmp L_009eb38e }
	__asm { L_009eb38c: }
	__asm { xor ebx, ebx }
	__asm { L_009eb38e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb3c4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb3c4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009eb3ca }
	__asm { L_009eb3c4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eb3ca: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009eb2f0 }
	__asm { L_009eb3d5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009eb439 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009eb439 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009eb439 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009eb439 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009eb42f }
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
	__asm { je L_009eb42d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009eb42f }
	__asm { L_009eb42d: }
	__asm { mov esi, edx }
	__asm { L_009eb42f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009eb439: }
	__asm { test esi, esi }
	__asm { je L_009eb4a0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009eb449 }
	__asm { add eax, -5 }
	__asm { jmp L_009eb44b }
	__asm { L_009eb449: }
	__asm { xor eax, eax }
	__asm { L_009eb44b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009eb4a0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009eb4a0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009eb48f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009eb4a0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009eb48f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009eb4a0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009eb4ef }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009eb4b7 }
	__asm { add edi, -5 }
	__asm { jmp L_009eb4b9 }
	__asm { L_009eb4b7: }
	__asm { xor edi, edi }
	__asm { L_009eb4b9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb4e9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb4e9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009eb4ef }
	__asm { L_009eb4e9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009eb4ef: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009eb52e }
	__asm { add esi, 5 }
	__asm { je L_009eb504 }
	__asm { add esi, -5 }
	__asm { jmp L_009eb506 }
	__asm { L_009eb504: }
	__asm { xor esi, esi }
	__asm { L_009eb506: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb52e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009eb52e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009eb52e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009eb1f2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009eb53c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012e0574[];
extern "C" char g_012e4c34[];
extern "C" char g_012e4cac[];
extern "C" void fn_007706e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fcc40
extern "C" __declspec(naked) void asm_009fcc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4323e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9a63c }
	__asm { mov dword ptr [esi + 4], 0xe9a6b4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9a6bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a6c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007706e0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4cac] }
	__asm { mov dword ptr [esi], 0xe9b1d4 }
	__asm { mov dword ptr [esi + 4], 0xe9b254 }
	__asm { mov dword ptr [esi + 0x18], 0xe9b25c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9b268 }
	__asm { mov dword ptr [esi + 0x64], 0xe9b278 }
	__asm { mov eax, dword ptr [g_012e0574] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009fcd10 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0574], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9b1c0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0448 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009fcd10: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e0448 }
	__asm { inc dword ptr [g_012e4c34] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x009fcd30
extern "C" __declspec(naked) void asm_009fcd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0fa8 }
	__asm { mov edi, ecx }
	__asm { push 0xe9b384 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59d48 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe4de68 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe3d9d0 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9b3b4 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9b3bc }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe96010 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe96018 }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_009ff7a0();
// FUNCTION: ROBLOXSTUDIO 0x009ff710
extern "C" __declspec(naked) void asm_009ff710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009ff7a0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ff78b }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ff78b }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ff78b }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ff78b }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ff78b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_009ff8a0();
// FUNCTION: ROBLOXSTUDIO 0x009ff800
extern "C" __declspec(naked) void asm_009ff800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ff8a0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ff884 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ff884 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ff884 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ff884 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ff884: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_009ffb70();
// FUNCTION: ROBLOXSTUDIO 0x009ffad0
extern "C" __declspec(naked) void asm_009ffad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ffb70 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_009ffb52 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ffb52 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ffb52 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ffb52 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ffb52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00f10d9c[];
extern "C" char g_00f10da0[];
extern "C" void fn_004037f0();
extern "C" void fn_0040f890();
extern "C" void fn_0042e3d0();
extern "C" void fn_00a26bd0();
extern "C" void fn_00a26e30();
extern "C" void fn_00a2bbb0();
extern "C" void fn_00a2f1b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a2a250
extern "C" __declspec(naked) void asm_00a2a250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46c71 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x50 }
	__asm { mov edi, ecx }
	__asm { mov ecx, esp }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { call fn_00a2bbb0 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { call fn_00a2f1b0 }
	__asm { mov esi, eax }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 0x58 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a2a2b5 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00a26e30 }
	__asm { jmp L_00a2a2b7 }
	__asm { L_00a2a2b5: }
	__asm { xor eax, eax }
	__asm { L_00a2a2b7: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a26bd0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_00a2a2d4 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2a2d4: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_00a2a2f7 }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2a2f7: }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0x34], 0xf }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { mov edx, dword ptr [ebx + 0x40] }
	__asm { test ecx, ecx }
	__asm { setne ah }
	__asm { test edx, edx }
	__asm { setne al }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov byte ptr [ebp + 0xb], ah }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { test ah, ah }
	__asm { je L_00a2a34a }
	__asm { inc ecx }
	__asm { jmp L_00a2a34c }
	__asm { L_00a2a34a: }
	__asm { xor ecx, ecx }
	__asm { L_00a2a34c: }
	__asm { test al, al }
	__asm { je L_00a2a353 }
	__asm { inc edx }
	__asm { jmp L_00a2a355 }
	__asm { L_00a2a353: }
	__asm { xor edx, edx }
	__asm { L_00a2a355: }
	__asm { add edx, 0xa }
	__asm { add edx, ecx }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { mov dword ptr [ebp - 0x10], 0x10 }
	__asm { cmovne ecx, dword ptr [ebp - 0x10] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 0xb], al }
	__asm { mov dword ptr [ebp - 0x10], 8 }
	__asm { cmovne eax, dword ptr [ebp - 0x10] }
	__asm { add ecx, eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp ecx, dword ptr [g_00f10d9c] }
	__asm { mov dword ptr [ebp - 0x10], 4 }
	__asm { cmove eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [g_00f10da0] }
	__asm { mov dword ptr [ebp - 0x14], 2 }
	__asm { cmove eax, dword ptr [ebp - 0x14] }
	__asm { add dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp eax, edx }
	__asm { ja L_00a2a3e2 }
	__asm { cmp dword ptr [edi + 0x1c], edx }
	__asm { je L_00a2a3e2 }
	__asm { push 1 }
	__asm { push edx }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_00a2a3e2 }
	__asm { cmp dword ptr [edi + 0x1c], 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { jb L_00a2a3db }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { jmp L_00a2a3de }
	__asm { L_00a2a3db: }
	__asm { lea eax, [edi + 8] }
	__asm { L_00a2a3de: }
	__asm { mov byte ptr [eax + ecx], 0 }
	__asm { L_00a2a3e2: }
	__asm { push 0x1f }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { push -0x75 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { push 8 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea ecx, [edi + 8] }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { movzx eax, byte ptr [ebx + 0x48] }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { mov ecx, dword ptr [ebx + 0x48] }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { shrd ecx, eax, 8 }
	__asm { sar eax, 8 }
	__asm { movzx eax, cl }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { mov ecx, dword ptr [ebx + 0x48] }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { shrd ecx, eax, 0x10 }
	__asm { sar eax, 0x10 }
	__asm { movzx eax, cl }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { mov ecx, dword ptr [ebx + 0x48] }
	__asm { mov eax, dword ptr [ebx + 0x4c] }
	__asm { shrd ecx, eax, 0x18 }
	__asm { sar eax, 0x18 }
	__asm { movzx eax, cl }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { lea ecx, [edi + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { push -1 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { cmp byte ptr [ebp + 0xb], 0 }
	__asm { je L_00a2a4ae }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0040f890 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { L_00a2a4ae: }
	__asm { cmp byte ptr [ebp + 0xf], 0 }
	__asm { je L_00a2a4d0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0040f890 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042e3d0 }
	__asm { L_00a2a4d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00a2bde0();
extern "C" void fn_00a2be60();
// FUNCTION: ROBLOXSTUDIO 0x00a2bfc0
extern "C" __declspec(naked) void asm_00a2bfc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xea6454 }
	__asm { mov dword ptr [esi + 0xc], 0xea6460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xea6468 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xea6440 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00a2c011 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2c011 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00a2c011: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_00a2bde0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_00a2be60 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea6478 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00a2c069 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2c069 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00a2c069: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea64e0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00a2c0a9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2c0a9 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00a2c0a9: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea6440 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00a2c0e9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a2c0e9 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00a2c0e9: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" void fn_00a363d0();
extern "C" void fn_00a379f0();
extern "C" void fn_00bc6280();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00a37010
extern "C" __declspec(naked) void asm_00a37010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc6280 }
	__asm { mov ebx, eax }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [esi + 0x20] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebx + 8], 6 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00a37047 }
	__asm { push 0x1030588 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a379f0 }
	__asm { add esp, 0xc }
	__asm { L_00a37047: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp edx, edi }
	__asm { jbe L_00a3706b }
	__asm { lea ecx, [edx - 0x10] }
	__asm { L_00a37051: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub edx, 0x10 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { lea ecx, [ecx - 0x10] }
	__asm { cmp edx, edi }
	__asm { ja L_00a37051 }
	__asm { L_00a3706b: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00a370fa }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp ecx, 1 }
	__asm { jl L_00a370ae }
	__asm { lea edi, [ecx + ecx] }
	__asm { lea eax, [edi + 7] }
	__asm { cmp eax, 0xfffffff }
	__asm { ja L_00a370d4 }
	__asm { lea eax, [edi + 6] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { shl ecx, 4 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a370dd }
	__asm { L_00a370ae: }
	__asm { lea edi, [ecx + 1] }
	__asm { lea eax, [edi + 7] }
	__asm { cmp eax, 0xfffffff }
	__asm { ja L_00a370d4 }
	__asm { lea eax, [edi + 6] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { shl ecx, 4 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a370dd }
	__asm { L_00a370d4: }
	__asm { push esi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00a370dd: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + 6] }
	__asm { shl edi, 4 }
	__asm { add edi, eax }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { call fn_00a363d0 }
	__asm { add esp, 8 }
	__asm { L_00a370fa: }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a37620();
extern "C" void fn_00a37800();
// FUNCTION: ROBLOXSTUDIO 0x00a37520
extern "C" __declspec(naked) void asm_00a37520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp dword ptr [eax + 8], 6 }
	__asm { jne L_00a37541 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a37541 }
	__asm { cmp dword ptr [ecx + 0x14], 0 }
	__asm { jg L_00a3761b }
	__asm { L_00a37541: }
	__asm { mov eax, dword ptr [ecx - 0x14] }
	__asm { cmp dword ptr [eax + 8], 6 }
	__asm { jne L_00a3761b }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a3761b }
	__asm { sub ecx, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 8], 6 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { jne L_00a3758f }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a3758f }
	__asm { cmp ecx, dword ptr [edi + 0x14] }
	__asm { jne L_00a3757e }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00a3757e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { sub edx, dword ptr [eax + 0xc] }
	__asm { sar edx, 2 }
	__asm { dec edx }
	__asm { jmp L_00a37592 }
	__asm { L_00a3758f: }
	__asm { or edx, 0xffffffff }
	__asm { L_00a37592: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov edx, eax }
	__asm { and edx, 0x3f }
	__asm { cmp edx, 0x1c }
	__asm { je L_00a37601 }
	__asm { cmp edx, 0x1d }
	__asm { je L_00a37601 }
	__asm { cmp edx, 0x21 }
	__asm { je L_00a37601 }
	__asm { cmp edx, 6 }
	__asm { je L_00a375e1 }
	__asm { cmp edx, 0xb }
	__asm { je L_00a375e1 }
	__asm { cmp edx, 9 }
	__asm { jne L_00a375db }
	__asm { shr eax, 0x17 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a37800 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { pop edi }
	__asm { mov eax, 0xe6fddc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a375db: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a375e1: }
	__asm { shr eax, 0xe }
	__asm { and eax, 0x1ff }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a37800 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { pop edi }
	__asm { mov eax, 0x1025014 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37601: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { shr eax, 6 }
	__asm { and eax, 0xff }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00a37620 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3761b: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_0124eb14[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3bfe0
extern "C" __declspec(naked) void asm_00a3bfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [esi] }
	__asm { push 0xc }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [esi + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [esi + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00a3c054 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a3c054: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00a35650();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3e650
extern "C" __declspec(naked) void asm_00a3e650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, 0xe46a08 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { L_00a3e661: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a3e681 }
	__asm { test dl, dl }
	__asm { je L_00a3e67d }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a3e681 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a3e661 }
	__asm { L_00a3e67d: }
	__asm { xor eax, eax }
	__asm { jmp L_00a3e686 }
	__asm { L_00a3e681: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a3e686: }
	__asm { test eax, eax }
	__asm { je L_00a3e727 }
	__asm { mov ecx, 0x100a870 }
	__asm { mov eax, esi }
	__asm { L_00a3e695: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a3e6b5 }
	__asm { test dl, dl }
	__asm { je L_00a3e6b1 }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a3e6b5 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a3e695 }
	__asm { L_00a3e6b1: }
	__asm { xor eax, eax }
	__asm { jmp L_00a3e6ba }
	__asm { L_00a3e6b5: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a3e6ba: }
	__asm { test eax, eax }
	__asm { je L_00a3e727 }
	__asm { mov ecx, 0xe46a0c }
	__asm { mov eax, esi }
	__asm { L_00a3e6c5: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a3e6e5 }
	__asm { test dl, dl }
	__asm { je L_00a3e6e1 }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a3e6e5 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a3e6c5 }
	__asm { L_00a3e6e1: }
	__asm { xor eax, eax }
	__asm { jmp L_00a3e6ea }
	__asm { L_00a3e6e5: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a3e6ea: }
	__asm { test eax, eax }
	__asm { je L_00a3e71e }
	__asm { mov ecx, 0x100a874 }
	__asm { mov eax, esi }
	__asm { L_00a3e6f5: }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00a3e715 }
	__asm { test dl, dl }
	__asm { je L_00a3e711 }
	__asm { mov dl, byte ptr [eax + 1] }
	__asm { cmp dl, byte ptr [ecx + 1] }
	__asm { jne L_00a3e715 }
	__asm { add eax, 2 }
	__asm { add ecx, 2 }
	__asm { test dl, dl }
	__asm { jne L_00a3e6f5 }
	__asm { L_00a3e711: }
	__asm { xor eax, eax }
	__asm { jmp L_00a3e71a }
	__asm { L_00a3e715: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { L_00a3e71a: }
	__asm { test eax, eax }
	__asm { jne L_00a3e743 }
	__asm { L_00a3e71e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movsx eax, word ptr [eax + 2] }
	__asm { jmp L_00a3e72d }
	__asm { L_00a3e727: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movsx eax, word ptr [eax] }
	__asm { L_00a3e72d: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a35650 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3e743: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6f03c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0124eacc[];
extern "C" char g_0124eb14[];
extern "C" void fn_00626760();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_006e3ec0();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3ad20();
extern "C" void fn_00a3b140();
// FUNCTION: ROBLOXSTUDIO 0x00a3eda0
extern "C" __declspec(naked) void asm_00a3eda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x80 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov esi, eax }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00a3ad20 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3ee22 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00626760 }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push ebx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_00a3b140 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3ee22: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm6, dword ptr [esi + 4] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [esi + 0x10] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm6, xmm2 }
	__asm { movss xmm1, dword ptr [esi + 0x1c] }
	__asm { mulss xmm3, xmm2 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { mulss xmm0, xmm5 }
	__asm { add esp, 0xc }
	__asm { addss xmm6, dword ptr [esi + 0x24] }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { mulss xmm0, xmm4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x18] }
	__asm { mulss xmm0, xmm5 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { addss xmm3, dword ptr [esi + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 0x20], xmm6 }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { mov dword ptr [ebp - 0x14], 0x3f800000 }
	__asm { addss xmm1, dword ptr [esi + 0x2c] }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { call fn_006e3ec0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0xc }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3eeff }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a3eeff: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push ebx }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push ebx }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_0124eb20[];
extern "C" char g_0130798c[];
extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00a35060();
extern "C" void fn_00a35250();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3adb0();
extern "C" void fn_00a3bcb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3ef30
extern "C" __declspec(naked) void asm_00a3ef30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47960 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_00a3adb0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3f0db }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00a3adb0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3f005 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { push 8 }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3efd5 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { L_00a3efd5: }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3f005: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a3f045 }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { je L_00a3f045 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], 0xea76e0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a3f045: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a3bcb0 }
	__asm { fld dword ptr [ebp - 0x20] }
	__asm { fmul st(0), st(1) }
	__asm { push 8 }
	__asm { push esi }
	__asm { fstp dword ptr [ebp - 0x18] }
	__asm { fmul dword ptr [ebp - 0x1c] }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00a3f07d }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { L_00a3f07d: }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { jne L_00a3f1e7 }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { jne L_00a3f1e7 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xea7728 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { jmp L_00a3f1d8 }
	__asm { L_00a3f0db: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a3f11b }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { je L_00a3f11b }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], 0xea76e0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a3f11b: }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { call fn_00a3bcb0 }
	__asm { fstp dword ptr [ebp - 0x1c] }
	__asm { movss xmm1, dword ptr [ebp - 0x10] }
	__asm { mulss xmm1, dword ptr [ebp - 0x1c] }
	__asm { push 8 }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x18] }
	__asm { mulss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00a3f187 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { L_00a3f187: }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { jne L_00a3f1e7 }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { jne L_00a3f1e7 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xea7728 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00773930 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { L_00a3f1d8: }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00a3f1e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_0124eb14[];
extern "C" char g_0124eb24[];
extern "C" char g_0130798c[];
extern "C" void fn_004033d0();
extern "C" void fn_006f64a0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00a35060();
extern "C" void fn_00a35250();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3ae30();
extern "C" void fn_00a3aeb0();
extern "C" void fn_00a3bcb0();
extern "C" void fn_00a40cb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a3f200
extern "C" __declspec(naked) void asm_00a3f200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a3ae30 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3f2d3 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3ae30 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3f28e }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { imul eax, dword ptr [ebp - 0xc] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 0x12] }
	__asm { imul eax, dword ptr [ebp - 0xa] }
	__asm { push 4 }
	__asm { push edi }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { L_00a3f25f: }
	__asm { test eax, eax }
	__asm { je L_00a3f268 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a3f268: }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3f28e: }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bcb0 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { movsx eax, word ptr [ebp - 0xc] }
	__asm { movss xmm1, dword ptr [ebp - 4] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { push 4 }
	__asm { mulss xmm0, xmm1 }
	__asm { push edi }
	__asm { cvttss2si eax, xmm0 }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { movsx eax, word ptr [ebp - 0xa] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mulss xmm0, xmm1 }
	__asm { cvttss2si eax, xmm0 }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a3f25f }
	__asm { L_00a3f2d3: }
	__asm { push esi }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 1 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_00a3bcb0 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { movsx eax, word ptr [ebp - 0xc] }
	__asm { cvtsi2ss xmm1, eax }
	__asm { movsx eax, word ptr [ebp - 0xa] }
	__asm { mulss xmm1, dword ptr [ebp - 4] }
	__asm { cvtsi2ss xmm2, eax }
	__asm { add esp, 0x14 }
	__asm { mulss xmm2, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 4] }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { call fn_006f64a0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3f339 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a3f339: }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47960 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_00a3aeb0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3f519 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { call fn_00a3aeb0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a3f450 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { mulss xmm0, dword ptr [ebp - 0x24] }
	__asm { push 0xc }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3f420 }
	__asm { mov ecx, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a3f420: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3f450: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a3f490 }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { je L_00a3f490 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x10], 0xea7470 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x44], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a3f490: }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a3bcb0 }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss xmm3, dword ptr [ebp - 0x24] }
	__asm { movss xmm2, dword ptr [ebp - 0x20] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x44], xmm3 }
	__asm { movss dword ptr [ebp - 0x40], xmm2 }
	__asm { movss dword ptr [ebp - 0x3c], xmm1 }
	__asm { call fn_00a40cb0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_00a3f63e }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { jne L_00a3f63e }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xea74b8 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { jmp L_00a3f62f }
	__asm { L_00a3f519: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a3f559 }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { je L_00a3f559 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x10], 0xea7470 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x44], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a3f559: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { call fn_00a3bcb0 }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss xmm1, dword ptr [ebp - 0x14] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { movss xmm3, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { push 0xc }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x44], xmm1 }
	__asm { movss dword ptr [ebp - 0x40], xmm2 }
	__asm { movss dword ptr [ebp - 0x3c], xmm3 }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_00a3f5de }
	__asm { mov ecx, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a3f5de: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35250 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { jne L_00a3f63e }
	__asm { cmp byte ptr [g_0130798c], al }
	__asm { jne L_00a3f63e }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xea74b8 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00773930 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { L_00a3f62f: }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00a3f63e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_01307a24[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_004f4560();
// FUNCTION: ROBLOXSTUDIO 0x00a49c00
extern "C" __declspec(naked) void asm_00a49c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_004f4560 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a49c49 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a49c49 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00a49c49 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a49c49: }
	__asm { add dword ptr [g_01307a24], 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_01307b0c[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00a4f390();
// FUNCTION: ROBLOXSTUDIO 0x00a49e40
extern "C" __declspec(naked) void asm_00a49e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00a4f390 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a49e89 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a49e89 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00a49e89 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a49e89: }
	__asm { add dword ptr [g_01307b0c], 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_01307b14[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00a4f400();
// FUNCTION: ROBLOXSTUDIO 0x00a49ea0
extern "C" __declspec(naked) void asm_00a49ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00a4f400 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a49ee9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a49ee9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00a49ee9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a49ee9: }
	__asm { add dword ptr [g_01307b14], 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_004f44f0();
// FUNCTION: ROBLOXSTUDIO 0x00a4f940
extern "C" __declspec(naked) void asm_00a4f940()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004f44f0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4f95e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4f968 }
	__asm { L_00a4f95e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4f968: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4f994 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4f994 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4f994 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4f994: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00a4f400();
// FUNCTION: ROBLOXSTUDIO 0x00a4fb80
extern "C" __declspec(naked) void asm_00a4fb80()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a4f400 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4fb9e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4fba8 }
	__asm { L_00a4fb9e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4fba8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4fbd4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4fbd4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4fbd4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4fbd4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a56060
extern "C" __declspec(naked) void asm_00a56060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd330e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { xor ebx, ebx }
	__asm { mov edi, 1 }
	__asm { L_00a560e7: }
	__asm { xor eax, eax }
	__asm { cmp ebx, 2 }
	__asm { cmovbe eax, edi }
	__asm { test dword ptr [ecx], eax }
	__asm { je L_00a56141 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { mov eax, ebx }
	__asm { sub eax, 0 }
	__asm { je L_00a56121 }
	__asm { dec eax }
	__asm { je L_00a56118 }
	__asm { dec eax }
	__asm { jne L_00a5612f }
	__asm { push 1 }
	__asm { push 0x100a878 }
	__asm { jmp L_00a56128 }
	__asm { L_00a56118: }
	__asm { push 1 }
	__asm { push 0x100a874 }
	__asm { jmp L_00a56128 }
	__asm { L_00a56121: }
	__asm { push 1 }
	__asm { push 0x100a870 }
	__asm { L_00a56128: }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { L_00a5612f: }
	__asm { push 2 }
	__asm { push 0x101173c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00a56141: }
	__asm { rol edi, 1 }
	__asm { inc ebx }
	__asm { cmp ebx, 3 }
	__asm { jl L_00a560e7 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00a5615a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5615a: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4800[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f880();
// FUNCTION: ROBLOXSTUDIO 0x00a57530
extern "C" __declspec(naked) void asm_00a57530()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5757d }
	__asm { cmp dword ptr [g_012e4800], 0x29a }
	__asm { je L_00a5757d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5756c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5757d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5756c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5757d: }
	__asm { mov ecx, 0x12e4804 }
	__asm { jmp fn_0081f880 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov eax, dword ptr [ecx + 0xe8] }
	__asm { add eax, 0x64 }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10528[];
extern "C" void fn_00402f60();
extern "C" void fn_0040fb10();
extern "C" void fn_00410540();
extern "C" void fn_004105d0();
extern "C" void fn_0042cf70();
extern "C" void fn_0042d490();
extern "C" void fn_00a5b410();
// FUNCTION: ROBLOXSTUDIO 0x00a5c990
extern "C" __declspec(naked) void asm_00a5c990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd490a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { jne L_00a5ca76 }
	__asm { lea eax, [ebx + 0x100] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x110] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a5b410 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a5ca31 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00a5ca31 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a5ca31 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a5ca31 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a5ca31 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a5ca31: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { jne L_00a5ca60 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00410540 }
	__asm { L_00a5ca60: }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { jmp L_00a5cb04 }
	__asm { L_00a5ca76: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { jb L_00a5ca84 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00a5ca86 }
	__asm { L_00a5ca84: }
	__asm { mov ecx, esi }
	__asm { L_00a5ca86: }
	__asm { mov eax, 1 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x10294d4 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a5cab7 }
	__asm { cmp edi, 1 }
	__asm { jae L_00a5caad }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00a5cab5 }
	__asm { L_00a5caad: }
	__asm { xor eax, eax }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { L_00a5cab5: }
	__asm { test eax, eax }
	__asm { L_00a5cab7: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00a5cb68 }
	__asm { lea eax, [ebx + 0x100] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x110] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00a5b410 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0042cf70 }
	__asm { L_00a5caf9: }
	__asm { push 1 }
	__asm { L_00a5cafb: }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call fn_004105d0 }
	__asm { pop edi }
	__asm { L_00a5cb04: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { pop esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00a5cb31 }
	__asm { test al, 1 }
	__asm { jne L_00a5cb2a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5cb2a }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5cb2a: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00a5cb31: }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a5cb58 }
	__asm { test al, 1 }
	__asm { jne L_00a5cb58 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5cb58 }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5cb58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
	__asm { L_00a5cb68: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a5cb70 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a5cb70: }
	__asm { cmp edi, 1 }
	__asm { mov eax, 1 }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x10062b8 }
	__asm { push esi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a5cba2 }
	__asm { cmp edi, 1 }
	__asm { jae L_00a5cb98 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00a5cba0 }
	__asm { L_00a5cb98: }
	__asm { xor eax, eax }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { L_00a5cba0: }
	__asm { test eax, eax }
	__asm { L_00a5cba2: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00a5caf9 }
	__asm { lea eax, [ebx + 0x100] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x110] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00a5b410 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0042cf70 }
	__asm { push 0 }
	__asm { jmp L_00a5cafb }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00a60320();
// FUNCTION: ROBLOXSTUDIO 0x00a600f0
extern "C" __declspec(naked) void asm_00a600f0()
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
	__asm { je L_00a60128 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00a60128: }
	__asm { push 0xa60440 }
	__asm { push 0x1308064 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a60320 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00a60164 }
	__asm { push ebx }
	__asm { jmp L_00a60168 }
	__asm { L_00a60164: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00a60168: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00a601aa }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a601aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a601aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a601aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a601aa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a601ed }
	__asm { add esi, 5 }
	__asm { je L_00a601bf }
	__asm { add esi, -5 }
	__asm { jmp L_00a601c1 }
	__asm { L_00a601bf: }
	__asm { xor esi, esi }
	__asm { L_00a601c1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a601ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a601ed }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a601ed: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004107f0();
extern "C" void fn_006b9740();
extern "C" void fn_009d3b10();
// FUNCTION: ROBLOXSTUDIO 0x00a634d0
extern "C" __declspec(naked) void asm_00a634d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00a6353a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_00a6353a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a63529 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6353a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a63529: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6353a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a63546 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00a63548 }
	__asm { L_00a63546: }
	__asm { xor esi, esi }
	__asm { L_00a63548: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esp] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_009d3b10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { fld dword ptr [ecx + 0x70] }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00a64f20();
// FUNCTION: ROBLOXSTUDIO 0x00a648d0
extern "C" __declspec(naked) void asm_00a648d0()
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
	__asm { je L_00a6496f }
	__asm { push 0xa64fb0 }
	__asm { push 0x13085dc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a64f20 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a64935 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a64935: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a6496f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6496f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6496f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6496f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a6496f: }
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
extern "C" void fn_0085e9a0();
// FUNCTION: ROBLOXSTUDIO 0x00a64aa0
extern "C" __declspec(naked) void asm_00a64aa0()
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
	__asm { je L_00a64b08 }
	__asm { test ebx, ebx }
	__asm { jne L_00a64b08 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a64af7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a64b08 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a64af7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a64b08: }
	__asm { push 0x85eb20 }
	__asm { push 0x12f9470 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0085e9a0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00a64b48 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00a64bfd }
	__asm { L_00a64b48: }
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
	__asm { je L_00a64bb7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00a64bb7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a64ba6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a64bb7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a64ba6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a64bb7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a64bcf }
	__asm { add esi, -5 }
	__asm { jmp L_00a64bd1 }
	__asm { L_00a64bcf: }
	__asm { xor esi, esi }
	__asm { L_00a64bd1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a64bfd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a64bfd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a64bfd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00a64c3a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a64c3a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a64c3a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a64c3a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a64c3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00a6d2f0();
// FUNCTION: ROBLOXSTUDIO 0x00a69eb0
extern "C" __declspec(naked) void asm_00a69eb0()
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
	__asm { je L_00a69f4f }
	__asm { push 0xa6d4d0 }
	__asm { push 0x13087b0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a6d2f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a69f15 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a69f15: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a69f4f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a69f4f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a69f4f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a69f4f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a69f4f: }
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
extern "C" void fn_009cad30();
extern "C" void fn_00a6d380();
// FUNCTION: ROBLOXSTUDIO 0x00a69f60
extern "C" __declspec(naked) void asm_00a69f60()
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
	__asm { je L_00a69fff }
	__asm { push 0xa6d4e0 }
	__asm { push 0x13087b8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a6d380 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a69fc5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a69fc5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a69fff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a69fff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a69fff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a69fff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a69fff: }
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
extern "C" void fn_009cad30();
extern "C" void fn_00a6d410();
// FUNCTION: ROBLOXSTUDIO 0x00a6a010
extern "C" __declspec(naked) void asm_00a6a010()
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
	__asm { je L_00a6a0af }
	__asm { push 0xa6d4f0 }
	__asm { push 0x13087c0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a6d410 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a6a075 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a6a075: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a6a0af }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6a0af }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6a0af }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6a0af }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a6a0af: }
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
extern "C" char g_01308788[];
extern "C" char g_0130878c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6a150
extern "C" __declspec(naked) void asm_00a6a150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49dde }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a6a4cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a6a182: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa6d4a0 }
	__asm { push 0x1308780 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130878c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a6a1e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130878c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6a1dd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01308788], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a6a1ee }
	__asm { L_00a6a1dd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01308788], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a6a1ee }
	__asm { L_00a6a1e9: }
	__asm { mov eax, dword ptr [g_01308788] }
	__asm { L_00a6a1ee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00a6a275 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a21b }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a21d }
	__asm { L_00a6a21b: }
	__asm { xor eax, eax }
	__asm { L_00a6a21d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a272 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a6a272 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a261 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a272 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a261: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a272: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00a6a275: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00a6a365 }
	__asm { L_00a6a280: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00a6a365 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a6a305 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a2a8 }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a2aa }
	__asm { L_00a6a2a8: }
	__asm { xor eax, eax }
	__asm { L_00a6a2aa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a2ff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00a6a2ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a2ee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a2ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a2ee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a2ff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6a305: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00a6a35a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00a6a31c }
	__asm { add ebx, -5 }
	__asm { jmp L_00a6a31e }
	__asm { L_00a6a31c: }
	__asm { xor ebx, ebx }
	__asm { L_00a6a31e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a354 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a354 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6a35a }
	__asm { L_00a6a354: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6a35a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00a6a280 }
	__asm { L_00a6a365: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a6a3c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6a3c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6a3c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6a3c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00a6a3bf }
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
	__asm { je L_00a6a3bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00a6a3bf }
	__asm { L_00a6a3bd: }
	__asm { mov esi, edx }
	__asm { L_00a6a3bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a6a3c9: }
	__asm { test esi, esi }
	__asm { je L_00a6a430 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a3d9 }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a3db }
	__asm { L_00a6a3d9: }
	__asm { xor eax, eax }
	__asm { L_00a6a3db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a430 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a6a430 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a41f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a430 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a41f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a430: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00a6a47f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00a6a447 }
	__asm { add edi, -5 }
	__asm { jmp L_00a6a449 }
	__asm { L_00a6a447: }
	__asm { xor edi, edi }
	__asm { L_00a6a449: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a479 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a479 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6a47f }
	__asm { L_00a6a479: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6a47f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6a4be }
	__asm { add esi, 5 }
	__asm { je L_00a6a494 }
	__asm { add esi, -5 }
	__asm { jmp L_00a6a496 }
	__asm { L_00a6a494: }
	__asm { xor esi, esi }
	__asm { L_00a6a496: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a4be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a4be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a6a4be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a6a182 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00a6a4cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013087a0[];
extern "C" char g_013087a4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6a4e0
extern "C" __declspec(naked) void asm_00a6a4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49e0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a6a85c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a6a512: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa6d4b0 }
	__asm { push 0x1308790 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013087a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a6a579 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013087a4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6a56d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013087a0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a6a57e }
	__asm { L_00a6a56d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013087a0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a6a57e }
	__asm { L_00a6a579: }
	__asm { mov eax, dword ptr [g_013087a0] }
	__asm { L_00a6a57e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00a6a605 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a5ab }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a5ad }
	__asm { L_00a6a5ab: }
	__asm { xor eax, eax }
	__asm { L_00a6a5ad: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a602 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a6a602 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a5f1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a602 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a5f1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a602: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00a6a605: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00a6a6f5 }
	__asm { L_00a6a610: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00a6a6f5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a6a695 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a638 }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a63a }
	__asm { L_00a6a638: }
	__asm { xor eax, eax }
	__asm { L_00a6a63a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a68f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00a6a68f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a67e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a68f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a67e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a68f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6a695: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00a6a6ea }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00a6a6ac }
	__asm { add ebx, -5 }
	__asm { jmp L_00a6a6ae }
	__asm { L_00a6a6ac: }
	__asm { xor ebx, ebx }
	__asm { L_00a6a6ae: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a6e4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a6e4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6a6ea }
	__asm { L_00a6a6e4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6a6ea: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00a6a610 }
	__asm { L_00a6a6f5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a6a759 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6a759 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6a759 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6a759 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00a6a74f }
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
	__asm { je L_00a6a74d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00a6a74f }
	__asm { L_00a6a74d: }
	__asm { mov esi, edx }
	__asm { L_00a6a74f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a6a759: }
	__asm { test esi, esi }
	__asm { je L_00a6a7c0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a769 }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a76b }
	__asm { L_00a6a769: }
	__asm { xor eax, eax }
	__asm { L_00a6a76b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a7c0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a6a7c0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a7af }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a7c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a7af: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a7c0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00a6a80f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00a6a7d7 }
	__asm { add edi, -5 }
	__asm { jmp L_00a6a7d9 }
	__asm { L_00a6a7d7: }
	__asm { xor edi, edi }
	__asm { L_00a6a7d9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a809 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a809 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6a80f }
	__asm { L_00a6a809: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6a80f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6a84e }
	__asm { add esi, 5 }
	__asm { je L_00a6a824 }
	__asm { add esi, -5 }
	__asm { jmp L_00a6a826 }
	__asm { L_00a6a824: }
	__asm { xor esi, esi }
	__asm { L_00a6a826: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a84e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6a84e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a6a84e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a6a512 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00a6a85c: }
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
extern "C" char g_013087a8[];
extern "C" char g_013087ac[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6a870
extern "C" __declspec(naked) void asm_00a6a870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49e3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a6abec }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a6a8a2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa6d4c0 }
	__asm { push 0x1308798 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013087ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a6a909 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013087ac], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a6a8fd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013087a8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a6a90e }
	__asm { L_00a6a8fd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013087a8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a6a90e }
	__asm { L_00a6a909: }
	__asm { mov eax, dword ptr [g_013087a8] }
	__asm { L_00a6a90e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00a6a995 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a93b }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a93d }
	__asm { L_00a6a93b: }
	__asm { xor eax, eax }
	__asm { L_00a6a93d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6a992 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a6a992 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6a981 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6a992 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6a981: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6a992: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00a6a995: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00a6aa85 }
	__asm { L_00a6a9a0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00a6aa85 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a6aa25 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6a9c8 }
	__asm { add eax, -5 }
	__asm { jmp L_00a6a9ca }
	__asm { L_00a6a9c8: }
	__asm { xor eax, eax }
	__asm { L_00a6a9ca: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6aa1f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00a6aa1f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6aa0e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6aa1f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6aa0e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6aa1f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6aa25: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00a6aa7a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00a6aa3c }
	__asm { add ebx, -5 }
	__asm { jmp L_00a6aa3e }
	__asm { L_00a6aa3c: }
	__asm { xor ebx, ebx }
	__asm { L_00a6aa3e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6aa74 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6aa74 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6aa7a }
	__asm { L_00a6aa74: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6aa7a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00a6a9a0 }
	__asm { L_00a6aa85: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a6aae9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6aae9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6aae9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6aae9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00a6aadf }
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
	__asm { je L_00a6aadd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00a6aadf }
	__asm { L_00a6aadd: }
	__asm { mov esi, edx }
	__asm { L_00a6aadf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a6aae9: }
	__asm { test esi, esi }
	__asm { je L_00a6ab50 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a6aaf9 }
	__asm { add eax, -5 }
	__asm { jmp L_00a6aafb }
	__asm { L_00a6aaf9: }
	__asm { xor eax, eax }
	__asm { L_00a6aafb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6ab50 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a6ab50 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6ab3f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6ab50 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6ab3f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6ab50: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00a6ab9f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00a6ab67 }
	__asm { add edi, -5 }
	__asm { jmp L_00a6ab69 }
	__asm { L_00a6ab67: }
	__asm { xor edi, edi }
	__asm { L_00a6ab69: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6ab99 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6ab99 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6ab9f }
	__asm { L_00a6ab99: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6ab9f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6abde }
	__asm { add esi, 5 }
	__asm { je L_00a6abb4 }
	__asm { add esi, -5 }
	__asm { jmp L_00a6abb6 }
	__asm { L_00a6abb4: }
	__asm { xor esi, esi }
	__asm { L_00a6abb6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6abde }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6abde }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a6abde: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a6a8a2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00a6abec: }
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
extern "C" void fn_00a6d140();
// FUNCTION: ROBLOXSTUDIO 0x00a6bac0
extern "C" __declspec(naked) void asm_00a6bac0()
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
	__asm { je L_00a6bb28 }
	__asm { test ebx, ebx }
	__asm { jne L_00a6bb28 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6bb17 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6bb28 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6bb17: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6bb28: }
	__asm { push 0xa6d4a0 }
	__asm { push 0x1308780 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a6d140 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00a6bb68 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00a6bc1d }
	__asm { L_00a6bb68: }
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
	__asm { je L_00a6bbd7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00a6bbd7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6bbc6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6bbd7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a6bbc6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6bbd7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a6bbef }
	__asm { add esi, -5 }
	__asm { jmp L_00a6bbf1 }
	__asm { L_00a6bbef: }
	__asm { xor esi, esi }
	__asm { L_00a6bbf1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6bc1d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6bc1d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a6bc1d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00a6bc5a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6bc5a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6bc5a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6bc5a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a6bc5a: }
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
extern "C" void fn_00a6d260();
// FUNCTION: ROBLOXSTUDIO 0x00a6ca90
extern "C" __declspec(naked) void asm_00a6ca90()
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
	__asm { je L_00a6cac8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00a6cac8: }
	__asm { push 0xa6d4c0 }
	__asm { push 0x1308798 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a6d260 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00a6cb04 }
	__asm { push ebx }
	__asm { jmp L_00a6cb08 }
	__asm { L_00a6cb04: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00a6cb08: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00a6cb4a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a6cb4a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a6cb4a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a6cb4a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a6cb4a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6cb8d }
	__asm { add esi, 5 }
	__asm { je L_00a6cb5f }
	__asm { add esi, -5 }
	__asm { jmp L_00a6cb61 }
	__asm { L_00a6cb5f: }
	__asm { xor esi, esi }
	__asm { L_00a6cb61: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6cb8d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6cb8d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a6cb8d: }
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

extern "C" char g_01300110[];
extern "C" void fn_004038a0();
extern "C" void fn_007b00e0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a70590();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a70680
extern "C" __declspec(naked) void asm_00a70680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a5a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a70590 }
	__asm { fld1 }
	__asm { push 7 }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { push 0xe60b34 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeadc3c }
	__asm { mov dword ptr [esi + 4], 0xeadcb4 }
	__asm { mov dword ptr [esi + 0x18], 0xeadcbc }
	__asm { mov dword ptr [esi + 0x1c], 0xeadcc8 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00a7070e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a7070e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeadafc }
	__asm { mov dword ptr [ecx + 4], 0xeadb74 }
	__asm { mov dword ptr [ecx + 0x18], 0xeadb7c }
	__asm { mov dword ptr [ecx + 0x1c], 0xeadb88 }
	__asm { jmp fn_007b00e0 }
	__asm { mov dword ptr [g_01300110], 0 }
	__asm { mov dword ptr [ecx], 0xeadafc }
	__asm { mov dword ptr [ecx + 4], 0xeadb74 }
	__asm { mov dword ptr [ecx + 0x18], 0xeadb7c }
	__asm { mov dword ptr [ecx + 0x1c], 0xeadb88 }
	__asm { jmp fn_007b00e0 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a70d60
extern "C" __declspec(naked) void asm_00a70d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x68] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fucomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a70d84 }
	__asm { push 0x1308cb8 }
	__asm { fstp qword ptr [ecx + 0x68] }
	__asm { call fn_007b4f50 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a70d84: }
	__asm { fstp st(0) }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00a7d590();
// FUNCTION: ROBLOXSTUDIO 0x00a77fc0
extern "C" __declspec(naked) void asm_00a77fc0()
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
	__asm { je L_00a7805f }
	__asm { push 0xa7d6d0 }
	__asm { push 0x1309480 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a7d590 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a78025 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a78025: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a7805f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a7805f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a7805f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a7805f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a7805f: }
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
extern "C" void fn_009cad30();
extern "C" void fn_00a7d620();
// FUNCTION: ROBLOXSTUDIO 0x00a78070
extern "C" __declspec(naked) void asm_00a78070()
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
	__asm { je L_00a7810f }
	__asm { push 0xa7d6e0 }
	__asm { push 0x1309488 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a7d620 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a780d5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a780d5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a7810f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a7810f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a7810f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a7810f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a7810f: }
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
extern "C" char g_01309470[];
extern "C" char g_01309474[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a78180
extern "C" __declspec(naked) void asm_00a78180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ad8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a784fc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a781b2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa7d6b0 }
	__asm { push 0x1309460 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01309474] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a78219 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01309474], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a7820d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01309470], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a7821e }
	__asm { L_00a7820d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01309470], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a7821e }
	__asm { L_00a78219: }
	__asm { mov eax, dword ptr [g_01309470] }
	__asm { L_00a7821e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00a782a5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a7824b }
	__asm { add eax, -5 }
	__asm { jmp L_00a7824d }
	__asm { L_00a7824b: }
	__asm { xor eax, eax }
	__asm { L_00a7824d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a782a2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a782a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a78291 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a782a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a78291: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a782a2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00a782a5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00a78395 }
	__asm { L_00a782b0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00a78395 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a78335 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a782d8 }
	__asm { add eax, -5 }
	__asm { jmp L_00a782da }
	__asm { L_00a782d8: }
	__asm { xor eax, eax }
	__asm { L_00a782da: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a7832f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00a7832f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7831e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7832f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7831e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7832f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a78335: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00a7838a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00a7834c }
	__asm { add ebx, -5 }
	__asm { jmp L_00a7834e }
	__asm { L_00a7834c: }
	__asm { xor ebx, ebx }
	__asm { L_00a7834e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a78384 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a78384 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a7838a }
	__asm { L_00a78384: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a7838a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00a782b0 }
	__asm { L_00a78395: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a783f9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a783f9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a783f9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a783f9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00a783ef }
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
	__asm { je L_00a783ed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00a783ef }
	__asm { L_00a783ed: }
	__asm { mov esi, edx }
	__asm { L_00a783ef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a783f9: }
	__asm { test esi, esi }
	__asm { je L_00a78460 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a78409 }
	__asm { add eax, -5 }
	__asm { jmp L_00a7840b }
	__asm { L_00a78409: }
	__asm { xor eax, eax }
	__asm { L_00a7840b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a78460 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a78460 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7844f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a78460 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7844f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a78460: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00a784af }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00a78477 }
	__asm { add edi, -5 }
	__asm { jmp L_00a78479 }
	__asm { L_00a78477: }
	__asm { xor edi, edi }
	__asm { L_00a78479: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a784a9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a784a9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a784af }
	__asm { L_00a784a9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a784af: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a784ee }
	__asm { add esi, 5 }
	__asm { je L_00a784c4 }
	__asm { add esi, -5 }
	__asm { jmp L_00a784c6 }
	__asm { L_00a784c4: }
	__asm { xor esi, esi }
	__asm { L_00a784c6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a784ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a784ee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a784ee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a781b2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00a784fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01309478[];
extern "C" char g_0130947c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a78510
extern "C" __declspec(naked) void asm_00a78510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4adbe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a7888c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a78542: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa7d6c0 }
	__asm { push 0x1309468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130947c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a785a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130947c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a7859d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01309478], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a785ae }
	__asm { L_00a7859d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01309478], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a785ae }
	__asm { L_00a785a9: }
	__asm { mov eax, dword ptr [g_01309478] }
	__asm { L_00a785ae: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00a78635 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a785db }
	__asm { add eax, -5 }
	__asm { jmp L_00a785dd }
	__asm { L_00a785db: }
	__asm { xor eax, eax }
	__asm { L_00a785dd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a78632 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a78632 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a78621 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a78632 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a78621: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a78632: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00a78635: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00a78725 }
	__asm { L_00a78640: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00a78725 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a786c5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a78668 }
	__asm { add eax, -5 }
	__asm { jmp L_00a7866a }
	__asm { L_00a78668: }
	__asm { xor eax, eax }
	__asm { L_00a7866a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a786bf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00a786bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a786ae }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a786bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a786ae: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a786bf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a786c5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00a7871a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00a786dc }
	__asm { add ebx, -5 }
	__asm { jmp L_00a786de }
	__asm { L_00a786dc: }
	__asm { xor ebx, ebx }
	__asm { L_00a786de: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a78714 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a78714 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a7871a }
	__asm { L_00a78714: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a7871a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00a78640 }
	__asm { L_00a78725: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a78789 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a78789 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a78789 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a78789 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00a7877f }
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
	__asm { je L_00a7877d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00a7877f }
	__asm { L_00a7877d: }
	__asm { mov esi, edx }
	__asm { L_00a7877f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a78789: }
	__asm { test esi, esi }
	__asm { je L_00a787f0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a78799 }
	__asm { add eax, -5 }
	__asm { jmp L_00a7879b }
	__asm { L_00a78799: }
	__asm { xor eax, eax }
	__asm { L_00a7879b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a787f0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a787f0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a787df }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a787f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a787df: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a787f0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00a7883f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00a78807 }
	__asm { add edi, -5 }
	__asm { jmp L_00a78809 }
	__asm { L_00a78807: }
	__asm { xor edi, edi }
	__asm { L_00a78809: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a78839 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a78839 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a7883f }
	__asm { L_00a78839: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a7883f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a7887e }
	__asm { add esi, 5 }
	__asm { je L_00a78854 }
	__asm { add esi, -5 }
	__asm { jmp L_00a78856 }
	__asm { L_00a78854: }
	__asm { xor esi, esi }
	__asm { L_00a78856: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7887e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7887e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a7887e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a78542 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00a7888c: }
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
extern "C" void fn_00a7d470();
// FUNCTION: ROBLOXSTUDIO 0x00a7adf0
extern "C" __declspec(naked) void asm_00a7adf0()
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
	__asm { je L_00a7ae58 }
	__asm { test ebx, ebx }
	__asm { jne L_00a7ae58 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7ae47 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7ae58 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7ae47: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7ae58: }
	__asm { push 0xa7d6b0 }
	__asm { push 0x1309460 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a7d470 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00a7ae98 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00a7af4d }
	__asm { L_00a7ae98: }
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
	__asm { je L_00a7af07 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00a7af07 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7aef6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7af07 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a7aef6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7af07: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a7af1f }
	__asm { add esi, -5 }
	__asm { jmp L_00a7af21 }
	__asm { L_00a7af1f: }
	__asm { xor esi, esi }
	__asm { L_00a7af21: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7af4d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7af4d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a7af4d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00a7af8a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a7af8a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a7af8a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a7af8a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a7af8a: }
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
extern "C" void fn_00a7d500();
// FUNCTION: ROBLOXSTUDIO 0x00a7afa0
extern "C" __declspec(naked) void asm_00a7afa0()
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
	__asm { je L_00a7b008 }
	__asm { test ebx, ebx }
	__asm { jne L_00a7b008 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7aff7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7b008 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7aff7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7b008: }
	__asm { push 0xa7d6c0 }
	__asm { push 0x1309468 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a7d500 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00a7b048 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00a7b0fd }
	__asm { L_00a7b048: }
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
	__asm { je L_00a7b0b7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00a7b0b7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a7b0a6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7b0b7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a7b0a6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7b0b7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a7b0cf }
	__asm { add esi, -5 }
	__asm { jmp L_00a7b0d1 }
	__asm { L_00a7b0cf: }
	__asm { xor esi, esi }
	__asm { L_00a7b0d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7b0fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7b0fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a7b0fd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00a7b13a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a7b13a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a7b13a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a7b13a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a7b13a: }
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
extern "C" void fn_00a7d470();
// FUNCTION: ROBLOXSTUDIO 0x00a7bd30
extern "C" __declspec(naked) void asm_00a7bd30()
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
	__asm { je L_00a7bd68 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00a7bd68: }
	__asm { push 0xa7d6b0 }
	__asm { push 0x1309460 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a7d470 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00a7bda4 }
	__asm { push ebx }
	__asm { jmp L_00a7bda8 }
	__asm { L_00a7bda4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00a7bda8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00a7bdea }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a7bdea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a7bdea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a7bdea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a7bdea: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a7be2d }
	__asm { add esi, 5 }
	__asm { je L_00a7bdff }
	__asm { add esi, -5 }
	__asm { jmp L_00a7be01 }
	__asm { L_00a7bdff: }
	__asm { xor esi, esi }
	__asm { L_00a7be01: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7be2d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a7be2d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a7be2d: }
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

// (empty)

// (empty)
