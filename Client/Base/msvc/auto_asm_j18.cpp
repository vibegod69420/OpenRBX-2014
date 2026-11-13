// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00ec38b0[];
extern "C" char g_012e7c9c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ff90
extern "C" __declspec(naked) void asm_0080ff90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23aee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7c9c] }
	__asm { test al, 1 }
	__asm { jne L_0080fffc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7c9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec38b0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7b70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7770 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fffc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7b70 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74ba4[];
extern "C" char g_012e802c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810010
extern "C" __declspec(naked) void asm_00810010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23b0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e802c] }
	__asm { test al, 1 }
	__asm { jne L_0081007c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e802c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e74ba4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7f00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081007c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7f00 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ead924[];
extern "C" char g_012e7efc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810090
extern "C" __declspec(naked) void asm_00810090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23b2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7efc] }
	__asm { test al, 1 }
	__asm { jne L_008100fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7efc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ead924] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7dd0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008100fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7dd0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ead464[];
extern "C" char g_012e7dcc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810110
extern "C" __declspec(naked) void asm_00810110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a22e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7dcc] }
	__asm { test al, 1 }
	__asm { jne L_0081017c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7dcc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ead464] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7ca0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081017c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7ca0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a84[];
extern "C" char g_012ea16c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810190
extern "C" __declspec(naked) void asm_00810190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23b4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea16c] }
	__asm { test al, 1 }
	__asm { jne L_008101fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea16c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a84] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea040 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008101fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea040 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b9d8[];
extern "C" char g_012e83bc[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810210
extern "C" __declspec(naked) void asm_00810210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23b6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e83bc] }
	__asm { test al, 1 }
	__asm { jne L_0081027c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e83bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9b9d8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8290 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081027c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8290 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3af0[];
extern "C" char g_012e861c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810290
extern "C" __declspec(naked) void asm_00810290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23b8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e861c] }
	__asm { test al, 1 }
	__asm { jne L_008102fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e861c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec3af0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e84f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008102fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e84f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a68[];
extern "C" char g_012ea75c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810310
extern "C" __declspec(naked) void asm_00810310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23bae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea75c] }
	__asm { test al, 1 }
	__asm { jne L_0081037c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea75c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb1a68] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea630 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081037c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea630 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb257c[];
extern "C" char g_012ead4c[];
extern "C" void fn_004833f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810390
extern "C" __declspec(naked) void asm_00810390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c1ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ead4c] }
	__asm { test al, 1 }
	__asm { jne L_008103fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ead4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb257c] }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eac20 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008103fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eac20 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb28b4[];
extern "C" char g_012eae7c[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810410
extern "C" __declspec(naked) void asm_00810410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23bce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eae7c] }
	__asm { test al, 1 }
	__asm { jne L_0081047c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eae7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb28b4] }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12ead50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081047c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ead50 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb28b0[];
extern "C" char g_012eafac[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810490
extern "C" __declspec(naked) void asm_00810490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23bee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eafac] }
	__asm { test al, 1 }
	__asm { jne L_008104fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eafac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb28b0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eae80 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7810 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008104fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eae80 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebc048[];
extern "C" char g_012efce4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810510
extern "C" __declspec(naked) void asm_00810510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23c0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012efce4] }
	__asm { test al, 1 }
	__asm { jne L_0081057c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebc048] }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efbb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081057c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12efbb8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88db8[];
extern "C" char g_012eeea4[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810590
extern "C" __declspec(naked) void asm_00810590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23c2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eeea4] }
	__asm { test al, 1 }
	__asm { jne L_008105fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eeea4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e88db8] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12eed78 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7830 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008105fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eed78 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e947d4[];
extern "C" char g_012e57c4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810610
extern "C" __declspec(naked) void asm_00810610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f78e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e57c4] }
	__asm { test al, 1 }
	__asm { jne L_0081067c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e57c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00e947d4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081067c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5698 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eadf84[];
extern "C" char g_012e887c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810690
extern "C" __declspec(naked) void asm_00810690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23c4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e887c] }
	__asm { test al, 1 }
	__asm { jne L_008106fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e887c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eadf84] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8750 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008106fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8750 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6d318[];
extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810710
extern "C" __declspec(naked) void asm_00810710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23c6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { test al, 1 }
	__asm { jne L_0081077c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6d318] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081077c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb0e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec6d90[];
extern "C" char g_012f15d4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810790
extern "C" __declspec(naked) void asm_00810790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23c8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f15d4] }
	__asm { test al, 1 }
	__asm { jne L_008107fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f15d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec6d90] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f14a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008107fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f14a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e76d14[];
extern "C" char g_012eb0dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810810
extern "C" __declspec(naked) void asm_00810810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23cae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb0dc] }
	__asm { test al, 1 }
	__asm { jne L_0081087c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb0dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e76d14] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eafb0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081087c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eafb0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec42c8[];
extern "C" char g_012eb59c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810890
extern "C" __declspec(naked) void asm_00810890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23cce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb59c] }
	__asm { test al, 1 }
	__asm { jne L_008108fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb59c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec42c8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb470 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008108fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb470 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aa4[];
extern "C" char g_012e9f0c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810910
extern "C" __declspec(naked) void asm_00810910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23cee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e9f0c] }
	__asm { test al, 1 }
	__asm { jne L_0081097c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9f0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78aa4] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9de0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081097c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9de0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebf288[];
