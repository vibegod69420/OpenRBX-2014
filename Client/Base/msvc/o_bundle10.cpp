// Bundled inline-assembly functions (merged from asmify12).

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00794a20();
extern "C" void fn_00a4a760();
extern "C" void fn_00c78af0();
extern "C" void fn_00c821c0();
extern "C" void fn_00c86180();
extern "C" void fn_00c8d780();
// FUNCTION: ROBLOXSTUDIO 0x00c76960
extern "C" __declspec(naked) void asm_00c76960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd67668 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00794a20 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_00c7699b }
	__asm { inc ecx }
	__asm { jmp L_00c7699d }
	__asm { L_00c7699b: }
	__asm { xor ecx, ecx }
	__asm { L_00c7699d: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c78af0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00c769ce }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00c769ce: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00c769d8 }
	__asm { inc eax }
	__asm { jmp L_00c769da }
	__asm { L_00c769d8: }
	__asm { xor eax, eax }
	__asm { L_00c769da: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c821c0 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { test edx, edx }
	__asm { je L_00c76a0f }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00c76a0f: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00c8d780 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a4a760 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00c76a8a }
	__asm { call fn_00c86180 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c76a8a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c76a8a }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00c76a8a }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c76a8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10198[];
extern "C" void fn_00403110();
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0068b240();
// FUNCTION: ROBLOXSTUDIO 0x00c7acc0
extern "C" __declspec(naked) void asm_00c7acc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_0068b240 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c7ad04 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c7ad04 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00c7ad04 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c7ad04: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00c7ad2c }
	__asm { sub eax, 4 }
	__asm { L_00c7ad2c: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_01313cdc[];
extern "C" char g_01313ce0[];
extern "C" char g_01313ce4[];
extern "C" char g_01313ce8[];
extern "C" char g_01313cec[];
extern "C" char g_01313cf0[];
extern "C" char g_01313cf4[];
extern "C" char g_01313cf8[];
extern "C" char g_01313cfc[];
extern "C" char g_01313d01[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
// FUNCTION: ROBLOXSTUDIO 0x00c82a30
extern "C" __declspec(naked) void asm_00c82a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { mov ecx, 0x1313cdc }
	__asm { L_00c82a44: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00c82a4f }
	__asm { add esi, -8 }
	__asm { jmp L_00c82a51 }
	__asm { L_00c82a4f: }
	__asm { xor esi, esi }
	__asm { L_00c82a51: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp byte ptr [g_01313d01], 0 }
	__asm { jne L_00c82ac0 }
	__asm { mov byte ptr [g_01313d01], 1 }
	__asm { mov dword ptr [g_01313cdc], 0 }
	__asm { mov dword ptr [g_01313ce0], 0 }
	__asm { mov dword ptr [g_01313ce4], 0 }
	__asm { mov dword ptr [g_01313ce8], 0 }
	__asm { mov dword ptr [g_01313cec], 0 }
	__asm { mov dword ptr [g_01313cf0], 0x10 }
	__asm { mov dword ptr [g_01313cf4], 0x20 }
	__asm { mov dword ptr [g_01313cf8], 0x20 }
	__asm { mov dword ptr [g_01313cfc], 0 }
	__asm { L_00c82ac0: }
	__asm { call fn_0040ed30 }
	__asm { mov eax, dword ptr [g_01313ce4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [g_01313ce4], esi }
	__asm { mov eax, 0x80000000 }
	__asm { mov ecx, 0x1313cdc }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c82b35 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c82b35 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c82b35 }
	__asm { mov esi, dword ptr [g_01313ce0] }
	__asm { test esi, esi }
	__asm { jne L_00c82b29 }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { mov esi, 0x1313ce0 }
	__asm { lock cmpxchg dword ptr [esi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00c82b27 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c82b29 }
	__asm { L_00c82b27: }
	__asm { mov esi, edx }
	__asm { L_00c82b29: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov ecx, 0x1313cdc }
	__asm { L_00c82b35: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc ebx }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00c82a44 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c8d990();
// FUNCTION: ROBLOXSTUDIO 0x00c840e0
extern "C" __declspec(naked) void asm_00c840e0()
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
	__asm { je L_00c8417f }
	__asm { push 0xc8da20 }
	__asm { push 0x1313ccc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c8d990 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c84145 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c84145: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c8417f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c8417f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c8417f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c8417f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c8417f: }
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

// branches use labels; absolute references use relocation symbols.

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
extern "C" void fn_00c35b50();
// FUNCTION: ROBLOXSTUDIO 0x00c86500
extern "C" __declspec(naked) void asm_00c86500()
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
	__asm { je L_00c86568 }
	__asm { test ebx, ebx }
	__asm { jne L_00c86568 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c86557 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c86568 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c86557: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c86568: }
	__asm { push 0xc36210 }
	__asm { push 0x13107b4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35b50 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00c865a8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00c8665d }
	__asm { L_00c865a8: }
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
	__asm { je L_00c86617 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00c86617 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c86606 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c86617 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c86606: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c86617: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c8662f }
	__asm { add esi, -5 }
	__asm { jmp L_00c86631 }
	__asm { L_00c8662f: }
	__asm { xor esi, esi }
	__asm { L_00c86631: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c8665d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c8665d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c8665d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00c8669a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c8669a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c8669a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c8669a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c8669a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009a9cd0();
// FUNCTION: ROBLOXSTUDIO 0x00c866b0
extern "C" __declspec(naked) void asm_00c866b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c866f5 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c866f5: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx + 8] }
	__asm { call fn_009a9cd0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c86734 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00c86734 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c86734 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c86734: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0068b610();
extern "C" void fn_00c86180();
// FUNCTION: ROBLOXSTUDIO 0x00c87230
extern "C" __declspec(naked) void asm_00c87230()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c86180 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00c8724e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00c87258 }
	__asm { L_00c8724e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0068b610 }
	__asm { mov esi, eax }
	__asm { L_00c87258: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c87284 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c87284 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00c87284 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c87284: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_010381c0[];
extern "C" char g_010381d0[];
extern "C" void fn_00403110();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x00c876a0
extern "C" __declspec(naked) void asm_00c876a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fild dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { test eax, eax }
	__asm { jns L_00c876b6 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_00c876b6: }
	__asm { fdiv dword ptr [ecx + 0xc] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fld qword ptr [g_010381c0] }
	__asm { fxch st(1) }
	__asm { add esp, 8 }
	__asm { fcomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { jb L_00c876dc }
	__asm { fstp st(0) }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00c876f7 }
	__asm { L_00c876dc: }
	__asm { fnstcw word ptr [ebp + 0xa] }
	__asm { movzx eax, word ptr [ebp + 0xa] }
	__asm { or eax, 0xc00 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { fldcw word ptr [ebp - 4] }
	__asm { fistp qword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { fldcw word ptr [ebp + 0xa] }
	__asm { L_00c876f7: }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00c87723 }
	__asm { mov eax, dword ptr [eax - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c87723: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_004033d0();
extern "C" void fn_00532480();
extern "C" void fn_00865d20();
extern "C" void fn_00892480();
extern "C" void fn_00c78200();
extern "C" void fn_00c78330();
extern "C" void fn_00c867e0();
extern "C" void fn_00ccd6e0();
// FUNCTION: ROBLOXSTUDIO 0x00c90a90
extern "C" __declspec(naked) void asm_00c90a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x20f8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c90b9b }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c78330 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00c90b65 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00865d20 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { add esp, 4 }
	__asm { cmp eax, ecx }
	__asm { je L_00c90b03 }
	__asm { test ecx, ecx }
	__asm { je L_00c90b65 }
	__asm { push eax }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00c90b65 }
	__asm { L_00c90b03: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00c867e0 }
	__asm { test al, al }
	__asm { jne L_00c90b65 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00c78200 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { setne bl }
	__asm { call fn_004033d0 }
	__asm { test bl, bl }
	__asm { jne L_00c90b65 }
	__asm { mov esi, dword ptr [edi + 0x20f8] }
	__asm { mov al, byte ptr [esi + 0x288] }
	__asm { test al, al }
	__asm { je L_00c90b61 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { call fn_00892480 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ccd6e0 }
	__asm { test al, al }
	__asm { jne L_00c90b65 }
	__asm { L_00c90b61: }
	__asm { mov bl, 1 }
	__asm { jmp L_00c90b67 }
	__asm { L_00c90b65: }
	__asm { xor bl, bl }
	__asm { L_00c90b67: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c90b9d }
	__asm { or edi, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c90b9d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c90b9d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00c90b9d }
	__asm { L_00c90b9b: }
	__asm { xor bl, bl }
	__asm { L_00c90b9d: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c90bd1 }
	__asm { or edi, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c90bd1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], edi }
	__asm { dec edi }
	__asm { jne L_00c90bd1 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00c90bd1: }
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

// FUNCTION: ROBLOXSTUDIO 0x00c90cf0
extern "C" __declspec(naked) void asm_00c90cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00c90d23 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00c90d22 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c90d22 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c90d22: }
	__asm { pop edi }
	__asm { L_00c90d23: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" char g_00e131b0[];
extern "C" char g_00e131b4[];
extern "C" char g_012a90f0[];
extern "C" char g_012a90f4[];
extern "C" char g_012a90f8[];
extern "C" char g_012fd428[];
extern "C" void fn_004033d0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0041a990();
extern "C" void fn_0045be50();
extern "C" void fn_004819a0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007b5ac0();
extern "C" void fn_007b5ea0();
extern "C" void fn_007b6760();
extern "C" void fn_0083add0();
extern "C" void fn_008523c0();
extern "C" void fn_00865d20();
extern "C" void fn_00966290();
extern "C" void fn_009aa140();
extern "C" void fn_00c52980();
extern "C" void fn_00c52cf0();
extern "C" void fn_00c54de0();
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6b400();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c70300();
extern "C" void fn_00c703b0();
extern "C" void fn_00c72a40();
extern "C" void fn_00c944e0();
extern "C" void fn_00c98100();
extern "C" void fn_00c98260();
// FUNCTION: ROBLOXSTUDIO 0x00c95a40
extern "C" __declspec(naked) void asm_00c95a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6994c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x16c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [ebp - 0x178] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c6c2f0 }
	__asm { lea eax, [ebp - 0x178] }
	__asm { push 0x92 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c70300 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x178] }
	__asm { push dword ptr [g_012fd428] }
	__asm { push eax }
	__asm { call fn_00c703b0 }
	__asm { mov ecx, dword ptr [ebx + 0xab8] }
	__asm { add esp, 8 }
	__asm { call fn_00c6b400 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012a90f0] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012a90f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012a90f8] }
	__asm { lea edi, [ebx + 0xad0] }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebx + 0xb00] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 3 }
	__asm { push dword ptr [eax + 0xd8] }
	__asm { lea eax, [ebp - 0x178] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x4c] }
	__asm { mov ecx, ebx }
	__asm { call fn_00c98260 }
	__asm { mov ecx, ebx }
	__asm { call fn_00c98100 }
	__asm { push ebx }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00966290 }
	__asm { mov ecx, dword ptr [ebx + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 0x14 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call dword ptr [esi + 0xbc] }
	__asm { push dword ptr [ebx + 0xb00] }
	__asm { mov esi, eax }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov edx, esp }
	__asm { push ebx }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00c944e0 }
	__asm { add esp, 0x34 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x3c], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x2c], edx }
	__asm { test edx, edx }
	__asm { je L_00c95c2b }
	__asm { lea ecx, [edx + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00c95c2b }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov edx, edi }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c95c2b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c95c2b: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push ebx }
	__asm { call fn_007b5ac0 }
	__asm { push 0xefa5f4 }
	__asm { call dword ptr [g_00e1308c] }
	__asm { push ebx }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0041a990 }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { test ecx, ecx }
	__asm { je L_00c95c7c }
	__asm { add ecx, 8 }
	__asm { mov eax, 1 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { L_00c95c7c: }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push 0xc97df0 }
	__asm { push eax }
	__asm { call fn_004819a0 }
	__asm { add esp, 0x10 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_00c52980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00c52cf0 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test ecx, ecx }
	__asm { je L_00c95cc3 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c95cc3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c95cc3: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e131b4] }
	__asm { mov ecx, dword ptr [ebp - 0x54] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test ecx, ecx }
	__asm { je L_00c95ce7 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c95ce7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c95ce7: }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_00c95d0a }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c95d0a: }
	__asm { call fn_00c54de0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_0045be50 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { sete byte ptr [ebp - 0x11] }
	__asm { mov dword ptr [ebp - 0x28], edx }
	__asm { test edx, edx }
	__asm { je L_00c95d54 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c95d54 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov edx, edi }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c95d54 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c95d54: }
	__asm { cmp byte ptr [ebp - 0x11], 0 }
	__asm { je L_00c95de1 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x28], 0x8000 }
	__asm { call fn_008523c0 }
	__asm { lea ecx, [eax + 0xc88] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { add ecx, 0xc90 }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { je L_00c95de1 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c95de1 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c95de1 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c95de1 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c95de1: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e131b0] }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00c95e09 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c95e09 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c95e09: }
	__asm { call dword ptr [g_00e13084] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { test esi, esi }
	__asm { je L_00c95e2f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c95e2f: }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { push 0x7c }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { push eax }
	__asm { call fn_00c72a40 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebx + 0xb04] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009aa140 }
	__asm { lea ecx, [ebp - 0x178] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c6c320 }
	__asm { jmp L_00c95ec4 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x44] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0xefa5f8 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_004033d0 }
	__asm { mov esi, dword ptr [ebp - 0x40] }
	__asm { test esi, esi }
	__asm { je L_00c95eb8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b6760 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b5ea0 }
	__asm { L_00c95eb8: }
	__asm { mov eax, 0xc95ebe }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x3c] }
	__asm { or edi, 0xffffffff }
	__asm { L_00c95ec4: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c95ef2 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c95ef2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c95ef2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c95ef2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01313770[];
extern "C" char g_01313774[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c96b50
extern "C" __declspec(naked) void asm_00c96b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c96ecc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c96b82: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc66c70 }
	__asm { push 0x1313750 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01313774] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c96be9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313774], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c96bdd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01313770], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c96bee }
	__asm { L_00c96bdd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01313770], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c96bee }
	__asm { L_00c96be9: }
	__asm { mov eax, dword ptr [g_01313770] }
	__asm { L_00c96bee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c96c75 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c96c1b }
	__asm { add eax, -5 }
	__asm { jmp L_00c96c1d }
	__asm { L_00c96c1b: }
	__asm { xor eax, eax }
	__asm { L_00c96c1d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c96c72 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c96c72 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c96c61 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c96c72 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c96c61: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c96c72: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c96c75: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c96d65 }
	__asm { L_00c96c80: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c96d65 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c96d05 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c96ca8 }
	__asm { add eax, -5 }
	__asm { jmp L_00c96caa }
	__asm { L_00c96ca8: }
	__asm { xor eax, eax }
	__asm { L_00c96caa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c96cff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c96cff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c96cee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c96cff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c96cee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c96cff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c96d05: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c96d5a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c96d1c }
	__asm { add ebx, -5 }
	__asm { jmp L_00c96d1e }
	__asm { L_00c96d1c: }
	__asm { xor ebx, ebx }
	__asm { L_00c96d1e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c96d54 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c96d54 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c96d5a }
	__asm { L_00c96d54: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c96d5a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c96c80 }
	__asm { L_00c96d65: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c96dc9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c96dc9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c96dc9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c96dc9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c96dbf }
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
	__asm { je L_00c96dbd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c96dbf }
	__asm { L_00c96dbd: }
	__asm { mov esi, edx }
	__asm { L_00c96dbf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c96dc9: }
	__asm { test esi, esi }
	__asm { je L_00c96e30 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c96dd9 }
	__asm { add eax, -5 }
	__asm { jmp L_00c96ddb }
	__asm { L_00c96dd9: }
	__asm { xor eax, eax }
	__asm { L_00c96ddb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c96e30 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c96e30 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c96e1f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c96e30 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c96e1f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c96e30: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c96e7f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c96e47 }
	__asm { add edi, -5 }
	__asm { jmp L_00c96e49 }
	__asm { L_00c96e47: }
	__asm { xor edi, edi }
	__asm { L_00c96e49: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c96e79 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c96e79 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c96e7f }
	__asm { L_00c96e79: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c96e7f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c96ebe }
	__asm { add esi, 5 }
	__asm { je L_00c96e94 }
	__asm { add esi, -5 }
	__asm { jmp L_00c96e96 }
	__asm { L_00c96e94: }
	__asm { xor esi, esi }
	__asm { L_00c96e96: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c96ebe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c96ebe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c96ebe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c96b82 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c96ecc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c66a30();
// FUNCTION: ROBLOXSTUDIO 0x00c97600
extern "C" __declspec(naked) void asm_00c97600()
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
	__asm { je L_00c97638 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c97638: }
	__asm { push 0xc66c70 }
	__asm { push 0x1313750 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c66a30 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c97674 }
	__asm { push ebx }
	__asm { jmp L_00c97678 }
	__asm { L_00c97674: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c97678: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c976ba }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c976ba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c976ba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c976ba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c976ba: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c976fd }
	__asm { add esi, 5 }
	__asm { je L_00c976cf }
	__asm { add esi, -5 }
	__asm { jmp L_00c976d1 }
	__asm { L_00c976cf: }
	__asm { xor esi, esi }
	__asm { L_00c976d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c976fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c976fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c976fd: }
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

