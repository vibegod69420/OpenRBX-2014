// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00aec1f0();
// FUNCTION: ROBLOXSTUDIO 0x00aea1a0
extern "C" __declspec(naked) void asm_00aea1a0()
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
	__asm { je L_00aea23f }
	__asm { push 0xaec2d0 }
	__asm { push 0x130c7b0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aec1f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00aea205 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00aea205: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00aea23f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aea23f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aea23f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aea23f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aea23f: }
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
extern "C" char g_0130c790[];
extern "C" char g_0130c794[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aea2e0
extern "C" __declspec(naked) void asm_00aea2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51ebe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aea65c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00aea312: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xaec280 }
	__asm { push 0x130c778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130c794] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00aea379 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c794], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aea36d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c790], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00aea37e }
	__asm { L_00aea36d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c790], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00aea37e }
	__asm { L_00aea379: }
	__asm { mov eax, dword ptr [g_0130c790] }
	__asm { L_00aea37e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00aea405 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aea3ab }
	__asm { add eax, -5 }
	__asm { jmp L_00aea3ad }
	__asm { L_00aea3ab: }
	__asm { xor eax, eax }
	__asm { L_00aea3ad: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aea402 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aea402 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aea3f1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aea402 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aea3f1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aea402: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00aea405: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00aea4f5 }
	__asm { L_00aea410: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00aea4f5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00aea495 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aea438 }
	__asm { add eax, -5 }
	__asm { jmp L_00aea43a }
	__asm { L_00aea438: }
	__asm { xor eax, eax }
	__asm { L_00aea43a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aea48f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00aea48f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aea47e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aea48f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aea47e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aea48f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aea495: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00aea4ea }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00aea4ac }
	__asm { add ebx, -5 }
	__asm { jmp L_00aea4ae }
	__asm { L_00aea4ac: }
	__asm { xor ebx, ebx }
	__asm { L_00aea4ae: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea4e4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea4e4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aea4ea }
	__asm { L_00aea4e4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aea4ea: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00aea410 }
	__asm { L_00aea4f5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00aea559 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aea559 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aea559 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aea559 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00aea54f }
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
	__asm { je L_00aea54d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00aea54f }
	__asm { L_00aea54d: }
	__asm { mov esi, edx }
	__asm { L_00aea54f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00aea559: }
	__asm { test esi, esi }
	__asm { je L_00aea5c0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aea569 }
	__asm { add eax, -5 }
	__asm { jmp L_00aea56b }
	__asm { L_00aea569: }
	__asm { xor eax, eax }
	__asm { L_00aea56b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aea5c0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aea5c0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aea5af }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aea5c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aea5af: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aea5c0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00aea60f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00aea5d7 }
	__asm { add edi, -5 }
	__asm { jmp L_00aea5d9 }
	__asm { L_00aea5d7: }
	__asm { xor edi, edi }
	__asm { L_00aea5d9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea609 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea609 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aea60f }
	__asm { L_00aea609: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aea60f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aea64e }
	__asm { add esi, 5 }
	__asm { je L_00aea624 }
	__asm { add esi, -5 }
	__asm { jmp L_00aea626 }
	__asm { L_00aea624: }
	__asm { xor esi, esi }
	__asm { L_00aea626: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea64e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea64e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00aea64e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00aea312 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00aea65c: }
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
extern "C" char g_0130c7a0[];
extern "C" char g_0130c7a4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aea670
extern "C" __declspec(naked) void asm_00aea670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51eee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aea9ec }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00aea6a2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xaec290 }
	__asm { push 0x130c788 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130c7a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00aea709 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c7a4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aea6fd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c7a0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00aea70e }
	__asm { L_00aea6fd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c7a0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00aea70e }
	__asm { L_00aea709: }
	__asm { mov eax, dword ptr [g_0130c7a0] }
	__asm { L_00aea70e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00aea795 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aea73b }
	__asm { add eax, -5 }
	__asm { jmp L_00aea73d }
	__asm { L_00aea73b: }
	__asm { xor eax, eax }
	__asm { L_00aea73d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aea792 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aea792 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aea781 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aea792 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aea781: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aea792: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00aea795: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00aea885 }
	__asm { L_00aea7a0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00aea885 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00aea825 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aea7c8 }
	__asm { add eax, -5 }
	__asm { jmp L_00aea7ca }
	__asm { L_00aea7c8: }
	__asm { xor eax, eax }
	__asm { L_00aea7ca: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aea81f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00aea81f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aea80e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aea81f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aea80e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aea81f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aea825: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00aea87a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00aea83c }
	__asm { add ebx, -5 }
	__asm { jmp L_00aea83e }
	__asm { L_00aea83c: }
	__asm { xor ebx, ebx }
	__asm { L_00aea83e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea874 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea874 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aea87a }
	__asm { L_00aea874: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aea87a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00aea7a0 }
	__asm { L_00aea885: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00aea8e9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aea8e9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aea8e9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aea8e9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00aea8df }
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
	__asm { je L_00aea8dd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00aea8df }
	__asm { L_00aea8dd: }
	__asm { mov esi, edx }
	__asm { L_00aea8df: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00aea8e9: }
	__asm { test esi, esi }
	__asm { je L_00aea950 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aea8f9 }
	__asm { add eax, -5 }
	__asm { jmp L_00aea8fb }
	__asm { L_00aea8f9: }
	__asm { xor eax, eax }
	__asm { L_00aea8fb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aea950 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aea950 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aea93f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aea950 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aea93f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aea950: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00aea99f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00aea967 }
	__asm { add edi, -5 }
	__asm { jmp L_00aea969 }
	__asm { L_00aea967: }
	__asm { xor edi, edi }
	__asm { L_00aea969: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea999 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea999 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aea99f }
	__asm { L_00aea999: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aea99f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aea9de }
	__asm { add esi, 5 }
	__asm { je L_00aea9b4 }
	__asm { add esi, -5 }
	__asm { jmp L_00aea9b6 }
	__asm { L_00aea9b4: }
	__asm { xor esi, esi }
	__asm { L_00aea9b6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea9de }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aea9de }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00aea9de: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00aea6a2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00aea9ec: }
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
extern "C" char g_0130c798[];
extern "C" char g_0130c79c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aeaa00
extern "C" __declspec(naked) void asm_00aeaa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51f1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aead7c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00aeaa32: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xaec2a0 }
	__asm { push 0x130c780 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130c79c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00aeaa99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c79c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aeaa8d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c798], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00aeaa9e }
	__asm { L_00aeaa8d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c798], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00aeaa9e }
	__asm { L_00aeaa99: }
	__asm { mov eax, dword ptr [g_0130c798] }
	__asm { L_00aeaa9e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00aeab25 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aeaacb }
	__asm { add eax, -5 }
	__asm { jmp L_00aeaacd }
	__asm { L_00aeaacb: }
	__asm { xor eax, eax }
	__asm { L_00aeaacd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aeab22 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aeab22 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeab11 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeab22 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeab11: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeab22: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00aeab25: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00aeac15 }
	__asm { L_00aeab30: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00aeac15 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00aeabb5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aeab58 }
	__asm { add eax, -5 }
	__asm { jmp L_00aeab5a }
	__asm { L_00aeab58: }
	__asm { xor eax, eax }
	__asm { L_00aeab5a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aeabaf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00aeabaf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeab9e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeabaf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeab9e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeabaf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aeabb5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00aeac0a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00aeabcc }
	__asm { add ebx, -5 }
	__asm { jmp L_00aeabce }
	__asm { L_00aeabcc: }
	__asm { xor ebx, ebx }
	__asm { L_00aeabce: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeac04 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeac04 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aeac0a }
	__asm { L_00aeac04: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aeac0a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00aeab30 }
	__asm { L_00aeac15: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00aeac79 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aeac79 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aeac79 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aeac79 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00aeac6f }
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
	__asm { je L_00aeac6d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00aeac6f }
	__asm { L_00aeac6d: }
	__asm { mov esi, edx }
	__asm { L_00aeac6f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00aeac79: }
	__asm { test esi, esi }
	__asm { je L_00aeace0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aeac89 }
	__asm { add eax, -5 }
	__asm { jmp L_00aeac8b }
	__asm { L_00aeac89: }
	__asm { xor eax, eax }
	__asm { L_00aeac8b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aeace0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aeace0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeaccf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeace0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeaccf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeace0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00aead2f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00aeacf7 }
	__asm { add edi, -5 }
	__asm { jmp L_00aeacf9 }
	__asm { L_00aeacf7: }
	__asm { xor edi, edi }
	__asm { L_00aeacf9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aead29 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aead29 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aead2f }
	__asm { L_00aead29: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aead2f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aead6e }
	__asm { add esi, 5 }
	__asm { je L_00aead44 }
	__asm { add esi, -5 }
	__asm { jmp L_00aead46 }
	__asm { L_00aead44: }
	__asm { xor esi, esi }
	__asm { L_00aead46: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aead6e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aead6e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00aead6e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00aeaa32 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00aead7c: }
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
extern "C" void fn_00aebf20();
// FUNCTION: ROBLOXSTUDIO 0x00aeb140
extern "C" __declspec(naked) void asm_00aeb140()
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
	__asm { je L_00aeb1a8 }
	__asm { test ebx, ebx }
	__asm { jne L_00aeb1a8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeb197 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb1a8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeb197: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb1a8: }
	__asm { push 0xaec280 }
	__asm { push 0x130c778 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aebf20 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00aeb1e8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00aeb29d }
	__asm { L_00aeb1e8: }
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
	__asm { je L_00aeb257 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00aeb257 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aeb246 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb257 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00aeb246: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb257: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aeb26f }
	__asm { add esi, -5 }
	__asm { jmp L_00aeb271 }
	__asm { L_00aeb26f: }
	__asm { xor esi, esi }
	__asm { L_00aeb271: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeb29d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeb29d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aeb29d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00aeb2da }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aeb2da }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aeb2da }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aeb2da }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aeb2da: }
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
extern "C" void fn_00aebfb0();
// FUNCTION: ROBLOXSTUDIO 0x00aeb2f0
extern "C" __declspec(naked) void asm_00aeb2f0()
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
	__asm { je L_00aeb358 }
	__asm { test ebx, ebx }
	__asm { jne L_00aeb358 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeb347 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb358 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeb347: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb358: }
	__asm { push 0xaec290 }
	__asm { push 0x130c788 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aebfb0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00aeb398 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00aeb44d }
	__asm { L_00aeb398: }
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
	__asm { je L_00aeb407 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00aeb407 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aeb3f6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb407 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00aeb3f6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb407: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aeb41f }
	__asm { add esi, -5 }
	__asm { jmp L_00aeb421 }
	__asm { L_00aeb41f: }
	__asm { xor esi, esi }
	__asm { L_00aeb421: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeb44d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeb44d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aeb44d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00aeb48a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aeb48a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aeb48a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aeb48a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aeb48a: }
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
extern "C" void fn_00aec040();
// FUNCTION: ROBLOXSTUDIO 0x00aeb4a0
extern "C" __declspec(naked) void asm_00aeb4a0()
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
	__asm { je L_00aeb508 }
	__asm { test ebx, ebx }
	__asm { jne L_00aeb508 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeb4f7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb508 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeb4f7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb508: }
	__asm { push 0xaec2a0 }
	__asm { push 0x130c780 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aec040 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00aeb548 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00aeb5fd }
	__asm { L_00aeb548: }
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
	__asm { je L_00aeb5b7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00aeb5b7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aeb5a6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb5b7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00aeb5a6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb5b7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aeb5cf }
	__asm { add esi, -5 }
	__asm { jmp L_00aeb5d1 }
	__asm { L_00aeb5cf: }
	__asm { xor esi, esi }
	__asm { L_00aeb5d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeb5fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aeb5fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aeb5fd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00aeb63a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aeb63a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aeb63a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aeb63a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aeb63a: }
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
extern "C" void fn_00aebf20();
// FUNCTION: ROBLOXSTUDIO 0x00aeba10
extern "C" __declspec(naked) void asm_00aeba10()
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
	__asm { je L_00aeba48 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00aeba48: }
	__asm { push 0xaec280 }
	__asm { push 0x130c778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aebf20 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00aeba84 }
	__asm { push ebx }
	__asm { jmp L_00aeba88 }
	__asm { L_00aeba84: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00aeba88: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00aebaca }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aebaca }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aebaca }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aebaca }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aebaca: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aebb0d }
	__asm { add esi, 5 }
	__asm { je L_00aebadf }
	__asm { add esi, -5 }
	__asm { jmp L_00aebae1 }
	__asm { L_00aebadf: }
	__asm { xor esi, esi }
	__asm { L_00aebae1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aebb0d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aebb0d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aebb0d: }
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
extern "C" void fn_00aebfb0();
// FUNCTION: ROBLOXSTUDIO 0x00aebb30
extern "C" __declspec(naked) void asm_00aebb30()
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
	__asm { je L_00aebb68 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00aebb68: }
	__asm { push 0xaec290 }
	__asm { push 0x130c788 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aebfb0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00aebba4 }
	__asm { push ebx }
	__asm { jmp L_00aebba8 }
	__asm { L_00aebba4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00aebba8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00aebbea }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aebbea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aebbea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aebbea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aebbea: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aebc2d }
	__asm { add esi, 5 }
	__asm { je L_00aebbff }
	__asm { add esi, -5 }
	__asm { jmp L_00aebc01 }
	__asm { L_00aebbff: }
	__asm { xor esi, esi }
	__asm { L_00aebc01: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aebc2d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aebc2d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aebc2d: }
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
