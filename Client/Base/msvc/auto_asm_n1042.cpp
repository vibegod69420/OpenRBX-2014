// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00ac6da0();
// FUNCTION: ROBLOXSTUDIO 0x00abd1a0
extern "C" __declspec(naked) void asm_00abd1a0()
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
	__asm { je L_00abd23f }
	__asm { push 0xac6f80 }
	__asm { push 0x130bc70 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac6da0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00abd205 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00abd205: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00abd23f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abd23f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abd23f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abd23f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00abd23f: }
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
extern "C" void fn_00ac6e30();
// FUNCTION: ROBLOXSTUDIO 0x00abd250
extern "C" __declspec(naked) void asm_00abd250()
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
	__asm { je L_00abd2ef }
	__asm { push 0xac6f90 }
	__asm { push 0x130bca0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac6e30 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00abd2b5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00abd2b5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00abd2ef }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abd2ef }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abd2ef }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abd2ef }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00abd2ef: }
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
extern "C" char g_0130bc50[];
extern "C" char g_0130bc54[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abd420
extern "C" __declspec(naked) void asm_00abd420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f1fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abd79c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abd452: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6ec0 }
	__asm { push 0x130bc18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc54] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abd4b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc54], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abd4ad }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc50], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abd4be }
	__asm { L_00abd4ad: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc50], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abd4be }
	__asm { L_00abd4b9: }
	__asm { mov eax, dword ptr [g_0130bc50] }
	__asm { L_00abd4be: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abd545 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abd4eb }
	__asm { add eax, -5 }
	__asm { jmp L_00abd4ed }
	__asm { L_00abd4eb: }
	__asm { xor eax, eax }
	__asm { L_00abd4ed: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abd542 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abd542 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abd531 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abd542 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abd531: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abd542: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abd545: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abd635 }
	__asm { L_00abd550: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abd635 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abd5d5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abd578 }
	__asm { add eax, -5 }
	__asm { jmp L_00abd57a }
	__asm { L_00abd578: }
	__asm { xor eax, eax }
	__asm { L_00abd57a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abd5cf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abd5cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abd5be }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abd5cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abd5be: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abd5cf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abd5d5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abd62a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abd5ec }
	__asm { add ebx, -5 }
	__asm { jmp L_00abd5ee }
	__asm { L_00abd5ec: }
	__asm { xor ebx, ebx }
	__asm { L_00abd5ee: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd624 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd624 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abd62a }
	__asm { L_00abd624: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abd62a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abd550 }
	__asm { L_00abd635: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abd699 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abd699 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abd699 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abd699 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abd68f }
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
	__asm { je L_00abd68d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abd68f }
	__asm { L_00abd68d: }
	__asm { mov esi, edx }
	__asm { L_00abd68f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abd699: }
	__asm { test esi, esi }
	__asm { je L_00abd700 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abd6a9 }
	__asm { add eax, -5 }
	__asm { jmp L_00abd6ab }
	__asm { L_00abd6a9: }
	__asm { xor eax, eax }
	__asm { L_00abd6ab: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abd700 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abd700 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abd6ef }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abd700 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abd6ef: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abd700: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abd74f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abd717 }
	__asm { add edi, -5 }
	__asm { jmp L_00abd719 }
	__asm { L_00abd717: }
	__asm { xor edi, edi }
	__asm { L_00abd719: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd749 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd749 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abd74f }
	__asm { L_00abd749: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abd74f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abd78e }
	__asm { add esi, 5 }
	__asm { je L_00abd764 }
	__asm { add esi, -5 }
	__asm { jmp L_00abd766 }
	__asm { L_00abd764: }
	__asm { xor esi, esi }
	__asm { L_00abd766: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd78e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd78e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abd78e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abd452 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abd79c: }
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
extern "C" char g_0130bc60[];
extern "C" char g_0130bc64[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abd7b0
extern "C" __declspec(naked) void asm_00abd7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f22e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abdb2c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abd7e2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6ed0 }
	__asm { push 0x130bc28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc64] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abd849 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc64], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abd83d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc60], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abd84e }
	__asm { L_00abd83d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc60], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abd84e }
	__asm { L_00abd849: }
	__asm { mov eax, dword ptr [g_0130bc60] }
	__asm { L_00abd84e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abd8d5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abd87b }
	__asm { add eax, -5 }
	__asm { jmp L_00abd87d }
	__asm { L_00abd87b: }
	__asm { xor eax, eax }
	__asm { L_00abd87d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abd8d2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abd8d2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abd8c1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abd8d2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abd8c1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abd8d2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abd8d5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abd9c5 }
	__asm { L_00abd8e0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abd9c5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abd965 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abd908 }
	__asm { add eax, -5 }
	__asm { jmp L_00abd90a }
	__asm { L_00abd908: }
	__asm { xor eax, eax }
	__asm { L_00abd90a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abd95f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abd95f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abd94e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abd95f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abd94e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abd95f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abd965: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abd9ba }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abd97c }
	__asm { add ebx, -5 }
	__asm { jmp L_00abd97e }
	__asm { L_00abd97c: }
	__asm { xor ebx, ebx }
	__asm { L_00abd97e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd9b4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abd9b4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abd9ba }
	__asm { L_00abd9b4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abd9ba: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abd8e0 }
	__asm { L_00abd9c5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abda29 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abda29 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abda29 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abda29 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abda1f }
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
	__asm { je L_00abda1d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abda1f }
	__asm { L_00abda1d: }
	__asm { mov esi, edx }
	__asm { L_00abda1f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abda29: }
	__asm { test esi, esi }
	__asm { je L_00abda90 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abda39 }
	__asm { add eax, -5 }
	__asm { jmp L_00abda3b }
	__asm { L_00abda39: }
	__asm { xor eax, eax }
	__asm { L_00abda3b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abda90 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abda90 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abda7f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abda90 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abda7f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abda90: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abdadf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abdaa7 }
	__asm { add edi, -5 }
	__asm { jmp L_00abdaa9 }
	__asm { L_00abdaa7: }
	__asm { xor edi, edi }
	__asm { L_00abdaa9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdad9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdad9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abdadf }
	__asm { L_00abdad9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abdadf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abdb1e }
	__asm { add esi, 5 }
	__asm { je L_00abdaf4 }
	__asm { add esi, -5 }
	__asm { jmp L_00abdaf6 }
	__asm { L_00abdaf4: }
	__asm { xor esi, esi }
	__asm { L_00abdaf6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdb1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdb1e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abdb1e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abd7e2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abdb2c: }
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
extern "C" char g_0130bc58[];
extern "C" char g_0130bc5c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abdb40
extern "C" __declspec(naked) void asm_00abdb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f25e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abdebc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abdb72: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6ee0 }
	__asm { push 0x130bc20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc5c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abdbd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc5c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abdbcd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc58], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abdbde }
	__asm { L_00abdbcd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc58], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abdbde }
	__asm { L_00abdbd9: }
	__asm { mov eax, dword ptr [g_0130bc58] }
	__asm { L_00abdbde: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abdc65 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abdc0b }
	__asm { add eax, -5 }
	__asm { jmp L_00abdc0d }
	__asm { L_00abdc0b: }
	__asm { xor eax, eax }
	__asm { L_00abdc0d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abdc62 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abdc62 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abdc51 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abdc62 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abdc51: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abdc62: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abdc65: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abdd55 }
	__asm { L_00abdc70: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abdd55 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abdcf5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abdc98 }
	__asm { add eax, -5 }
	__asm { jmp L_00abdc9a }
	__asm { L_00abdc98: }
	__asm { xor eax, eax }
	__asm { L_00abdc9a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abdcef }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abdcef }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abdcde }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abdcef }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abdcde: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abdcef: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abdcf5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abdd4a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abdd0c }
	__asm { add ebx, -5 }
	__asm { jmp L_00abdd0e }
	__asm { L_00abdd0c: }
	__asm { xor ebx, ebx }
	__asm { L_00abdd0e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdd44 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdd44 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abdd4a }
	__asm { L_00abdd44: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abdd4a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abdc70 }
	__asm { L_00abdd55: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abddb9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abddb9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abddb9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abddb9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abddaf }
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
	__asm { je L_00abddad }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abddaf }
	__asm { L_00abddad: }
	__asm { mov esi, edx }
	__asm { L_00abddaf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abddb9: }
	__asm { test esi, esi }
	__asm { je L_00abde20 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abddc9 }
	__asm { add eax, -5 }
	__asm { jmp L_00abddcb }
	__asm { L_00abddc9: }
	__asm { xor eax, eax }
	__asm { L_00abddcb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abde20 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abde20 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abde0f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abde20 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abde0f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abde20: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abde6f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abde37 }
	__asm { add edi, -5 }
	__asm { jmp L_00abde39 }
	__asm { L_00abde37: }
	__asm { xor edi, edi }
	__asm { L_00abde39: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abde69 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abde69 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abde6f }
	__asm { L_00abde69: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abde6f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abdeae }
	__asm { add esi, 5 }
	__asm { je L_00abde84 }
	__asm { add esi, -5 }
	__asm { jmp L_00abde86 }
	__asm { L_00abde84: }
	__asm { xor esi, esi }
	__asm { L_00abde86: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdeae }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abdeae }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abdeae: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abdb72 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abdebc: }
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
extern "C" char g_0130bc48[];
extern "C" char g_0130bc4c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abded0
extern "C" __declspec(naked) void asm_00abded0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f28e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abe24c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abdf02: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6ef0 }
	__asm { push 0x130bc10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc4c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abdf69 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc4c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abdf5d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc48], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abdf6e }
	__asm { L_00abdf5d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc48], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abdf6e }
	__asm { L_00abdf69: }
	__asm { mov eax, dword ptr [g_0130bc48] }
	__asm { L_00abdf6e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abdff5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abdf9b }
	__asm { add eax, -5 }
	__asm { jmp L_00abdf9d }
	__asm { L_00abdf9b: }
	__asm { xor eax, eax }
	__asm { L_00abdf9d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abdff2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abdff2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abdfe1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abdff2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abdfe1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abdff2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abdff5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abe0e5 }
	__asm { L_00abe000: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abe0e5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abe085 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe028 }
	__asm { add eax, -5 }
	__asm { jmp L_00abe02a }
	__asm { L_00abe028: }
	__asm { xor eax, eax }
	__asm { L_00abe02a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe07f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abe07f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe06e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe07f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe06e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe07f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe085: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abe0da }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abe09c }
	__asm { add ebx, -5 }
	__asm { jmp L_00abe09e }
	__asm { L_00abe09c: }
	__asm { xor ebx, ebx }
	__asm { L_00abe09e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe0d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe0d4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abe0da }
	__asm { L_00abe0d4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe0da: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abe000 }
	__asm { L_00abe0e5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abe149 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abe149 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abe149 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abe149 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abe13f }
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
	__asm { je L_00abe13d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abe13f }
	__asm { L_00abe13d: }
	__asm { mov esi, edx }
	__asm { L_00abe13f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abe149: }
	__asm { test esi, esi }
	__asm { je L_00abe1b0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe159 }
	__asm { add eax, -5 }
	__asm { jmp L_00abe15b }
	__asm { L_00abe159: }
	__asm { xor eax, eax }
	__asm { L_00abe15b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe1b0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abe1b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe19f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe1b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe19f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe1b0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abe1ff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abe1c7 }
	__asm { add edi, -5 }
	__asm { jmp L_00abe1c9 }
	__asm { L_00abe1c7: }
	__asm { xor edi, edi }
	__asm { L_00abe1c9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe1f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe1f9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abe1ff }
	__asm { L_00abe1f9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe1ff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abe23e }
	__asm { add esi, 5 }
	__asm { je L_00abe214 }
	__asm { add esi, -5 }
	__asm { jmp L_00abe216 }
	__asm { L_00abe214: }
	__asm { xor esi, esi }
	__asm { L_00abe216: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe23e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe23e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abe23e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abdf02 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abe24c: }
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
extern "C" char g_0130bc40[];
extern "C" char g_0130bc44[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abe260
extern "C" __declspec(naked) void asm_00abe260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f2be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abe5dc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abe292: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6f00 }
	__asm { push 0x130bc08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc44] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abe2f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc44], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abe2ed }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc40], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abe2fe }
	__asm { L_00abe2ed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc40], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abe2fe }
	__asm { L_00abe2f9: }
	__asm { mov eax, dword ptr [g_0130bc40] }
	__asm { L_00abe2fe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abe385 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe32b }
	__asm { add eax, -5 }
	__asm { jmp L_00abe32d }
	__asm { L_00abe32b: }
	__asm { xor eax, eax }
	__asm { L_00abe32d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe382 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abe382 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe371 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe382 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe371: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe382: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abe385: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abe475 }
	__asm { L_00abe390: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abe475 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abe415 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe3b8 }
	__asm { add eax, -5 }
	__asm { jmp L_00abe3ba }
	__asm { L_00abe3b8: }
	__asm { xor eax, eax }
	__asm { L_00abe3ba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe40f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abe40f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe3fe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe40f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe3fe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe40f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe415: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abe46a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abe42c }
	__asm { add ebx, -5 }
	__asm { jmp L_00abe42e }
	__asm { L_00abe42c: }
	__asm { xor ebx, ebx }
	__asm { L_00abe42e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe464 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe464 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abe46a }
	__asm { L_00abe464: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe46a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abe390 }
	__asm { L_00abe475: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abe4d9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abe4d9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abe4d9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abe4d9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abe4cf }
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
	__asm { je L_00abe4cd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abe4cf }
	__asm { L_00abe4cd: }
	__asm { mov esi, edx }
	__asm { L_00abe4cf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abe4d9: }
	__asm { test esi, esi }
	__asm { je L_00abe540 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe4e9 }
	__asm { add eax, -5 }
	__asm { jmp L_00abe4eb }
	__asm { L_00abe4e9: }
	__asm { xor eax, eax }
	__asm { L_00abe4eb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe540 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abe540 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe52f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe540 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe52f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe540: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abe58f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abe557 }
	__asm { add edi, -5 }
	__asm { jmp L_00abe559 }
	__asm { L_00abe557: }
	__asm { xor edi, edi }
	__asm { L_00abe559: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe589 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe589 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abe58f }
	__asm { L_00abe589: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe58f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abe5ce }
	__asm { add esi, 5 }
	__asm { je L_00abe5a4 }
	__asm { add esi, -5 }
	__asm { jmp L_00abe5a6 }
	__asm { L_00abe5a4: }
	__asm { xor esi, esi }
	__asm { L_00abe5a6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe5ce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe5ce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abe5ce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abe292 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abe5dc: }
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
extern "C" char g_0130bc38[];
extern "C" char g_0130bc3c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abe5f0
extern "C" __declspec(naked) void asm_00abe5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f2ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abe96c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abe622: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6f10 }
	__asm { push 0x130bc00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc3c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abe689 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc3c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abe67d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc38], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abe68e }
	__asm { L_00abe67d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc38], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abe68e }
	__asm { L_00abe689: }
	__asm { mov eax, dword ptr [g_0130bc38] }
	__asm { L_00abe68e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abe715 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe6bb }
	__asm { add eax, -5 }
	__asm { jmp L_00abe6bd }
	__asm { L_00abe6bb: }
	__asm { xor eax, eax }
	__asm { L_00abe6bd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe712 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abe712 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe701 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe712 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe701: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe712: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abe715: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abe805 }
	__asm { L_00abe720: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abe805 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abe7a5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe748 }
	__asm { add eax, -5 }
	__asm { jmp L_00abe74a }
	__asm { L_00abe748: }
	__asm { xor eax, eax }
	__asm { L_00abe74a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe79f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abe79f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe78e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe79f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe78e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe79f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe7a5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abe7fa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abe7bc }
	__asm { add ebx, -5 }
	__asm { jmp L_00abe7be }
	__asm { L_00abe7bc: }
	__asm { xor ebx, ebx }
	__asm { L_00abe7be: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe7f4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe7f4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abe7fa }
	__asm { L_00abe7f4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe7fa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abe720 }
	__asm { L_00abe805: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abe869 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abe869 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abe869 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abe869 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abe85f }
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
	__asm { je L_00abe85d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abe85f }
	__asm { L_00abe85d: }
	__asm { mov esi, edx }
	__asm { L_00abe85f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abe869: }
	__asm { test esi, esi }
	__asm { je L_00abe8d0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abe879 }
	__asm { add eax, -5 }
	__asm { jmp L_00abe87b }
	__asm { L_00abe879: }
	__asm { xor eax, eax }
	__asm { L_00abe87b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abe8d0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abe8d0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abe8bf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abe8d0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abe8bf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abe8d0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abe91f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abe8e7 }
	__asm { add edi, -5 }
	__asm { jmp L_00abe8e9 }
	__asm { L_00abe8e7: }
	__asm { xor edi, edi }
	__asm { L_00abe8e9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe919 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe919 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abe91f }
	__asm { L_00abe919: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abe91f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abe95e }
	__asm { add esi, 5 }
	__asm { je L_00abe934 }
	__asm { add esi, -5 }
	__asm { jmp L_00abe936 }
	__asm { L_00abe934: }
	__asm { xor esi, esi }
	__asm { L_00abe936: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe95e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abe95e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abe95e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abe622 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abe96c: }
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
extern "C" char g_0130bc68[];
extern "C" char g_0130bc6c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00abe980
extern "C" __declspec(naked) void asm_00abe980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f31e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00abecfc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00abe9b2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xac6f20 }
	__asm { push 0x130bc30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130bc6c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00abea19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130bc6c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00abea0d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130bc68], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00abea1e }
	__asm { L_00abea0d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130bc68], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00abea1e }
	__asm { L_00abea19: }
	__asm { mov eax, dword ptr [g_0130bc68] }
	__asm { L_00abea1e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00abeaa5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abea4b }
	__asm { add eax, -5 }
	__asm { jmp L_00abea4d }
	__asm { L_00abea4b: }
	__asm { xor eax, eax }
	__asm { L_00abea4d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abeaa2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abeaa2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abea91 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abeaa2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abea91: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abeaa2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00abeaa5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00abeb95 }
	__asm { L_00abeab0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00abeb95 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00abeb35 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abead8 }
	__asm { add eax, -5 }
	__asm { jmp L_00abeada }
	__asm { L_00abead8: }
	__asm { xor eax, eax }
	__asm { L_00abeada: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abeb2f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00abeb2f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abeb1e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abeb2f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abeb1e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abeb2f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abeb35: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00abeb8a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00abeb4c }
	__asm { add ebx, -5 }
	__asm { jmp L_00abeb4e }
	__asm { L_00abeb4c: }
	__asm { xor ebx, ebx }
	__asm { L_00abeb4e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abeb84 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abeb84 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abeb8a }
	__asm { L_00abeb84: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abeb8a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00abeab0 }
	__asm { L_00abeb95: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00abebf9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00abebf9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00abebf9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00abebf9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00abebef }
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
	__asm { je L_00abebed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00abebef }
	__asm { L_00abebed: }
	__asm { mov esi, edx }
	__asm { L_00abebef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00abebf9: }
	__asm { test esi, esi }
	__asm { je L_00abec60 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00abec09 }
	__asm { add eax, -5 }
	__asm { jmp L_00abec0b }
	__asm { L_00abec09: }
	__asm { xor eax, eax }
	__asm { L_00abec0b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00abec60 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00abec60 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00abec4f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00abec60 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00abec4f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00abec60: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00abecaf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00abec77 }
	__asm { add edi, -5 }
	__asm { jmp L_00abec79 }
	__asm { L_00abec77: }
	__asm { xor edi, edi }
	__asm { L_00abec79: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abeca9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abeca9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00abecaf }
	__asm { L_00abeca9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00abecaf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00abecee }
	__asm { add esi, 5 }
	__asm { je L_00abecc4 }
	__asm { add esi, -5 }
	__asm { jmp L_00abecc6 }
	__asm { L_00abecc4: }
	__asm { xor esi, esi }
	__asm { L_00abecc6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abecee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00abecee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00abecee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00abe9b2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00abecfc: }
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
extern "C" void fn_00ac66e0();
// FUNCTION: ROBLOXSTUDIO 0x00ac15c0
extern "C" __declspec(naked) void asm_00ac15c0()
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
	__asm { je L_00ac1628 }
	__asm { test ebx, ebx }
	__asm { jne L_00ac1628 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac1617 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac1628 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac1617: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac1628: }
	__asm { push 0xac6ec0 }
	__asm { push 0x130bc18 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac66e0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00ac1668 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00ac171d }
	__asm { L_00ac1668: }
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
	__asm { je L_00ac16d7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00ac16d7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac16c6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac16d7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ac16c6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac16d7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ac16ef }
	__asm { add esi, -5 }
	__asm { jmp L_00ac16f1 }
	__asm { L_00ac16ef: }
	__asm { xor esi, esi }
	__asm { L_00ac16f1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac171d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac171d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ac171d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00ac175a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ac175a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ac175a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ac175a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ac175a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
