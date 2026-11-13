// Tiny functions reproduced verbatim as inline assembly. Internal
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
extern "C" void fn_0097e480();
// FUNCTION: ROBLOXSTUDIO 0x0097b890
extern "C" __declspec(naked) void asm_0097b890()
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
	__asm { je L_0097b8f8 }
	__asm { test ebx, ebx }
	__asm { jne L_0097b8f8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097b8e7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097b8f8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097b8e7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097b8f8: }
	__asm { push 0x97e8c0 }
	__asm { push 0x1301b60 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0097e480 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_0097b938 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0097b9ed }
	__asm { L_0097b938: }
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
	__asm { je L_0097b9a7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0097b9a7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097b996 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097b9a7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0097b996: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097b9a7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0097b9bf }
	__asm { add esi, -5 }
	__asm { jmp L_0097b9c1 }
	__asm { L_0097b9bf: }
	__asm { xor esi, esi }
	__asm { L_0097b9c1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097b9ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097b9ed }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0097b9ed: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_0097ba2a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0097ba2a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0097ba2a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0097ba2a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0097ba2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0097bf90
extern "C" __declspec(naked) void asm_0097bf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_0097c00f }
	__asm { cmp edx, 1 }
	__asm { je L_0097c00f }
	__asm { cmp edx, 2 }
	__asm { jne L_0097bfd9 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0097bff8 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0097bff8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0097bff8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_0097bfd9: }
	__asm { cmp edx, 3 }
	__asm { jne L_0097bffc }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x122d090 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_0097bff8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0097bffc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x122d090 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0097c00f: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0097c03f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_0097c03f }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097c03f: }
	__asm { cmp edx, 1 }
	__asm { jne L_0097bff8 }
	__asm { mov edi, dword ptr [edi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0097bff8 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0097bff8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0097bff8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0097c080
extern "C" __declspec(naked) void asm_0097c080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_0097c0ff }
	__asm { cmp edx, 1 }
	__asm { je L_0097c0ff }
	__asm { cmp edx, 2 }
	__asm { jne L_0097c0c9 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0097c0e8 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0097c0e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0097c0e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_0097c0c9: }
	__asm { cmp edx, 3 }
	__asm { jne L_0097c0ec }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x122cf80 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_0097c0e8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0097c0ec: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x122cf80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0097c0ff: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0097c12f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_0097c12f }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097c12f: }
	__asm { cmp edx, 1 }
	__asm { jne L_0097c0e8 }
	__asm { mov edi, dword ptr [edi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0097c0e8 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0097c0e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0097c0e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0097c170
extern "C" __declspec(naked) void asm_0097c170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_0097c1ef }
	__asm { cmp edx, 1 }
	__asm { je L_0097c1ef }
	__asm { cmp edx, 2 }
	__asm { jne L_0097c1b9 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0097c1d8 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0097c1d8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0097c1d8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_0097c1b9: }
	__asm { cmp edx, 3 }
	__asm { jne L_0097c1dc }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x122cde8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_0097c1d8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0097c1dc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x122cde8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0097c1ef: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0097c21f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_0097c21f }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097c21f: }
	__asm { cmp edx, 1 }
	__asm { jne L_0097c1d8 }
	__asm { mov edi, dword ptr [edi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0097c1d8 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0097c1d8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0097c1d8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
}
