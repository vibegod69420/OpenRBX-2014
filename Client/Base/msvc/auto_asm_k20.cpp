// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0078a6b0();
extern "C" void fn_0083e860();
extern "C" void fn_0083eb60();
extern "C" void fn_0083f500();
extern "C" void fn_0084c6b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008513a0
extern "C" __declspec(naked) void asm_008513a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd287e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0083f500 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0083eb60 }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x34] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083e860 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x3c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00851425 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00851427 }
	__asm { L_00851425: }
	__asm { xor ecx, ecx }
	__asm { L_00851427: }
	__asm { push ebx }
	__asm { lea edx, [ebp + 0xf] }
	__asm { push edx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_0084c6b0 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00851457 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00851457: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_0085147a }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085147a: }
	__asm { cmp dword ptr [ebp - 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { jb L_0085149d }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085149d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_007ae020();
extern "C" void fn_0084c620();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008514b0
extern "C" __declspec(naked) void asm_008514b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_007ae020 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00851507 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00851509 }
	__asm { L_00851507: }
	__asm { xor ecx, ecx }
	__asm { L_00851509: }
	__asm { lea edx, [ebp + 0xf] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_0084c620 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00851534 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00851534: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0078a6b0();
extern "C" void fn_007cfc10();
extern "C" void fn_007d54e0();
extern "C" void fn_0083e760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00851660
extern "C" __declspec(naked) void asm_00851660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd529c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0083e760 }
	__asm { fstp qword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x1c }
	__asm { mov edx, eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008516ba }
	__asm { lea ebx, [ecx - 0x1c] }
	__asm { jmp L_008516bc }
	__asm { L_008516ba: }
	__asm { xor ebx, ebx }
	__asm { L_008516bc: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { fld qword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebx + esi] }
	__asm { call dword ptr [ebp - 0x1c] }
	__asm { fstp qword ptr [ebp - 0x1c] }
	__asm { call fn_007d54e0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_007cfc10 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_0085171a }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085171a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_013000f0[];
extern "C" void fn_00424480();
extern "C" void fn_00826df0();
extern "C" void fn_00968a50();
extern "C" void fn_00c2fed0();
extern "C" void fn_00c363b0();
// FUNCTION: ROBLOXSTUDIO 0x00855fb0
extern "C" __declspec(naked) void asm_00855fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [edi + 0xbd8], 0 }
	__asm { je L_00856068 }
	__asm { call fn_00424480 }
	__asm { cmp dword ptr [eax + 0x70], 1 }
	__asm { jne L_0085600d }
	__asm { call fn_00424480 }
	__asm { cmp byte ptr [eax + 0x80], 0 }
	__asm { je L_0085600d }
	__asm { push edi }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0085600d }
	__asm { L_00855ff2: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe5f6e4 }
	__asm { push esi }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0085600d: }
	__asm { cmp byte ptr [g_013000f0], 0 }
	__asm { jne L_00856031 }
	__asm { L_00856016: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x102ee18 }
	__asm { push esi }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00856031: }
	__asm { push edi }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00856016 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00856016 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x102ec30 }
	__asm { push esi }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00856068: }
	__asm { call fn_00424480 }
	__asm { cmp dword ptr [eax + 0x70], 1 }
	__asm { jne L_00856092 }
	__asm { call fn_00424480 }
	__asm { cmp byte ptr [eax + 0x80], 0 }
	__asm { je L_00856092 }
	__asm { push edi }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00855ff2 }
	__asm { L_00856092: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0xba0] }
	__asm { push esi }
	__asm { call fn_00968a50 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10410[];
// FUNCTION: ROBLOXSTUDIO 0x008568d0
extern "C" __declspec(naked) void asm_008568d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [ecx + 0x90], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { je L_00856903 }
	__asm { mov esi, dword ptr [ecx + 0x94] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov ebx, 1 }
	__asm { jmp L_0085691b }
	__asm { L_00856903: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e10410] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { mov ebx, 2 }
	__asm { L_0085691b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { or ebx, 4 }
	__asm { test bl, 2 }
	__asm { je L_0085694c }
	__asm { and ebx, 0xfffffffd }
	__asm { test edi, edi }
	__asm { je L_0085694c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0085694c }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0085694c: }
	__asm { test bl, 1 }
	__asm { je L_00856968 }
	__asm { test esi, esi }
	__asm { je L_00856968 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00856968 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00856968: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00832ad0();
// FUNCTION: ROBLOXSTUDIO 0x00857b70
extern "C" __declspec(naked) void asm_00857b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29060 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00832ad0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00857be2 }
	__asm { test al, 1 }
	__asm { jne L_00857bdb }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00857bdb }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00857bdb: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00857be2: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00857c09 }
	__asm { test al, 1 }
	__asm { jne L_00857c09 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00857c09 }
	__asm { lea ecx, [ebp + 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00857c09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0083fbd0();
extern "C" void fn_009310b0();
// FUNCTION: ROBLOXSTUDIO 0x00858ba0
extern "C" __declspec(naked) void asm_00858ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29089 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov eax, edi }
	__asm { test edi, edi }
	__asm { jns L_00858bf3 }
	__asm { neg eax }
	__asm { L_00858bf3: }
	__asm { lea ecx, [ebp - 0x13] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0083fbd0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { test edi, edi }
	__asm { jns L_00858c0a }
	__asm { dec ecx }
	__asm { mov byte ptr [ecx], 0x2d }
	__asm { L_00858c0a: }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { cmp edi, 0x10 }
	__asm { jb L_00858c16 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_00858c18 }
	__asm { L_00858c16: }
	__asm { mov edx, esi }
	__asm { L_00858c18: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, edx }
	__asm { cmp edi, 0x10 }
	__asm { jb L_00858c26 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_00858c28 }
	__asm { L_00858c26: }
	__asm { mov edx, esi }
	__asm { L_00858c28: }
	__asm { lea edi, [ebp - 0x13] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_009310b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1308c[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00463960();
extern "C" void fn_006b98c0();
extern "C" void fn_0084bff0();
extern "C" void fn_008f73e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00859020
extern "C" __declspec(naked) void asm_00859020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36dd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push 0xe5eecc }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00859098 }
	__asm { mov ecx, esi }
	__asm { call fn_00463960 }
	__asm { test eax, eax }
	__asm { je L_00859098 }
	__asm { mov ecx, eax }
	__asm { call fn_008f73e0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { cmp ecx, eax }
	__asm { je L_00859098 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00859098: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmovae eax, dword ptr [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0xe5eed0 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0084bff0 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { pop esi }
	__asm { jb L_008590d7 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008590d7: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008590e8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008590e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_0089c880();
// FUNCTION: ROBLOXSTUDIO 0x0085ad80
extern "C" __declspec(naked) void asm_0085ad80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_0085adcf }
	__asm { cmp dword ptr [edi + 0xcc0], 1 }
	__asm { je L_0085adcf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0085adba }
	__asm { push 0xd8a }
	__asm { push 0xe5e8e0 }
	__asm { push 0xe61078 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0085adcf }
	__asm { L_0085adba: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe610f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0085adcf: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { inc dword ptr [edi + 0xc64] }
	__asm { test ebx, ebx }
	__asm { je L_0085ae05 }
	__asm { lea eax, [ebx + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0085ae05 }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0085ae05 }
	__asm { mov eax, ebx }
	__asm { test eax, eax }
	__asm { je L_0085ae05 }
	__asm { inc dword ptr [edi + 0xc60] }
	__asm { L_0085ae05: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0089c880 }
	__asm { mov eax, dword ptr [edi + 0x98] }
	__asm { lea ecx, [edi + 0x98] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_0089c8a0();
// FUNCTION: ROBLOXSTUDIO 0x0085ae30
extern "C" __declspec(naked) void asm_0085ae30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_0085ae7f }
	__asm { cmp dword ptr [edi + 0xcc0], 1 }
	__asm { je L_0085ae7f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0085ae6a }
	__asm { push 0xd95 }
	__asm { push 0xe5e8e0 }
	__asm { push 0xe61078 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0085ae7f }
	__asm { L_0085ae6a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe61160 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0085ae7f: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { dec dword ptr [edi + 0xc64] }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { test ebx, ebx }
	__asm { je L_0085aeb6 }
	__asm { add ebx, 0x1c }
	__asm { je L_0085aeb6 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0085aeb6 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0085aeb6 }
	__asm { dec dword ptr [edi + 0xc60] }
	__asm { L_0085aeb6: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0089c8a0 }
	__asm { mov eax, dword ptr [edi + 0x98] }
	__asm { lea ecx, [edi + 0x98] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0096bbd0();
extern "C" void fn_0096cc90();
extern "C" void fn_0096d160();
// FUNCTION: ROBLOXSTUDIO 0x0085aee0
extern "C" __declspec(naked) void asm_0085aee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0085af2e }
	__asm { cmp byte ptr [esi + 0xc01], 0 }
	__asm { jne L_0085af3b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0085af19 }
	__asm { push 0x86c }
	__asm { push 0xe5e8e0 }
	__asm { push 0x1004d18 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0085af2e }
	__asm { L_0085af19: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5fea8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0085af2e: }
	__asm { cmp byte ptr [esi + 0xc01], 0 }
	__asm { je L_0085afbc }
	__asm { L_0085af3b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, 0 }
	__asm { je L_0085af63 }
	__asm { dec eax }
	__asm { je L_0085af56 }
	__asm { dec eax }
	__asm { jne L_0085af74 }
	__asm { mov ecx, dword ptr [esi + 0xba0] }
	__asm { call fn_0096d160 }
	__asm { jmp L_0085af74 }
	__asm { L_0085af56: }
	__asm { mov ecx, dword ptr [esi + 0xba0] }
	__asm { call fn_0096cc90 }
	__asm { jmp L_0085af74 }
	__asm { L_0085af63: }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { jne L_0085af74 }
	__asm { mov ecx, dword ptr [esi + 0xba0] }
	__asm { call fn_0096bbd0 }
	__asm { L_0085af74: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0085afbc }
	__asm { cmp byte ptr [esi + 0xc01], 0 }
	__asm { jne L_0085afbc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0085afa7 }
	__asm { push 0x883 }
	__asm { push 0xe5e8e0 }
	__asm { push 0x1004d18 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0085afbc }
	__asm { L_0085afa7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5ff10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0085afbc: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
// FUNCTION: ROBLOXSTUDIO 0x0085b820
extern "C" __declspec(naked) void asm_0085b820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_0085b88f }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { cmp esi, eax }
	__asm { pop esi }
	__asm { jae L_0085b88f }
	__asm { test byte ptr [edi + 0x40], 2 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { jne L_0085b864 }
	__asm { cmp ebx, -1 }
	__asm { je L_0085b864 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { cmp bl, byte ptr [eax - 1] }
	__asm { jne L_0085b88f }
	__asm { L_0085b864: }
	__asm { push -1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { cmp ebx, -1 }
	__asm { je L_0085b885 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov byte ptr [eax], bl }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0085b885: }
	__asm { xor ebx, ebx }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0085b88f: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
extern "C" void fn_0057dce0();
extern "C" void fn_0085bb80();
// FUNCTION: ROBLOXSTUDIO 0x0085bbf0
extern "C" __declspec(naked) void asm_0085bbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { lea esi, [edi + 0x14] }
	__asm { push esi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0085bc75 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0042ba60 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { jne L_0085bc45 }
	__asm { xor ebx, ebx }
	__asm { jmp L_0085bc47 }
	__asm { L_0085bc45: }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { L_0085bc47: }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, edx }
	__asm { dec eax }
	__asm { shr ecx, 1 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { and edx, 1 }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [eax + edx*8] }
	__asm { push eax }
	__asm { call fn_0057dce0 }
	__asm { mov ecx, edi }
	__asm { call fn_0085bb80 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { jmp L_0085bc77 }
	__asm { L_0085bc75: }
	__asm { xor al, al }
	__asm { L_0085bc77: }
	__asm { test esi, esi }
	__asm { je L_0085bc7e }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_0085bc7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
extern "C" void fn_004ad920();
extern "C" void fn_00a1c880();
// FUNCTION: ROBLOXSTUDIO 0x0085bc90
extern "C" __declspec(naked) void asm_0085bc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0085bd3b }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0085bce4 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0085bce4: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_004ad920 }
	__asm { mov ecx, esi }
	__asm { call fn_00a1c880 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0085bd32 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0085bd1b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0085bd1b: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { fld qword ptr [eax + 0x20] }
	__asm { mov al, 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { jmp L_0085bd3d }
	__asm { L_0085bd32: }
	__asm { fldz }
	__asm { mov al, 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { jmp L_0085bd3d }
	__asm { L_0085bd3b: }
	__asm { xor al, al }
	__asm { L_0085bd3d: }
	__asm { test edi, edi }
	__asm { je L_0085bd44 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_0085bd44: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00846370();
extern "C" void fn_0085d150();
// FUNCTION: ROBLOXSTUDIO 0x0085d0b0
extern "C" __declspec(naked) void asm_0085d0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00846370 }
	__asm { lea esi, [edi + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0085d150 }
	__asm { test esi, esi }
	__asm { je L_0085d10a }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_0085d10a: }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0085d139 }
	__asm { test al, 1 }
	__asm { jne L_0085d139 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0085d139 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0085d139: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_008462f0();
extern "C" void fn_0084ab20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0085d150
extern "C" __declspec(naked) void asm_0085d150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_0085d186 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0084ab20 }
	__asm { L_0085d186: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_0085d1c2 }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0085d1bc }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0085d1bc: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_0085d1c2: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + eax] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_0085d1e2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008462f0 }
	__asm { L_0085d1e2: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013000f0[];
extern "C" void fn_00403540();
extern "C" void fn_00545490();
extern "C" void fn_00545640();
extern "C" void fn_00855fb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0085d930
extern "C" __declspec(naked) void asm_0085d930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd293c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test esi, esi }
	__asm { je L_0085da33 }
	__asm { call fn_00545490 }
	__asm { test eax, eax }
	__asm { je L_0085d96d }
	__asm { mov al, byte ptr [eax + 0x119] }
	__asm { test al, al }
	__asm { je L_0085da33 }
	__asm { L_0085d96d: }
	__asm { mov ecx, esi }
	__asm { call fn_00545640 }
	__asm { test eax, eax }
	__asm { je L_0085da33 }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x68] }
	__asm { test edi, edi }
	__asm { je L_0085da32 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00855fb0 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0085d9e5 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085d9e5: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0085da0f }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085da0f: }
	__asm { cmp byte ptr [g_013000f0], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { jne L_0085da32 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { L_0085da32: }
	__asm { pop edi }
	__asm { L_0085da33: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00775320();
extern "C" void fn_007753b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0085e110
extern "C" __declspec(naked) void asm_0085e110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29418 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x68] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_00775320 }
	__asm { push eax }
	__asm { call fn_007753b0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0085e162 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085e162: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_0085e185 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085e185: }
	__asm { cmp dword ptr [ebp + 0x4c], 0x10 }
	__asm { mov dword ptr [ebp + 0x34], 0xf }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { mov byte ptr [ebp + 0x20], 0 }
	__asm { jb L_0085e1a8 }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085e1a8: }
	__asm { cmp dword ptr [ebp + 0x64], 0x10 }
	__asm { mov dword ptr [ebp + 0x4c], 0xf }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { mov byte ptr [ebp + 0x38], 0 }
	__asm { jb L_0085e1cb }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085e1cb: }
	__asm { cmp dword ptr [ebp + 0x7c], 0x10 }
	__asm { mov dword ptr [ebp + 0x64], 0xf }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { mov byte ptr [ebp + 0x50], 0 }
	__asm { jb L_0085e1ee }
	__asm { push dword ptr [ebp + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0085e1ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x78 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0085e630
extern "C" __declspec(naked) void asm_0085e630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x44], 0xe5d9b4 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0085e6ac }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0085e6ac: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe61374 }
	__asm { mov dword ptr [ebp - 0x30], 0xe61380 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1119ad0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe61388 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1051c[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0085e710
extern "C" __declspec(naked) void asm_0085e710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x44], 0xe5d3b8 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0085e78c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0085e78c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe61568 }
	__asm { mov dword ptr [ebp - 0x30], 0xe61574 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1119bf4 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe6157c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0085e7f0
extern "C" __declspec(naked) void asm_0085e7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x44], 0xe5d9f8 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0085e86c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0085e86c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe614f8 }
	__asm { mov dword ptr [ebp - 0x30], 0xe61504 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1119b70 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe6150c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0085e8d0
extern "C" __declspec(naked) void asm_0085e8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd294a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0x1016498 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x44], 0xe5da54 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0085e94c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0085e94c: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x44], 0xe618b8 }
	__asm { mov dword ptr [ebp - 0x30], 0xe618c4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1119c78 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe618cc }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004038a0();
