// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x0086b9c0
extern "C" __declspec(naked) void asm_0086b9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { jne L_0086ba0f }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_0086ba0f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0041ed90();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0086d610
extern "C" __declspec(naked) void asm_0086d610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0086d655 }
	__asm { add edi, 0x1c }
	__asm { je L_0086d655 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0086d655 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0086d655 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { call eax }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { sete cl }
	__asm { mov al, cl }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0086d655: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041ed90();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0086d8d0
extern "C" __declspec(naked) void asm_0086d8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x38] }
	__asm { test edi, edi }
	__asm { je L_0086d91c }
	__asm { add edi, 0x1c }
	__asm { je L_0086d91c }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0086d91b }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0086d91b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push 0 }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x8c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [esi + 0x90] }
	__asm { L_0086d91b: }
	__asm { pop esi }
	__asm { L_0086d91c: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008bff30();
// FUNCTION: ROBLOXSTUDIO 0x0086e970
extern "C" __declspec(naked) void asm_0086e970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0086e9a5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008bff30 }
	__asm { L_0086e9a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3690[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00867c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0086ea90
extern "C" __declspec(naked) void asm_0086ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0086eab4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0086eab4: }
	__asm { push 0x8226e0 }
	__asm { push 0x12f2de8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0086eafc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3690], eax }
	__asm { mov ecx, 0x12f3608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867c20 }
	__asm { push 0xde84d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0086eafc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f3608 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3570[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00867d60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0086eb30
extern "C" __declspec(naked) void asm_0086eb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0086eb54 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0086eb54: }
	__asm { push 0x822740 }
	__asm { push 0x12f2dd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3570] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0086eb9c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3570], eax }
	__asm { mov ecx, 0x12f34e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867d60 }
	__asm { push 0xde84e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0086eb9c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f34e8 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa574[];
extern "C" char g_012fa578[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00872510
extern "C" __declspec(naked) void asm_00872510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x864630 }
	__asm { push 0x12fa554 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa578] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00872572 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa578], eax }
	__asm { push 0xe61938 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fa574], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00872572: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa574] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa57c[];
extern "C" char g_012fa580[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00872590
extern "C" __declspec(naked) void asm_00872590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x864590 }
	__asm { push 0x12fa55c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa580] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008725f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa580], eax }
	__asm { push 0xe6193c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fa57c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008725f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa57c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa584[];
extern "C" char g_012fa588[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00872610
extern "C" __declspec(naked) void asm_00872610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8645e0 }
	__asm { push 0x12fa564 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa588] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00872672 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa588], eax }
	__asm { push 0xe61940 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fa584], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00872672: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa584] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00873f50
extern "C" __declspec(naked) void asm_00873f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00873f98 }
	__asm { cmp eax, 1 }
	__asm { je L_00873f98 }
	__asm { cmp eax, 2 }
	__asm { je L_00873fac }
	__asm { cmp eax, 3 }
	__asm { jne L_00873f87 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11ff180 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00873f87: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11ff180 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00873f98: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00873fac }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_00873fac: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_00878d20();
// FUNCTION: ROBLOXSTUDIO 0x008755e0
extern "C" __declspec(naked) void asm_008755e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00875647 }
	__asm { cmp dword ptr [edi + 0x3a4], 0x10 }
	__asm { lea esi, [edi + 0x390] }
	__asm { jb L_00875600 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00875602 }
	__asm { L_00875600: }
	__asm { mov eax, esi }
	__asm { L_00875602: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push eax }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00875620 }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_00875647 }
	__asm { L_00875620: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { call fn_00878d20 }
	__asm { L_00875647: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00876070
extern "C" __declspec(naked) void asm_00876070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_008760d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00876090: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0087609b }
	__asm { add esi, -0xc }
	__asm { jmp L_0087609d }
	__asm { L_0087609b: }
	__asm { xor esi, esi }
	__asm { L_0087609d: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_008760b8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0xc] }
	__asm { jmp L_008760ca }
	__asm { L_008760b8: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [esi + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_008760ca: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00876090 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_008760d1: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fa4d4[];
extern "C" char g_012fa4d8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008777b0
extern "C" __declspec(naked) void asm_008777b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2abde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4d8] }
	__asm { test al, 1 }
	__asm { jne L_00877823 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4d8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087780e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0087780e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877823: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa4d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa49c[];
extern "C" char g_012fa4a0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877840
extern "C" __declspec(naked) void asm_00877840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2abfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4a0] }
	__asm { test al, 1 }
	__asm { jne L_008778b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4a0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087789e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa49c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0087789e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa49c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008778b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa49c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa4a4[];
extern "C" char g_012fa4a8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008778d0
extern "C" __declspec(naked) void asm_008778d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ac1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4a8] }
	__asm { test al, 1 }
	__asm { jne L_00877943 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4a8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087792e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0087792e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877943: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa4a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa4bc[];
extern "C" char g_012fa4c0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877960
extern "C" __declspec(naked) void asm_00877960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ac3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4c0] }
	__asm { test al, 1 }
	__asm { jne L_008779d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4c0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008779be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008779be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008779d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa4bc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa4b4[];
extern "C" char g_012fa4b8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008779f0
extern "C" __declspec(naked) void asm_008779f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ac5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4b8] }
	__asm { test al, 1 }
	__asm { jne L_00877a63 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4b8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877a4e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877a4e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877a63: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa4b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa4dc[];
extern "C" char g_012fa4e0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877a80
extern "C" __declspec(naked) void asm_00877a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ac7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4e0] }
	__asm { test al, 1 }
	__asm { jne L_00877af3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4e0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877ade }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877ade: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877af3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa4dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa4ac[];
extern "C" char g_012fa4b0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877b10
extern "C" __declspec(naked) void asm_00877b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ac9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa4b0] }
	__asm { test al, 1 }
	__asm { jne L_00877b83 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa4b0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877b6e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa4ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877b6e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa4ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877b83: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa4ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa544[];
extern "C" char g_012fa548[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877ba0
extern "C" __declspec(naked) void asm_00877ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2acbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa548] }
	__asm { test al, 1 }
	__asm { jne L_00877c13 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa548], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877bfe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa544], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877bfe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa544], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877c13: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa544] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa51c[];
extern "C" char g_012fa520[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877c30
extern "C" __declspec(naked) void asm_00877c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2acde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa520] }
	__asm { test al, 1 }
	__asm { jne L_00877ca3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa520], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877c8e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa51c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877c8e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa51c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877ca3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa51c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa524[];
extern "C" char g_012fa528[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877cc0
extern "C" __declspec(naked) void asm_00877cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2acfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa528] }
	__asm { test al, 1 }
	__asm { jne L_00877d33 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa528], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877d1e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa524], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877d1e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa524], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877d33: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa524] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa53c[];
extern "C" char g_012fa540[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877d50
extern "C" __declspec(naked) void asm_00877d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ad1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa540] }
	__asm { test al, 1 }
	__asm { jne L_00877dc3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa540], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877dae }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa53c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877dae: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa53c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877dc3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa53c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa534[];