extern "C" char g_012f2084[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810990
extern "C" __declspec(naked) void asm_00810990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23d0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2084] }
	__asm { test al, 1 }
	__asm { jne L_008109fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2084], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00ebf288] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1f58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008109fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1f58 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec28fc[];
extern "C" char g_012e5eec[];
extern "C" void fn_0041f030();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810a10
extern "C" __declspec(naked) void asm_00810a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23d2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5eec] }
	__asm { test al, 1 }
	__asm { jne L_00810a7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5eec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec28fc] }
	__asm { call fn_0041f030 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5dc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810a7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5dc0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3070[];
extern "C" char g_012e627c[];
extern "C" void fn_0041ed90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810a90
extern "C" __declspec(naked) void asm_00810a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23d4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e627c] }
	__asm { test al, 1 }
	__asm { jne L_00810afc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e627c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec3070] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6150 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810afc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6150 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb1b8[];
extern "C" char g_012ef5c4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00812d10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810b10
extern "C" __declspec(naked) void asm_00810b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23d6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef5c4] }
	__asm { test al, 1 }
	__asm { jne L_00810b7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef5c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebb1b8] }
	__asm { call fn_00812d10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef498 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810b7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef498 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e80448[];
extern "C" char g_012e5434[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810b90
extern "C" __declspec(naked) void asm_00810b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23d8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5434] }
	__asm { test al, 1 }
	__asm { jne L_00810bfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5434], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e80448] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5308 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810bfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5308 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec09e4[];
extern "C" char g_012ef234[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810c10
extern "C" __declspec(naked) void asm_00810c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23dae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { test al, 1 }
	__asm { jne L_00810c7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00ec09e4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810c7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef108 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb5694[];
extern "C" char g_012eb92c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810d10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810c90
extern "C" __declspec(naked) void asm_00810c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23dce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb92c] }
	__asm { test al, 1 }
	__asm { jne L_00810cfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb92c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb5694] }
	__asm { call fn_00810d10 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb800 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810cfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb800 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec4540[];
extern "C" char g_012eb7fc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00812090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810d10
extern "C" __declspec(naked) void asm_00810d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23dee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb7fc] }
	__asm { test al, 1 }
	__asm { jne L_00810d7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb7fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec4540] }
	__asm { call fn_00812090 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb6d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7920 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810d7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb6d0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e99308[];
extern "C" char g_012e660c[];
extern "C" void fn_0068a630();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810d90
extern "C" __declspec(naked) void asm_00810d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e660c] }
	__asm { test al, 1 }
	__asm { jne L_00810dfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e660c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e99308] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, 0x12e64e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7930 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810dfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e64e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb61ec[];
extern "C" char g_012ec04c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810e10
extern "C" __declspec(naked) void asm_00810e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec04c] }
	__asm { test al, 1 }
	__asm { jne L_00810e7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec04c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb61ec] }
	__asm { call fn_00811a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ebf20 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7940 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810e7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ebf20 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a70[];
extern "C" char g_012ea9bc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810e90
extern "C" __declspec(naked) void asm_00810e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea9bc] }
	__asm { test al, 1 }
	__asm { jne L_00810efc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea9bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb1a70] }
	__asm { call fn_00810310 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea890 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7950 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810efc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea890 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7f77c[];
extern "C" char g_012e673c[];
extern "C" void fn_00486e40();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810f10
extern "C" __declspec(naked) void asm_00810f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e673c] }
	__asm { test al, 1 }
	__asm { jne L_00810f7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e673c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7f77c] }
	__asm { call fn_00486e40 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6610 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7960 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810f7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6610 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e93864[];
extern "C" char g_012ed93c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080fb90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00810f90
extern "C" __declspec(naked) void asm_00810f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23e8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed93c] }
	__asm { test al, 1 }
	__asm { jne L_00810ffc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed93c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e93864] }
	__asm { call fn_0080fb90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed810 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00810ffc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed810 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e95874[];
extern "C" char g_012e5304[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811010
extern "C" __declspec(naked) void asm_00811010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23eae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5304] }
	__asm { test al, 1 }
	__asm { jne L_0081107c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e95874] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e51d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081107c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e51d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e92bbc[];
extern "C" char g_012f1374[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811090
extern "C" __declspec(naked) void asm_00811090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23ece }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1374] }
	__asm { test al, 1 }
	__asm { jne L_008110fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00e92bbc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008110fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1248 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef343c[];
extern "C" char g_012f0d84[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811110
extern "C" __declspec(naked) void asm_00811110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23eee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0d84] }
	__asm { test al, 1 }
	__asm { jne L_0081117c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0d84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef343c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0c58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081117c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0c58 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec4734[];
extern "C" char g_012ebb8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811190
extern "C" __declspec(naked) void asm_00811190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23f0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ebb8c] }
	__asm { test al, 1 }
	__asm { jne L_008111fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebb8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00ec4734] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eba60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008111fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eba60 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7d5f0[];
extern "C" char g_012f0404[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811210
extern "C" __declspec(naked) void asm_00811210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23f2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0404] }
	__asm { test al, 1 }
	__asm { jne L_0081127c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0404], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7d5f0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f02d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081127c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f02d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7d7dc[];
extern "C" char g_012f0534[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811290
extern "C" __declspec(naked) void asm_00811290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23f4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0534] }
	__asm { test al, 1 }
	__asm { jne L_008112fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0534], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7d7dc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0408 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008112fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0408 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec65a8[];
