// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00418980();
extern "C" void fn_0048a4b0();
extern "C" void fn_005297a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005290b0
extern "C" __declspec(naked) void asm_005290b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_005297a0 }
	__asm { test al, al }
	__asm { je L_0052911f }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0048a4b0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0052911f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00418980 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00419970();
// FUNCTION: ROBLOXSTUDIO 0x00529150
extern "C" __declspec(naked) void asm_00529150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_005291ae }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_005291ae }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0052917a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00419970 }
	__asm { L_0052917a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { test edx, edx }
	__asm { je L_005291e1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005291ae: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_005291bc }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00419970 }
	__asm { L_005291bc: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005291e1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_005291e1: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10354[];
extern "C" char g_00e10394[];
extern "C" char g_0131ab88[];
// FUNCTION: ROBLOXSTUDIO 0x005291f0
extern "C" __declspec(naked) void asm_005291f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8bf42 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0052923c }
	__asm { lea ecx, [edi + 0x60] }
	__asm { mov dword ptr [edi], 0x10065ec }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0052923c: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe3ae1c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, edi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00529920();
extern "C" void fn_0052e280();
extern "C" void fn_0052e3c0();
// FUNCTION: ROBLOXSTUDIO 0x00529560
extern "C" __declspec(naked) void asm_00529560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, ebx }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_005295c1 }
	__asm { imul esi, esi, 0x4c }
	__asm { add esi, ebx }
	__asm { cmp esi, ebx }
	__asm { jne L_005295a0 }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005295a0: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp esi, eax }
	__asm { je L_0052961f }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_0052e3c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005295c1: }
	__asm { jae L_0052961f }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00529920 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_0052e280 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { add esp, 0x14 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { imul esi, esi, 0x4c }
	__asm { add dword ptr [ebx + 4], esi }
	__asm { L_0052961f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10354[];
extern "C" char g_00e1037c[];
extern "C" char g_0131ab88[];
// FUNCTION: ROBLOXSTUDIO 0x005296d0
extern "C" __declspec(naked) void asm_005296d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8bf02 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0x1012b64 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xe3ed74 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x70] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, edi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00529ae0();
// FUNCTION: ROBLOXSTUDIO 0x00529920
extern "C" __declspec(naked) void asm_00529920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_005299bb }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x35e50d7 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00529971 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00529971: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ebx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x35e50d7 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_005299a8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00529ae0 }
	__asm { L_005299a8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00529ae0 }
	__asm { L_005299bb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_0052f760();
// FUNCTION: ROBLOXSTUDIO 0x00529ae0
extern "C" __declspec(naked) void asm_00529ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test esi, esi }
	__asm { je L_00529b18 }
	__asm { cmp esi, 0x35e50d7 }
	__asm { ja L_00529b12 }
	__asm { mov eax, esi }
	__asm { imul eax, eax, 0x4c }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_00529b18 }
	__asm { L_00529b12: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00529b18: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0052f760 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar edx, 5 }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add esp, 0x18 }
	__asm { add ebx, edx }
	__asm { test eax, eax }
	__asm { je L_00529b5b }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00529b5b: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { imul esi, esi, 0x4c }
	__asm { imul ebx, ebx, 0x4c }
	__asm { add esi, edi }
	__asm { add ebx, edi }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10500[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00529b80
extern "C" __declspec(naked) void asm_00529b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_00529bb2 }
	__asm { cmp ebx, 0x7fffffff }
	__asm { ja L_00529bac }
	__asm { lea eax, [ebx + ebx] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_00529bb2 }
	__asm { L_00529bac: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00529bb2: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffe }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 1 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00529be2 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00529be2: }
	__asm { lea eax, [esi + ebx*2] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*2] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
extern "C" void fn_0052dd60();
// FUNCTION: ROBLOXSTUDIO 0x0052ad20
extern "C" __declspec(naked) void asm_0052ad20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ba00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0052dd60 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { jb L_0052ada8 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052ada8: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_0052adda }
	__asm { test al, 1 }
	__asm { jne L_0052adda }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052adda }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052adda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0052c1b0();
// FUNCTION: ROBLOXSTUDIO 0x0052b390
extern "C" __declspec(naked) void asm_0052b390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0052b3db }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0052b3db: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0052b42e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe390dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102bafc }
	__asm { mov dword ptr [esi + 8], 0x102bb0c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102bb44 }
	__asm { mov dword ptr [esi + 8], 0x102bb54 }
	__asm { jmp L_0052b430 }
	__asm { L_0052b42e: }
	__asm { xor esi, esi }
	__asm { L_0052b430: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0052b44d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0052b44d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00483240();
// FUNCTION: ROBLOXSTUDIO 0x0052b9d0
extern "C" __declspec(naked) void asm_0052b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0052ba1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0052ba1b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0052ba6e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1012b30 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102bae4 }
	__asm { mov dword ptr [esi + 8], 0x102baf4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102bb2c }
	__asm { mov dword ptr [esi + 8], 0x102bb3c }
	__asm { jmp L_0052ba70 }
	__asm { L_0052ba6e: }
	__asm { xor esi, esi }
	__asm { L_0052ba70: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00483240 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0052ba8d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0052ba8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
extern "C" void fn_004adc90();
// FUNCTION: ROBLOXSTUDIO 0x0052bab0
extern "C" __declspec(naked) void asm_0052bab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94848 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0052bb1b }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, 0x102b978 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { jmp L_0052bb22 }
	__asm { L_0052bb1b: }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { L_0052bb22: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004adc90 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { test eax, eax }
	__asm { je L_0052bb59 }
	__asm { test al, 1 }
	__asm { jne L_0052bb59 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052bb59 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052bb59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_004adc90();
// FUNCTION: ROBLOXSTUDIO 0x0052bb70
extern "C" __declspec(naked) void asm_0052bb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94848 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0052bbdb }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, 0x102b970 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { jmp L_0052bbe2 }
	__asm { L_0052bbdb: }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { L_0052bbe2: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004adc90 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { test eax, eax }
	__asm { je L_0052bc19 }
	__asm { test al, 1 }
	__asm { jne L_0052bc19 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052bc19 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052bc19: }
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
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x0052bc30
extern "C" __declspec(naked) void asm_0052bc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0052bc7b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0052bc7b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0052bcc2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102bacc }
	__asm { mov dword ptr [esi + 8], 0x102badc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x102bb14 }
	__asm { mov dword ptr [esi + 8], 0x102bb24 }
	__asm { jmp L_0052bcc4 }
	__asm { L_0052bcc2: }
	__asm { xor esi, esi }
	__asm { L_0052bcc4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0052bce1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0052bce1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_0052e1a0();
// FUNCTION: ROBLOXSTUDIO 0x0052be50
extern "C" __declspec(naked) void asm_0052be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x34 }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_0052e1a0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_0052bed8 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052bed8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131edc8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005298c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0052c600
extern "C" __declspec(naked) void asm_0052c600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5947c }
	__asm { test al, al }
	__asm { je L_0052c671 }
	__asm { cmp dword ptr [g_0131edc8], 0x29a }
	__asm { je L_0052c671 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0052c660 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0052c671 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0052c660: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0052c671: }
	__asm { mov ecx, esi }
	__asm { call fn_005298c0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0052c6cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0052c6cb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
extern "C" void fn_0052cc70();
// FUNCTION: ROBLOXSTUDIO 0x0052c7d0
extern "C" __declspec(naked) void asm_0052c7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8bfc8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0052cc70 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0052c863 }
	__asm { test al, 1 }
	__asm { jne L_0052c85c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052c85c }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052c85c: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0052c863: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_0052c875 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052c875: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x0052cc70
extern "C" __declspec(naked) void asm_0052cc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c060 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00422570 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_0052ccde }
	__asm { test al, 1 }
	__asm { jne L_0052ccd7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052ccd7 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052ccd7: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_0052ccde: }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0052cd2e }
	__asm { test al, 1 }
	__asm { jne L_0052cd27 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052cd27 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052cd27: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0052cd2e: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_0052cd40 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052cd40: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_0052d450();
// FUNCTION: ROBLOXSTUDIO 0x0052d060
extern "C" __declspec(naked) void asm_0052d060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c120 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0052d450 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { jb L_0052d104 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0052d104: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { jb L_0052d118 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0052d118: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0052d450
extern "C" __declspec(naked) void asm_0052d450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c0b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [edi + 0x18], 0xf }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { jb L_0052d4e3 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0052d4e3: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { jb L_0052d4f7 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0052d4f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007b1fa0();
// FUNCTION: ROBLOXSTUDIO 0x0052d510
extern "C" __declspec(naked) void asm_0052d510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_0052d57d }
	__asm { nop }
	__asm { L_0052d520: }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_0052d585 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007b1fa0 }
	__asm { test al, al }
	__asm { jne L_0052d585 }
	__asm { cmp dword ptr [esi + 0x38], edi }
	__asm { je L_0052d585 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0052d585 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x48] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0052d585 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0052d56f }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x4c] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0052d585 }
	__asm { L_0052d56f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_0052d520 }
	__asm { L_0052d57d: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0052d585: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
extern "C" void fn_0052ef20();
// FUNCTION: ROBLOXSTUDIO 0x0052dd60
extern "C" __declspec(naked) void asm_0052dd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ba00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0052ef20 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { jb L_0052ddee }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052ddee: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_0052de20 }
	__asm { test al, 1 }
	__asm { jne L_0052de20 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052de20 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052de20: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_0052f5e0();
// FUNCTION: ROBLOXSTUDIO 0x0052e1a0
extern "C" __declspec(naked) void asm_0052e1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_0052f5e0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_0052e22e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052e22e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0052f870();
extern "C" void fn_00530ec0();
// FUNCTION: ROBLOXSTUDIO 0x0052ece0
extern "C" __declspec(naked) void asm_0052ece0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0052ed34 }
	__asm { mov ecx, eax }
	__asm { call fn_0052f870 }
	__asm { mov edi, eax }
	__asm { jmp L_0052ed36 }
	__asm { L_0052ed34: }
	__asm { xor edi, edi }
	__asm { L_0052ed36: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00530ec0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0052ed64 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0052ed64 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_0052ed64: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
extern "C" void fn_00530900();
// FUNCTION: ROBLOXSTUDIO 0x0052ef20
extern "C" __declspec(naked) void asm_0052ef20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ba00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00530900 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x102ba00 }
	__asm { cmove ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [edi], ecx }
	__asm { jb L_0052efb8 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052efb8: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_0052efea }
	__asm { test al, 1 }
	__asm { jne L_0052efea }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0052efea }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0052efea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" char g_00e10504[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0052f290
