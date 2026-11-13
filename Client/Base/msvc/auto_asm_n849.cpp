// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009b2820();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009ac3c0
extern "C" __declspec(naked) void asm_009ac3c0()
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
	__asm { je L_009ac45f }
	__asm { push 0x9b2a20 }
	__asm { push 0x1303f04 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b2820 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ac425 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009ac425: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ac45f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ac45f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ac45f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ac45f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ac45f: }
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
extern "C" void fn_009b28b0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009ac470
extern "C" __declspec(naked) void asm_009ac470()
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
	__asm { je L_009ac50f }
	__asm { push 0x9b2a30 }
	__asm { push 0x1303f0c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b28b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ac4d5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009ac4d5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ac50f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ac50f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ac50f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ac50f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ac50f: }
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
extern "C" void fn_009b2940();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009ac520
extern "C" __declspec(naked) void asm_009ac520()
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
	__asm { je L_009ac5bf }
	__asm { push 0x9b2a40 }
	__asm { push 0x1303efc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b2940 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ac585 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009ac585: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ac5bf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ac5bf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ac5bf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ac5bf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ac5bf: }
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
extern "C" char g_01303ef4[];
extern "C" char g_01303ef8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009ac660
extern "C" __declspec(naked) void asm_009ac660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e8ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009ac9dc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009ac692: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9b29d0 }
	__asm { push 0x1303ed4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01303ef8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009ac6f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ef8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009ac6ed }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303ef4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009ac6fe }
	__asm { L_009ac6ed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303ef4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009ac6fe }
	__asm { L_009ac6f9: }
	__asm { mov eax, dword ptr [g_01303ef4] }
	__asm { L_009ac6fe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009ac785 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ac72b }
	__asm { add eax, -5 }
	__asm { jmp L_009ac72d }
	__asm { L_009ac72b: }
	__asm { xor eax, eax }
	__asm { L_009ac72d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ac782 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009ac782 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ac771 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ac782 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ac771: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ac782: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009ac785: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009ac875 }
	__asm { L_009ac790: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009ac875 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009ac815 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ac7b8 }
	__asm { add eax, -5 }
	__asm { jmp L_009ac7ba }
	__asm { L_009ac7b8: }
	__asm { xor eax, eax }
	__asm { L_009ac7ba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ac80f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009ac80f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ac7fe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ac80f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ac7fe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ac80f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ac815: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009ac86a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009ac82c }
	__asm { add ebx, -5 }
	__asm { jmp L_009ac82e }
	__asm { L_009ac82c: }
	__asm { xor ebx, ebx }
	__asm { L_009ac82e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ac864 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ac864 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009ac86a }
	__asm { L_009ac864: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ac86a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009ac790 }
	__asm { L_009ac875: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009ac8d9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ac8d9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ac8d9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ac8d9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009ac8cf }
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
	__asm { je L_009ac8cd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009ac8cf }
	__asm { L_009ac8cd: }
	__asm { mov esi, edx }
	__asm { L_009ac8cf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009ac8d9: }
	__asm { test esi, esi }
	__asm { je L_009ac940 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ac8e9 }
	__asm { add eax, -5 }
	__asm { jmp L_009ac8eb }
	__asm { L_009ac8e9: }
	__asm { xor eax, eax }
	__asm { L_009ac8eb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ac940 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009ac940 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ac92f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ac940 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ac92f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ac940: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009ac98f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009ac957 }
	__asm { add edi, -5 }
	__asm { jmp L_009ac959 }
	__asm { L_009ac957: }
	__asm { xor edi, edi }
	__asm { L_009ac959: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ac989 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ac989 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009ac98f }
	__asm { L_009ac989: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ac98f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ac9ce }
	__asm { add esi, 5 }
	__asm { je L_009ac9a4 }
	__asm { add esi, -5 }
	__asm { jmp L_009ac9a6 }
	__asm { L_009ac9a4: }
	__asm { xor esi, esi }
	__asm { L_009ac9a6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ac9ce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ac9ce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009ac9ce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009ac692 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009ac9dc: }
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
extern "C" char g_01303ee4[];
extern "C" char g_01303ee8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009ac9f0
extern "C" __declspec(naked) void asm_009ac9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e91e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009acd6c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009aca22: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9b29e0 }
	__asm { push 0x1303ec4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01303ee8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009aca89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ee8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009aca7d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303ee4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009aca8e }
	__asm { L_009aca7d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303ee4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009aca8e }
	__asm { L_009aca89: }
	__asm { mov eax, dword ptr [g_01303ee4] }
	__asm { L_009aca8e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009acb15 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009acabb }
	__asm { add eax, -5 }
	__asm { jmp L_009acabd }
	__asm { L_009acabb: }
	__asm { xor eax, eax }
	__asm { L_009acabd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009acb12 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009acb12 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009acb01 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009acb12 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009acb01: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009acb12: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009acb15: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009acc05 }
	__asm { L_009acb20: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009acc05 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009acba5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009acb48 }
	__asm { add eax, -5 }
	__asm { jmp L_009acb4a }
	__asm { L_009acb48: }
	__asm { xor eax, eax }
	__asm { L_009acb4a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009acb9f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009acb9f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009acb8e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009acb9f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009acb8e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009acb9f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009acba5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009acbfa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009acbbc }
	__asm { add ebx, -5 }
	__asm { jmp L_009acbbe }
	__asm { L_009acbbc: }
	__asm { xor ebx, ebx }
	__asm { L_009acbbe: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acbf4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acbf4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009acbfa }
	__asm { L_009acbf4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009acbfa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009acb20 }
	__asm { L_009acc05: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009acc69 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009acc69 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009acc69 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009acc69 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009acc5f }
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
	__asm { je L_009acc5d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009acc5f }
	__asm { L_009acc5d: }
	__asm { mov esi, edx }
	__asm { L_009acc5f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009acc69: }
	__asm { test esi, esi }
	__asm { je L_009accd0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009acc79 }
	__asm { add eax, -5 }
	__asm { jmp L_009acc7b }
	__asm { L_009acc79: }
	__asm { xor eax, eax }
	__asm { L_009acc7b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009accd0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009accd0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009accbf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009accd0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009accbf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009accd0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009acd1f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009acce7 }
	__asm { add edi, -5 }
	__asm { jmp L_009acce9 }
	__asm { L_009acce7: }
	__asm { xor edi, edi }
	__asm { L_009acce9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acd19 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acd19 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009acd1f }
	__asm { L_009acd19: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009acd1f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009acd5e }
	__asm { add esi, 5 }
	__asm { je L_009acd34 }
	__asm { add esi, -5 }
	__asm { jmp L_009acd36 }
	__asm { L_009acd34: }
	__asm { xor esi, esi }
	__asm { L_009acd36: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acd5e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acd5e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009acd5e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009aca22 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009acd6c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