extern "C" char g_012f0794[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811310
extern "C" __declspec(naked) void asm_00811310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23f6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0794] }
	__asm { test al, 1 }
	__asm { jne L_0081137c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0794], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00ec65a8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0668 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081137c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0668 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7f770[];
extern "C" char g_012e686c[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811390
extern "C" __declspec(naked) void asm_00811390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23f8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e686c] }
	__asm { test al, 1 }
	__asm { jne L_008113fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e686c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7f770] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6740 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008113fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6740 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec4bd4[];
extern "C" char g_012ebcbc[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811410
extern "C" __declspec(naked) void asm_00811410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23fae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ebcbc] }
	__asm { test al, 1 }
	__asm { jne L_0081147c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebcbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00ec4bd4] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12ebb90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081147c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ebb90 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec58c8[];
extern "C" char g_012ee9dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811490
extern "C" __declspec(naked) void asm_00811490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23fce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee9dc] }
	__asm { test al, 1 }
	__asm { jne L_008114fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee9dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00ec58c8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee8b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008114fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee8b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eaccf4[];
extern "C" char g_012e7b6c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811510
extern "C" __declspec(naked) void asm_00811510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49a4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7b6c] }
	__asm { test al, 1 }
	__asm { jne L_0081157c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7b6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eaccf4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7a40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081157c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7a40 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec77dc[];
extern "C" char g_012f1834[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811590
extern "C" __declspec(naked) void asm_00811590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23fee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1834] }
	__asm { test al, 1 }
	__asm { jne L_008115fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1834], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec77dc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1708 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008115fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1708 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebcbe8[];
extern "C" char g_012f1964[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811610
extern "C" __declspec(naked) void asm_00811610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2400e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1964] }
	__asm { test al, 1 }
	__asm { jne L_0081167c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1964], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebcbe8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1838 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081167c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1838 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb31e0[];
extern "C" char g_012eb33c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811690
extern "C" __declspec(naked) void asm_00811690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2402e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb33c] }
	__asm { test al, 1 }
	__asm { jne L_008116fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb33c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb31e0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb210 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008116fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb210 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e84b24[];
extern "C" char g_012f1244[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811710
extern "C" __declspec(naked) void asm_00811710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2404e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1244] }
	__asm { test al, 1 }
	__asm { jne L_0081177c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1244], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e84b24] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1118 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081177c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1118 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a9c[];
extern "C" char g_012e9ddc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811810();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811790
extern "C" __declspec(naked) void asm_00811790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2406e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e9ddc] }
	__asm { test al, 1 }
	__asm { jne L_008117fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9ddc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a9c] }
	__asm { call fn_00811810 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9cb0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008117fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9cb0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a88[];
extern "C" char g_012e9b7c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811810
extern "C" __declspec(naked) void asm_00811810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2408e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e9b7c] }
	__asm { test al, 1 }
	__asm { jne L_0081187c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9b7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a88] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9a50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081187c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9a50 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a90[];
extern "C" char g_012e9cac[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811810();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811890
extern "C" __declspec(naked) void asm_00811890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd240ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e9cac] }
	__asm { test al, 1 }
	__asm { jne L_008118fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9cac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a90] }
	__asm { call fn_00811810 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9b80 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008118fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9b80 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb9808[];
extern "C" char g_012eed74[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811910
extern "C" __declspec(naked) void asm_00811910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e79e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eed74] }
	__asm { test al, 1 }
	__asm { jne L_0081197c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eed74], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x13 }
	__asm { push dword ptr [g_00eb9808] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eec48 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7aa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081197c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eec48 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b7fc[];
extern "C" char g_012ebdec[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f690();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811990
extern "C" __declspec(naked) void asm_00811990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd240ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ebdec] }
	__asm { test al, 1 }
	__asm { jne L_008119fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebdec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00e9b7fc] }
	__asm { call fn_0080f690 }
	__asm { push eax }
	__asm { mov ecx, 0x12ebcc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ab0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008119fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ebcc0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb61e8[];
extern "C" char g_012ebf1c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811a10
extern "C" __declspec(naked) void asm_00811a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd240ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ebf1c] }
	__asm { test al, 1 }
	__asm { jne L_00811a7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebf1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb61e8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ebdf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ac0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811a7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ebdf0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aac[];
extern "C" char g_012ea62c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811b10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811a90
extern "C" __declspec(naked) void asm_00811a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2410e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea62c] }
	__asm { test al, 1 }
	__asm { jne L_00811afc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea62c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78aac] }
	__asm { call fn_00811b10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea500 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ad0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811afc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea500 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aa0[];
extern "C" char g_012ea4fc[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811b10
extern "C" __declspec(naked) void asm_00811b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2412e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea4fc] }
	__asm { test al, 1 }
	__asm { jne L_00811b7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea4fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78aa0] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea3d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ae0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811b7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea3d0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a6c[];
extern "C" char g_012ea88c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811b90
extern "C" __declspec(naked) void asm_00811b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2414e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea88c] }
	__asm { test al, 1 }
	__asm { jne L_00811bfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea88c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb1a6c] }
	__asm { call fn_00810310 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea760 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7af0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811bfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea760 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec2358[];
extern "C" char g_012e58f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811c10
extern "C" __declspec(naked) void asm_00811c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2416e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e58f4] }
	__asm { test al, 1 }
	__asm { jne L_00811c7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec2358] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811c7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e57c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e762bc[];
