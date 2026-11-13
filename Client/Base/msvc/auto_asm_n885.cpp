// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_009dcf50();
// FUNCTION: ROBLOXSTUDIO 0x009d6660
extern "C" __declspec(naked) void asm_009d6660()
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
	__asm { je L_009d66ff }
	__asm { push 0x9dd010 }
	__asm { push 0x1305cc0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009dcf50 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009d66c5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009d66c5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009d66ff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009d66ff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009d66ff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009d66ff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009d66ff: }
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
extern "C" char g_01305cb8[];
extern "C" char g_01305cbc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009d68d0
extern "C" __declspec(naked) void asm_009d68d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4142e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009d6c4c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009d6902: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9dcfe0 }
	__asm { push 0x1305ca8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01305cbc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009d6969 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01305cbc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009d695d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01305cb8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009d696e }
	__asm { L_009d695d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01305cb8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009d696e }
	__asm { L_009d6969: }
	__asm { mov eax, dword ptr [g_01305cb8] }
	__asm { L_009d696e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009d69f5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009d699b }
	__asm { add eax, -5 }
	__asm { jmp L_009d699d }
	__asm { L_009d699b: }
	__asm { xor eax, eax }
	__asm { L_009d699d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d69f2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009d69f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d69e1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d69f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d69e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d69f2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009d69f5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009d6ae5 }
	__asm { L_009d6a00: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009d6ae5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009d6a85 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009d6a28 }
	__asm { add eax, -5 }
	__asm { jmp L_009d6a2a }
	__asm { L_009d6a28: }
	__asm { xor eax, eax }
	__asm { L_009d6a2a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d6a7f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009d6a7f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d6a6e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d6a7f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d6a6e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d6a7f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009d6a85: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009d6ada }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009d6a9c }
	__asm { add ebx, -5 }
	__asm { jmp L_009d6a9e }
	__asm { L_009d6a9c: }
	__asm { xor ebx, ebx }
	__asm { L_009d6a9e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6ad4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6ad4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009d6ada }
	__asm { L_009d6ad4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009d6ada: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009d6a00 }
	__asm { L_009d6ae5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009d6b49 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009d6b49 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009d6b49 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009d6b49 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009d6b3f }
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
	__asm { je L_009d6b3d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009d6b3f }
	__asm { L_009d6b3d: }
	__asm { mov esi, edx }
	__asm { L_009d6b3f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009d6b49: }
	__asm { test esi, esi }
	__asm { je L_009d6bb0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009d6b59 }
	__asm { add eax, -5 }
	__asm { jmp L_009d6b5b }
	__asm { L_009d6b59: }
	__asm { xor eax, eax }
	__asm { L_009d6b5b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d6bb0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009d6bb0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d6b9f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d6bb0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d6b9f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d6bb0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009d6bff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009d6bc7 }
	__asm { add edi, -5 }
	__asm { jmp L_009d6bc9 }
	__asm { L_009d6bc7: }
	__asm { xor edi, edi }
	__asm { L_009d6bc9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6bf9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6bf9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009d6bff }
	__asm { L_009d6bf9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009d6bff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009d6c3e }
	__asm { add esi, 5 }
	__asm { je L_009d6c14 }
	__asm { add esi, -5 }
	__asm { jmp L_009d6c16 }
	__asm { L_009d6c14: }
	__asm { xor esi, esi }
	__asm { L_009d6c16: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6c3e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6c3e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009d6c3e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009d6902 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009d6c4c: }
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
extern "C" char g_01305cb0[];
extern "C" char g_01305cb4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009d6c60
extern "C" __declspec(naked) void asm_009d6c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4145e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009d6fdc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009d6c92: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9dcff0 }
	__asm { push 0x1305ca0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01305cb4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009d6cf9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01305cb4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009d6ced }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01305cb0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009d6cfe }
	__asm { L_009d6ced: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01305cb0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009d6cfe }
	__asm { L_009d6cf9: }
	__asm { mov eax, dword ptr [g_01305cb0] }
	__asm { L_009d6cfe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009d6d85 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009d6d2b }
	__asm { add eax, -5 }
	__asm { jmp L_009d6d2d }
	__asm { L_009d6d2b: }
	__asm { xor eax, eax }
	__asm { L_009d6d2d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d6d82 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009d6d82 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d6d71 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d6d82 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d6d71: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d6d82: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009d6d85: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009d6e75 }
	__asm { L_009d6d90: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009d6e75 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009d6e15 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009d6db8 }
	__asm { add eax, -5 }
	__asm { jmp L_009d6dba }
	__asm { L_009d6db8: }
	__asm { xor eax, eax }
	__asm { L_009d6dba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d6e0f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009d6e0f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d6dfe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d6e0f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d6dfe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d6e0f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009d6e15: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009d6e6a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009d6e2c }
	__asm { add ebx, -5 }
	__asm { jmp L_009d6e2e }
	__asm { L_009d6e2c: }
	__asm { xor ebx, ebx }
	__asm { L_009d6e2e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6e64 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6e64 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009d6e6a }
	__asm { L_009d6e64: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009d6e6a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009d6d90 }
	__asm { L_009d6e75: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009d6ed9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009d6ed9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009d6ed9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009d6ed9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009d6ecf }
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
	__asm { je L_009d6ecd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009d6ecf }
	__asm { L_009d6ecd: }
	__asm { mov esi, edx }
	__asm { L_009d6ecf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009d6ed9: }
	__asm { test esi, esi }
	__asm { je L_009d6f40 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009d6ee9 }
	__asm { add eax, -5 }
	__asm { jmp L_009d6eeb }
	__asm { L_009d6ee9: }
	__asm { xor eax, eax }
	__asm { L_009d6eeb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d6f40 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009d6f40 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d6f2f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d6f40 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d6f2f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d6f40: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009d6f8f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009d6f57 }
	__asm { add edi, -5 }
	__asm { jmp L_009d6f59 }
	__asm { L_009d6f57: }
	__asm { xor edi, edi }
	__asm { L_009d6f59: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6f89 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6f89 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009d6f8f }
	__asm { L_009d6f89: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009d6f8f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009d6fce }
	__asm { add esi, 5 }
	__asm { je L_009d6fa4 }
	__asm { add esi, -5 }
	__asm { jmp L_009d6fa6 }
	__asm { L_009d6fa4: }
	__asm { xor esi, esi }
	__asm { L_009d6fa6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6fce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d6fce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009d6fce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009d6c92 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009d6fdc: }
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
extern "C" void fn_009dcda0();
// FUNCTION: ROBLOXSTUDIO 0x009d9430
extern "C" __declspec(naked) void asm_009d9430()
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
	__asm { je L_009d9498 }
	__asm { test ebx, ebx }
	__asm { jne L_009d9498 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d9487 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d9498 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d9487: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d9498: }
	__asm { push 0x9dcfe0 }
	__asm { push 0x1305ca8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009dcda0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_009d94d8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_009d958d }
	__asm { L_009d94d8: }
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
	__asm { je L_009d9547 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_009d9547 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009d9536 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d9547 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_009d9536: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d9547: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009d955f }
	__asm { add esi, -5 }
	__asm { jmp L_009d9561 }
	__asm { L_009d955f: }
	__asm { xor esi, esi }
	__asm { L_009d9561: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d958d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d958d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009d958d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_009d95ca }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009d95ca }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009d95ca }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009d95ca }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009d95ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