extern "C" __declspec(naked) void asm_0052f290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b8e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0052f2e9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x102b984 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0052f2eb }
	__asm { L_0052f2e9: }
	__asm { xor eax, eax }
	__asm { L_0052f2eb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0052f316 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { L_0052f316: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" char g_00e131ac[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0052f510
extern "C" __declspec(naked) void asm_0052f510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8be89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x50 }
	__asm { push 0 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0052f576 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0045fe60 }
	__asm { L_0052f576: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e131ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x102b9b4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00530bc0();
// FUNCTION: ROBLOXSTUDIO 0x0052f5e0
extern "C" __declspec(naked) void asm_0052f5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00530bc0 }
	__asm { xor edx, edx }
	__asm { test al, al }
	__asm { mov ecx, 0x102b9c0 }
	__asm { cmove ecx, edx }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { jb L_0052f678 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052f678: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004038a0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
// FUNCTION: ROBLOXSTUDIO 0x0052f870
extern "C" __declspec(naked) void asm_0052f870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8bec6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x68], 1 }
	__asm { mov dword ptr [esi], 0x102ba54 }
	__asm { mov dword ptr [esi + 4], 0x102ba3c }
	__asm { mov dword ptr [esi + 0x18], 0x102ba44 }
	__asm { mov dword ptr [esi + 0x1c], 0x102ba24 }
	__asm { mov dword ptr [esi + 0x64], 0x102ba34 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0x11 }
	__asm { push 0x102b914 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0052f92e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0052f92e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10524[];
extern "C" void fn_0052c030();
extern "C" void fn_00530340();
// FUNCTION: ROBLOXSTUDIO 0x00530030
extern "C" __declspec(naked) void asm_00530030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { jne L_0053009e }
	__asm { mov edi, dword ptr [edi] }
	__asm { push 0x40 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0053008a }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_0052c030 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053008a: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053009e: }
	__asm { cmp eax, 1 }
	__asm { jne L_005300bd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005300bd: }
	__asm { cmp eax, 2 }
	__asm { jne L_005300e4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_005300ce }
	__asm { push ecx }
	__asm { call fn_00530340 }
	__asm { L_005300ce: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005300e4: }
	__asm { cmp eax, 3 }
	__asm { jne L_0053010e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d1b38 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_005300ce }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053010e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x12d1b38 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10524[];
extern "C" void fn_0052c150();
extern "C" void fn_005303a0();
// FUNCTION: ROBLOXSTUDIO 0x00530240
extern "C" __declspec(naked) void asm_00530240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { jne L_005302ae }
	__asm { mov edi, dword ptr [edi] }
	__asm { push 0x30 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0053029a }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_0052c150 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053029a: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005302ae: }
	__asm { cmp eax, 1 }
	__asm { jne L_005302cd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005302cd: }
	__asm { cmp eax, 2 }
	__asm { jne L_005302f4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_005302de }
	__asm { push ecx }
	__asm { call fn_005303a0 }
	__asm { L_005302de: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005302f4: }
	__asm { cmp eax, 3 }
	__asm { jne L_0053031e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d1228 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_005302de }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053031e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x12d1228 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
extern "C" void fn_00530f50();
// FUNCTION: ROBLOXSTUDIO 0x00530900
extern "C" __declspec(naked) void asm_00530900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b9e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x48], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00530f50 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00530990 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00530990: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_005309c2 }
	__asm { test al, 1 }
	__asm { jne L_005309c2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005309c2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005309c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00531290();
// FUNCTION: ROBLOXSTUDIO 0x00530bc0
extern "C" __declspec(naked) void asm_00530bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00531290 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00530c50 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00530c50: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00530c70
extern "C" __declspec(naked) void asm_00530c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94658 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push dword ptr [edi + 0x24] }
	__asm { push dword ptr [edi + 0x20] }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00530d10 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00530d10: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_005314d0();
// FUNCTION: ROBLOXSTUDIO 0x00530f50
extern "C" __declspec(naked) void asm_00530f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b9e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00530fd8 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x48], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_005314d0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00530fda }
	__asm { L_00530fd8: }
	__asm { xor bl, bl }
	__asm { L_00530fda: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { jb L_00530ff3 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00530ff3: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_00531025 }
	__asm { test al, 1 }
	__asm { jne L_00531025 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00531025 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00531025: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040c260();
extern "C" void fn_00521ef0();
extern "C" void fn_0052c0b0();
// FUNCTION: ROBLOXSTUDIO 0x00531040
extern "C" __declspec(naked) void asm_00531040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ba2c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_005310bf }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_0052c0b0 }
	__asm { push 0x50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_005310a8 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0052c0b0 }
	__asm { mov ecx, eax }
	__asm { jmp L_005310aa }
	__asm { L_005310a8: }
	__asm { xor ecx, ecx }
	__asm { L_005310aa: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_00521ef0 }
	__asm { mov bl, 1 }
	__asm { jmp L_005310c1 }
	__asm { L_005310bf: }
	__asm { xor bl, bl }
	__asm { L_005310c1: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00521ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_0040c260();
extern "C" void fn_00531610();
// FUNCTION: ROBLOXSTUDIO 0x00531290
extern "C" __declspec(naked) void asm_00531290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0053131f }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { sub esp, 0x30 }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00531610 }
	__asm { mov bl, 1 }
	__asm { jmp L_00531321 }
	__asm { L_0053131f: }
	__asm { xor bl, bl }
	__asm { L_00531321: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00531333 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00531333: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x005314d0
extern "C" __declspec(naked) void asm_005314d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b99c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0053154a }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea esi, [edi + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00422570 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { pop esi }
	__asm { jmp L_0053154c }
	__asm { L_0053154a: }
	__asm { xor edi, edi }
	__asm { L_0053154c: }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { jb L_0053156b }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0053156b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_0053159d }
	__asm { test al, 1 }
	__asm { jne L_0053159d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0053159d }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0053159d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00531610