extern "C" char g_012ec17c[];
extern "C" void fn_007b1540();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811c90
extern "C" __declspec(naked) void asm_00811c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2418e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec17c] }
	__asm { test al, 1 }
	__asm { jne L_00811cfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec17c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e762bc] }
	__asm { call fn_007b1540 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec050 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811cfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec050 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e894e0[];
extern "C" char g_012ef104[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811d10
extern "C" __declspec(naked) void asm_00811d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd241ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef104] }
	__asm { test al, 1 }
	__asm { jne L_00811d7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef104], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e894e0] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12eefd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811d7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eefd8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e89264[];
extern "C" char g_012eefd4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811d90
extern "C" __declspec(naked) void asm_00811d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd241ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eefd4] }
	__asm { test al, 1 }
	__asm { jne L_00811dfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eefd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e89264] }
	__asm { call fn_00810590 }
	__asm { push eax }
	__asm { mov ecx, 0x12eeea8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811dfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eeea8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec78fc[];
extern "C" char g_012f1f54[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811e10
extern "C" __declspec(naked) void asm_00811e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd241ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1f54] }
	__asm { test al, 1 }
	__asm { jne L_00811e7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1f54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec78fc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1e28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811e7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1e28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3ea4[];
extern "C" char g_012f0fe4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811e90
extern "C" __declspec(naked) void asm_00811e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2420e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0fe4] }
	__asm { test al, 1 }
	__asm { jne L_00811efc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0fe4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef3ea4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0eb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811efc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0eb8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec2be0[];
extern "C" char g_012e614c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811f10
extern "C" __declspec(naked) void asm_00811f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2422e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e614c] }
	__asm { test al, 1 }
	__asm { jne L_00811f7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e614c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec2be0] }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6020 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811f7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6020 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a620[];
extern "C" char g_012e6e5c[];
extern "C" void fn_007707e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00811f90
extern "C" __declspec(naked) void asm_00811f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2424e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e6e5c] }
	__asm { test al, 1 }
	__asm { jne L_00811ffc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6e5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a620] }
	__asm { call fn_007707e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6d30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00811ffc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6d30 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec40dc[];
extern "C" char g_012e958c[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812010
extern "C" __declspec(naked) void asm_00812010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2426e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e958c] }
	__asm { test al, 1 }
	__asm { jne L_0081207c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e958c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec40dc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9460 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081207c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9460 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec2bdc[];
extern "C" char g_012e601c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812090
extern "C" __declspec(naked) void asm_00812090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2428e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e601c] }
	__asm { test al, 1 }
	__asm { jne L_008120fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e601c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec2bdc] }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5ef0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008120fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5ef0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb0324[];
extern "C" char g_012e91fc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812110
extern "C" __declspec(naked) void asm_00812110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd242ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e91fc] }
	__asm { test al, 1 }
	__asm { jne L_0081217c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e91fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00eb0324] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e90d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ba0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081217c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e90d0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb0328[];
extern "C" char g_012e90cc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812190
extern "C" __declspec(naked) void asm_00812190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd242ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e90cc] }
	__asm { test al, 1 }
	__asm { jne L_008121fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e90cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00eb0328] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8fa0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008121fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8fa0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec05e4[];
extern "C" char g_012e8adc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812210
extern "C" __declspec(naked) void asm_00812210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd242ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e8adc] }
	__asm { test al, 1 }
	__asm { jne L_0081227c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8adc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec05e4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e89b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081227c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e89b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3434[];
extern "C" char g_012f0c54[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812290
extern "C" __declspec(naked) void asm_00812290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2430e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0c54] }
	__asm { test al, 1 }
	__asm { jne L_008122fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0c54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef3434] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0b28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008122fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0b28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec4dbc[];
extern "C" char g_012ec50c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812310
extern "C" __declspec(naked) void asm_00812310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2432e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec50c] }
	__asm { test al, 1 }
	__asm { jne L_0081237c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec50c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec4dbc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec3e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7be0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081237c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec3e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eadaf0[];
extern "C" char g_012e828c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812390
extern "C" __declspec(naked) void asm_00812390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2434e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e828c] }
	__asm { test al, 1 }
	__asm { jne L_008123fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e828c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eadaf0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8160 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008123fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8160 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5424[];
extern "C" char g_012ec76c[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812410
extern "C" __declspec(naked) void asm_00812410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2436e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec76c] }
	__asm { test al, 1 }
	__asm { jne L_0081247c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec76c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5424] }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec640 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081247c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec640 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77190[];
extern "C" char g_012ec89c[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812490
extern "C" __declspec(naked) void asm_00812490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd293de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec89c] }
	__asm { test al, 1 }
	__asm { jne L_008124fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec89c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 5 }
	__asm { push dword ptr [g_00e77190] }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec770 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008124fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec770 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec6be0[];
extern "C" char g_012f08c4[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812510
extern "C" __declspec(naked) void asm_00812510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2438e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f08c4] }
	__asm { test al, 1 }
	__asm { jne L_0081257c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f08c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec6be0] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0798 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081257c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0798 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5494[];
extern "C" char g_012ecafc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811c10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812590
extern "C" __declspec(naked) void asm_00812590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd243ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ecafc] }
	__asm { test al, 1 }
	__asm { jne L_008125fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecafc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5494] }
	__asm { call fn_00811c10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec9d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008125fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec9d0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e83058[];
extern "C" char g_012ecfbc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812610
extern "C" __declspec(naked) void asm_00812610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3768e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ecfbc] }
	__asm { test al, 1 }
	__asm { jne L_0081267c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecfbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e83058] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ece90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081267c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ece90 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e83060[];