extern "C" void fn_00960b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00860390
extern "C" __declspec(naked) void asm_00860390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push 0xe }
	__asm { mov esi, ecx }
	__asm { push 0xe5e840 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00960b90 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008603ff }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008603ff: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_0086042b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0086042b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { L_0086042b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
// FUNCTION: ROBLOXSTUDIO 0x008605b0
extern "C" __declspec(naked) void asm_008605b0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_008605c2 }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { ret }
	__asm { L_008605c2: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { cmp eax, esi }
	__asm { jb L_00860643 }
	__asm { test byte ptr [edi + 0x40], 1 }
	__asm { je L_00860651 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00860651 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { cmp eax, esi }
	__asm { jb L_0086060e }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { cmp eax, dword ptr [edi + 0x38] }
	__asm { jae L_00860651 }
	__asm { L_0086060e: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp dword ptr [edi + 0x38], eax }
	__asm { jae L_00860626 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { L_00860626: }
	__asm { push dword ptr [edi + 0x38] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { L_00860643: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { ret }
	__asm { L_00860651: }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0040bac0();
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00866d40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00860c70
extern "C" __declspec(naked) void asm_00860c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd297b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00866d40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00860d2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00860d2f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe61aa4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00860dad }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00860dad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00860d98 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00860dad }
	__asm { L_00860d98: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00860dad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131da24[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00866e00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00860fd0
extern "C" __declspec(naked) void asm_00860fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29756 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00866e00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131da24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0086108f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131da24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61944 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131da28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0086108f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131da28 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe61ddc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0086110d }
	__asm { push 0x11fee80 }
	__asm { mov ecx, 0x11fee80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0086110d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008610f8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086110d }
	__asm { L_008610f8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086110d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00866e60();
extern "C" void fn_00869000();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00861190
extern "C" __declspec(naked) void asm_00861190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29786 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00866e60 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0086124f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0086124f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_00869000 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe623f8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008612cd }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008612cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008612b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008612cd }
	__asm { L_008612b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008612cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0040bc40();
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00866ec0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008612e0
extern "C" __declspec(naked) void asm_008612e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd297b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00866ec0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0086139f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0086139f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe62440 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0086141d }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0086141d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00861408 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086141d }
	__asm { L_00861408: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086141d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00866f20();
extern "C" void fn_008690c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00861430
extern "C" __declspec(naked) void asm_00861430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29786 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00866f20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008614ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008614ef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_008690c0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe62300 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0086156d }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0086156d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00861558 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086156d }
	__asm { L_00861558: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086156d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0040bac0();
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00866ff0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00861790
extern "C" __declspec(naked) void asm_00861790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd297b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00866ff0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0086184f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0086184f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe61aa4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008618cd }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008618cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008618b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008618cd }
	__asm { L_008618b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008618cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0040bb80();
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00867050();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008618e0
extern "C" __declspec(naked) void asm_008618e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd297b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00867050 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0086199f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0086199f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe62354 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00861a1d }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00861a1d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00861a08 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00861a1d }
	__asm { L_00861a08: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00861a1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008670b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00861a30
extern "C" __declspec(naked) void asm_00861a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd297b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008670b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00861aef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00861aef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d1d8 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe61a68 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00861b6d }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00861b6d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00861b58 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00861b6d }
	__asm { L_00861b58: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00861b6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00861b80
extern "C" __declspec(naked) void asm_00861b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63768 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe63b44 }
	__asm { mov dword ptr [esi + 8], 0xe63b54 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00861c2a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00861c16 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00861c16: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00861c2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00861c40
extern "C" __declspec(naked) void asm_00861c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63740 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe638cc }
	__asm { mov dword ptr [esi + 8], 0xe638dc }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00861cea }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00861cd6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00861cd6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00861cea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00861d00