extern "C" __declspec(naked) void asm_00531610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8b9c4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00531692 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { pop esi }
	__asm { jmp L_00531694 }
	__asm { L_00531692: }
	__asm { xor edi, edi }
	__asm { L_00531694: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { jb L_005316ac }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005316ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131c790[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00531ef0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00531980
extern "C" __declspec(naked) void asm_00531980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5501c }
	__asm { test al, al }
	__asm { je L_005319f1 }
	__asm { cmp dword ptr [g_0131c790], 0x29a }
	__asm { je L_005319f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005319e0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005319f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005319e0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005319f1: }
	__asm { mov ecx, esi }
	__asm { call fn_00531ef0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00531a4b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00531a4b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00532250();
extern "C" void fn_0099f5e0();
// FUNCTION: ROBLOXSTUDIO 0x005322e0
extern "C" __declspec(naked) void asm_005322e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x130 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00532331 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_0099f5e0 }
	__asm { mov esi, eax }
	__asm { jmp L_00532333 }
	__asm { L_00532331: }
	__asm { xor esi, esi }
	__asm { L_00532333: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00532250 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00532364 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00532364 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00532364: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_005340f0();
extern "C" void fn_00534140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00534340
extern "C" __declspec(naked) void asm_00534340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e540 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edi, ebx }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { jne L_005343a2 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { L_00534383: }
	__asm { cmp ecx, dword ptr [eax + 0x14] }
	__asm { mov edi, eax }
	__asm { setb dl }
	__asm { mov byte ptr [ebp - 0x18], dl }
	__asm { test dl, dl }
	__asm { je L_00534396 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_00534399 }
	__asm { L_00534396: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_00534399: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00534383 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { L_005343a2: }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test dl, dl }
	__asm { je L_005343e8 }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { jne L_005343dd }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { L_005343b9: }
	__asm { push eax }
	__asm { call fn_00534140 }
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
	__asm { L_005343dd: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_005343e8: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jae L_00534403 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { jmp L_005343b9 }
	__asm { L_00534403: }
	__asm { call fn_005340f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_005340f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1169c[];
extern "C" char g_00e116a0[];
extern "C" char g_00e116a4[];
extern "C" char g_00e12198[];
// FUNCTION: ROBLOXSTUDIO 0x00534ba0
extern "C" __declspec(naked) void asm_00534ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp word ptr [esi + 8], 0x33 }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { jne L_00534c0b }
	__asm { push 9 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12198] }
	__asm { test al, al }
	__asm { je L_00534bdb }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1169c] }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00534bdb: }
	__asm { push 0x1a }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12198] }
	__asm { test al, al }
	__asm { je L_00534c00 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e116a0] }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00534c00: }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00534c0b: }
	__asm { push esi }
	__asm { call dword ptr [g_00e116a4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x00534ef0
extern "C" __declspec(naked) void asm_00534ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_00534f3b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00534f3b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00534f8e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102cad8 }
	__asm { mov dword ptr [esi + 8], 0x102cae8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102caf0 }
	__asm { mov dword ptr [esi + 8], 0x102cb00 }
	__asm { jmp L_00534f90 }
	__asm { L_00534f8e: }
	__asm { xor esi, esi }
	__asm { L_00534f90: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00534fad }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00534fad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12eec[];
extern "C" char g_00e12ef0[];
extern "C" char g_00e12f08[];
extern "C" char g_01318fa0[];
extern "C" void fn_00401120();
extern "C" void fn_00463ea0();
// FUNCTION: ROBLOXSTUDIO 0x005355f0
extern "C" __declspec(naked) void asm_005355f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00535692 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [g_00e12ef0] }
	__asm { call edi }
	__asm { test eax, eax }
	__asm { je L_00535692 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12eec] }
	__asm { test eax, eax }
	__asm { je L_00535692 }
	__asm { push 0x102ced8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12eec] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12f08] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp byte ptr [g_01318fa0], 0 }
	__asm { jne L_00535692 }
	__asm { push 0x2710 }
	__asm { push ecx }
	__asm { call fn_00463ea0 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00401120 }
	__asm { L_00535692: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f774[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00535850();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00535ca0
extern "C" __declspec(naked) void asm_00535ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe59740 }
	__asm { test al, al }
	__asm { je L_00535d11 }
	__asm { cmp dword ptr [g_0131f774], 0x29a }
	__asm { je L_00535d11 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00535d00 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00535d11 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00535d00: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00535d11: }
	__asm { mov ecx, esi }
	__asm { call fn_00535850 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00535d6b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00535d6b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fc8[];
extern "C" char g_00e10ffc[];
// FUNCTION: ROBLOXSTUDIO 0x00535fc0
extern "C" __declspec(naked) void asm_00535fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ede2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00536079 }
	__asm { test ebx, ebx }
	__asm { je L_00536079 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0x21 }
	__asm { push 1 }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [g_00e10fc8] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push 0x21 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 8] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, edi }
	__asm { je L_00536074 }
	__asm { xor eax, eax }
	__asm { cmp ecx, edi }
	__asm { setl al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00536074: }
	__asm { cmp dword ptr [ebp - 0x14], ebx }
	__asm { jmp L_0053607b }
	__asm { L_00536079: }
	__asm { cmp ecx, ebx }
	__asm { L_0053607b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { neg eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11018[];
extern "C" char g_00e11110[];
extern "C" char g_00e113b8[];
extern "C" char g_00e1172c[];
extern "C" char g_00e11730[];
extern "C" char g_00e11e10[];
extern "C" char g_00e1294c[];
extern "C" char g_00e12ac4[];
// FUNCTION: ROBLOXSTUDIO 0x005368d0
extern "C" __declspec(naked) void asm_005368d0()
{
	__asm { L_005368d0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00536990 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00536909 }
	__asm { push eax }
	__asm { push esi }
	__asm { call L_005368d0 }
	__asm { L_00536909: }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11018] }
	__asm { xor esi, esi }
	__asm { cmp byte ptr [eax], 0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovne esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e113b8] }
	__asm { test esi, esi }
	__asm { je L_00536963 }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e1294c] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { jmp L_00536971 }
	__asm { L_00536963: }
	__asm { push 5 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e1294c] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { L_00536971: }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1172c] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11e10] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11730] }
	__asm { L_00536990: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11b68[];
extern "C" char g_00e125b4[];
extern "C" char g_00e125ec[];
extern "C" char g_00e125f0[];
extern "C" char g_00e12988[];
extern "C" char g_00e12a60[];
extern "C" char g_00e12ab4[];
extern "C" void fn_00478ce0();
extern "C" void fn_005377a0();
extern "C" void fn_00538630();
extern "C" void fn_00538750();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00537660
extern "C" __declspec(naked) void asm_00537660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f274 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { call fn_00891b30 }
	__asm { add eax, 0x1c }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00537696 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00537696: }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_00538630 }
	__asm { push 0x10035b0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea edx, [esp + 0x20] }
	__asm { lea ecx, [esp + 0x28] }
	__asm { mov dword ptr [esp + 0x40], 1 }
	__asm { call fn_00478ce0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x38], 2 }
	__asm { call dword ptr [g_00e125ec] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x3c], 3 }
	__asm { call dword ptr [g_00e12988] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov byte ptr [esp + 0x34], 2 }
	__asm { call dword ptr [g_00e125b4] }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { call dword ptr [g_00e125f0] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_00538750 }
	__asm { mov dword ptr [edi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { or eax, 2 }
	__asm { and eax, 0xfffffffb }
	__asm { push ecx }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { mov eax, esp }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax], 0x2f }
	__asm { call dword ptr [g_00e12ab4] }
	__asm { mov ecx, edi }
	__asm { call fn_005377a0 }
	__asm { test al, al }
	__asm { je L_0053778c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b68] }
	__asm { L_0053778c: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e12748[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00538f40
extern "C" __declspec(naked) void asm_00538f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12748] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0x12c0b08 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { add esp, 0x10 }
	__asm { test al, 1 }
	__asm { jne L_00538fa8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00538fa8: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_00538fcc }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00538fcc: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fa6[];
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x00539650
extern "C" __declspec(naked) void asm_00539650()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e110a8] }
	__asm { push 0x102d758 }
	__asm { mov esi, ecx }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x102d8a8 }
	__asm { call edi }
	__asm { mov ebx, dword ptr [g_00e11098] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [esi + 0x5c] }
	__asm { call fn_006b9e50 }
	__asm { push 0x102d838 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x102d980 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_01318fa6], 0 }
	__asm { je L_005396c9 }
	__asm { push 0x102d910 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x102da68 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { L_005396c9: }
	__asm { push 0x102d9f0 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0x102db38 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_0131a221[];
extern "C" void fn_00408cf0();
extern "C" void fn_0041ace0();
extern "C" void fn_0045c560();
extern "C" void fn_004fed60();
extern "C" void fn_0053f660();
// FUNCTION: ROBLOXSTUDIO 0x0053a580
extern "C" __declspec(naked) void asm_0053a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f7e9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x54] }
	__asm { test ecx, ecx }
	__asm { je L_0053a624 }
	__asm { call fn_0041ace0 }
	__asm { test eax, eax }
	__asm { je L_0053a624 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_0053f660 }
	__asm { test al, al }
	__asm { je L_0053a624 }
	__asm { lea eax, [edi + 0x68] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x8c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045c560 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [edi + 0x8c] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00408cf0 }
	__asm { movzx eax, byte ptr [g_0131a221] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x84] }
	__asm { call fn_004fed60 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_0053a624: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e11110[];
extern "C" void fn_00535f90();
extern "C" void fn_0053bbc0();
extern "C" void fn_0053bca0();
// FUNCTION: ROBLOXSTUDIO 0x0053bb10
extern "C" __declspec(naked) void asm_0053bb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f509 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_0053bba3 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00535f90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { sete bl }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { je L_0053bb82 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e11000] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 0x20 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_0053bb82: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0053bba3 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0053bca0 }
	__asm { push 3 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0053bbc0 }
	__asm { L_0053bba3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_00e10fc0[];
extern "C" char g_00e10ffc[];
extern "C" char g_01318fa6[];
extern "C" char g_0131a221[];
extern "C" void fn_0053bd90();
extern "C" void fn_0053eaa0();
// FUNCTION: ROBLOXSTUDIO 0x0053bbc0
extern "C" __declspec(naked) void asm_0053bbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8ee22 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0xb2], 0 }
	__asm { jne L_0053bc7f }
	__asm { cmp byte ptr [g_01318fa6], 0 }
	__asm { je L_0053bc2f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [esp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push 0x21 }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_0053bc2f: }
	__asm { lea eax, [esi + 0x68] }
	__asm { push eax }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov dword ptr [esp + 0x2c], 1 }
	__asm { movzx eax, byte ptr [g_0131a221] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { call fn_0053eaa0 }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { test al, al }
	__asm { je L_0053bc6d }
	__asm { mov ecx, esi }
	__asm { call fn_0053bd90 }
	__asm { L_0053bc6d: }
	__asm { lea ecx, [esp + 4] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { L_0053bc7f: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_00e10fc8[];
extern "C" char g_00e10ffc[];
extern "C" char g_01318fa6[];
extern "C" void fn_004fe4f0();
extern "C" void fn_004fe650();
extern "C" void fn_0053e520();
// FUNCTION: ROBLOXSTUDIO 0x0053bca0
extern "C" __declspec(naked) void asm_0053bca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd8f6d2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { lea eax, [edi + 0x68] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { cmp byte ptr [g_01318fa6], 0 }
	__asm { jne L_0053bcf7 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { call fn_0053e520 }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { jmp L_0053bd54 }
	__asm { L_0053bcf7: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x21 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x30], 1 }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { add edi, 0x6c }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { cmp esi, dword ptr [eax + 0x10] }
	__asm { jne L_0053bd44 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_004fe650 }
	__asm { jmp L_0053bd63 }
	__asm { L_0053bd44: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_0053e520 }
	__asm { mov ecx, edi }
	__asm { L_0053bd54: }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_004fe4f0 }
	__asm { L_0053bd63: }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11b70[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0053d230
extern "C" __declspec(naked) void asm_0053d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ebx, ebx }
	__asm { js L_0053d2bc }
	__asm { L_0053d243: }
	__asm { lea eax, [edi + ebx] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { push esi }
	__asm { call dword ptr [g_00e11b70] }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test dl, dl }
	__asm { je L_0053d2a1 }
	__asm { test eax, eax }
	__asm { jne L_0053d2a1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0053d28d }
	__asm { push 0x828 }
	__asm { push 0x102dfd8 }
	__asm { push 0x102dfbc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0053d29e }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_0053d28d: }
	__asm { movzx eax, dl }
	__asm { push 0x102e038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0053d29e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0053d2a1: }
	__asm { mov eax, dword ptr [eax + 0x60] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, eax }
	__asm { je L_0053d2c5 }
	__asm { jle L_0053d2b2 }
	__asm { lea edi, [esi + 1] }
	__asm { jmp L_0053d2b5 }
	__asm { L_0053d2b2: }
	__asm { lea ebx, [esi - 1] }
	__asm { L_0053d2b5: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { cmp edi, ebx }
	__asm { jle L_0053d243 }
	__asm { L_0053d2bc: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0053d2c5: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e109d8[];
extern "C" char g_00e10b88[];
extern "C" char g_00e10e34[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0053dc10();
// FUNCTION: ROBLOXSTUDIO 0x0053da50
extern "C" __declspec(naked) void asm_0053da50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f70d }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { add ecx, -0x50 }
	__asm { push edi }
	__asm { call fn_0053dc10 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0053db7e }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { je L_0053db7e }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { and ecx, 4 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { je L_0053dadc }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x3c], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0053dadc: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esp + 0x40], 1 }
	__asm { call dword ptr [g_00e10b88] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [esp + 0x44], 2 }
	__asm { call dword ptr [g_00e109d8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x3c], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x3c], 5 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call dword ptr [g_00e10e34] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { push ecx }
	__asm { mov byte ptr [esp + 0x40], 6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { mov byte ptr [esp + 0x3c], 5 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x3c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0053db7e: }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e113d0[];
extern "C" char g_00e11774[];
extern "C" char g_00e11b70[];
extern "C" char g_00e12bd0[];
// FUNCTION: ROBLOXSTUDIO 0x0053dcb0
extern "C" __declspec(naked) void asm_0053dcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_0053dcc2 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0053dcc2: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { test edi, edi }
	__asm { jne L_0053dcd2 }
	__asm { call dword ptr [g_00e113d0] }
	__asm { mov edi, eax }
	__asm { L_0053dcd2: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11774] }
	__asm { test eax, eax }
	__asm { jle L_0053dd1f }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11b70] }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { test eax, eax }
	__asm { je L_0053dd17 }
	__asm { L_0053dcf7: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11b70] }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { test eax, eax }
	__asm { jne L_0053dcf7 }
	__asm { L_0053dd17: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0053dd1f: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x0053e600
extern "C" __declspec(naked) void asm_0053e600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0053e64b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0053e64b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0053e692 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102e2b4 }
	__asm { mov dword ptr [esi + 8], 0x102e29c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x102e2fc }
	__asm { mov dword ptr [esi + 8], 0x102e2e4 }
	__asm { jmp L_0053e694 }
	__asm { L_0053e692: }
	__asm { xor esi, esi }
	__asm { L_0053e694: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0053e6b1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0053e6b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x0053e6d0
extern "C" __declspec(naked) void asm_0053e6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0053e71b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0053e71b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0053e762 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102e2a4 }
	__asm { mov dword ptr [esi + 8], 0x102e284 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x102e2ec }
	__asm { mov dword ptr [esi + 8], 0x102e2cc }
	__asm { jmp L_0053e764 }
	__asm { L_0053e762: }
	__asm { xor esi, esi }
	__asm { L_0053e764: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0053e781 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0053e781: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_0041bf30();
extern "C" void fn_00421060();
extern "C" void fn_00421110();
// FUNCTION: ROBLOXSTUDIO 0x0053e800
extern "C" __declspec(naked) void asm_0053e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_0053e84b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0053e84b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0053e89e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe69690 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102e28c }
	__asm { mov dword ptr [esi + 8], 0x102e27c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102e2d4 }
	__asm { mov dword ptr [esi + 8], 0x102e2c4 }
	__asm { jmp L_0053e8a0 }
	__asm { L_0053e89e: }
	__asm { xor esi, esi }
	__asm { L_0053e8a0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0041bf30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0053e8bd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0053e8bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11024[];
extern "C" void fn_0053ec90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0053e8e0
extern "C" __declspec(naked) void asm_0053e8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ee30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0053e92d }
	__asm { sub esp, 8 }
	__asm { call fn_0053ec90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_0053e93a }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_0053e92d: }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { L_0053e93a: }
	__asm { push 0x10 }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_0053e968 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { jmp L_0053e96a }
	__asm { L_0053e968: }
	__asm { xor esi, esi }
	__asm { L_0053e96a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_0053ef30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0053e9b0
extern "C" __declspec(naked) void asm_0053e9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8eaa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov esi, ebx }
	__asm { mov byte ptr [ebp - 0x14], dl }
	__asm { jne L_0053ea12 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { L_0053e9f3: }
	__asm { cmp ecx, dword ptr [eax + 0x14] }
	__asm { mov esi, eax }
	__asm { setb dl }
	__asm { mov byte ptr [ebp - 0x14], dl }
	__asm { test dl, dl }
	__asm { je L_0053ea06 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_0053ea09 }
	__asm { L_0053ea06: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_0053ea09: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0053e9f3 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_0053ea12: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { test dl, dl }
	__asm { je L_0053ea58 }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { jne L_0053ea4d }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push 1 }
	__asm { L_0053ea29: }
	__asm { push eax }
	__asm { call fn_0053ef30 }
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
	__asm { L_0053ea4d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_0040d6f0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_0053ea58: }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, dword ptr [edi + 4] }
	__asm { jae L_0053ea79 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { jmp L_0053ea29 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0053ea79: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov byte ptr [ecx + 4], 0 }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0053f2c0();
// FUNCTION: ROBLOXSTUDIO 0x0053f100
extern "C" __declspec(naked) void asm_0053f100()
{
	__asm { L_0053f100: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub eax, esi }
	__asm { sar eax, 2 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, 2 }
	__asm { jl L_0053f176 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { push ecx }
	__asm { lea esi, [esi + eax*4] }
	__asm { mov eax, esp }
	__asm { push ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, edi }
	__asm { call L_0053f100 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, esp }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call L_0053f100 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, esp }
	__asm { push ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, edi }
	__asm { call fn_0053f2c0 }
	__asm { add esp, 0x10 }
	__asm { L_0053f176: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0053f5a0
extern "C" __declspec(naked) void asm_0053f5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x14 }
	__asm { sub eax, 4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp ecx, eax }
	__asm { jae L_0053f620 }
	__asm { L_0053f5b6: }
	__asm { mov edx, eax }
	__asm { sub eax, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, ecx }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { mov ebx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, eax }
	__asm { jb L_0053f5b6 }
	__asm { L_0053f620: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e11104[];
extern "C" char g_00e12e20[];
extern "C" char g_0131a230[];
extern "C" char g_0131b3d8[];
extern "C" char g_0131c748[];
extern "C" char g_0131c750[];
extern "C" void fn_004021e0();
extern "C" void fn_004f5800();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0053f860
extern "C" __declspec(naked) void asm_0053f860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8f825 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov ecx, 0x131c748 }
	__asm { mov dword ptr [ebp - 0x10], 0x131c748 }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131a230] }
	__asm { mov dword ptr [g_0131c748], 0x102ea58 }
	__asm { mov dword ptr [g_0131c750], 0xffffffff }
	__asm { test al, 1 }
	__asm { jne L_0053f8d5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a230], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004f5800 }
	__asm { push 0xddb880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0053f8d5: }
	__asm { push 0 }
	__asm { push 0x12cb264 }
	__asm { push 0x12cb244 }
	__asm { push 0 }
	__asm { mov ecx, 0x131a224 }
	__asm { call dword ptr [g_00e12e20] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_0053f92a }
	__asm { push 0 }
	__asm { push 0x102e758 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131c748 }
	__asm { push 0x102e828 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_0053f92a: }
	__asm { mov eax, dword ptr [g_0131b3d8] }
	__asm { test al, 1 }
	__asm { jne L_0053f955 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3d8], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004021e0 }
	__asm { push 0xddc850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0053f955: }
	__asm { push 0 }
	__asm { push 0x102e7c0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131c748 }
	__asm { push 0x102e8e8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x131b3c8 }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, 0x131c748 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e109d0[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e10fc8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110dc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e12e38[];
extern "C" void fn_004f5e80();
extern "C" void fn_004f6010();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0053f9a0
extern "C" __declspec(naked) void asm_0053f9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8f842 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12ce6fc }
	__asm { push 0x12bc018 }
	__asm { push 0 }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_0053fa6a }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004f5e80 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12e38] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { cmp esi, 0xc8 }
	__asm { pop esi }
	__asm { je L_0053fa31 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { jmp L_0053fa62 }
	__asm { L_0053fa31: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004f6010 }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e109d0] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110e4] }
	__asm { L_0053fa62: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e110dc] }
	__asm { L_0053fa6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e117a8[];
extern "C" char g_00e117ac[];
extern "C" char g_00e128e4[];
extern "C" char g_00e128e8[];
extern "C" void fn_0053fc70();
extern "C" void fn_00542e50();
// FUNCTION: ROBLOXSTUDIO 0x00542280
extern "C" __declspec(naked) void asm_00542280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8ffe9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { sete al }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [esi + 0x7b], al }
	__asm { test al, al }
	__asm { je L_005422f3 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { call dword ptr [g_00e117a8] }
	__asm { push 0xa }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e128e4] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push eax }
	__asm { call dword ptr [g_00e117ac] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e128e8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005422f3: }
	__asm { cmp byte ptr [esi + 0x78], 0 }
	__asm { jne L_00542310 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00542310 }
	__asm { sub esp, 0x1c }
	__asm { push esp }
	__asm { call fn_0053fc70 }
	__asm { mov ecx, esi }
	__asm { call fn_00542e50 }
	__asm { L_00542310: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e109c0[];
extern "C" char g_00e109c4[];
extern "C" char g_00e10b64[];
extern "C" char g_00e10bac[];
extern "C" char g_012bfc3c[];
extern "C" char g_012bfc44[];
extern "C" char g_01318fb8[];
extern "C" void fn_00572de0();
// FUNCTION: ROBLOXSTUDIO 0x00544380
extern "C" __declspec(naked) void asm_00544380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd900a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e109c0] }
	__asm { cmp byte ptr [esi + 0x79], bl }
	__asm { je L_00544409 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { call fn_00572de0 }
	__asm { test al, al }
	__asm { jne L_00544409 }
	__asm { cmp byte ptr [g_01318fb8], bl }
	__asm { jne L_00544409 }
	__asm { cmp byte ptr [esi + 0x7a], bl }
	__asm { jne L_00544409 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10b64] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ebx, 1 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e109c4] }
	__asm { mov byte ptr [ebp - 0xd], bl }
	__asm { cmp eax, dword ptr [g_012bfc3c] }
	__asm { jl L_0054440d }
	__asm { L_00544409: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_0054440d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [g_00e10bac] }
	__asm { test bl, 1 }
	__asm { je L_00544424 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call edi }
	__asm { L_00544424: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_00544489 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10b64] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, dword ptr [g_00e109c0] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { call ebx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e109c4] }
	__asm { cmp dword ptr [g_012bfc44], eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { setl bl }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call edi }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00544489: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00544d40
