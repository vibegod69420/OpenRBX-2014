// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130e3ac[];
extern "C" char g_0130e3b0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b21790
extern "C" __declspec(naked) void asm_00b21790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5601e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b21b0c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b217c2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb238e0 }
	__asm { push 0x130e394 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e3b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b21829 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3b0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b2181d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e3ac], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b2182e }
	__asm { L_00b2181d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e3ac], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b2182e }
	__asm { L_00b21829: }
	__asm { mov eax, dword ptr [g_0130e3ac] }
	__asm { L_00b2182e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b218b5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b2185b }
	__asm { add eax, -5 }
	__asm { jmp L_00b2185d }
	__asm { L_00b2185b: }
	__asm { xor eax, eax }
	__asm { L_00b2185d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b218b2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b218b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b218a1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b218b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b218a1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b218b2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b218b5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b219a5 }
	__asm { L_00b218c0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b219a5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b21945 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b218e8 }
	__asm { add eax, -5 }
	__asm { jmp L_00b218ea }
	__asm { L_00b218e8: }
	__asm { xor eax, eax }
	__asm { L_00b218ea: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b2193f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b2193f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b2192e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b2193f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b2192e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b2193f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b21945: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b2199a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b2195c }
	__asm { add ebx, -5 }
	__asm { jmp L_00b2195e }
	__asm { L_00b2195c: }
	__asm { xor ebx, ebx }
	__asm { L_00b2195e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21994 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21994 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b2199a }
	__asm { L_00b21994: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b2199a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b218c0 }
	__asm { L_00b219a5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b21a09 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b21a09 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b21a09 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b21a09 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b219ff }
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
	__asm { je L_00b219fd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b219ff }
	__asm { L_00b219fd: }
	__asm { mov esi, edx }
	__asm { L_00b219ff: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b21a09: }
	__asm { test esi, esi }
	__asm { je L_00b21a70 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b21a19 }
	__asm { add eax, -5 }
	__asm { jmp L_00b21a1b }
	__asm { L_00b21a19: }
	__asm { xor eax, eax }
	__asm { L_00b21a1b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b21a70 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b21a70 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b21a5f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b21a70 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b21a5f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b21a70: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b21abf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b21a87 }
	__asm { add edi, -5 }
	__asm { jmp L_00b21a89 }
	__asm { L_00b21a87: }
	__asm { xor edi, edi }
	__asm { L_00b21a89: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21ab9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21ab9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b21abf }
	__asm { L_00b21ab9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b21abf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b21afe }
	__asm { add esi, 5 }
	__asm { je L_00b21ad4 }
	__asm { add esi, -5 }
	__asm { jmp L_00b21ad6 }
	__asm { L_00b21ad4: }
	__asm { xor esi, esi }
	__asm { L_00b21ad6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21afe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21afe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b21afe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b217c2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b21b0c: }
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
extern "C" char g_0130e39c[];
extern "C" char g_0130e3a0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b21b20
extern "C" __declspec(naked) void asm_00b21b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5604e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b21e9c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b21b52: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb238f0 }
	__asm { push 0x130e384 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e3a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b21bb9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3a0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b21bad }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e39c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b21bbe }
	__asm { L_00b21bad: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e39c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b21bbe }
	__asm { L_00b21bb9: }
	__asm { mov eax, dword ptr [g_0130e39c] }
	__asm { L_00b21bbe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b21c45 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b21beb }
	__asm { add eax, -5 }
	__asm { jmp L_00b21bed }
	__asm { L_00b21beb: }
	__asm { xor eax, eax }
	__asm { L_00b21bed: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b21c42 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b21c42 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b21c31 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b21c42 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b21c31: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b21c42: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b21c45: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b21d35 }
	__asm { L_00b21c50: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b21d35 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b21cd5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b21c78 }
	__asm { add eax, -5 }
	__asm { jmp L_00b21c7a }
	__asm { L_00b21c78: }
	__asm { xor eax, eax }
	__asm { L_00b21c7a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b21ccf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b21ccf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b21cbe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b21ccf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b21cbe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b21ccf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b21cd5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b21d2a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b21cec }
	__asm { add ebx, -5 }
	__asm { jmp L_00b21cee }
	__asm { L_00b21cec: }
	__asm { xor ebx, ebx }
	__asm { L_00b21cee: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21d24 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21d24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b21d2a }
	__asm { L_00b21d24: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b21d2a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b21c50 }
	__asm { L_00b21d35: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b21d99 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b21d99 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b21d99 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b21d99 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b21d8f }
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
	__asm { je L_00b21d8d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b21d8f }
	__asm { L_00b21d8d: }
	__asm { mov esi, edx }
	__asm { L_00b21d8f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b21d99: }
	__asm { test esi, esi }
	__asm { je L_00b21e00 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b21da9 }
	__asm { add eax, -5 }
	__asm { jmp L_00b21dab }
	__asm { L_00b21da9: }
	__asm { xor eax, eax }
	__asm { L_00b21dab: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b21e00 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b21e00 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b21def }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b21e00 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b21def: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b21e00: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b21e4f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b21e17 }
	__asm { add edi, -5 }
	__asm { jmp L_00b21e19 }
	__asm { L_00b21e17: }
	__asm { xor edi, edi }
	__asm { L_00b21e19: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21e49 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21e49 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b21e4f }
	__asm { L_00b21e49: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b21e4f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b21e8e }
	__asm { add esi, 5 }
	__asm { je L_00b21e64 }
	__asm { add esi, -5 }
	__asm { jmp L_00b21e66 }
	__asm { L_00b21e64: }
	__asm { xor esi, esi }
	__asm { L_00b21e66: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21e8e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21e8e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b21e8e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b21b52 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b21e9c: }
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
extern "C" void fn_00b23570();
// FUNCTION: ROBLOXSTUDIO 0x00b22560
extern "C" __declspec(naked) void asm_00b22560()
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
	__asm { je L_00b225c8 }
	__asm { test ebx, ebx }
	__asm { jne L_00b225c8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b225b7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b225c8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b225b7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b225c8: }
	__asm { push 0xb238d0 }
	__asm { push 0x130e38c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b23570 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b22608 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b226bd }
	__asm { L_00b22608: }
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
	__asm { je L_00b22677 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b22677 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b22666 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b22677 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b22666: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b22677: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b2268f }
	__asm { add esi, -5 }
	__asm { jmp L_00b22691 }
	__asm { L_00b2268f: }
	__asm { xor esi, esi }
	__asm { L_00b22691: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b226bd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b226bd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b226bd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b226fa }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b226fa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b226fa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b226fa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b226fa: }
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
extern "C" void fn_00b23600();
// FUNCTION: ROBLOXSTUDIO 0x00b22710
extern "C" __declspec(naked) void asm_00b22710()
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
	__asm { je L_00b22778 }
	__asm { test ebx, ebx }
	__asm { jne L_00b22778 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b22767 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b22778 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b22767: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b22778: }
	__asm { push 0xb238e0 }
	__asm { push 0x130e394 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b23600 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b227b8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b2286d }
	__asm { L_00b227b8: }
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
	__asm { je L_00b22827 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b22827 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b22816 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b22827 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b22816: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b22827: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b2283f }
	__asm { add esi, -5 }
	__asm { jmp L_00b22841 }
	__asm { L_00b2283f: }
	__asm { xor esi, esi }
	__asm { L_00b22841: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2286d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2286d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b2286d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b228aa }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b228aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b228aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b228aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b228aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
