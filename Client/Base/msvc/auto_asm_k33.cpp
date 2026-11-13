// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00426f50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a41b40
extern "C" __declspec(naked) void asm_00a41b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47998 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a41ba0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea7e54 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00a41ba2 }
	__asm { L_00a41ba0: }
	__asm { xor eax, eax }
	__asm { L_00a41ba2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a41bb9 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00426f50 }
	__asm { L_00a41bb9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00a41be0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00426f50 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00a41be0: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42c00
extern "C" __declspec(naked) void asm_00a42c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { je L_00a42c78 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42c78 }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42c70 }
	__asm { call fn_00a35d10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42c70: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42c78: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128d3b4[];
extern "C" void fn_00788700();
extern "C" void fn_007d5710();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42c80
extern "C" __declspec(naked) void asm_00a42c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42cf8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42cf8 }
	__asm { push dword ptr [g_0128d3b4] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42cf0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5710 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_00788700 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42cf0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42cf8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_007cfca0();
extern "C" void fn_007d6030();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42d00
extern "C" __declspec(naked) void asm_00a42d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42d78 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42d78 }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42d70 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d6030 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cfca0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42d70: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42d78: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_007cfe20();
extern "C" void fn_007d57f0();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42d80
extern "C" __declspec(naked) void asm_00a42d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42df8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42df8 }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42df0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d57f0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cfe20 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42df0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42df8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead4[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00a41bf0();
extern "C" void fn_00b092e0();
// FUNCTION: ROBLOXSTUDIO 0x00a42e00
extern "C" __declspec(naked) void asm_00a42e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42e78 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42e78 }
	__asm { push dword ptr [g_0124ead4] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42e70 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_00b092e0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_00a41bf0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42e70: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42e78: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_0040e3e0();
extern "C" void fn_007d5860();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42e80
extern "C" __declspec(naked) void asm_00a42e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42ef8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42ef8 }
	__asm { push dword ptr [g_0124eb28] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42ef0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5860 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040e3e0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42ef0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42ef8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_007b78e0();
extern "C" void fn_0088bd20();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42f00
extern "C" __declspec(naked) void asm_00a42f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42f78 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42f78 }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42f70 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_0088bd20 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007b78e0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42f70: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42f78: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_007cfeb0();
extern "C" void fn_007d5940();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42f80
extern "C" __declspec(naked) void asm_00a42f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a42ff8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a42ff8 }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a42ff0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5940 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cfeb0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42ff0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a42ff8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_007cff40();
extern "C" void fn_007d60a0();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43000
extern "C" __declspec(naked) void asm_00a43000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a43078 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a43078 }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a43070 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d60a0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cff40 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a43070: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a43078: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_007d0020();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00a559f0();
// FUNCTION: ROBLOXSTUDIO 0x00a43080
extern "C" __declspec(naked) void asm_00a43080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a430f8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a430f8 }
	__asm { push dword ptr [g_0124ead8] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a430f0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_00a559f0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0020 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a430f0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a430f8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_007d0130();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00a56540();
// FUNCTION: ROBLOXSTUDIO 0x00a43100
extern "C" __declspec(naked) void asm_00a43100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a43178 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a43178 }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a43170 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_00a56540 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0130 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a43170: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a43178: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_007d0280();
extern "C" void fn_007d5a20();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43180
extern "C" __declspec(naked) void asm_00a43180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a431f8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a431f8 }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a431f0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5a20 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0280 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a431f0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a431f8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_007d0340();
extern "C" void fn_007d5a90();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43200
extern "C" __declspec(naked) void asm_00a43200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a43278 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a43278 }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a43270 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5a90 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0340 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a43270: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a43278: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb20[];
extern "C" void fn_007d03e0();
extern "C" void fn_007d5b00();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43280
extern "C" __declspec(naked) void asm_00a43280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a432f8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a432f8 }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a432f0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5b00 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d03e0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a432f0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a432f8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_007d0480();
extern "C" void fn_007d5b70();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43300
extern "C" __declspec(naked) void asm_00a43300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a43378 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a43378 }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a43370 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5b70 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0480 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a43370: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a43378: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43380
extern "C" __declspec(naked) void asm_00a43380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a433f8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a433f8 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a433f0 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5be0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0510 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a433f0: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a433f8: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_007d05c0();
extern "C" void fn_007d5c50();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a43400
extern "C" __declspec(naked) void asm_00a43400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a43478 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a43478 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a43470 }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { call fn_007d5c50 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d05c0 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a43470: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a43478: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a34e50();
extern "C" void fn_00a35950();
extern "C" void fn_00a43960();
// FUNCTION: ROBLOXSTUDIO 0x00a437e0
extern "C" __declspec(naked) void asm_00a437e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { mov eax, 0x78787879 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push 0 }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a34e50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { xor esi, esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_00a43881 }
	__asm { L_00a43815: }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00a43960 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { test cl, cl }
	__asm { je L_00a43866 }
	__asm { cmp eax, 1 }
	__asm { je L_00a43866 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a43855 }
	__asm { push 0xd6 }
	__asm { push 0xea7c58 }
	__asm { push 0xe3d790 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a43866 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a43855: }
	__asm { movzx eax, cl }
	__asm { push 0xea7d78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a43866: }
	__asm { inc esi }
	__asm { push esi }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35950 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x44 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00a43815 }
	__asm { L_00a43881: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e204[];
extern "C" void fn_00421060();
extern "C" void fn_004226b0();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a43890
extern "C" __declspec(naked) void asm_00a43890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd479e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a4390c }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00a4390c }
	__asm { lea eax, [ecx + 5] }
	__asm { test eax, eax }
	__asm { je L_00a438eb }
	__asm { add eax, -5 }
	__asm { jmp L_00a438ed }
	__asm { L_00a438eb: }
	__asm { xor eax, eax }
	__asm { L_00a438ed: }
	__asm { cmp dword ptr [eax - 8], 0 }
	__asm { je L_00a4390c }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a43901 }
	__asm { add eax, 5 }
	__asm { jmp L_00a43903 }
	__asm { L_00a43901: }
	__asm { xor eax, eax }
	__asm { L_00a43903: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a4390c: }
	__asm { push dword ptr [g_0128e204] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a43946 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a43946: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00411990();
extern "C" void fn_00a35150();
extern "C" void fn_00a35fd0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a3aca0();
extern "C" void fn_00a441a0();
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x00a45290
extern "C" __declspec(naked) void asm_00a45290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { add esi, dword ptr [edi + 0x48] }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp esi, eax }
	__asm { jle L_00a452b6 }
	__asm { L_00a452ad: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a452b6: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 3 }
	__asm { je L_00a45303 }
	__asm { cmp eax, 7 }
	__asm { jne L_00a452ad }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a3aca0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a452ad }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call fn_00a441a0 }
	__asm { test al, al }
	__asm { jne L_00a452ad }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a45303: }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a35fd0 }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ecx + 0x20] }
	__asm { mov esi, dword ptr [ecx + 0x1c] }
	__asm { cmp esi, edi }
	__asm { je L_00a4533e }
	__asm { L_00a45328: }
	__asm { push ebx }
	__asm { push dword ptr [esi] }
	__asm { call fn_00411990 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00a4533e }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_00a45328 }
	__asm { L_00a4533e: }
	__asm { xor eax, eax }
	__asm { cmp esi, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e105d4[];
extern "C" char g_00e106b8[];
extern "C" char g_00e106dc[];
extern "C" char g_010381d0[];
// FUNCTION: ROBLOXSTUDIO 0x00a45b60
extern "C" __declspec(naked) void asm_00a45b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e106dc] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { fstp qword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { jne L_00a45b8b }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a45b8b: }
	__asm { mov cl, byte ptr [eax] }
	__asm { cmp cl, 0x78 }
	__asm { je L_00a45b97 }
	__asm { cmp cl, 0x58 }
	__asm { jne L_00a45bbc }
	__asm { L_00a45b97: }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e106b8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { fild dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jns L_00a45bb7 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_00a45bb7: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { fstp qword ptr [edi] }
	__asm { L_00a45bbc: }
	__asm { mov al, byte ptr [eax] }
	__asm { test al, al }
	__asm { jne L_00a45bcd }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a45bcd: }
	__asm { mov esi, dword ptr [g_00e105d4] }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a45bf4 }
	__asm { L_00a45be0: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a45be0 }
	__asm { L_00a45bf4: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx], al }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00a45dd0
