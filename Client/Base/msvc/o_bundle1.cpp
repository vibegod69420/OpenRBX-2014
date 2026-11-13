// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_011ecdf0[];
extern "C" char g_011ecdf8[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00405210
extern "C" __declspec(naked) void asm_00405210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [g_011ecdf0], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x131961c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { fld dword ptr [g_011ecdf8] }
	__asm { ret }
}

extern "C" char g_011ecdf4[];
extern "C" char g_011ecdf8[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00405240
extern "C" __declspec(naked) void asm_00405240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [g_011ecdf8], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x1319648 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { fld dword ptr [g_011ecdf4] }
	__asm { ret }
}

extern "C" char g_011ecdf4[];
extern "C" char g_012e357f[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00405270
extern "C" __declspec(naked) void asm_00405270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [g_011ecdf4], xmm0 }
	__asm { mov dword ptr [ebp + 8], 0x1319674 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012e357f] }
	__asm { ret }
}

extern "C" char g_011dd378[];
extern "C" char g_012e357f[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x004052a0
extern "C" __declspec(naked) void asm_004052a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [g_012e357f], al }
	__asm { mov dword ptr [ebp + 8], 0x13196a0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_011dd378] }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00405330
extern "C" __declspec(naked) void asm_00405330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { mov dword ptr [ebp + 8], 0x131944c }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
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
	__asm { mov al, byte ptr [ecx + 0x158] }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10500[];
extern "C" void fn_004088d0();
// FUNCTION: ROBLOXSTUDIO 0x00407df0
extern "C" __declspec(naked) void asm_00407df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 2 }
	__asm { push edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_00407e47 }
	__asm { lea esi, [edx + esi*4] }
	__asm { cmp esi, edx }
	__asm { jne L_00407e1c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00407e1c: }
	__asm { cmp esi, eax }
	__asm { je L_00407e7b }
	__asm { mov ecx, eax }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { lea edi, [ecx*4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00407e47: }
	__asm { jae L_00407e7b }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004088d0 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { sar eax, 2 }
	__asm { sub ecx, eax }
	__asm { je L_00407e69 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_00407e69: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 2 }
	__asm { sub esi, eax }
	__asm { lea eax, [ecx + esi*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_00407e7b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2e0[];
extern "C" char g_0131cb70[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00408030
extern "C" __declspec(naked) void asm_00408030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd700fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cb70] }
	__asm { test al, 1 }
	__asm { jne L_0040809b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb70], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0xf12f68 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131cb78 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddbfb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040809b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cb78 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004080fd }
	__asm { cmp dword ptr [g_0131a2e0], 0x29a }
	__asm { je L_004080fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004080ec }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004080fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004080ec: }
	__asm { movzx eax, al }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004080fd: }
	__asm { mov eax, 0x131cf70 }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0040ec50
extern "C" __declspec(naked) void asm_0040ec50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_0040ec6e }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040ec6e: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0040ec98 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040ec98: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_0040ecbb }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040ecbb: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10188[];
extern "C" void fn_0040ece0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x0040ed30
extern "C" __declspec(naked) void asm_0040ed30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lock bts dword ptr [edi], 0x1f }
	__asm { jae L_0040ed9e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0040ece0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { jns L_0040ed9e }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { mov ebx, eax }
	__asm { mov edi, edi }
	__asm { L_0040ed60: }
	__asm { push -1 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10188] }
	__asm { and esi, 0x3fffffff }
	__asm { or esi, 0x40000000 }
	__asm { L_0040ed75: }
	__asm { test esi, esi }
	__asm { jns L_0040ed7d }
	__asm { mov ecx, esi }
	__asm { jmp L_0040ed86 }
	__asm { L_0040ed7d: }
	__asm { lea ecx, [esi - 1] }
	__asm { or ecx, 0x80000000 }
	__asm { L_0040ed86: }
	__asm { and ecx, 0xbfffffff }
	__asm { mov eax, esi }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { cmp eax, esi }
	__asm { je L_0040ed9a }
	__asm { mov esi, eax }
	__asm { jmp L_0040ed75 }
	__asm { L_0040ed9a: }
	__asm { test esi, esi }
	__asm { js L_0040ed60 }
	__asm { L_0040ed9e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x0040fbb0
extern "C" __declspec(naked) void asm_0040fbb0()
{
	__asm { push ecx }
	__asm { cmp byte ptr [ecx + 4], 0 }
	__asm { je L_0040fbe3 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0040fbe3 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0040fbe3 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0040fbe3 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0040fbe3: }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040eec0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0040fd20
extern "C" __declspec(naked) void asm_0040fd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0040fd5c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0040fd5c: }
	__asm { push 0x40eeb0 }
	__asm { push 0x131a24c }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0040eec0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0040fd9d }
	__asm { push ebx }
	__asm { jmp L_0040fda1 }
	__asm { L_0040fd9d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0040fda1: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_0040fde6 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0040fde6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0040fde6 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0040fde6 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0040fde6: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0040fe2a }
	__asm { add esi, 5 }
	__asm { je L_0040fdfc }
	__asm { add esi, -5 }
	__asm { jmp L_0040fdfe }
	__asm { L_0040fdfc: }
	__asm { xor esi, esi }
	__asm { L_0040fdfe: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0040fe2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0040fe2a }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0040fe2a: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00412c00();
// FUNCTION: ROBLOXSTUDIO 0x00412c60
extern "C" __declspec(naked) void asm_00412c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { je L_00412c97 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00412c7c }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00412c7c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_00412c97: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp dword ptr [g_00e10508] }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a55c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00414340();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
// FUNCTION: ROBLOXSTUDIO 0x004140a0
extern "C" __declspec(naked) void asm_004140a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bfb0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a55c] }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_00414216 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0041410c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0041410c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0041410c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0041410c: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [g_0131a55c], 0 }
	__asm { jne L_004141d1 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_00414340 }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0x38], 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_004141a1 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { cmp eax, dword ptr [g_0131a55c] }
	__asm { je L_004141a1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00414190 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004141a1 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00414190: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004141a1: }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_004141d1 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004141d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_004141d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004141d1: }
	__asm { mov esi, dword ptr [g_0131a55c] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00414214 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00414214 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00414214 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00414214 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00414214: }
	__asm { mov eax, esi }
	__asm { L_00414216: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

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
extern "C" void fn_0041ef90();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0041bf30
extern "C" __declspec(naked) void asm_0041bf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0041bf9b }
	__asm { test ebx, ebx }
	__asm { jne L_0041bf9b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0041bf8a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041bf9b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0041bf8a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041bf9b: }
	__asm { push 0x41f020 }
	__asm { push 0x131a5e4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0041ef90 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0041bfdf }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0041c09b }
	__asm { L_0041bfdf: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0041c053 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0041c053 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0041c042 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041c053 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0041c042: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041c053: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0041c06d }
	__asm { add esi, -5 }
	__asm { jmp L_0041c06f }
	__asm { L_0041c06d: }
	__asm { xor esi, esi }
	__asm { L_0041c06f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0041c09b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0041c09b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0041c09b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0041c0d8 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0041c0d8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0041c0d8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0041c0d8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0041c0d8: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0041f0b0();
// FUNCTION: ROBLOXSTUDIO 0x0041e9b0
extern "C" __declspec(naked) void asm_0041e9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0041ea5d }
	__asm { push 0x41f140 }
	__asm { push 0x131a5dc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0041f0b0 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0041ea20 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0041ea20: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0041ea5d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0041ea5d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0041ea5d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0041ea5d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0041ea5d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e68f10[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00421210();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041fe80
extern "C" __declspec(naked) void asm_0041fe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ebx }
	__asm { je L_0041feca }
	__asm { add edi, 4 }
	__asm { push esi }
	__asm { L_0041fe93: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0041febf }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0041febf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0041febf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0041febf: }
	__asm { add edi, 8 }
	__asm { lea eax, [edi - 4] }
	__asm { cmp eax, ebx }
	__asm { jne L_0041fe93 }
	__asm { pop esi }
	__asm { L_0041feca: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { je L_0041ff32 }
	__asm { call fn_00421210 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00e68f10], eax }
	__asm { sete al }
	__asm { cmp ecx, eax }
	__asm { je L_0041ff32 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0041ff1d }
	__asm { push 0x165 }
	__asm { push 0xf1492c }
	__asm { push 0x1004008 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041ff32 }
	__asm { L_0041ff1d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041ff32: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00e68f10], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b97d0();
// FUNCTION: ROBLOXSTUDIO 0x00421060
extern "C" __declspec(naked) void asm_00421060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00421070 }
	__asm { add esi, -5 }
	__asm { jmp L_00421072 }
	__asm { L_00421070: }
	__asm { xor esi, esi }
	__asm { L_00421072: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004210b9 }
	__asm { cmp dword ptr [esi - 8], 0 }
	__asm { jg L_004210b9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004210a8 }
	__asm { push 0xce }
	__asm { push 0x10027e0 }
	__asm { push 0x10041b4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004210b9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004210a8: }
	__asm { movzx eax, al }
	__asm { push 0x10041c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004210b9: }
	__asm { lea ecx, [esi - 4] }
	__asm { call fn_006b97d0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0042110b }
	__asm { cmp dword ptr [esi - 4], 0x7ffffff5 }
	__asm { jl L_0042110b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004210fa }
	__asm { push 0xd8 }
	__asm { push 0x10027e0 }
	__asm { push 0x1004234 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0042110b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004210fa: }
	__asm { movzx eax, al }
	__asm { push 0x1004268 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0042110b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { je L_0042115d }
	__asm { test bl, 3 }
	__asm { je L_0042115d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00421148 }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0042115d }
	__asm { L_00421148: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0042115d: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov dword ptr [eax], 0 }
	__asm { je L_004211ac }
	__asm { test al, 3 }
	__asm { je L_004211ac }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00421194 }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004211a9 }
	__asm { L_00421194: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004211a9: }
	__asm { lea eax, [ebx + 4] }
	__asm { L_004211ac: }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131ab80[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00424710();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b70();
// FUNCTION: ROBLOXSTUDIO 0x00424480
extern "C" __declspec(naked) void asm_00424480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bfb0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131ab80] }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_004245fa }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_007c6b70 }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_004244ec }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004244ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_004244ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004244ec: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [g_0131ab80], 0 }
	__asm { jne L_004245b5 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_00424710 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0x38], 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00424585 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { cmp eax, dword ptr [g_0131ab80] }
	__asm { je L_00424585 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00424574 }
	__asm { push 0xb7 }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00424585 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00424574: }
	__asm { movzx eax, cl }
	__asm { push 0x1004f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00424585: }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_004245b5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004245b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_004245b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004245b5: }
	__asm { mov esi, dword ptr [g_0131ab80] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_004245f8 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_004245f8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_004245f8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_004245f8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004245f8: }
	__asm { mov eax, esi }
	__asm { L_004245fa: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eee748[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00422570();
extern "C" void fn_00424380();
extern "C" void fn_00425390();
extern "C" void fn_00425e70();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004250e0
extern "C" __declspec(naked) void asm_004250e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71b50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea esi, [edx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00425390 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00424380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { je L_004251d2 }
	__asm { call fn_00425e70 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00eee748], eax }
	__asm { sete al }
	__asm { cmp ecx, eax }
	__asm { je L_004251d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004251bd }
	__asm { push 0x165 }
	__asm { push 0xf1492c }
	__asm { push 0x1004008 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004251d2 }
	__asm { L_004251bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004251d2: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00eee748], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10500[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0042ba80
extern "C" __declspec(naked) void asm_0042ba80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov esi, 1 }
	__asm { test edx, edx }
	__asm { cmovne esi, edx }
	__asm { L_0042ba97: }
	__asm { mov eax, esi }
	__asm { sub eax, edx }
	__asm { cmp eax, 1 }
	__asm { jb L_0042baa5 }
	__asm { cmp esi, 8 }
	__asm { jae L_0042bab8 }
	__asm { L_0042baa5: }
	__asm { mov eax, 0xfffffff }
	__asm { sub eax, esi }
	__asm { cmp eax, esi }
	__asm { jb L_0042bbe7 }
	__asm { add esi, esi }
	__asm { jmp L_0042ba97 }
	__asm { L_0042bab8: }
	__asm { sub esi, edx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { shr edi, 1 }
	__asm { lea eax, [edx + esi] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0042baf2 }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_0042baec }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jne L_0042baf2 }
	__asm { L_0042baec: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0042baf2: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { shl eax, 2 }
	__asm { lea edx, [ecx + edi*4] }
	__asm { sub eax, edx }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { sar eax, 2 }
	__asm { lea edi, [eax*4] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { push edx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { lea edx, [edi + eax] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { cmp ecx, esi }
	__asm { ja L_0042bb73 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { lea eax, [ecx*4] }
	__asm { sar eax, 2 }
	__asm { mov edi, esi }
	__asm { sub edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea edi, [eax*4] }
	__asm { mov eax, dword ptr [g_00e10500] }
	__asm { push edi }
	__asm { push edx }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { add edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_0042bb65 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_0042bb65: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { test eax, eax }
	__asm { je L_0042bbc4 }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov ecx, eax }
	__asm { jmp L_0042bbc0 }
	__asm { L_0042bb73: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { lea edi, [esi*4] }
	__asm { mov eax, edi }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { mov eax, dword ptr [g_00e10500] }
	__asm { push ecx }
	__asm { push edx }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { lea ecx, [edi + eax] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { lea edx, [edi*4] }
	__asm { sub edx, ecx }
	__asm { add edx, eax }
	__asm { sar edx, 2 }
	__asm { lea edi, [edx*4] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 4] }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0x18 }
	__asm { add edi, eax }
	__asm { test esi, esi }
	__asm { je L_0042bbc4 }
	__asm { mov ecx, esi }
	__asm { L_0042bbc0: }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_0042bbc4: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_0042bbd6 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042bbd6: }
	__asm { add dword ptr [ebx + 8], esi }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042bbe7: }
	__asm { push 0x10060dc }
	__asm { call dword ptr [g_00e10260] }
}

extern "C" char g_00e10508[];
extern "C" void fn_00427de0();
// FUNCTION: ROBLOXSTUDIO 0x0042bc19
extern "C" __declspec(naked) void asm_0042bc19()
{
	__asm { sub ecx, 0x48 }
	__asm { jmp fn_00427de0 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_0042bc44 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042bc44: }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { xor eax, eax }
	__asm { mov word ptr [esi], ax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x0042cf70
extern "C" __declspec(naked) void asm_0042cf70()
{
	__asm { push ecx }
	__asm { cmp byte ptr [ecx + 4], 0 }
	__asm { je L_0042cfb1 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_0042cfb1 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0042cfb1 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0042cfb1 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0042cfb1 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0042cfb1: }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10548[];
extern "C" char g_00e10588[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ed30();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0042eaf0
extern "C" __declspec(naked) void asm_0042eaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jne L_0042eb09 }
	__asm { call fn_0042ed30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042eb09: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { test ebx, ebx }
	__asm { je L_0042eb7d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, ebx }
	__asm { mov ecx, dword ptr [eax - 0xc] }
	__asm { sub edx, eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { test esi, esi }
	__asm { js L_0042eb87 }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, esi }
	__asm { or ecx, eax }
	__asm { jge L_0042eb40 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ea80 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0042eb40: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push esi }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { ja L_0042eb58 }
	__asm { lea eax, [ecx + edx] }
	__asm { push eax }
	__asm { push dword ptr [ecx - 8] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10588] }
	__asm { jmp L_0042eb63 }
	__asm { L_0042eb58: }
	__asm { push ebx }
	__asm { push dword ptr [ecx - 8] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10548] }
	__asm { L_0042eb63: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { cmp esi, dword ptr [eax - 8] }
	__asm { jg L_0042eb7d }
	__asm { mov dword ptr [eax - 0xc], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042eb7d: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
	__asm { L_0042eb87: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 0x8007000e }
	__asm { call fn_0042ee70 }
}

extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0042ee70
extern "C" __declspec(naked) void asm_0042ee70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push 0x1179e64 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [ecx + 0x64] }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fc0[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fe4[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10fec[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e1239c[];
extern "C" char g_00e125b0[];
extern "C" char g_00e128d8[];
extern "C" char g_00e128dc[];
extern "C" char g_00e128e0[];
extern "C" char g_00e128e4[];
extern "C" char g_00e128e8[];
extern "C" char g_00e128ec[];
extern "C" char g_00e128f0[];
extern "C" char g_01320164[];
extern "C" void fn_004038a0();
extern "C" void fn_0043ee70();
extern "C" void fn_00479c30();
extern "C" void fn_0057e360();
extern "C" void fn_005823d0();
extern "C" void fn_007aa2a0();
extern "C" void fn_007abc80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00430900
extern "C" __declspec(naked) void asm_00430900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73801 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x88 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x10066f0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0xa0], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov byte ptr [esp + 0x9c], 1 }
	__asm { mov edi, dword ptr [g_00e10ec4] }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call edi }
	__asm { mov dword ptr [esp + 0x18], 0x1029570 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov byte ptr [esp + 0xa8], 2 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x9c], 3 }
	__asm { call dword ptr [g_00e10fec] }
	__asm { mov byte ptr [esp + 0x9c], 2 }
	__asm { mov esi, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 0x30] }
	__asm { mov bl, al }
	__asm { call esi }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x9c], 1 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x9c], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { mov dword ptr [esp + 0x9c], 0xffffffff }
	__asm { call esi }
	__asm { test bl, bl }
	__asm { jne L_00430dc9 }
	__asm { call fn_007abc80 }
	__asm { push 0x5d }
	__asm { push 0x1006ad8 }
	__asm { lea ecx, [esp + 0x38] }
	__asm { mov dword ptr [esp + 0x4c], 0xf }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { mov byte ptr [esp + 0x38], bl }
	__asm { call fn_004038a0 }
	__asm { push 0x1006a50 }
	__asm { lea eax, [esp + 0x34] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x54] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xa8], 4 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [esp + 0x9c], 6 }
	__asm { cmp dword ptr [esp + 0x44], 0x10 }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { jb L_00430a55 }
	__asm { push dword ptr [esp + 0x30] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00430a55: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [esp + 0x18], esp }
	__asm { push 0 }
	__asm { push 0x1006b38 }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x58], 0xf }
	__asm { mov dword ptr [esp + 0x54], 0 }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { call dword ptr [g_00e10fe4] }
	__asm { add esp, 8 }
	__asm { mov eax, esp }
	__asm { mov byte ptr [esp + 0xa8], 7 }
	__asm { mov dword ptr [esp + 0x20], esp }
	__asm { push 0 }
	__asm { push 0x1006b40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fe4] }
	__asm { mov byte ptr [esp + 0xb4], 8 }
	__asm { cmp dword ptr [esp + 0x78], 0x10 }
	__asm { lea ecx, [esp + 0x64] }
	__asm { cmovae ecx, dword ptr [esp + 0x64] }
	__asm { add esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10fe4] }
	__asm { add esp, 0xc }
	__asm { lea ecx, [esp + 0x74] }
	__asm { mov byte ptr [esp + 0xac], 6 }
	__asm { call fn_00479c30 }
	__asm { push 0x15e }
	__asm { lea ecx, [esp + 0x68] }
	__asm { mov byte ptr [esp + 0xa0], 9 }
	__asm { call dword ptr [g_00e128d8] }
	__asm { push 0x5a }
	__asm { lea ecx, [esp + 0x68] }
	__asm { call dword ptr [g_00e128dc] }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00430b2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [esp + 0x9c], 0xa }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x9c], 9 }
	__asm { L_00430b2f: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005823d0 }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e128e4] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0xa0], 0xb }
	__asm { call dword ptr [g_00e128e0] }
	__asm { add esp, 4 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x9c], 9 }
	__asm { call dword ptr [g_00e128e8] }
	__asm { lea ecx, [esp + 0x64] }
	__asm { call dword ptr [g_00e128ec] }
	__asm { call dword ptr [g_00e128f0] }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00430bb4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [esp + 0x9c], 0xc }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x9c], 9 }
	__asm { L_00430bb4: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005823d0 }
	__asm { cmp byte ptr [esp + 0x8c], 0 }
	__asm { je L_00430c69 }
	__asm { call fn_007abc80 }
	__asm { push dword ptr [eax + 0xa0] }
	__asm { call fn_007abc80 }
	__asm { mov ecx, eax }
	__asm { call fn_007aa2a0 }
	__asm { call fn_007abc80 }
	__asm { push dword ptr [eax + 0xa0] }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { push 0x10066dc }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0xa0], 0xd }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0xa0], 0xe }
	__asm { call edi }
	__asm { mov dword ptr [esp + 0x18], 0x1029570 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0xa0], 0xf }
	__asm { mov edi, dword ptr [g_00e10fd4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call edi }
	__asm { mov byte ptr [esp + 0x9c], 0xe }
	__asm { mov eax, dword ptr [g_00e10fd8] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call eax }
	__asm { mov byte ptr [esp + 0x9c], 0xd }
	__asm { jmp L_00430ceb }
	__asm { L_00430c69: }
	__asm { push 0 }
	__asm { call fn_007abc80 }
	__asm { mov ecx, eax }
	__asm { call fn_007aa2a0 }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { push 0x10066dc }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0xa0], 0x10 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0xa0], 0x11 }
	__asm { call edi }
	__asm { mov dword ptr [esp + 0x18], 0x1029570 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0xa0], 0x12 }
	__asm { mov edi, dword ptr [g_00e10fd4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call edi }
	__asm { mov byte ptr [esp + 0x9c], 0x11 }
	__asm { mov eax, dword ptr [g_00e10fd8] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call eax }
	__asm { mov byte ptr [esp + 0x9c], 0x10 }
	__asm { L_00430ceb: }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov byte ptr [esp + 0x9c], 9 }
	__asm { mov ebx, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call ebx }
	__asm { mov ecx, dword ptr [esp + 0x80] }
	__asm { call dword ptr [g_00e125b0] }
	__asm { test al, al }
	__asm { je L_00430da7 }
	__asm { push 1 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x10066f0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0xa0], 0x13 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0xa0], 0x14 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp + 0x18], 0x1029570 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x20] }
	__asm { mov byte ptr [esp + 0xa4], 0x15 }
	__asm { call edi }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x9c], 0x14 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x9c], 0x13 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { mov byte ptr [esp + 0x9c], 9 }
	__asm { call ebx }
	__asm { L_00430da7: }
	__asm { lea ecx, [esp + 0x64] }
	__asm { mov byte ptr [esp + 0x9c], 6 }
	__asm { call dword ptr [g_00e1239c] }
	__asm { cmp dword ptr [esp + 0x60], 0x10 }
	__asm { jb L_00430dc9 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00430dc9: }
	__asm { mov ecx, dword ptr [esp + 0x94] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp dword ptr [g_00e1239c] }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_00439f40();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00438920