extern "C" __declspec(naked) void asm_00861d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63748 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe638fc }
	__asm { mov dword ptr [esi + 8], 0xe6390c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00861daa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00861d96 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00861d96: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00861daa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00861dc0
extern "C" __declspec(naked) void asm_00861dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63760 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe6398c }
	__asm { mov dword ptr [esi + 8], 0xe6399c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00861e6a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00861e56 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00861e56: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00861e6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00861e80
extern "C" __declspec(naked) void asm_00861e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63758 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe6395c }
	__asm { mov dword ptr [esi + 8], 0xe6396c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00861f2a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00861f16 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00861f16: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00861f2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00861f40
extern "C" __declspec(naked) void asm_00861f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63778 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe63b74 }
	__asm { mov dword ptr [esi + 8], 0xe63b84 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00861fea }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00861fd6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00861fd6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00861fea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00862000
extern "C" __declspec(naked) void asm_00862000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe63750 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe6392c }
	__asm { mov dword ptr [esi + 8], 0xe6393c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008620aa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00862096 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00862096: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008620aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4d88[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0041ed90();
extern "C" void fn_007cbf10();
extern "C" void fn_008ad980();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00862150
extern "C" __declspec(naked) void asm_00862150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29856 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ad980 }
	__asm { mov dword ptr [esi], 0xe6196c }
	__asm { mov dword ptr [esi + 4], 0xe61a08 }
	__asm { mov dword ptr [esi + 0x18], 0xe61a10 }
	__asm { mov dword ptr [esi + 0x1c], 0xe61a1c }
	__asm { mov dword ptr [esi + 0x64], 0xe61a2c }
	__asm { mov dword ptr [esi + 0x68], 0xe61a34 }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008621f6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008621f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d1d8 }
	__asm { inc dword ptr [g_012e4d88] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4d8c[];
extern "C" char g_0131da24[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00869c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00862220
extern "C" __declspec(naked) void asm_00862220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29876 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869c20 }
	__asm { mov dword ptr [esi], 0xe61cc4 }
	__asm { mov dword ptr [esi + 4], 0xe61d7c }
	__asm { mov dword ptr [esi + 0x18], 0xe61d84 }
	__asm { mov dword ptr [esi + 0x1c], 0xe61d90 }
	__asm { mov dword ptr [esi + 0x64], 0xe61da0 }
	__asm { mov dword ptr [esi + 0x68], 0xe61da8 }
	__asm { mov eax, dword ptr [g_0131da24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008622c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131da24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61944 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131da28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008622c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131da28 }
	__asm { inc dword ptr [g_012e4d8c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4d90[];
extern "C" char g_0131db54[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00869c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008622f0
extern "C" __declspec(naked) void asm_008622f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29896 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869c20 }
	__asm { mov dword ptr [esi], 0xe61f54 }
	__asm { mov dword ptr [esi + 4], 0xe6200c }
	__asm { mov dword ptr [esi + 0x18], 0xe62014 }
	__asm { mov dword ptr [esi + 0x1c], 0xe62020 }
	__asm { mov dword ptr [esi + 0x64], 0xe62030 }
	__asm { mov dword ptr [esi + 0x68], 0xe62038 }
	__asm { mov eax, dword ptr [g_0131db54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00862399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131db54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6192c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131db58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00862399: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131db58 }
	__asm { inc dword ptr [g_012e4d90] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00863a00();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x008623c0
extern "C" __declspec(naked) void asm_008623c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29960 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00869390 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00869390 }
	__asm { mov ecx, esi }
	__asm { call fn_00863a00 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00862449 }
	__asm { test al, 1 }
	__asm { jne L_00862442 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00862442 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00862442: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_00862449: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00862470 }
	__asm { test al, 1 }
	__asm { jne L_00862470 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00862470 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00862470: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

// FUNCTION: ROBLOXSTUDIO 0x00863530
extern "C" __declspec(naked) void asm_00863530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ecx + 0x20] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00863599 }
	__asm { mov dword ptr [edx], esi }
	__asm { test byte ptr [edx], 1 }
	__asm { je L_00863585 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00863585: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ecx + 8] }
	__asm { and esi, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00863599: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00869390();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00863810
extern "C" __declspec(naked) void asm_00863810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29913 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0086385b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00869390 }
	__asm { jmp L_0086385d }
	__asm { L_0086385b: }
	__asm { xor esi, esi }
	__asm { L_0086385d: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0086388a }
	__asm { test al, 1 }
	__asm { jne L_0086388a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0086388a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0086388a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00863810();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x00863960
extern "C" __declspec(naked) void asm_00863960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008639bf }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00869390 }
	__asm { mov ecx, esi }
	__asm { call fn_00863810 }
	__asm { mov bl, 1 }
	__asm { jmp L_008639c1 }
	__asm { L_008639bf: }
	__asm { xor bl, bl }
	__asm { L_008639c1: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008639e8 }
	__asm { test al, 1 }
	__asm { jne L_008639e8 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008639e8 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008639e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00863960();
extern "C" void fn_00869390();
// FUNCTION: ROBLOXSTUDIO 0x00863a00
extern "C" __declspec(naked) void asm_00863a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29960 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00869390 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00869390 }
	__asm { mov esi, 0xe63ba0 }
	__asm { mov ecx, esi }
	__asm { call fn_00863960 }
	__asm { mov ecx, dword ptr [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00863a99 }
	__asm { test cl, 1 }
	__asm { jne L_00863a92 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00863a92 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00863a92: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_00863a99: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00863ac9 }
	__asm { test al, 1 }
	__asm { jne L_00863ac9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00863ac9 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00863ac9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00864720
extern "C" __declspec(naked) void asm_00864720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086476b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086476b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_008647b2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe6389c }
	__asm { mov dword ptr [esi + 8], 0xe638ac }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe638b4 }
	__asm { mov dword ptr [esi + 8], 0xe638c4 }
	__asm { jmp L_008647b4 }
	__asm { L_008647b2: }
	__asm { xor esi, esi }
	__asm { L_008647b4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008647d1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008647d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x008647f0
extern "C" __declspec(naked) void asm_008647f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086483b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086483b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864882 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe6386c }
	__asm { mov dword ptr [esi + 8], 0xe6387c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63884 }
	__asm { mov dword ptr [esi + 8], 0xe63894 }
	__asm { jmp L_00864884 }
	__asm { L_00864882: }
	__asm { xor esi, esi }
	__asm { L_00864884: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008648a1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008648a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x008648c0
extern "C" __declspec(naked) void asm_008648c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086490b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086490b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864952 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe6380c }
	__asm { mov dword ptr [esi + 8], 0xe6381c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63824 }
	__asm { mov dword ptr [esi + 8], 0xe63834 }
	__asm { jmp L_00864954 }
	__asm { L_00864952: }
	__asm { xor esi, esi }
	__asm { L_00864954: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864971 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864971: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00864990
extern "C" __declspec(naked) void asm_00864990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008649db }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008649db: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864a22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe6383c }
	__asm { mov dword ptr [esi + 8], 0xe6384c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63854 }
	__asm { mov dword ptr [esi + 8], 0xe63864 }
	__asm { jmp L_00864a24 }
	__asm { L_00864a22: }
	__asm { xor esi, esi }
	__asm { L_00864a24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864a41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864a41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00864a90
extern "C" __declspec(naked) void asm_00864a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00864adb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00864adb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864b22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe63ae4 }
	__asm { mov dword ptr [esi + 8], 0xe63af4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63afc }
	__asm { mov dword ptr [esi + 8], 0xe63b0c }
	__asm { jmp L_00864b24 }
	__asm { L_00864b22: }
	__asm { xor esi, esi }
	__asm { L_00864b24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864b41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864b41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00873510();
// FUNCTION: ROBLOXSTUDIO 0x00864b90
extern "C" __declspec(naked) void asm_00864b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00864bdb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00864bdb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864c22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe63780 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe63ab4 }
	__asm { mov dword ptr [esi + 8], 0xe63ac4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63acc }
	__asm { mov dword ptr [esi + 8], 0xe63adc }
	__asm { jmp L_00864c24 }
	__asm { L_00864c22: }
	__asm { xor esi, esi }
	__asm { L_00864c24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00873510 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864c41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864c41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00872ca0();
// FUNCTION: ROBLOXSTUDIO 0x00864c90
extern "C" __declspec(naked) void asm_00864c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00864cdb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00864cdb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864d22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe63770 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe63b14 }
	__asm { mov dword ptr [esi + 8], 0xe63b24 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63b2c }
	__asm { mov dword ptr [esi + 8], 0xe63b3c }
	__asm { jmp L_00864d24 }
	__asm { L_00864d22: }
	__asm { xor esi, esi }
	__asm { L_00864d24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00872ca0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864d41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864d41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00872ca0();
// FUNCTION: ROBLOXSTUDIO 0x00864d90
extern "C" __declspec(naked) void asm_00864d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00864ddb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00864ddb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00864e22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe63770 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe63a84 }
	__asm { mov dword ptr [esi + 8], 0xe63a94 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe63a9c }
	__asm { mov dword ptr [esi + 8], 0xe63aac }
	__asm { jmp L_00864e24 }
	__asm { L_00864e22: }
	__asm { xor esi, esi }
	__asm { L_00864e24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00872ca0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864e41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864e41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00861b80();
extern "C" void fn_00872ca0();
// FUNCTION: ROBLOXSTUDIO 0x00864e90
extern "C" __declspec(naked) void asm_00864e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00864edb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00864edb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00864f04 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00861b80 }
	__asm { mov dword ptr [esi], 0xe63b5c }
	__asm { mov dword ptr [esi + 8], 0xe63b6c }
	__asm { jmp L_00864f06 }
	__asm { L_00864f04: }
	__asm { xor esi, esi }
	__asm { L_00864f06: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00872ca0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864f2a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864f2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00861c40();
extern "C" void fn_00872e50();
// FUNCTION: ROBLOXSTUDIO 0x00864f40
extern "C" __declspec(naked) void asm_00864f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00864f8b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00864f8b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00864fb4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00861c40 }
	__asm { mov dword ptr [esi], 0xe638e4 }
	__asm { mov dword ptr [esi + 8], 0xe638f4 }
	__asm { jmp L_00864fb6 }
	__asm { L_00864fb4: }
	__asm { xor esi, esi }
	__asm { L_00864fb6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00872e50 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00864fda }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00864fda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00861d00();
extern "C" void fn_00873000();
// FUNCTION: ROBLOXSTUDIO 0x00864ff0
extern "C" __declspec(naked) void asm_00864ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086503b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086503b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00865064 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00861d00 }
	__asm { mov dword ptr [esi], 0xe63914 }
	__asm { mov dword ptr [esi + 8], 0xe63924 }
	__asm { jmp L_00865066 }
	__asm { L_00865064: }
	__asm { xor esi, esi }
	__asm { L_00865066: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00873000 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0086508a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0086508a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00861dc0();
extern "C" void fn_008731b0();
// FUNCTION: ROBLOXSTUDIO 0x008650a0
extern "C" __declspec(naked) void asm_008650a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008650eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008650eb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00865114 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00861dc0 }
	__asm { mov dword ptr [esi], 0xe639a4 }
	__asm { mov dword ptr [esi + 8], 0xe639b4 }
	__asm { jmp L_00865116 }
	__asm { L_00865114: }
	__asm { xor esi, esi }
	__asm { L_00865116: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008731b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0086513a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0086513a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00861e80();
extern "C" void fn_00873360();
// FUNCTION: ROBLOXSTUDIO 0x00865150
extern "C" __declspec(naked) void asm_00865150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086519b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086519b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008651c4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00861e80 }
	__asm { mov dword ptr [esi], 0xe63974 }
	__asm { mov dword ptr [esi + 8], 0xe63984 }
	__asm { jmp L_008651c6 }
	__asm { L_008651c4: }
	__asm { xor esi, esi }
	__asm { L_008651c6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00873360 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008651ea }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008651ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00861f40();