extern "C" __declspec(naked) void asm_00544d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_00544d8b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00544d8b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00544dde }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102f410 }
	__asm { mov dword ptr [esi + 8], 0x102f3f8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102f470 }
	__asm { mov dword ptr [esi + 8], 0x102f458 }
	__asm { jmp L_00544de0 }
	__asm { L_00544dde: }
	__asm { xor esi, esi }
	__asm { L_00544de0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00544dfd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00544dfd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0052c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00544e20
extern "C" __declspec(naked) void asm_00544e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_00544e6b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00544e6b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00544ebe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe390dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102f400 }
	__asm { mov dword ptr [esi + 8], 0x102f3e0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102f460 }
	__asm { mov dword ptr [esi + 8], 0x102f440 }
	__asm { jmp L_00544ec0 }
	__asm { L_00544ebe: }
	__asm { xor esi, esi }
	__asm { L_00544ec0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00544edd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00544edd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00544f00
extern "C" __declspec(naked) void asm_00544f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_00544f4b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00544f4b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00544f9e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102f3e8 }
	__asm { mov dword ptr [esi + 8], 0x102f3c8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102f448 }
	__asm { mov dword ptr [esi + 8], 0x102f428 }
	__asm { jmp L_00544fa0 }
	__asm { L_00544f9e: }
	__asm { xor esi, esi }
	__asm { L_00544fa0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00544fbd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00544fbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00545080
extern "C" __declspec(naked) void asm_00545080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_005450cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_005450cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0054511e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x102f3d0 }
	__asm { mov dword ptr [esi + 8], 0x102f3c0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x102f430 }
	__asm { mov dword ptr [esi + 8], 0x102f420 }
	__asm { jmp L_00545120 }
	__asm { L_0054511e: }
	__asm { xor esi, esi }
	__asm { L_00545120: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0054513d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0054513d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11104[];
extern "C" char g_00e11108[];
extern "C" void fn_00409860();
extern "C" void fn_0047ad20();
extern "C" void fn_00535df0();
// FUNCTION: ROBLOXSTUDIO 0x005464d0
extern "C" __declspec(naked) void asm_005464d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9025a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0x1014354 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0x24 }
	__asm { mov dword ptr [esi], 0x102fc68 }
	__asm { mov dword ptr [esi + 8], 0x102fbfc }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00546564 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_0047ad20 }
	__asm { mov edx, eax }
	__asm { jmp L_00546566 }
	__asm { L_00546564: }
	__asm { xor edx, edx }
	__asm { L_00546566: }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00535df0 }
	__asm { add esp, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e117dc[];
extern "C" char g_00e117e4[];
extern "C" char g_00e117e8[];
extern "C" char g_00e117ec[];
extern "C" char g_00e117f0[];
extern "C" char g_00e121a0[];
extern "C" char g_00e12678[];
extern "C" char g_00e12690[];
extern "C" void fn_005678f0();
extern "C" void fn_00567e20();
// FUNCTION: ROBLOXSTUDIO 0x00547e60
extern "C" __declspec(naked) void asm_00547e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e117dc] }
	__asm { mov esi, ecx }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e117e4] }
	__asm { test al, al }
	__asm { je L_00547e9f }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e117e8] }
	__asm { L_00547e9f: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e117ec] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_005678f0 }
	__asm { mov ecx, eax }
	__asm { call fn_00567e20 }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12678] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e117f0] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e121a0] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f5c[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e117cc[];
extern "C" char g_00e117f4[];
extern "C" char g_00e12bc4[];
extern "C" char g_00e12c08[];
extern "C" char g_012bfc39[];
extern "C" void fn_004140a0();
extern "C" void fn_005678f0();
// FUNCTION: ROBLOXSTUDIO 0x00548110
extern "C" __declspec(naked) void asm_00548110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd90722 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012bfc39], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_005481aa }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e117f4] }
	__asm { push 0x1030080 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10f5c] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_0054819e }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e117cc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0054819e: }
	__asm { lea eax, [edi + 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12bc4] }
	__asm { L_005481aa: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c08] }
	__asm { call fn_004140a0 }
	__asm { cmp byte ptr [eax + 0x15a], 0 }
	__asm { je L_005481f3 }
	__asm { push 0 }
	__asm { push 0x1030100 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1030090 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_005678f0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_005481f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f5c[];
extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e11110[];
extern "C" char g_00e117f4[];
extern "C" char g_00e12c04[];
extern "C" char g_012bfc39[];
extern "C" void fn_004140a0();
extern "C" void fn_00547dd0();
extern "C" void fn_005678f0();
// FUNCTION: ROBLOXSTUDIO 0x00548210
extern "C" __declspec(naked) void asm_00548210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012bfc39], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00548272 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e117f4] }
	__asm { push 0xf12f2d }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10f5c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_00548272 }
	__asm { mov ecx, edi }
	__asm { call fn_00547dd0 }
	__asm { L_00548272: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c04] }
	__asm { call fn_004140a0 }
	__asm { cmp byte ptr [eax + 0x15a], 0 }
	__asm { je L_005482b9 }
	__asm { push 0x10301e8 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1030178 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_005678f0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { L_005482b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11030[];
extern "C" char g_00e1115c[];
extern "C" char g_00e11160[];
extern "C" char g_00e11168[];
extern "C" char g_00e118a0[];
extern "C" char g_00e11b90[];
extern "C" char g_00e12904[];
extern "C" char g_00e1290c[];
extern "C" char g_012e0eb0[];
// FUNCTION: ROBLOXSTUDIO 0x00548e40
extern "C" __declspec(naked) void asm_00548e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd90999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov edi, 1 }
	__asm { call dword ptr [g_00e12904] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { cmp eax, edi }
	__asm { lea edx, [ebp - 0x14] }
	__asm { cmovle edx, ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp ecx, 0xa }
	__asm { jl L_00548e9d }
	__asm { L_00548e86: }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { inc edi }
	__asm { cmp ecx, 0xa }
	__asm { jge L_00548e86 }
	__asm { L_00548e9d: }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11160] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [g_012e0eb0], 0 }
	__asm { je L_00548ec2 }
	__asm { mov ebx, dword ptr [esi + 0x2c] }
	__asm { add ebx, dword ptr [esi + 0x28] }
	__asm { jmp L_00548ec5 }
	__asm { L_00548ec2: }
	__asm { mov ebx, dword ptr [esi + 0x28] }
	__asm { L_00548ec5: }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 0x18], 0x39 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call dword ptr [g_00e11030] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11168] }
	__asm { imul edi, eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { add edi, 0xa }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { sub eax, dword ptr [ecx + 0x10] }
	__asm { add edi, ebx }
	__asm { inc eax }
	__asm { cmp eax, edi }
	__asm { je L_00548f0d }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11b90] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e118a0] }
	__asm { L_00548f0d: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1115c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105c0[];
// FUNCTION: ROBLOXSTUDIO 0x0054a210
extern "C" __declspec(naked) void asm_0054a210()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp esi, 0x80 }
	__asm { jge L_0054a296 }
	__asm { push esi }
	__asm { call dword ptr [g_00e105c0] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0054a296 }
	__asm { cmp esi, 0x2a }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x2f }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x2d }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x2b }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x28 }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x29 }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x3d }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x7b }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x7d }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x7e }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x5b }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x5d }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x3b }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x3c }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x3e }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x2c }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x2e }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x5e }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x25 }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x3a }
	__asm { je L_0054a292 }
	__asm { cmp esi, 0x23 }
	__asm { jne L_0054a296 }
	__asm { L_0054a292: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0054a296: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e109bc[];
extern "C" char g_00e10f38[];
// FUNCTION: ROBLOXSTUDIO 0x0054a2a0
extern "C" __declspec(naked) void asm_0054a2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [edx + 1] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ebx, 1 }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jge L_0054a2f8 }
	__asm { mov edi, edi }
	__asm { L_0054a2c0: }
	__asm { push 0x3d }
	__asm { lea ecx, [ebp - 2] }
	__asm { call dword ptr [g_00e10f38] }
	__asm { mov si, word ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e109bc] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { cmp word ptr [eax], si }
	__asm { jne L_0054a2f5 }
	__asm { cmp ebx, 0xff }
	__asm { jge L_0054a2f5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { inc edi }
	__asm { inc ebx }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jl L_0054a2c0 }
	__asm { L_0054a2f5: }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { L_0054a2f8: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edi, [ebx + edx] }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jge L_0054a32c }
	__asm { push edx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e109bc] }
	__asm { mov si, word ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e109bc] }
	__asm { cmp word ptr [eax], si }
	__asm { jne L_0054a32c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0054a32c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11860[];
extern "C" char g_00e12974[];
extern "C" void fn_00414df0();
// FUNCTION: ROBLOXSTUDIO 0x0054a460
extern "C" __declspec(naked) void asm_0054a460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd90ae2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x44] }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e12974] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00414df0 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00414df0 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00414df0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11860] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10d98[];
extern "C" char g_00e1105c[];
extern "C" char g_00e11868[];
extern "C" char g_00e1186c[];
extern "C" void fn_0054a170();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0054bfa0
extern "C" __declspec(naked) void asm_0054bfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [g_00e1105c] }
	__asm { je L_0054c072 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_0054c072 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push ebx }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { xor esi, esi }
	__asm { call dword ptr [g_00e10d98] }
	__asm { xor ecx, ecx }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [ebp + 0xb], cl }
	__asm { lea eax, [ebp + 0xb] }
	__asm { cmove eax, ecx }
	__asm { test eax, eax }
	__asm { je L_0054bfed }
	__asm { lea esi, [ecx + 1] }
	__asm { jmp L_0054c014 }
	__asm { L_0054bfed: }
	__asm { push 1 }
	__asm { push ebx }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10d98] }
	__asm { xor ecx, ecx }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [ebp + 0xb], cl }
	__asm { lea eax, [ebp + 0xb] }
	__asm { cmove eax, ecx }
	__asm { or ecx, 0xffffffff }
	__asm { test eax, eax }
	__asm { cmovne esi, ecx }
	__asm { L_0054c014: }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11868] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test esi, esi }
	__asm { je L_0054c064 }
	__asm { test eax, eax }
	__asm { jne L_0054c055 }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0054c053 }
	__asm { mov ecx, eax }
	__asm { call fn_0054a170 }
	__asm { jmp L_0054c055 }
	__asm { L_0054c053: }
	__asm { xor eax, eax }
	__asm { L_0054c055: }
	__asm { add dword ptr [eax + 8], esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1186c] }
	__asm { L_0054c064: }
	__asm { xor eax, eax }
	__asm { test esi, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0054c072: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fc0[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11880[];
extern "C" char g_00e12944[];
// FUNCTION: ROBLOXSTUDIO 0x0054d620
extern "C" __declspec(naked) void asm_0054d620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88d09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e11880] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { call edi }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { call edi }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { call edi }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { call edi }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { call edi }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { call edi }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { call edi }
	__asm { push 0x4b }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push 0x2003 }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12944] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e11688[];