extern "C" __declspec(naked) void asm_00438920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0043895c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0043895c: }
	__asm { push 0x439fd0 }
	__asm { push 0x131b168 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439f40 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0043899d }
	__asm { push ebx }
	__asm { jmp L_004389a1 }
	__asm { L_0043899d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_004389a1: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_004389e6 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_004389e6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_004389e6 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_004389e6 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004389e6: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00438a2a }
	__asm { add esi, 5 }
	__asm { je L_004389fc }
	__asm { add esi, -5 }
	__asm { jmp L_004389fe }
	__asm { L_004389fc: }
	__asm { xor esi, esi }
	__asm { L_004389fe: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00438a2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00438a2a }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00438a2a: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
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
extern "C" void fn_00439fe0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00438de0
extern "C" __declspec(naked) void asm_00438de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_00438e1c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00438e1c: }
	__asm { push 0x43a070 }
	__asm { push 0x131b160 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439fe0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00438e5d }
	__asm { push ebx }
	__asm { jmp L_00438e61 }
	__asm { L_00438e5d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00438e61: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00438ea6 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00438ea6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00438ea6 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00438ea6 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00438ea6: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00438eea }
	__asm { add esi, 5 }
	__asm { je L_00438ebc }
	__asm { add esi, -5 }
	__asm { jmp L_00438ebe }
	__asm { L_00438ebc: }
	__asm { xor esi, esi }
	__asm { L_00438ebe: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00438eea }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00438eea }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00438eea: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
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
extern "C" void fn_0043a080();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x004392d0
extern "C" __declspec(naked) void asm_004392d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0043930c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0043930c: }
	__asm { push 0x43a110 }
	__asm { push 0x131b158 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a080 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0043934d }
	__asm { push ebx }
	__asm { jmp L_00439351 }
	__asm { L_0043934d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00439351: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00439396 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00439396 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00439396 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00439396 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00439396: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_004393da }
	__asm { add esi, 5 }
	__asm { je L_004393ac }
	__asm { add esi, -5 }
	__asm { jmp L_004393ae }
	__asm { L_004393ac: }
	__asm { xor esi, esi }
	__asm { L_004393ae: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004393da }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004393da }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_004393da: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
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
extern "C" void fn_0043a120();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00439720
extern "C" __declspec(naked) void asm_00439720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0043975c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0043975c: }
	__asm { push 0x43a1b0 }
	__asm { push 0x131b150 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a120 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0043979d }
	__asm { push ebx }
	__asm { jmp L_004397a1 }
	__asm { L_0043979d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_004397a1: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_004397e6 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_004397e6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_004397e6 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_004397e6 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004397e6: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0043982a }
	__asm { add esi, 5 }
	__asm { je L_004397fc }
	__asm { add esi, -5 }
	__asm { jmp L_004397fe }
	__asm { L_004397fc: }
	__asm { xor esi, esi }
	__asm { L_004397fe: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043982a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043982a }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043982a: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10260[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0043a1c0();
extern "C" void fn_0043a260();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00439b70
extern "C" __declspec(naked) void asm_00439b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_00439bac }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00439bac: }
	__asm { push 0x43a250 }
	__asm { push 0x131b148 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a1c0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00439bed }
	__asm { push ebx }
	__asm { jmp L_00439bf1 }
	__asm { L_00439bed: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00439bf1: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00439c36 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00439c36 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00439c36 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00439c36 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00439c36: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00439c7a }
	__asm { add esi, 5 }
	__asm { je L_00439c4c }
	__asm { add esi, -5 }
	__asm { jmp L_00439c4e }
	__asm { L_00439c4c: }
	__asm { xor esi, esi }
	__asm { L_00439c4e: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00439c7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00439c7a }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00439c7a: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 3 }
	__asm { cmp eax, 1 }
	__asm { jae L_00439cf1 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { jae L_00439cc2 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00439cc2: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { inc esi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub edi, eax }
	__asm { cmp edi, edx }
	__asm { pop edi }
	__asm { jae L_00439ce4 }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_0043a260 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_00439ce4: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_0043a260 }
	__asm { L_00439cf1: }
	__asm { pop esi }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0043a4a0();
// FUNCTION: ROBLOXSTUDIO 0x0043a2e0
extern "C" __declspec(naked) void asm_0043a2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0043a38d }
	__asm { push 0x43a530 }
	__asm { push 0x131aea8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a4a0 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0043a350 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0043a350: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0043a38d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043a38d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043a38d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043a38d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043a38d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0043a540();
// FUNCTION: ROBLOXSTUDIO 0x0043a3a0
extern "C" __declspec(naked) void asm_0043a3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0043a44d }
	__asm { push 0x43a5d0 }
	__asm { push 0x131aea0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a540 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0043a410 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0043a410: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0043a44d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043a44d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043a44d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043a44d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043a44d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0043e990();
// FUNCTION: ROBLOXSTUDIO 0x0043ea20
extern "C" __declspec(naked) void asm_0043ea20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0043eacd }
	__asm { push 0x43e980 }
	__asm { push 0x131aba4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043e990 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0043ea90 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0043ea90: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0043eacd }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043eacd }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043eacd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043eacd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043eacd: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e69704[];
extern "C" char g_0131abfc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043ec00
extern "C" __declspec(naked) void asm_0043ec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd734de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131abfc] }
	__asm { test al, 1 }
	__asm { jne L_0043ec6c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e69704] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ac00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0043ec6c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ac00 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { jmp fn_007d5550 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0043ef00
extern "C" __declspec(naked) void asm_0043ef00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0043ef3c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0043ef3c: }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0043ef7d }
	__asm { push ebx }
	__asm { jmp L_0043ef81 }
	__asm { L_0043ef7d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0043ef81: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_0043efc6 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043efc6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043efc6 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043efc6 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043efc6: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0043f00a }
	__asm { add esi, 5 }
	__asm { je L_0043efdc }
	__asm { add esi, -5 }
	__asm { jmp L_0043efde }
	__asm { L_0043efdc: }
	__asm { xor esi, esi }
	__asm { L_0043efde: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043f00a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043f00a }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043f00a: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
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
extern "C" void fn_0044c6d0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0044b730
extern "C" __declspec(naked) void asm_0044b730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0044b79b }
	__asm { test ebx, ebx }
	__asm { jne L_0044b79b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0044b78a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044b79b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0044b78a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044b79b: }
	__asm { push 0x44c760 }
	__asm { push 0x131b234 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c6d0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0044b7df }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0044b89b }
	__asm { L_0044b7df: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0044b853 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0044b853 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044b842 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044b853 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0044b842: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044b853: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0044b86d }
	__asm { add esi, -5 }
	__asm { jmp L_0044b86f }
	__asm { L_0044b86d: }
	__asm { xor esi, esi }
	__asm { L_0044b86f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044b89b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044b89b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0044b89b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0044b8d8 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044b8d8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044b8d8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044b8d8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044b8d8: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
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
extern "C" void fn_00439f40();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0044b8f0
extern "C" __declspec(naked) void asm_0044b8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0044b95b }
	__asm { test ebx, ebx }
	__asm { jne L_0044b95b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0044b94a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044b95b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0044b94a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044b95b: }
	__asm { push 0x439fd0 }
	__asm { push 0x131b168 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439f40 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0044b99f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0044ba5b }
	__asm { L_0044b99f: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0044ba13 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0044ba13 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044ba02 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044ba13 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0044ba02: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044ba13: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0044ba2d }
	__asm { add esi, -5 }
	__asm { jmp L_0044ba2f }
	__asm { L_0044ba2d: }
	__asm { xor esi, esi }
	__asm { L_0044ba2f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044ba5b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044ba5b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0044ba5b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0044ba98 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044ba98 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044ba98 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044ba98 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044ba98: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0044ca90();
// FUNCTION: ROBLOXSTUDIO 0x0044c610
extern "C" __declspec(naked) void asm_0044c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0044c6bd }
	__asm { push 0x44cb20 }
	__asm { push 0x131b204 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044ca90 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0044c680 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0044c680: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0044c6bd }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c6bd }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c6bd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c6bd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c6bd: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b1c4[];
extern "C" char g_0131b1c8[];
extern "C" char g_0131b1cc[];
extern "C" char g_0131b1d0[];
extern "C" void fn_006d19a0();
extern "C" void fn_007d5c50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044ced0
extern "C" __declspec(naked) void asm_0044ced0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0044cf28 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { pop esi }
	__asm { L_0044cf28: }
	__asm { mov eax, dword ptr [g_0131b1c4] }
	__asm { test al, 1 }
	__asm { jne L_0044cf64 }
	__asm { or eax, 1 }
	__asm { push 0xddc700 }
	__asm { mov dword ptr [g_0131b1c4], eax }
	__asm { mov dword ptr [g_0131b1c8], 0x12c38c0 }
	__asm { mov dword ptr [g_0131b1d0], 0x44d9d0 }
	__asm { mov dword ptr [g_0131b1cc], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0044cf64: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0x131b1c8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_007d5c50 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b418[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00464ce0();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
// FUNCTION: ROBLOXSTUDIO 0x00464960
extern "C" __declspec(naked) void asm_00464960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bfb0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b418] }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_00464ad6 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_004649cc }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004649cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_004649cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004649cc: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [g_0131b418], 0 }
	__asm { jne L_00464a91 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_00464ce0 }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0x38], 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00464a61 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { cmp eax, dword ptr [g_0131b418] }
	__asm { je L_00464a61 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00464a50 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00464a61 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00464a50: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00464a61: }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00464a91 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00464a91 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00464a91 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00464a91: }
	__asm { mov esi, dword ptr [g_0131b418] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00464ad4 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00464ad4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00464ad4 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00464ad4 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00464ad4: }
	__asm { mov eax, esi }
	__asm { L_00464ad6: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f00[];
extern "C" char g_00e123a0[];
extern "C" char g_00e12cec[];
extern "C" void fn_004680e0();
extern "C" void fn_00468120();
// FUNCTION: ROBLOXSTUDIO 0x004703b0
extern "C" __declspec(naked) void asm_004703b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e123a0] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00468120 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_004680e0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004703df }
	__asm { call dword ptr [g_00e12cec] }
	__asm { L_004703df: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_004703eb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { L_004703eb: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_004703f8 }
	__asm { call dword ptr [g_00e10f00] }
	__asm { L_004703f8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 0xcc] }
}