extern "C" __declspec(naked) void asm_00a45dd0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a45e1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a45e1b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a45e6e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xea8014 }
	__asm { mov dword ptr [esi + 8], 0xea8024 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xea802c }
	__asm { mov dword ptr [esi + 8], 0xea803c }
	__asm { jmp L_00a45e70 }
	__asm { L_00a45e6e: }
	__asm { xor esi, esi }
	__asm { L_00a45e70: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a45e8d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a45e8d: }
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
extern "C" void fn_008d9f20();
// FUNCTION: ROBLOXSTUDIO 0x00a46580
extern "C" __declspec(naked) void asm_00a46580()
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
	__asm { je L_00a465cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a465cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a46612 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe729d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xea81bc }
	__asm { mov dword ptr [esi + 8], 0xea81cc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xea81d4 }
	__asm { mov dword ptr [esi + 8], 0xea81e4 }
	__asm { jmp L_00a46614 }
	__asm { L_00a46612: }
	__asm { xor esi, esi }
	__asm { L_00a46614: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008d9f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a46631 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a46631: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00663f30();
extern "C" void fn_00666390();
extern "C" void fn_0090c590();
extern "C" void fn_00a4a760();
// FUNCTION: ROBLOXSTUDIO 0x00a48cb0
extern "C" __declspec(naked) void asm_00a48cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movsx esi, word ptr [ecx + 4] }
	__asm { movsx eax, word ptr [ecx + 2] }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movsx eax, word ptr [ecx] }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_00a48cda }
	__asm { inc eax }
	__asm { jmp L_00a48cdc }
	__asm { L_00a48cda: }
	__asm { xor eax, eax }
	__asm { L_00a48cdc: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00663f30 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00a48d51 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00666390 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a48d17 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { L_00a48d17: }
	__asm { mov byte ptr [ebx + 9], 1 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jbe L_00a48d43 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { sub ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add eax, dword ptr [edi + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_0090c590 }
	__asm { L_00a48d43: }
	__asm { push esi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a4a760 }
	__asm { pop ebx }
	__asm { L_00a48d51: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00a48cb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a48d60
extern "C" __declspec(naked) void asm_00a48d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00a48d88 }
	__asm { inc eax }
	__asm { jmp L_00a48d8a }
	__asm { L_00a48d88: }
	__asm { xor eax, eax }
	__asm { L_00a48d8a: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { call fn_00a48cb0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add eax, 6 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, ecx }
	__asm { je L_00a48de3 }
	__asm { L_00a48dc5: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a48cb0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add eax, 6 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, ecx }
	__asm { jne L_00a48dc5 }
	__asm { L_00a48de3: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00a48df4 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a48df4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01307b18[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00a49160
extern "C" __declspec(naked) void asm_00a49160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47d08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { mov word ptr [esi], di }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { cmp byte ptr [g_01307b18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a491e1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x1307b14 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xa50c90 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_01307b18], 1 }
	__asm { L_00a491e1: }
	__asm { mov ecx, 0xffff }
	__asm { movzx eax, cx }
	__asm { mov word ptr [esi], di }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { shl eax, 0x10 }
	__asm { or ecx, eax }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00693f50();
extern "C" void fn_00794900();
extern "C" void fn_0084f520();
extern "C" void fn_00a49230();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a496c0
extern "C" __declspec(naked) void asm_00a496c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47dec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xea84d8 }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_00a49704 }
	__asm { mov ecx, edi }
	__asm { call fn_00a49230 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a49704: }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00a49715 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a49715: }
	__asm { mov ecx, dword ptr [esi + 0x60] }
	__asm { test ecx, ecx }
	__asm { je L_00a4974c }
	__asm { cmp dword ptr [esi + 0x54], 0 }
	__asm { je L_00a49733 }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { call fn_00794900 }
	__asm { L_00a49733: }
	__asm { push dword ptr [esi + 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { L_00a4974c: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00a49783 }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { je L_00a4976a }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_0084f520 }
	__asm { L_00a4976a: }
	__asm { push dword ptr [esi + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { L_00a49783: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00693f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a497b0
extern "C" __declspec(naked) void asm_00a497b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47ce8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a49864 }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00a4981f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4980a }
	__asm { push 0x117 }
	__asm { push 0xe9c4c0 }
	__asm { push 0xe3f88c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4981f }
	__asm { L_00a4980a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea9420 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4981f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a49864 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { je L_00a49864 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4984f }
	__asm { push 0x118 }
	__asm { push 0xe9c4c0 }
	__asm { push 0xe3f91c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a49864 }
	__asm { L_00a4984f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea9498 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a49864: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0xfffffffe }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov word ptr [esi], ax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a4a760
extern "C" __declspec(naked) void asm_00a4a760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00a4a7bd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00a4a7b0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00a4a7b0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00a4a7c8 }
	__asm { L_00a4a7bd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a4a7c8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00a4a7de }
	__asm { add ecx, -8 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a4a7de: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a49160();
extern "C" void fn_00a49b30();
// FUNCTION: ROBLOXSTUDIO 0x00a4c4e0
extern "C" __declspec(naked) void asm_00a4c4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47f0b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov ebx, ecx }
	__asm { call fn_00a49b30 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a4c521 }
	__asm { mov ecx, eax }
	__asm { call fn_00a49160 }
	__asm { mov edi, eax }
	__asm { jmp L_00a4c523 }
	__asm { L_00a4c521: }
	__asm { xor edi, edi }
	__asm { L_00a4c523: }
	__asm { inc dword ptr [ebx + 0x24] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov word ptr [edi], dx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [edx + 4] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ebx + eax*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + esi*8 + 4] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + esi*8 + 4], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a08c70();
// FUNCTION: ROBLOXSTUDIO 0x00a4cea0
extern "C" __declspec(naked) void asm_00a4cea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_00a4cef2 }
	__asm { cmp dword ptr [edi + 0x4c], -1 }
	__asm { jge L_00a4cef2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4ceda }
	__asm { push 0x37 }
	__asm { push 0xe905c8 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4ceef }
	__asm { L_00a4ceda: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea84e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4ceef: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00a4cef2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [edi + 0x4c] }
	__asm { je L_00a4cf4f }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { mov edx, dword ptr [ecx + eax*4 + 0x34] }
	__asm { sub edx, dword ptr [ecx + eax*4 + 0x30] }
	__asm { mov eax, 0x10000 }
	__asm { mov ecx, ebx }
	__asm { sar eax, cl }
	__asm { sar edx, 3 }
	__asm { cmp eax, edx }
	__asm { je L_00a4cf4f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4cf3a }
	__asm { push 0xe9 }
	__asm { push 0xea9168 }
	__asm { push 0xe400fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4cf4f }
	__asm { L_00a4cf3a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea9908 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4cf4f: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00a08c70 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { lea ecx, [ebx + ebx*2] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [eax + ecx*4 + 0x30] }
	__asm { mov eax, dword ptr [eax + edx*8] }
	__asm { test eax, eax }
	__asm { jne L_00a4cf78 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a4cf78: }
	__asm { cmp dword ptr [eax + 0x14], edi }
	__asm { jne L_00a4cf94 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { jne L_00a4cf94 }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jne L_00a4cf94 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { je L_00a4cf9b }
	__asm { L_00a4cf94: }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { jne L_00a4cf78 }
	__asm { L_00a4cf9b: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a4cfb0
extern "C" __declspec(naked) void asm_00a4cfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_00a4d03b }
	__asm { cmp word ptr [esi], -1 }
	__asm { jge L_00a4cfff }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4cfea }
	__asm { push 0x2b }
	__asm { push 0xe9c4c0 }
	__asm { push 0xe3f7f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4cfff }
	__asm { L_00a4cfea: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea8560 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4cfff: }
	__asm { cmp word ptr [esi], 0 }
	__asm { je L_00a4d03b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4d026 }
	__asm { push 0x111 }
	__asm { push 0xea9168 }
	__asm { push 0xe40014 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4d03b }
	__asm { L_00a4d026: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeaa0b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4d03b: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + ecx*8] }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a4d06a }
	__asm { L_00a4d054: }
	__asm { cmp dword ptr [eax + 8], edx }
	__asm { jne L_00a4d063 }
	__asm { cmp dword ptr [eax + 0xc], edi }
	__asm { jne L_00a4d063 }
	__asm { cmp dword ptr [eax + 0x10], ebx }
	__asm { je L_00a4d075 }
	__asm { L_00a4d063: }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { jne L_00a4d054 }
	__asm { L_00a4d06a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a4d075: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013079e9[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_00995860();
extern "C" void fn_00997d00();
extern "C" void fn_00a4d670();
// FUNCTION: ROBLOXSTUDIO 0x00a4ddb0
extern "C" __declspec(naked) void asm_00a4ddb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_013079e9], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { jne L_00a4de14 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call fn_00995860 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a4de14 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { call fn_00997d00 }
	__asm { test al, al }
	__asm { jne L_00a4de14 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4ddff }
	__asm { push 0x139 }
	__asm { push 0xea88a8 }
	__asm { push 0xe6b11c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4de14 }
	__asm { L_00a4ddff: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea89e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4de14: }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp + 0x27] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a4d670 }
	__asm { cmp byte ptr [ebp + 0x27], 0 }
	__asm { mov esi, eax }
	__asm { je L_00a4de45 }
	__asm { xor esi, esi }
	__asm { jmp L_00a4de49 }
	__asm { L_00a4de45: }
	__asm { test esi, esi }
	__asm { jne L_00a4de61 }
	__asm { L_00a4de49: }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00a4de61: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0084f520();
extern "C" void fn_00a48b10();
extern "C" void fn_00a4ea30();
// FUNCTION: ROBLOXSTUDIO 0x00a4e530
extern "C" __declspec(naked) void asm_00a4e530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { lea esi, [edi + 0x30] }
	__asm { je L_00a4e571 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0084f520 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { cmp eax, ecx }
	__asm { je L_00a4e571 }
	__asm { L_00a4e564: }
	__asm { mov dword ptr [eax], 0 }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00a4e564 }
	__asm { L_00a4e571: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00a4ea30 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { je L_00a4e5a2 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00a4e5a2 }
	__asm { add eax, -4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jmp L_00a4e5a9 }
	__asm { L_00a4e5a2: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00a4e5a9: }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], 0xa49f60 }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_00a48b10 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0084f520();
extern "C" void fn_00a48b10();
extern "C" void fn_00a4e690();
// FUNCTION: ROBLOXSTUDIO 0x00a4e5e0
extern "C" __declspec(naked) void asm_00a4e5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { lea esi, [edi + 0x30] }
	__asm { je L_00a4e621 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0084f520 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { cmp eax, ecx }
	__asm { je L_00a4e621 }
	__asm { L_00a4e614: }
	__asm { mov dword ptr [eax], 0 }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00a4e614 }
	__asm { L_00a4e621: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00a4e690 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { je L_00a4e652 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00a4e652 }
	__asm { add eax, -4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jmp L_00a4e659 }
	__asm { L_00a4e652: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00a4e659: }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], 0xa49f60 }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_00a48b10 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a4f470
