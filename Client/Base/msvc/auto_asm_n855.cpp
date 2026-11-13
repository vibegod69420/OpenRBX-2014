// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_00402f60();
extern "C" void fn_0040fb10();
extern "C" void fn_0042d490();
extern "C" void fn_00513a40();
extern "C" void fn_006a5f50();
extern "C" void fn_009ad6e0();
extern "C" void fn_00b2deb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009afcc0
extern "C" __declspec(naked) void asm_009afcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ebf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { lea eax, [esi + 0x158] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0042d490 }
	__asm { lea ebx, [esi + 0x168] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_00513a40 }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov esi, eax }
	__asm { cmp esi, edi }
	__asm { je L_009afd77 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea edx, [esi + 0x10] }
	__asm { jb L_009afd35 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_009afd35: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovae ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 0x18], ebx }
	__asm { mov eax, ebx }
	__asm { cmovb eax, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_009afd6d }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { cmp ecx, ebx }
	__asm { jae L_009afd64 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_009afd6b }
	__asm { L_009afd64: }
	__asm { xor eax, eax }
	__asm { cmp ecx, ebx }
	__asm { setne al }
	__asm { L_009afd6b: }
	__asm { test eax, eax }
	__asm { L_009afd6d: }
	__asm { sets al }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, al }
	__asm { je L_009afd7a }
	__asm { L_009afd77: }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { L_009afd7a: }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, edi }
	__asm { je L_009afd9c }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00b2deb0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_009ad6e0 }
	__asm { L_009afd9c: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_009afde1 }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_009afde1 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009afde1 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009afde1 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009afde1 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009afde1: }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { test eax, eax }
	__asm { je L_009afe16 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { test eax, eax }
	__asm { je L_009afe0b }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009afe0b: }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_006a5f50 }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { L_009afe16: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009afe3e }
	__asm { test al, 1 }
	__asm { jne L_009afe37 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009afe37 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009afe37: }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { L_009afe3e: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009afe4f }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009afe4f: }
	__asm { mov esi, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009afe95 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009afe95 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009afe95 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009afe95: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_009b2550();
// FUNCTION: ROBLOXSTUDIO 0x009b1050
extern "C" __declspec(naked) void asm_009b1050()
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
	__asm { je L_009b1088 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009b1088: }
	__asm { push 0x9b29d0 }
	__asm { push 0x1303ed4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b2550 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009b10c4 }
	__asm { push ebx }
	__asm { jmp L_009b10c8 }
	__asm { L_009b10c4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009b10c8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009b110a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009b110a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009b110a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009b110a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009b110a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009b114d }
	__asm { add esi, 5 }
	__asm { je L_009b111f }
	__asm { add esi, -5 }
	__asm { jmp L_009b1121 }
	__asm { L_009b111f: }
	__asm { xor esi, esi }
	__asm { L_009b1121: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b114d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b114d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009b114d: }
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
extern "C" void fn_009b25e0();
// FUNCTION: ROBLOXSTUDIO 0x009b1170
extern "C" __declspec(naked) void asm_009b1170()
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
	__asm { je L_009b11a8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009b11a8: }
	__asm { push 0x9b29e0 }
	__asm { push 0x1303ec4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b25e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009b11e4 }
	__asm { push ebx }
	__asm { jmp L_009b11e8 }
	__asm { L_009b11e4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009b11e8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009b122a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009b122a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009b122a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009b122a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009b122a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009b126d }
	__asm { add esi, 5 }
	__asm { je L_009b123f }
	__asm { add esi, -5 }
	__asm { jmp L_009b1241 }
	__asm { L_009b123f: }
	__asm { xor esi, esi }
	__asm { L_009b1241: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b126d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b126d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009b126d: }
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
extern "C" void fn_009b2670();
// FUNCTION: ROBLOXSTUDIO 0x009b1290
extern "C" __declspec(naked) void asm_009b1290()
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
	__asm { je L_009b12c8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009b12c8: }
	__asm { push 0x9b29f0 }
	__asm { push 0x1303ecc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b2670 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009b1304 }
	__asm { push ebx }
	__asm { jmp L_009b1308 }
	__asm { L_009b1304: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009b1308: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009b134a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009b134a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009b134a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009b134a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009b134a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009b138d }
	__asm { add esi, 5 }
	__asm { je L_009b135f }
	__asm { add esi, -5 }
	__asm { jmp L_009b1361 }
	__asm { L_009b135f: }
	__asm { xor esi, esi }
	__asm { L_009b1361: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b138d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b138d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009b138d: }
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