extern "C" char g_00e100fc[];
extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" char g_00e13190[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_0045be50();
extern "C" void fn_0067dca0();
extern "C" void fn_0083add0();
extern "C" void fn_00d0d010();
// FUNCTION: ROBLOXSTUDIO 0x00c97df0
extern "C" __declspec(naked) void asm_00c97df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65138 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xefa5c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1308c] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_0045be50 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c97f70 }
	__asm { mov edi, edi }
	__asm { L_00c97e40: }
	__asm { call fn_00d0d010 }
	__asm { test al, al }
	__asm { je L_00c97eeb }
	__asm { lea eax, [esi + 0xc88] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0x100 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc90] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00c97eeb }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c97eeb }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c97eeb }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c97eeb }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c97ee4 }
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
	__asm { je L_00c97ee2 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c97ee4 }
	__asm { L_00c97ee2: }
	__asm { mov esi, edx }
	__asm { L_00c97ee4: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c97eeb: }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { call dword ptr [g_00e100fc] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0x7d0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { call fn_0067dca0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e13190] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x24 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c97f55 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c97f55 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c97f55 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c97f55: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_0045be50 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { jne L_00c97e40 }
	__asm { L_00c97f70: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c97f9f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c97f9f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c97f9f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c97f9f: }
	__asm { call dword ptr [g_00e13084] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c97fc2 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00c97fc2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c97fc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c9e3d0();
// FUNCTION: ROBLOXSTUDIO 0x00c9c6b0
extern "C" __declspec(naked) void asm_00c9c6b0()
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
	__asm { je L_00c9c74f }
	__asm { push 0xc9e470 }
	__asm { push 0x1314128 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c9e3d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c9c715 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c9c715: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c9c74f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c9c74f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c9c74f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c9c74f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c9c74f: }
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
extern "C" char g_01314120[];
extern "C" char g_01314124[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c9c790
extern "C" __declspec(naked) void asm_00c9c790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6a0ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c9cb0c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c9c7c2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc9e460 }
	__asm { push 0x1314118 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01314124] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c9c829 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01314124], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c9c81d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01314120], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c9c82e }
	__asm { L_00c9c81d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01314120], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c9c82e }
	__asm { L_00c9c829: }
	__asm { mov eax, dword ptr [g_01314120] }
	__asm { L_00c9c82e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c9c8b5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c9c85b }
	__asm { add eax, -5 }
	__asm { jmp L_00c9c85d }
	__asm { L_00c9c85b: }
	__asm { xor eax, eax }
	__asm { L_00c9c85d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c9c8b2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c9c8b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9c8a1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9c8b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9c8a1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9c8b2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c9c8b5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c9c9a5 }
	__asm { L_00c9c8c0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c9c9a5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c9c945 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c9c8e8 }
	__asm { add eax, -5 }
	__asm { jmp L_00c9c8ea }
	__asm { L_00c9c8e8: }
	__asm { xor eax, eax }
	__asm { L_00c9c8ea: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c9c93f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c9c93f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9c92e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9c93f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9c92e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9c93f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c9c945: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c9c99a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c9c95c }
	__asm { add ebx, -5 }
	__asm { jmp L_00c9c95e }
	__asm { L_00c9c95c: }
	__asm { xor ebx, ebx }
	__asm { L_00c9c95e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9c994 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9c994 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c9c99a }
	__asm { L_00c9c994: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c9c99a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c9c8c0 }
	__asm { L_00c9c9a5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c9ca09 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c9ca09 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c9ca09 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c9ca09 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c9c9ff }
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
	__asm { je L_00c9c9fd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c9c9ff }
	__asm { L_00c9c9fd: }
	__asm { mov esi, edx }
	__asm { L_00c9c9ff: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c9ca09: }
	__asm { test esi, esi }
	__asm { je L_00c9ca70 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c9ca19 }
	__asm { add eax, -5 }
	__asm { jmp L_00c9ca1b }
	__asm { L_00c9ca19: }
	__asm { xor eax, eax }
	__asm { L_00c9ca1b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c9ca70 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c9ca70 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9ca5f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9ca70 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9ca5f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9ca70: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c9cabf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c9ca87 }
	__asm { add edi, -5 }
	__asm { jmp L_00c9ca89 }
	__asm { L_00c9ca87: }
	__asm { xor edi, edi }
	__asm { L_00c9ca89: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9cab9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9cab9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c9cabf }
	__asm { L_00c9cab9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c9cabf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c9cafe }
	__asm { add esi, 5 }
	__asm { je L_00c9cad4 }
	__asm { add esi, -5 }
	__asm { jmp L_00c9cad6 }
	__asm { L_00c9cad4: }
	__asm { xor esi, esi }
	__asm { L_00c9cad6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9cafe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9cafe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c9cafe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c9c7c2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c9cb0c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c757b0();
extern "C" void fn_00c98d50();
// FUNCTION: ROBLOXSTUDIO 0x00c9cef0
extern "C" __declspec(naked) void asm_00c9cef0()
{
	__asm { jmp fn_00c757b0 }
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
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_00c9cf68 }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { test al, al }
	__asm { je L_00c9cf52 }
	__asm { test ecx, ecx }
	__asm { jne L_00c9cf52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9cf41 }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9cf52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9cf41: }
	__asm { movzx eax, al }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9cf52: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push 0xc9d560 }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00c98d50 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop edi }
	__asm { ret }
	__asm { L_00c9cf68: }
	__asm { xor eax, eax }
	__asm { pop edi }
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
extern "C" void fn_00c9e340();
// FUNCTION: ROBLOXSTUDIO 0x00c9d270
extern "C" __declspec(naked) void asm_00c9d270()
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
	__asm { je L_00c9d2d8 }
	__asm { test ebx, ebx }
	__asm { jne L_00c9d2d8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9d2c7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9d2d8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9d2c7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9d2d8: }
	__asm { push 0xc9e460 }
	__asm { push 0x1314118 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c9e340 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00c9d318 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00c9d3cd }
	__asm { L_00c9d318: }
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
	__asm { je L_00c9d387 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00c9d387 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9d376 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9d387 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c9d376: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9d387: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c9d39f }
	__asm { add esi, -5 }
	__asm { jmp L_00c9d3a1 }
	__asm { L_00c9d39f: }
	__asm { xor esi, esi }
	__asm { L_00c9d3a1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9d3cd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9d3cd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c9d3cd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00c9d40a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c9d40a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c9d40a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c9d40a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c9d40a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00ef3434[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_00c5b3e0();
extern "C" void fn_00c9d600();
// FUNCTION: ROBLOXSTUDIO 0x00c9d4e0
extern "C" __declspec(naked) void asm_00c9d4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp fn_00c9d600 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c9d553 }
	__asm { push esi }
	__asm { call fn_00c5b3e0 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00ef3434], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { cmp ecx, eax }
	__asm { je L_00c9d553 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c9d53e }
	__asm { push 0x165 }
	__asm { push 0xf1492c }
	__asm { push 0x1004008 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9d553 }
	__asm { L_00c9d53e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9d553: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00ef3434], eax }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c9e340();