extern "C" __declspec(naked) void asm_00a4f470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00a4f4fb }
	__asm { cmp dword ptr [edi + 0x4c], -1 }
	__asm { jge L_00a4f4bd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4f4a8 }
	__asm { push 0x37 }
	__asm { push 0xe905c8 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4f4bd }
	__asm { L_00a4f4a8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea84e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4f4bd: }
	__asm { movsx eax, word ptr [esi] }
	__asm { cmp eax, dword ptr [edi + 0x4c] }
	__asm { je L_00a4f4fb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4f4e6 }
	__asm { push 0xcb }
	__asm { push 0xea9168 }
	__asm { push 0xe401d4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4f4fb }
	__asm { L_00a4f4e6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeaa288 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4f4fb: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0099c7f0();
extern "C" void fn_0099cca0();
extern "C" void fn_0099d1b0();
extern "C" void fn_00b49710();
extern "C" void fn_00b5b980();
// FUNCTION: ROBLOXSTUDIO 0x00a4f520
extern "C" __declspec(naked) void asm_00a4f520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0099c7f0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00a4f5a2 }
	__asm { mov ecx, edi }
	__asm { call fn_0099cca0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00a4f5a2 }
	__asm { L_00a4f546: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { cmp edi, ecx }
	__asm { jne L_00a4f550 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { L_00a4f550: }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00a4f594 }
	__asm { cmp eax, ebx }
	__asm { je L_00a4f594 }
	__asm { mov ecx, eax }
	__asm { call fn_00b5b980 }
	__asm { mov ecx, dword ptr [eax + 0x70] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 0x74] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { je L_00a4f594 }
	__asm { mov eax, dword ptr [esi] }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00a4f5ad }
	__asm { L_00a4f594: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0099d1b0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00a4f546 }
	__asm { L_00a4f5a2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00a4f5ad: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_01307a19[];
extern "C" void fn_008ff0a0();
extern "C" void fn_00a0f490();
extern "C" void fn_00a4f670();
extern "C" void fn_00b5cfb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a4f890
extern "C" __declspec(naked) void asm_00a4f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { movzx eax, byte ptr [g_01307a19] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0f490 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a4f670 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push ecx }
	__asm { push dword ptr [ecx] }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov al, bl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a490b0();
extern "C" void fn_00a49ac0();
extern "C" void fn_00a4c4e0();
extern "C" void fn_00a4d080();
// FUNCTION: ROBLOXSTUDIO 0x00a4fbe0
extern "C" __declspec(naked) void asm_00a4fbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4805b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_00a49ac0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a4fc33 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00a490b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { jmp L_00a4fc35 }
	__asm { L_00a4fc33: }
	__asm { xor esi, esi }
	__asm { L_00a4fc35: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { jne L_00a4fc45 }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { jmp L_00a4fcb6 }
	__asm { L_00a4fc45: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { call fn_00a4d080 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { test eax, eax }
	__asm { jne L_00a4fc67 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00a4c4e0 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { L_00a4fc67: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { inc dword ptr [eax + 0x28] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00a4fcb6 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { movsx eax, word ptr [eax] }
	__asm { cmp edi, eax }
	__asm { je L_00a4fcb6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a4fca5 }
	__asm { push 0x71 }
	__asm { push 0xea9168 }
	__asm { push 0xe3fd48 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a4fcb6 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a4fca5: }
	__asm { movzx eax, cl }
	__asm { push 0xea9e48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a4fcb6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00997800();
extern "C" void fn_009978c0();
extern "C" void fn_00a4c120();
extern "C" void fn_00b5b600();
extern "C" void fn_00b5bd60();
extern "C" void fn_00b5c980();
// FUNCTION: ROBLOXSTUDIO 0x00a4ff60
extern "C" __declspec(naked) void asm_00a4ff60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00b5bd60 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { call fn_00b5bd60 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { cmp esi, edi }
	__asm { je L_00a4fff6 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { je L_00a4ff99 }
	__asm { mov ecx, edi }
	__asm { call fn_00b5b600 }
	__asm { test al, al }
	__asm { jne L_00a4fff6 }
	__asm { L_00a4ff99: }
	__asm { push esi }
	__asm { call fn_00b5c980 }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00b5c980 }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { add esp, 8 }
	__asm { mov edi, eax }
	__asm { call fn_00997800 }
	__asm { cmp dword ptr [eax + 0x10], 3 }
	__asm { jne L_00a4ffdc }
	__asm { mov ecx, dword ptr [esi + 0x70] }
	__asm { test ecx, ecx }
	__asm { je L_00a4ffdc }
	__asm { cmp ecx, 1 }
	__asm { je L_00a4ffdc }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { test eax, eax }
	__asm { je L_00a4ffdc }
	__asm { cmp eax, 1 }
	__asm { je L_00a4ffdc }
	__asm { cmp ecx, 4 }
	__asm { je L_00a4ffdc }
	__asm { cmp eax, 4 }
	__asm { jne L_00a4fff6 }
	__asm { L_00a4ffdc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a4c120 }
	__asm { test eax, eax }
	__asm { je L_00a4fff6 }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { push eax }
	__asm { call fn_009978c0 }
	__asm { L_00a4fff6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00619bb0();
extern "C" void fn_00694df0();
extern "C" void fn_0099ce30();
extern "C" void fn_00a50550();
// FUNCTION: ROBLOXSTUDIO 0x00a50000
extern "C" __declspec(naked) void asm_00a50000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_0099ce30 }
	__asm { cmp eax, 0xa }
	__asm { je L_00a500a4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { call fn_00a50550 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { cmp eax, dword ptr [esi + 0x7c] }
	__asm { je L_00a500a4 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00619bb0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00619bb0 }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { call fn_00694df0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x48] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [esi + 0x7c] }
	__asm { sub eax, dword ptr [esi + 0x78] }
	__asm { xor edi, edi }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_00a500a3 }
	__asm { L_00a50086: }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x7c] }
	__asm { sub eax, dword ptr [esi + 0x78] }
	__asm { inc edi }
	__asm { sar eax, 2 }
	__asm { cmp edi, eax }
	__asm { jb L_00a50086 }
	__asm { L_00a500a3: }
	__asm { pop edi }
	__asm { L_00a500a4: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x00a51170
extern "C" __declspec(naked) void asm_00a51170()
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
	__asm { je L_00a511bb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a511bb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a51202 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeaaa04 }
	__asm { mov dword ptr [esi + 8], 0xeaaa14 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xeaaa1c }
	__asm { mov dword ptr [esi + 8], 0xeaaa2c }
	__asm { jmp L_00a51204 }
	__asm { L_00a51202: }
	__asm { xor esi, esi }
	__asm { L_00a51204: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a51221 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a51221: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
extern "C" void fn_00d08530();
extern "C" void fn_00d08dc0();
// FUNCTION: ROBLOXSTUDIO 0x00a51600
extern "C" __declspec(naked) void asm_00a51600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4808e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx], 0xeaa3f0 }
	__asm { mov ecx, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00a51646 }
	__asm { cmp byte ptr [ebx + 0x19], 0 }
	__asm { je L_00a51646 }
	__asm { mov ecx, dword ptr [ecx + 0x178] }
	__asm { push ebx }
	__asm { call fn_00d08dc0 }
	__asm { L_00a51646: }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { sub eax, dword ptr [ebx + 0x2c] }
	__asm { push edi }
	__asm { sar eax, 2 }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { je L_00a51674 }
	__asm { L_00a51656: }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { test ecx, ecx }
	__asm { je L_00a51666 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a51666: }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { sub eax, dword ptr [ebx + 0x2c] }
	__asm { inc edi }
	__asm { sar eax, 2 }
	__asm { cmp edi, eax }
	__asm { jb L_00a51656 }
	__asm { L_00a51674: }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov byte ptr [ebx + 0x1a], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00a516b9 }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x2c], 0 }
	__asm { mov dword ptr [ebx + 0x30], 0 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { L_00a516b9: }
	__asm { cmp dword ptr [ebx + 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a516ec }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebx + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x20], 0 }
	__asm { mov dword ptr [ebx + 0x24], 0 }
	__asm { mov dword ptr [ebx + 0x28], 0 }
	__asm { L_00a516ec: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00d08530 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b44[];
extern "C" char g_012eec3c[];
extern "C" void fn_00403540();
extern "C" void fn_007c92f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00a54850();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a54410
extern "C" __declspec(naked) void asm_00a54410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd483d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a54850 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xeaad1c }
	__asm { mov dword ptr [esi + 4], 0xeaada4 }
	__asm { mov dword ptr [esi + 0x18], 0xeaadac }
	__asm { mov dword ptr [esi + 0x1c], 0xeaadb8 }
	__asm { jb L_00a5449b }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5449b: }
	__asm { mov eax, dword ptr [g_012eec3c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test al, 1 }
	__asm { jne L_00a544ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eec3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeaaba8 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_007c92f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eeb10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a544ee: }
	__asm { mov dword ptr [esi + 0x28], 0x12eeb10 }
	__asm { inc dword ptr [g_012e4b44] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a5450c }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5450c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_006b47b0();
extern "C" void fn_006b6610();
extern "C" void fn_006b6660();
// FUNCTION: ROBLOXSTUDIO 0x00a54630
extern "C" __declspec(naked) void asm_00a54630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov edi, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00a54646 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00a54648 }
	__asm { L_00a54646: }
	__asm { mov ecx, esi }
	__asm { L_00a54648: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00a54656 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00a54658 }
	__asm { L_00a54656: }
	__asm { mov ecx, esi }
	__asm { L_00a54658: }
	__asm { cmp ecx, eax }
	__asm { je L_00a546a0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_006b6610 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov ebx, eax }
	__asm { test edx, edx }
	__asm { je L_00a54693 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 0x10 }
	__asm { jb L_00a54679 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00a5467b }
	__asm { L_00a54679: }
	__asm { mov ecx, esi }
	__asm { L_00a5467b: }
	__asm { cmp eax, 0x10 }
	__asm { jb L_00a54682 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a54682: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + edx] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { L_00a54693: }
	__asm { test ebx, ebx }
	__asm { je L_00a5469f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_006b6660 }
	__asm { L_00a5469f: }
	__asm { pop ebx }
	__asm { L_00a546a0: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00eaab94[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e3afc[];
extern "C" char g_012fcff8[];
extern "C" void fn_004038a0();
extern "C" void fn_006b9740();
extern "C" void fn_007b5bb0();
extern "C" void fn_007b6490();
extern "C" void fn_007c86b0();
extern "C" void fn_00a54790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a54850
extern "C" __declspec(naked) void asm_00a54850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4841e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a54790 }
	__asm { lea edi, [esi + 0x1c] }
	__asm { mov dword ptr [esi], 0xeaac6c }
	__asm { mov dword ptr [esi + 4], 0xeaacf4 }
	__asm { mov dword ptr [esi + 0x18], 0xeaacfc }
	__asm { mov dword ptr [edi], 0xeaad08 }
	__asm { mov word ptr [esi + 0x9c], 0 }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0xa0], 0 }
	__asm { call fn_007c86b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00a54901 }
	__asm { cmp byte ptr [g_012fcff8], 0 }
	__asm { je L_00a54901 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a548f0 }
	__asm { push 0x1a }
	__asm { push 0xeaaf24 }
	__asm { push 0xeaaf64 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a54901 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a548f0: }
	__asm { movzx eax, al }
	__asm { push 0xeaaf98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a54901: }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00eaab94], cl }
	__asm { mov eax, 0xa }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xeaab94 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_00a54955 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a54955: }
	__asm { mov ecx, dword ptr [g_012e3afc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_007b6490 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00a55920
extern "C" __declspec(naked) void asm_00a55920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c377c }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a559c9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00a559c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a559b4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a559c9 }
	__asm { L_00a559b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a559c9: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040c5b0();
extern "C" void fn_006b98f0();
extern "C" void fn_007db890();
extern "C" void fn_007e88f0();
extern "C" void fn_00a55d30();
extern "C" void fn_00a56270();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a55dd0
extern "C" __declspec(naked) void asm_00a55dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10524] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00a55e1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a55df2 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a55df7 }
	__asm { L_00a55df2: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a55df7: }
	__asm { cmp ecx, 0x11f0ae0 }
	__asm { je L_00a55e17 }
	__asm { test eax, eax }
	__asm { je L_00a55e07 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a55e0c }
	__asm { L_00a55e07: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a55e0c: }
	__asm { push 0x11f0ae0 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_00a55e1e }
	__asm { L_00a55e17: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_00a55e7f }
	__asm { L_00a55e1e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00a55e36 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_00a55e86 }
	__asm { L_00a55e36: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00a56270 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00a55e60 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a55e60: }
	__asm { test bl, bl }
	__asm { je L_00a55e86 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007db890 }
	__asm { call fn_007e88f0 }
	__asm { push esi }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00a55d30 }
	__asm { add esp, 4 }
	__asm { L_00a55e7f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a55e86: }
	__asm { call fn_007e88f0 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a55e99 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00a55e99: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00a55ea9 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a55ea9: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf13664 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a55ed0
extern "C" __declspec(naked) void asm_00a55ed0()
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
	__asm { push 0x11f0ae0 }
	__asm { mov edi, ecx }
	__asm { push 0xeab294 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59a18 }
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
	__asm { push 0x100a870 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a874 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a878 }
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

extern "C" void fn_00424410();
extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x00a56270
extern "C" __declspec(naked) void asm_00a56270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0x100a874 }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a56357 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 0x1010c70 }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a56357 }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push 0x1010c74 }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a56357 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0x100a878 }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a56349 }
	__asm { push 0 }
	__asm { push 0x1010c7c }
	__asm { mov ecx, esi }
	__asm { call fn_00424410 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a56349 }
	__asm { push 0 }
	__asm { push 0x1010c84 }
	__asm { mov ecx, esi }
	__asm { call fn_00424410 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a56349 }
	__asm { push 0 }
	__asm { push 0x100a870 }
	__asm { mov ecx, esi }
	__asm { call fn_00424410 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a5633b }
	__asm { push 0 }
	__asm { push 0x1010c8c }
	__asm { mov ecx, esi }
	__asm { call fn_00424410 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a5633b }
	__asm { push 0 }
	__asm { push 0x1010c94 }
	__asm { mov ecx, esi }
	__asm { call fn_00424410 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a5633b }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5633b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a56349: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 2 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a56357: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00a56470