extern "C" char g_012fa538[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877de0
extern "C" __declspec(naked) void asm_00877de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ad3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa538] }
	__asm { test al, 1 }
	__asm { jne L_00877e53 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa538], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877e3e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa534], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877e3e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa534], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877e53: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa534] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa54c[];
extern "C" char g_012fa550[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00877e70
extern "C" __declspec(naked) void asm_00877e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ad5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa550] }
	__asm { test al, 1 }
	__asm { jne L_00877ee3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa550], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00877ece }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fa54c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877ece: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fa54c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00877ee3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa54c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
// FUNCTION: ROBLOXSTUDIO 0x00878f20
extern "C" __declspec(naked) void asm_00878f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00878f49 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { jmp L_00878f4b }
	__asm { L_00878f49: }
	__asm { xor edi, edi }
	__asm { L_00878f4b: }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_008367e0();
// FUNCTION: ROBLOXSTUDIO 0x0087af40
extern "C" __declspec(naked) void asm_0087af40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0087af91 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0087af60 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0087af62 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0087af62 }
	__asm { L_0087af60: }
	__asm { mov eax, ecx }
	__asm { L_0087af62: }
	__asm { test eax, eax }
	__asm { je L_0087af91 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0087af91 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0087af91 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0087af91 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_008367e0 }
	__asm { L_0087af91: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b3b40();
extern "C" void fn_0087b850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087b7c0
extern "C" __declspec(naked) void asm_0087b7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x290] }
	__asm { call fn_0087b850 }
	__asm { mov esi, eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3b40 }
	__asm { lea ecx, [eax + 6] }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [esi + 0x10] }
	__asm { shr edx, 5 }
	__asm { lea esi, [ebp - 0x14] }
	__asm { cmp edx, 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmovle eax, esi }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov esi, dword ptr [eax] }
	__asm { add esi, ecx }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0087b837 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087b837: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b3b40();
extern "C" void fn_0087b850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0087dd30
extern "C" __declspec(naked) void asm_0087dd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3ac] }
	__asm { call fn_0087b850 }
	__asm { mov esi, eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3b40 }
	__asm { lea ecx, [eax + 6] }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [esi + 0x10] }
	__asm { shr edx, 5 }
	__asm { lea esi, [ebp - 0x14] }
	__asm { cmp edx, 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmovle eax, esi }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov esi, dword ptr [eax] }
	__asm { add esi, ecx }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0087dda7 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0087dda7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00545490();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0087fcf0
extern "C" __declspec(naked) void asm_0087fcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0087fd41 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0087fd10 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0087fd12 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0087fd12 }
	__asm { L_0087fd10: }
	__asm { mov eax, ecx }
	__asm { L_0087fd12: }
	__asm { test eax, eax }
	__asm { je L_0087fd41 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0087fd41 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0087fd41 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0087fd41 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00545490 }
	__asm { L_0087fd41: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131d304[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008801f0
extern "C" __declspec(naked) void asm_008801f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b50e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00880265 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64bcc }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00880265: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131d308 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_007b3b40();
extern "C" void fn_0087b850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008812a0
extern "C" __declspec(naked) void asm_008812a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x298] }
	__asm { call fn_0087b850 }
	__asm { mov esi, eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3b40 }
	__asm { lea ecx, [eax + 6] }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [esi + 0x10] }
	__asm { shr edx, 5 }
	__asm { lea esi, [ebp - 0x14] }
	__asm { cmp edx, 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmovle eax, esi }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov esi, dword ptr [eax] }
	__asm { add esi, ecx }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00881317 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00881317: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00880f60();
// FUNCTION: ROBLOXSTUDIO 0x00882520
extern "C" __declspec(naked) void asm_00882520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2b6c8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0088258d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x64], 8 }
	__asm { je L_0088258d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0088257c }
	__asm { push 0x187 }
	__asm { push 0xe652f0 }
	__asm { push 0xe65330 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088258d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0088257c: }
	__asm { movzx eax, cl }
	__asm { push 0xe65348 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088258d: }
	__asm { cmp byte ptr [edi + 0x2e8], 0 }
	__asm { je L_008825a5 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00880f60 }
	__asm { mov byte ptr [edi + 0x2e8], 0 }
	__asm { L_008825a5: }
	__asm { push -1 }
}

extern "C" char g_012faeac[];
extern "C" char g_012faeb0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00882f60
extern "C" __declspec(naked) void asm_00882f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2b73e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012faeb0] }
	__asm { test al, 1 }
	__asm { jne L_00882fd3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012faeb0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00882fbe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012faeac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00882fbe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012faeac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00882fd3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012faeac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00883ea0
extern "C" __declspec(naked) void asm_00883ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00883ec9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00883ece }
	__asm { L_00883ec9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00883ece: }
	__asm { cmp ecx, 0x120873c }
	__asm { je L_00883f17 }
	__asm { test eax, eax }
	__asm { je L_00883ede }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00883ee3 }
	__asm { L_00883ede: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00883ee3: }
	__asm { push 0x120873c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00883f17 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00883f17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0086aef0();
extern "C" void fn_0086b050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00884560
extern "C" __declspec(naked) void asm_00884560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b860 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea edi, [esi + 0x3ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0086b050 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_008845ae }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008845ae: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe65634 }
	__asm { mov dword ptr [esi + 4], 0xe656ec }
	__asm { mov dword ptr [esi + 0x18], 0xe656f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe65700 }
	__asm { mov dword ptr [esi + 0x64], 0xe65710 }
	__asm { mov dword ptr [esi + 0x68], 0xe65718 }
	__asm { call fn_0086aef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00883db0();
extern "C" void fn_00b09170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00884900
extern "C" __declspec(naked) void asm_00884900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b09170 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_00883db0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_00884959 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00884959: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00884c10
extern "C" __declspec(naked) void asm_00884c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea esi, [edi + 0x3ac] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00884c6f }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00884c5d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00884c5d: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x12faed0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00884c6f: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00884c80 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00884c80: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00883f30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00884e00
extern "C" __declspec(naked) void asm_00884e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00883f30 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_00884e4f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00884e4f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0086b050();
extern "C" void fn_0086b250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00885680
extern "C" __declspec(naked) void asm_00885680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b920 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea edi, [esi + 0x290] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0086b050 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_008856ce }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008856ce: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe65b7c }
	__asm { mov dword ptr [esi + 4], 0xe65c34 }
	__asm { mov dword ptr [esi + 0x18], 0xe65c3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe65c48 }
	__asm { mov dword ptr [esi + 0x64], 0xe65c58 }
	__asm { mov dword ptr [esi + 0x68], 0xe65c60 }
	__asm { call fn_0086b250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00885b80
extern "C" __declspec(naked) void asm_00885b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea esi, [edi + 0x290] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00885bdf }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00885bcd }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00885bcd: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x12fafbc }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00885bdf: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00885bf0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00885bf0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00885d70
extern "C" __declspec(naked) void asm_00885d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { je L_00885d86 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00885d88 }
	__asm { L_00885d86: }
	__asm { xor ebx, ebx }
	__asm { L_00885d88: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x1c }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add ecx, ebx }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00885f10