extern "C" void fn_00470fe0();
extern "C" void fn_007d57f0();
// FUNCTION: ROBLOXSTUDIO 0x00478be1
extern "C" __declspec(naked) void asm_00478be1()
{
	__asm { sub ecx, 8 }
	__asm { jmp fn_00470fe0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_007d57f0 }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6f0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00480360();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
// FUNCTION: ROBLOXSTUDIO 0x0047ec70
extern "C" __declspec(naked) void asm_0047ec70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bfb0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b6f0] }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_0047edea }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0047ecdc }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0047ecdc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0047ecdc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0047ecdc: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [g_0131b6f0], 0 }
	__asm { jne L_0047eda5 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_00480360 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0x38], 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0047ed75 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { cmp eax, dword ptr [g_0131b6f0] }
	__asm { je L_0047ed75 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0047ed64 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0047ed75 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0047ed64: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0047ed75: }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_0047eda5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0047eda5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0047eda5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0047eda5: }
	__asm { mov esi, dword ptr [g_0131b6f0] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_0047ede8 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0047ede8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0047ede8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0047ede8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0047ede8: }
	__asm { mov eax, esi }
	__asm { L_0047edea: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6ac[];
extern "C" void fn_004825a0();
extern "C" void fn_0048b650();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00480010
extern "C" __declspec(naked) void asm_00480010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7fab9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0048007f }
	__asm { cmp dword ptr [g_0131b6ac], 0x29a }
	__asm { je L_0048007f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048006e }
	__asm { push 0xe4 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048007f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048006e: }
	__asm { movzx eax, al }
	__asm { push 0xf148b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048007f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_004825a0 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00480098 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0048009a }
	__asm { L_00480098: }
	__asm { xor eax, eax }
	__asm { L_0048009a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0048010b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_004800f6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_004800f6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_004800f6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0048010b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { test ecx, ecx }
	__asm { je L_0048012d }
	__asm { push 1 }
	__asm { call fn_0048b650 }
	__asm { L_0048012d: }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_00480c60();
// FUNCTION: ROBLOXSTUDIO 0x00480b00
extern "C" __declspec(naked) void asm_00480b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00480bad }
	__asm { push 0x480cf0 }
	__asm { push 0x131b69c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00480c60 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00480b70 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_00480b70: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_00480bad }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00480bad }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00480bad }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00480bad }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00480bad: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
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
extern "C" void fn_00480bc0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00483240
extern "C" __declspec(naked) void asm_00483240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7adc8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_004832a8 }
	__asm { test ebx, ebx }
	__asm { jne L_004832a8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00483297 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004832a8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00483297: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004832a8: }
	__asm { push 0x480c50 }
	__asm { push 0x131b6c4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00480bc0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_004832e8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0048339d }
	__asm { L_004832e8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00483357 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00483357 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00483346 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00483357 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00483346: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00483357: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0048336f }
	__asm { add esi, -5 }
	__asm { jmp L_00483371 }
	__asm { L_0048336f: }
	__asm { xor esi, esi }
	__asm { L_00483371: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0048339d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0048339d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0048339d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp byte ptr [ebp - 0x1c], 0 }
	__asm { je L_004833d7 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_004833d7 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_004833d7 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_004833d7 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004833d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e7718c[];
extern "C" char g_00e7db9c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e13c[];
extern "C" void fn_00486e40();
extern "C" void fn_0048b180();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004833f0
extern "C" __declspec(naked) void asm_004833f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ad0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e13c] }
	__asm { test al, 1 }
	__asm { jne L_0048345c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e13c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7db9c] }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, 0x131e140 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcd20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048345c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e140 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { je L_004834d2 }
	__asm { call fn_0048b180 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00e7718c], eax }
	__asm { sete al }
	__asm { cmp ecx, eax }
	__asm { je L_004834d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004834bd }
	__asm { push 0x165 }
	__asm { push 0xf1492c }
	__asm { push 0x1004008 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004834d2 }
	__asm { L_004834bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004834d2: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00e7718c], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_0048b370();
// FUNCTION: ROBLOXSTUDIO 0x00486ec0
extern "C" __declspec(naked) void asm_00486ec0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0048b370 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00486edf }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00486ee9 }
	__asm { L_00486edf: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00486ee9: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00486f15 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00486f15 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00486f15 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00486f15: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102dc[];
extern "C" char g_00e10318[];
extern "C" void fn_0042e5f0();
// FUNCTION: ROBLOXSTUDIO 0x0048f020
extern "C" __declspec(naked) void asm_0048f020()
{
	__asm { L_0048f020: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi - 0x60] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi - 0x60], 0xe3ae1c }
	__asm { mov eax, dword ptr [edi - 0x60] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x60] }
	__asm { mov dword ptr [edx + edi - 0x64], eax }
	__asm { cmp dword ptr [edi - 0xc], 0 }
	__asm { mov dword ptr [edi - 0x5c], 0xe3addc }
	__asm { je L_0048f06b }
	__asm { mov edx, dword ptr [edi - 0x50] }
	__asm { lea eax, [edi - 0x18] }
	__asm { cmp dword ptr [edx], eax }
	__asm { jne L_0048f06b }
	__asm { mov eax, dword ptr [edi - 0x24] }
	__asm { mov ecx, dword ptr [edi - 0x20] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi - 0x40] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi - 0x30] }
	__asm { sub ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0048f06b: }
	__asm { cmp byte ptr [edi - 0x10], 0 }
	__asm { je L_0048f079 }
	__asm { lea ecx, [edi - 0x5c] }
	__asm { call fn_0042e5f0 }
	__asm { L_0048f079: }
	__asm { lea ecx, [edi - 0x5c] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x58] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { int 3 }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x60] }
	__asm { mov ecx, esi }
	__asm { call L_0048f020 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e102c8] }
}

extern "C" void fn_0048f0b0();
extern "C" void fn_0048f640();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x0048f6a0
extern "C" __declspec(naked) void asm_0048f6a0()
{
	__asm { call fn_0048f640 }
	__asm { jmp fn_0048f0b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0x1012dfc }
	__asm { mov dword ptr [ecx + 4], 0x1012e74 }
	__asm { mov dword ptr [ecx + 0x18], 0x1012e84 }
	__asm { mov dword ptr [ecx + 0x1c], 0x1012e90 }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_012fb0f4[];
extern "C" char g_012fb0f5[];
// FUNCTION: ROBLOXSTUDIO 0x00490bd0
extern "C" __declspec(naked) void asm_00490bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [g_012fb0f4], al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012fb0f5] }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0044c6d0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x004932d0
extern "C" __declspec(naked) void asm_004932d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0049330c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0049330c: }
	__asm { push 0x44c760 }
	__asm { push 0x131b234 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c6d0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0049334d }
	__asm { push ebx }
	__asm { jmp L_00493351 }
	__asm { L_0049334d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00493351: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00493396 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00493396 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00493396 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00493396 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00493396: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_004933da }
	__asm { add esi, 5 }
	__asm { je L_004933ac }
	__asm { add esi, -5 }
	__asm { jmp L_004933ae }
	__asm { L_004933ac: }
	__asm { xor esi, esi }
	__asm { L_004933ae: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004933da }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004933da }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_004933da: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b40c[];
extern "C" char g_0131e5a8[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004933f0
extern "C" __declspec(naked) void asm_004933f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b83e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e5a8] }
	__asm { test al, 1 }
	__asm { jne L_0049345b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e5a8], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1013574 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131e5b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd3b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0049345b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e5b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004934bd }
	__asm { cmp dword ptr [g_0131b40c], 0x29a }
	__asm { je L_004934bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004934ac }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004934bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004934ac: }
	__asm { movzx eax, al }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004934bd: }
	__asm { mov eax, 0x131e03c }
	__asm { ret }
}

extern "C" void fn_00492eb0();
// FUNCTION: ROBLOXSTUDIO 0x004955ee
extern "C" __declspec(naked) void asm_004955ee()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp fn_00492eb0 }
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
	__asm { mov al, byte ptr [ecx + 0x3a] }
	__asm { ret }
}

extern "C" void fn_00495780();
// FUNCTION: ROBLOXSTUDIO 0x00496306
extern "C" __declspec(naked) void asm_00496306()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp fn_00495780 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0x1014044 }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10f70[];
extern "C" char g_00e11110[];
extern "C" void fn_0040d6f0();
extern "C" void fn_0049c180();
extern "C" void fn_0049c1a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049c380
extern "C" __declspec(naked) void asm_0049c380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7c210 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { xor ah, ah }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov al, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 0x11], ah }
	__asm { mov byte ptr [ebp - 0x15], al }
	__asm { L_0049c3c3: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_0049c3fd }
	__asm { mov edi, esi }
	__asm { test ah, ah }
	__asm { je L_0049c3dc }
	__asm { push ebx }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call edx }
	__asm { test al, al }
	__asm { sete al }
	__asm { jmp L_0049c3e4 }
	__asm { L_0049c3dc: }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call edx }
	__asm { L_0049c3e4: }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { mov ah, byte ptr [ebp - 0x11] }
	__asm { mov byte ptr [ebp - 0x15], al }
	__asm { test al, al }
	__asm { je L_0049c3f8 }
	__asm { mov esi, dword ptr [esi] }
	__asm { jmp L_0049c3c3 }
	__asm { L_0049c3f8: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { jmp L_0049c3c3 }
	__asm { L_0049c3fd: }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { test al, al }
	__asm { je L_0049c44e }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp edi, dword ptr [eax] }
	__asm { jne L_0049c43d }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { L_0049c416: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0049c1a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0049c43d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [g_00e10f70] }
	__asm { L_0049c44e: }
	__asm { push ebx }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call edx }
	__asm { test al, al }
	__asm { je L_0049c465 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x15] }
	__asm { jmp L_0049c416 }
	__asm { L_0049c465: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0049c180 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10ce0[];
extern "C" char g_00e10d08[];
extern "C" char g_00e10d10[];
extern "C" char g_00e10d14[];
extern "C" char g_00e11008[];
extern "C" char g_00e11034[];
extern "C" char g_00e110ec[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_004f2520();
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0049c5d0
extern "C" __declspec(naked) void asm_0049c5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7c2fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_0049c81c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10d14] }
	__asm { test al, al }
	__asm { je L_0049c81c }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10d10] }
	__asm { mov dword ptr [esp + 0x34], ebx }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { xor esi, esi }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { jle L_0049c7ce }
	__asm { mov edi, dword ptr [g_00e10ce0] }
	__asm { L_0049c640: }
	__asm { cmp esi, 6 }
	__asm { jge L_0049c7ce }
	__asm { test esi, esi }
	__asm { js L_0049c657 }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp esi, ecx }
	__asm { jl L_0049c678 }
	__asm { L_0049c657: }
	__asm { push 0x1bf }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x10043d0 }
	__asm { call dword ptr [g_00e11008] }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { add esp, 0x10 }
	__asm { L_0049c678: }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, esi }
	__asm { lea eax, [eax + 0x14] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call dword ptr [g_00e10d08] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_0049c7ac }
	__asm { push 0x1014568 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x24] }
	__asm { mov byte ptr [esp + 0x38], 2 }
	__asm { or ebx, 1 }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x20], ebx }
	__asm { call edi }
	__asm { test al, al }
	__asm { jne L_0049c701 }
	__asm { push 0x10145d4 }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x20] }
	__asm { mov dword ptr [esp + 0x38], 3 }
	__asm { or ebx, 2 }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x20], ebx }
	__asm { call edi }
	__asm { mov byte ptr [esp + 0xf], 0 }
	__asm { test al, al }
	__asm { je L_0049c706 }
	__asm { L_0049c701: }
	__asm { mov byte ptr [esp + 0xf], 1 }
	__asm { L_0049c706: }
	__asm { mov dword ptr [esp + 0x34], 2 }
	__asm { test bl, 2 }
	__asm { je L_0049c724 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov dword ptr [esp + 0x18], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049c724: }
	__asm { mov dword ptr [esp + 0x34], 1 }
	__asm { test bl, 1 }
	__asm { je L_0049c73e }
	__asm { lea ecx, [esp + 0x20] }
	__asm { and ebx, 0xfffffffe }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049c73e: }
	__asm { cmp byte ptr [esp + 0xf], 0 }
	__asm { je L_0049c7ac }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x28] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov byte ptr [esp + 0x34], 4 }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0049c786 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov byte ptr [esp + 0x34], 5 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x34], 4 }
	__asm { L_0049c786: }
	__asm { mov ecx, dword ptr [g_01320184] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_004f2520 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0049c7ac: }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { inc esi }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { sub ecx, dword ptr [eax + 8] }
	__asm { cmp esi, ecx }
	__asm { jl L_0049c640 }
	__asm { L_0049c7ce: }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0049c81c }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x20], ecx }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { add esi, 5 }
	__asm { add edi, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { lea edi, [ecx + edi*4] }
	__asm { cmp edi, esi }
	__asm { je L_0049c812 }
	__asm { mov ebx, dword ptr [g_00e110ec] }
	__asm { L_0049c803: }
	__asm { sub esi, 4 }
	__asm { mov ecx, esi }
	__asm { call ebx }
	__asm { cmp esi, edi }
	__asm { jne L_0049c803 }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { L_0049c812: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e11034] }
	__asm { add esp, 4 }
	__asm { L_0049c81c: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { or word ptr [ebx + 0xa], 4 }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e11b74[];
extern "C" char g_00e11bb0[];
extern "C" char g_00e11df0[];
extern "C" char g_00e12774[];
extern "C" void fn_004a1a80();
extern "C" void fn_004a29e0();
// FUNCTION: ROBLOXSTUDIO 0x004a18b0
extern "C" __declspec(naked) void asm_004a18b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7cdf1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x70 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { jne L_004a18f2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12774] }
	__asm { mov ecx, dword ptr [esp + 0x74] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a18f2: }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e11bb0] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x80], 0 }
	__asm { call fn_004a1a80 }
	__asm { push esi }
	__asm { lea ecx, [esp + 8] }
	__asm { call fn_004a29e0 }
	__asm { mov byte ptr [esp + 0x7c], 1 }
	__asm { push dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { lea edx, [esp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { lea edx, [esp + 0x18] }
	__asm { push edx }
	__asm { push 4 }
	__asm { call dword ptr [eax + 0x60] }
	__asm { lea ecx, [esp + 4] }
	__asm { mov byte ptr [esp + 0x7c], 0 }
	__asm { call dword ptr [g_00e11df0] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x7c], 0xffffffff }
	__asm { call dword ptr [g_00e11b74] }
	__asm { mov ecx, dword ptr [esp + 0x74] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp dword ptr [g_00e11df0] }
}

extern "C" char g_00e11020[];
extern "C" char g_00e11034[];
extern "C" void fn_004a2430();
extern "C" void fn_004a27e0();
extern "C" void fn_004a2820();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004a2300
extern "C" __declspec(naked) void asm_004a2300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7cc10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0x7fffffff }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { add eax, 5 }
	__asm { push 1 }
	__asm { lea esi, [edx + eax*4] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { call dword ptr [g_00e11020] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ebx, eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add ecx, 5 }
	__asm { push esi }
	__asm { lea ecx, [edx + ecx*4] }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_004a2820 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, 5 }
	__asm { lea ecx, [esi + eax*4] }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { lea eax, [eax + edx*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, 6 }
	__asm { add eax, edx }
	__asm { push ecx }
	__asm { lea eax, [esi + eax*4] }
	__asm { push eax }
	__asm { call fn_004a2820 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ebx], eax }
	__asm { jne L_004a23b0 }
	__asm { push ebx }
	__asm { call fn_004a2430 }
	__asm { L_004a23b0: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 5 }
	__asm { add eax, dword ptr [ebp - 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov edx, dword ptr [esi] }
	__asm { add eax, 5 }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { add eax, ecx }
	__asm { lea eax, [edx + eax*4] }
	__asm { push eax }
	__asm { lea eax, [edx + 0x14] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { push eax }
	__asm { call fn_004a27e0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e11034] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e11034] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" void fn_004a42b0();
extern "C" void fn_004a43f0();
// FUNCTION: ROBLOXSTUDIO 0x004a3ea0
extern "C" __declspec(naked) void asm_004a3ea0()
{
	__asm { jmp fn_004a42b0 }
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004a3eea }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004a3ed0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004a43f0 }
	__asm { L_004a3ed0: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004a3eea: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00412300();
extern "C" void fn_004ad9b0();
extern "C" void fn_004ae560();
extern "C" void fn_004afc10();
extern "C" void fn_00825140();
extern "C" void fn_00947aa0();
// FUNCTION: ROBLOXSTUDIO 0x004a6880
extern "C" __declspec(naked) void asm_004a6880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp eax, edi }
	__asm { je L_004a68da }
	__asm { push ebx }
	__asm { push esi }
	__asm { L_004a6890: }
	__asm { mov ebx, dword ptr [edi - 4] }
	__asm { sub edi, 4 }
	__asm { test ebx, ebx }
	__asm { je L_004a68d4 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { je L_004a68c7 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004a68c7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004a68c7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004a68c7: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_004a68d4: }
	__asm { cmp edi, eax }
	__asm { jne L_004a6890 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_004a68da: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0xec], 0x10 }
	__asm { mov edi, dword ptr [g_00e10508] }
	__asm { jb L_004a68fe }
	__asm { push dword ptr [esi + 0xd8] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a68fe: }
	__asm { mov dword ptr [esi + 0xec], 0xf }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov byte ptr [esi + 0xd8], 0 }
	__asm { cmp dword ptr [esi + 0xd4], 0x10 }
	__asm { jb L_004a692d }
	__asm { push dword ptr [esi + 0xc0] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a692d: }
	__asm { mov dword ptr [esi + 0xd4], 0xf }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov byte ptr [esi + 0xc0], 0 }
	__asm { cmp dword ptr [esi + 0xbc], 0x10 }
	__asm { jb L_004a695c }
	__asm { push dword ptr [esi + 0xa8] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a695c: }
	__asm { mov dword ptr [esi + 0xbc], 0xf }
	__asm { mov dword ptr [esi + 0xb8], 0 }
	__asm { mov byte ptr [esi + 0xa8], 0 }
	__asm { cmp dword ptr [esi + 0xa4], 0x10 }
	__asm { jb L_004a698b }
	__asm { push dword ptr [esi + 0x90] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a698b: }
	__asm { mov dword ptr [esi + 0xa4], 0xf }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov byte ptr [esi + 0x90], 0 }
	__asm { cmp dword ptr [esi + 0x8c], 0x10 }
	__asm { jb L_004a69b7 }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a69b7: }
	__asm { mov dword ptr [esi + 0x8c], 0xf }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov byte ptr [esi + 0x78], 0 }
	__asm { cmp dword ptr [esi + 0x74], 0x10 }
	__asm { jb L_004a69dd }
	__asm { push dword ptr [esi + 0x60] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a69dd: }
	__asm { mov dword ptr [esi + 0x74], 0xf }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov byte ptr [esi + 0x60], 0 }
	__asm { cmp dword ptr [esi + 0x5c], 0x10 }
	__asm { jb L_004a69fd }
	__asm { push dword ptr [esi + 0x48] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a69fd: }
	__asm { mov dword ptr [esi + 0x5c], 0xf }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov byte ptr [esi + 0x48], 0 }
	__asm { cmp dword ptr [esi + 0x44], 0x10 }
	__asm { jb L_004a6a1d }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a6a1d: }
	__asm { mov dword ptr [esi + 0x44], 0xf }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_004a6a3d }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a6a3d: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004a6a5c }
	__asm { push dword ptr [esi] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_004a6a5c: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e1d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004ad9b0 }
	__asm { push eax }
	__asm { call fn_00947aa0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_004ae560 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call fn_004afc10 }
	__asm { add eax, 0x1c }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_004a6b18 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004a6b18 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_004a6b18 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004a6b18: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { test eax, eax }
	__asm { je L_004a6b2f }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_004a6b2f: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_004a6b5d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004a6b5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_004a6b5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004a6b5d: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_004a6b6f }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a6b6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b18c[];