// FUNCTION: ROBLOXSTUDIO 0x00c9dad0
extern "C" __declspec(naked) void asm_00c9dad0()
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
	__asm { je L_00c9db08 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c9db08: }
	__asm { push 0xc9e460 }
	__asm { push 0x1314118 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c9e340 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c9db44 }
	__asm { push ebx }
	__asm { jmp L_00c9db48 }
	__asm { L_00c9db44: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c9db48: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c9db8a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c9db8a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c9db8a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c9db8a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c9db8a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c9dbcd }
	__asm { add esi, 5 }
	__asm { je L_00c9db9f }
	__asm { add esi, -5 }
	__asm { jmp L_00c9dba1 }
	__asm { L_00c9db9f: }
	__asm { xor esi, esi }
	__asm { L_00c9dba1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9dbcd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c9dbcd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c9dbcd: }
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

extern "C" char g_012ac178[];
extern "C" char g_012fc979[];
extern "C" void fn_006b8a90();
extern "C" void fn_007b5500();
extern "C" void fn_00842630();
extern "C" void fn_00c6b400();
// FUNCTION: ROBLOXSTUDIO 0x00c9e7a0
extern "C" __declspec(naked) void asm_00c9e7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc979] }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c9e7c6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0xefb024 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c9e7c6: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 0x7b6760 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00842630 }
	__asm { mov ecx, edi }
	__asm { call fn_007b5500 }
	__asm { mov ecx, dword ptr [edi + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x3c] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c9e817 }
	__asm { mov ecx, dword ptr [edi + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { L_00c9e817: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012ac178] }
	__asm { ret }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00ba53c0();
extern "C" void fn_00cb33f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca3a70
extern "C" __declspec(naked) void asm_00ca3a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_00ca3ab0 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00ca3ab0: }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00ca3ae7 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_00ca3ae7: }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00ca3af8 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca3af8: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00ba53c0 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { je L_00ca3b65 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_00ca3b4c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00cb33f0 }
	__asm { L_00ca3b4c: }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_00ca3b65: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00ca9080