extern "C" char g_00e12974[];
extern "C" char g_01318fad[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x0054dde0
extern "C" __declspec(naked) void asm_0054dde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd913d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x10317fc }
	__asm { mov dword ptr [edi + 8], 0x10318e0 }
	__asm { mov dword ptr [edi + 0x14], 0x10317e4 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { test ecx, ecx }
	__asm { je L_0054de31 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { L_0054de31: }
	__asm { cmp byte ptr [g_01318fad], 0 }
	__asm { je L_0054de48 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { test ecx, ecx }
	__asm { je L_0054de48 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0054de48: }
	__asm { push esi }
	__asm { lea esi, [edi + 0x3c] }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { lea ecx, [edi + 0x4c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12974] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_006b9e50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0054de92 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0054de92: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11688] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e12b64[];
extern "C" char g_012e0eb0[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0054dec0
extern "C" __declspec(naked) void asm_0054dec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0054df15 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { L_0054df15: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_0054df2a }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { jmp L_0054df49 }
	__asm { L_0054df2a: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { L_0054df49: }
	__asm { cmp byte ptr [g_012e0eb0], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_0054df98 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x12c0048 }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0054df98: }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12b64] }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e116e8[];
extern "C" char g_0131eb88[];
extern "C" void fn_004140a0();
extern "C" void fn_004a4c90();
extern "C" void fn_004a5d70();
extern "C" void fn_005678f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0054dfc0
extern "C" __declspec(naked) void asm_0054dfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e116e8] }
	__asm { mov esi, dword ptr [edi + 0x24] }
	__asm { test esi, esi }
	__asm { je L_0054dff5 }
	__asm { add esi, 8 }
	__asm { jmp L_0054dff7 }
	__asm { L_0054dff5: }
	__asm { xor esi, esi }
	__asm { L_0054dff7: }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0054e02a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_0054e02a: }
	__asm { push esi }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5d70 }
	__asm { call fn_004140a0 }
	__asm { cmp byte ptr [eax + 0x15a], 0 }
	__asm { je L_0054e071 }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x1030e20 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1030db0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_005678f0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e110ac] }
	__asm { add esp, 0x14 }
	__asm { L_0054e071: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" char g_00e1188c[];
extern "C" char g_00e120cc[];
extern "C" char g_00e12908[];
extern "C" char g_00e12910[];
extern "C" char g_00e12914[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" void fn_0054e1e0();
extern "C" void fn_005678f0();
extern "C" void fn_00567e20();
// FUNCTION: ROBLOXSTUDIO 0x0054e100
extern "C" __declspec(naked) void asm_0054e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91a0b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e1291c] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e120cc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12910] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12914] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12920] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e1291c] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e1188c] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12920] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_005678f0 }
	__asm { mov ecx, eax }
	__asm { call fn_00567e20 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, ebx }
	__asm { call fn_0054e1e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e1188c[];
extern "C" char g_00e11890[];
extern "C" char g_00e11894[];
extern "C" char g_00e11898[];
extern "C" char g_00e1189c[];
extern "C" char g_00e120c8[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12938[];
extern "C" char g_00e12940[];
extern "C" char g_00e129a4[];
// FUNCTION: ROBLOXSTUDIO 0x0054e1e0
extern "C" __declspec(naked) void asm_0054e1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91c64 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [g_00e1291c] }
	__asm { push eax }
	__asm { call ebx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11890] }
	__asm { mov esi, dword ptr [g_00e120c8] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xf }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call esi }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11894] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e11898] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call ebx }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call ebx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e1188c] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { sub esi, eax }
	__asm { call dword ptr [g_00e129a4] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e12938] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov esi, dword ptr [g_00e12920] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e1189c] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12940] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e116dc[];