extern "C" __declspec(naked) void asm_00a56470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c375c }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a56519 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00a56519 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a56504 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a56519 }
	__asm { L_00a56504: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a56519: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e63ac[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_008690c0();
extern "C" void fn_00a56d90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a565b0
extern "C" __declspec(naked) void asm_00a565b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd486f6 }
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
	__asm { call fn_00a56d90 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e63ac] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a5666f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e63ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab2a4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6280 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a5666f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6280 }
	__asm { call fn_008690c0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeab60c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a566ed }
	__asm { push 0x124fce0 }
	__asm { mov ecx, 0x124fce0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a566ed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a566d8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a566ed }
	__asm { L_00a566d8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a566ed: }
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
extern "C" char g_012e63ac[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_0087b310();
extern "C" void fn_00a56df0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a56700
extern "C" __declspec(naked) void asm_00a56700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd486f6 }
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
	__asm { call fn_00a56df0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e63ac] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a567bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e63ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab2a4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6280 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a567bf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6280 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeab5c4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a5683d }
	__asm { push 0x124fce0 }
	__asm { mov ecx, 0x124fce0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a5683d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a56828 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5683d }
	__asm { L_00a56828: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5683d: }
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
extern "C" char g_012e63ac[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_0088d5e0();
extern "C" void fn_00a56e50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a56850
extern "C" __declspec(naked) void asm_00a56850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd486f6 }
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
	__asm { call fn_00a56e50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e63ac] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a5690f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e63ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab2a4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6280 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a5690f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6280 }
	__asm { call fn_0088d5e0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeab56c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a5698d }
	__asm { push 0x124fce0 }
	__asm { mov ecx, 0x124fce0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a5698d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a56978 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5698d }
	__asm { L_00a56978: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5698d: }
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
extern "C" char g_012e63ac[];
extern "C" void fn_0040ba00();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00a56f10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a56b70
extern "C" __declspec(naked) void asm_00a56b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48766 }
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
	__asm { call fn_00a56f10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e63ac] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a56c2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e63ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab2a4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6280 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a56c2f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6280 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xeab648 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a56cad }
	__asm { push 0x124fce0 }
	__asm { mov ecx, 0x124fce0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a56cad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a56c98 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a56cad }
	__asm { L_00a56c98: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a56cad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4d9c[];
extern "C" char g_012e63ac[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00b0d680();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a56cc0
extern "C" __declspec(naked) void asm_00a56cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48786 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0d680 }
	__asm { mov dword ptr [esi], 0xeab2bc }
	__asm { mov dword ptr [esi + 4], 0xeab358 }
	__asm { mov dword ptr [esi + 0x18], 0xeab360 }
	__asm { mov dword ptr [esi + 0x1c], 0xeab36c }
	__asm { mov dword ptr [esi + 0x64], 0xeab37c }
	__asm { mov dword ptr [esi + 0x68], 0xeab384 }
	__asm { mov eax, dword ptr [g_012e63ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a56d66 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e63ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab2a4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6280 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a56d66: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e6280 }
	__asm { inc dword ptr [g_012e4d9c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10388[];
extern "C" void fn_00afae40();
extern "C" void fn_00b5cfb0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a58ca0
extern "C" __declspec(naked) void asm_00a58ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48939 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea edx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_00a58d30 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edi, [edx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { lea ebx, [ecx + 4] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov dword ptr [edi], eax }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_00a58d30: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a5a980();
extern "C" void fn_00adb4b0();
extern "C" void fn_00adf160();
// FUNCTION: ROBLOXSTUDIO 0x00a592f0
extern "C" __declspec(naked) void asm_00a592f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00a5a980 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_00a5a980 }
	__asm { mov esi, 0xeabe3c }
	__asm { mov ecx, esi }
	__asm { call fn_00adb4b0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00a5a600();
extern "C" void fn_00adf160();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a593a0
extern "C" __declspec(naked) void asm_00a593a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50edb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00a5942b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00a5a600 }
	__asm { push 0x58 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00a59414 }
	__asm { mov ecx, dword ptr [ebp - 0x68] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00a5a600 }
	__asm { jmp L_00a59416 }
	__asm { L_00a59414: }
	__asm { xor esi, esi }
	__asm { L_00a59416: }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { mov bl, 1 }
	__asm { jmp L_00a5942d }
	__asm { L_00a5942b: }
	__asm { xor bl, bl }
	__asm { L_00a5942d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x60 }
}

extern "C" void fn_00a593a0();
extern "C" void fn_00a5a600();
extern "C" void fn_00adf160();
// FUNCTION: ROBLOXSTUDIO 0x00a59450
extern "C" __declspec(naked) void asm_00a59450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00a5a600 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_00a5a600 }
	__asm { mov esi, 0xeabe44 }
	__asm { mov ecx, esi }
	__asm { call fn_00a593a0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a59e20();
// FUNCTION: ROBLOXSTUDIO 0x00a598c0
extern "C" __declspec(naked) void asm_00a598c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
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
	__asm { call fn_00a59e20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeabb40 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00a5996e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a5996e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a59e20();
// FUNCTION: ROBLOXSTUDIO 0x00a59990
extern "C" __declspec(naked) void asm_00a59990()
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
	__asm { call fn_00a59e20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeabb60 }
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
	__asm { je L_00a59a3e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a59a3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a59f30();
// FUNCTION: ROBLOXSTUDIO 0x00a59a60
extern "C" __declspec(naked) void asm_00a59a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
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
	__asm { call fn_00a59f30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeabb14 }
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
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
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
	__asm { je L_00a59b0e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a59b0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_00a59f30();
extern "C" void fn_00b048b0();
// FUNCTION: ROBLOXSTUDIO 0x00a59b30
extern "C" __declspec(naked) void asm_00a59b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd536f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a59f30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeabae4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b048b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008251b0();
extern "C" void fn_00a59d70();
// FUNCTION: ROBLOXSTUDIO 0x00a59ca0
extern "C" __declspec(naked) void asm_00a59ca0()
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
	__asm { call fn_00a59d70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeabbbc }
	__asm { call fn_007d5550 }
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
	__asm { jae L_00a59d32 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a59d32: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a59d55 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a59d55: }
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
extern "C" char g_012e6bfc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a59e20
extern "C" __declspec(naked) void asm_00a59e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48a46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e6bfc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a59e9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6bfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab980 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6ad0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a59e9a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e6ad0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeabb34 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a59f12 }
	__asm { push 0x1250490 }
	__asm { mov ecx, 0x1250490 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a59f12 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a59efd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a59f12 }
	__asm { L_00a59efd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a59f12: }
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
extern "C" char g_012e6bfc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a59f30
extern "C" __declspec(naked) void asm_00a59f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48a66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e6bfc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a59faa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6bfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeab980 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6ad0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a59faa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e6ad0 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xeabad8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a5a022 }
	__asm { push 0x1250490 }
	__asm { mov ecx, 0x1250490 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a5a022 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a5a00d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5a022 }
	__asm { L_00a5a00d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5a022: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00a5a430();
// FUNCTION: ROBLOXSTUDIO 0x00a5a600
extern "C" __declspec(naked) void asm_00a5a600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48b28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a5a430 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a5a692 }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a5a67e }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a5a67e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5a692: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00add520();
// FUNCTION: ROBLOXSTUDIO 0x00a5a980
extern "C" __declspec(naked) void asm_00a5a980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48b28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00add520 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a5aa12 }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a5a9fe }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a5a9fe: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5aa12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_00558b00();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00a5af50
extern "C" __declspec(naked) void asm_00a5af50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48ce8 }
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
	__asm { je L_00a5afdd }
	__asm { add esi, 5 }
	__asm { je L_00a5afa5 }
	__asm { add esi, -5 }
	__asm { jmp L_00a5afa7 }
	__asm { L_00a5afa5: }
	__asm { xor esi, esi }
	__asm { L_00a5afa7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5afd7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5afd7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a5afdd }
	__asm { L_00a5afd7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a5afdd: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00558b00 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a5b02c }
	__asm { add esi, 5 }
	__asm { je L_00a5b002 }
	__asm { add esi, -5 }
	__asm { jmp L_00a5b004 }
	__asm { L_00a5b002: }
	__asm { xor esi, esi }
	__asm { L_00a5b004: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5b02c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5b02c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a5b02c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a5daa0
extern "C" __declspec(naked) void asm_00a5daa0()
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
	__asm { mov dword ptr [esi + 8], 0xeac0d0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xeac0e0 }
	__asm { mov dword ptr [esi + 8], 0xeac0f0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a5db4a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a5db36 }
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
	__asm { L_00a5db36: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5db4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00a5daa0();
extern "C" void fn_00a5fe20();
// FUNCTION: ROBLOXSTUDIO 0x00a5de40
extern "C" __declspec(naked) void asm_00a5de40()
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
	__asm { je L_00a5de8b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a5de8b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a5deb4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00a5daa0 }
	__asm { mov dword ptr [esi], 0xeac0f8 }
	__asm { mov dword ptr [esi + 8], 0xeac108 }
	__asm { jmp L_00a5deb6 }
	__asm { L_00a5deb4: }
	__asm { xor esi, esi }
	__asm { L_00a5deb6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a5fe20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a5deda }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a5deda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_007dbda0();
extern "C" void fn_007e8ce0();
// FUNCTION: ROBLOXSTUDIO 0x00a5def0
extern "C" __declspec(naked) void asm_00a5def0()
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
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e8ce0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_007dbda0 }
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
	__asm { ret 0xc }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00a5dfd0();
extern "C" void fn_00a5e210();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a5e100
extern "C" __declspec(naked) void asm_00a5e100()
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
	__asm { jb L_00a5e1cb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a5e210 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a5e153 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5e153: }
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
	__asm { je L_00a5e1b1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00a5dfd0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a5e1a0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00a5e1a0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5e1b1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a5e1cb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a5e1cb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5e1e5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5e1e5: }
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

extern "C" char g_012f6a7c[];
extern "C" char g_012f6a80[];
extern "C" char g_012f6a84[];
extern "C" char g_012f6a88[];
extern "C" void fn_007e8ce0();
extern "C" void fn_00825140();
extern "C" void fn_00a5e880();
extern "C" void fn_00a5f380();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a5e2b0
extern "C" __declspec(naked) void asm_00a5e2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49149 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a5e880 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeabf9c }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, dword ptr [ebp + 0x20] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a5e322 }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_00a5e324 }
	__asm { L_00a5e322: }
	__asm { xor eax, eax }
	__asm { L_00a5e324: }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_007e8ce0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a5e34a }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_00a5e34a: }
	__asm { mov eax, dword ptr [g_012f6a88] }
	__asm { test al, 1 }
	__asm { jne L_00a5e386 }
	__asm { or eax, 1 }
	__asm { push 0xde8650 }
	__asm { mov dword ptr [g_012f6a88], eax }
	__asm { mov dword ptr [g_012f6a7c], 0x11f0f18 }
	__asm { mov dword ptr [g_012f6a84], 0x40d810 }
	__asm { mov dword ptr [g_012f6a80], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a5e386: }
	__asm { mov dword ptr [esi + 4], 0x12f6a7c }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a5f380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a5e4b0