extern "C" char g_012ed0ec[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812690
extern "C" __declspec(naked) void asm_00812690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd243ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed0ec] }
	__asm { test al, 1 }
	__asm { jne L_008126fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed0ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e83060] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecfc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008126fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ecfc0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5674[];
extern "C" char g_012ecc2c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811c10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812710
extern "C" __declspec(naked) void asm_00812710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd243ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ecc2c] }
	__asm { test al, 1 }
	__asm { jne L_0081277c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecc2c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5674] }
	__asm { call fn_00811c10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecb00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081277c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ecb00 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebdd30[];
extern "C" char g_012f1bc4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812790
extern "C" __declspec(naked) void asm_00812790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd510ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1bc4] }
	__asm { test al, 1 }
	__asm { jne L_008127fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1bc4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebdd30] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1a98 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008127fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1a98 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7d39c[];
extern "C" char g_012f02d4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812810
extern "C" __declspec(naked) void asm_00812810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2440e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f02d4] }
	__asm { test al, 1 }
	__asm { jne L_0081287c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f02d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7d39c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f01a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081287c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f01a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ea5868[];
extern "C" char g_012e932c[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812890
extern "C" __declspec(naked) void asm_00812890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2442e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e932c] }
	__asm { test al, 1 }
	__asm { jne L_008128fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e932c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ea5868] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9200 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008128fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9200 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ea5908[];
extern "C" char g_012e945c[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812910
extern "C" __declspec(naked) void asm_00812910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2444e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e945c] }
	__asm { test al, 1 }
	__asm { jne L_0081297c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e945c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ea5908] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9330 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081297c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9330 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9e158[];
extern "C" char g_012e84ec[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812990
extern "C" __declspec(naked) void asm_00812990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2446e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e84ec] }
	__asm { test al, 1 }
	__asm { jne L_008129fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e84ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9e158] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e83c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008129fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e83c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec40f4[];
extern "C" char g_012e96bc[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812a10
extern "C" __declspec(naked) void asm_00812a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2448e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e96bc] }
	__asm { test al, 1 }
	__asm { jne L_00812a7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e96bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec40f4] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9590 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812a7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9590 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78ab4[];
extern "C" char g_012ea03c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812a90
extern "C" __declspec(naked) void asm_00812a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd244ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea03c] }
	__asm { test al, 1 }
	__asm { jne L_00812afc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea03c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78ab4] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9f10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812afc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9f10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a8c[];
extern "C" char g_012ea29c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812b10
extern "C" __declspec(naked) void asm_00812b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd244ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea29c] }
	__asm { test al, 1 }
	__asm { jne L_00812b7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea29c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a8c] }
	__asm { call fn_00810190 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea170 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812b7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea170 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a98[];
extern "C" char g_012ea3cc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812b90
extern "C" __declspec(naked) void asm_00812b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd244ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ea3cc] }
	__asm { test al, 1 }
	__asm { jne L_00812bfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea3cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78a98] }
	__asm { call fn_00810190 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea2a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812bfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea2a0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6f214[];
extern "C" char g_012e5564[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812c10
extern "C" __declspec(naked) void asm_00812c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ea0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5564] }
	__asm { test al, 1 }
	__asm { jne L_00812c7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00e6f214] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812c7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5438 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5bd4[];
extern "C" char g_012ef6f4[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812c90
extern "C" __declspec(naked) void asm_00812c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2450e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef6f4] }
	__asm { test al, 1 }
	__asm { jne L_00812cfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef6f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5bd4] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef5c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812cfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef5c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb1b4[];
extern "C" char g_012ef494[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812d10
extern "C" __declspec(naked) void asm_00812d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd529ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef494] }
	__asm { test al, 1 }
	__asm { jne L_00812d7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef494], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebb1b4] }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef368 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812d7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef368 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6f660[];
extern "C" char g_012eb46c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812d90
extern "C" __declspec(naked) void asm_00812d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f65e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb46c] }
	__asm { test al, 1 }
	__asm { jne L_00812dfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb46c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e6f660] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb340 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812dfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb340 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec58dc[];
extern "C" char g_012eeb0c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812e10
extern "C" __declspec(naked) void asm_00812e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2452e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eeb0c] }
	__asm { test al, 1 }
	__asm { jne L_00812e7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eeb0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec58dc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee9e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812e7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee9e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ea7fa4[];
extern "C" char g_012e8c0c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812e90
extern "C" __declspec(naked) void asm_00812e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2454e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e8c0c] }
	__asm { test al, 1 }
	__asm { jne L_00812efc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8c0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ea7fa4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8ae0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812efc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8ae0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebe6c0[];
extern "C" char g_012f1cf4[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812f10
extern "C" __declspec(naked) void asm_00812f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2456e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { test al, 1 }
	__asm { jne L_00812f7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebe6c0] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812f7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1bc8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7b04c[];
extern "C" char g_012ed21c[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00812f90
extern "C" __declspec(naked) void asm_00812f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2458e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed21c] }
	__asm { test al, 1 }
	__asm { jne L_00812ffc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed21c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7b04c] }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed0f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00812ffc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed0f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e68f10[];