extern "C" __declspec(naked) void asm_00ca9080()
{
	__asm { mov eax, dword ptr [ecx + 0x4684] }
	__asm { cmp dword ptr [eax + 0x248], 0 }
	__asm { jg L_00ca909b }
	__asm { cmp dword ptr [ecx + 0x4720], 2 }
	__asm { jle L_00ca909b }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_00ca909b: }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x4724] }
	__asm { call fn_006b9e50 }
	__asm { mov byte ptr [esi + 0x21a8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006c58f0();
extern "C" void fn_0083add0();
extern "C" void fn_008523c0();
extern "C" void fn_00c54240();
// FUNCTION: ROBLOXSTUDIO 0x00cab220
extern "C" __declspec(naked) void asm_00cab220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6ad90 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xefc664 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { call fn_00c54240 }
	__asm { test al, al }
	__asm { je L_00cab2f6 }
	__asm { push dword ptr [edi + 0x208] }
	__asm { mov dword ptr [ebp - 0x10], 0x2000 }
	__asm { call fn_008523c0 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 0xc88] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc90] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00cab3d3 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00cab3d3 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00cab3d3 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00cab3d3 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { jmp L_00cab3d3 }
	__asm { L_00cab2f6: }
	__asm { mov ecx, dword ptr [edi + 0x210] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi + 0x210] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edi + 0x214] }
	__asm { push dword ptr [edi + 0x208] }
	__asm { sub ecx, eax }
	__asm { mov edx, ecx }
	__asm { neg edx }
	__asm { or edx, ecx }
	__asm { shr edx, 0x1f }
	__asm { imul edx, edx, 0x7e0 }
	__asm { mov eax, 0x800 }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_008523c0 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 0xc88] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc90] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00cab3b0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00cab3b0 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00cab3b0 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00cab3b0 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00cab3b0: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006c58f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x218], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x21c], eax }
	__asm { call dword ptr [g_00e13084] }
	__asm { L_00cab3d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b6780();
// FUNCTION: ROBLOXSTUDIO 0x00cabc80
extern "C" __declspec(naked) void asm_00cabc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a3a0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00cabcad }
	__asm { add eax, 4 }
	__asm { jmp L_00cabcaf }
	__asm { L_00cabcad: }
	__asm { xor eax, eax }
	__asm { L_00cabcaf: }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { je L_00cabcbe }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b6780 }
	__asm { L_00cabcbe: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cabcf0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cabcf0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cabcf0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cabcf0: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cabd21 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cabd21 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cabd21 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cabd21: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092dc50();
extern "C" void fn_0092dc80();
extern "C" void fn_00a5d310();
extern "C" void fn_00c79ab0();
extern "C" void fn_00cabf50();
// FUNCTION: ROBLOXSTUDIO 0x00cabdd0
extern "C" __declspec(naked) void asm_00cabdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d6e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00cabf50 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { call fn_00a5d310 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00c79ab0 }
	__asm { add esp, 8 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cabe46 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cabe46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cabe46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cabe46: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { test esi, esi }
	__asm { je L_00cabf01 }
	__asm { mov eax, dword ptr [esi + 0x4740] }
	__asm { sub eax, dword ptr [esi + 0x4744] }
	__asm { mov ecx, dword ptr [ebx + 0x13c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0092dc50 }
	__asm { mov eax, dword ptr [esi + 0x4620] }
	__asm { mov ecx, dword ptr [ebx + 0x138] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0092dc80 }
	__asm { mov eax, dword ptr [esi + 0x4684] }
	__asm { test eax, eax }
	__asm { je L_00cabe99 }
	__asm { mov eax, dword ptr [eax + 0x248] }
	__asm { jmp L_00cabe9b }
	__asm { L_00cabe99: }
	__asm { xor eax, eax }
	__asm { L_00cabe9b: }
	__asm { mov ecx, dword ptr [ebx + 0x148] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0092dc50 }
	__asm { mov eax, dword ptr [esi + 0x4684] }
	__asm { test eax, eax }
	__asm { je L_00cabec1 }
	__asm { movzx eax, word ptr [eax + 0x254] }
	__asm { cwde }
	__asm { jmp L_00cabec3 }
	__asm { L_00cabec1: }
	__asm { xor eax, eax }
	__asm { L_00cabec3: }
	__asm { mov ecx, dword ptr [ebx + 0x14c] }
	__asm { cwde }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0092dc50 }
	__asm { mov eax, dword ptr [esi + 0x4684] }
	__asm { test eax, eax }
	__asm { je L_00cabeeb }
	__asm { mov eax, dword ptr [eax + 0x234] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_00cabef2 }
	__asm { L_00cabeeb: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00cabef2: }
	__asm { mov ecx, dword ptr [ebx + 0x150] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0092dc50 }
	__asm { L_00cabf01: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cabf32 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cabf32 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cabf32 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cabf32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00cb7270();
// FUNCTION: ROBLOXSTUDIO 0x00cb3640
extern "C" __declspec(naked) void asm_00cb3640()
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
	__asm { je L_00cb36df }
	__asm { push 0xcb7310 }
	__asm { push 0x13146fc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00cb7270 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cb36a5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00cb36a5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00cb36df }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00cb36df }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00cb36df }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00cb36df }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00cb36df: }
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
extern "C" char g_013146f4[];
extern "C" char g_013146f8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cb3720
extern "C" __declspec(naked) void asm_00cb3720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b71e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00cb3a9c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00cb3752: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xcb7300 }
	__asm { push 0x13146ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013146f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00cb37b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013146f8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00cb37ad }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013146f4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00cb37be }
	__asm { L_00cb37ad: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013146f4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00cb37be }
	__asm { L_00cb37b9: }
	__asm { mov eax, dword ptr [g_013146f4] }
	__asm { L_00cb37be: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00cb3845 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00cb37eb }
	__asm { add eax, -5 }
	__asm { jmp L_00cb37ed }
	__asm { L_00cb37eb: }
	__asm { xor eax, eax }
	__asm { L_00cb37ed: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cb3842 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00cb3842 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cb3831 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb3842 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cb3831: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb3842: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00cb3845: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00cb3935 }
	__asm { L_00cb3850: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00cb3935 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00cb38d5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00cb3878 }
	__asm { add eax, -5 }
	__asm { jmp L_00cb387a }
	__asm { L_00cb3878: }
	__asm { xor eax, eax }
	__asm { L_00cb387a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cb38cf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00cb38cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cb38be }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb38cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cb38be: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb38cf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00cb38d5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00cb392a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00cb38ec }
	__asm { add ebx, -5 }
	__asm { jmp L_00cb38ee }
	__asm { L_00cb38ec: }
	__asm { xor ebx, ebx }
	__asm { L_00cb38ee: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb3924 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb3924 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00cb392a }
	__asm { L_00cb3924: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00cb392a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00cb3850 }
	__asm { L_00cb3935: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00cb3999 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00cb3999 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00cb3999 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00cb3999 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00cb398f }
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
	__asm { je L_00cb398d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00cb398f }
	__asm { L_00cb398d: }
	__asm { mov esi, edx }
	__asm { L_00cb398f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00cb3999: }
	__asm { test esi, esi }
	__asm { je L_00cb3a00 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00cb39a9 }
	__asm { add eax, -5 }
	__asm { jmp L_00cb39ab }
	__asm { L_00cb39a9: }
	__asm { xor eax, eax }
	__asm { L_00cb39ab: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cb3a00 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00cb3a00 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cb39ef }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb3a00 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cb39ef: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb3a00: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00cb3a4f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00cb3a17 }
	__asm { add edi, -5 }
	__asm { jmp L_00cb3a19 }
	__asm { L_00cb3a17: }
	__asm { xor edi, edi }
	__asm { L_00cb3a19: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb3a49 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb3a49 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00cb3a4f }
	__asm { L_00cb3a49: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00cb3a4f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cb3a8e }
	__asm { add esi, 5 }
	__asm { je L_00cb3a64 }
	__asm { add esi, -5 }
	__asm { jmp L_00cb3a66 }
	__asm { L_00cb3a64: }
	__asm { xor esi, esi }
	__asm { L_00cb3a66: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb3a8e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb3a8e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00cb3a8e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00cb3752 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00cb3a9c: }
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
extern "C" void fn_00cb71e0();
// FUNCTION: ROBLOXSTUDIO 0x00cb4620
extern "C" __declspec(naked) void asm_00cb4620()
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
	__asm { je L_00cb4688 }
	__asm { test ebx, ebx }
	__asm { jne L_00cb4688 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cb4677 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb4688 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cb4677: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb4688: }
	__asm { push 0xcb7300 }
	__asm { push 0x13146ec }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00cb71e0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00cb46c8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00cb477d }
	__asm { L_00cb46c8: }
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
	__asm { je L_00cb4737 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00cb4737 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cb4726 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cb4737 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00cb4726: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cb4737: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cb474f }
	__asm { add esi, -5 }
	__asm { jmp L_00cb4751 }
	__asm { L_00cb474f: }
	__asm { xor esi, esi }
	__asm { L_00cb4751: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb477d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb477d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00cb477d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00cb47ba }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00cb47ba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00cb47ba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00cb47ba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00cb47ba: }
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
extern "C" void fn_00cb71e0();
// FUNCTION: ROBLOXSTUDIO 0x00cb5b70
extern "C" __declspec(naked) void asm_00cb5b70()
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
	__asm { je L_00cb5ba8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00cb5ba8: }
	__asm { push 0xcb7300 }
	__asm { push 0x13146ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00cb71e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00cb5be4 }
	__asm { push ebx }
	__asm { jmp L_00cb5be8 }
	__asm { L_00cb5be4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00cb5be8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00cb5c2a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00cb5c2a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00cb5c2a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00cb5c2a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00cb5c2a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cb5c6d }
	__asm { add esi, 5 }
	__asm { je L_00cb5c3f }
	__asm { add esi, -5 }
	__asm { jmp L_00cb5c41 }
	__asm { L_00cb5c3f: }
	__asm { xor esi, esi }
	__asm { L_00cb5c41: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb5c6d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00cb5c6d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00cb5c6d: }
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