extern "C" void fn_00873510();
// FUNCTION: ROBLOXSTUDIO 0x00865230
extern "C" __declspec(naked) void asm_00865230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086527b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086527b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008652a4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00861f40 }
	__asm { mov dword ptr [esi], 0xe63b8c }
	__asm { mov dword ptr [esi + 8], 0xe63b9c }
	__asm { jmp L_008652a6 }
	__asm { L_008652a4: }
	__asm { xor esi, esi }
	__asm { L_008652a6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00873510 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008652ca }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008652ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00862000();
extern "C" void fn_008736c0();
// FUNCTION: ROBLOXSTUDIO 0x008652e0
extern "C" __declspec(naked) void asm_008652e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086532b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0086532b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00865354 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00862000 }
	__asm { mov dword ptr [esi], 0xe63944 }
	__asm { mov dword ptr [esi + 8], 0xe63954 }
	__asm { jmp L_00865356 }
	__asm { L_00865354: }
	__asm { xor esi, esi }
	__asm { L_00865356: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008736c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0086537a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0086537a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007975c0();
extern "C" void fn_007d5470();
extern "C" void fn_007de2d0();
extern "C" void fn_007e9920();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x00865a10
extern "C" __declspec(naked) void asm_00865a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9920 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { call fn_007de2d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007975c0();
extern "C" void fn_007d03e0();
extern "C" void fn_007d5b00();
extern "C" void fn_007de2d0();
extern "C" void fn_007e9920();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x00865af0
extern "C" __declspec(naked) void asm_00865af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5b00 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007d03e0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5b00 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_007d03e0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9920 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { call fn_007de2d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2b60();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00866200
extern "C" __declspec(naked) void asm_00866200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_008662bd }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008662a3 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2b60 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00866292 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00866292: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008662a3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008662bd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008662bd: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { je L_008662ee }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008662ee: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2b60();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00866310
extern "C" __declspec(naked) void asm_00866310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 2 }
	__asm { jb L_008663cd }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008663b3 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2b60 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_008663a2 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_008663a2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008663b3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008663cd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008663cd: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { je L_008663fe }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008663fe: }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00865d80();
extern "C" void fn_00867110();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008666e0
extern "C" __declspec(naked) void asm_008666e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 2 }
	__asm { jb L_008667ab }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00867110 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00866733 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866733: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00866791 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00865d80 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00866780 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00866780: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866791: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008667ab }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008667ab: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008667c5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008667c5: }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00865d80();
extern "C" void fn_008671b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008667f0
extern "C" __declspec(naked) void asm_008667f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 3 }
	__asm { jb L_008668bb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_008671b0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00866843 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866843: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008668a1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00865d80 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00866890 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00866890: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008668a1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008668bb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008668bb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008668d5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008668d5: }
	__asm { push 3 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00865eb0();
extern "C" void fn_00867250();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00866900
extern "C" __declspec(naked) void asm_00866900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 3 }
	__asm { jb L_008669cb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00867250 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00866953 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866953: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008669b1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00865eb0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_008669a0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_008669a0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008669b1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008669cb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008669cb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008669e5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008669e5: }
	__asm { push 3 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00865eb0();
extern "C" void fn_008672f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00866a10
extern "C" __declspec(naked) void asm_00866a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 4 }
	__asm { jb L_00866adb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_008672f0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00866a63 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866a63: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00866ac1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00865eb0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00866ab0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00866ab0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866ac1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00866adb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00866adb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00866af5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866af5: }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2bd0();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00866b20