extern "C" __declspec(naked) void asm_00885f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00885f39 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00885f3e }
	__asm { L_00885f39: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00885f3e: }
	__asm { cmp ecx, 0x11ef0c0 }
	__asm { je L_00885f87 }
	__asm { test eax, eax }
	__asm { je L_00885f4e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00885f53 }
	__asm { L_00885f4e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00885f53: }
	__asm { push 0x11ef0c0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00885f87 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00885f87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f86ac[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_008865d0();
// FUNCTION: ROBLOXSTUDIO 0x00886510
extern "C" __declspec(naked) void asm_00886510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_00886528 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_00886528: }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov ecx, esi }
	__asm { call fn_008865d0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { jb L_0088653d }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_0088653d: }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { mov eax, esi }
	__asm { je L_0088655b }
	__asm { or dword ptr [g_012f86ac], 0x200 }
	__asm { L_0088655b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402a10();
extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008869c0
extern "C" __declspec(naked) void asm_008869c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25388 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00405b90 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402a10 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00886a35 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00886a1b }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886a1b: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886a35: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00886a46 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886a46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004220b0();
extern "C" void fn_00793430();
extern "C" void fn_008862a0();
extern "C" void fn_00886420();
// FUNCTION: ROBLOXSTUDIO 0x00886a90
extern "C" __declspec(naked) void asm_00886a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2ba38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_00886af3 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00886420 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008862a0 }
	__asm { test al, al }
	__asm { je L_00886aeb }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00886aeb: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004220b0 }
	__asm { L_00886af3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00402a10();
extern "C" void fn_00405b90();
extern "C" void fn_00412da0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00886bc0
extern "C" __declspec(naked) void asm_00886bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ba38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402a10 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { call fn_00412da0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00886c3a }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00886c20 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886c20: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886c3a: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00886c4b }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886c4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00839890();
// FUNCTION: ROBLOXSTUDIO 0x00886c60
extern "C" __declspec(naked) void asm_00886c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00886cb1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00886c80 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00886c82 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00886c82 }
	__asm { L_00886c80: }
	__asm { mov eax, ecx }
	__asm { L_00886c82: }
	__asm { test eax, eax }
	__asm { je L_00886cb1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00886cb1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00886cb1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00886cb1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00839890 }
	__asm { L_00886cb1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00886cc0();
// FUNCTION: ROBLOXSTUDIO 0x00886e10
extern "C" __declspec(naked) void asm_00886e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00886e61 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00886e30 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00886e32 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00886e32 }
	__asm { L_00886e30: }
	__asm { mov eax, ecx }
	__asm { L_00886e32: }
	__asm { test eax, eax }
	__asm { je L_00886e61 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00886e61 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00886e61 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00886e61 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00886cc0 }
	__asm { L_00886e61: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f954[];
extern "C" void fn_0055c340();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008881c0
extern "C" __declspec(naked) void asm_008881c0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0088825a }
	__asm { cmp dword ptr [g_0131f954], 0x29a }
	__asm { je L_0088820f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008881fa }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088820f }
	__asm { L_008881fa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088820f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0088825a }
	__asm { cmp dword ptr [g_0131f954], 0x29a }
	__asm { je L_0088825a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00888245 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088825a }
	__asm { L_00888245: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088825a: }
	__asm { jmp fn_0055c340 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0067af70();
extern "C" void fn_007cd560();
extern "C" void fn_0096ce50();
// FUNCTION: ROBLOXSTUDIO 0x008887c0
extern "C" __declspec(naked) void asm_008887c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test ecx, ecx }
	__asm { je L_0088881a }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_008887dc }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_008887de }
	__asm { call fn_0043ee40 }
	__asm { jmp L_008887de }
	__asm { L_008887dc: }
	__asm { mov eax, ecx }
	__asm { L_008887de: }
	__asm { test eax, eax }
	__asm { je L_0088881a }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00888819 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00888819 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00888819 }
	__asm { call fn_0067af70 }
	__asm { test eax, eax }
	__asm { je L_00888819 }
	__asm { pop edi }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_0096ce50 }
	__asm { L_00888819: }
	__asm { pop edi }
	__asm { L_0088881a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007b1fa0();
extern "C" void fn_00889690();
// FUNCTION: ROBLOXSTUDIO 0x00888980
extern "C" __declspec(naked) void asm_00888980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_008889d7 }
	__asm { test esi, esi }
	__asm { je L_008889a1 }
	__asm { push esi }
	__asm { call fn_007b1fa0 }
	__asm { test al, al }
	__asm { jne L_008889d7 }
	__asm { L_008889a1: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008889c2 }
	__asm { push 0x109 }
	__asm { push 0xe66178 }
	__asm { push 0xe66218 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008889d7 }
	__asm { L_008889c2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe66250 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008889d7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00889690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0088b180
extern "C" __declspec(naked) void asm_0088b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0088b1a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0088b1ae }
	__asm { L_0088b1a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0088b1ae: }
	__asm { cmp ecx, 0x11efd60 }
	__asm { je L_0088b1f7 }
	__asm { test eax, eax }
	__asm { je L_0088b1be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0088b1c3 }
	__asm { L_0088b1be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0088b1c3: }
	__asm { push 0x11efd60 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0088b1f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0088b1f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbab4[];
extern "C" char g_012fbab8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0088b2d0
extern "C" __declspec(naked) void asm_0088b2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2be1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fbab8] }
	__asm { test al, 1 }
	__asm { jne L_0088b312 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fbab8], eax }
	__asm { push 0xe66650 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbab4], eax }
	__asm { L_0088b312: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fba6c[];
extern "C" char g_012fba88[];
extern "C" void fn_0088b0b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0088bd20
extern "C" __declspec(naked) void asm_0088bd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2beae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fba88] }
	__asm { test al, 1 }
	__asm { jne L_0088bd78 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba88], eax }
	__asm { push 0 }
	__asm { push 0xe56574 }
	__asm { mov ecx, 0x12fba6c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088b0b0 }
	__asm { push 0xded180 }
	__asm { mov dword ptr [g_012fba6c], 0xe6892c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0088bd78: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fba6c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088bde0
extern "C" __declspec(naked) void asm_0088bde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088be27 }
	__asm { mov dword ptr [edx], 0xe68dc0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088be29 }
	__asm { L_0088be27: }
	__asm { xor edx, edx }
	__asm { L_0088be29: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088be40
extern "C" __declspec(naked) void asm_0088be40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088be87 }
	__asm { mov dword ptr [edx], 0xe68dac }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088be89 }
	__asm { L_0088be87: }
	__asm { xor edx, edx }
	__asm { L_0088be89: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088bef0
extern "C" __declspec(naked) void asm_0088bef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088bf37 }
	__asm { mov dword ptr [edx], 0xe68d84 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088bf39 }
	__asm { L_0088bf37: }
	__asm { xor edx, edx }
	__asm { L_0088bf39: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088bf50
extern "C" __declspec(naked) void asm_0088bf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088bf97 }
	__asm { mov dword ptr [edx], 0xe68dd4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088bf99 }
	__asm { L_0088bf97: }
	__asm { xor edx, edx }
	__asm { L_0088bf99: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088bfb0
extern "C" __declspec(naked) void asm_0088bfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088bff7 }
	__asm { mov dword ptr [edx], 0xe68e24 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088bff9 }
	__asm { L_0088bff7: }
	__asm { xor edx, edx }
	__asm { L_0088bff9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088c010
extern "C" __declspec(naked) void asm_0088c010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c057 }
	__asm { mov dword ptr [edx], 0xe68d48 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088c059 }
	__asm { L_0088c057: }
	__asm { xor edx, edx }
	__asm { L_0088c059: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088c070
extern "C" __declspec(naked) void asm_0088c070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c0b7 }
	__asm { mov dword ptr [edx], 0xe68d20 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088c0b9 }
	__asm { L_0088c0b7: }
	__asm { xor edx, edx }
	__asm { L_0088c0b9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088c0d0
extern "C" __declspec(naked) void asm_0088c0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c117 }
	__asm { mov dword ptr [edx], 0xe68d34 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088c119 }
	__asm { L_0088c117: }
	__asm { xor edx, edx }
	__asm { L_0088c119: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088c1d0
extern "C" __declspec(naked) void asm_0088c1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c217 }
	__asm { mov dword ptr [edx], 0xe68d98 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088c219 }
	__asm { L_0088c217: }
	__asm { xor edx, edx }
	__asm { L_0088c219: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088c230
extern "C" __declspec(naked) void asm_0088c230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c277 }
	__asm { mov dword ptr [edx], 0xe68de8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0088c279 }
	__asm { L_0088c277: }
	__asm { xor edx, edx }
	__asm { L_0088c279: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4020[];
extern "C" void fn_004115f0();
extern "C" void fn_007d6150();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0088c3f0
extern "C" __declspec(naked) void asm_0088c3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd232ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x821c00 }
	__asm { push 0x12f2e70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4020] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0088c451 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4020], eax }
	__asm { mov ecx, 0x12f3f98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6150 }
	__asm { push 0xde8300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0088c451: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f3f98 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0088c478 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088c478: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fba1c[];
extern "C" void fn_00407e90();
extern "C" void fn_007af570();
// FUNCTION: ROBLOXSTUDIO 0x0088d290
extern "C" __declspec(naked) void asm_0088d290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2bef8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007af570 }
	__asm { mov dword ptr [esi], 0xe66678 }
	__asm { cmp byte ptr [g_012fba1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_0088d2fd }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x12fba18 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0x895480 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012fba1c], 1 }
	__asm { L_0088d2fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x34], 0x100 }
	__asm { mov dword ptr [esi + 0x38], 0xc2 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0x3f800000 }
	__asm { mov byte ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi], 0xe68b50 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f1d0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0088e9c0