extern "C" __declspec(naked) void asm_00a5e4b0()
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
	__asm { push 0x11f0f18 }
	__asm { mov edi, ecx }
	__asm { push 0xeabffc }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59d00 }
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
	__asm { push 0xea738c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xea7384 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xea7378 }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e731c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a5e880
extern "C" __declspec(naked) void asm_00a5e880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd491b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e731c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a5e8fa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e731c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe77978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e71f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a5e8fa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e71f0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeabf90 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a5e972 }
	__asm { push 0x1251130 }
	__asm { mov ecx, 0x1251130 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a5e972 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a5e95d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5e972 }
	__asm { L_00a5e95d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5e972: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e77978[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a5e3f0();
extern "C" void fn_00a60320();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a5e990
extern "C" __declspec(naked) void asm_00a5e990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd491f3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a5e3f0 }
	__asm { mov byte ptr [edi + 0x64], 1 }
	__asm { lea esi, [edi + 0x68] }
	__asm { mov dword ptr [edi], 0xeabef4 }
	__asm { mov dword ptr [edi + 4], 0xeabf6c }
	__asm { mov dword ptr [edi + 0x18], 0xeabf74 }
	__asm { mov dword ptr [edi + 0x1c], 0xeabf80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0xa60440 }
	__asm { push 0x1308064 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { call fn_00a60320 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_0043f5a0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e77978], cl }
	__asm { mov eax, 4 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe77978 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_00a5ea7c }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5ea7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00a5f550();
// FUNCTION: ROBLOXSTUDIO 0x00a5eb80
extern "C" __declspec(naked) void asm_00a5eb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49218 }
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
	__asm { je L_00a5ec0d }
	__asm { add esi, 5 }
	__asm { je L_00a5ebd5 }
	__asm { add esi, -5 }
	__asm { jmp L_00a5ebd7 }
	__asm { L_00a5ebd5: }
	__asm { xor esi, esi }
	__asm { L_00a5ebd7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ec07 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ec07 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a5ec0d }
	__asm { L_00a5ec07: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a5ec0d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00a5f550 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a5ec5c }
	__asm { add esi, 5 }
	__asm { je L_00a5ec32 }
	__asm { add esi, -5 }
	__asm { jmp L_00a5ec34 }
	__asm { L_00a5ec32: }
	__asm { xor esi, esi }
	__asm { L_00a5ec34: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ec5c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ec5c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a5ec5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_007e8ce0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00a5f380
extern "C" __declspec(naked) void asm_00a5f380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5710 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007e8ce0 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a5f421 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a5f421: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a5f438 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a5f438: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a5f458 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a5f458: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00a5dcc0();
extern "C" void fn_00a5ed00();
// FUNCTION: ROBLOXSTUDIO 0x00a5fc00
extern "C" __declspec(naked) void asm_00a5fc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00a5fc7f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00a5fc7f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a5fc6e }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5fc7f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a5fc6e: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5fc7f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a5fc8b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00a5fc8d }
	__asm { L_00a5fc8b: }
	__asm { xor edi, edi }
	__asm { L_00a5fc8d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00a5dcc0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { add ecx, 0x44 }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a5ed00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00a608c0();
// FUNCTION: ROBLOXSTUDIO 0x00a607f0
extern "C" __declspec(naked) void asm_00a607f0()
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
	__asm { call fn_00a608c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeac29c }
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
	__asm { jae L_00a60882 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a60882: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a608a5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a608a5: }
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

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5630();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a61f30();
// FUNCTION: ROBLOXSTUDIO 0x00a61ce0
extern "C" __declspec(naked) void asm_00a61ce0()
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
	__asm { call fn_00a61f30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeac4cc }
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
	__asm { call fn_007d5630 }
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
	__asm { je L_00a61d8e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a61d8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00a61e80();
// FUNCTION: ROBLOXSTUDIO 0x00a61db0
extern "C" __declspec(naked) void asm_00a61db0()
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
	__asm { call fn_00a61e80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeac4d8 }
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
	__asm { jae L_00a61e42 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a61e42: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a61e65 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a61e65: }
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
extern "C" char g_012e76ac[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a61f30
extern "C" __declspec(naked) void asm_00a61f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49536 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e76ac] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a61faa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e76ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac364 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7580 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a61faa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e7580 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeac4c0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a62022 }
	__asm { push 0x12526a8 }
	__asm { mov ecx, 0x12526a8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a62022 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6200d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a62022 }
	__asm { L_00a6200d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a62022: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f140();
extern "C" void fn_00a618e0();
extern "C" void fn_00c679a0();
// FUNCTION: ROBLOXSTUDIO 0x00a62040
extern "C" __declspec(naked) void asm_00a62040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4956e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xeac364 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a618e0 }
	__asm { mov byte ptr [edi + 0x64], 1 }
	__asm { lea eax, [edi + 0x68] }
	__asm { mov dword ptr [edi], 0xeac424 }
	__asm { mov dword ptr [edi + 4], 0xeac49c }
	__asm { mov dword ptr [edi + 0x18], 0xeac4a4 }
	__asm { mov dword ptr [edi + 0x1c], 0xeac4b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f140 }
	__asm { lea eax, [edi + 0x6c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_0043f140 }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x70], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f1d0();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_00be8210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a62110
extern "C" __declspec(naked) void asm_00a62110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd495a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov eax, dword ptr [ebx + 0x70] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [ebx + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { lea esi, [ebx + 0x6c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a621aa }
	__asm { add esi, 5 }
	__asm { je L_00a6217c }
	__asm { add esi, -5 }
	__asm { jmp L_00a6217e }
	__asm { L_00a6217c: }
	__asm { xor esi, esi }
	__asm { L_00a6217e: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a621aa }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a621aa }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a621aa: }
	__asm { lea esi, [ebx + 0x68] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a621fd }
	__asm { add esi, 5 }
	__asm { je L_00a621cf }
	__asm { add esi, -5 }
	__asm { jmp L_00a621d1 }
	__asm { L_00a621cf: }
	__asm { xor esi, esi }
	__asm { L_00a621d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a621fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a621fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a621fd: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_00425f10();
extern "C" void fn_00513a40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a62750
extern "C" __declspec(naked) void asm_00a62750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea edi, [ecx + 0x70] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp esi, eax }
	__asm { je L_00a627df }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { lea edx, [esi + 0x10] }
	__asm { jb L_00a627a3 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_00a627a3: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov ebx, dword ptr [ebp + 0x1c] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { cmovae ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { cmp ebx, edi }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a627d2 }
	__asm { cmp ebx, edi }
	__asm { jb L_00a627dc }
	__asm { cmp ebx, edi }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { L_00a627d2: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { js L_00a627df }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jmp L_00a627e2 }
	__asm { L_00a627dc: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_00a627df: }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { L_00a627e2: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp ecx, eax }
	__asm { je L_00a627f9 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { call fn_00425f10 }
	__asm { jmp L_00a62806 }
	__asm { L_00a627f9: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00a62806: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a62817 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a62817: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_008251b0();
extern "C" void fn_00a62e70();
// FUNCTION: ROBLOXSTUDIO 0x00a62cd0
extern "C" __declspec(naked) void asm_00a62cd0()
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
	__asm { call fn_00a62e70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeac6e4 }
	__asm { call fn_007d5470 }
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
	__asm { jae L_00a62d62 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a62d62: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a62d85 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a62d85: }
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
extern "C" void fn_00a62e70();
// FUNCTION: ROBLOXSTUDIO 0x00a62da0
extern "C" __declspec(naked) void asm_00a62da0()
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
	__asm { call fn_00a62e70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeac71c }
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
	__asm { jae L_00a62e32 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a62e32: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a62e55 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a62e55: }
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
extern "C" char g_012e77dc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a62f20
extern "C" __declspec(naked) void asm_00a62f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49646 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e77dc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a62f9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e77dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac678 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e76b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a62f9a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e76b0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeac704 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a63012 }
	__asm { push 0x11f32a0 }
	__asm { mov ecx, 0x11f32a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a63012 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a62ffd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a63012 }
	__asm { L_00a62ffd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a63012: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00a64aa0();
// FUNCTION: ROBLOXSTUDIO 0x00a63ad0
extern "C" __declspec(naked) void asm_00a63ad0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a63b1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a63b1b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a63b6e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeaccbc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeaccc4 }
	__asm { mov dword ptr [esi + 8], 0xeaccd4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xeaccdc }
	__asm { mov dword ptr [esi + 8], 0xeaccec }
	__asm { jmp L_00a63b70 }
	__asm { L_00a63b6e: }
	__asm { xor esi, esi }
	__asm { L_00a63b70: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00a64aa0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a63b8d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a63b8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a63e30();
// FUNCTION: ROBLOXSTUDIO 0x00a63bb0
extern "C" __declspec(naked) void asm_00a63bb0()
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
	__asm { call fn_00a63e30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeac9b8 }
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
	__asm { je L_00a63c5e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a63c5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0044ced0();
extern "C" void fn_006d19a0();
extern "C" void fn_00825140();
extern "C" void fn_0088bd20();
extern "C" void fn_00a63e30();
extern "C" void fn_00a64820();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a63c80
extern "C" __declspec(naked) void asm_00a63c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49751 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x54] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x4c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a63e30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeac8fc }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x4c], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00a63d0b }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { jmp L_00a63d0d }
	__asm { L_00a63d0b: }
	__asm { xor esi, esi }
	__asm { L_00a63d0d: }
	__asm { mov dword ptr [edi + 0x34], esi }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x4c], esp }
	__asm { mov esi, esp }
	__asm { call fn_0088bd20 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0044ced0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a64820 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e7a3c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a63e30
extern "C" __declspec(naked) void asm_00a63e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49796 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e7a3c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a63eaa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7a3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeac7a4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7910 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a63eaa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e7910 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeac8f0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a63f22 }
	__asm { push 0x12531d4 }
	__asm { mov ecx, 0x12531d4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a63f22 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a63f0d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a63f22 }
	__asm { L_00a63f0d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a63f22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" void fn_004226b0();
extern "C" void fn_00426140();
extern "C" void fn_005715c0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a640c0
extern "C" __declspec(naked) void asm_00a640c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49816 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [ebx + 0x120] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00a64113 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a64113: }
	__asm { mov eax, dword ptr [ebx + 0x70] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea edi, [ebx + 0xd8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [eax + edi - 0x68], 0xe18340 }
	__asm { mov eax, dword ptr [edi - 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ecx + edi - 0x6c], eax }
	__asm { lea ecx, [edi - 0x50] }
	__asm { mov dword ptr [edi - 0x50], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [edi - 0x50] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [edi - 0x48] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov esi, dword ptr [ebx + 0x68] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test esi, esi }
	__asm { je L_00a6417e }
	__asm { mov ecx, esi }
	__asm { call fn_005715c0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6417e: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebx], 0xeac7b4 }
	__asm { mov dword ptr [ebx + 4], 0xeac82c }
	__asm { mov dword ptr [ebx + 0x18], 0xeac834 }
	__asm { mov dword ptr [ebx + 0x1c], 0xeac840 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_005715c0();
extern "C" void fn_007b8280();
extern "C" void fn_00a63f40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a64430
extern "C" __declspec(naked) void asm_00a64430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { jne L_00a644e1 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007b8280 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { jne L_00a64492 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xeaca24 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a64492: }
	__asm { push 0x240 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a644b6 }
	__asm { mov ecx, eax }
	__asm { call fn_00a63f40 }
	__asm { jmp L_00a644b8 }
	__asm { L_00a644b6: }
	__asm { xor eax, eax }
	__asm { L_00a644b8: }
	__asm { mov edi, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { test edi, edi }
	__asm { je L_00a644d9 }
	__asm { mov ecx, edi }
	__asm { call fn_005715c0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a644d9: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x68], eax }
	__asm { pop ebx }
	__asm { L_00a644e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10714[];
extern "C" void fn_00402f60();
extern "C" void fn_004278c0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a64710
extern "C" __declspec(naked) void asm_00a64710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4add8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov ecx, eax }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov edi, dword ptr [ecx + 0x10] }
	__asm { jb L_00a6474c }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00a6474c: }
	__asm { mov eax, 2 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xe48090 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a6477b }
	__asm { cmp edi, 2 }
	__asm { jae L_00a64773 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00a6477b }
	__asm { L_00a64773: }
	__asm { xor eax, eax }
	__asm { cmp edi, 2 }
	__asm { setne al }
	__asm { L_00a6477b: }
	__asm { test eax, eax }
	__asm { push ebx }
	__asm { sete bl }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a64799 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a64799: }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_00a647c6 }
	__asm { L_00a6479e: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a647a6 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a647a6: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10714] }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a647c6: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 3 }
	__asm { je L_00a6479e }
	__asm { cmp eax, 1 }
	__asm { je L_00a647fb }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a647db }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a647db: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xeaca3c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00a647fb: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a64803 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a64803: }
	__asm { movsx eax, byte ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5b00();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x00a64820
extern "C" __declspec(naked) void asm_00a64820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5b00 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_0088bd20 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6489d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a6489d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a648b7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a648b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_007b8850();
extern "C" void fn_00972c50();
// FUNCTION: ROBLOXSTUDIO 0x00a64980
extern "C" __declspec(naked) void asm_00a64980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a6499a }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00a649a1 }
	__asm { L_00a6499a: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00a649a1: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007b8850 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00972c50 }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov edi, dword ptr [edi + 0x2c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { fld dword ptr [ebx] }
	__asm { mov eax, esp }
	__asm { lea ecx, [ecx + edi] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ebx + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00545be0();
extern "C" void fn_005715c0();
extern "C" void fn_00a65270();
extern "C" void fn_00a653c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a64e30
extern "C" __declspec(naked) void asm_00a64e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_00a64e7b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a64e5b }
	__asm { call fn_00545be0 }
	__asm { test eax, eax }
	__asm { je L_00a64e5b }
	__asm { mov ecx, dword ptr [eax + 0x68] }
	__asm { cmp ecx, dword ptr [esi + 0x68] }
	__asm { jne L_00a64e5b }
	__asm { mov dword ptr [eax + 0x68], 0 }
	__asm { L_00a64e5b: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { test edi, edi }
	__asm { je L_00a64e7a }
	__asm { mov ecx, edi }
	__asm { call fn_005715c0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a64e7a: }
	__asm { pop edi }
	__asm { L_00a64e7b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00a65270 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00a653c0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a64f08 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a64f08: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_004270c0();
extern "C" void fn_004272a0();
extern "C" void fn_004276b0();
extern "C" void fn_006b98c0();
extern "C" void fn_009cd070();
extern "C" void fn_00a65b50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a65710
extern "C" __declspec(naked) void asm_00a65710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00a65b50 }
	__asm { lea edi, [esi + 0x70] }
	__asm { test edi, edi }
	__asm { je L_00a65744 }
	__asm { lea ebx, [esi + 0x80] }
	__asm { jmp L_00a65746 }
	__asm { L_00a65744: }
	__asm { xor ebx, ebx }
	__asm { L_00a65746: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [eax + 0x84] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xeacae0 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { push 0xeacadc }
	__asm { push eax }
	__asm { push 0xeacae8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0xeacaec }
	__asm { push ebx }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a657c1 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a657c1: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_009cd070 }
	__asm { test al, al }
	__asm { je L_00a65810 }
	__asm { test edi, edi }
	__asm { je L_00a657ed }
	__asm { lea ecx, [esi + 0x80] }
	__asm { jmp L_00a657ef }
	__asm { L_00a657ed: }
	__asm { xor ecx, ecx }
	__asm { L_00a657ef: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { movzx eax, byte ptr [eax + 0x90] }
	__asm { push eax }
	__asm { push 0xeacafc }
	__asm { push ecx }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { L_00a65810: }
	__asm { test edi, edi }
	__asm { je L_00a65819 }
	__asm { sub esi, -0x80 }
	__asm { jmp L_00a6581b }
	__asm { L_00a65819: }
	__asm { xor esi, esi }
	__asm { L_00a6581b: }
	__asm { push 0xa }
	__asm { push esi }
	__asm { call fn_004272a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a65bd0
extern "C" __declspec(naked) void asm_00a65bd0()
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
	__asm { mov dword ptr [esi + 8], 0xead308 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xead358 }
	__asm { mov dword ptr [esi + 8], 0xead368 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a65c7a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a65c66 }
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
	__asm { L_00a65c66: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a65c7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a65c90
extern "C" __declspec(naked) void asm_00a65c90()
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
	__asm { mov dword ptr [esi + 8], 0xead310 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xead3e8 }
	__asm { mov dword ptr [esi + 8], 0xead3f8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a65d3a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a65d26 }
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
	__asm { L_00a65d26: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a65d3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a65d50
extern "C" __declspec(naked) void asm_00a65d50()
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
	__asm { mov dword ptr [esi + 8], 0xead318 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xead418 }
	__asm { mov dword ptr [esi + 8], 0xead428 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a65dfa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a65de6 }
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
	__asm { L_00a65de6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a65dfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
extern "C" void fn_00a67fb0();
// FUNCTION: ROBLOXSTUDIO 0x00a66b10
extern "C" __declspec(naked) void asm_00a66b10()
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
	__asm { push 0x28 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a66b5b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a66b5b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a66b76 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a67fb0 }
	__asm { mov esi, eax }
	__asm { jmp L_00a66b78 }
	__asm { L_00a66b76: }
	__asm { xor esi, esi }
	__asm { L_00a66b78: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a66b95 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a66b95: }
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
extern "C" void fn_004985a0();
// FUNCTION: ROBLOXSTUDIO 0x00a66bb0
extern "C" __declspec(naked) void asm_00a66bb0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a66bfb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a66bfb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a66c4e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeacd08 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xead328 }
	__asm { mov dword ptr [esi + 8], 0xead338 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xead340 }
	__asm { mov dword ptr [esi + 8], 0xead350 }
	__asm { jmp L_00a66c50 }
	__asm { L_00a66c4e: }
	__asm { xor esi, esi }
	__asm { L_00a66c50: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004985a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a66c6d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a66c6d: }
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
extern "C" void fn_00a6be20();
// FUNCTION: ROBLOXSTUDIO 0x00a66cc0
extern "C" __declspec(naked) void asm_00a66cc0()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a66d0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a66d0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00a66d5e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xead320 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xead3b8 }
	__asm { mov dword ptr [esi + 8], 0xead3c8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xead3d0 }
	__asm { mov dword ptr [esi + 8], 0xead3e0 }
	__asm { jmp L_00a66d60 }
	__asm { L_00a66d5e: }
	__asm { xor esi, esi }
	__asm { L_00a66d60: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00a6be20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a66d7d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a66d7d: }
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
extern "C" void fn_00a65bd0();
extern "C" void fn_00a6bac0();
// FUNCTION: ROBLOXSTUDIO 0x00a66da0
extern "C" __declspec(naked) void asm_00a66da0()
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
	__asm { je L_00a66deb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a66deb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a66e14 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00a65bd0 }
	__asm { mov dword ptr [esi], 0xead370 }
	__asm { mov dword ptr [esi + 8], 0xead380 }
	__asm { jmp L_00a66e16 }
	__asm { L_00a66e14: }
	__asm { xor esi, esi }
	__asm { L_00a66e16: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a6bac0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a66e3a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a66e3a: }
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
extern "C" void fn_00a65c90();
extern "C" void fn_00a6bc70();
// FUNCTION: ROBLOXSTUDIO 0x00a66e80
extern "C" __declspec(naked) void asm_00a66e80()
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
	__asm { je L_00a66ecb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a66ecb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a66ef4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00a65c90 }
	__asm { mov dword ptr [esi], 0xead400 }
	__asm { mov dword ptr [esi + 8], 0xead410 }
	__asm { jmp L_00a66ef6 }
	__asm { L_00a66ef4: }
	__asm { xor esi, esi }
	__asm { L_00a66ef6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a6bc70 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a66f1a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a66f1a: }
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
extern "C" void fn_00a65d50();
extern "C" void fn_00a6be20();
// FUNCTION: ROBLOXSTUDIO 0x00a66f60
extern "C" __declspec(naked) void asm_00a66f60()
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
	__asm { je L_00a66fab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00a66fab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a66fd4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00a65d50 }
	__asm { mov dword ptr [esi], 0xead430 }
	__asm { mov dword ptr [esi + 8], 0xead440 }
	__asm { jmp L_00a66fd6 }
	__asm { L_00a66fd4: }
	__asm { xor esi, esi }
	__asm { L_00a66fd6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a6be20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00a66ffa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a66ffa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007dce90();
extern "C" void fn_007e91b0();
// FUNCTION: ROBLOXSTUDIO 0x00a67150
extern "C" __declspec(naked) void asm_00a67150()
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
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e91b0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dce90 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_004124c0 }
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
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a67340
extern "C" __declspec(naked) void asm_00a67340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd499f4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x66666667 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp eax, ecx }
	__asm { jne L_00a673dc }
	__asm { test ecx, ecx }
	__asm { je L_00a67435 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebx + 4] }
	__asm { lea ecx, [esi + 4] }
	__asm { cmp ecx, eax }
	__asm { je L_00a673a6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00a673a6: }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { add dword ptr [edi + 0xc], 0x28 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_00a673c3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { L_00a673c3: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a673dc: }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00a67421 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { push -1 }
	__asm { lea eax, [esi + 4] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebx + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { L_00a67421: }
	__asm { add dword ptr [edi + 0xc], 0x28 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_00a67432 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { L_00a67432: }
	__asm { inc dword ptr [edi + 0x10] }
	__asm { L_00a67435: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a67450
extern "C" __declspec(naked) void asm_00a67450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49a11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00a67484: }
	__asm { cmp esi, dword ptr [ebp + 0x14] }
	__asm { je L_00a67537 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a674cf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [edi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00a674cf: }
	__asm { add esi, 0x28 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jne L_00a674e3 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_00a674e3: }
	__asm { xor ecx, ecx }
	__asm { cmp esi, dword ptr [eax + 0xc] }
	__asm { cmove esi, ecx }
	__asm { add edi, 0x28 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { jmp L_00a67484 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { cmp esi, edi }
	__asm { je L_00a6752e }
	__asm { add esi, 0x18 }
	__asm { L_00a67503: }
	__asm { cmp dword ptr [esi], 0x10 }
	__asm { jb L_00a67513 }
	__asm { push dword ptr [esi - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a67513: }
	__asm { mov dword ptr [esi], 0xf }
	__asm { mov dword ptr [esi - 4], 0 }
	__asm { mov byte ptr [esi - 0x14], 0 }
	__asm { add esi, 0x28 }
	__asm { lea eax, [esi - 0x18] }
	__asm { cmp eax, edi }
	__asm { jne L_00a67503 }
	__asm { L_00a6752e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00a67537: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a67e30();
// FUNCTION: ROBLOXSTUDIO 0x00a67550
extern "C" __declspec(naked) void asm_00a67550()
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
	__asm { call fn_00a67e30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xeacf64 }
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
	__asm { je L_00a675fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a675fe: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a676e0
extern "C" __declspec(naked) void asm_00a676e0()
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
	__asm { push 0x11f13e0 }
	__asm { mov edi, ecx }
	__asm { push 0xead2bc }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59f88 }
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
	__asm { push 0xead2c8 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xead2d8 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xead2e4 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xead2f4 }
	__asm { push 3 }
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
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00a67d80();
// FUNCTION: ROBLOXSTUDIO 0x00a67b60
extern "C" __declspec(naked) void asm_00a67b60()
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
	__asm { call fn_00a67d80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xead018 }
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
	__asm { jae L_00a67bf2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a67bf2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00a67c15 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a67c15: }
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
extern "C" char g_012e7b6c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a67e30
extern "C" __declspec(naked) void asm_00a67e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49a76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e7b6c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a67eaa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7b6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeaccf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7a40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a67eaa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e7a40 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xeacf1c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a67f22 }
	__asm { push 0x1253918 }
	__asm { mov ecx, 0x1253918 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a67f22 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a67f0d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a67f22 }
	__asm { L_00a67f0d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a67f22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00a6a4e0();
// FUNCTION: ROBLOXSTUDIO 0x00a68680
extern "C" __declspec(naked) void asm_00a68680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49bd8 }
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
	__asm { je L_00a6870d }
	__asm { add esi, 5 }
	__asm { je L_00a686d5 }
	__asm { add esi, -5 }
	__asm { jmp L_00a686d7 }
	__asm { L_00a686d5: }
	__asm { xor esi, esi }
	__asm { L_00a686d7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a68707 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a68707 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a6870d }
	__asm { L_00a68707: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a6870d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00a6a4e0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6875c }
	__asm { add esi, 5 }
	__asm { je L_00a68732 }
	__asm { add esi, -5 }
	__asm { jmp L_00a68734 }
	__asm { L_00a68732: }
	__asm { xor esi, esi }
	__asm { L_00a68734: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6875c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6875c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a6875c: }
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
extern "C" void fn_00a6a870();
// FUNCTION: ROBLOXSTUDIO 0x00a68770
extern "C" __declspec(naked) void asm_00a68770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49c08 }
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
	__asm { je L_00a687fd }
	__asm { add esi, 5 }
	__asm { je L_00a687c5 }
	__asm { add esi, -5 }
	__asm { jmp L_00a687c7 }
	__asm { L_00a687c5: }
	__asm { xor esi, esi }
	__asm { L_00a687c7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a687f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a687f7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a687fd }
	__asm { L_00a687f7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a687fd: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00a6a870 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a6884c }
	__asm { add esi, 5 }
	__asm { je L_00a68822 }
	__asm { add esi, -5 }
	__asm { jmp L_00a68824 }
	__asm { L_00a68822: }
	__asm { xor esi, esi }
	__asm { L_00a68824: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6884c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a6884c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a6884c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a68b80
extern "C" __declspec(naked) void asm_00a68b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a68bd2 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x20], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_00a68bd2: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a68c1a }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a68c1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a68d30
extern "C" __declspec(naked) void asm_00a68d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a68d82 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x24], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_00a68d82: }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00a68dcd }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a68dcd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00a69290();
// FUNCTION: ROBLOXSTUDIO 0x00a69210
extern "C" __declspec(naked) void asm_00a69210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jle L_00a69275 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [edi + 4] }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jl L_00a69254 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { L_00a69254: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { lea eax, [esi + esi*4] }
	__asm { lea eax, [ecx + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { cmp eax, dword ptr [ebx + 0xc] }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { jne L_00a69281 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a69275: }
	__asm { jns L_00a6927f }
	__asm { neg esi }
	__asm { push esi }
	__asm { call fn_00a69290 }
	__asm { L_00a6927f: }
	__asm { mov eax, edi }
	__asm { L_00a69281: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a69210();
// FUNCTION: ROBLOXSTUDIO 0x00a69290
extern "C" __declspec(naked) void asm_00a69290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jle L_00a692fa }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { test ebx, ebx }
	__asm { jne L_00a692ab }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [eax + 0xc] }
	__asm { L_00a692ab: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp esi, ecx }
	__asm { jle L_00a692e6 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { sub ecx, dword ptr [ebp + 8] }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { L_00a692e6: }
	__asm { lea eax, [esi + esi*4] }
	__asm { shl eax, 3 }
	__asm { sub ebx, eax }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a692fa: }
	__asm { jns L_00a69304 }
	__asm { neg esi }
	__asm { push esi }
	__asm { call fn_00a69210 }
	__asm { L_00a69304: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00421eb0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_008523c0();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c2fed0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a6ae90
extern "C" __declspec(naked) void asm_00a6ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49ea8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00a6af86 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00c2fed0 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00a6af85 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xcc] }
	__asm { push ebx }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { cmp esi, dword ptr [eax + 0xe08] }
	__asm { jne L_00a6af84 }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00426db0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov edi, eax }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5710 }
	__asm { push edi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { lea edx, [ebp - 0x20] }
	__asm { push edx }
	__asm { push 0x1308744 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00426f50 }
	__asm { L_00a6af84: }
	__asm { pop esi }
	__asm { L_00a6af85: }
	__asm { pop edi }
	__asm { L_00a6af86: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop ebx }
	__asm { jb L_00a6af98 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a6af98: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_007dfd70();
extern "C" void fn_00a68eb0();
// FUNCTION: ROBLOXSTUDIO 0x00a6b1c0
extern "C" __declspec(naked) void asm_00a6b1c0()
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
	__asm { je L_00a6b22a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00a6b22a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6b219 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6b22a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a6b219: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6b22a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6b236 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00a6b238 }
	__asm { L_00a6b236: }
	__asm { xor edi, edi }
	__asm { L_00a6b238: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_007dfd70 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00a68eb0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00a68fb0();
// FUNCTION: ROBLOXSTUDIO 0x00a6b270
extern "C" __declspec(naked) void asm_00a6b270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00a6b2ef }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00a6b2ef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6b2de }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6b2ef }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a6b2de: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6b2ef: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6b2fb }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00a6b2fd }
	__asm { L_00a6b2fb: }
	__asm { xor edi, edi }
	__asm { L_00a6b2fd: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a68fb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_007dfd70();
extern "C" void fn_00a69100();
// FUNCTION: ROBLOXSTUDIO 0x00a6b350
extern "C" __declspec(naked) void asm_00a6b350()
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
	__asm { je L_00a6b3ba }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00a6b3ba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6b3a9 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6b3ba }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00a6b3a9: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6b3ba: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6b3c6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00a6b3c8 }
	__asm { L_00a6b3c6: }
	__asm { xor edi, edi }
	__asm { L_00a6b3c8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_007dfd70 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00a69100 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00a67f40();
extern "C" void fn_00a69370();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a6c4a0
extern "C" __declspec(naked) void asm_00a6c4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00a6c511 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x38 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6c4fb }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00a67f40 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6c4fb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6c511: }
	__asm { cmp eax, 1 }
	__asm { jne L_00a6c535 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6c535: }
	__asm { cmp eax, 2 }
	__asm { jne L_00a6c55f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00a6c54a }
	__asm { push 1 }
	__asm { call fn_00a69370 }
	__asm { L_00a6c54a: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6c55f: }
	__asm { cmp eax, 3 }
	__asm { jne L_00a6c58e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1253938 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a6c54a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6c58e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x1253938 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008523c0();
extern "C" void fn_00860040();
extern "C" void fn_009a7290();
extern "C" void fn_00a65ef0();
extern "C" void fn_00a66950();
extern "C" void fn_00a684f0();
// FUNCTION: ROBLOXSTUDIO 0x00a6cbb0
extern "C" __declspec(naked) void asm_00a6cbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49fd8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp byte ptr [ebx + 0x84], 0 }
	__asm { push edi }
	__asm { jne L_00a6cc46 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax], 4 }
	__asm { je L_00a6cc46 }
	__asm { push ebx }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00a6cc46 }
	__asm { push 1 }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x38 }
	__asm { mov esi, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_009a7290 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a684f0 }
	__asm { push 0xa6ac00 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a66950 }
	__asm { add esp, 0x38 }
	__asm { mov ecx, edi }
	__asm { call fn_00a65ef0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00860040 }
	__asm { L_00a6cc46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a69210();
extern "C" void fn_00a69820();
extern "C" void fn_00a6cf70();
extern "C" void fn_00a6d500();
// FUNCTION: ROBLOXSTUDIO 0x00a6d0a0
extern "C" __declspec(naked) void asm_00a6d0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp ecx, eax }
	__asm { jae L_00a6d102 }
	__asm { test eax, eax }
	__asm { jne L_00a6d0ca }
	__asm { xor ebx, ebx }
	__asm { jmp L_00a6d0cd }
	__asm { L_00a6d0ca: }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { L_00a6d0cd: }
	__asm { sub esp, 8 }
	__asm { sub eax, ecx }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00a69210 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00a6cf70 }
	__asm { L_00a6d102: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [edi + 0x1c] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, edi }
	__asm { cmp esi, eax }
	__asm { jbe L_00a6d130 }
	__asm { push esi }
	__asm { call fn_00a6d500 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6d130: }
	__asm { call fn_00a69820 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e7dcc[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a6de70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6d630
extern "C" __declspec(naked) void asm_00a6d630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a126 }
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
	__asm { call fn_00a6de70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a6d6ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7dcc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead468 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7ca0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a6d6ef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e7ca0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xead5b0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a6d76d }
	__asm { push 0x1256638 }
	__asm { mov ecx, 0x1256638 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a6d76d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6d758 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6d76d }
	__asm { L_00a6d758: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6d76d: }
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
extern "C" char g_012e7dcc[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a6df90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6dba0
extern "C" __declspec(naked) void asm_00a6dba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a126 }
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
	__asm { call fn_00a6df90 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a6dc5f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7dcc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead468 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7ca0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a6dc5f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e7ca0 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xead6b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a6dcdd }
	__asm { push 0x1256638 }
	__asm { mov ecx, 0x1256638 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a6dcdd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6dcc8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6dcdd }
	__asm { L_00a6dcc8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6dcdd: }
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
extern "C" char g_012e7dcc[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a6dff0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a6dcf0
extern "C" __declspec(naked) void asm_00a6dcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a126 }
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
	__asm { call fn_00a6dff0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a6ddaf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7dcc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xead468 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7ca0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a6ddaf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e7ca0 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xead70c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a6de2d }
	__asm { push 0x1256638 }
	__asm { mov ecx, 0x1256638 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a6de2d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a6de18 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6de2d }
	__asm { L_00a6de18: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6de2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}