extern "C" __declspec(naked) void asm_00866b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 5 }
	__asm { jb L_00866bed }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push ecx }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00866b73 }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866b73: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00866bd3 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2bd0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov bl, byte ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00866bc1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00866bc1: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866bd3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00866bed }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00866bed: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00866c07 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866c07: }
	__asm { push 5 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2bd0();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00866c30
extern "C" __declspec(naked) void asm_00866c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 6 }
	__asm { jb L_00866cfd }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push ecx }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00866c83 }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866c83: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00866ce3 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2bd0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov bl, byte ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00866cd1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00866cd1: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866ce3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00866cfd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00866cfd: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00866d17 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00866d17: }
	__asm { push 6 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00868de0();
// FUNCTION: ROBLOXSTUDIO 0x00867390
extern "C" __declspec(naked) void asm_00867390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00868de0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe62fcc }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0086743e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0086743e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00867ac0
extern "C" __declspec(naked) void asm_00867ac0()
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
	__asm { push 0x11f112c }
	__asm { mov edi, ecx }
	__asm { push 0xe631f4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59e08 }
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
	__asm { push 0xe56808 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe63200 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe63214 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe63224 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe63238 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe63254 }
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

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00867c20
extern "C" __declspec(naked) void asm_00867c20()
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
	__asm { push 0x11f082c }
	__asm { mov edi, ecx }
	__asm { push 0xe62870 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59898 }
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
	__asm { push 0xe62880 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe62884 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe62888 }
	__asm { push 2 }
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

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00867d60
extern "C" __declspec(naked) void asm_00867d60()
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
	__asm { push 0x11f07d0 }
	__asm { mov edi, ecx }
	__asm { push 0xe62890 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59868 }
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
	__asm { push 0xe6289c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628a4 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1010c7c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628ac }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628b4 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628bc }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628c4 }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628cc }
	__asm { push 7 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00867ee0
extern "C" __declspec(naked) void asm_00867ee0()
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
	__asm { push 0x11f0800 }
	__asm { mov edi, ecx }
	__asm { push 0xe628d4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59880 }
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
	__asm { push 0xe628e0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe628ec }
	__asm { push 1 }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_00825060();
extern "C" void fn_008251b0();
extern "C" void fn_00868d30();
// FUNCTION: ROBLOXSTUDIO 0x008682b0
extern "C" __declspec(naked) void asm_008682b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00868d30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe625fc }
	__asm { call fn_00825060 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00868342 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00868342: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00868365 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00868365: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00868d30();
// FUNCTION: ROBLOXSTUDIO 0x00868990
extern "C" __declspec(naked) void asm_00868990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00868d30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe62740 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00868a22 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00868a22: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00868a45 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00868a45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5a20();
extern "C" void fn_008251b0();
extern "C" void fn_00868d30();
// FUNCTION: ROBLOXSTUDIO 0x00868a60
extern "C" __declspec(naked) void asm_00868a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00868d30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe625a0 }
	__asm { call fn_007d5a20 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00868af2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00868af2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00868b15 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00868b15: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131da24[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00868de0
extern "C" __declspec(naked) void asm_00868de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131da24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00868e5a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131da24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61944 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131da28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00868e5a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131da28 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe62fc0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00868ed2 }
	__asm { push 0x11fee80 }
	__asm { mov ecx, 0x11fee80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00868ed2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00868ebd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00868ed2 }
	__asm { L_00868ebd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00868ed2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0041ed90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00868ef0
extern "C" __declspec(naked) void asm_00868ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00868f6a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61950 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00868f6a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131d1d8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe62230 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00868fe2 }
	__asm { push 0x12d2c7c }
	__asm { mov ecx, 0x12d2c7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00868fe2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00868fcd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00868fe2 }
	__asm { L_00868fcd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00868fe2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d57f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00869000
extern "C" __declspec(naked) void asm_00869000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d57f0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe621c0 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00869097 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00869086 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_00869086: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00869097 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_00869097: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d5a20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008690c0
extern "C" __declspec(naked) void asm_008690c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5a20 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe622c4 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00869157 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00869146 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_00869146: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00869157 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_00869157: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00869410();
// FUNCTION: ROBLOXSTUDIO 0x00869180
extern "C" __declspec(naked) void asm_00869180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008691fb }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_008691e4 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008691fb }
	__asm { L_008691e4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008691fb: }
	__asm { mov ecx, esi }
	__asm { call fn_00869410 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00869229 }
	__asm { test al, 1 }
	__asm { jne L_00869229 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00869229 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00869229: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007af180();
// FUNCTION: ROBLOXSTUDIO 0x00869410
extern "C" __declspec(naked) void asm_00869410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00869488 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00869471 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00869488 }
	__asm { L_00869471: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00869488: }
	__asm { mov ecx, esi }
	__asm { call fn_007af180 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008694bc }
	__asm { test al, 1 }
	__asm { jne L_008694bc }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008694bc }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008694bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00869ae0
extern "C" __declspec(naked) void asm_00869ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29f38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
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
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x0086a4e0
extern "C" __declspec(naked) void asm_0086a4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a226 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe61e28 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_0086a521 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9e50 }
	__asm { L_0086a521: }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_0086a535 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006b9e50 }
	__asm { L_0086a535: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0086a54c }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086a54c: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0086a568 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086a568: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x0086a580
extern "C" __declspec(naked) void asm_0086a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a226 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe61e18 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_0086a5c1 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9e50 }
	__asm { L_0086a5c1: }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_0086a5d5 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006b9e50 }
	__asm { L_0086a5d5: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0086a5ec }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086a5ec: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0086a608 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086a608: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x0086a620
extern "C" __declspec(naked) void asm_0086a620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a226 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe61ae0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_0086a661 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9e50 }
	__asm { L_0086a661: }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_0086a675 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006b9e50 }
	__asm { L_0086a675: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0086a68c }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086a68c: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0086a6a8 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086a6a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_0086f5d0();
// FUNCTION: ROBLOXSTUDIO 0x0086a7c0
extern "C" __declspec(naked) void asm_0086a7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a248 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086a84d }
	__asm { add esi, 5 }
	__asm { je L_0086a815 }
	__asm { add esi, -5 }
	__asm { jmp L_0086a817 }
	__asm { L_0086a815: }
	__asm { xor esi, esi }
	__asm { L_0086a817: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a847 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a847 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086a84d }
	__asm { L_0086a847: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086a84d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_0086f5d0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0086a89c }
	__asm { add esi, 5 }
	__asm { je L_0086a872 }
	__asm { add esi, -5 }
	__asm { jmp L_0086a874 }
	__asm { L_0086a872: }
	__asm { xor esi, esi }
	__asm { L_0086a874: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a89c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a89c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0086a89c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_008707a0();
// FUNCTION: ROBLOXSTUDIO 0x0086a8b0
extern "C" __declspec(naked) void asm_0086a8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a278 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086a93d }
	__asm { add esi, 5 }
	__asm { je L_0086a905 }
	__asm { add esi, -5 }
	__asm { jmp L_0086a907 }
	__asm { L_0086a905: }
	__asm { xor esi, esi }
	__asm { L_0086a907: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a937 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a937 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0086a93d }
	__asm { L_0086a937: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0086a93d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_008707a0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0086a98c }
	__asm { add esi, 5 }
	__asm { je L_0086a962 }
	__asm { add esi, -5 }
	__asm { jmp L_0086a964 }
	__asm { L_0086a962: }
	__asm { xor esi, esi }
	__asm { L_0086a964: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a98c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0086a98c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0086a98c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0086a4e0();
extern "C" void fn_0086a580();
extern "C" void fn_0086a7c0();
extern "C" void fn_0086a9a0();
extern "C" void fn_0086b250();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x0086aef0
extern "C" __declspec(naked) void asm_0086aef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a37e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi + 0x3a8] }
	__asm { mov dword ptr [ebp - 4], 0xd }
	__asm { test eax, eax }
	__asm { je L_0086af3e }
	__asm { push esi }
	__asm { push 0x86b050 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 0x7c }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_0086af3e: }
	__asm { cmp dword ptr [edi + 0x3a4], 0x10 }
	__asm { jb L_0086af55 }
	__asm { push dword ptr [edi + 0x390] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0086af55: }
	__asm { mov dword ptr [edi + 0x3a4], 0xf }
	__asm { mov dword ptr [edi + 0x3a0], 0 }
	__asm { lea ecx, [edi + 0x368] }
	__asm { mov byte ptr [edi + 0x390], 0 }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_0086a4e0 }
	__asm { lea ecx, [edi + 0x348] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_0086a4e0 }
	__asm { lea ecx, [edi + 0x328] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_0086a4e0 }
	__asm { lea ecx, [edi + 0x308] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_0086a4e0 }
	__asm { lea ecx, [edi + 0x2e8] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_0086a580 }
	__asm { lea ecx, [edi + 0x2c8] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_0086a580 }
	__asm { lea ecx, [edi + 0x2bc] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0086a7c0 }
	__asm { lea ecx, [edi + 0x2b4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0086a7c0 }
	__asm { lea ecx, [edi + 0x2ac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0086a7c0 }
	__asm { lea ecx, [edi + 0x2a4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0086a7c0 }
	__asm { lea ecx, [edi + 0x29c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0086a9a0 }
	__asm { lea ecx, [edi + 0x294] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0086a9a0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0086b250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0086b700
extern "C" __declspec(naked) void asm_0086b700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a5d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0086b75e }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0086b755 }
	__asm { test al, 1 }
	__asm { jne L_0086b74e }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0086b74e }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0086b74e: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_0086b755: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0086b75e: }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0086b79b }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0086b792 }
	__asm { test al, 1 }
	__asm { jne L_0086b78b }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0086b78b }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0086b78b: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_0086b792: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0086b79b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0086c3d0