extern "C" __declspec(naked) void asm_0088e9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0088ea32 }
	__asm { add esi, 5 }
	__asm { je L_0088ea02 }
	__asm { add esi, -5 }
	__asm { jmp L_0088ea04 }
	__asm { L_0088ea02: }
	__asm { xor esi, esi }
	__asm { L_0088ea04: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0088ea31 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0088ea31 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0088ea31: }
	__asm { pop edi }
	__asm { L_0088ea32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0088edd0
extern "C" __declspec(naked) void asm_0088edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0088ee2e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { cmp dword ptr [eax + 8], edi }
	__asm { je L_0088ee23 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0088ee12 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088ee23 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0088ee12: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088ee23: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088ee2e: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b0030();
extern "C" void fn_0088ec00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088f190
extern "C" __declspec(naked) void asm_0088f190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe68b50 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0088f1c8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax] }
	__asm { L_0088f1c8: }
	__asm { mov dword ptr [esi], 0xe54d08 }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0088f1e6 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088f1e6: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { call fn_007b0030 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0088f20e }
	__asm { push esi }
	__asm { call fn_0088ec00 }
	__asm { add esp, 4 }
	__asm { L_0088f20e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041eaa0();
extern "C" void fn_00421370();
extern "C" void fn_0088ea50();
// FUNCTION: ROBLOXSTUDIO 0x0088f230
extern "C" __declspec(naked) void asm_0088f230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088ea50 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0041eaa0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0088f27b }
	__asm { push esi }
	__asm { call fn_00421370 }
	__asm { add esp, 4 }
	__asm { L_0088f27b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0088f370
extern "C" __declspec(naked) void asm_0088f370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { je L_0088f3bc }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0088f398 }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0088f398: }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x28] }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0088f3bc: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10528[];
extern "C" void fn_0067b220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088fa20
extern "C" __declspec(naked) void asm_0088fa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { cmp ecx, 0x4924924 }
	__asm { jbe L_0088fa71 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xe3b868 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe3b758 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b220 }
	__asm { L_0088fa71: }
	__asm { test ecx, ecx }
	__asm { jne L_0088fa87 }
	__asm { xor eax, eax }
	__asm { L_0088fa77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088fa87: }
	__asm { cmp ecx, 0x4924924 }
	__asm { ja L_0088faa8 }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0088fa77 }
	__asm { L_0088faa8: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x0088fab0
extern "C" __declspec(naked) void asm_0088fab0()
{
	__asm { L_0088fab0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_0088fad6 }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { test ecx, ecx }
	__asm { je L_0088face }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0088face: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088fad6: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jb L_0088fafb }
	__asm { lea eax, [eax + ecx*4] }
	__asm { cmp edi, eax }
	__asm { jae L_0088fafb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call L_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088fafb: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00896d00 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx + edx*4 - 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x0088fec0
extern "C" __declspec(naked) void asm_0088fec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jne L_0088ff0d }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_0088ff0d: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00422570();
extern "C" void fn_0088b460();
extern "C" void fn_00893100();
// FUNCTION: ROBLOXSTUDIO 0x008904a0
extern "C" __declspec(naked) void asm_008904a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c418 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test edi, edi }
	__asm { je L_00890513 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edi, -0x1c }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00893100 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0088b460 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00890513: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0078a830();
extern "C" void fn_0088fd50();
// FUNCTION: ROBLOXSTUDIO 0x00891260
extern "C" __declspec(naked) void asm_00891260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0078a830 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00891288 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0089128a }
	__asm { L_00891288: }
	__asm { xor edx, edx }
	__asm { L_0089128a: }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_0088fd50 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004109a0();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x00891300