extern "C" char g_012ec3dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813010
extern "C" __declspec(naked) void asm_00813010()
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
	__asm { test al, 1 }
	__asm { jne L_0081307c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec3dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e68f10] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec2b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081307c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec2b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb6bd4[];
extern "C" char g_012ed34c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813090
extern "C" __declspec(naked) void asm_00813090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd245ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed34c] }
	__asm { test al, 1 }
	__asm { jne L_008130fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed34c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb6bd4] }
	__asm { call fn_00811f10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed220 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008130fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed220 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb6f0[];
extern "C" char g_012ef824[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813110
extern "C" __declspec(naked) void asm_00813110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd245ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef824] }
	__asm { test al, 1 }
	__asm { jne L_0081317c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebb6f0] }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef6f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7da0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081317c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef6f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb6f4[];
extern "C" char g_012ef954[];
extern "C" void fn_007cbf10();
extern "C" void fn_00813110();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813190
extern "C" __declspec(naked) void asm_00813190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2460e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef954] }
	__asm { test al, 1 }
	__asm { jne L_008131fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef954], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebb6f4] }
	__asm { call fn_00813110 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef828 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7db0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008131fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef828 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb6ec[];
extern "C" char g_012efa84[];
extern "C" void fn_007cbf10();
extern "C" void fn_00813110();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813210
extern "C" __declspec(naked) void asm_00813210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2462e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012efa84] }
	__asm { test al, 1 }
	__asm { jne L_0081327c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efa84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebb6ec] }
	__asm { call fn_00813110 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7dc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081327c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef958 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a624[];
extern "C" char g_012e6f8c[];
extern "C" void fn_007707e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813290
extern "C" __declspec(naked) void asm_00813290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2464e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e6f8c] }
	__asm { test al, 1 }
	__asm { jne L_008132fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6f8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a624] }
	__asm { call fn_007707e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6e60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7dd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008132fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6e60 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb821c[];
extern "C" char g_012edb9c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080fb90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813310
extern "C" __declspec(naked) void asm_00813310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2466e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012edb9c] }
	__asm { test al, 1 }
	__asm { jne L_0081337c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012edb9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb821c] }
	__asm { call fn_0080fb90 }
	__asm { push eax }
	__asm { mov ecx, 0x12eda70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7de0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081337c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eda70 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb6db8[];
extern "C" char g_012ed5ac[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813390
extern "C" __declspec(naked) void asm_00813390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2468e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed5ac] }
	__asm { test al, 1 }
	__asm { jne L_008133fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed5ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb6db8] }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed480 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7df0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008133fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed480 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a618[];
extern "C" char g_012e71ec[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813410
extern "C" __declspec(naked) void asm_00813410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd246ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e71ec] }
	__asm { test al, 1 }
	__asm { jne L_0081347c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e71ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a618] }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e70c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081347c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e70c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9dac4[];
extern "C" char g_012ed47c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813490
extern "C" __declspec(naked) void asm_00813490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ab6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed47c] }
	__asm { test al, 1 }
	__asm { jne L_008134fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed47c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9dac4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed350 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008134fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed350 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aa8[];
extern "C" char g_012e991c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813510
extern "C" __declspec(naked) void asm_00813510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd246ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e991c] }
	__asm { test al, 1 }
	__asm { jne L_0081357c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e991c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78aa8] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e97f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081357c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e97f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec02c0[];
extern "C" char g_012f14a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813590
extern "C" __declspec(naked) void asm_00813590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd246ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f14a4] }
	__asm { test al, 1 }
	__asm { jne L_008135fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f14a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec02c0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1378 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008135fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1378 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3f78[];
extern "C" char g_012f1114[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813610
extern "C" __declspec(naked) void asm_00813610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2470e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1114] }
	__asm { test al, 1 }
	__asm { jne L_0081367c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1114], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef3f78] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0fe8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081367c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0fe8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb84f0[];
extern "C" char g_012edccc[];
extern "C" void fn_0052e710();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813690
extern "C" __declspec(naked) void asm_00813690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2472e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012edccc] }
	__asm { test al, 1 }
	__asm { jne L_008136fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012edccc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb84f0] }
	__asm { call fn_0052e710 }
	__asm { push eax }
	__asm { mov ecx, 0x12edba0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008136fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12edba0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb84f4[];
extern "C" char g_012eddfc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813710
extern "C" __declspec(naked) void asm_00813710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2474e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eddfc] }
	__asm { test al, 1 }
	__asm { jne L_0081377c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eddfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb84f4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12edcd0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081377c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12edcd0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7f774[];
extern "C" char g_012e699c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813790
extern "C" __declspec(naked) void asm_00813790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2476e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e699c] }
	__asm { test al, 1 }
	__asm { jne L_008137fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e699c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7f774] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6870 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008137fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6870 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eaaba4[];
extern "C" char g_012eec3c[];
extern "C" void fn_007c92f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813810
extern "C" __declspec(naked) void asm_00813810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2478e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eec3c] }
	__asm { test al, 1 }
	__asm { jne L_0081387c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eec3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00eaaba4] }
	__asm { call fn_007c92f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eeb10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081387c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eeb10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e954ec[];
extern "C" char g_012ec63c[];
extern "C" void fn_00532170();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813890
extern "C" __declspec(naked) void asm_00813890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd247ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec63c] }
	__asm { test al, 1 }
	__asm { jne L_008138fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec63c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00e954ec] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec510 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008138fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec510 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5834[];