extern "C" __declspec(naked) void asm_0086c3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a72f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_0086c404 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0086c404: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop esi }
	__asm { je L_0086c459 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0086c459: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x0086c500
extern "C" __declspec(naked) void asm_0086c500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64790 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jne L_0086c551 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_0086c551: }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0086c58a }
	__asm { test al, 1 }
	__asm { jne L_0086c58a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0086c58a }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0086c58a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
extern "C" void fn_008bff30();
// FUNCTION: ROBLOXSTUDIO 0x0086d660
extern "C" __declspec(naked) void asm_0086d660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { call fn_007d5d30 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { call fn_00410d50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_00864b60();
// FUNCTION: ROBLOXSTUDIO 0x0086e590
extern "C" __declspec(naked) void asm_0086e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_0086e5ba }
	__asm { add eax, 0x1c }
	__asm { jmp L_0086e5bc }
	__asm { L_0086e5ba: }
	__asm { xor eax, eax }
	__asm { L_0086e5bc: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], 0x878ea0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086e5d7 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { jmp L_0086e61a }
	__asm { L_0086e5d7: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086e618 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086e607 }
	__asm { push 0x33e }
	__asm { push 0xe52268 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086e618 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086e607: }
	__asm { movzx eax, al }
	__asm { push 0xe63788 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086e618: }
	__asm { xor ecx, ecx }
	__asm { L_0086e61a: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00864b60 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0086e651 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086e651: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_00864c60();
// FUNCTION: ROBLOXSTUDIO 0x0086e660
extern "C" __declspec(naked) void asm_0086e660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_0086e68a }
	__asm { add eax, 0x1c }
	__asm { jmp L_0086e68c }
	__asm { L_0086e68a: }
	__asm { xor eax, eax }
	__asm { L_0086e68c: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], 0x878ee0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086e6a7 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { jmp L_0086e6ea }
	__asm { L_0086e6a7: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086e6e8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086e6d7 }
	__asm { push 0x33e }
	__asm { push 0xe52268 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086e6e8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086e6d7: }
	__asm { movzx eax, al }
	__asm { push 0xe63788 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086e6e8: }
	__asm { xor ecx, ecx }
	__asm { L_0086e6ea: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00864c60 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0086e721 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086e721: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_00864d60();
// FUNCTION: ROBLOXSTUDIO 0x0086e730
extern "C" __declspec(naked) void asm_0086e730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_0086e75a }
	__asm { add eax, 0x1c }
	__asm { jmp L_0086e75c }
	__asm { L_0086e75a: }
	__asm { xor eax, eax }
	__asm { L_0086e75c: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], 0x878ee0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086e777 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { jmp L_0086e7ba }
	__asm { L_0086e777: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086e7b8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086e7a7 }
	__asm { push 0x33e }
	__asm { push 0xe52268 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086e7b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086e7a7: }
	__asm { movzx eax, al }
	__asm { push 0xe63788 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086e7b8: }
	__asm { xor ecx, ecx }
	__asm { L_0086e7ba: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00864d60 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0086e7f1 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086e7f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_00864a60();
// FUNCTION: ROBLOXSTUDIO 0x0086e800
extern "C" __declspec(naked) void asm_0086e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_0086e82a }
	__asm { add eax, 0x1c }
	__asm { jmp L_0086e82c }
	__asm { L_0086e82a: }
	__asm { xor eax, eax }
	__asm { L_0086e82c: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], 0x878f20 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0086e847 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { jmp L_0086e88a }
	__asm { L_0086e847: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0086e888 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0086e877 }
	__asm { push 0x33e }
	__asm { push 0xe52268 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0086e888 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0086e877: }
	__asm { movzx eax, al }
	__asm { push 0xe63788 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0086e888: }
	__asm { xor ecx, ecx }
	__asm { L_0086e88a: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00864a60 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0086e8c1 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0086e8c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0057db00();
extern "C" void fn_00cde1d0();
// FUNCTION: ROBLOXSTUDIO 0x00870f70
extern "C" __declspec(naked) void asm_00870f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_00870f87 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00870f87: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, eax }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00870fe8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00870fe8 }
	__asm { L_00870fb8: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 0xc] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00870fe8 }
	__asm { cmp esi, ebx }
	__asm { jne L_00870fe0 }
	__asm { test ecx, ecx }
	__asm { je L_00870fd7 }
	__asm { lea eax, [ecx - 0xc] }
	__asm { jmp L_00870fd9 }
	__asm { L_00870fd7: }
	__asm { xor eax, eax }
	__asm { L_00870fd9: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_00870ff3 }
	__asm { L_00870fe0: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00870fb8 }
	__asm { L_00870fe8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00870ff3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00870ffe }
	__asm { add eax, -0xc }
	__asm { jmp L_00871000 }
	__asm { L_00870ffe: }
	__asm { xor eax, eax }
	__asm { L_00871000: }
	__asm { push dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_00cde1d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_0086bc30();
// FUNCTION: ROBLOXSTUDIO 0x008712a0
extern "C" __declspec(naked) void asm_008712a0()
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
	__asm { je L_0087130a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_0087130a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008712f9 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087130a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008712f9: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087130a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00871316 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00871318 }
	__asm { L_00871316: }
	__asm { xor esi, esi }
	__asm { L_00871318: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_0086bc30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_007a0870();
// FUNCTION: ROBLOXSTUDIO 0x00871340
extern "C" __declspec(naked) void asm_00871340()
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
	__asm { je L_008713aa }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_008713aa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00871399 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008713aa }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00871399: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008713aa: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008713b6 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_008713b8 }
	__asm { L_008713b6: }
	__asm { xor esi, esi }
	__asm { L_008713b8: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_007a0870 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0044d630();
extern "C" void fn_006b9740();
extern "C" void fn_0086bd50();
// FUNCTION: ROBLOXSTUDIO 0x008713e0
extern "C" __declspec(naked) void asm_008713e0()
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
	__asm { je L_0087144a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_0087144a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00871439 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087144a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00871439: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087144a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00871456 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00871458 }
	__asm { L_00871456: }
	__asm { xor esi, esi }
	__asm { L_00871458: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044d630 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_0086bd50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_0086be30();
// FUNCTION: ROBLOXSTUDIO 0x008714a0
extern "C" __declspec(naked) void asm_008714a0()
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
	__asm { je L_0087150a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_0087150a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008714f9 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087150a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008714f9: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087150a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00871516 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00871518 }
	__asm { L_00871516: }
	__asm { xor ebx, ebx }
	__asm { L_00871518: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { add ecx, ebx }
	__asm { call fn_0086be30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_0086bf00();
extern "C" void fn_009cc200();
// FUNCTION: ROBLOXSTUDIO 0x00871550
extern "C" __declspec(naked) void asm_00871550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_008715ba }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_008715ba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008715a9 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008715ba }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008715a9: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008715ba: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008715c6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008715c8 }
	__asm { L_008715c6: }
	__asm { xor edi, edi }
	__asm { L_008715c8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_009cc200 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_0086bf00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_007e0af0();
extern "C" void fn_0086c020();
// FUNCTION: ROBLOXSTUDIO 0x00871600
extern "C" __declspec(naked) void asm_00871600()
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
	__asm { je L_0087166a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_0087166a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00871659 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087166a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00871659: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087166a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00871676 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00871678 }
	__asm { L_00871676: }
	__asm { xor ebx, ebx }
	__asm { L_00871678: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007e0af0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { add ecx, ebx }
	__asm { call fn_0086c020 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004107f0();
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_0086c0e0();
extern "C" void fn_009cc200();
// FUNCTION: ROBLOXSTUDIO 0x008716b0
extern "C" __declspec(naked) void asm_008716b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0087171a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_0087171a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00871709 }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087171a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00871709: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087171a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00871726 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00871728 }
	__asm { L_00871726: }
	__asm { xor edi, edi }
	__asm { L_00871728: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_009cc200 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_0086c0e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0044d240();
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_0086c220();
extern "C" void fn_009cc200();
// FUNCTION: ROBLOXSTUDIO 0x00871780
extern "C" __declspec(naked) void asm_00871780()
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
	__asm { je L_008717ea }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_008717ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008717d9 }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008717ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008717d9: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008717ea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008717f6 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_008717f8 }
	__asm { L_008717f6: }
	__asm { xor ebx, ebx }
	__asm { L_008717f8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_009cc200 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { add eax, 0x8c }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { call fn_0044d240 }
	__asm { fld dword ptr [eax] }
	__asm { push ecx }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { call fn_0044d240 }
	__asm { fld dword ptr [eax] }
	__asm { push ecx }
	__asm { fstp dword ptr [esi] }
	__asm { push esp }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, ebx }
	__asm { call fn_0086c220 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041cd30();
extern "C" void fn_007cd560();
extern "C" void fn_00812d10();
// FUNCTION: ROBLOXSTUDIO 0x00873b40
extern "C" __declspec(naked) void asm_00873b40()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp byte ptr [ebx + 0x278], 0 }
	__asm { push edi }
	__asm { je L_00873b82 }
	__asm { mov edi, edi }
	__asm { L_00873b50: }
	__asm { mov edi, dword ptr [ebx + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00873b88 }
	__asm { add edi, 0x1c }
	__asm { je L_00873b88 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00873b88 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00873b88 }
	__asm { cmp byte ptr [eax + 0x278], 0 }
	__asm { mov ebx, eax }
	__asm { jne L_00873b50 }
	__asm { L_00873b82: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00873b88: }
	__asm { mov edi, dword ptr [ebx + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00873b82 }
	__asm { add edi, 0x1c }
	__asm { je L_00873b82 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00812d10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00873b82 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00873b82 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00a9cd50();
// FUNCTION: ROBLOXSTUDIO 0x008754c0
extern "C" __declspec(naked) void asm_008754c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x124] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x144] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x164] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x184] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1a4] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1d4] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1f4] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x2c8] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x2e8] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x308] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x328] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x348] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x368] }
	__asm { call fn_00a9cd50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044a7a0();
extern "C" void fn_00871a80();
extern "C" void fn_00874ac0();
// FUNCTION: ROBLOXSTUDIO 0x00875790
extern "C" __declspec(naked) void asm_00875790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x278], 0 }
	__asm { jne L_008757c7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_008757c7: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { je L_008757f6 }
	__asm { L_008757d5: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044a7a0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00874ac0 }
	__asm { test al, al }
	__asm { je L_00875825 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esi, 0x44 }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jne L_008757d5 }
	__asm { L_008757f6: }
	__asm { cmp byte ptr [edi + 0x279], 0 }
	__asm { jne L_0087584c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00875825: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0087584c: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00871a80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00877680
extern "C" __declspec(naked) void asm_00877680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004124c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9da0();
extern "C" void fn_00864720();
extern "C" void fn_00aa0cb0();
// FUNCTION: ROBLOXSTUDIO 0x008783d0
extern "C" __declspec(naked) void asm_008783d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { jne L_00878497 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00878446 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00878446 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00878435 }
	__asm { push 0x48 }
	__asm { push 0xe635d8 }
	__asm { push 0xe63628 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00878446 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00878435: }
	__asm { movzx eax, cl }
	__asm { push 0xe63648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00878446: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0xaa0cb0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00864720 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0087848a }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0087848a: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00878497 }
	__asm { mov ecx, esi }
	__asm { call fn_00aa0cb0 }
	__asm { L_00878497: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9da0();
extern "C" void fn_008647f0();
extern "C" void fn_00aa0cb0();
// FUNCTION: ROBLOXSTUDIO 0x008784b0
extern "C" __declspec(naked) void asm_008784b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { jne L_00878577 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00878526 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00878526 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00878515 }
	__asm { push 0x48 }
	__asm { push 0xe635d8 }
	__asm { push 0xe63628 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00878526 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00878515: }
	__asm { movzx eax, cl }
	__asm { push 0xe63648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00878526: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0xaa0cb0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_008647f0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0087856a }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0087856a: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00878577 }
	__asm { mov ecx, esi }
	__asm { call fn_00aa0cb0 }
	__asm { L_00878577: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9da0();
extern "C" void fn_008648c0();
extern "C" void fn_00aa0cb0();
// FUNCTION: ROBLOXSTUDIO 0x00878590
extern "C" __declspec(naked) void asm_00878590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { jne L_00878657 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00878606 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00878606 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008785f5 }
	__asm { push 0x48 }
	__asm { push 0xe635d8 }
	__asm { push 0xe63628 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00878606 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008785f5: }
	__asm { movzx eax, cl }
	__asm { push 0xe63648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00878606: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0xaa0cb0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_008648c0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0087864a }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0087864a: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00878657 }
	__asm { mov ecx, esi }
	__asm { call fn_00aa0cb0 }
	__asm { L_00878657: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9da0();
extern "C" void fn_00864990();
extern "C" void fn_00aa0cb0();
// FUNCTION: ROBLOXSTUDIO 0x00878670
extern "C" __declspec(naked) void asm_00878670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { jne L_00878737 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008786e6 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_008786e6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008786d5 }
	__asm { push 0x48 }
	__asm { push 0xe635d8 }
	__asm { push 0xe63628 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008786e6 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008786d5: }
	__asm { movzx eax, cl }
	__asm { push 0xe63648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008786e6: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0xaa0cb0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00864990 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0087872a }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0087872a: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00878737 }
	__asm { mov ecx, esi }
	__asm { call fn_00aa0cb0 }
	__asm { L_00878737: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00872290();
extern "C" void fn_00877730();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00878b00
extern "C" __declspec(naked) void asm_00878b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x258], eax }
	__asm { je L_00878b2b }
	__asm { push 0x12f99b8 }
	__asm { mov dword ptr [esi + 0x258], eax }
	__asm { call fn_007b4f50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xa4] }
	__asm { L_00878b2b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x388], eax }
	__asm { je L_00878c15 }
	__asm { push 0x12fa304 }
	__asm { mov dword ptr [edi + 0x388], eax }
	__asm { call fn_007b4f50 }
	__asm { mov eax, dword ptr [edi + 0x388] }
	__asm { test eax, eax }
	__asm { je L_00878bde }
	__asm { dec eax }
	__asm { cmp eax, 4 }
	__asm { ja L_00878c15 }
	__asm { cmp dword ptr [edi + 0x3a8], 0 }
	__asm { jne L_00878c0e }
	__asm { push 0x1f4 }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00878bc7 }
	__asm { push 0x86b050 }
	__asm { push 0x869ae0 }
	__asm { push 4 }
	__asm { lea esi, [eax + 4] }
	__asm { push 0x7c }
	__asm { push esi }
	__asm { mov dword ptr [eax], 4 }
	__asm { call fn_00cf676b }
	__asm { jmp L_00878bc9 }
	__asm { L_00878bc7: }
	__asm { xor esi, esi }
	__asm { L_00878bc9: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x3a8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00877730 }
	__asm { jmp L_00878c0e }
	__asm { L_00878bde: }
	__asm { mov eax, dword ptr [edi + 0x3a8] }
	__asm { mov dword ptr [edi + 0x3a8], 0 }
	__asm { test eax, eax }
	__asm { je L_00878c0e }
	__asm { push 0x86b050 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 0x7c }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00878c0e: }
	__asm { mov ecx, edi }
	__asm { call fn_00872290 }
	__asm { L_00878c15: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0067af70();
extern "C" void fn_007cd560();
extern "C" void fn_00960b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00878d20
extern "C" __declspec(naked) void asm_00878d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00878db7 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00878d5d }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00878d5f }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00878d5f }
	__asm { L_00878d5d: }
	__asm { mov eax, edi }
	__asm { L_00878d5f: }
	__asm { test eax, eax }
	__asm { je L_00878db7 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00878db7 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00878db7 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00878db7 }
	__asm { call fn_0067af70 }
	__asm { test eax, eax }
	__asm { je L_00878db7 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x150] }
	__asm { call fn_00960b90 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x390] }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [edi + 0x38c], eax }
	__asm { call fn_004038a0 }
	__asm { jmp L_00878dce }
	__asm { L_00878db7: }
	__asm { lea ecx, [edi + 0x390] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp ecx, eax }
	__asm { je L_00878dce }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00878dce: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00878ddf }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00878ddf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012f9fec[];