extern "C" __declspec(naked) void asm_00891300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00891314 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00891316 }
	__asm { L_00891314: }
	__asm { xor edi, edi }
	__asm { L_00891316: }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { call fn_007d5470 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_004109a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00891420
extern "C" __declspec(naked) void asm_00891420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00891432 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00891434 }
	__asm { L_00891432: }
	__asm { xor ebx, ebx }
	__asm { L_00891434: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, ebx }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410660();
extern "C" void fn_0043f040();
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x008918c0
extern "C" __declspec(naked) void asm_008918c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fc38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0xe66670 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 4 }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410660 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00891912 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [eax + 0x3c] }
	__asm { call fn_0043f040 }
	__asm { L_00891912: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5bb60();
// FUNCTION: ROBLOXSTUDIO 0x00891aa0
extern "C" __declspec(naked) void asm_00891aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00891aea }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00891aea }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00891ad9 }
	__asm { push 0x2cd }
	__asm { push 0xe67530 }
	__asm { push 0xe47640 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00891aea }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00891ad9: }
	__asm { movzx eax, al }
	__asm { push 0xe67b10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00891aea: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5bb60 }
	__asm { test eax, eax }
	__asm { je L_00891b05 }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_00891b05 }
	__asm { add eax, -0x70 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00891b05: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00792cc0();
extern "C" void fn_00792ed0();
// FUNCTION: ROBLOXSTUDIO 0x00891c90
extern "C" __declspec(naked) void asm_00891c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00792cc0 }
	__asm { test eax, eax }
	__asm { je L_00891cfc }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00891cfc }
	__asm { test al, al }
	__asm { jne L_00891cfc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00891ceb }
	__asm { push 0x8fe }
	__asm { push 0xe67530 }
	__asm { push 0xe68930 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00891cfc }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00891ceb: }
	__asm { movzx eax, cl }
	__asm { push 0xe68940 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00891cfc: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008929a0
extern "C" __declspec(naked) void asm_008929a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_008929f0 }
	__asm { cmp dword ptr [esi + 0xe0], 0 }
	__asm { jne L_008929f0 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_008929df }
	__asm { push 0x67f }
	__asm { push 0xe67530 }
	__asm { push 0xe684ac }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008929f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008929df: }
	__asm { movzx eax, al }
	__asm { push 0xe684c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008929f0: }
	__asm { mov edx, dword ptr [esi + 0xe0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 0x70] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 0x74] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fba5c[];
extern "C" char g_012fba60[];
extern "C" char g_012fba64[];
extern "C" char g_012fba68[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00892bb0
extern "C" __declspec(naked) void asm_00892bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00892c00 }
	__asm { cmp dword ptr [esi + 0xe0], 0 }
	__asm { jne L_00892c00 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00892bef }
	__asm { push 0x8b4 }
	__asm { push 0xe67530 }
	__asm { push 0xe684ac }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00892c00 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00892bef: }
	__asm { movzx eax, al }
	__asm { push 0xe68848 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00892c00: }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x138] }
	__asm { test eax, eax }
	__asm { je L_00892c1c }
	__asm { fld dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892c1c: }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_00892c4b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { mov dword ptr [g_012fba5c], 0 }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { L_00892c4b: }
	__asm { fld dword ptr [g_012fba60] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fba5c[];
extern "C" char g_012fba60[];
extern "C" char g_012fba64[];
extern "C" char g_012fba68[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00892c60
extern "C" __declspec(naked) void asm_00892c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00892cb0 }
	__asm { cmp dword ptr [esi + 0xe0], 0 }
	__asm { jne L_00892cb0 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00892c9f }
	__asm { push 0x8ba }
	__asm { push 0xe67530 }
	__asm { push 0xe684ac }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00892cb0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00892c9f: }
	__asm { movzx eax, al }
	__asm { push 0xe688b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00892cb0: }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x138] }
	__asm { test eax, eax }
	__asm { je L_00892ccc }
	__asm { fld dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892ccc: }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_00892cfb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { mov dword ptr [g_012fba5c], 0 }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { L_00892cfb: }
	__asm { fld dword ptr [g_012fba64] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00893390
extern "C" __declspec(naked) void asm_00893390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_008933a5 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_008933a7 }
	__asm { L_008933a5: }
	__asm { xor edx, edx }
	__asm { L_008933a7: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { pop esi }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x008933e0
extern "C" __declspec(naked) void asm_008933e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_008933f5 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_008933f7 }
	__asm { L_008933f5: }
	__asm { xor edx, edx }
	__asm { L_008933f7: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0088d6a0();
extern "C" void fn_0088eb90();
// FUNCTION: ROBLOXSTUDIO 0x00893a40
extern "C" __declspec(naked) void asm_00893a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c51b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xd0 }
	__asm { mov esi, ecx }
	__asm { call fn_0088eb90 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00893a8e }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_0088d6a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00893a8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b1a40();
extern "C" void fn_007b4790();
extern "C" void fn_007cd560();
extern "C" void fn_00899000();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x00894820
extern "C" __declspec(naked) void asm_00894820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_007b4790 }
	__asm { mov ecx, edi }
	__asm { call fn_00899000 }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { test esi, esi }
	__asm { je L_00894870 }
	__asm { push esi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00894870 }
	__asm { add esi, 0x1c }
	__asm { je L_00894863 }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { jne L_00894870 }
	__asm { L_00894863: }
	__asm { or dword ptr [edi + 0xe8], 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00894870: }
	__asm { and dword ptr [edi + 0xe8], 0xfffffffd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0085d3e0();
extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00896c40
extern "C" __declspec(naked) void asm_00896c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00896c74 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00896c74: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00896caa }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00896caa }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0085d3e0 }
	__asm { L_00896caa: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fba94[];
extern "C" char g_012fba98[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00897270
extern "C" __declspec(naked) void asm_00897270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c64e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fba98] }
	__asm { test al, 1 }
	__asm { jne L_008972e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba98], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008972ce }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fba94], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008972ce: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fba94], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008972e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fba94] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00897560();