// (empty)

// (empty)

// (empty)

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

extern "C" char g_00e1025c[];
extern "C" void fn_00adee70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ce1600
extern "C" __declspec(naked) void asm_00ce1600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_00ce1652 }
	__asm { push 0x68 }
	__asm { mov word ptr [ebx + 8], cx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00ce1628 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ce1628: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0x1a }
	__asm { lea esi, [ebp - 0x68] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce1652: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00ce1661 }
	__asm { call fn_00adee70 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_00ce1661: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce1760
extern "C" __declspec(naked) void asm_00ce1760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { div dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { add esi, 0x60 }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { L_00ce1798: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_00ce17a2 }
	__asm { mov edi, eax }
	__asm { jmp L_00ce1798 }
	__asm { L_00ce17a2: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00ce17ad }
	__asm { add esi, -0x60 }
	__asm { jmp L_00ce17af }
	__asm { L_00ce17ad: }
	__asm { xor esi, esi }
	__asm { L_00ce17af: }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce17eb }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce17eb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce17eb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce17eb: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00ce181f }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce181f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce181f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce181f: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00ce184b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { cmp ecx, edx }
	__asm { je L_00ce185a }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], edi }
	__asm { L_00ce184b: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + ecx*4], edi }
	__asm { jne L_00ce185a }
	__asm { mov dword ptr [eax + ecx*4], 0 }
	__asm { L_00ce185a: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { test eax, eax }
	__asm { je L_00ce1869 }
	__asm { add eax, 0x60 }
	__asm { jmp L_00ce186b }
	__asm { L_00ce1869: }
	__asm { xor eax, eax }
	__asm { L_00ce186b: }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00ce17a2 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0052a020();
extern "C" void fn_006b9740();
extern "C" void fn_00cd9250();
extern "C" void fn_00cda560();
// FUNCTION: ROBLOXSTUDIO 0x00ce1890
extern "C" __declspec(naked) void asm_00ce1890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0052a020 }
	__asm { add esp, 8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00ce1912 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { jne L_00ce1912 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ce1901 }
	__asm { push 0xef }
	__asm { push 0xf038d0 }
	__asm { push 0xe67470 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce1912 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ce1901: }
	__asm { movzx eax, al }
	__asm { push 0xf03c40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce1912: }
	__asm { mov ebx, dword ptr [edi + 0xa0] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [edi + 0xa0] }
	__asm { push ebx }
	__asm { call fn_00cd9250 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 0xa0] }
	__asm { mov esi, eax }
	__asm { call fn_00cda560 }
	__asm { mov dword ptr [ebx + 4], esi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ce1974 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce1974 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce1974 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce1974: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce19a5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce19a5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce19a5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce19a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403160();
extern "C" void fn_00427a20();
extern "C" void fn_00c6c320();
extern "C" void fn_00cb9510();
extern "C" void fn_00cb9700();
extern "C" void fn_00ce8180();
extern "C" void fn_00ce8530();
extern "C" void fn_00cf2470();
extern "C" void fn_00cf4f00();
extern "C" void fn_00cf4fc0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ce6a80
extern "C" __declspec(naked) void asm_00ce6a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e14d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xf044a4 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0x16 }
	__asm { call fn_00cf2470 }
	__asm { mov ecx, edi }
	__asm { call fn_00ce8530 }
	__asm { call fn_00cb9510 }
	__asm { call fn_00cb9700 }
	__asm { call fn_00cf4fc0 }
	__asm { lea ecx, [edi + 0x56c] }
	__asm { call fn_00cf4f00 }
	__asm { lea ecx, [edi + 0x5c8] }
	__asm { mov byte ptr [ebp - 4], 0x15 }
	__asm { call fn_00427a20 }
	__asm { cmp dword ptr [edi + 0x5c4], 0 }
	__asm { jbe L_00ce6b01 }
	__asm { push dword ptr [edi + 0x5b8] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6b01: }
	__asm { lea ecx, [edi + 0x5a0] }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { call fn_00427a20 }
	__asm { push 0x53 }
	__asm { push 0xeff408 }
	__asm { lea ecx, [edi + 0x58c] }
	__asm { mov byte ptr [ebp - 4], 0x12 }
	__asm { call fn_00ce8180 }
	__asm { lea ecx, [edi + 0x574] }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { call fn_00427a20 }
	__asm { lea ecx, [edi + 0x56c] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { call fn_00403160 }
	__asm { cmp dword ptr [edi + 0x494], 0 }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { jbe L_00ce6b77 }
	__asm { mov eax, dword ptr [edi + 0x48c] }
	__asm { test eax, eax }
	__asm { je L_00ce6b77 }
	__asm { push 0xcc4df0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 4 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6b77: }
	__asm { cmp dword ptr [edi + 0x434], 0 }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { jbe L_00ce6baa }
	__asm { mov eax, dword ptr [edi + 0x42c] }
	__asm { test eax, eax }
	__asm { je L_00ce6baa }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6baa: }
	__asm { lea ecx, [edi + 0x40c] }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_00427a20 }
	__asm { lea esi, [edi + 0x3b8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0x19 }
	__asm { call fn_00427a20 }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { jbe L_00ce6bdf }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6bdf: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0x17 }
	__asm { call fn_00427a20 }
	__asm { push 0x53 }
	__asm { push 0xeff408 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { call fn_00ce8180 }
	__asm { lea esi, [edi + 0x364] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0x1c }
	__asm { call fn_00427a20 }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { jbe L_00ce6c23 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6c23: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0x1a }
	__asm { call fn_00427a20 }
	__asm { push 0x53 }
	__asm { push 0xeff408 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_00ce8180 }
	__asm { lea esi, [edi + 0x310] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0x1f }
	__asm { call fn_00427a20 }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { jbe L_00ce6c67 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6c67: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0x1d }
	__asm { call fn_00427a20 }
	__asm { push 0x53 }
	__asm { push 0xeff408 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_00ce8180 }
	__asm { lea ecx, [edi + 0x2f8] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_00427a20 }
	__asm { cmp dword ptr [edi + 0x2f4], 0 }
	__asm { jbe L_00ce6cab }
	__asm { push dword ptr [edi + 0x2e8] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6cab: }
	__asm { cmp dword ptr [edi + 0x2e4], 0 }
	__asm { jbe L_00ce6cc2 }
	__asm { push dword ptr [edi + 0x2dc] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6cc2: }
	__asm { cmp dword ptr [edi + 0x2d8], 0 }
	__asm { jbe L_00ce6cd9 }
	__asm { push dword ptr [edi + 0x2d0] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6cd9: }
	__asm { cmp dword ptr [edi + 0x2cc], 0 }
	__asm { jbe L_00ce6cf0 }
	__asm { push dword ptr [edi + 0x2c4] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ce6cf0: }
	__asm { lea ecx, [edi + 0x2ac] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00427a20 }
	__asm { lea ecx, [edi + 0x294] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00427a20 }
	__asm { push 0x427a20 }
	__asm { push 2 }
	__asm { push 0x18 }
	__asm { lea eax, [edi + 0x254] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf669e }
	__asm { push 0x53 }
	__asm { push 0xeff408 }
	__asm { lea ecx, [edi + 0x240] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00ce8180 }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xf04354 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xf04354 }
	__asm { ret }
}