extern "C" void fn_008626d0();
extern "C" void fn_00864480();
extern "C" void fn_008792b0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_009a7290();
// FUNCTION: ROBLOXSTUDIO 0x008791b0
extern "C" __declspec(naked) void asm_008791b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2adc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { movzx eax, byte ptr [g_012f9fec] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x2c }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bff30 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x86c650 }
	__asm { push esi }
	__asm { call fn_00864480 }
	__asm { add esp, 0x34 }
	__asm { mov ecx, edi }
	__asm { call fn_008626d0 }
	__asm { fldz }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { fld dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x228] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x22c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x230] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x234] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008792b0 }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" char g_012f9fec[];
extern "C" void fn_008626d0();
extern "C" void fn_00864480();
extern "C" void fn_008798e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_009a7290();
// FUNCTION: ROBLOXSTUDIO 0x008796e0
extern "C" __declspec(naked) void asm_008796e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2adc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { movzx eax, byte ptr [g_012f9fec] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x2c }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bff30 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x86c650 }
	__asm { push esi }
	__asm { call fn_00864480 }
	__asm { add esp, 0x34 }
	__asm { mov ecx, edi }
	__asm { call fn_008626d0 }
	__asm { fldz }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { fld dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x218] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x21c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x220] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x224] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008798e0 }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_008791b0();