extern "C" void fn_00898b10();
extern "C" void fn_0099e8b0();
// FUNCTION: ROBLOXSTUDIO 0x00898460
extern "C" __declspec(naked) void asm_00898460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { lea edx, [edi + 0x48] }
	__asm { add ecx, 0x34 }
	__asm { cmp ebx, dword ptr [ecx] }
	__asm { je L_008984b1 }
	__asm { push esi }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00897560 }
	__asm { mov esi, dword ptr [edi + 0xe0] }
	__asm { push ebx }
	__asm { call fn_00898b10 }
	__asm { fstp dword ptr [esp] }
	__asm { mov ecx, esi }
	__asm { call fn_0099e8b0 }
	__asm { push 0x12fb1e8 }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fb56c }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { L_008984b1: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4b4c[];
extern "C" char g_012ec3dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00899b40
extern "C" __declspec(naked) void asm_00899b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c746 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe68f2c }
	__asm { mov dword ptr [esi + 4], 0xe68fa4 }
	__asm { mov dword ptr [esi + 0x18], 0xe68fac }
	__asm { mov dword ptr [esi + 0x1c], 0xe68fb8 }
	__asm { mov eax, dword ptr [g_012ec3dc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00899bd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec3dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe68f18 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec2b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00899bd9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ec2b0 }
	__asm { inc dword ptr [g_012e4b4c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ec3dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00899c00
extern "C" __declspec(naked) void asm_00899c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd245ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec3dc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00899c75 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec3dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe68f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec2b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00899c75: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12ec2b0 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0089a9a0();
// FUNCTION: ROBLOXSTUDIO 0x00899fb0
extern "C" __declspec(naked) void asm_00899fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089a9a0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0089a022 }
	__asm { add esi, 5 }
	__asm { je L_00899ff2 }
	__asm { add esi, -5 }
	__asm { jmp L_00899ff4 }
	__asm { L_00899ff2: }
	__asm { xor esi, esi }
	__asm { L_00899ff4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089a021 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089a021 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0089a021: }
	__asm { pop edi }
	__asm { L_0089a022: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_004fd910();
extern "C" void fn_006b9b80();
extern "C" void fn_00899850();
// FUNCTION: ROBLOXSTUDIO 0x0089a820
extern "C" __declspec(naked) void asm_0089a820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x5c] }
	__asm { mov dword ptr [ebp - 0x20], 0x90d358 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00899850 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004fd910 }
	__asm { mov ecx, eax }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089a89a }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0089a89a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a8b0[];
extern "C" char g_0131a8b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0089adf0
extern "C" __declspec(naked) void asm_0089adf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c90e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4211c0 }
	__asm { push 0x131a8b8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a8b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089ae52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a8b0], eax }
	__asm { push 0xe68f10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a8b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ae52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a8b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ee40();
extern "C" void fn_0043f040();
extern "C" void fn_0089b2a0();
// FUNCTION: ROBLOXSTUDIO 0x0089af90
extern "C" __declspec(naked) void asm_0089af90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0089afab }
	__asm { call fn_0043ee40 }
	__asm { mov ebx, eax }
	__asm { jmp L_0089afad }
	__asm { L_0089afab: }
	__asm { mov ebx, esi }
	__asm { L_0089afad: }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0089afbb }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0089afbd }
	__asm { L_0089afbb: }
	__asm { mov eax, edi }
	__asm { L_0089afbd: }
	__asm { cmp ebx, eax }
	__asm { je L_0089afc9 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0089b2a0 }
	__asm { L_0089afc9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { add ecx, 0x88 }
	__asm { call fn_0043f040 }
	__asm { ret 4 }
}

extern "C" char g_0131abfc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089bd40
extern "C" __declspec(naked) void asm_0089bd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c9ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131abfc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0089bdb5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe696f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ac00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc6c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089bdb5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x131ac00 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0089cd20
extern "C" __declspec(naked) void asm_0089cd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0089cd49 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0089cd4e }
	__asm { L_0089cd49: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0089cd4e: }
	__asm { cmp ecx, 0x11f11f4 }
	__asm { je L_0089cd97 }
	__asm { test eax, eax }
	__asm { je L_0089cd5e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0089cd63 }
	__asm { L_0089cd5e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0089cd63: }
	__asm { push 0x11f11f4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0089cd97 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0089cd97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0089cdb0
extern "C" __declspec(naked) void asm_0089cdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0089cdd9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0089cdde }
	__asm { L_0089cdd9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0089cdde: }
	__asm { cmp ecx, 0x11f1220 }
	__asm { je L_0089ce27 }
	__asm { test eax, eax }
	__asm { je L_0089cdee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0089cdf3 }
	__asm { L_0089cdee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0089cdf3: }
	__asm { push 0x11f1220 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0089ce27 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0089ce27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0089ec10
extern "C" __declspec(naked) void asm_0089ec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0089ec57 }
	__asm { mov dword ptr [edx], 0xe6a928 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0089ec59 }
	__asm { L_0089ec57: }
	__asm { xor edx, edx }
	__asm { L_0089ec59: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004115f0();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089ecc0
extern "C" __declspec(naked) void asm_0089ecc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820e20 }
	__asm { push 0x12f2fe0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089ed21 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089ed21: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5978 }
	__asm { push 2 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089ed48 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ed48: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004115f0();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089ed60
extern "C" __declspec(naked) void asm_0089ed60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820dc0 }
	__asm { push 0x12f2fe8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089edc1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089edc1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5a08 }
	__asm { push 3 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089ede8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ede8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004115f0();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089ee00
extern "C" __declspec(naked) void asm_0089ee00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820e20 }
	__asm { push 0x12f2fe0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089ee61 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089ee61: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5978 }
	__asm { push 4 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089ee88 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ee88: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004115f0();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089eea0
extern "C" __declspec(naked) void asm_0089eea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820e80 }
	__asm { push 0x12f2ff0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089ef01 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089ef01: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5a98 }
	__asm { push 4 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089ef28 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ef28: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_004115f0();
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089ef40
extern "C" __declspec(naked) void asm_0089ef40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2370e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x822aa0 }
	__asm { push 0x12f2ff8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5bb0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089efa1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089efa1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5b28 }
	__asm { push 4 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089efc8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089efc8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004115f0();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089eff0
extern "C" __declspec(naked) void asm_0089eff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820dc0 }
	__asm { push 0x12f2fe8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089f051 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089f051: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5a08 }
	__asm { push 5 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089f078 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089f078: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5c40[];
extern "C" void fn_004115f0();
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089f090
extern "C" __declspec(naked) void asm_0089f090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cb3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x822a40 }
	__asm { push 0x12f3000 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5c40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089f0f1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089f0f1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5bb8 }
	__asm { push 5 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089f118 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089f118: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004115f0();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089f130
extern "C" __declspec(naked) void asm_0089f130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820e80 }
	__asm { push 0x12f2ff0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089f191 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0089f191: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5a98 }
	__asm { push 6 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0089f1b8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089f1b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088da80();
// FUNCTION: ROBLOXSTUDIO 0x008a05b0
extern "C" __declspec(naked) void asm_008a05b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008a05d0 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_008a05d0: }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0x40800000 }
	__asm { mov dword ptr [ebp - 8], 0x3f99999a }
	__asm { mov dword ptr [ebp - 4], 0x40000000 }
	__asm { call fn_0088da80 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe699bc }
	__asm { mov dword ptr [esi + 4], 0xe69ac8 }
	__asm { mov dword ptr [esi + 0x18], 0xe69ad0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe69adc }
	__asm { mov dword ptr [esi + 0x64], 0xe69aec }
	__asm { mov dword ptr [esi + 0x70], 0xe69af4 }
	__asm { mov dword ptr [esi + 0x98], 0xe69b14 }
	__asm { mov dword ptr [esi + 0xb0], 0xe69b48 }
	__asm { mov dword ptr [esi + 0xc4], 0xe69b74 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe69b7c }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a0f30