extern "C" char g_00e11e34[];
extern "C" char g_00e11ecc[];
extern "C" char g_00e128c4[];
extern "C" void fn_004140a0();
extern "C" void fn_0054efa0();
// FUNCTION: ROBLOXSTUDIO 0x0054eee0
extern "C" __declspec(naked) void asm_0054eee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { call dword ptr [g_00e11ecc] }
	__asm { test dword ptr [eax], 0x4000000 }
	__asm { je L_0054ef81 }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { test eax, eax }
	__asm { jle L_0054ef16 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { jmp L_0054ef1c }
	__asm { L_0054ef16: }
	__asm { jns L_0054ef21 }
	__asm { push 0 }
	__asm { push -1 }
	__asm { L_0054ef1c: }
	__asm { call fn_0054efa0 }
	__asm { L_0054ef21: }
	__asm { mov esi, dword ptr [esi + 0x34] }
	__asm { call fn_004140a0 }
	__asm { mov ebx, dword ptr [g_00e11e34] }
	__asm { lea ecx, [eax + 0xc4] }
	__asm { call ebx }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { cmp eax, 0x1e }
	__asm { setl al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e128c4] }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov esi, dword ptr [esi + 0x34] }
	__asm { call fn_004140a0 }
	__asm { lea ecx, [eax + 0xc4] }
	__asm { call ebx }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { cmp eax, 5 }
	__asm { setg al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e128c4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or word ptr [eax + 0xa], 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0054ef81: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e116dc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11e34[];
extern "C" char g_00e122f4[];
extern "C" char g_00e12304[];
extern "C" char g_00e1230c[];
extern "C" char g_00e12350[];
extern "C" void fn_004140a0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0054efa0
extern "C" __declspec(naked) void asm_0054efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70239 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { call fn_004140a0 }
	__asm { add eax, 0xc4 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e1230c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0054efe2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jmp L_0054f00c }
	__asm { L_0054efe2: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11e34] }
	__asm { add eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 0xf1b40c }
	__asm { cmp eax, 0x1e }
	__asm { lea edx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmovle ecx, edx }
	__asm { mov eax, 0xf1b574 }
	__asm { cmp dword ptr [ecx], 5 }
	__asm { cmovg eax, ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0054f00c: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e12350] }
	__asm { call fn_004140a0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc4] }
	__asm { call dword ptr [g_00e12304] }
	__asm { push 0x1319158 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10974[];
extern "C" char g_00e1097c[];
extern "C" char g_00e10c6c[];
extern "C" char g_00e11824[];
extern "C" char g_00e1182c[];
extern "C" char g_00e118d8[];
extern "C" char g_00e1290c[];
extern "C" char g_00e12924[];
extern "C" void fn_00549300();
extern "C" void fn_005546d0();
// FUNCTION: ROBLOXSTUDIO 0x00551220
extern "C" __declspec(naked) void asm_00551220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e11824] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { L_00551239: }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { test edx, edx }
	__asm { je L_00551289 }
	__asm { test eax, eax }
	__asm { je L_00551289 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call ebx }
	__asm { test al, al }
	__asm { jne L_00551289 }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push esp }
	__asm { call dword ptr [g_00e1182c] }
	__asm { mov dl, 1 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_005546d0 }
	__asm { mov esi, dword ptr [edi + 0x2c] }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push 1 }
	__asm { call dword ptr [g_00e12924] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00549300 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { jmp L_00551239 }
	__asm { L_00551289: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e118d8] }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10974] }
	__asm { test al, al }
	__asm { jne L_005512bb }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c6c] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005512bb: }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { call dword ptr [g_00e1097c] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11828[];
extern "C" char g_00e12908[];
extern "C" char g_00e12924[];
extern "C" char g_00e12934[];
extern "C" char g_00e129b0[];
extern "C" void fn_00549300();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00551320
extern "C" __declspec(naked) void asm_00551320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x2c] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11828] }
	__asm { mov edi, dword ptr [g_00e12924] }
	__asm { mov ebx, dword ptr [g_00e12934] }
	__asm { L_0055134d: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_005513aa }
	__asm { test eax, eax }
	__asm { je L_005513aa }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { call ebx }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0055139b }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setg al }
	__asm { test al, al }
	__asm { je L_0055139b }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 8] }
	__asm { call edi }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00549300 }
	__asm { L_0055139b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call dword ptr [g_00e129b0] }
	__asm { jmp L_0055134d }
	__asm { L_005513aa: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1182c[];
extern "C" char g_00e11830[];
extern "C" char g_00e12908[];
extern "C" char g_00e12924[];
extern "C" char g_00e12934[];
extern "C" void fn_00549070();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005513c0
extern "C" __declspec(naked) void asm_005513c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x2c] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11830] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e1182c] }
	__asm { mov edi, dword ptr [g_00e12924] }
	__asm { mov ebx, dword ptr [g_00e12934] }
	__asm { L_005513f9: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_00551455 }
	__asm { test eax, eax }
	__asm { je L_00551455 }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { call ebx }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00551446 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setg al }
	__asm { test al, al }
	__asm { je L_00551446 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call edi }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00549070 }
	__asm { L_00551446: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call dword ptr [g_00e1182c] }
	__asm { jmp L_005513f9 }
	__asm { L_00551455: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12790[];
extern "C" char g_00e12a20[];
extern "C" char g_00e12bcc[];
extern "C" char g_0131dffc[];
extern "C" char g_0131e000[];
extern "C" char g_0131e004[];
extern "C" void fn_00454080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00551460
extern "C" __declspec(naked) void asm_00551460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91c08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_005514aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005514aa: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_005514e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005514e7: }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551524 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551524: }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { call dword ptr [g_00e12790] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551561 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551561: }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xd4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e121a4[];
extern "C" char g_00e12790[];
extern "C" char g_00e12794[];
extern "C" char g_00e12c8c[];
extern "C" char g_0131dffc[];
extern "C" char g_0131e000[];
extern "C" char g_0131e004[];
extern "C" void fn_00451ba0();
extern "C" void fn_00454080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00551580
extern "C" __declspec(naked) void asm_00551580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd872da }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_005515cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005515cc: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { test al, al }
	__asm { jne L_005515ec }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { L_005515ec: }
	__asm { call fn_00451ba0 }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551622 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551622: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { jne L_00551691 }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551663 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551663: }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { jne L_00551691 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e121a4] }
	__asm { test al, al }
	__asm { jne L_00551691 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12790] }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_00551691: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e121a4[];
extern "C" char g_00e12790[];
extern "C" char g_00e12794[];
extern "C" char g_00e12c8c[];
extern "C" char g_0131dffc[];
extern "C" char g_0131e000[];
extern "C" char g_0131e004[];
extern "C" void fn_00451ba0();
extern "C" void fn_00454080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005516a0
extern "C" __declspec(naked) void asm_005516a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd872da }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_005516ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005516ec: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { test al, al }
	__asm { jne L_0055170c }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { L_0055170c: }
	__asm { call fn_00451ba0 }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551742 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551742: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { jne L_005517b1 }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551783 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551783: }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { jne L_005517b1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e121a4] }
	__asm { test al, al }
	__asm { jne L_005517b1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12790] }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_005517b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12790[];
extern "C" char g_00e12a20[];
extern "C" char g_00e12bcc[];
extern "C" char g_0131dffc[];
extern "C" char g_0131e000[];
extern "C" char g_0131e004[];
extern "C" void fn_00454080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005517c0
extern "C" __declspec(naked) void asm_005517c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91c08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_0055180a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055180a: }
	__asm { mov ecx, dword ptr [g_0131e000] }
	__asm { call dword ptr [g_00e12bcc] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551847 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551847: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_00551884 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00551884: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { call dword ptr [g_00e12790] }
	__asm { mov eax, dword ptr [g_0131dffc] }
	__asm { test al, 1 }
	__asm { jne L_005518c1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dffc], eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00454080 }
	__asm { push 0xddc730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005518c1: }
	__asm { mov ecx, dword ptr [g_0131e004] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xd4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11514[];
extern "C" char g_00e12b48[];
// FUNCTION: ROBLOXSTUDIO 0x00551b30
extern "C" __declspec(naked) void asm_00551b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8d9ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e12b48] }
	__asm { test eax, eax }
	__asm { je L_00551bc9 }
	__asm { push esi }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11514] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00551b98 }
	__asm { push 0x1031228 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push ecx }
	__asm { mov ebx, 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call eax }
	__asm { mov byte ptr [ebp - 0xd], bl }
	__asm { test al, al }
	__asm { jne L_00551b9c }
	__asm { L_00551b98: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_00551b9c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test bl, 1 }
	__asm { je L_00551bb2 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00551bb2: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_00551bc9 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00551bc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11900[];
extern "C" char g_00e12908[];
extern "C" char g_00e12910[];
extern "C" char g_00e12918[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12938[];
extern "C" char g_00e1293c[];
extern "C" char g_00e12940[];
extern "C" void fn_00551220();
// FUNCTION: ROBLOXSTUDIO 0x00553220
extern "C" __declspec(naked) void asm_00553220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd91ad9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1291c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11900] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { jl L_005532ba }
	__asm { push ecx }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12910] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e1293c] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call dword ptr [g_00e12938] }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12940] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e12918] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00551220 }
	__asm { L_005532ba: }
	__asm { lea ecx, [esp + 4] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10974[];
extern "C" char g_00e1097c[];
extern "C" char g_00e10c6c[];
extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e11818[];
extern "C" char g_00e118d8[];
extern "C" char g_00e1290c[];
extern "C" char g_00e12980[];
// FUNCTION: ROBLOXSTUDIO 0x00553380
extern "C" __declspec(naked) void asm_00553380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_005533ca }
	__asm { mov esi, dword ptr [g_00e12980] }
	__asm { call esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x30] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11818] }
	__asm { push 0x1031498 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { jmp L_005533d0 }
	__asm { L_005533ca: }
	__asm { call dword ptr [g_00e118d8] }
	__asm { L_005533d0: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10974] }
	__asm { test al, al }
	__asm { jne L_005533f9 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c6c] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005533f9: }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { call dword ptr [g_00e1097c] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00554940();
// FUNCTION: ROBLOXSTUDIO 0x00553420
extern "C" __declspec(naked) void asm_00553420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91eb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x131a0fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00554940 }
	__asm { lea ecx, [eax + 4] }
	__asm { push -1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { cmp eax, 1 }
	__asm { jle L_0055349e }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { call fn_004038a0 }
	__asm { jmp L_005534ab }
	__asm { L_0055349e: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_005534ab: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x131a0fc }
	__asm { call fn_00554940 }
	__asm { lea ecx, [eax + 4] }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmp ecx, eax }
	__asm { je L_005534d5 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_005534d5: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_005534e7 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005534e7: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_0055350b }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0055350b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10dc4[];
