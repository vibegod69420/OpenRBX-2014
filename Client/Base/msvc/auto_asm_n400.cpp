// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0068a0d0();
// FUNCTION: ROBLOXSTUDIO 0x0068a450
extern "C" __declspec(naked) void asm_0068a450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea esi, [ecx + 0xc] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0068a498 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_0068a498: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { call fn_0068a0d0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0068a4d6 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0068a4d6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0068a4d6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068a4d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_012de478[];
extern "C" char g_012de47c[];
extern "C" char g_012de480[];
extern "C" char g_012de484[];
extern "C" char g_012de488[];
extern "C" char g_012de48c[];
extern "C" char g_012de490[];
extern "C" char g_012de494[];
extern "C" char g_012de498[];
extern "C" char g_012de49e[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
// FUNCTION: ROBLOXSTUDIO 0x0068a9a0
extern "C" __declspec(naked) void asm_0068a9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { mov ecx, 0x12de478 }
	__asm { L_0068a9b4: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0068a9bf }
	__asm { add esi, -0xc }
	__asm { jmp L_0068a9c1 }
	__asm { L_0068a9bf: }
	__asm { xor esi, esi }
	__asm { L_0068a9c1: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp byte ptr [g_012de49e], 0 }
	__asm { jne L_0068aa30 }
	__asm { mov byte ptr [g_012de49e], 1 }
	__asm { mov dword ptr [g_012de478], 0 }
	__asm { mov dword ptr [g_012de47c], 0 }
	__asm { mov dword ptr [g_012de480], 0 }
	__asm { mov dword ptr [g_012de484], 0 }
	__asm { mov dword ptr [g_012de488], 0 }
	__asm { mov dword ptr [g_012de48c], 0x14 }
	__asm { mov dword ptr [g_012de490], 0x20 }
	__asm { mov dword ptr [g_012de494], 0x20 }
	__asm { mov dword ptr [g_012de498], 0 }
	__asm { L_0068aa30: }
	__asm { call fn_0040ed30 }
	__asm { mov eax, dword ptr [g_012de480] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [g_012de480], esi }
	__asm { mov eax, 0x80000000 }
	__asm { mov ecx, 0x12de478 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068aaa5 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068aaa5 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0068aaa5 }
	__asm { mov esi, dword ptr [g_012de47c] }
	__asm { test esi, esi }
	__asm { jne L_0068aa99 }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { mov esi, 0x12de47c }
	__asm { lock cmpxchg dword ptr [esi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0068aa97 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0068aa99 }
	__asm { L_0068aa97: }
	__asm { mov esi, edx }
	__asm { L_0068aa99: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov ecx, 0x12de478 }
	__asm { L_0068aaa5: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc ebx }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_0068a9b4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_012de450[];
extern "C" char g_012de454[];
extern "C" char g_012de458[];
extern "C" char g_012de45c[];
extern "C" char g_012de460[];
extern "C" char g_012de464[];
extern "C" char g_012de468[];
extern "C" char g_012de46c[];
extern "C" char g_012de470[];
extern "C" char g_012de49d[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
// FUNCTION: ROBLOXSTUDIO 0x0068aad0
extern "C" __declspec(naked) void asm_0068aad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { mov ecx, 0x12de450 }
	__asm { L_0068aae4: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0068aaef }
	__asm { add esi, -4 }
	__asm { jmp L_0068aaf1 }
	__asm { L_0068aaef: }
	__asm { xor esi, esi }
	__asm { L_0068aaf1: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp byte ptr [g_012de49d], 0 }
	__asm { jne L_0068ab60 }
	__asm { mov byte ptr [g_012de49d], 1 }
	__asm { mov dword ptr [g_012de450], 0 }
	__asm { mov dword ptr [g_012de454], 0 }
	__asm { mov dword ptr [g_012de458], 0 }
	__asm { mov dword ptr [g_012de45c], 0 }
	__asm { mov dword ptr [g_012de460], 0 }
	__asm { mov dword ptr [g_012de464], 0xc }
	__asm { mov dword ptr [g_012de468], 0x20 }
	__asm { mov dword ptr [g_012de46c], 0x20 }
	__asm { mov dword ptr [g_012de470], 0 }
	__asm { L_0068ab60: }
	__asm { call fn_0040ed30 }
	__asm { mov eax, dword ptr [g_012de458] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [g_012de458], esi }
	__asm { mov eax, 0x80000000 }
	__asm { mov ecx, 0x12de450 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068abd5 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068abd5 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0068abd5 }
	__asm { mov esi, dword ptr [g_012de454] }
	__asm { test esi, esi }
	__asm { jne L_0068abc9 }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { mov esi, 0x12de454 }
	__asm { lock cmpxchg dword ptr [esi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0068abc7 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0068abc9 }
	__asm { L_0068abc7: }
	__asm { mov esi, edx }
	__asm { L_0068abc9: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov ecx, 0x12de450 }
	__asm { L_0068abd5: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc ebx }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_0068aae4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
extern "C" void fn_0068b1b0();
extern "C" void fn_0068b240();
// FUNCTION: ROBLOXSTUDIO 0x0068ac00
extern "C" __declspec(naked) void asm_0068ac00()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { inc esi }
	__asm { call fn_0068b240 }
	__asm { cmp esi, 1 }
	__asm { jne L_0068ac4c }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068acbb }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068acbb }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0068acbb }
	__asm { lea edi, [esi + 4] }
	__asm { jmp L_0068ac80 }
	__asm { L_0068ac4c: }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { push esi }
	__asm { push ebx }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0068b1b0 }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068acbb }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068acbb }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_0068acbb }
	__asm { add edi, 4 }
	__asm { L_0068ac80: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0068acb4 }
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
	__asm { je L_0068acb2 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0068acb2: }
	__asm { mov esi, edx }
	__asm { L_0068acb4: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068acbb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_012de450[];
extern "C" char g_012de454[];
extern "C" char g_012de458[];
extern "C" char g_012de45c[];
extern "C" char g_012de460[];
extern "C" char g_012de464[];
extern "C" char g_012de468[];
extern "C" char g_012de46c[];
extern "C" char g_012de470[];
extern "C" char g_012de49d[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
// FUNCTION: ROBLOXSTUDIO 0x0068aeb0
extern "C" __declspec(naked) void asm_0068aeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { div dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { add esi, 4 }
	__asm { mov ebx, edx }
	__asm { mov edi, dword ptr [eax + ebx*4] }
	__asm { L_0068aed0: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_0068aeda }
	__asm { mov edi, eax }
	__asm { jmp L_0068aed0 }
	__asm { L_0068aeda: }
	__asm { mov ecx, 0x12de450 }
	__asm { nop }
	__asm { L_0068aee0: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0068aeeb }
	__asm { add esi, -4 }
	__asm { jmp L_0068aeed }
	__asm { L_0068aeeb: }
	__asm { xor esi, esi }
	__asm { L_0068aeed: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp byte ptr [g_012de49d], 0 }
	__asm { jne L_0068af5c }
	__asm { mov byte ptr [g_012de49d], 1 }
	__asm { mov dword ptr [g_012de450], 0 }
	__asm { mov dword ptr [g_012de454], 0 }
	__asm { mov dword ptr [g_012de458], 0 }
	__asm { mov dword ptr [g_012de45c], 0 }
	__asm { mov dword ptr [g_012de460], 0 }
	__asm { mov dword ptr [g_012de464], 0xc }
	__asm { mov dword ptr [g_012de468], 0x20 }
	__asm { mov dword ptr [g_012de46c], 0x20 }
	__asm { mov dword ptr [g_012de470], 0 }
	__asm { L_0068af5c: }
	__asm { call fn_0040ed30 }
	__asm { mov eax, dword ptr [g_012de458] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [g_012de458], esi }
	__asm { mov eax, 0x80000000 }
	__asm { mov ecx, 0x12de450 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068afcc }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068afcc }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0068afcc }
	__asm { mov esi, dword ptr [g_012de454] }
	__asm { test esi, esi }
	__asm { jne L_0068afc5 }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { mov esi, 0x12de454 }
	__asm { lock cmpxchg dword ptr [esi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0068afc3 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0068afc5 }
	__asm { L_0068afc3: }
	__asm { mov esi, edx }
	__asm { L_0068afc5: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068afcc: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, ebx }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0068afec }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ecx + 4] }
	__asm { cmp ebx, edx }
	__asm { je L_0068affb }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], edi }
	__asm { L_0068afec: }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp dword ptr [eax + ebx*4], edi }
	__asm { jne L_0068affb }
	__asm { mov dword ptr [eax + ebx*4], 0 }
	__asm { L_0068affb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ebx, edx }
	__asm { test eax, eax }
	__asm { je L_0068b009 }
	__asm { add eax, 4 }
	__asm { jmp L_0068b00b }
	__asm { L_0068b009: }
	__asm { xor eax, eax }
	__asm { L_0068b00b: }
	__asm { mov ecx, 0x12de450 }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_0068aee0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