extern "C" void fn_00ccfe40();
// FUNCTION: ROBLOXSTUDIO 0x00ceb9b0
extern "C" __declspec(naked) void asm_00ceb9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00ccfe40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ebx, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp ebx, ecx }
	__asm { jb L_00ceb9e0 }
	__asm { ja L_00ceb9d3 }
	__asm { cmp eax, edx }
	__asm { jbe L_00ceb9e0 }
	__asm { L_00ceb9d3: }
	__asm { mov edi, eax }
	__asm { sub edi, edx }
	__asm { mov eax, ebx }
	__asm { sbb eax, ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { jmp L_00ceb9e5 }
	__asm { L_00ceb9e0: }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { L_00ceb9e5: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x11b8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add eax, eax }
	__asm { mov word ptr [esi + eax*8 + 0x1168], di }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { shrd eax, ebx, 1 }
	__asm { shr ebx, 1 }
	__asm { sub edx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sbb ecx, ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { shrd ebx, eax, 1 }
	__asm { shr eax, 1 }
	__asm { sub edx, ebx }
	__asm { sbb ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x11b8] }
	__asm { add eax, 0x117 }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + eax*8], edx }
	__asm { mov dword ptr [esi + eax*8 + 4], ecx }
	__asm { movzx eax, word ptr [esi + 0x11c0] }
	__asm { mov ecx, 0xffff }
	__asm { cmp ax, cx }
	__asm { je L_00ceba44 }
	__asm { cmp eax, edi }
	__asm { jle L_00ceba4b }
	__asm { L_00ceba44: }
	__asm { mov word ptr [esi + 0x11c0], di }
	__asm { L_00ceba4b: }
	__asm { add dword ptr [esi + 0x11b8], 1 }
	__asm { adc dword ptr [esi + 0x11bc], 0 }
	__asm { cmp dword ptr [esi + 0x11b8], 5 }
	__asm { jne L_00ceba7f }
	__asm { cmp dword ptr [esi + 0x11bc], 0 }
	__asm { jne L_00ceba7f }
	__asm { mov dword ptr [esi + 0x11b8], 0 }
	__asm { mov dword ptr [esi + 0x11bc], 0 }
	__asm { L_00ceba7f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
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