extern "C" char g_012ee51c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813910
extern "C" __declspec(naked) void asm_00813910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd558de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee51c] }
	__asm { test al, 1 }
	__asm { jne L_0081397c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee51c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5834] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee3f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081397c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee3f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8291c[];
extern "C" char g_012e64dc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813990
extern "C" __declspec(naked) void asm_00813990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd247ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e64dc] }
	__asm { test al, 1 }
	__asm { jne L_008139fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e64dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e8291c] }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e63b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7eb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008139fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e63b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb8fb8[];
extern "C" char g_012edf2c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00812090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813a10
extern "C" __declspec(naked) void asm_00813a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd247ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012edf2c] }
	__asm { test al, 1 }
	__asm { jne L_00813a7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012edf2c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb8fb8] }
	__asm { call fn_00812090 }
	__asm { push eax }
	__asm { mov ecx, 0x12ede00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ec0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813a7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ede00 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74ba0[];
extern "C" char g_012e815c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813a90
extern "C" __declspec(naked) void asm_00813a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2480e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e815c] }
	__asm { test al, 1 }
	__asm { jne L_00813afc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e815c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e74ba0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8030 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ed0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813afc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8030 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e976a4[];
extern "C" char g_012e5694[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813b10
extern "C" __declspec(naked) void asm_00813b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e08e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5694] }
	__asm { test al, 1 }
	__asm { jne L_00813b7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e976a4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ee0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813b7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5568 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb9218[];
extern "C" char g_012ee05c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813b90
extern "C" __declspec(naked) void asm_00813b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2482e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee05c] }
	__asm { test al, 1 }
	__asm { jne L_00813bfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee05c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00eb9218] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12edf30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ef0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813bfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12edf30 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e73670[];
extern "C" char g_012e5a24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813c10
extern "C" __declspec(naked) void asm_00813c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2484e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5a24] }
	__asm { test al, 1 }
	__asm { jne L_00813c7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5a24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e73670] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e58f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813c7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e58f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb0054[];
extern "C" char g_012e8f9c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813c90
extern "C" __declspec(naked) void asm_00813c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2486e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e8f9c] }
	__asm { test al, 1 }
	__asm { jne L_00813cfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8f9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb0054] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8e70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813cfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8e70 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eadf88[];
extern "C" char g_012e874c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813d10
extern "C" __declspec(naked) void asm_00813d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a80e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e874c] }
	__asm { test al, 1 }
	__asm { jne L_00813d7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e874c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eadf88] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8620 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813d7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8620 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9dcf4[];
extern "C" char g_012ee18c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813d90
extern "C" __declspec(naked) void asm_00813d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2488e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee18c] }
	__asm { test al, 1 }
	__asm { jne L_00813dfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee18c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e9dcf4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee060 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813dfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee060 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5824[];
extern "C" char g_012ee2bc[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f690();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813e10
extern "C" __declspec(naked) void asm_00813e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd248ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee2bc] }
	__asm { test al, 1 }
	__asm { jne L_00813e7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee2bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00ec5824] }
	__asm { call fn_0080f690 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee190 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813e7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee190 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebbce8[];
extern "C" char g_012efbb4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813e90
extern "C" __declspec(naked) void asm_00813e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd248ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012efbb4] }
	__asm { test al, 1 }
	__asm { jne L_00813efc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efbb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebbce8] }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efa88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813efc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12efa88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb9490[];
extern "C" char g_012ee3ec[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813f10
extern "C" __declspec(naked) void asm_00813f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd248ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee3ec] }
	__asm { test al, 1 }
	__asm { jne L_00813f7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee3ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00eb9490] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee2c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813f7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee2c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e83054[];
extern "C" char g_012ece8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00813f90
extern "C" __declspec(naked) void asm_00813f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2490e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ece8c] }
	__asm { test al, 1 }
	__asm { jne L_00813ffc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ece8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e83054] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecd60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00813ffc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ecd60 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb95f0[];
extern "C" char g_012ee64c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814010
extern "C" __declspec(naked) void asm_00814010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2492e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee64c] }
	__asm { test al, 1 }
	__asm { jne L_0081407c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee64c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00eb95f0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee520 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081407c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee520 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5a6c[];
extern "C" char g_012ef364[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814090
extern "C" __declspec(naked) void asm_00814090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2494e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ef364] }
	__asm { test al, 1 }
	__asm { jne L_008140fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5a6c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008140fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ef238 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e878f4[];
extern "C" char g_012e5dbc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814110
extern "C" __declspec(naked) void asm_00814110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3afce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5dbc] }
	__asm { test al, 1 }
	__asm { jne L_0081417c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5dbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e878f4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5c90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081417c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5c90 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9386c[];
extern "C" char g_012eda6c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080fb90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814190
extern "C" __declspec(naked) void asm_00814190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2496e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eda6c] }
	__asm { test al, 1 }
	__asm { jne L_008141fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eda6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9386c] }
	__asm { call fn_0080fb90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed940 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008141fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed940 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7c160[];
extern "C" char g_012ee77c[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814210
extern "C" __declspec(naked) void asm_00814210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34a4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee77c] }
	__asm { test al, 1 }
	__asm { jne L_0081427c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee77c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7c160] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee650 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081427c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee650 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a74[];
extern "C" char g_012eaaec[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814290
extern "C" __declspec(naked) void asm_00814290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2498e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eaaec] }
	__asm { test al, 1 }
	__asm { jne L_008142fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eaaec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb1a74] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea9c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008142fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ea9c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac7a0[];