extern "C" char g_00e10efc[];
extern "C" char g_00e10f00[];
extern "C" char g_00e10f6c[];
extern "C" char g_00e11110[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12928[];
extern "C" char g_00e129a0[];
// FUNCTION: ROBLOXSTUDIO 0x005541c0
extern "C" __declspec(naked) void asm_005541c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91cbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e1291c] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call edi }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e129a0] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { test bl, bl }
	__asm { je L_005542a2 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12928] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00554251 }
	__asm { call dword ptr [g_00e10f00] }
	__asm { jmp L_00554292 }
	__asm { L_00554251: }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { jge L_00554267 }
	__asm { push 0x3e8 }
	__asm { call dword ptr [g_00e10efc] }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { jmp L_00554288 }
	__asm { L_00554267: }
	__asm { lea edi, [esi + 0x4c] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10dc4] }
	__asm { test eax, eax }
	__asm { je L_00554292 }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { push 0x3e8 }
	__asm { call dword ptr [g_00e10efc] }
	__asm { mov ecx, edi }
	__asm { L_00554288: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { L_00554292: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_005542a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1182c[];
extern "C" char g_00e12934[];
extern "C" char g_00e129b0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005546d0
extern "C" __declspec(naked) void asm_005546d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov bl, dl }
	__asm { xor edi, edi }
	__asm { L_005546e7: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { je L_0055474f }
	__asm { test eax, eax }
	__asm { je L_0055474f }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12934] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00554719 }
	__asm { add edi, dword ptr [eax + 8] }
	__asm { L_00554719: }
	__asm { test bl, bl }
	__asm { je L_00554736 }
	__asm { test edi, edi }
	__asm { jns L_0055474f }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1182c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { jmp L_005546e7 }
	__asm { L_00554736: }
	__asm { test edi, edi }
	__asm { jle L_0055474f }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e129b0] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { jmp L_005546e7 }
	__asm { L_0055474f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x00554da0
extern "C" __declspec(naked) void asm_00554da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
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
	__asm { je L_00554deb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00554deb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00554e3e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1031738 }
	__asm { mov dword ptr [esi + 8], 0x1031748 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0x1031758 }
	__asm { mov dword ptr [esi + 8], 0x1031750 }
	__asm { jmp L_00554e40 }
	__asm { L_00554e3e: }
	__asm { xor esi, esi }
	__asm { L_00554e40: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00554e5d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00554e5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_004f4cb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00554e80
extern "C" __declspec(naked) void asm_00554e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91261 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00554eb5: }
	__asm { test edi, edi }
	__asm { je L_00554f1c }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00554eef }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_00554eef: }
	__asm { dec edi }
	__asm { add esi, 0x20 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jmp L_00554eb5 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, edi }
	__asm { je L_00554f13 }
	__asm { L_00554f06: }
	__asm { push esi }
	__asm { call fn_004f4cb0 }
	__asm { add esi, 0x20 }
	__asm { cmp esi, edi }
	__asm { jne L_00554f06 }
	__asm { L_00554f13: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00554f1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ebc[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c98[];
extern "C" char g_00e12298[];
extern "C" char g_00e1239c[];
extern "C" void fn_00403410();
// FUNCTION: ROBLOXSTUDIO 0x005550f0
extern "C" __declspec(naked) void asm_005550f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd81b26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [esi], 0x1031bdc }
	__asm { mov dword ptr [esi + 8], 0x1031bc0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12298] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ebc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11c98] }
	__asm { push 0x1019e68 }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1239c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012e4b8c[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_0055a170();
extern "C" void fn_0055a210();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
// FUNCTION: ROBLOXSTUDIO 0x00555c00
extern "C" __declspec(naked) void asm_00555c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92a76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe4ff5c }
	__asm { mov dword ptr [esi + 4], 0xe4ffd4 }
	__asm { mov dword ptr [esi + 0x18], 0xe4ffdc }
	__asm { mov dword ptr [esi + 0x1c], 0xe4ffe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0055a210 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b8c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe4fffc }
	__asm { mov dword ptr [esi + 4], 0xe50074 }
	__asm { mov dword ptr [esi + 0x18], 0xe5007c }
	__asm { mov dword ptr [esi + 0x1c], 0xe50088 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0x123c0bc }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [esi + 0x7c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x55a200 }
	__asm { push 0x131c95c }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0055a170 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00555d09 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00555d09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012e4b7c[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_0043f140();
extern "C" void fn_0055a290();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
// FUNCTION: ROBLOXSTUDIO 0x00555e50
extern "C" __declspec(naked) void asm_00555e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92a36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe500a4 }
	__asm { mov dword ptr [esi + 4], 0xe5011c }
	__asm { mov dword ptr [esi + 0x18], 0xe50124 }
	__asm { mov dword ptr [esi + 0x1c], 0xe50130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0055a290 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b7c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe50144 }
	__asm { mov dword ptr [esi + 4], 0xe501bc }
	__asm { mov dword ptr [esi + 0x18], 0xe501c4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe501d0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { lea eax, [esi + 0x6c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f140 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00555f45 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00555f45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f8f8[];
extern "C" char g_0131f9e0[];
extern "C" char g_0131faa0[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x005596d0
extern "C" __declspec(naked) void asm_005596d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd9225e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00559735 }
	__asm { cmp dword ptr [g_0131f9e0], 0x29a }
	__asm { je L_00559735 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00559724 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00559735 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00559724: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00559735: }
	__asm { push 0x563ce0 }
	__asm { push 0x131c9d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131f8f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0055977f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f8f8], eax }
	__asm { push 0xf1b12c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131faa0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0055977f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131faa0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f918[];
extern "C" char g_0131f978[];
extern "C" char g_0131fc90[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00559eb0
extern "C" __declspec(naked) void asm_00559eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd92b9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00559f15 }
	__asm { cmp dword ptr [g_0131f978], 0x29a }
	__asm { je L_00559f15 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00559f04 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00559f15 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00559f04: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00559f15: }
	__asm { push 0x563f10 }
	__asm { push 0x131c9c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131fc90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00559f5f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131fc90], eax }
	__asm { push 0xf1ac2c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131f918], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00559f5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131f918] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f8ec[];
extern "C" char g_0131f904[];
extern "C" char g_0131f994[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0055a0a0
extern "C" __declspec(naked) void asm_0055a0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd9233e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0055a105 }
	__asm { cmp dword ptr [g_0131f994], 0x29a }
	__asm { je L_0055a105 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055a0f4 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055a105 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055a0f4: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055a105: }
	__asm { push 0x563f60 }
	__asm { push 0x131c9e0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131f904] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0055a14f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f904], eax }
	__asm { push 0xf1aaac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131f8ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0055a14f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131f8ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0055a770
extern "C" __declspec(naked) void asm_0055a770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { lea eax, [esi + edx*4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { cmp esi, eax }
	__asm { je L_0055a808 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push edi }
	__asm { L_0055a792: }
	__asm { mov edi, dword ptr [esi] }
	__asm { cmp edi, esi }
	__asm { je L_0055a7fc }
	__asm { L_0055a798: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [edi - 0xc] }
	__asm { add edi, -0x24 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test esi, esi }
	__asm { je L_0055a7cb }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0055a7b4 }
	__asm { push dword ptr [esi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0055a7b4: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0055a7cb: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0055a7d8 }
	__asm { push dword ptr [edi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0055a7d8: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call ebx }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { cmp edi, esi }
	__asm { jne L_0055a798 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { L_0055a7fc: }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { cmp esi, eax }
	__asm { jne L_0055a792 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0055a808: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x0055a810
extern "C" __declspec(naked) void asm_0055a810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push 0x10320b0 }
	__asm { push 0x1032040 }
	__asm { mov esi, ecx }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x10320b0 }
	__asm { jne L_0055a83e }
	__asm { sub eax, 4 }
	__asm { L_0055a83e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { je L_0055a866 }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_0055a860 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0055a868 }
	__asm { L_0055a860: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0055a866: }
	__asm { xor eax, eax }
	__asm { L_0055a868: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { cmp eax, ecx }
	__asm { je L_0055a87d }
	__asm { L_0055a874: }
	__asm { mov dword ptr [eax], eax }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_0055a874 }
	__asm { L_0055a87d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + ecx*4], edx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00564f70();
extern "C" void fn_009cb7e0();
// FUNCTION: ROBLOXSTUDIO 0x0055aee0
extern "C" __declspec(naked) void asm_0055aee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x130 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0055af31 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_009cb7e0 }
	__asm { mov esi, eax }
	__asm { jmp L_0055af33 }
	__asm { L_0055af31: }
	__asm { xor esi, esi }
	__asm { L_0055af33: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00564f70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0055af64 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055af64 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055af64: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00565000();
extern "C" void fn_009d1de0();
// FUNCTION: ROBLOXSTUDIO 0x0055af80
extern "C" __declspec(naked) void asm_0055af80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x398 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0055afd1 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_009d1de0 }
	__asm { mov esi, eax }
	__asm { jmp L_0055afd3 }
	__asm { L_0055afd1: }
	__asm { xor esi, esi }
	__asm { L_0055afd3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00565000 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0055b004 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055b004 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055b004: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e414[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048e9e0();
extern "C" void fn_00565510();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0055b520
extern "C" __declspec(naked) void asm_0055b520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9245e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x64 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055b5bb }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x10327f4 }
	__asm { mov dword ptr [esi + 4], 0x1031fb0 }
	__asm { mov dword ptr [esi + 0x18], 0x1032788 }
	__asm { mov dword ptr [esi + 0x1c], 0x10327b8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048e9e0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e414] }
	__asm { mov dword ptr [esi], 0x1031d5c }
	__asm { mov dword ptr [esi + 4], 0x10322f8 }
	__asm { mov dword ptr [esi + 0x18], 0x103277c }
	__asm { mov dword ptr [esi + 0x1c], 0x1032614 }
	__asm { jmp L_0055b5bd }
	__asm { L_0055b5bb: }
	__asm { xor esi, esi }
	__asm { L_0055b5bd: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00565510 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0055b5eb }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055b5eb }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055b5eb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00556080();
extern "C" void fn_005655a0();
// FUNCTION: ROBLOXSTUDIO 0x0055b600
extern "C" __declspec(naked) void asm_0055b600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0xa4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0055b654 }
	__asm { mov ecx, eax }
	__asm { call fn_00556080 }
	__asm { mov edi, eax }
	__asm { jmp L_0055b656 }
	__asm { L_0055b654: }
	__asm { xor edi, edi }
	__asm { L_0055b656: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_005655a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0055b684 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055b684 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055b684: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e424[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048f850();
extern "C" void fn_00565630();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0055b6a0
extern "C" __declspec(naked) void asm_0055b6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd924ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x64 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055b73b }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x10320b4 }
	__asm { mov dword ptr [esi + 4], 0x10322c8 }
	__asm { mov dword ptr [esi + 0x18], 0x10321c4 }
	__asm { mov dword ptr [esi + 0x1c], 0x10326b4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048f850 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e424] }
	__asm { mov dword ptr [esi], 0x1031dd4 }
	__asm { mov dword ptr [esi + 4], 0x103260c }
	__asm { mov dword ptr [esi + 0x18], 0x10325bc }
	__asm { mov dword ptr [esi + 0x1c], 0x1032308 }
	__asm { jmp L_0055b73d }
	__asm { L_0055b73b: }
	__asm { xor esi, esi }
	__asm { L_0055b73d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00565630 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0055b76b }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055b76b }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055b76b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e418[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048e860();
extern "C" void fn_005656c0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0055b780
extern "C" __declspec(naked) void asm_0055b780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd924be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x64 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055b81b }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x1032394 }
	__asm { mov dword ptr [esi + 4], 0x10321f8 }
	__asm { mov dword ptr [esi + 0x18], 0x103240c }
	__asm { mov dword ptr [esi + 0x1c], 0x1031fa0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048e860 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e418] }
	__asm { mov dword ptr [esi], 0x103231c }
	__asm { mov dword ptr [esi + 4], 0x1031e58 }
	__asm { mov dword ptr [esi + 0x18], 0x1031e60 }
	__asm { mov dword ptr [esi + 0x1c], 0x10322d0 }
	__asm { jmp L_0055b81d }
	__asm { L_0055b81b: }
	__asm { xor esi, esi }
	__asm { L_0055b81d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_005656c0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0055b84b }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055b84b }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055b84b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e41c[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048e7e0();
extern "C" void fn_00565750();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0055b860
extern "C" __declspec(naked) void asm_0055b860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9251e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x64 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055b8fb }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x1032544 }
	__asm { mov dword ptr [esi + 4], 0x10321f0 }
	__asm { mov dword ptr [esi + 0x18], 0x10322ec }
	__asm { mov dword ptr [esi + 0x1c], 0x10326cc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048e7e0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e41c] }
	__asm { mov dword ptr [esi], 0x1031cb4 }
	__asm { mov dword ptr [esi + 4], 0x1032218 }
	__asm { mov dword ptr [esi + 0x18], 0x10326dc }
	__asm { mov dword ptr [esi + 0x1c], 0x1031d2c }
	__asm { jmp L_0055b8fd }
	__asm { L_0055b8fb: }
	__asm { xor esi, esi }
	__asm { L_0055b8fd: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00565750 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0055b92b }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055b92b }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055b92b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e428[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048e760();
extern "C" void fn_005657e0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0055b940
extern "C" __declspec(naked) void asm_0055b940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9248e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x64 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055b9db }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x1031e74 }
	__asm { mov dword ptr [esi + 4], 0x10322a8 }
	__asm { mov dword ptr [esi + 0x18], 0x1031e4c }
	__asm { mov dword ptr [esi + 0x1c], 0x10325d0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048e760 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e428] }
	__asm { mov dword ptr [esi], 0x1031eec }
	__asm { mov dword ptr [esi + 4], 0x10325c8 }
	__asm { mov dword ptr [esi + 0x18], 0x1032034 }
	__asm { mov dword ptr [esi + 0x1c], 0x10327c8 }
	__asm { jmp L_0055b9dd }
	__asm { L_0055b9db: }
	__asm { xor esi, esi }
	__asm { L_0055b9dd: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_005657e0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0055ba0b }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055ba0b }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055ba0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131e42c[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048e6e0();
extern "C" void fn_00565870();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0055ba20
extern "C" __declspec(naked) void asm_0055ba20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9242e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x64 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055babb }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0x1031fbc }
	__asm { mov dword ptr [esi + 4], 0x1031f6c }
	__asm { mov dword ptr [esi + 0x18], 0x103229c }
	__asm { mov dword ptr [esi + 0x1c], 0x10321d0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0048e6e0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_0131e42c] }
	__asm { mov dword ptr [esi], 0x1032704 }
	__asm { mov dword ptr [esi + 4], 0x1032300 }
	__asm { mov dword ptr [esi + 0x18], 0x1031f94 }
	__asm { mov dword ptr [esi + 0x1c], 0x103288c }
	__asm { jmp L_0055babd }
	__asm { L_0055babb: }
	__asm { xor esi, esi }
	__asm { L_0055babd: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00565870 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0055baeb }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055baeb }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055baeb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00559f80();
