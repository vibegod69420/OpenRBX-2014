// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_008c6740();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x008c4550
extern "C" __declspec(naked) void asm_008c4550()
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
	__asm { je L_008c45ef }
	__asm { push 0x8c6890 }
	__asm { push 0x12fcfd0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008c6740 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c45b5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_008c45b5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008c45ef }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c45ef }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c45ef }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c45ef }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008c45ef: }
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
extern "C" void fn_008c67d0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x008c4600
extern "C" __declspec(naked) void asm_008c4600()
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
	__asm { je L_008c469f }
	__asm { push 0x8c68a0 }
	__asm { push 0x12fcfc8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008c67d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c4665 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_008c4665: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008c469f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c469f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c469f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c469f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008c469f: }
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
extern "C" char g_012fcfb8[];
extern "C" char g_012fcfbc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c4710
extern "C" __declspec(naked) void asm_008c4710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2edde }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008c4a8c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008c4742: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8c6860 }
	__asm { push 0x12fcfa0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fcfbc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008c47a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfbc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c479d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfb8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_008c47ae }
	__asm { L_008c479d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfb8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_008c47ae }
	__asm { L_008c47a9: }
	__asm { mov eax, dword ptr [g_012fcfb8] }
	__asm { L_008c47ae: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008c4835 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c47db }
	__asm { add eax, -5 }
	__asm { jmp L_008c47dd }
	__asm { L_008c47db: }
	__asm { xor eax, eax }
	__asm { L_008c47dd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c4832 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008c4832 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c4821 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c4832 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c4821: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c4832: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008c4835: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_008c4925 }
	__asm { L_008c4840: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_008c4925 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_008c48c5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4868 }
	__asm { add eax, -5 }
	__asm { jmp L_008c486a }
	__asm { L_008c4868: }
	__asm { xor eax, eax }
	__asm { L_008c486a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c48bf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_008c48bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c48ae }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c48bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c48ae: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c48bf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c48c5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_008c491a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_008c48dc }
	__asm { add ebx, -5 }
	__asm { jmp L_008c48de }
	__asm { L_008c48dc: }
	__asm { xor ebx, ebx }
	__asm { L_008c48de: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4914 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4914 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008c491a }
	__asm { L_008c4914: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c491a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008c4840 }
	__asm { L_008c4925: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008c4989 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c4989 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c4989 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c4989 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008c497f }
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
	__asm { je L_008c497d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008c497f }
	__asm { L_008c497d: }
	__asm { mov esi, edx }
	__asm { L_008c497f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008c4989: }
	__asm { test esi, esi }
	__asm { je L_008c49f0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4999 }
	__asm { add eax, -5 }
	__asm { jmp L_008c499b }
	__asm { L_008c4999: }
	__asm { xor eax, eax }
	__asm { L_008c499b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c49f0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008c49f0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c49df }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c49f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c49df: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c49f0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_008c4a3f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_008c4a07 }
	__asm { add edi, -5 }
	__asm { jmp L_008c4a09 }
	__asm { L_008c4a07: }
	__asm { xor edi, edi }
	__asm { L_008c4a09: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4a39 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4a39 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008c4a3f }
	__asm { L_008c4a39: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c4a3f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c4a7e }
	__asm { add esi, 5 }
	__asm { je L_008c4a54 }
	__asm { add esi, -5 }
	__asm { jmp L_008c4a56 }
	__asm { L_008c4a54: }
	__asm { xor esi, esi }
	__asm { L_008c4a56: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4a7e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4a7e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008c4a7e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008c4742 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008c4a8c: }
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
extern "C" char g_012fcfb0[];
extern "C" char g_012fcfb4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c4aa0
extern "C" __declspec(naked) void asm_008c4aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ee0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008c4e1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008c4ad2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8c6870 }
	__asm { push 0x12fcf98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fcfb4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008c4b39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfb4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c4b2d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfb0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_008c4b3e }
	__asm { L_008c4b2d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfb0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_008c4b3e }
	__asm { L_008c4b39: }
	__asm { mov eax, dword ptr [g_012fcfb0] }
	__asm { L_008c4b3e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008c4bc5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4b6b }
	__asm { add eax, -5 }
	__asm { jmp L_008c4b6d }
	__asm { L_008c4b6b: }
	__asm { xor eax, eax }
	__asm { L_008c4b6d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c4bc2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008c4bc2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c4bb1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c4bc2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c4bb1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c4bc2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008c4bc5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_008c4cb5 }
	__asm { L_008c4bd0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_008c4cb5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_008c4c55 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4bf8 }
	__asm { add eax, -5 }
	__asm { jmp L_008c4bfa }
	__asm { L_008c4bf8: }
	__asm { xor eax, eax }
	__asm { L_008c4bfa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c4c4f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_008c4c4f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c4c3e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c4c4f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c4c3e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c4c4f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c4c55: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_008c4caa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_008c4c6c }
	__asm { add ebx, -5 }
	__asm { jmp L_008c4c6e }
	__asm { L_008c4c6c: }
	__asm { xor ebx, ebx }
	__asm { L_008c4c6e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4ca4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4ca4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008c4caa }
	__asm { L_008c4ca4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c4caa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008c4bd0 }
	__asm { L_008c4cb5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008c4d19 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c4d19 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c4d19 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c4d19 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008c4d0f }
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
	__asm { je L_008c4d0d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008c4d0f }
	__asm { L_008c4d0d: }
	__asm { mov esi, edx }
	__asm { L_008c4d0f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008c4d19: }
	__asm { test esi, esi }
	__asm { je L_008c4d80 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4d29 }
	__asm { add eax, -5 }
	__asm { jmp L_008c4d2b }
	__asm { L_008c4d29: }
	__asm { xor eax, eax }
	__asm { L_008c4d2b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c4d80 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008c4d80 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c4d6f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c4d80 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c4d6f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c4d80: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_008c4dcf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_008c4d97 }
	__asm { add edi, -5 }
	__asm { jmp L_008c4d99 }
	__asm { L_008c4d97: }
	__asm { xor edi, edi }
	__asm { L_008c4d99: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4dc9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4dc9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008c4dcf }
	__asm { L_008c4dc9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c4dcf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c4e0e }
	__asm { add esi, 5 }
	__asm { je L_008c4de4 }
	__asm { add esi, -5 }
	__asm { jmp L_008c4de6 }
	__asm { L_008c4de4: }
	__asm { xor esi, esi }
	__asm { L_008c4de6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4e0e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c4e0e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008c4e0e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008c4ad2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008c4e1c: }
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
extern "C" char g_012fcfc0[];
extern "C" char g_012fcfc4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c4e30
extern "C" __declspec(naked) void asm_008c4e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ee3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008c51ac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008c4e62: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8c6880 }
	__asm { push 0x12fcfa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fcfc4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008c4ec9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcfc4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008c4ebd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fcfc0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_008c4ece }
	__asm { L_008c4ebd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fcfc0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_008c4ece }
	__asm { L_008c4ec9: }
	__asm { mov eax, dword ptr [g_012fcfc0] }
	__asm { L_008c4ece: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008c4f55 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4efb }
	__asm { add eax, -5 }
	__asm { jmp L_008c4efd }
	__asm { L_008c4efb: }
	__asm { xor eax, eax }
	__asm { L_008c4efd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c4f52 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008c4f52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c4f41 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c4f52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c4f41: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c4f52: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008c4f55: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_008c5045 }
	__asm { L_008c4f60: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_008c5045 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_008c4fe5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c4f88 }
	__asm { add eax, -5 }
	__asm { jmp L_008c4f8a }
	__asm { L_008c4f88: }
	__asm { xor eax, eax }
	__asm { L_008c4f8a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c4fdf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_008c4fdf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c4fce }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c4fdf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c4fce: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c4fdf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c4fe5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_008c503a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_008c4ffc }
	__asm { add ebx, -5 }
	__asm { jmp L_008c4ffe }
	__asm { L_008c4ffc: }
	__asm { xor ebx, ebx }
	__asm { L_008c4ffe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c5034 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c5034 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008c503a }
	__asm { L_008c5034: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c503a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008c4f60 }
	__asm { L_008c5045: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008c50a9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c50a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c50a9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c50a9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008c509f }
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
	__asm { je L_008c509d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008c509f }
	__asm { L_008c509d: }
	__asm { mov esi, edx }
	__asm { L_008c509f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008c50a9: }
	__asm { test esi, esi }
	__asm { je L_008c5110 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008c50b9 }
	__asm { add eax, -5 }
	__asm { jmp L_008c50bb }
	__asm { L_008c50b9: }
	__asm { xor eax, eax }
	__asm { L_008c50bb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008c5110 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008c5110 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c50ff }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c5110 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c50ff: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c5110: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_008c515f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_008c5127 }
	__asm { add edi, -5 }
	__asm { jmp L_008c5129 }
	__asm { L_008c5127: }
	__asm { xor edi, edi }
	__asm { L_008c5129: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c5159 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c5159 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008c515f }
	__asm { L_008c5159: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008c515f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c519e }
	__asm { add esi, 5 }
	__asm { je L_008c5174 }
	__asm { add esi, -5 }
	__asm { jmp L_008c5176 }
	__asm { L_008c5174: }
	__asm { xor esi, esi }
	__asm { L_008c5176: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c519e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c519e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008c519e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008c4e62 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008c51ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