extern "C" char g_012e7a3c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814310
extern "C" __declspec(naked) void asm_00814310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd249ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e7a3c] }
	__asm { test al, 1 }
	__asm { jne L_0081437c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7a3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00eac7a0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7910 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081437c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7910 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e75e0c[];
extern "C" char g_012ee8ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814390
extern "C" __declspec(naked) void asm_00814390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd249ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ee8ac] }
	__asm { test al, 1 }
	__asm { jne L_008143fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee8ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e75e0c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee780 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008143fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ee780 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb6474[];
extern "C" char g_012ec2ac[];
extern "C" void fn_0052e9a0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814410
extern "C" __declspec(naked) void asm_00814410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd249ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec2ac] }
	__asm { test al, 1 }
	__asm { jne L_0081447c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec2ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb6474] }
	__asm { call fn_0052e9a0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec180 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0081447c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec180 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78ab0[];
extern "C" char g_012e9a4c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814490
extern "C" __declspec(naked) void asm_00814490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24a0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e9a4c] }
	__asm { test al, 1 }
	__asm { jne L_008144fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9a4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e78ab0] }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9920 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008144fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e9920 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00412c00();
extern "C" void fn_00814630();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00814770
extern "C" __declspec(naked) void asm_00814770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008147e3 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00814630 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_008147c8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008147af }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008147af: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_008147c8: }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_008147db }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008147db: }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008147e3: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5e80[];
extern "C" void fn_004115f0();
extern "C" void fn_007db770();
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008147f0
extern "C" __declspec(naked) void asm_008147f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081481e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814820 }
	__asm { L_0081481e: }
	__asm { xor bl, bl }
	__asm { L_00814820: }
	__asm { push 0x820ac0 }
	__asm { push 0x12f3020 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5e80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814868 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814868: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5df8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007db770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3330[];
extern "C" void fn_004115f0();
extern "C" void fn_007db800();
extern "C" void fn_00aeeaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814890
extern "C" __declspec(naked) void asm_00814890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008148be }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008148c0 }
	__asm { L_008148be: }
	__asm { xor bl, bl }
	__asm { L_008148c0: }
	__asm { push 0x820b20 }
	__asm { push 0x12f2db8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3330] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814908 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3330], eax }
	__asm { mov ecx, 0x12f32a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeaf0 }
	__asm { push 0xde8030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814908: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f32a8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007db800 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f40b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007db890();
extern "C" void fn_00a55ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814930
extern "C" __declspec(naked) void asm_00814930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081495e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814960 }
	__asm { L_0081495e: }
	__asm { xor bl, bl }
	__asm { L_00814960: }
	__asm { push 0x820b80 }
	__asm { push 0x12f2e78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f40b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008149a8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f40b0], eax }
	__asm { mov ecx, 0x12f4028 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a55ed0 }
	__asm { push 0xde8040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008149a8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4028 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007db890 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f53d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007db9b0();
extern "C" void fn_009fcd30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814a70
extern "C" __declspec(naked) void asm_00814a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814a9e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814aa0 }
	__asm { L_00814a9e: }
	__asm { xor bl, bl }
	__asm { L_00814aa0: }
	__asm { push 0x820c40 }
	__asm { push 0x12f2f88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f53d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814ae8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f53d0], eax }
	__asm { mov ecx, 0x12f5348 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fcd30 }
	__asm { push 0xde8060 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814ae8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5348 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007db9b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f33c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dba40();
extern "C" void fn_009b3e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814b10
extern "C" __declspec(naked) void asm_00814b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3efee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814b3e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814b40 }
	__asm { L_00814b3e: }
	__asm { xor bl, bl }
	__asm { L_00814b40: }
	__asm { push 0x820ca0 }
	__asm { push 0x12f2dc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f33c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814b88 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f33c0], eax }
	__asm { mov ecx, 0x12f3338 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b3e70 }
	__asm { push 0xde8070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814b88: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3338 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dba40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f56a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbad0();
extern "C" void fn_008ba710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814bb0
extern "C" __declspec(naked) void asm_00814bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814bde }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814be0 }
	__asm { L_00814bde: }
	__asm { xor bl, bl }
	__asm { L_00814be0: }
	__asm { push 0x820d60 }
	__asm { push 0x12f2fb0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f56a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814c28 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f56a0], eax }
	__asm { mov ecx, 0x12f5618 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba710 }
	__asm { push 0xde8090 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814c28: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5618 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbad0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbb60();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814c50
extern "C" __declspec(naked) void asm_00814c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814c7e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814c80 }
	__asm { L_00814c7e: }
	__asm { xor bl, bl }
	__asm { L_00814c80: }
	__asm { push 0x820dc0 }
	__asm { push 0x12f2fe8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814cc8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814cc8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5a08 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbb60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbbf0();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814cf0
extern "C" __declspec(naked) void asm_00814cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814d1e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814d20 }
	__asm { L_00814d1e: }
	__asm { xor bl, bl }
	__asm { L_00814d20: }
	__asm { push 0x820e20 }
	__asm { push 0x12f2fe0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814d68 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814d68: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5978 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbbf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbc80();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814d90
extern "C" __declspec(naked) void asm_00814d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814dbe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814dc0 }
	__asm { L_00814dbe: }
	__asm { xor bl, bl }
	__asm { L_00814dc0: }
	__asm { push 0x820e80 }
	__asm { push 0x12f2ff0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814e08 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814e08: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5a98 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbc80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