extern "C" void fn_00565900();
// FUNCTION: ROBLOXSTUDIO 0x0055bb00
extern "C" __declspec(naked) void asm_0055bb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0055bb6f }
	__asm { mov ecx, esi }
	__asm { call fn_00559f80 }
	__asm { mov dword ptr [esi], 0x103241c }
	__asm { mov dword ptr [esi + 4], 0x103250c }
	__asm { mov dword ptr [esi + 0x18], 0x103269c }
	__asm { mov dword ptr [esi + 0x1c], 0x10327d8 }
	__asm { jmp L_0055bb71 }
	__asm { L_0055bb6f: }
	__asm { xor esi, esi }
	__asm { L_0055bb71: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00565900 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0055bb9f }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0055bb9f }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0055bb9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f998[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558980();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055ccd0
extern "C" __declspec(naked) void asm_0055ccd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe55044 }
	__asm { test al, al }
	__asm { je L_0055cd41 }
	__asm { cmp dword ptr [g_0131f998], 0x29a }
	__asm { je L_0055cd41 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055cd30 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055cd41 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055cd30: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055cd41: }
	__asm { mov ecx, esi }
	__asm { call fn_00558980 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055cd9b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055cd9b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9a4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005589e0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055cfe0
extern "C" __declspec(naked) void asm_0055cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5504c }
	__asm { test al, al }
	__asm { je L_0055d051 }
	__asm { cmp dword ptr [g_0131f9a4], 0x29a }
	__asm { je L_0055d051 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055d040 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055d051 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055d040: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055d051: }
	__asm { mov ecx, esi }
	__asm { call fn_005589e0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055d0ab }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055d0ab: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f94c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558a40();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055d2f0
extern "C" __declspec(naked) void asm_0055d2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33200 }
	__asm { test al, al }
	__asm { je L_0055d361 }
	__asm { cmp dword ptr [g_0131f94c], 0x29a }
	__asm { je L_0055d361 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055d350 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055d361 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055d350: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055d361: }
	__asm { mov ecx, esi }
	__asm { call fn_00558a40 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055d3bb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055d3bb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f99c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558aa0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055d600
extern "C" __declspec(naked) void asm_0055d600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe40d54 }
	__asm { test al, al }
	__asm { je L_0055d671 }
	__asm { cmp dword ptr [g_0131f99c], 0x29a }
	__asm { je L_0055d671 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055d660 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055d671 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055d660: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055d671: }
	__asm { mov ecx, esi }
	__asm { call fn_00558aa0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055d6cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055d6cb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f980[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558e30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055d910
extern "C" __declspec(naked) void asm_0055d910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe55054 }
	__asm { test al, al }
	__asm { je L_0055d981 }
	__asm { cmp dword ptr [g_0131f980], 0x29a }
	__asm { je L_0055d981 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055d970 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055d981 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055d970: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055d981: }
	__asm { mov ecx, esi }
	__asm { call fn_00558e30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055d9db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055d9db: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558e90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055dc20
extern "C" __declspec(naked) void asm_0055dc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4ff3c }
	__asm { test al, al }
	__asm { je L_0055dc91 }
	__asm { cmp dword ptr [g_0131f9ac], 0x29a }
	__asm { je L_0055dc91 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055dc80 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055dc91 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055dc80: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055dc91: }
	__asm { mov ecx, esi }
	__asm { call fn_00558e90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055dceb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055dceb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f964[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558ef0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055df30
extern "C" __declspec(naked) void asm_0055df30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4ff44 }
	__asm { test al, al }
	__asm { je L_0055dfa1 }
	__asm { cmp dword ptr [g_0131f964], 0x29a }
	__asm { je L_0055dfa1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055df90 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055dfa1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055df90: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055dfa1: }
	__asm { mov ecx, esi }
	__asm { call fn_00558ef0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055dffb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055dffb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9a8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558f50();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055e240
extern "C" __declspec(naked) void asm_0055e240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4e248 }
	__asm { test al, al }
	__asm { je L_0055e2b1 }
	__asm { cmp dword ptr [g_0131f9a8], 0x29a }
	__asm { je L_0055e2b1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055e2a0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055e2b1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055e2a0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055e2b1: }
	__asm { mov ecx, esi }
	__asm { call fn_00558f50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055e30b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055e30b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9d0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00558fb0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055e550
extern "C" __declspec(naked) void asm_0055e550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4e250 }
	__asm { test al, al }
	__asm { je L_0055e5c1 }
	__asm { cmp dword ptr [g_0131f9d0], 0x29a }
	__asm { je L_0055e5c1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055e5b0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055e5c1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055e5b0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055e5c1: }
	__asm { mov ecx, esi }
	__asm { call fn_00558fb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055e61b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055e61b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