extern "C" char g_0131c740[];
extern "C" char g_0131c744[];
extern "C" char g_0131ebf8[];
extern "C" char g_0131ebfc[];
extern "C" char g_0131ec00[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_004c8de0();
extern "C" void fn_004ca7e0();
extern "C" void fn_004ca880();
extern "C" void fn_004ca920();
extern "C" void fn_004ca9c0();
extern "C" void fn_004caa60();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x004c8720
extern "C" __declspec(naked) void asm_004c8720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_004c875c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_004c875c: }
	__asm { push 0x4c8e70 }
	__asm { push 0x131c738 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_004c8de0 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_004c879d }
	__asm { push ebx }
	__asm { jmp L_004c87a1 }
	__asm { L_004c879d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_004c87a1: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_004c87e6 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_004c87e6 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_004c87e6 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_004c87e6 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004c87e6: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_004c882a }
	__asm { add esi, 5 }
	__asm { je L_004c87fc }
	__asm { add esi, -5 }
	__asm { jmp L_004c87fe }
	__asm { L_004c87fc: }
	__asm { xor esi, esi }
	__asm { L_004c87fe: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004c882a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_004c882a }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_004c882a: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004c888d }
	__asm { cmp dword ptr [g_0131c744], 0x29a }
	__asm { je L_004c888d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004c887c }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c888d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c887c: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c888d: }
	__asm { jmp fn_004ca7e0 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004c88ed }
	__asm { cmp dword ptr [g_0131c740], 0x29a }
	__asm { je L_004c88ed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004c88dc }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c88ed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c88dc: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c88ed: }
	__asm { jmp fn_004ca880 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004c894d }
	__asm { cmp dword ptr [g_0131ebf8], 0x29a }
	__asm { je L_004c894d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004c893c }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c894d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c893c: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c894d: }
	__asm { jmp fn_004ca920 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004c89ad }
	__asm { cmp dword ptr [g_0131ebfc], 0x29a }
	__asm { je L_004c89ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004c899c }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c89ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c899c: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c89ad: }
	__asm { jmp fn_004ca9c0 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004c8a0d }
	__asm { cmp dword ptr [g_0131ec00], 0x29a }
	__asm { je L_004c8a0d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004c89fc }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c8a0d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c89fc: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c8a0d: }
	__asm { jmp fn_004caa60 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004c8a6d }
	__asm { cmp dword ptr [g_0131b18c], 0x29a }
	__asm { je L_004c8a6d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004c8a5c }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c8a6d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c8a5c: }
	__asm { movzx eax, al }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c8a6d: }
	__asm { mov eax, 0x131de58 }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_004cc1c0();
// FUNCTION: ROBLOXSTUDIO 0x004cbe90
extern "C" __declspec(naked) void asm_004cbe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_004cbf3d }
	__asm { push 0x4cc250 }
	__asm { push 0x131c6e0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_004cc1c0 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_004cbf00 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_004cbf00: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_004cbf3d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_004cbf3d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_004cbf3d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_004cbf3d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_004cbf3d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004ce690();
extern "C" void fn_004d1780();
extern "C" void fn_004d18d0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004cd390
extern "C" __declspec(naked) void asm_004cd390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 8 }
	__asm { mov esi, esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_004cd3c1 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_004cd3c1: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_004cd3dd }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_004cd3dd: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_004ce690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { je L_004cd447 }
	__asm { call fn_004d1780 }
	__asm { mov ecx, eax }
	__asm { call fn_004d18d0 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { cmp eax, esi }
	__asm { jne L_004cd447 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004cd432 }
	__asm { push 0x121 }
	__asm { push 0xf1492c }
	__asm { push 0x1012a8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cd447 }
	__asm { L_004cd432: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1012aa8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cd447: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
// FUNCTION: ROBLOXSTUDIO 0x004d2330
extern "C" __declspec(naked) void asm_004d2330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { lea eax, [ecx + 0x78] }
	__asm { ret }
}

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
extern "C" void fn_0049a240();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0052c1b0
extern "C" __declspec(naked) void asm_0052c1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0052c21b }
	__asm { test ebx, ebx }
	__asm { jne L_0052c21b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0052c20a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0052c21b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0052c20a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0052c21b: }
	__asm { push 0x49a230 }
	__asm { push 0x131c464 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0049a240 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0052c25f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0052c31b }
	__asm { L_0052c25f: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0052c2d3 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0052c2d3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0052c2c2 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0052c2d3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0052c2c2: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0052c2d3: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0052c2ed }
	__asm { add esi, -5 }
	__asm { jmp L_0052c2ef }
	__asm { L_0052c2ed: }
	__asm { xor esi, esi }
	__asm { L_0052c2ef: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0052c31b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0052c31b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0052c31b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0052c358 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0052c358 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0052c358 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0052c358 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0052c358: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00531830();
extern "C" void fn_00531fa0();
// FUNCTION: ROBLOXSTUDIO 0x00531810
extern "C" __declspec(naked) void asm_00531810()
{
	__asm { jmp fn_00531fa0 }
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
	__asm { jmp fn_00531830 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_00531830();
// FUNCTION: ROBLOXSTUDIO 0x005318c0
extern "C" __declspec(naked) void asm_005318c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0053196d }
	__asm { push 0x531820 }
	__asm { push 0x131c778 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00531830 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00531930 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_00531930: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0053196d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0053196d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0053196d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0053196d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0053196d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f774[];
extern "C" void fn_00535950();
extern "C" void fn_005359f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00535740
extern "C" __declspec(naked) void asm_00535740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7fab9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005357af }
	__asm { cmp dword ptr [g_0131f774], 0x29a }
	__asm { je L_005357af }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0053579e }
	__asm { push 0xe4 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005357af }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0053579e: }
	__asm { movzx eax, al }
	__asm { push 0xf148b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005357af: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00535950 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_005357c8 }
	__asm { add eax, 0x18 }
	__asm { jmp L_005357ca }
	__asm { L_005357c8: }
	__asm { xor eax, eax }
	__asm { L_005357ca: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0053583b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00535826 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00535826 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00535826: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0053583b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0053589d }
	__asm { cmp dword ptr [g_0131f774], 0x29a }
	__asm { je L_0053589d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0053588c }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0053589d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0053588c: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0053589d: }
	__asm { jmp fn_005359f0 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00571a80();
// FUNCTION: ROBLOXSTUDIO 0x00544bf0
extern "C" __declspec(naked) void asm_00544bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { jne L_00544c05 }
	__asm { fldz }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00544c05: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00544c17 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { L_00544c17: }
	__asm { fld qword ptr [eax - 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00544c38 }
	__asm { mov ecx, esi }
	__asm { call fn_00571a80 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00544c38: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1105c[];
extern "C" void fn_00548d80();
// FUNCTION: ROBLOXSTUDIO 0x0054a164
extern "C" __declspec(naked) void asm_0054a164()
{
	__asm { sub ecx, 8 }
	__asm { jmp fn_00548d80 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0x1030880 }
	__asm { mov eax, dword ptr [g_00e1105c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9dc[];
extern "C" void fn_0049a130();
extern "C" void fn_006b9740();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00557bc0
extern "C" __declspec(naked) void asm_00557bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7fab9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00557c2f }
	__asm { cmp dword ptr [g_0131f9dc], 0x29a }
	__asm { je L_00557c2f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00557c1e }
	__asm { push 0xe4 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00557c2f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00557c1e: }
	__asm { movzx eax, al }
	__asm { push 0xf148b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00557c2f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0049a130 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00557c48 }
	__asm { add eax, 0x18 }
	__asm { jmp L_00557c4a }
	__asm { L_00557c48: }
	__asm { xor eax, eax }
	__asm { L_00557c4a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_00557cbb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00557ca6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00557ca6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00557ca6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00557cbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0x10327f4 }
	__asm { mov dword ptr [ecx + 4], 0x1031fb0 }
	__asm { mov dword ptr [ecx + 0x18], 0x1032788 }
	__asm { mov dword ptr [ecx + 0x1c], 0x10327b8 }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_00e94dfc[];
extern "C" char g_0131c96c[];
extern "C" char g_0131c990[];
extern "C" char g_0131c9e8[];
extern "C" char g_0131ca0c[];
extern "C" char g_0131ca18[];
extern "C" char g_0131ca3c[];
extern "C" char g_0131fa2c[];
extern "C" char g_0131fa30[];
extern "C" char g_0131fa34[];
extern "C" char g_0131fa38[];
extern "C" char g_0131fa3c[];
extern "C" char g_0131fa40[];
extern "C" char g_0131fa44[];
extern "C" char g_0131fa48[];
extern "C" char g_0131fa4c[];
extern "C" char g_0131fa54[];
extern "C" char g_0131fa58[];
extern "C" char g_0131fa5c[];
extern "C" char g_0131fa60[];
extern "C" char g_0131fa64[];
extern "C" char g_0131fa68[];
extern "C" char g_0131fa6c[];
extern "C" char g_0131fa70[];
extern "C" char g_0131fa74[];
extern "C" char g_0131fa78[];
extern "C" char g_0131fa7c[];
extern "C" char g_0131fa80[];
extern "C" char g_0131fa84[];
extern "C" char g_0131fa88[];
extern "C" char g_0131fa8c[];
extern "C" char g_0131fa90[];
extern "C" char g_0131fa94[];
extern "C" char g_0131fa98[];
extern "C" char g_0131fab8[];
extern "C" char g_0131fabc[];
extern "C" char g_0131fac0[];
extern "C" char g_0131fac4[];
extern "C" char g_0131fac8[];
extern "C" char g_0131facc[];
extern "C" char g_0131fad0[];
extern "C" char g_0131fad4[];
extern "C" char g_0131fad8[];
extern "C" char g_0131fc38[];
extern "C" char g_0131fc3c[];
extern "C" char g_0131fc40[];
extern "C" char g_0131fc44[];
extern "C" char g_0131fc48[];
extern "C" char g_0131fc4c[];
extern "C" char g_0131fc50[];
extern "C" char g_0131fc54[];
extern "C" char g_0131fc58[];
extern "C" char g_0131fc80[];
extern "C" char g_0131fcf8[];
extern "C" char g_0131fcfc[];
extern "C" char g_0131fd00[];
extern "C" char g_0131fd04[];
extern "C" char g_0131fd08[];
extern "C" char g_0131fd0c[];
extern "C" char g_0131fd10[];
extern "C" char g_0131fd14[];
extern "C" char g_0131fd18[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055a290
extern "C" __declspec(naked) void asm_0055a290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92b0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131fc80] }
	__asm { test al, 1 }
	__asm { jne L_0055a2fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131fc80], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94dfc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131fb08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddf200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0055a2fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131fb08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { cmp byte ptr [g_0131ca3c], 0 }
	__asm { mov eax, 0x131fab8 }
	__asm { jne L_0055a37f }
	__asm { mov byte ptr [g_0131ca3c], 1 }
	__asm { mov dword ptr [g_0131fab8], 0 }
	__asm { mov dword ptr [g_0131fabc], 0 }
	__asm { mov dword ptr [g_0131fac0], 0 }
	__asm { mov dword ptr [g_0131fac4], 0 }
	__asm { mov dword ptr [g_0131fac8], 0 }
	__asm { mov dword ptr [g_0131facc], 0x34 }
	__asm { mov dword ptr [g_0131fad0], 0x20 }
	__asm { mov dword ptr [g_0131fad4], 0x20 }
	__asm { mov dword ptr [g_0131fad8], 0 }
	__asm { L_0055a37f: }
	__asm { ret }
	__asm { cmp byte ptr [g_0131ca0c], 0 }
	__asm { mov eax, 0x131fcf8 }
	__asm { jne L_0055a3ef }
	__asm { mov byte ptr [g_0131ca0c], 1 }
	__asm { mov dword ptr [g_0131fcf8], 0 }
	__asm { mov dword ptr [g_0131fcfc], 0 }
	__asm { mov dword ptr [g_0131fd00], 0 }
	__asm { mov dword ptr [g_0131fd04], 0 }
	__asm { mov dword ptr [g_0131fd08], 0 }
	__asm { mov dword ptr [g_0131fd0c], 0x14 }
	__asm { mov dword ptr [g_0131fd10], 0x20 }
	__asm { mov dword ptr [g_0131fd14], 0x20 }
	__asm { mov dword ptr [g_0131fd18], 0 }
	__asm { L_0055a3ef: }
	__asm { ret }
	__asm { cmp byte ptr [g_0131c990], 0 }
	__asm { mov eax, 0x131fa54 }
	__asm { jne L_0055a45f }
	__asm { mov byte ptr [g_0131c990], 1 }
	__asm { mov dword ptr [g_0131fa54], 0 }
	__asm { mov dword ptr [g_0131fa58], 0 }
	__asm { mov dword ptr [g_0131fa5c], 0 }
	__asm { mov dword ptr [g_0131fa60], 0 }
	__asm { mov dword ptr [g_0131fa64], 0 }
	__asm { mov dword ptr [g_0131fa68], 0x18 }
	__asm { mov dword ptr [g_0131fa6c], 0x20 }
	__asm { mov dword ptr [g_0131fa70], 0x20 }
	__asm { mov dword ptr [g_0131fa74], 0 }
	__asm { L_0055a45f: }
	__asm { ret }
	__asm { cmp byte ptr [g_0131c96c], 0 }
	__asm { mov eax, 0x131fa2c }
	__asm { jne L_0055a4cf }
	__asm { mov byte ptr [g_0131c96c], 1 }
	__asm { mov dword ptr [g_0131fa2c], 0 }
	__asm { mov dword ptr [g_0131fa30], 0 }
	__asm { mov dword ptr [g_0131fa34], 0 }
	__asm { mov dword ptr [g_0131fa38], 0 }
	__asm { mov dword ptr [g_0131fa3c], 0 }
	__asm { mov dword ptr [g_0131fa40], 0x50 }
	__asm { mov dword ptr [g_0131fa44], 0x20 }
	__asm { mov dword ptr [g_0131fa48], 0x20 }
	__asm { mov dword ptr [g_0131fa4c], 0 }
	__asm { L_0055a4cf: }
	__asm { ret }
	__asm { cmp byte ptr [g_0131ca18], 0 }
	__asm { mov eax, 0x131fc38 }
	__asm { jne L_0055a53f }
	__asm { mov byte ptr [g_0131ca18], 1 }
	__asm { mov dword ptr [g_0131fc38], 0 }
	__asm { mov dword ptr [g_0131fc3c], 0 }
	__asm { mov dword ptr [g_0131fc40], 0 }
	__asm { mov dword ptr [g_0131fc44], 0 }
	__asm { mov dword ptr [g_0131fc48], 0 }
	__asm { mov dword ptr [g_0131fc4c], 0xd0 }
	__asm { mov dword ptr [g_0131fc50], 0x20 }
	__asm { mov dword ptr [g_0131fc54], 0x20 }
	__asm { mov dword ptr [g_0131fc58], 0 }
	__asm { L_0055a53f: }
	__asm { ret }
	__asm { cmp byte ptr [g_0131c9e8], 0 }
	__asm { mov eax, 0x131fa78 }
	__asm { jne L_0055a5af }
	__asm { mov byte ptr [g_0131c9e8], 1 }
	__asm { mov dword ptr [g_0131fa78], 0 }
	__asm { mov dword ptr [g_0131fa7c], 0 }
	__asm { mov dword ptr [g_0131fa80], 0 }
	__asm { mov dword ptr [g_0131fa84], 0 }
	__asm { mov dword ptr [g_0131fa88], 0 }
	__asm { mov dword ptr [g_0131fa8c], 0x30 }
	__asm { mov dword ptr [g_0131fa90], 0x20 }
	__asm { mov dword ptr [g_0131fa94], 0x20 }
	__asm { mov dword ptr [g_0131fa98], 0 }
	__asm { L_0055a5af: }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131feb8[];
extern "C" char g_0131febc[];
extern "C" void fn_00566a80();
extern "C" void fn_00566b20();
extern "C" void fn_00566bc0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005664e0
extern "C" __declspec(naked) void asm_005664e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7fab9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0056654f }
	__asm { cmp dword ptr [g_0131febc], 0x29a }
	__asm { je L_0056654f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0056653e }
	__asm { push 0xe4 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0056654f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0056653e: }
	__asm { movzx eax, al }
	__asm { push 0xf148b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0056654f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00566a80 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00566568 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0056656a }
	__asm { L_00566568: }
	__asm { xor eax, eax }
	__asm { L_0056656a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_005665db }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_005665c6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_005665c6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_005665c6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005665db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0056663d }
	__asm { cmp dword ptr [g_0131feb8], 0x29a }
	__asm { je L_0056663d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0056662c }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0056663d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0056662c: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0056663d: }
	__asm { jmp fn_00566b20 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0056669d }
	__asm { cmp dword ptr [g_0131febc], 0x29a }
	__asm { je L_0056669d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0056668c }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0056669d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0056668c: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0056669d: }
	__asm { jmp fn_00566bc0 }
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
extern "C" void fn_00573dd0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00573950
extern "C" __declspec(naked) void asm_00573950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_005739bb }
	__asm { test ebx, ebx }
	__asm { jne L_005739bb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005739aa }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005739bb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005739aa: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005739bb: }
	__asm { push 0x573dc0 }
	__asm { push 0x131ca78 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00573dd0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_005739ff }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00573abb }
	__asm { L_005739ff: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00573a73 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00573a73 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00573a62 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00573a73 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00573a62: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00573a73: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_00573a8d }
	__asm { add esi, -5 }
	__asm { jmp L_00573a8f }
	__asm { L_00573a8d: }
	__asm { xor esi, esi }
	__asm { L_00573a8f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00573abb }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00573abb }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00573abb: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_00573af8 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00573af8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00573af8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00573af8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00573af8: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10000[];