extern "C" __declspec(naked) void asm_008a0f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_008a0f92 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a0f92: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a2020
extern "C" __declspec(naked) void asm_008a2020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008a2044 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_008a2044: }
	__asm { push 0x820dc0 }
	__asm { push 0x12f2fe8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008a208c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a208c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5a08 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a20c0
extern "C" __declspec(naked) void asm_008a20c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008a20e4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_008a20e4: }
	__asm { push 0x820e20 }
	__asm { push 0x12f2fe0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008a212c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a212c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5978 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a2160
extern "C" __declspec(naked) void asm_008a2160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008a2184 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_008a2184: }
	__asm { push 0x820e80 }
	__asm { push 0x12f2ff0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008a21cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a21cc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5a98 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5c40[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a2200
extern "C" __declspec(naked) void asm_008a2200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008a2224 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_008a2224: }
	__asm { push 0x822a40 }
	__asm { push 0x12f3000 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5c40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008a226c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a226c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a22a0
extern "C" __declspec(naked) void asm_008a22a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2370e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008a22c4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_008a22c4: }
	__asm { push 0x822aa0 }
	__asm { push 0x12f2ff8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5bb0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008a230c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a230c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5b28 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008a2f30
extern "C" __declspec(naked) void asm_008a2f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ax, word ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { cmp ax, word ptr [ebp - 0x18] }
	__asm { jne L_008a2f9c }
	__asm { mov ax, word ptr [ebp - 0xa] }
	__asm { cmp ax, word ptr [ebp - 0x16] }
	__asm { jne L_008a2f9c }
	__asm { mov ax, word ptr [ebp - 8] }
	__asm { cmp ax, word ptr [ebp - 0x14] }
	__asm { jne L_008a2f9c }
	__asm { mov ax, word ptr [ebp - 6] }
	__asm { cmp ax, word ptr [ebp - 0x12] }
	__asm { jne L_008a2f9c }
	__asm { mov ax, word ptr [ebp - 4] }
	__asm { cmp ax, word ptr [ebp - 0x10] }
	__asm { jne L_008a2f9c }
	__asm { mov ax, word ptr [ebp - 2] }
	__asm { cmp ax, word ptr [ebp - 0xe] }
	__asm { jne L_008a2f9c }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008a2f9c: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0089df60();
extern "C" void fn_008a19c0();
// FUNCTION: ROBLOXSTUDIO 0x008a30b0
extern "C" __declspec(naked) void asm_008a30b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test eax, eax }
	__asm { je L_008a30c7 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008a30c9 }
	__asm { L_008a30c7: }
	__asm { xor edi, edi }
	__asm { L_008a30c9: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0089df60 }
	__asm { add esp, 0x10 }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_008a19c0 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0089df60();
// FUNCTION: ROBLOXSTUDIO 0x008a34a0
extern "C" __declspec(naked) void asm_008a34a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test eax, eax }
	__asm { je L_008a34bd }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008a34c4 }
	__asm { L_008a34bd: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_008a34c4: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0089df60 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [edi + 0x28] }
	__asm { mov edx, dword ptr [edx + 0x30] }
	__asm { mov edi, dword ptr [edi + 0x2c] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { mov eax, dword ptr [eax + edx] }
	__asm { add eax, ecx }
	__asm { lea ecx, [edi + 0x68] }
	__asm { add ecx, eax }
	__asm { call ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cfd30();
extern "C" void fn_007d5780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a3ad0
extern "C" __declspec(naked) void asm_008a3ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5780 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cfd30 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_008a3b29 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a3b29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0089de40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a4800
extern "C" __declspec(naked) void asm_008a4800()
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
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_0089de40 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_008a484f }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a484f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007b1a40();
extern "C" void fn_007cd560();
extern "C" void fn_00968e70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008a48f0
extern "C" __declspec(naked) void asm_008a48f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_008a4923 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008a492a }
	__asm { mov ecx, edi }
	__asm { test ecx, ecx }
	__asm { je L_008a492a }
	__asm { call fn_00968e70 }
	__asm { test eax, eax }
	__asm { jne L_008a492a }
	__asm { L_008a4923: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008a492a: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6a4f0 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007af570();
extern "C" void fn_007b05b0();
extern "C" void fn_008a5190();
// FUNCTION: ROBLOXSTUDIO 0x008a5310
extern "C" __declspec(naked) void asm_008a5310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cfcb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_008a5339 }
	__asm { mov dword ptr [edi + 0x68], 0xe6679c }
	__asm { L_008a5339: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { jne L_008a5372 }
	__asm { push 0x34 }
	__asm { call fn_007b05b0 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008a5369 }
	__asm { mov ecx, esi }
	__asm { call fn_007af570 }
	__asm { mov dword ptr [esi], 0xe6abe8 }
	__asm { jmp L_008a536b }
	__asm { L_008a5369: }
	__asm { xor esi, esi }
	__asm { L_008a536b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a5372: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_008a5190 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b0030();
extern "C" void fn_007b0690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a53a0
extern "C" __declspec(naked) void asm_008a53a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe6abe8 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008a53d8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax] }
	__asm { L_008a53d8: }
	__asm { mov dword ptr [esi], 0xe54d08 }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_008a53f6 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a53f6: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { call fn_007b0030 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008a541e }
	__asm { push esi }
	__asm { call fn_007b0690 }
	__asm { add esp, 4 }
	__asm { L_008a541e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc350[];
extern "C" char g_012fc354[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008a6280
extern "C" __declspec(naked) void asm_008a6280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d0ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fc354] }
	__asm { test al, 1 }
	__asm { jne L_008a62ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc354], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012fc350], eax }
	__asm { L_008a62ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_008a6380();
// FUNCTION: ROBLOXSTUDIO 0x008a64d0
extern "C" __declspec(naked) void asm_008a64d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_008a6521 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_008a64f0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_008a64f2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_008a64f2 }
	__asm { L_008a64f0: }
	__asm { mov eax, ecx }
	__asm { L_008a64f2: }
	__asm { test eax, eax }
	__asm { je L_008a6521 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_008a6521 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008a6521 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_008a6521 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_008a6380 }
	__asm { L_008a6521: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de194[];
extern "C" char g_012e4ae0[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a6940
extern "C" __declspec(naked) void asm_008a6940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d1a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe6ac5c }
	__asm { mov dword ptr [esi + 4], 0xe6acd4 }
	__asm { mov dword ptr [esi + 0x18], 0xe6acdc }
	__asm { mov dword ptr [esi + 0x1c], 0xe6ace8 }
	__asm { mov eax, dword ptr [g_012de194] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008a69d9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de194], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6ac3c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12de068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008a69d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12de068 }
	__asm { inc dword ptr [g_012e4ae0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de194[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a6c90
extern "C" __declspec(naked) void asm_008a6c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1229e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de194] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008a6d05 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de194], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6ac3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12de068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a6d05: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12de068 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x008a7150
extern "C" __declspec(naked) void asm_008a7150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd355a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ecx], 0xe6ac4c }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_008a719e }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_008a719e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a7460
extern "C" __declspec(naked) void asm_008a7460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd355a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [edi], 0xe6ac4c }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008a74b0 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_008a74b0: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008a74bf }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a74bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc330[];
extern "C" char g_012fc334[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008a9060
extern "C" __declspec(naked) void asm_008a9060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d34e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fc334] }
	__asm { test al, 1 }
	__asm { jne L_008a90d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc334], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008a90be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fc330], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008a90be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fc330], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008a90d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fc330] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x008a9720