extern "C" void fn_008796e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
// FUNCTION: ROBLOXSTUDIO 0x008797e0
extern "C" __declspec(naked) void asm_008797e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2add8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [ebp + 0x34], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00879828 }
	__asm { mov eax, dword ptr [ebx + 0xa8] }
	__asm { test eax, eax }
	__asm { je L_00879828 }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jne L_008798bb }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_008798bb }
	__asm { L_00879828: }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008bff30 }
	__asm { fld dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008796e0 }
	__asm { sub esp, 0x20 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { lea eax, [ebp + 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008bff30 }
	__asm { fld dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008791b0 }
	__asm { test al, al }
	__asm { je L_008798bb }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_008798bb }
	__asm { mov bl, 1 }
	__asm { jmp L_008798bd }
	__asm { L_008798bb: }
	__asm { xor bl, bl }
	__asm { L_008798bd: }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0041ee90();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087afa0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00879d00
extern "C" __declspec(naked) void asm_00879d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ae66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087afa0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00879dbc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00879dbc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64064 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00879e3a }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00879e3a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00879e25 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00879e3a }
	__asm { L_00879e25: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00879e3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_0087aff0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00879e50
extern "C" __declspec(naked) void asm_00879e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ae36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087aff0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00879f0c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00879f0c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_00869000 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64160 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00879f8a }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00879f8a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00879f75 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00879f8a }
	__asm { L_00879f75: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00879f8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0040bc40();
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b040();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00879fa0
extern "C" __declspec(naked) void asm_00879fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ae66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087b040 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087a05c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087a05c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe641a8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087a0da }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087a0da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087a0c5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087a0da }
	__asm { L_0087a0c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087a0da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0040bb80();
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b1d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087a930
extern "C" __declspec(naked) void asm_0087a930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ae66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087b1d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087a9ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087a9ec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe641f0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087aa6a }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087aa6a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087aa55 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087aa6a }
	__asm { L_0087aa55: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087aa6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b220();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087aa80
extern "C" __declspec(naked) void asm_0087aa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ae66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087b220 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087ab3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087ab3c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64240 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087abba }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087abba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087aba5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087abba }
	__asm { L_0087aba5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087abba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b270();
extern "C" void fn_0087b310();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087abd0
extern "C" __declspec(naked) void asm_0087abd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2afd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087b270 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087ac8c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087ac8c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64370 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087ad0a }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087ad0a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087acf5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087ad0a }
	__asm { L_0087acf5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087ad0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d434[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b2c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087ad20
extern "C" __declspec(naked) void asm_0087ad20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b006 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087b2c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087addc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087addc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d438 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64240 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087ae5a }
	__asm { push 0x1205bd8 }
	__asm { mov ecx, 0x1205bd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087ae5a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087ae45 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087ae5a }
	__asm { L_0087ae45: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087ae5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e4dd8[];
extern "C" char g_0131d434[];
extern "C" void fn_0041ee90();
extern "C" void fn_007cbf10();
extern "C" void fn_00869be0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087ae70
extern "C" __declspec(naked) void asm_0087ae70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b026 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869be0 }
	__asm { mov dword ptr [esi], 0xe63d14 }
	__asm { mov dword ptr [esi + 4], 0xe63dcc }
	__asm { mov dword ptr [esi + 0x18], 0xe63dd4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe63de0 }
	__asm { mov dword ptr [esi + 0x64], 0xe63df0 }
	__asm { mov dword ptr [esi + 0x68], 0xe63df8 }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0087af16 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe63cc0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0087af16: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d438 }
	__asm { inc dword ptr [g_012e4dd8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d5b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087b310
extern "C" __declspec(naked) void asm_0087b310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5b00 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe63cd4 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0087b3a7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0087b396 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0087b396: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0087b3a7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0087b3a7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087bb10
extern "C" __declspec(naked) void asm_0087bb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0087bb33 }
	__asm { add eax, -0x1c }
	__asm { je L_0087bb33 }
	__asm { lea ecx, [eax + 0x290] }
	__asm { jmp L_0087bb35 }
	__asm { L_0087bb33: }
	__asm { xor ecx, ecx }
	__asm { L_0087bb35: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0087bb70 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0087bb7a }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0087bb7a }
	__asm { L_0087bb70: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0087bb7a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_0087bba8 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087bba8: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_0087d700();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087c4c0
extern "C" __declspec(naked) void asm_0087c4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b076 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087d700 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087c57c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087c57c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64ab8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087c5fa }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087c5fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087c5e5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087c5fa }
	__asm { L_0087c5e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087c5fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087d750();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087c610
extern "C" __declspec(naked) void asm_0087c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b0a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087d750 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087c6cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087c6cc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe649cc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087c74a }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087c74a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087c735 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087c74a }
	__asm { L_0087c735: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087c74a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0041ee10();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087d7a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087c760
extern "C" __declspec(naked) void asm_0087c760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087d7a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087c81c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087c81c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6482c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087c89a }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087c89a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087c885 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087c89a }
	__asm { L_0087c885: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087c89a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_0087d7f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087c8b0
extern "C" __declspec(naked) void asm_0087c8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b0d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087d7f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087c96c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087c96c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_00869000 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64918 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087c9ea }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087c9ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087c9d5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087c9ea }
	__asm { L_0087c9d5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087c9ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0040bc40();
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087d840();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087ca00
extern "C" __declspec(naked) void asm_0087ca00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087d840 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087cabc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087cabc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64954 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087cb3a }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087cb3a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087cb25 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087cb3a }
	__asm { L_0087cb25: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087cb3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0040bb80();
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087d9d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087d390
extern "C" __declspec(naked) void asm_0087d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087d9d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087d44c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087d44c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64990 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087d4ca }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087d4ca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087d4b5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087d4ca }
	__asm { L_0087d4b5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087d4ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d564[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087da20();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087d4e0
extern "C" __declspec(naked) void asm_0087d4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087da20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087d59c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087d59c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d568 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe649cc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087d61a }
	__asm { push 0x1206a0c }
	__asm { mov ecx, 0x1206a0c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087d61a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087d605 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087d61a }
	__asm { L_0087d605: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087d61a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e4dd0[];
extern "C" char g_0131d564[];
extern "C" void fn_0041ee10();
extern "C" void fn_007cbf10();
extern "C" void fn_00869630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087d630
extern "C" __declspec(naked) void asm_0087d630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b266 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869630 }
	__asm { mov dword ptr [esi], 0xe644dc }
	__asm { mov dword ptr [esi + 4], 0xe64594 }
	__asm { mov dword ptr [esi + 0x18], 0xe6459c }
	__asm { mov dword ptr [esi + 0x1c], 0xe645a8 }
	__asm { mov dword ptr [esi + 0x64], 0xe645b8 }
	__asm { mov dword ptr [esi + 0x68], 0xe645c0 }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0087d6d6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe644c8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0087d6d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d568 }
	__asm { inc dword ptr [g_012e4dd0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087dfb0
extern "C" __declspec(naked) void asm_0087dfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0087dfd3 }
	__asm { add eax, -0x1c }
	__asm { je L_0087dfd3 }
	__asm { lea ecx, [eax + 0x3ac] }
	__asm { jmp L_0087dfd5 }
	__asm { L_0087dfd3: }
	__asm { xor ecx, ecx }
	__asm { L_0087dfd5: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0087e010 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0087e01a }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0087e01a }
	__asm { L_0087e010: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0087e01a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_0087e048 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087e048: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d304[];
extern "C" void fn_0041cd30();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087fd50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087e870
extern "C" __declspec(naked) void asm_0087e870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087fd50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087e92c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64bcc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131d308 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087e92c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65070 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087e9aa }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087e9aa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087e995 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087e9aa }
	__asm { L_0087e995: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087e9aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d304[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_0087fda0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087e9c0
extern "C" __declspec(naked) void asm_0087e9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b2d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087fda0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087ea7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64bcc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131d308 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087ea7c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_00869000 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65158 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087eafa }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087eafa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087eae5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087eafa }
	__asm { L_0087eae5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087eafa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d304[];
extern "C" void fn_0040bc40();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087fdf0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087eb10
extern "C" __declspec(naked) void asm_0087eb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0087fdf0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087ebcc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64bcc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131d308 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0087ebcc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65194 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087ec4a }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087ec4a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087ec35 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087ec4a }
	__asm { L_0087ec35: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087ec4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}