extern "C" char g_00e10004[];
extern "C" char g_00e1014c[];
extern "C" char g_00e10150[];
// FUNCTION: ROBLOXSTUDIO 0x00575a90
extern "C" __declspec(naked) void asm_00575a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00575af7 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_00575aea }
	__asm { push 0x1033e68 }
	__asm { call dword ptr [g_00e1014c] }
	__asm { test eax, eax }
	__asm { jne L_00575ac5 }
	__asm { mov eax, 1 }
	__asm { jmp L_00575b0a }
	__asm { L_00575ac5: }
	__asm { push 0x1033e50 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10150] }
	__asm { test eax, eax }
	__asm { je L_00575af0 }
	__asm { push 0 }
	__asm { push dword ptr [ebx] }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { jmp L_00575b0a }
	__asm { L_00575aea: }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { jne L_00575af7 }
	__asm { L_00575af0: }
	__asm { mov eax, 1 }
	__asm { jmp L_00575b0a }
	__asm { L_00575af7: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10000] }
	__asm { L_00575b0a: }
	__asm { test eax, eax }
	__asm { jne L_00575b35 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { test eax, eax }
	__asm { je L_00575b25 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10004] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00575b25: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { and edi, 0x300 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov eax, edx }
	__asm { L_00575b35: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00575b56 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10004] }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00575b56: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10508[];
extern "C" char g_00e10924[];
extern "C" char g_00e10ab8[];
extern "C" char g_00e10abc[];
extern "C" char g_00e10ac0[];
extern "C" char g_00e10ac4[];
extern "C" char g_00e10ac8[];
extern "C" char g_00e10acc[];
extern "C" char g_00e10b54[];
extern "C" char g_00e10b58[];
extern "C" char g_00e1106c[];
extern "C" char g_00e11070[];
extern "C" char g_00e11074[];
extern "C" char g_00e110c0[];
extern "C" char g_00e110e4[];
extern "C" char g_00e110e8[];
extern "C" char g_00e11110[];
extern "C" void fn_004033d0();
extern "C" void fn_00403540();
extern "C" void fn_004039a0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00421eb0();
extern "C" void fn_004220b0();
extern "C" void fn_004c9d20();
extern "C" void fn_007737e0();
extern "C" void fn_007739a0();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_00886810();
extern "C" void fn_008d7a10();
extern "C" void fn_009448f0();
// FUNCTION: ROBLOXSTUDIO 0x005790e0
extern "C" __declspec(naked) void asm_005790e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94f07 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xa8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009448f0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x94 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov esi, dword ptr [ebp - 0x78] }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00579163 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00579163 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00579163 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00579163: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call dword ptr [g_00e10acc] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [eax], 0x11 }
	__asm { call dword ptr [g_00e10ac4] }
	__asm { test al, al }
	__asm { je L_00579419 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call dword ptr [g_00e10ac0] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10ab8] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00579402 }
	__asm { mov esi, dword ptr [g_00e110e8] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e110c0] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call dword ptr [g_00e110c0] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_009448f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x80], edx }
	__asm { mov esi, dword ptr [ebp - 0x38] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00579237 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00579237 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00579237 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00579237: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call dword ptr [g_00e10b58] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e10924] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call dword ptr [g_00e1106c] }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call dword ptr [g_00e11070] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { call fn_009448f0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add ecx, 0x68 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { cmp ecx, eax }
	__asm { je L_0057929e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0057929e: }
	__asm { cmp dword ptr [ebp - 0x5c], 0x10 }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { jb L_005792b2 }
	__asm { push dword ptr [ebp - 0x70] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_005792b2: }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { mov esi, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x5c], 0xf }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { mov byte ptr [ebp - 0x70], 0 }
	__asm { test esi, esi }
	__asm { je L_005792f3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005792f3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005792f3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005792f3: }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e11074] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call dword ptr [g_00e10b54] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { call fn_00846f90 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { call fn_004c9d20 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0x12 }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { je L_005793a4 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_004039a0 }
	__asm { lea eax, [ebp - 0x94] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { call fn_00886810 }
	__asm { add esp, 8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0x14 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push 6 }
	__asm { call fn_008d7a10 }
	__asm { lea ecx, [ebp - 0xb0] }
	__asm { call fn_004220b0 }
	__asm { cmp dword ptr [ebp - 0x80], 0x10 }
	__asm { jb L_005793a4 }
	__asm { push dword ptr [ebp - 0x94] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_005793a4: }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { test esi, esi }
	__asm { je L_005793d2 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005793d2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_005793d2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005793d2: }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { call fn_00848ef0 }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { L_00579402: }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e10abc] }
	__asm { L_00579419: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10ac8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { je L_0057945d }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0057945d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0057945d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0057945d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0057945d: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0x16 }
	__asm { mov ecx, dword ptr [ebp - 0x74] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0x15 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x5793de }
	__asm { ret }
}

extern "C" char g_00e10a60[];
extern "C" char g_00e10f74[];
extern "C" char g_00e10f90[];
extern "C" char g_00e10fec[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11004[];
extern "C" char g_00e11050[];
extern "C" char g_00e11110[];
extern "C" void fn_00403410();
extern "C" void fn_0050ecf0();
// FUNCTION: ROBLOXSTUDIO 0x0057cbc0
extern "C" __declspec(naked) void asm_0057cbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94c89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 0x34], edi }
	__asm { lea ecx, [edi + 0x34] }
	__asm { mov eax, 1 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test byte ptr [edi + 0x44], 2 }
	__asm { jne L_0057cc0e }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { je L_0057cc08 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_0050ecf0 }
	__asm { L_0057cc08: }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [ebp - 0x34] }
	__asm { L_0057cc0e: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x2c], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp eax, edi }
	__asm { je L_0057cd70 }
	__asm { L_0057cc23: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], esi }
	__asm { cmp esi, edi }
	__asm { jne L_0057cc4d }
	__asm { push 0x426 }
	__asm { push 0x1034e38 }
	__asm { push 0x1034ea0 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0057cc4d: }
	__asm { mov esi, dword ptr [esi - 4] }
	__asm { test esi, esi }
	__asm { je L_0057ccf2 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11050] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { or ebx, 1 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { jne L_0057ccc4 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11050] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { or ebx, 2 }
	__asm { push 0x1023010 }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { or ebx, 4 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e10f74] }
	__asm { test al, al }
	__asm { je L_0057ccf2 }
	__asm { L_0057ccc4: }
	__asm { push 0x1034490 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10a60] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { or ebx, 8 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e10fec] }
	__asm { mov byte ptr [ebp - 0x11], 1 }
	__asm { test al, al }
	__asm { jne L_0057ccf6 }
	__asm { L_0057ccf2: }
	__asm { mov byte ptr [ebp - 0x11], 0 }
	__asm { L_0057ccf6: }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test bl, 8 }
	__asm { je L_0057cd11 }
	__asm { and ebx, 0xfffffff7 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_0057cd11: }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test bl, 4 }
	__asm { je L_0057cd2c }
	__asm { and ebx, 0xfffffffb }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0057cd2c: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 2 }
	__asm { je L_0057cd47 }
	__asm { and ebx, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0057cd47: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_0057cd5f }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { and ebx, 0xfffffffe }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0057cd5f: }
	__asm { cmp byte ptr [ebp - 0x11], 0 }
	__asm { jne L_0057cda4 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { cmp eax, edi }
	__asm { jne L_0057cc23 }
	__asm { L_0057cd70: }
	__asm { xor bl, bl }
	__asm { L_0057cd72: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea esi, [edi + 0x34] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [esi], edx }
	__asm { jne L_0057cd8f }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f90] }
	__asm { L_0057cd8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0057cda4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0x1034444 }
	__asm { mov byte ptr [eax], 1 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10a60] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10fec] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], al }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov bl, 1 }
	__asm { jmp L_0057cd72 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { je L_0057cdfc }
	__asm { add edx, 0x34 }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { jne L_0057cdfc }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10f90] }
	__asm { L_0057cdfc: }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10508[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403070();
extern "C" void fn_004b0630();
extern "C" void fn_0057db00();
// FUNCTION: ROBLOXSTUDIO 0x0057d9c0
extern "C" __declspec(naked) void asm_0057d9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { jne L_0057d9db }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0057d9db: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0057d9eb }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_0057d9ed }
	__asm { L_0057d9eb: }
	__asm { mov edx, esi }
	__asm { L_0057d9ed: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, edx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0057d9fb }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0057d9fd }
	__asm { L_0057d9fb: }
	__asm { mov ecx, esi }
	__asm { L_0057d9fd: }
	__asm { push edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00403070 }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { add esp, 8 }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov edi, dword ptr [ecx + eax*4] }
	__asm { test edi, edi }
	__asm { je L_0057da72 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0057da72 }
	__asm { L_0057da25: }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea eax, [ecx - 0x5c] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [ebp - 8] }
	__asm { jne L_0057da72 }
	__asm { cmp ebx, dword ptr [ebp - 0xc] }
	__asm { jne L_0057da6a }
	__asm { test ecx, ecx }
	__asm { je L_0057da4b }
	__asm { lea eax, [ecx - 0x5c] }
	__asm { jmp L_0057da4d }
	__asm { L_0057da4b: }
	__asm { xor eax, eax }
	__asm { L_0057da4d: }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_0057da58 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0057da58: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_0057da7d }
	__asm { L_0057da6a: }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_0057da25 }
	__asm { L_0057da72: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0057da7d: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0057da88 }
	__asm { add eax, -0x5c }
	__asm { jmp L_0057da8a }
	__asm { L_0057da88: }
	__asm { xor eax, eax }
	__asm { L_0057da8a: }
	__asm { push dword ptr [eax + 0x5c] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { call fn_004b0630 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0057daf5 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_0057daf1 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_0057dad7 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_004b0630 }
	__asm { L_0057dad7: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0057daf1: }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop esi }
	__asm { L_0057daf5: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
// FUNCTION: ROBLOXSTUDIO 0x0058a020
extern "C" __declspec(naked) void asm_0058a020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10530] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp dword ptr [g_00e104f4] }
}

// FUNCTION: ROBLOXSTUDIO 0x00591570
extern "C" __declspec(naked) void asm_00591570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x78] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0x1036a44 }
	__asm { ret }
}

extern "C" char g_010385f0[];
extern "C" char g_012b55c0[];
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x00594310
extern "C" __declspec(naked) void asm_00594310()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { sub esp, 0x108 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov edx, dword ptr [ebx + 0x14] }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0xbc], eax }
	__asm { mov dword ptr [ebp - 0xcc], edx }
	__asm { mov dword ptr [ebp - 0x9c], 0x1036b7c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x8c], eax }
	__asm { mov al, byte ptr [ebx + 0x18] }
	__asm { mov byte ptr [ebp - 0x88], al }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x98], ecx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 0x94], esi }
	__asm { mov dword ptr [ebp - 0x90], edi }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 0x84] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [eax + 0x30] }
	__asm { movss xmm2, dword ptr [eax + 0x38] }
	__asm { movss xmm4, dword ptr [eax + 0x10] }
	__asm { movss xmm1, dword ptr [eax + 0x34] }
	__asm { xorps xmm1, xmm0 }
	__asm { xorps xmm3, xmm0 }
	__asm { xorps xmm2, xmm0 }
	__asm { movss xmm7, dword ptr [eax + 0x14] }
	__asm { movss dword ptr [ebp - 0xb8], xmm4 }
	__asm { mulss xmm4, xmm1 }
	__asm { movaps xmm0, xmm5 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss xmm6, dword ptr [eax + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm2 }
	__asm { mulss xmm7, xmm1 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm6, xmm1 }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [ebp - 0xb4], xmm5 }
	__asm { movss xmm5, dword ptr [ecx + 0x30] }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss xmm3, dword ptr [ecx + 0x34] }
	__asm { movss dword ptr [ebp - 0xb0], xmm4 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { mulss xmm0, xmm2 }
	__asm { movss xmm2, dword ptr [ecx + 0x38] }
	__asm { movaps xmm4, xmm5 }
	__asm { mulss xmm4, dword ptr [eax] }
	__asm { addss xmm6, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax + 0x10] }
	__asm { movaps xmm1, xmm5 }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm5, dword ptr [eax + 8] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [eax + 0x20] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm3, dword ptr [eax + 0x18] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [eax + 0x24] }
	__asm { addss xmm5, xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm4, dword ptr [ebp - 0xb0] }
	__asm { movss xmm0, dword ptr [ecx + 0x18] }
	__asm { addss xmm1, xmm7 }
	__asm { addss xmm5, xmm2 }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x110], xmm4 }
	__asm { movss xmm4, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 0x10c], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 8] }
	__asm { addss xmm5, xmm6 }
	__asm { movss xmm6, dword ptr [ecx + 4] }
	__asm { mulss xmm2, xmm6 }
	__asm { mov dword ptr [ebp - 0x104], 0 }
	__asm { movss dword ptr [ebp - 0x108], xmm5 }
	__asm { movss xmm5, dword ptr [eax + 8] }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [ecx + 0x28] }
	__asm { movaps xmm3, xmm5 }
	__asm { movss xmm5, dword ptr [ecx + 0x10] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm3, xmm6 }
	__asm { movss xmm4, dword ptr [ecx + 0x20] }
	__asm { movss dword ptr [ebp - 0xc0], xmm1 }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { mulss xmm0, dword ptr [ecx + 0x24] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0xc8], xmm3 }
	__asm { movss xmm3, dword ptr [ecx] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0xb0], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { movss xmm7, dword ptr [ebp - 0xb0] }
	__asm { mulss xmm0, xmm5 }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x18] }
	__asm { mulss xmm0, dword ptr [eax + 0x14] }
	__asm { movss dword ptr [ebp - 0xb0], xmm7 }
	__asm { movss xmm7, dword ptr [ecx + 8] }
	__asm { mulss xmm7, dword ptr [eax + 4] }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, dword ptr [ecx + 0x28] }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, dword ptr [ecx + 0x14] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, dword ptr [ecx + 0x24] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm5 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x18] }
	__asm { mulss xmm0, dword ptr [ebp - 0xb8] }
	__asm { movss dword ptr [ebp - 0xc4], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 8] }
	__asm { mulss xmm1, dword ptr [ebp - 0xb4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, dword ptr [ecx + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0xb8], xmm1 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, xmm6 }
	__asm { movss xmm6, dword ptr [eax + 0x10] }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm6, xmm5 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, dword ptr [ecx + 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0xbc] }
	__asm { mov dword ptr [ebp - 0xf4], 0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0xec], xmm2 }
	__asm { movss dword ptr [ebp - 0xfc], xmm1 }
	__asm { movss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm3, xmm6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { movss dword ptr [ebp - 0xe8], xmm7 }
	__asm { lea edx, [ebp - 0x40] }
	__asm { push edx }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xb8] }
	__asm { movss dword ptr [ebp - 0xf8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc4] }
	__asm { movss dword ptr [ebp - 0xf0], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xb0] }
	__asm { movss dword ptr [ebp - 0xe0], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc8] }
	__asm { movss dword ptr [ebp - 0xdc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc0] }
	__asm { movss dword ptr [ebp - 0xd8], xmm0 }
	__asm { movss dword ptr [ebp - 0x100], xmm3 }
	__asm { movdqa xmm0, xmmword ptr [ebp - 0x100] }
	__asm { movdqa xmmword ptr [ebp - 0x80], xmm0 }
	__asm { mov dword ptr [ebp - 0xe4], 0 }
	__asm { movdqa xmm0, xmmword ptr [ebp - 0xf0] }
	__asm { movdqa xmmword ptr [ebp - 0x70], xmm0 }
	__asm { lea edx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0xd4], 0 }
	__asm { movdqa xmm0, xmmword ptr [ebp - 0xe0] }
	__asm { push edx }
	__asm { movdqa xmmword ptr [ebp - 0x60], xmm0 }
	__asm { movdqa xmm0, xmmword ptr [ebp - 0x110] }
	__asm { lea edx, [ebp - 0x80] }
	__asm { push edx }
	__asm { movdqa xmmword ptr [ebp - 0x50], xmm0 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xcc] }
	__asm { lea edx, [ebp - 0x40] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x30] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x9c] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { xor ecx, ebp }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 0x14 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0x1036ad4 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00595880