extern "C" __declspec(naked) void asm_008a9720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_008a9749 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008a974e }
	__asm { L_008a9749: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_008a974e: }
	__asm { cmp ecx, 0x120def8 }
	__asm { je L_008a9797 }
	__asm { test eax, eax }
	__asm { je L_008a975e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008a9763 }
	__asm { L_008a975e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_008a9763: }
	__asm { push 0x120def8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_008a9797 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_008a9797: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dcb9c[];
extern "C" char g_012e4c3c[];
extern "C" void fn_0052c370();
extern "C" void fn_007cbf10();
extern "C" void fn_009a36a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a99a0
extern "C" __declspec(naked) void asm_008a99a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009a36a0 }
	__asm { mov dword ptr [esi], 0xe6b2dc }
	__asm { mov dword ptr [esi + 4], 0xe6b354 }
	__asm { mov dword ptr [esi + 0x18], 0xe6b35c }
	__asm { mov dword ptr [esi + 0x1c], 0xe6b368 }
	__asm { mov eax, dword ptr [g_012dcb9c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008a9a37 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcb9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003670 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dca70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008a9a37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dca70 }
	__asm { inc dword ptr [g_012e4c3c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a9630();
extern "C" void fn_00b09170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a9e10
extern "C" __declspec(naked) void asm_008a9e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b09170 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_008a9630 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_008a9e69 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a9e69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008a97b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a9f60
extern "C" __declspec(naked) void asm_008a9f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008a97b0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_008a9faf }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a9faf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012dcccc[];
extern "C" char g_012e4c40[];
extern "C" void fn_0063ee40();
extern "C" void fn_007cbf10();
extern "C" void fn_008a9b20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008aa230
extern "C" __declspec(naked) void asm_008aa230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d4b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008a9b20 }
	__asm { mov dword ptr [esi], 0xe6b524 }
	__asm { mov dword ptr [esi + 4], 0xe6b5a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe6b5ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe6b5b8 }
	__asm { mov eax, dword ptr [g_012dcccc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008aa2c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcccc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6b50c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, 0x12dcba0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfeb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008aa2c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dcba0 }
	__asm { inc dword ptr [g_012e4c40] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008aae20
extern "C" __declspec(naked) void asm_008aae20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d590 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008aae78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6ca34 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008aae7a }
	__asm { L_008aae78: }
	__asm { xor eax, eax }
	__asm { L_008aae7a: }
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
	__asm { je L_008aae9e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008aae9e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008aaeb0
extern "C" __declspec(naked) void asm_008aaeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008aaef7 }
	__asm { mov dword ptr [edx], 0xe6c9f8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_008aaef9 }
	__asm { L_008aaef7: }
	__asm { xor edx, edx }
	__asm { L_008aaef9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008aaf10
extern "C" __declspec(naked) void asm_008aaf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008aaf57 }
	__asm { mov dword ptr [edx], 0xe6ca20 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_008aaf59 }
	__asm { L_008aaf57: }
	__asm { xor edx, edx }
	__asm { L_008aaf59: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008aaf70
extern "C" __declspec(naked) void asm_008aaf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008aafb7 }
	__asm { mov dword ptr [edx], 0xe6c9e4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_008aafb9 }
	__asm { L_008aafb7: }
	__asm { xor edx, edx }
	__asm { L_008aafb9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008aafd0
extern "C" __declspec(naked) void asm_008aafd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ab017 }
	__asm { mov dword ptr [edx], 0xe6ca0c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_008ab019 }
	__asm { L_008ab017: }
	__asm { xor edx, edx }
	__asm { L_008ab019: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088da80();
// FUNCTION: ROBLOXSTUDIO 0x008ab390
extern "C" __declspec(naked) void asm_008ab390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008ab3b0 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_008ab3b0: }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0x40800000 }
	__asm { mov dword ptr [ebp - 8], 0x3f99999a }
	__asm { mov dword ptr [ebp - 4], 0x40000000 }
	__asm { call fn_0088da80 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe6b764 }
	__asm { mov dword ptr [esi + 4], 0xe6b870 }
	__asm { mov dword ptr [esi + 0x18], 0xe6b878 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6b884 }
	__asm { mov dword ptr [esi + 0x64], 0xe6b894 }
	__asm { mov dword ptr [esi + 0x70], 0xe6b89c }
	__asm { mov dword ptr [esi + 0x98], 0xe6b8bc }
	__asm { mov dword ptr [esi + 0xb0], 0xe6b8f0 }
	__asm { mov dword ptr [esi + 0xc4], 0xe6b91c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe6b924 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00487530();
extern "C" void fn_00852410();
extern "C" void fn_0090dcd0();
// FUNCTION: ROBLOXSTUDIO 0x008ac490
extern "C" __declspec(naked) void asm_008ac490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00852410 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008ac4cc }
	__asm { mov ecx, eax }
	__asm { call fn_00487530 }
	__asm { test eax, eax }
	__asm { je L_008ac4cc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0090dcd0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008ac4cc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008ac9a0
extern "C" __declspec(naked) void asm_008ac9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008ac9ba }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_008ac9bc }
	__asm { L_008ac9ba: }
	__asm { xor edx, edx }
	__asm { L_008ac9bc: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4d78[];
extern "C" char g_0131dc84[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ad3f0
extern "C" __declspec(naked) void asm_008ad3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d8a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe6ca64 }
	__asm { mov dword ptr [esi + 4], 0xe6cadc }
	__asm { mov dword ptr [esi + 0x18], 0xe6cae4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6caf0 }
	__asm { mov eax, dword ptr [g_0131dc84] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ad48a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dc84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6ca4c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131dc88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ad48a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131dc88 }
	__asm { inc dword ptr [g_012e4d78] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc540[];
extern "C" char g_012fc544[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008ad4b0
extern "C" __declspec(naked) void asm_008ad4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d8be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fc544] }
	__asm { test al, 1 }
	__asm { jne L_008ad4f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc544], eax }
	__asm { push 0xe6ca48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fc540], eax }
	__asm { L_008ad4f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