extern "C" __declspec(naked) void asm_00595880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x8c] }
	__asm { add edx, edx }
	__asm { movaps xmm0, xmmword ptr [eax + edx*8] }
	__asm { mulps xmm0, xmmword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movaps xmmword ptr [eax], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_0059a220();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x0059a2b0
extern "C" __declspec(naked) void asm_0059a2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x88 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x84], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0x44], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x6c] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0x54] }
	__asm { call eax }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { movd xmm0, esi }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { divss xmm1, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { test esi, esi }
	__asm { je L_0059a658 }
	__asm { shl eax, 6 }
	__asm { L_0059a320: }
	__asm { sub eax, 0x40 }
	__asm { mov dword ptr [esp + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0xd8] }
	__asm { dec esi }
	__asm { lea edx, [esp + 0x70] }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { movss dword ptr [esp], xmm1 }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0059a4c6 }
	__asm { mov eax, dword ptr [edi + 0xc4] }
	__asm { add eax, dword ptr [esp + 0x40] }
	__asm { movss xmm2, dword ptr [esp + 0x78] }
	__asm { mov ecx, dword ptr [esp + 0x44] }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm5, dword ptr [eax + 0x24] }
	__asm { mulss xmm5, dword ptr [esp + 0x74] }
	__asm { movss xmm4, dword ptr [eax + 0x20] }
	__asm { movss xmm3, dword ptr [eax + 0x10] }
	__asm { mulss xmm0, xmm2 }
	__asm { mulss xmm1, xmm2 }
	__asm { movss dword ptr [esp + 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [esp + 0x70] }
	__asm { mulss xmm4, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss xmm6, dword ptr [eax + 0x14] }
	__asm { mulss xmm6, dword ptr [esp + 0x74] }
	__asm { movss dword ptr [esp + 0x10], xmm1 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, xmm5 }
	__asm { movss xmm7, dword ptr [eax + 0x18] }
	__asm { mulss xmm7, xmm2 }
	__asm { movss dword ptr [esp + 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { movss xmm5, dword ptr [esp + 0x2c] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss xmm4, dword ptr [eax + 0x10] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { mulss xmm0, dword ptr [esp + 0x30] }
	__asm { mulss xmm2, dword ptr [esp + 0x74] }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm6 }
	__asm { mulss xmm4, xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x30] }
	__asm { mulss xmm3, xmm3 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm7 }
	__asm { mov dword ptr [esp + 0x6c], 0 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 0x38] }
	__asm { movss dword ptr [esp + 0x30], xmm4 }
	__asm { movss xmm4, dword ptr [eax + 4] }
	__asm { mulss xmm4, xmm2 }
	__asm { movss xmm2, dword ptr [eax + 0x34] }
	__asm { mulss xmm1, xmm1 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [esp + 0x10] }
	__asm { mulss xmm2, xmm2 }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, xmm2 }
	__asm { addss xmm1, xmm3 }
	__asm { addss xmm2, xmm3 }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, dword ptr [esp + 0x30] }
	__asm { addss xmm0, dword ptr [ecx] }
	__asm { mulss xmm2, xmm5 }
	__asm { addss xmm1, dword ptr [ecx + 4] }
	__asm { addss xmm2, dword ptr [ecx + 8] }
	__asm { movss dword ptr [esp + 0x60], xmm0 }
	__asm { movss dword ptr [esp + 0x64], xmm1 }
	__asm { movq xmm0, qword ptr [esp + 0x60] }
	__asm { movq qword ptr [ecx], xmm0 }
	__asm { movss dword ptr [esp + 0x68], xmm2 }
	__asm { movq xmm0, qword ptr [esp + 0x68] }
	__asm { movq qword ptr [ecx + 8], xmm0 }
	__asm { jmp L_0059a647 }
	__asm { L_0059a4c6: }
	__asm { call fn_0059a220 }
	__asm { movss xmm6, dword ptr [eax + 0x28] }
	__asm { movss xmm5, dword ptr [esp + 0x78] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm7, dword ptr [esp + 0x70] }
	__asm { movss xmm1, dword ptr [esp + 0x74] }
	__asm { movss dword ptr [esp + 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [esp + 0x10], xmm0 }
	__asm { mulss xmm5, xmm6 }
	__asm { movss xmm4, dword ptr [esp + 0x78] }
	__asm { mulss xmm4, dword ptr [eax + 0x18] }
	__asm { movss dword ptr [esp + 0x48], xmm5 }
	__asm { movss xmm5, dword ptr [esp + 0x78] }
	__asm { mulss xmm5, dword ptr [esp + 0x10] }
	__asm { movaps xmm3, xmm1 }
	__asm { mulss xmm3, dword ptr [eax + 0x24] }
	__asm { movss dword ptr [esp + 0x4c], xmm5 }
	__asm { movss xmm5, dword ptr [esp + 0x74] }
	__asm { mulss xmm5, dword ptr [esp + 0x30] }
	__asm { movaps xmm0, xmm7 }
	__asm { mulss xmm0, dword ptr [eax + 0x20] }
	__asm { movss dword ptr [esp + 0x10], xmm5 }
	__asm { movss xmm5, dword ptr [eax + 0x20] }
	__asm { mulss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm6, dword ptr [esp + 0x48] }
	__asm { movaps xmm2, xmm1 }
	__asm { mulss xmm2, dword ptr [eax + 0x14] }
	__asm { movss xmm3, xmm5 }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm2 }
	__asm { movss xmm2, dword ptr [eax + 0x34] }
	__asm { movaps xmm1, xmm7 }
	__asm { mulss xmm1, dword ptr [eax + 0x10] }
	__asm { mulss xmm7, dword ptr [eax] }
	__asm { movss dword ptr [esp + 0x2c], xmm5 }
	__asm { movss xmm5, dword ptr [eax + 0x10] }
	__asm { mulss xmm5, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 0x38] }
	__asm { addss xmm3, xmm6 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { mulss xmm4, xmm7 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [esp + 0x10] }
	__asm { mulss xmm1, xmm1 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [esp + 0x4c] }
	__asm { movss dword ptr [esp + 0x2c], xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [esp + 0x44] }
	__asm { addss xmm4, xmm0 }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm3, xmm3 }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, xmm2 }
	__asm { addss xmm1, xmm3 }
	__asm { addss xmm2, xmm3 }
	__asm { mov dword ptr [esp + 0x5c], 0 }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm2, dword ptr [esp + 0x2c] }
	__asm { addss xmm0, dword ptr [eax] }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm2, dword ptr [eax + 8] }
	__asm { addss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [esp + 0x50], xmm0 }
	__asm { movss dword ptr [esp + 0x58], xmm2 }
	__asm { movss dword ptr [esp + 0x54], xmm1 }
	__asm { movq xmm0, qword ptr [esp + 0x50] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [esp + 0x58] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { L_0059a647: }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esp + 0x40] }
	__asm { test esi, esi }
	__asm { jne L_0059a320 }
	__asm { L_0059a658: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x70] }
	__asm { mov ecx, dword ptr [esp + 0x8c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010380b8[];
extern "C" char g_010385e0[];
// FUNCTION: ROBLOXSTUDIO 0x0059df60
extern "C" __declspec(naked) void asm_0059df60()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { movss xmm7, dword ptr [ecx + 0x50] }
	__asm { movss xmm0, dword ptr [ecx + 0x60] }
	__asm { movss xmm5, dword ptr [ecx + 0x58] }
	__asm { movss xmm2, dword ptr [ecx + 0x68] }
	__asm { movss xmm6, dword ptr [ecx + 0x54] }
	__asm { subss xmm0, xmm7 }
	__asm { subss xmm2, xmm5 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { addss xmm7, dword ptr [ecx + 0x60] }
	__asm { addss xmm5, dword ptr [ecx + 0x68] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x64] }
	__asm { movss xmm4, dword ptr [ebp - 0x20] }
	__asm { subss xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { movss xmm2, dword ptr [g_010380b8] }
	__asm { mulss xmm4, xmm2 }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm6, dword ptr [ecx + 0x64] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, xmm2 }
	__asm { movss xmm2, xmm4 }
	__asm { movss dword ptr [ebp - 0x20], xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0x14] }
	__asm { addss xmm2, xmm0 }
	__asm { movdqa xmm4, xmmword ptr [g_010385e0] }
	__asm { movss xmm3, xmm7 }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { movss dword ptr [ebp - 0x30], xmm7 }
	__asm { movss dword ptr [ebp - 0x20], xmm2 }
	__asm { movss xmm2, dword ptr [ebp - 0x34] }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm7, xmm4 }
	__asm { andps xmm7, xmmword ptr [eax + 0x10] }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { movss dword ptr [ebp - 0x34], xmm2 }
	__asm { movss xmm2, dword ptr [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { andps xmm0, xmmword ptr [eax + 0x20] }
	__asm { movaps xmmword ptr [ebp - 0x50], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { movss xmm2, dword ptr [g_010380b8] }
	__asm { mulss xmm6, xmm2 }
	__asm { mulss xmm3, xmm2 }
	__asm { mulss xmm1, xmm6 }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm5, xmm2 }
	__asm { movss xmm2, dword ptr [eax + 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm2, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax + 0x10] }
	__asm { mulss xmm3, dword ptr [eax + 0x20] }
	__asm { andps xmm4, xmmword ptr [eax] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { movss dword ptr [ebp - 0x30], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 0x24] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm1, xmm6 }
	__asm { movss xmm6, dword ptr [eax + 0x38] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { mulss xmm0, xmm5 }
	__asm { movss xmm5, dword ptr [eax + 0x34] }
	__asm { addss xmm1, xmm3 }
	__asm { addss xmm5, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { addss xmm0, dword ptr [eax + 0x30] }
	__asm { addss xmm6, xmm1 }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movaps xmm3, xmm4 }
	__asm { shufps xmm3, xmm4, 0x55 }
	__asm { mulss xmm3, dword ptr [ebp - 0x34] }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { shufps xmm4, xmm4, 0xaa }
	__asm { mulss xmm4, dword ptr [ebp - 8] }
	__asm { addss xmm3, xmm0 }
	__asm { movaps xmm2, xmm7 }
	__asm { shufps xmm2, xmm7, 0x55 }
	__asm { mulss xmm2, dword ptr [ebp - 0x34] }
	__asm { movaps xmm0, xmm7 }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { addss xmm3, xmm4 }
	__asm { movaps xmm4, xmmword ptr [ebp - 0x50] }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm1, xmm4 }
	__asm { shufps xmm1, xmm4, 0x55 }
	__asm { mulss xmm1, dword ptr [ebp - 0x34] }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss xmm4, dword ptr [ebp - 0x48] }
	__asm { mulss xmm4, dword ptr [ebp - 8] }
	__asm { addss xmm1, xmm0 }
	__asm { shufps xmm7, xmm7, 0xaa }
	__asm { mulss xmm7, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { addss xmm1, xmm4 }
	__asm { movss xmm4, dword ptr [ebp - 0x30] }
	__asm { movaps xmm0, xmm4 }
	__asm { subss xmm0, xmm3 }
	__asm { addss xmm2, xmm7 }
	__asm { addss xmm3, xmm4 }
	__asm { movss dword ptr [ebp - 0x50], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { subss xmm0, xmm2 }
	__asm { addss xmm2, xmm5 }
	__asm { movss dword ptr [ebp - 0x4c], xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { subss xmm0, xmm1 }
	__asm { addss xmm1, xmm6 }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { movaps xmm0, xmmword ptr [ebp - 0x50] }
	__asm { movaps xmmword ptr [edx], xmm0 }
	__asm { movss dword ptr [ebp - 0x50], xmm3 }
	__asm { movss dword ptr [ebp - 0x4c], xmm2 }
	__asm { movss dword ptr [ebp - 0x48], xmm1 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { movaps xmm0, xmmword ptr [ebp - 0x50] }
	__asm { movaps xmmword ptr [esi], xmm0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 0x10 }
}

extern "C" char g_01038280[];
extern "C" char g_012b55c0[];
extern "C" void fn_005b0510();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x0059e470
extern "C" __declspec(naked) void asm_0059e470()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { movaps xmm3, xmmword ptr [edx] }
	__asm { mulps xmm3, xmmword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { movaps xmmword ptr [ebp - 0x20], xmm3 }
	__asm { cmp esi, 0xa }
	__asm { jge L_0059e506 }
	__asm { movss xmm2, dword ptr [g_01038280] }
	__asm { or edx, 0xffffffff }
	__asm { xor eax, eax }
	__asm { test esi, esi }
	__asm { jle L_0059e51a }
	__asm { movss xmm4, dword ptr [ebp - 0x18] }
	__asm { movss xmm5, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [edi + 8] }
	__asm { mov edi, edi }
	__asm { L_0059e4d0: }
	__asm { movss xmm0, dword ptr [ecx - 4] }
	__asm { movss xmm1, dword ptr [ecx - 8] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, xmm2 }
	__asm { jbe L_0059e4fc }
	__asm { movaps xmm2, xmm1 }
	__asm { mov edx, eax }
	__asm { L_0059e4fc: }
	__asm { inc eax }
	__asm { add ecx, 0x10 }
	__asm { cmp eax, esi }
	__asm { jl L_0059e4d0 }
	__asm { jmp L_0059e51a }
	__asm { L_0059e506: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea edx, [ebp - 0x20] }
	__asm { mov ecx, edi }
	__asm { call fn_005b0510 }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { L_0059e51a: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add edx, edx }
	__asm { xor ecx, ebp }
	__asm { movaps xmm0, xmmword ptr [edi + edx*8] }
	__asm { mulps xmm0, xmmword ptr [eax] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { movaps xmmword ptr [eax], xmm0 }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x005b3ba0
extern "C" __declspec(naked) void asm_005b3ba0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [ecx + 0x48], 0 }
	__asm { je L_005b3c46 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { movaps xmm1, xmmword ptr [ecx + 0x30] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { subss xmm0, dword ptr [ecx + 0x10] }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [ecx + 0x94] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { subss xmm0, dword ptr [ecx + 0x14] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { subss xmm0, dword ptr [ecx + 0x18] }
	__asm { mov ecx, 0xfffe }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mulps xmm1, xmmword ptr [ebp - 0x10] }
	__asm { cvttss2si eax, xmm1 }
	__asm { movaps xmm0, xmm1 }
	__asm { and ax, cx }
	__asm { mov word ptr [edx], ax }
	__asm { shufps xmm0, xmm1, 0x55 }
	__asm { cvttss2si eax, xmm0 }
	__asm { shufps xmm1, xmm1, 0xaa }
	__asm { and ax, cx }
	__asm { mov word ptr [edx + 2], ax }
	__asm { cvttss2si eax, xmm1 }
	__asm { and ax, cx }
	__asm { mov word ptr [edx + 4], ax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_005b3c46: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x6c] }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ecx + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_010380e4[];
// FUNCTION: ROBLOXSTUDIO 0x005b3c70
extern "C" __declspec(naked) void asm_005b3c70()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { sub esp, 0x1c }
	__asm { cmp byte ptr [ecx + 0x48], 0 }
	__asm { push esi }
	__asm { je L_005b3d30 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { subss xmm0, dword ptr [ecx + 0x10] }
	__asm { movaps xmm2, xmmword ptr [ecx + 0x30] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov edx, dword ptr [ecx + 0x94] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { subss xmm0, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add esi, esi }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { subss xmm0, dword ptr [ecx + 0x18] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mulps xmm2, xmmword ptr [ebp - 0x10] }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, xmm1 }
	__asm { cvttss2si eax, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { shufps xmm0, xmm2, 0x55 }
	__asm { or ax, 1 }
	__asm { addss xmm0, xmm1 }
	__asm { mov word ptr [edx + esi*8 + 6], ax }
	__asm { shufps xmm2, xmm2, 0xaa }
	__asm { addss xmm2, xmm1 }
	__asm { cvttss2si eax, xmm0 }
	__asm { or ax, 1 }
	__asm { mov word ptr [edx + esi*8 + 8], ax }
	__asm { cvttss2si eax, xmm2 }
	__asm { or ax, 1 }
	__asm { mov word ptr [edx + esi*8 + 0xa], ax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_005b3d30: }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x6c] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { shl edx, 6 }
	__asm { pop esi }
	__asm { movq qword ptr [ecx + edx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ecx + edx + 0x18], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_01038034[];
extern "C" char g_010380e4[];
extern "C" char g_01038200[];
// FUNCTION: ROBLOXSTUDIO 0x005b40f0
extern "C" __declspec(naked) void asm_005b40f0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { movaps xmm6, xmm3 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { subss xmm0, xmm6 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss xmm5, dword ptr [g_01038200] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { subss xmm0, xmm6 }
	__asm { push edi }
	__asm { mov edi, 0xfffe }
	__asm { movss dword ptr [ebp - 0x14], xmm6 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { subss xmm0, xmm6 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [esi + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { movq qword ptr [esi + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, xmm6 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [esi + 0x20], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { movq qword ptr [esi + 0x28], xmm0 }
	__asm { movss xmm3, dword ptr [esi + 0x20] }
	__asm { subss xmm3, dword ptr [esi + 0x10] }
	__asm { movss xmm2, dword ptr [esi + 0x24] }
	__asm { subss xmm2, dword ptr [esi + 0x14] }
	__asm { movaps xmm0, xmm5 }
	__asm { movss xmm1, dword ptr [esi + 0x28] }
	__asm { divss xmm0, xmm3 }
	__asm { subss xmm1, dword ptr [esi + 0x18] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { divss xmm0, xmm2 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { divss xmm0, xmm1 }
	__asm { mov byte ptr [esi + 0x48], 1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [esi + 0x30], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { movq qword ptr [esi + 0x38], xmm0 }
	__asm { movss xmm2, dword ptr [esi + 0x10] }
	__asm { movss xmm3, dword ptr [esi + 0x14] }
	__asm { movss xmm4, dword ptr [esi + 0x18] }
	__asm { movaps xmm1, xmmword ptr [esi + 0x30] }
	__asm { movaps xmm0, xmm2 }
	__asm { subss xmm0, xmm2 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, xmm3 }
	__asm { subss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, xmm4 }
	__asm { subss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mulps xmm1, xmmword ptr [ebp - 0x10] }
	__asm { movaps xmm0, xmm1 }
	__asm { shufps xmm0, xmm1, 0x55 }
	__asm { cvttss2si eax, xmm1 }
	__asm { cvttss2si edx, xmm0 }
	__asm { shufps xmm1, xmm1, 0xaa }
	__asm { and ax, di }
	__asm { and dx, di }
	__asm { cvttss2si ecx, xmm1 }
	__asm { movzx eax, ax }
	__asm { movd xmm7, eax }
	__asm { movzx eax, dx }
	__asm { and cx, di }
	__asm { cvtdq2ps xmm7, xmm7 }
	__asm { movd xmm1, eax }
	__asm { divss xmm7, dword ptr [esi + 0x30] }
	__asm { movzx eax, cx }
	__asm { movd xmm0, eax }
	__asm { cvtdq2ps xmm1, xmm1 }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { divss xmm1, dword ptr [esi + 0x34] }
	__asm { divss xmm0, dword ptr [esi + 0x38] }
	__asm { addss xmm7, xmm2 }
	__asm { addss xmm3, xmm1 }
	__asm { addss xmm4, xmm0 }
	__asm { subss xmm7, xmm6 }
	__asm { subss xmm3, xmm6 }
	__asm { subss xmm4, xmm6 }
	__asm { comiss xmm2, xmm7 }
	__asm { jbe L_005b42c4 }
	__asm { movss dword ptr [esi + 0x10], xmm7 }
	__asm { L_005b42c4: }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { comiss xmm0, xmm3 }
	__asm { jbe L_005b42d3 }
	__asm { movss dword ptr [esi + 0x14], xmm3 }
	__asm { L_005b42d3: }
	__asm { movss xmm0, dword ptr [esi + 0x18] }
	__asm { comiss xmm0, xmm4 }
	__asm { jbe L_005b42e2 }
	__asm { movss dword ptr [esi + 0x18], xmm4 }
	__asm { L_005b42e2: }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { comiss xmm0, dword ptr [g_01038034] }
	__asm { jbe L_005b42f7 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_005b42f7: }
	__asm { movss xmm4, dword ptr [esi + 0x20] }
	__asm { movss xmm3, dword ptr [esi + 0x10] }
	__asm { movss xmm6, dword ptr [esi + 0x14] }
	__asm { movss xmm7, dword ptr [esi + 0x18] }
	__asm { movaps xmm2, xmmword ptr [esi + 0x30] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movaps xmm0, xmm4 }
	__asm { subss xmm0, xmm3 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x24] }
	__asm { subss xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x28] }
	__asm { subss xmm0, xmm7 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mulps xmm2, xmmword ptr [ebp - 0x10] }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, xmm1 }
	__asm { cvttss2si eax, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { shufps xmm0, xmm2, 0x55 }
	__asm { addss xmm0, xmm1 }
	__asm { shufps xmm2, xmm2, 0xaa }
	__asm { addss xmm2, xmm1 }
	__asm { or ax, 1 }
	__asm { movzx eax, ax }
	__asm { cvttss2si edx, xmm0 }
	__asm { cvttss2si ecx, xmm2 }
	__asm { or dx, 1 }
	__asm { movd xmm2, eax }
	__asm { movzx eax, dx }
	__asm { or cx, 1 }
	__asm { movd xmm1, eax }
	__asm { movzx eax, cx }
	__asm { cvtdq2ps xmm2, xmm2 }
	__asm { movd xmm0, eax }
	__asm { divss xmm2, dword ptr [esi + 0x30] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { cvtdq2ps xmm1, xmm1 }
	__asm { divss xmm0, dword ptr [esi + 0x38] }
	__asm { divss xmm1, dword ptr [esi + 0x34] }
	__asm { addss xmm2, xmm3 }
	__asm { addss xmm7, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { addss xmm6, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { addss xmm7, xmm0 }
	__asm { addss xmm6, xmm0 }
	__asm { comiss xmm2, xmm4 }
	__asm { jbe L_005b43d0 }
	__asm { movss dword ptr [esi + 0x20], xmm2 }
	__asm { L_005b43d0: }
	__asm { comiss xmm6, dword ptr [esi + 0x24] }
	__asm { jbe L_005b43db }
	__asm { movss dword ptr [esi + 0x24], xmm6 }
	__asm { L_005b43db: }
	__asm { comiss xmm7, dword ptr [esi + 0x28] }
	__asm { jbe L_005b43e6 }
	__asm { movss dword ptr [esi + 0x28], xmm7 }
	__asm { L_005b43e6: }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, dword ptr [esi + 0x2c] }
	__asm { jbe L_005b43f6 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_005b43f6: }
	__asm { movss xmm1, dword ptr [esi + 0x20] }
	__asm { subss xmm1, xmm3 }
	__asm { movss xmm2, dword ptr [esi + 0x24] }
	__asm { movaps xmm0, xmm5 }
	__asm { subss xmm2, dword ptr [esi + 0x14] }
	__asm { movss xmm3, dword ptr [esi + 0x28] }
	__asm { divss xmm0, xmm1 }
	__asm { subss xmm3, dword ptr [esi + 0x18] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { divss xmm0, xmm2 }
	__asm { divss xmm5, xmm3 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [esi + 0x30], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm5 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { pop edi }
	__asm { movq qword ptr [esi + 0x38], xmm0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_010380e4[];
extern "C" char g_012b55c0[];
extern "C" void fn_005b5700();
extern "C" void fn_005b57e0();
extern "C" void fn_005b6560();
extern "C" void fn_005b6660();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x005b54c0
extern "C" __declspec(naked) void asm_005b54c0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp byte ptr [ecx + 0x48], 0 }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { je L_005b56dd }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movss xmm1, dword ptr [ecx + 0x10] }
	__asm { movq qword ptr [ebp - 0x30], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_005b551d }
	__asm { movaps xmm0, xmm1 }
	__asm { L_005b551d: }
	__asm { movss xmm3, dword ptr [ecx + 0x14] }
	__asm { movss xmm1, dword ptr [ebp - 0x2c] }
	__asm { comiss xmm3, xmm1 }
	__asm { jbe L_005b552f }
	__asm { movaps xmm1, xmm3 }
	__asm { L_005b552f: }
	__asm { movss xmm5, dword ptr [ecx + 0x18] }
	__asm { movss xmm2, dword ptr [ebp - 0x28] }
	__asm { comiss xmm5, xmm2 }
	__asm { jbe L_005b5541 }
	__asm { movaps xmm2, xmm5 }
	__asm { L_005b5541: }
	__asm { movss xmm6, dword ptr [ecx + 0x20] }
	__asm { comiss xmm0, xmm6 }
	__asm { jbe L_005b554e }
	__asm { movaps xmm0, xmm6 }
	__asm { L_005b554e: }
	__asm { movss xmm4, dword ptr [ecx + 0x24] }
	__asm { comiss xmm1, xmm4 }
	__asm { jbe L_005b555b }
	__asm { movaps xmm1, xmm4 }
	__asm { L_005b555b: }
	__asm { movss xmm7, dword ptr [ecx + 0x28] }
	__asm { comiss xmm2, xmm7 }
	__asm { jbe L_005b5568 }
	__asm { movaps xmm2, xmm7 }
	__asm { L_005b5568: }
	__asm { subss xmm0, dword ptr [ecx + 0x10] }
	__asm { subss xmm1, xmm3 }
	__asm { subss xmm2, xmm5 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov edi, 0xfffe }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { movss dword ptr [ebp - 0x28], xmm2 }
	__asm { movaps xmm2, xmmword ptr [ecx + 0x30] }
	__asm { movaps xmm1, xmm2 }
	__asm { mulps xmm1, xmmword ptr [ebp - 0x30] }
	__asm { cvttss2si eax, xmm1 }
	__asm { movaps xmm0, xmm1 }
	__asm { and ax, di }
	__asm { shufps xmm0, xmm1, 0x55 }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { cvttss2si eax, xmm0 }
	__asm { movq xmm0, qword ptr [esi] }
	__asm { and ax, di }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { shufps xmm1, xmm1, 0xaa }
	__asm { cvttss2si eax, xmm1 }
	__asm { movq qword ptr [ebp - 0x30], xmm0 }
	__asm { movq xmm0, qword ptr [esi + 8] }
	__asm { movss xmm4, dword ptr [ebp - 0x30] }
	__asm { movq qword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { and ax, di }
	__asm { comiss xmm0, xmm4 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { jbe L_005b55ec }
	__asm { movaps xmm4, xmm0 }
	__asm { L_005b55ec: }
	__asm { movss xmm1, dword ptr [ebp - 0x2c] }
	__asm { comiss xmm3, xmm1 }
	__asm { jbe L_005b55f9 }
	__asm { movaps xmm1, xmm3 }
	__asm { L_005b55f9: }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { comiss xmm5, xmm0 }
	__asm { jbe L_005b5606 }
	__asm { movaps xmm0, xmm5 }
	__asm { L_005b5606: }
	__asm { comiss xmm4, xmm6 }
	__asm { jbe L_005b560e }
	__asm { movaps xmm4, xmm6 }
	__asm { L_005b560e: }
	__asm { movss xmm3, dword ptr [ecx + 0x24] }
	__asm { comiss xmm1, xmm3 }
	__asm { jbe L_005b561b }
	__asm { movaps xmm1, xmm3 }
	__asm { L_005b561b: }
	__asm { comiss xmm0, xmm7 }
	__asm { jbe L_005b5623 }
	__asm { movaps xmm0, xmm7 }
	__asm { L_005b5623: }
	__asm { subss xmm1, dword ptr [ecx + 0x14] }
	__asm { subss xmm4, dword ptr [ecx + 0x10] }
	__asm { subss xmm0, xmm5 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movss dword ptr [ebp - 0x30], xmm4 }
	__asm { mulps xmm2, xmmword ptr [ebp - 0x30] }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, xmm1 }
	__asm { cvttss2si eax, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { shufps xmm0, xmm2, 0x55 }
	__asm { or ax, 1 }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { addss xmm0, xmm1 }
	__asm { shufps xmm2, xmm2, 0xaa }
	__asm { addss xmm2, xmm1 }
	__asm { cvttss2si eax, xmm0 }
	__asm { or ax, 1 }
	__asm { mov word ptr [ebp - 0x12], ax }
	__asm { cvttss2si eax, xmm2 }
	__asm { or ax, 1 }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { mov eax, dword ptr [ecx + 0x9c] }
	__asm { sub eax, 0 }
	__asm { je L_005b56c8 }
	__asm { dec eax }
	__asm { je L_005b56b8 }
	__asm { dec eax }
	__asm { jne L_005b56e5 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [ecx + 0x94] }
	__asm { call fn_005b57e0 }
	__asm { jmp L_005b56e5 }
	__asm { L_005b56b8: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_005b6660 }
	__asm { jmp L_005b56e5 }
	__asm { L_005b56c8: }
	__asm { push dword ptr [ecx + 0x44] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_005b6560 }
	__asm { jmp L_005b56e5 }
	__asm { L_005b56dd: }
	__asm { push esi }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_005b5700 }
	__asm { L_005b56e5: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { xor ecx, ebp }
	__asm { pop esi }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 0xc }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x005cf260
extern "C" __declspec(naked) void asm_005cf260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jl L_005cf292 }
	__asm { jg L_005cf276 }
	__asm { test eax, eax }
	__asm { je L_005cf288 }
	__asm { L_005cf276: }
	__asm { mov dword ptr [ecx + 0x20], 1 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { L_005cf283: }
	__asm { xorps xmm0, xmm0 }
	__asm { jmp L_005cf2cd }
	__asm { L_005cf288: }
	__asm { test edx, edx }
	__asm { jg L_005cf2be }
	__asm { jl L_005cf292 }
	__asm { test eax, eax }
	__asm { jae L_005cf2be }
	__asm { L_005cf292: }
	__asm { neg eax }
	__asm { adc edx, 0 }
	__asm { neg edx }
	__asm { mov dword ptr [ecx + 0x20], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { js L_005cf2ae }
	__asm { jg L_005cf283 }
	__asm { test eax, eax }
	__asm { jae L_005cf283 }
	__asm { L_005cf2ae: }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_005cf2d2 }
	__asm { L_005cf2be: }
	__asm { xorps xmm0, xmm0 }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { movlpd qword ptr [ebp - 0x10], xmm0 }
	__asm { L_005cf2cd: }
	__asm { movlpd qword ptr [ebp - 8], xmm0 }
	__asm { L_005cf2d2: }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [ecx], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { movq qword ptr [ecx + 8], xmm0 }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 8], xmm0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [ecx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { movq qword ptr [ecx + 0x18], xmm0 }
	__asm { mov byte ptr [ecx + 0x24], 1 }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005cf320
extern "C" __declspec(naked) void asm_005cf320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov edx, ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { jg L_005cf343 }
	__asm { jl L_005cf33e }
	__asm { test eax, eax }
	__asm { jae L_005cf343 }
	__asm { L_005cf33e: }
	__asm { or edi, 0xffffffff }
	__asm { jmp L_005cf357 }
	__asm { L_005cf343: }
	__asm { or eax, ecx }
	__asm { jne L_005cf352 }
	__asm { mov eax, dword ptr [esi] }
	__asm { or eax, dword ptr [esi + 4] }
	__asm { jne L_005cf352 }
	__asm { xor edi, edi }
	__asm { jmp L_005cf357 }
	__asm { L_005cf352: }
	__asm { mov edi, 1 }
	__asm { L_005cf357: }
	__asm { mov dword ptr [edx + 0x20], edi }
	__asm { test edi, edi }
	__asm { js L_005cf36d }
	__asm { movq xmm0, qword ptr [esi] }
	__asm { movq qword ptr [edx], xmm0 }
	__asm { movq xmm0, qword ptr [esi + 8] }
	__asm { jmp L_005cf3c9 }
	__asm { L_005cf36d: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ebx }
	__asm { or eax, ecx }
	__asm { jne L_005cf384 }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_005cf398 }
	__asm { L_005cf384: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_005cf398: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { neg ebx }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { not ecx }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { not eax }
	__asm { adc eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { movq xmm0, qword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movq qword ptr [edx], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { L_005cf3c9: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { movq qword ptr [edx + 8], xmm0 }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jl L_005cf401 }
	__asm { jg L_005cf3df }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jb L_005cf401 }
	__asm { L_005cf3df: }
	__asm { movq xmm0, qword ptr [esi] }
	__asm { movq qword ptr [edx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { mov byte ptr [edx + 0x24], 0 }
	__asm { movq qword ptr [edx + 0x18], xmm0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005cf401: }
	__asm { neg edi }
	__asm { mov dword ptr [edx + 0x20], edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { or eax, ecx }
	__asm { jne L_005cf416 }
	__asm { lea edi, [eax + 1] }
	__asm { xor ebx, ebx }
	__asm { jmp L_005cf424 }
	__asm { L_005cf416: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 0x10], xmm0 }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_005cf424: }
	__asm { mov eax, dword ptr [esi] }
	__asm { neg eax }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { movq xmm0, qword ptr [ebp - 0x18] }
	__asm { not ecx }
	__asm { add ecx, edi }
	__asm { not eax }
	__asm { adc eax, ebx }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movq qword ptr [edx + 0x10], xmm0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { pop esi }
	__asm { mov eax, edx }
	__asm { mov byte ptr [edx + 0x24], 0 }
	__asm { movq qword ptr [edx + 0x18], xmm0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005cf260();
extern "C" void fn_005cf320();
extern "C" void fn_005cf790();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x005cf470
extern "C" __declspec(naked) void asm_005cf470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x7c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x64], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { jl L_005cf4da }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x60] }
	__asm { push dword ptr [edi + 0x14] }
	__asm { cdq }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { mov esi, edx }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { push dword ptr [edi + 4] }
	__asm { add ebx, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { adc esi, edx }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { add ebx, eax }
	__asm { adc esi, edx }
	__asm { push esi }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { call fn_005cf260 }
	__asm { jmp L_005cf5d1 }
	__asm { L_005cf4da: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { push dword ptr [esi + 8] }
	__asm { push eax }
	__asm { call fn_005cf790 }
	__asm { push dword ptr [esi + 4] }
	__asm { mov edi, eax }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { call fn_005cf790 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { add esi, edx }
	__asm { adc eax, ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp eax, ecx }
	__asm { ja L_005cf52c }
	__asm { jb L_005cf523 }
	__asm { cmp esi, edx }
	__asm { jae L_005cf52c }
	__asm { L_005cf523: }
	__asm { mov eax, 1 }
	__asm { xor ecx, ecx }
	__asm { jmp L_005cf53a }
	__asm { L_005cf52c: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 0x18], xmm0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_005cf53a: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { add edi, dword ptr [edx + 8] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [edx + 0xc] }
	__asm { adc edx, dword ptr [ebx + 0xc] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { adc edx, ecx }
	__asm { push dword ptr [eax + 0x14] }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { call fn_005cf790 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { adc eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [ebp - 0x10] }
	__asm { ja L_005cf592 }
	__asm { jb L_005cf589 }
	__asm { cmp ecx, esi }
	__asm { jae L_005cf592 }
	__asm { L_005cf589: }
	__asm { mov eax, 1 }
	__asm { xor edx, edx }
	__asm { jmp L_005cf5a0 }
	__asm { L_005cf592: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 0x18], xmm0 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_005cf5a0: }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { adc eax, edx }
	__asm { add ecx, edi }
	__asm { adc eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { call fn_005cf320 }
	__asm { L_005cf5d1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movq xmm0, qword ptr [ecx] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 8] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 0x10] }
	__asm { movq qword ptr [eax + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 0x18] }
	__asm { pop edi }
	__asm { movq qword ptr [eax + 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 0x20] }
	__asm { pop esi }
	__asm { movq qword ptr [eax + 0x20], xmm0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005d56e0();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x005cf790
extern "C" __declspec(naked) void asm_005cf790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jg L_005cf7f3 }
	__asm { jl L_005cf7a9 }
	__asm { test edx, edx }
	__asm { jae L_005cf7f3 }
	__asm { L_005cf7a9: }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, edi }
	__asm { or eax, ecx }
	__asm { mov bl, 1 }
	__asm { jne L_005cf7c4 }
	__asm { mov eax, 1 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { jmp L_005cf7d5 }
	__asm { L_005cf7c4: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 0x14], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { L_005cf7d5: }
	__asm { neg edi }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { not edx }
	__asm { add edx, eax }
	__asm { not esi }
	__asm { adc esi, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jmp L_005cf808 }
	__asm { L_005cf7f3: }
	__asm { movq xmm0, qword ptr [ecx] }
	__asm { movq qword ptr [ebp - 0x1c], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 8] }
	__asm { xor bl, bl }
	__asm { movq qword ptr [ebp - 0x14], xmm0 }
	__asm { L_005cf808: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ebp - 0x2c], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ebp - 0x24], xmm0 }
	__asm { test esi, esi }
	__asm { jg L_005cf83a }
	__asm { jl L_005cf82e }
	__asm { test edi, edi }
	__asm { jae L_005cf83a }
	__asm { L_005cf82e: }
	__asm { test bl, bl }
	__asm { sete bl }
	__asm { neg edi }
	__asm { adc esi, 0 }
	__asm { neg esi }
	__asm { L_005cf83a: }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_005d56e0 }
	__asm { add esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6a20 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { add esi, eax }
	__asm { adc edi, edx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test bl, bl }
	__asm { je L_005cf8b1 }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, edx }
	__asm { or eax, ecx }
	__asm { jne L_005cf886 }
	__asm { mov eax, 1 }
	__asm { xor ebx, ebx }
	__asm { jmp L_005cf894 }
	__asm { L_005cf886: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp + 0xc], xmm0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_005cf894: }
	__asm { neg edx }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { not esi }
	__asm { add esi, eax }
	__asm { not edi }
	__asm { adc edi, ebx }
	__asm { mov dword ptr [ebp - 0x2c], edx }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { jmp L_005cf8c5 }
	__asm { L_005cf8b1: }
	__asm { movq xmm0, qword ptr [ebp - 0x1c] }
	__asm { movq qword ptr [ebp - 0x2c], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x14] }
	__asm { movq qword ptr [ebp - 0x24], xmm0 }
	__asm { L_005cf8c5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { pop edi }
	__asm { movq xmm0, qword ptr [ecx] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 8] }
	__asm { pop esi }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005d56e0();
// FUNCTION: ROBLOXSTUDIO 0x005cf8f0
extern "C" __declspec(naked) void asm_005cf8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { jg L_005cf916 }
	__asm { jl L_005cf90b }
	__asm { test edx, edx }
	__asm { jae L_005cf916 }
	__asm { L_005cf90b: }
	__asm { neg edx }
	__asm { adc eax, 0 }
	__asm { mov bl, 1 }
	__asm { neg eax }
	__asm { jmp L_005cf918 }
	__asm { L_005cf916: }
	__asm { xor bl, bl }
	__asm { L_005cf918: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test esi, esi }
	__asm { jg L_005cf934 }
	__asm { jl L_005cf928 }
	__asm { test ecx, ecx }
	__asm { jae L_005cf934 }
	__asm { L_005cf928: }
	__asm { test bl, bl }
	__asm { sete bl }
	__asm { neg ecx }
	__asm { adc esi, 0 }
	__asm { neg esi }
	__asm { L_005cf934: }
	__asm { push esi }
	__asm { push ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { lea edx, [ebp - 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_005d56e0 }
	__asm { add esp, 0x10 }
	__asm { test bl, bl }
	__asm { je L_005cf98e }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edx }
	__asm { or eax, ecx }
	__asm { jne L_005cf95d }
	__asm { lea esi, [eax + 1] }
	__asm { xor ebx, ebx }
	__asm { jmp L_005cf96b }
	__asm { L_005cf95d: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp + 0x10], xmm0 }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_005cf96b: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { neg edx }
	__asm { adc ecx, 0 }
	__asm { neg ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { not ecx }
	__asm { add ecx, esi }
	__asm { not eax }
	__asm { adc eax, ebx }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_005cf9a2 }
	__asm { L_005cf98e: }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { movq qword ptr [ebp - 0x20], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 8] }
	__asm { movq qword ptr [ebp - 0x18], xmm0 }
	__asm { L_005cf9a2: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [edi], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [edi + 8], xmm0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380e4[];
extern "C" char g_012b55c0[];
extern "C" void fn_005741a0();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x005d1fc0
extern "C" __declspec(naked) void asm_005d1fc0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov edx, ecx }
	__asm { movd xmm0, dword ptr [edi + 0x2c] }
	__asm { mov esi, dword ptr [edx + 0x6c] }
	__asm { mov ecx, dword ptr [edx + 0x70] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { movaps xmm5, xmmword ptr [edx] }
	__asm { movss dword ptr [ebp + esi*4 - 0x20], xmm0 }
	__asm { movd xmm0, dword ptr [edi + 0x30] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { shl ecx, 2 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp + ecx - 0x20], xmm0 }
	__asm { movd xmm0, dword ptr [edi + 0x34] }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { movaps xmm6, xmm5 }
	__asm { movss dword ptr [ebp + eax*4 - 0x20], xmm0 }
	__asm { mulps xmm6, xmmword ptr [ebp - 0x20] }
	__asm { movd xmm0, dword ptr [edi + 0x1c] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { movaps xmm3, xmm6 }
	__asm { movss dword ptr [ebp + esi*4 - 0x20], xmm0 }
	__asm { movd xmm0, dword ptr [edi + 0x20] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { movaps xmm2, xmm6 }
	__asm { movss dword ptr [ebp + ecx - 0x20], xmm0 }
	__asm { movd xmm0, dword ptr [edi + 0x24] }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { shufps xmm3, xmm6, 0xaa }
	__asm { movss dword ptr [ebp + eax*4 - 0x20], xmm0 }
	__asm { mulps xmm5, xmmword ptr [ebp - 0x20] }
	__asm { shufps xmm2, xmm6, 0x55 }
	__asm { movaps xmm0, xmm2 }
	__asm { movaps xmm7, xmm3 }
	__asm { movaps xmm4, xmm5 }
	__asm { movaps xmm1, xmm5 }
	__asm { shufps xmm1, xmm5, 0xaa }
	__asm { shufps xmm4, xmm5, 0x55 }
	__asm { mulss xmm0, xmm1 }
	__asm { movaps xmmword ptr [ebp - 0x60], xmm5 }
	__asm { mulss xmm7, xmm4 }
	__asm { movaps xmm5, xmm6 }
	__asm { mulss xmm5, xmm1 }
	__asm { movaps xmm1, xmmword ptr [ebp - 0x60] }
	__asm { subss xmm7, xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm2 }
	__asm { subss xmm5, xmm0 }
	__asm { mulss xmm6, xmm4 }
	__asm { movss dword ptr [ebp - 0x20], xmm7 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { subss xmm1, xmm6 }
	__asm { movss dword ptr [ebp - 0x1c], xmm5 }
	__asm { mulss xmm5, xmm5 }
	__asm { push ecx }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { movdqa xmm0, xmmword ptr [ebp - 0x20] }
	__asm { movdqa xmmword ptr [ebp - 0x20], xmm0 }
	__asm { movaps xmm0, xmm7 }
	__asm { mulss xmm0, xmm7 }
	__asm { mulss xmm1, xmm1 }
	__asm { addss xmm5, xmm0 }
	__asm { movss dword ptr [ebp - 0x40], xmm7 }
	__asm { addss xmm5, xmm1 }
	__asm { movss dword ptr [esp], xmm5 }
	__asm { call fn_005741a0 }
	__asm { fstp dword ptr [ebp - 0x44] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { divss xmm1, dword ptr [ebp - 0x44] }
	__asm { movss xmm0, dword ptr [ebp - 0x40] }
	__asm { mulss xmm0, xmm1 }
	__asm { add esp, 4 }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mulss xmm0, xmm1 }
	__asm { pop edi }
	__asm { xor ecx, ebp }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x20] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x18] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop esi }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005d56e0();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x005d5780
extern "C" __declspec(naked) void asm_005d5780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x74 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x4c], edx }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { lea edx, [ebp - 0x40] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_005d56e0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ebx, dword ptr [ebp + 0x20] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { lea edx, [ebp - 0x58] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_005d56e0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { lea edx, [ebp - 0x68] }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { call fn_005d56e0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_005d56e0 }
	__asm { mov esi, dword ptr [ebp - 0x60] }
	__asm { mov edx, dword ptr [ebp - 0x5c] }
	__asm { add esp, 0x40 }
	__asm { mov ecx, esi }
	__asm { add ecx, dword ptr [ebp - 0x70] }
	__asm { adc edx, dword ptr [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { cmp edx, dword ptr [ebp - 0x5c] }
	__asm { ja L_005d581b }
	__asm { jb L_005d5812 }
	__asm { cmp ecx, esi }
	__asm { jae L_005d581b }
	__asm { L_005d5812: }
	__asm { mov esi, 1 }
	__asm { xor edi, edi }
	__asm { jmp L_005d5829 }
	__asm { L_005d581b: }
	__asm { xorps xmm0, xmm0 }
	__asm { movlpd qword ptr [ebp - 0x30], xmm0 }
	__asm { mov edi, dword ptr [ebp - 0x2c] }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { L_005d5829: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov ebx, edx }
	__asm { add ebx, dword ptr [ebp - 0x58] }
	__asm { adc ecx, dword ptr [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { cmp ecx, dword ptr [ebp - 0x14] }
	__asm { ja L_005d5859 }
	__asm { jb L_005d5845 }
	__asm { cmp ebx, edx }
	__asm { jae L_005d5859 }
	__asm { L_005d5845: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { add ecx, 1 }
	__asm { adc edx, 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { jmp L_005d585c }
	__asm { L_005d5859: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_005d585c: }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov edx, dword ptr [ebp - 0x64] }
	__asm { add eax, ebx }
	__asm { adc edx, dword ptr [ebp - 0x20] }
	__asm { cmp edx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x2c], edx }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { ja L_005d5884 }
	__asm { jb L_005d5878 }
	__asm { cmp eax, ebx }
	__asm { jae L_005d5884 }
	__asm { L_005d5878: }
	__asm { add ecx, 1 }
	__asm { adc edx, 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { L_005d5884: }
	__asm { add esi, eax }
	__asm { adc edi, dword ptr [ebp - 0x2c] }
	__asm { cmp edi, dword ptr [ebp - 0x2c] }
	__asm { ja L_005d58a0 }
	__asm { jb L_005d5894 }
	__asm { cmp esi, eax }
	__asm { jae L_005d58a0 }
	__asm { L_005d5894: }
	__asm { add ecx, 1 }
	__asm { adc edx, 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { L_005d58a0: }
	__asm { mov ebx, dword ptr [ebp - 0x40] }
	__asm { add ebx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { adc eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { cmp eax, dword ptr [ebp - 0x24] }
	__asm { ja L_005d58df }
	__asm { jb L_005d58c4 }
	__asm { cmp ebx, dword ptr [ebp - 0x1c] }
	__asm { jae L_005d58df }
	__asm { L_005d58c4: }
	__asm { add esi, 1 }
	__asm { adc edi, 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { or esi, edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { jne L_005d58df }
	__asm { add ecx, 1 }
	__asm { adc edx, esi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { L_005d58df: }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { movq xmm0, qword ptr [ebp - 0x48] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x40] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { movq xmm0, qword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x10] }
	__asm { pop esi }
	__asm { xor ecx, ebp }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop ebx }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e103ac[];
extern "C" char g_00e103b8[];
extern "C" char g_00e1366c[];
extern "C" char g_00e136a4[];
extern "C" char g_00e136c8[];
extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_00423a00();
extern "C" void fn_00424610();
// FUNCTION: ROBLOXSTUDIO 0x005dccc0
extern "C" __declspec(naked) void asm_005dccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e14d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xbc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { jne L_005dcd1e }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], al }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dcd1e: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e1366c] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, eax }
	__asm { jne L_005dcd5e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xf12f2d }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dcd5e: }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { mov dword ptr [ebp - 0xc4], 0x1004fbc }
	__asm { mov dword ptr [ebp - 0xb4], 0x1004fb4 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xac] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 2 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [ebp - 0xc4] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc4], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xc4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xc8], eax }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xac], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x74], 0 }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { push 0 }
	__asm { push 4 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xb4] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e103ac] }
	__asm { push 0 }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xb4] }
	__asm { call dword ptr [g_00e103ac] }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0xb4] }
	__asm { push edi }
	__asm { call dword ptr [g_00e103ac] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { call fn_00424610 }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { call fn_00423a00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { call dword ptr [g_00e136c8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e136a4] }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00825550();
// FUNCTION: ROBLOXSTUDIO 0x005dd4c0
extern "C" __declspec(naked) void asm_005dd4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 2 }
	__asm { push edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_005dd517 }
	__asm { lea esi, [edx + esi*4] }
	__asm { cmp esi, edx }
	__asm { jne L_005dd4ec }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dd4ec: }
	__asm { cmp esi, eax }
	__asm { je L_005dd54b }
	__asm { mov ecx, eax }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { lea edi, [ecx*4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dd517: }
	__asm { jae L_005dd54b }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00825550 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { sar eax, 2 }
	__asm { sub ecx, eax }
	__asm { je L_005dd539 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_005dd539: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 2 }
	__asm { sub esi, eax }
	__asm { lea eax, [ecx + esi*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_005dd54b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)
