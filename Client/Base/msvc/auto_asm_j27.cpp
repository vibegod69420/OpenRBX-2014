// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009811e0
extern "C" __declspec(naked) void asm_009811e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009811f9 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009811fb }
	__asm { L_009811f9: }
	__asm { xor eax, eax }
	__asm { L_009811fb: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { push edi }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00981340
extern "C" __declspec(naked) void asm_00981340()
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
	__asm { lea esi, [edi + 0x80] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0098139f }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_0098138d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_0098138d: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x1301c40 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_0098139f: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009813b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009813b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0086b050();
extern "C" void fn_0086b250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00981a90
extern "C" __declspec(naked) void asm_00981a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bef8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x294] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0086b050 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe88dc4 }
	__asm { mov dword ptr [esi + 4], 0xe88e7c }
	__asm { mov dword ptr [esi + 0x18], 0xe88e84 }
	__asm { mov dword ptr [esi + 0x1c], 0xe88e90 }
	__asm { mov dword ptr [esi + 0x64], 0xe88ea0 }
	__asm { mov dword ptr [esi + 0x68], 0xe88ea8 }
	__asm { call fn_0086b250 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00981b07 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00981b07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4ddc[];
extern "C" char g_012eefd4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810590();
extern "C" void fn_009818b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009821a0
extern "C" __declspec(naked) void asm_009821a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3be86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009818b0 }
	__asm { mov dword ptr [esi], 0xe8926c }
	__asm { mov dword ptr [esi + 4], 0xe89324 }
	__asm { mov dword ptr [esi + 0x18], 0xe8932c }
	__asm { mov dword ptr [esi + 0x1c], 0xe89338 }
	__asm { mov dword ptr [esi + 0x64], 0xe89348 }
	__asm { mov dword ptr [esi + 0x68], 0xe89350 }
	__asm { mov eax, dword ptr [g_012eefd4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00982245 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eefd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89250 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810590 }
	__asm { push eax }
	__asm { mov ecx, 0x12eeea8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00982245: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eeea8 }
	__asm { inc dword ptr [g_012e4ddc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_0086b250();
extern "C" void fn_00941e40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00983240
extern "C" __declspec(naked) void asm_00983240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c020 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 0x298] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 0x298] }
	__asm { call fn_00cf6522 }
	__asm { lea esi, [edi + 0x294] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x290], 0xe56300 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009832b6 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009832b6: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe894ec }
	__asm { mov dword ptr [edi + 4], 0xe895a4 }
	__asm { mov dword ptr [edi + 0x18], 0xe895ac }
	__asm { mov dword ptr [edi + 0x1c], 0xe895b8 }
	__asm { mov dword ptr [edi + 0x64], 0xe895c8 }
	__asm { mov dword ptr [edi + 0x68], 0xe895d0 }
	__asm { call fn_0086b250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2a84[];
extern "C" char g_012e4e74[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00983cd0
extern "C" __declspec(naked) void asm_00983cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c0e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe89744 }
	__asm { mov dword ptr [esi + 4], 0xe897bc }
	__asm { mov dword ptr [esi + 0x18], 0xe897c4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe897d0 }
	__asm { mov eax, dword ptr [g_012e2a84] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00983d69 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe8972c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00983d69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2958 }
	__asm { inc dword ptr [g_012e4e74] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2494[];
extern "C" char g_012e4e78[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009840b0
extern "C" __declspec(naked) void asm_009840b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c126 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe899c4 }
	__asm { mov dword ptr [esi + 4], 0xe89a3c }
	__asm { mov dword ptr [esi + 0x18], 0xe89a44 }
	__asm { mov dword ptr [esi + 0x1c], 0xe89a50 }
	__asm { mov eax, dword ptr [g_012e2494] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00984149 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2494], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe899ac }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2368 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00984149: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2368 }
	__asm { inc dword ptr [g_012e4e78] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e25c4[];
extern "C" char g_012e4e70[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00984320
extern "C" __declspec(naked) void asm_00984320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c166 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe89b1c }
	__asm { mov dword ptr [esi + 4], 0xe89b94 }
	__asm { mov dword ptr [esi + 0x18], 0xe89b9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe89ba8 }
	__asm { mov eax, dword ptr [g_012e25c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009843b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e25c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89b00 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2498 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009843b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2498 }
	__asm { inc dword ptr [g_012e4e70] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0042bd60();
extern "C" void fn_00985e80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00985910
extern "C" __declspec(naked) void asm_00985910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c341 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00985e80 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00985977 }
	__asm { xor eax, eax }
	__asm { push -1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 7 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov word ptr [ecx], ax }
	__asm { call fn_0042bd60 }
	__asm { L_00985977: }
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

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00985ec0
extern "C" __declspec(naked) void asm_00985ec0()
{
	__asm { L_00985ec0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, ecx }
	__asm { mov edi, esi }
	__asm { jne L_00985f15 }
	__asm { L_00985ed3: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_00985ec0 }
	__asm { cmp dword ptr [esi + 0x24], 8 }
	__asm { mov edi, dword ptr [edi] }
	__asm { jb L_00985ef0 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00985ef0: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x24], 7 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push esi }
	__asm { mov word ptr [esi + 0x10], ax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { je L_00985ed3 }
	__asm { L_00985f15: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b5b50();
// FUNCTION: ROBLOXSTUDIO 0x00985f20
extern "C" __declspec(naked) void asm_00985f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_00985f65 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00985f34: }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { jb L_00985f41 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_00985f43 }
	__asm { L_00985f41: }
	__asm { mov eax, edi }
	__asm { L_00985f43: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_006b5b50 }
	__asm { test eax, eax }
	__asm { jns L_00985f5a }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { jmp L_00985f5e }
	__asm { L_00985f5a: }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00985f5e: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { je L_00985f34 }
	__asm { pop edi }
	__asm { L_00985f65: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009867d0();
extern "C" void fn_00986a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00986760
extern "C" __declspec(naked) void asm_00986760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00986a30 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009867d0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_009867ba }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009867ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00986c60
extern "C" __declspec(naked) void asm_00986c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c410 }
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
	__asm { je L_00986cb8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe89ee0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00986cba }
	__asm { L_00986cb8: }
	__asm { xor eax, eax }
	__asm { L_00986cba: }
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
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00987de0
extern "C" __declspec(naked) void asm_00987de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c590 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00987e38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8e048 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00987e3a }
	__asm { L_00987e38: }
	__asm { xor eax, eax }
	__asm { L_00987e3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00987e70
extern "C" __declspec(naked) void asm_00987e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c5a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00987ec8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8dff8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00987eca }
	__asm { L_00987ec8: }
	__asm { xor eax, eax }
	__asm { L_00987eca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00987f00
extern "C" __declspec(naked) void asm_00987f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c5b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00987f58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8dfe0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00987f5a }
	__asm { L_00987f58: }
	__asm { xor eax, eax }
	__asm { L_00987f5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00988e20();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009881b0
extern "C" __declspec(naked) void asm_009881b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c5e0 }
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
	__asm { je L_00988208 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8e030 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0098820a }
	__asm { L_00988208: }
	__asm { xor eax, eax }
	__asm { L_0098820a: }
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
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00988e20 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009883f0
extern "C" __declspec(naked) void asm_009883f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c620 }
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
	__asm { je L_00988448 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe8e010 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0098844a }
	__asm { L_00988448: }
	__asm { xor eax, eax }
	__asm { L_0098844a: }
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
	__asm { je L_0098846e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0098846e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01303164[];
extern "C" char g_01303168[];
extern "C" char g_0130316c[];
extern "C" char g_01303170[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00988720
extern "C" __declspec(naked) void asm_00988720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_01303170] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00988762 }
	__asm { or eax, 1 }
	__asm { push 0xdf6730 }
	__asm { mov dword ptr [g_01303170], eax }
	__asm { mov dword ptr [g_01303164], 0x12323e0 }
	__asm { mov dword ptr [g_0130316c], 0x40d810 }
	__asm { mov dword ptr [g_01303168], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00988762: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x1303164 }
	__asm { jne L_0098877b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0098877b: }
	__asm { test ecx, ecx }
	__asm { je L_00988791 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00988791: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0098879f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0098879f: }
	__asm { mov dword ptr [esi], 0x1303164 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x009888b0
extern "C" __declspec(naked) void asm_009888b0()
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
	__asm { je L_009888d9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009888de }
	__asm { L_009888d9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009888de: }
	__asm { cmp ecx, 0x1232464 }
	__asm { je L_00988927 }
	__asm { test eax, eax }
	__asm { je L_009888ee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009888f3 }
	__asm { L_009888ee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009888f3: }
	__asm { push 0x1232464 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00988927 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00988927: }
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
// FUNCTION: ROBLOXSTUDIO 0x00988940
extern "C" __declspec(naked) void asm_00988940()
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
	__asm { je L_00988969 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0098896e }
	__asm { L_00988969: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0098896e: }
	__asm { cmp ecx, 0x12323e0 }
	__asm { je L_009889b7 }
	__asm { test eax, eax }
	__asm { je L_0098897e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00988983 }
	__asm { L_0098897e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00988983: }
	__asm { push 0x12323e0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_009889b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_009889b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130315c[];
extern "C" char g_01303160[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00988dd0
extern "C" __declspec(naked) void asm_00988dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3cd4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303160] }
	__asm { test al, 1 }
	__asm { jne L_00988e12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303160], eax }
	__asm { push 0xe89f00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130315c], eax }
	__asm { L_00988e12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00992bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00988e20
extern "C" __declspec(naked) void asm_00988e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3c72b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00988e7d }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00992bb0 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_00988e62 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00988e62: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00988e7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0098cdf0();
// FUNCTION: ROBLOXSTUDIO 0x00988f70
extern "C" __declspec(naked) void asm_00988f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c751 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_0098cdf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00988fd0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { L_00988fd0: }
	__asm { add esi, 0x1c }
	__asm { je L_00988fe2 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00988fe2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00989c20
extern "C" __declspec(naked) void asm_00989c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2362e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x8221a0 }
	__asm { push 0x12f2f18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4bf0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00989c81 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00989c81: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f4b68 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00989ca8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00989ca8: }
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

extern "C" char g_01302e3c[];
extern "C" char g_01302f7c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00989d90
extern "C" __declspec(naked) void asm_00989d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c7c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe8a0fc }
	__asm { mov dword ptr [esi + 4], 0xe8a174 }
	__asm { mov dword ptr [esi + 0x18], 0xe8a17c }
	__asm { mov dword ptr [esi + 0x1c], 0xe8a188 }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00989e29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00989e29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1302e50 }
	__asm { inc dword ptr [g_01302e3c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2104[];
extern "C" char g_01302e38[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00989e50
extern "C" __declspec(naked) void asm_00989e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c7e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe89f64 }
	__asm { mov dword ptr [esi + 4], 0xe89fdc }
	__asm { mov dword ptr [esi + 0x18], 0xe89fe4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe89ff0 }
	__asm { mov eax, dword ptr [g_012e2104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00989ee9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2104], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89f04 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1fd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00989ee9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e1fd8 }
	__asm { inc dword ptr [g_01302e38] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302e40[];
extern "C" char g_013030ac[];
extern "C" void fn_007cbf10();
extern "C" void fn_0098af60();
extern "C" void fn_0098cb00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00989f10
extern "C" __declspec(naked) void asm_00989f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c806 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0098af60 }
	__asm { mov dword ptr [esi], 0xe8cc9c }
	__asm { mov dword ptr [esi + 4], 0xe8cd14 }
	__asm { mov dword ptr [esi + 0x18], 0xe8cd1c }
	__asm { mov dword ptr [esi + 0x1c], 0xe8cd28 }
	__asm { mov eax, dword ptr [g_013030ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00989fa7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013030ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89f50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_0098cb00 }
	__asm { push eax }
	__asm { mov ecx, 0x1302f80 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6690 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00989fa7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x1302f80 }
	__asm { inc dword ptr [g_01302e40] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098aed0
extern "C" __declspec(naked) void asm_0098aed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3c908 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push -1 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x20], 0xf }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov al, byte ptr [ebp + 0x28] }
	__asm { mov byte ptr [edi + 0x28], al }
	__asm { jb L_0098af45 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098af45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_01302f7c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0098cb00
extern "C" __declspec(naked) void asm_0098cb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cb6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { test al, 1 }
	__asm { jne L_0098cb6b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0098cb6b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1302e50 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0098cf00
extern "C" __declspec(naked) void asm_0098cf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0098cf56 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
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
	__asm { pop esi }
	__asm { L_0098cf56: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303140[];
extern "C" void fn_004115f0();
extern "C" void fn_00988720();
extern "C" void fn_00989fd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0098d060
extern "C" __declspec(naked) void asm_0098d060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3cdbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0098d08e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0098d090 }
	__asm { L_0098d08e: }
	__asm { xor bl, bl }
	__asm { L_0098d090: }
	__asm { push 0x98fa70 }
	__asm { push 0x13030b0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01303140] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0098d0d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303140], eax }
	__asm { mov ecx, 0x13030b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00989fd0 }
	__asm { push 0xdf6710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0098d0d8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x13030b8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00988720 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098d100
extern "C" __declspec(naked) void asm_0098d100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d140 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp esi, eax }
	__asm { je L_0098d175 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_0098d175: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { jb L_0098d18d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098d18d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098d1a0
extern "C" __declspec(naked) void asm_0098d1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_0098d1ef }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098d1ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00992bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098d730
extern "C" __declspec(naked) void asm_0098d730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cd0b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_0098d78e }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00992bb0 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_0098d773 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098d773: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098d78e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00989830();
// FUNCTION: ROBLOXSTUDIO 0x0098da00
extern "C" __declspec(naked) void asm_0098da00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00989830 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_0098da33 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0098da33: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402a10();
extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098e390
extern "C" __declspec(naked) void asm_0098e390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00405b90 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402a10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0098e3e4 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098e3e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01303140[];
extern "C" void fn_00989fd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0098fa70
extern "C" __declspec(naked) void asm_0098fa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3cdbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303140] }
	__asm { test al, 1 }
	__asm { jne L_0098fab7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303140], eax }
	__asm { mov ecx, 0x13030b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00989fd0 }
	__asm { push 0xdf6710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0098fab7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" char g_01301e8d[];
extern "C" void fn_006b8a90();
extern "C" void fn_007b4f50();
extern "C" void fn_00990150();
extern "C" void fn_00991c40();
// FUNCTION: ROBLOXSTUDIO 0x00991bc0
extern "C" __declspec(naked) void asm_00991bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00991be4 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8de3c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00991be4: }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { mov ecx, esi }
	__asm { jne L_00991bf7 }
	__asm { push esi }
	__asm { call fn_00991c40 }
	__asm { jmp L_00991bff }
	__asm { L_00991bf7: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00990150 }
	__asm { L_00991bff: }
	__asm { mov ecx, dword ptr [esi + 0xa4] }
	__asm { inc ecx }
	__asm { cmp ecx, 1 }
	__asm { lea edx, [ebp - 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { cmovge eax, edx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0x130204c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01215924[];
extern "C" char g_01301e89[];
extern "C" char g_01301e95[];
extern "C" void fn_004033d0();
extern "C" void fn_00463750();
extern "C" void fn_0047ec70();
extern "C" void fn_006b8a9c();
extern "C" void fn_008fa110();
// FUNCTION: ROBLOXSTUDIO 0x009927c0
extern "C" __declspec(naked) void asm_009927c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_01301e95], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_0099283e }
	__asm { test byte ptr [esi + 0x9d], 4 }
	__asm { jne L_0099283e }
	__asm { call fn_0047ec70 }
	__asm { cmp byte ptr [eax + 0x74], 0 }
	__asm { je L_0099283e }
	__asm { mov cl, byte ptr [g_01301e89] }
	__asm { test cl, cl }
	__asm { je L_00992810 }
	__asm { cmp dword ptr [esi + 0x84], 0x10 }
	__asm { lea eax, [esi + 0x70] }
	__asm { jb L_009927fe }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_009927fe: }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe8d750 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_00992810: }
	__asm { push esi }
	__asm { call fn_00463750 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0099283e }
	__asm { fld dword ptr [g_01215924] }
	__asm { lea ecx, [esi + 0x70] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_008fa110 }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_004033d0 }
	__asm { L_0099283e: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302f7c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00992930
extern "C" __declspec(naked) void asm_00992930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cb6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { test al, 1 }
	__asm { jne L_0099299b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0099299b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0090e840();
extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x00992e30
extern "C" __declspec(naked) void asm_00992e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00992e64 }
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
	__asm { L_00992e64: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_00992e9a }
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
	__asm { je L_00992e9a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0090e840 }
	__asm { L_00992e9a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01301e8b[];
extern "C" void fn_006b8aae();
extern "C" void fn_007b4f50();
extern "C" void fn_00994350();
// FUNCTION: ROBLOXSTUDIO 0x00992f30
extern "C" __declspec(naked) void asm_00992f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_01301e8b] }
	__asm { test cl, cl }
	__asm { je L_00992f5c }
	__asm { push 0 }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, cl }
	__asm { push 0xe8d918 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00992f5c: }
	__asm { mov cl, byte ptr [esi + 0x9d] }
	__asm { mov al, cl }
	__asm { shr al, 1 }
	__asm { and al, 1 }
	__asm { cmp al, bl }
	__asm { je L_00992f8e }
	__asm { add bl, bl }
	__asm { xor bl, cl }
	__asm { and bl, 2 }
	__asm { xor bl, cl }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x9d], bl }
	__asm { call fn_00994350 }
	__asm { push 0x1302078 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00992f8e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb440();
extern "C" void fn_0098d100();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009933b0
extern "C" __declspec(naked) void asm_009933b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d140 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0098d100 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0099341d }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov bl, 1 }
	__asm { jmp L_0099341f }
	__asm { L_0099341d: }
	__asm { xor bl, bl }
	__asm { L_0099341f: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00993430 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00993430: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00989700();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00993450
extern "C" __declspec(naked) void asm_00993450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00989700 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_0099349f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0099349f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01301e8b[];
extern "C" char g_01301e8d[];
extern "C" void fn_004039a0();
extern "C" void fn_006b8aae();
extern "C" void fn_0098c9b0();
extern "C" void fn_00993be8();
extern "C" void fn_00993c83();
extern "C" void fn_00cfb852();
// FUNCTION: ROBLOXSTUDIO 0x00993b00
extern "C" __declspec(naked) void asm_00993b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3d200 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00993b3e }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe8dea0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00993b3e: }
	__asm { cmp dword ptr [esi + 0x6c], 0 }
	__asm { je fn_00993c83 }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { push 0xe8debc }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { je fn_00993be8 }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cfb852 }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009966d0();
// FUNCTION: ROBLOXSTUDIO 0x00994e60
extern "C" __declspec(naked) void asm_00994e60()
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
	__asm { call fn_009966d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00994ed2 }
	__asm { add esi, 5 }
	__asm { je L_00994ea2 }
	__asm { add esi, -5 }
	__asm { jmp L_00994ea4 }
	__asm { L_00994ea2: }
	__asm { xor esi, esi }
	__asm { L_00994ea4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00994ed1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00994ed1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00994ed1: }
	__asm { pop edi }
	__asm { L_00994ed2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00996a60();
// FUNCTION: ROBLOXSTUDIO 0x00994ef0
extern "C" __declspec(naked) void asm_00994ef0()
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
	__asm { call fn_00996a60 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00994f62 }
	__asm { add esi, 5 }
	__asm { je L_00994f32 }
	__asm { add esi, -5 }
	__asm { jmp L_00994f34 }
	__asm { L_00994f32: }
	__asm { xor esi, esi }
	__asm { L_00994f34: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00994f61 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00994f61 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00994f61: }
	__asm { pop edi }
	__asm { L_00994f62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00996df0();
// FUNCTION: ROBLOXSTUDIO 0x00994f80
extern "C" __declspec(naked) void asm_00994f80()
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
	__asm { call fn_00996df0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00994ff2 }
	__asm { add esi, 5 }
	__asm { je L_00994fc2 }
	__asm { add esi, -5 }
	__asm { jmp L_00994fc4 }
	__asm { L_00994fc2: }
	__asm { xor esi, esi }
	__asm { L_00994fc4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00994ff1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00994ff1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00994ff1: }
	__asm { pop edi }
	__asm { L_00994ff2: }
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
extern "C" void fn_00999f80();
// FUNCTION: ROBLOXSTUDIO 0x00995470
extern "C" __declspec(naked) void asm_00995470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test bl, bl }
	__asm { je L_009954d4 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + edi*4] }
	__asm { call fn_00999f80 }
	__asm { cmp dword ptr [eax], edi }
	__asm { je L_009954c8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009954b7 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009954c8 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_009954b7: }
	__asm { movzx eax, bl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009954c8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009954d4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00996410
extern "C" __declspec(naked) void asm_00996410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0099645e }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { je L_0099645e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099644d }
	__asm { push 0x356 }
	__asm { push 0xe8e158 }
	__asm { push 0xe857f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099645e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099644d: }
	__asm { movzx eax, al }
	__asm { push 0xe8f190 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099645e: }
	__asm { mov ecx, dword ptr [esi + 0xbc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00996479 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_00996479: }
	__asm { dec dword ptr [esi + 0x78] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009954e0();
// FUNCTION: ROBLOXSTUDIO 0x00996490
extern "C" __declspec(naked) void asm_00996490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_009964df }
	__asm { test esi, esi }
	__asm { jne L_009964df }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009964ce }
	__asm { push 0x344 }
	__asm { push 0xe8e158 }
	__asm { push 0xe8f138 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009964df }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009964ce: }
	__asm { movzx eax, al }
	__asm { push 0xe8f140 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009964df: }
	__asm { push esi }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi + 0x34], esi }
	__asm { call fn_009954e0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01303178[];
// FUNCTION: ROBLOXSTUDIO 0x00997850
extern "C" __declspec(naked) void asm_00997850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [g_01303178], 0 }
	__asm { jne L_00997882 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { je L_00997873 }
	__asm { test eax, eax }
	__asm { jle L_009978ab }
	__asm { dec eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00997873: }
	__asm { cmp eax, 8 }
	__asm { jge L_009978ab }
	__asm { inc eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00997882: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { je L_0099789c }
	__asm { cmp eax, 1 }
	__asm { jle L_009978ab }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0099789c: }
	__asm { cmp eax, 0x10 }
	__asm { jge L_009978ab }
	__asm { add eax, eax }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009978ab: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009955a0();
// FUNCTION: ROBLOXSTUDIO 0x00998800
extern "C" __declspec(naked) void asm_00998800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x111], 0 }
	__asm { mov edi, ecx }
	__asm { jne L_00998829 }
	__asm { mov al, byte ptr [esi + 0x90] }
	__asm { lea edx, [eax + 1] }
	__asm { xor dl, al }
	__asm { and dl, 0xf }
	__asm { xor dl, al }
	__asm { mov byte ptr [esi + 0x90], dl }
	__asm { L_00998829: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [edx + 0x111], 0 }
	__asm { jne L_0099884b }
	__asm { mov al, byte ptr [edx + 0x90] }
	__asm { lea ecx, [eax + 1] }
	__asm { xor cl, al }
	__asm { and cl, 0xf }
	__asm { xor cl, al }
	__asm { mov byte ptr [edx + 0x90], cl }
	__asm { L_0099884b: }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { call fn_009955a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099cca0();
extern "C" void fn_0099d1b0();
extern "C" void fn_00b4d8a0();
// FUNCTION: ROBLOXSTUDIO 0x00998870
extern "C" __declspec(naked) void asm_00998870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_009988c2 }
	__asm { cmp dword ptr [edi + 0xe0], 0 }
	__asm { jne L_009988c2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009988b1 }
	__asm { push 0x1b2 }
	__asm { push 0xe8e158 }
	__asm { push 0xe8e404 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009988c2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009988b1: }
	__asm { movzx eax, al }
	__asm { push 0xe8e828 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009988c2: }
	__asm { mov ecx, edi }
	__asm { call fn_0099cca0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009988e5 }
	__asm { nop }
	__asm { L_009988d0: }
	__asm { mov ecx, esi }
	__asm { call fn_00b4d8a0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0099d1b0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_009988d0 }
	__asm { L_009988e5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba3cf0();
// FUNCTION: ROBLOXSTUDIO 0x009988f0
extern "C" __declspec(naked) void asm_009988f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0099893d }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0099893d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099892c }
	__asm { push 0x190 }
	__asm { push 0xe8e158 }
	__asm { push 0xe8e608 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099893d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099892c: }
	__asm { movzx eax, al }
	__asm { push 0xe8e618 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099893d: }
	__asm { mov esi, dword ptr [esi + 0xbc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 9 }
	__asm { je L_0099895f }
	__asm { nop }
	__asm { L_00998950: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 9 }
	__asm { jne L_00998950 }
	__asm { L_0099895f: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00ba3cf0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009990a0();
// FUNCTION: ROBLOXSTUDIO 0x00999150
extern "C" __declspec(naked) void asm_00999150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0099919d }
	__asm { cmp byte ptr [edi + 0x30], 0 }
	__asm { je L_0099919d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099918c }
	__asm { push 0x9a }
	__asm { push 0xe857b0 }
	__asm { push 0xe857f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099919d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099918c: }
	__asm { movzx eax, al }
	__asm { push 0xe8e0c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099919d: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_009990a0 }
	__asm { mov ecx, dword ptr [edi + 0xbc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { dec dword ptr [edi + 0x74] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013031a0[];
extern "C" char g_013031a4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009995f0
extern "C" __declspec(naked) void asm_009995f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3d65e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013031a4] }
	__asm { test al, 1 }
	__asm { jne L_00999663 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013031a4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0099964e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013031a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099964e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013031a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00999663: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013031a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013031b0[];
extern "C" char g_013031b4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00999680
extern "C" __declspec(naked) void asm_00999680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3d67e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013031b4] }
	__asm { test al, 1 }
	__asm { jne L_009996f3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013031b4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009996de }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013031b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009996de: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013031b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009996f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013031b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00934090();
extern "C" void fn_00b57e60();
// FUNCTION: ROBLOXSTUDIO 0x0099a690
extern "C" __declspec(naked) void asm_0099a690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0099a6bc }
	__asm { add eax, 0x128 }
	__asm { jmp L_0099a6be }
	__asm { L_0099a6bc: }
	__asm { xor eax, eax }
	__asm { L_0099a6be: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00934090 }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b57e60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038044[];
extern "C" void fn_006d19a0();
extern "C" void fn_006d2e10();
extern "C" void fn_006d6760();
extern "C" void fn_0099acc0();
// FUNCTION: ROBLOXSTUDIO 0x0099a9d0
extern "C" __declspec(naked) void asm_0099a9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_0099acc0 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_0099aa23 }
	__asm { test al, al }
	__asm { jne L_0099aa23 }
	__asm { fld dword ptr [g_01038044] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d2e10 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0099acc0 }
	__asm { call fn_006d6760 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0099aa23: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b586e0();
// FUNCTION: ROBLOXSTUDIO 0x0099ac50
extern "C" __declspec(naked) void asm_0099ac50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0099ac9a }
	__asm { cmp byte ptr [esi + 0x14], 0 }
	__asm { je L_0099ac9a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_0099ac89 }
	__asm { push 0x7f }
	__asm { push 0xe8fe18 }
	__asm { push 0xe8fea8 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099ac9a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099ac89: }
	__asm { movzx eax, al }
	__asm { push 0xe8ffb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099ac9a: }
	__asm { fldz }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { lea eax, [esi + 8] }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b586e0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00898ee0();
// FUNCTION: ROBLOXSTUDIO 0x0099c980
extern "C" __declspec(naked) void asm_0099c980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x104] }
	__asm { push edi }
	__asm { lea edi, [esi + 0x1c] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00898ee0 }
	__asm { lea eax, [esi + 0xa4] }
	__asm { test edi, edi }
	__asm { je L_0099c9d1 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_0099c9d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00898ee0();
extern "C" void fn_0099c530();
// FUNCTION: ROBLOXSTUDIO 0x0099cc10
extern "C" __declspec(naked) void asm_0099cc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x104] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { mov eax, dword ptr [edi + 0xfc] }
	__asm { cmp eax, dword ptr [esi + 0xa0] }
	__asm { je L_0099cc8e }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0099c530 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edi + 0xe4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 0xe8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [edi + 0xec] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [edi + 0xf0] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [edi + 0xf4] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [edi + 0xf8] }
	__asm { mov esi, dword ptr [edi + 0x104] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { mov dword ptr [edi + 0xfc], eax }
	__asm { L_0099cc8e: }
	__asm { lea eax, [edi + 0xe4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099d0e0();
// FUNCTION: ROBLOXSTUDIO 0x0099cd20
extern "C" __declspec(naked) void asm_0099cd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0099cd64 }
	__asm { mov edi, edi }
	__asm { L_0099cd30: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0099cd51 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { je L_0099cd6c }
	__asm { cmp eax, 3 }
	__asm { je L_0099cd6c }
	__asm { cmp eax, 2 }
	__asm { je L_0099cd6c }
	__asm { L_0099cd51: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { call fn_0099d0e0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_0099cd30 }
	__asm { L_0099cd64: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0099cd6c: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099d0e0();
// FUNCTION: ROBLOXSTUDIO 0x0099d1d0
extern "C" __declspec(naked) void asm_0099d1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0099d214 }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { call fn_0099d0e0 }
	__asm { test eax, eax }
	__asm { jne L_0099d21f }
	__asm { cmp dword ptr [esi + 0x9c], eax }
	__asm { jle L_0099d20c }
	__asm { mov eax, dword ptr [esi + 0x98] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0099d20c: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0099d214: }
	__asm { lea ecx, [esi + 0x94] }
	__asm { call fn_0099d0e0 }
	__asm { L_0099d21f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00998b90();
extern "C" void fn_00998c60();
// FUNCTION: ROBLOXSTUDIO 0x0099e2a0
extern "C" __declspec(naked) void asm_0099e2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x111], 0 }
	__asm { jne L_0099e2bc }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { jne L_0099e2bc }
	__asm { xor al, al }
	__asm { jmp L_0099e2be }
	__asm { L_0099e2bc: }
	__asm { mov al, 1 }
	__asm { L_0099e2be: }
	__asm { push ebx }
	__asm { mov bh, byte ptr [ebp + 8] }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { test bh, bh }
	__asm { jne L_0099e2d1 }
	__asm { test bl, bl }
	__asm { jne L_0099e2d1 }
	__asm { xor cl, cl }
	__asm { jmp L_0099e2d3 }
	__asm { L_0099e2d1: }
	__asm { mov cl, 1 }
	__asm { L_0099e2d3: }
	__asm { cmp al, cl }
	__asm { setne al }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { test al, al }
	__asm { je L_0099e2f2 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { test ecx, ecx }
	__asm { je L_0099e2f2 }
	__asm { push esi }
	__asm { call fn_00998c60 }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { L_0099e2f2: }
	__asm { mov byte ptr [esi + 0x111], bh }
	__asm { mov byte ptr [esi + 0x110], bl }
	__asm { pop ebx }
	__asm { test al, al }
	__asm { je L_0099e313 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { test ecx, ecx }
	__asm { je L_0099e313 }
	__asm { push esi }
	__asm { call fn_00998b90 }
	__asm { L_0099e313: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00998d30();
extern "C" void fn_0099e500();
// FUNCTION: ROBLOXSTUDIO 0x0099e3b0
extern "C" __declspec(naked) void asm_0099e3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, eax }
	__asm { je L_0099e409 }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x68] }
	__asm { call eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099e500 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { test ecx, ecx }
	__asm { je L_0099e402 }
	__asm { push esi }
	__asm { call fn_00998d30 }
	__asm { L_0099e402: }
	__asm { mov byte ptr [esi + 0x154], 1 }
	__asm { L_0099e409: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00998d30();
extern "C" void fn_0099db50();
extern "C" void fn_0099e790();
// FUNCTION: ROBLOXSTUDIO 0x0099e410
extern "C" __declspec(naked) void asm_0099e410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { je L_0099e47f }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_0099e44c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0099e44c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0099db50 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x100], eax }
	__asm { test ecx, ecx }
	__asm { je L_0099e46d }
	__asm { push esi }
	__asm { call fn_00998d30 }
	__asm { L_0099e46d: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099e790 }
	__asm { mov byte ptr [esi + 0x154], 1 }
	__asm { L_0099e47f: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008f1f40();
// FUNCTION: ROBLOXSTUDIO 0x0099e490
extern "C" __declspec(naked) void asm_0099e490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0099e4e0 }
	__asm { cmp dword ptr [esi + 0xe0], 0 }
	__asm { je L_0099e4e0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099e4cf }
	__asm { push 0x9c }
	__asm { push 0xe90eb4 }
	__asm { push 0xe90ef4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099e4e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099e4cf: }
	__asm { movzx eax, al }
	__asm { push 0xe91140 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099e4e0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x7c] }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_008f1f40 }
	__asm { mov byte ptr [esi + 0x84], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0099f0b0
extern "C" __declspec(naked) void asm_0099f0b0()
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
	__asm { je L_0099f0f7 }
	__asm { mov dword ptr [edx], 0xe92608 }
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
	__asm { jmp L_0099f0f9 }
	__asm { L_0099f0f7: }
	__asm { xor edx, edx }
	__asm { L_0099f0f9: }
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
// FUNCTION: ROBLOXSTUDIO 0x0099f110
extern "C" __declspec(naked) void asm_0099f110()
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
	__asm { je L_0099f157 }
	__asm { mov dword ptr [edx], 0xe9261c }
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
	__asm { jmp L_0099f159 }
	__asm { L_0099f157: }
	__asm { xor edx, edx }
	__asm { L_0099f159: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099f170();
// FUNCTION: ROBLOXSTUDIO 0x009a04a0
extern "C" __declspec(naked) void asm_009a04a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009a04f3 }
	__asm { cmp dword ptr [esi + 0xa0], 0 }
	__asm { je L_009a04f3 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_009a04e2 }
	__asm { push 0x13a }
	__asm { push 0xe92388 }
	__asm { push 0xe92570 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a04f3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009a04e2: }
	__asm { movzx eax, al }
	__asm { push 0xe92590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a04f3: }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x10], 0x99fbd0 }
	__asm { call fn_0099f170 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b78e0();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x009a0530
extern "C" __declspec(naked) void asm_009a0530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_009a0545 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_009a0547 }
	__asm { L_009a0545: }
	__asm { xor ebx, ebx }
	__asm { L_009a0547: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, ebx }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov esi, eax }
	__asm { call fn_0088bd20 }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_007b78e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x009a0590
extern "C" __declspec(naked) void asm_009a0590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_009a05a5 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_009a05a7 }
	__asm { L_009a05a5: }
	__asm { xor ebx, ebx }
	__asm { L_009a05a7: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, ebx }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov esi, eax }
	__asm { call fn_007d5be0 }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_007d0510 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x009a0e80
extern "C" __declspec(naked) void asm_009a0e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009a0e93 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009a0e95 }
	__asm { L_009a0e93: }
	__asm { xor edx, edx }
	__asm { L_009a0e95: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x009a25d0
extern "C" __declspec(naked) void asm_009a25d0()
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
	__asm { je L_009a25f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009a25fe }
	__asm { L_009a25f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009a25fe: }
	__asm { cmp ecx, 0x1233fec }
	__asm { je L_009a2647 }
	__asm { test eax, eax }
	__asm { je L_009a260e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_009a2613 }
	__asm { L_009a260e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_009a2613: }
	__asm { push 0x1233fec }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_009a2647 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_009a2647: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00837f00();
// FUNCTION: ROBLOXSTUDIO 0x009a2660
extern "C" __declspec(naked) void asm_009a2660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_009a26b1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009a2680 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009a2682 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009a2682 }
	__asm { L_009a2680: }
	__asm { mov eax, ecx }
	__asm { L_009a2682: }
	__asm { test eax, eax }
	__asm { je L_009a26b1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009a26b1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009a26b1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009a26b1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00837f00 }
	__asm { L_009a26b1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c94[];
extern "C" char g_012efe14[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a2850
extern "C" __declspec(naked) void asm_009a2850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dd16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe92644 }
	__asm { mov dword ptr [esi + 4], 0xe926bc }
	__asm { mov dword ptr [esi + 0x18], 0xe926c4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe926d0 }
	__asm { mov eax, dword ptr [g_012efe14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009a28e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efe14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9262c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12efce8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009a28e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12efce8 }
	__asm { inc dword ptr [g_012e4c94] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b3b40();
extern "C" void fn_009a2ba0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2d50
extern "C" __declspec(naked) void asm_009a2d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dd58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_009a2ba0 }
	__asm { mov edx, eax }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [edx + 0x10] }
	__asm { mov esi, edx }
	__asm { shr esi, 5 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { call fn_007b3b40 }
	__asm { mov edi, eax }
	__asm { cmp esi, 1 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmovle ecx, eax }
	__asm { add edi, dword ptr [ecx] }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_009a2dc0 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2dc0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a24e0();
extern "C" void fn_00b09170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2e80
extern "C" __declspec(naked) void asm_009a2e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
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
	__asm { call fn_009a24e0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_009a2ed9 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2ed9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402f60();
extern "C" void fn_006a6a20();
// FUNCTION: ROBLOXSTUDIO 0x009a2ef0
extern "C" __declspec(naked) void asm_009a2ef0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x64] }
	__asm { mov esi, 4 }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { cmovb esi, dword ptr [edi + 0x10] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_009a2f0b }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_009a2f0d }
	__asm { L_009a2f0b: }
	__asm { mov ecx, edi }
	__asm { L_009a2f0d: }
	__asm { mov eax, 4 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_009a2f39 }
	__asm { cmp esi, 4 }
	__asm { jb L_009a2f39 }
	__asm { cmp esi, 4 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_009a2f49 }
	__asm { L_009a2f39: }
	__asm { mov ecx, edi }
	__asm { call fn_006a6a20 }
	__asm { test al, al }
	__asm { jne L_009a2f49 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_009a2f49: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2f50
extern "C" __declspec(naked) void asm_009a2f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3dd78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea esi, [edi + 0x64] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009a2fac }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_009a2f9a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_009a2f9a: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x1303694 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_009a2fac: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009a2fbd }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2fbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_009a26c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2fd0
extern "C" __declspec(naked) void asm_009a2fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_009a26c0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_009a301f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a301f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4c38[];
extern "C" char g_0131edd0[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a34a0
extern "C" __declspec(naked) void asm_009a34a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3de66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9282c }
	__asm { mov dword ptr [esi + 4], 0xe928a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe928ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe928b8 }
	__asm { mov eax, dword ptr [g_0131edd0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009a3539 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131edd0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe92818 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131edd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009a3539: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131edd8 }
	__asm { inc dword ptr [g_012e4c38] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013037cc[];
extern "C" char g_013037d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009a37a0
extern "C" __declspec(naked) void asm_009a37a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3de3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9a3390 }
	__asm { push 0x13037c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013037d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009a3802 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013037d0], eax }
	__asm { push 0xe92814 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013037cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009a3802: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013037cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d14[];
extern "C" char g_0131f504[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a3c60
extern "C" __declspec(naked) void asm_009a3c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3def6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov eax, dword ptr [g_0131f504] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009a3cde }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f504], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe92a5c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131f508 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009a3cde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131f508 }
	__asm { inc dword ptr [g_012e4d14] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x009a3d70
extern "C" __declspec(naked) void asm_009a3d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009a3dbb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a3dbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009a4180
extern "C" __declspec(naked) void asm_009a4180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009a41d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe93850 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009a41da }
	__asm { L_009a41d8: }
	__asm { xor eax, eax }
	__asm { L_009a41da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b25b30();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009a55e0
extern "C" __declspec(naked) void asm_009a55e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29913 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_009a5624 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, eax }
	__asm { jmp L_009a5626 }
	__asm { L_009a5624: }
	__asm { xor ecx, ecx }
	__asm { L_009a5626: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009a5652 }
	__asm { test al, 1 }
	__asm { jne L_009a5652 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009a5652 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a5652: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_01303f44[];
extern "C" char g_01303f48[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x009a6260
extern "C" __declspec(naked) void asm_009a6260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3e05e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303f48] }
	__asm { test al, 1 }
	__asm { jne L_009a629a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303f48], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_01303f44], eax }
	__asm { L_009a629a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0095c950();
extern "C" void fn_009a4180();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009a6c60
extern "C" __declspec(naked) void asm_009a6c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009a6cab }
	__asm { mov ecx, eax }
	__asm { call fn_0095c950 }
	__asm { mov esi, eax }
	__asm { jmp L_009a6cad }
	__asm { L_009a6cab: }
	__asm { xor esi, esi }
	__asm { L_009a6cad: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_009a4180 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009a6cde }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_009a6cde }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_009a6cde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
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
extern "C" void fn_009a6cf0();
// FUNCTION: ROBLOXSTUDIO 0x009a6e40
extern "C" __declspec(naked) void asm_009a6e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_009a6e91 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009a6e60 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009a6e62 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009a6e62 }
	__asm { L_009a6e60: }
	__asm { mov eax, ecx }
	__asm { L_009a6e62: }
	__asm { test eax, eax }
	__asm { je L_009a6e91 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009a6e91 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009a6e91 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009a6e91 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_009a6cf0 }
	__asm { L_009a6e91: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4bd0[];
extern "C" char g_012f1374[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a7aa0
extern "C" __declspec(naked) void asm_009a7aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe92bc4 }
	__asm { mov dword ptr [esi + 4], 0xe92c3c }
	__asm { mov dword ptr [esi + 0x18], 0xe92c44 }
	__asm { mov dword ptr [esi + 0x1c], 0xe92c50 }
	__asm { mov eax, dword ptr [g_012f1374] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009a7b39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe92bac }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009a7b39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f1248 }
	__asm { inc dword ptr [g_012e4bd0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f1374[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a8200
extern "C" __declspec(naked) void asm_009a8200()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009a8275 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe92bac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009a8275: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f1248 }
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

extern "C" void fn_008d01b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a8fa0
extern "C" __declspec(naked) void asm_009a8fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009a8fde }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a8fde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009ac660();
// FUNCTION: ROBLOXSTUDIO 0x009a93c0
extern "C" __declspec(naked) void asm_009a93c0()
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
	__asm { call fn_009ac660 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a9432 }
	__asm { add esi, 5 }
	__asm { je L_009a9402 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9404 }
	__asm { L_009a9402: }
	__asm { xor esi, esi }
	__asm { L_009a9404: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9431 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9431 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009a9431: }
	__asm { pop edi }
	__asm { L_009a9432: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009ac9f0();
// FUNCTION: ROBLOXSTUDIO 0x009a9450
extern "C" __declspec(naked) void asm_009a9450()
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
	__asm { call fn_009ac9f0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a94c2 }
	__asm { add esi, 5 }
	__asm { je L_009a9492 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9494 }
	__asm { L_009a9492: }
	__asm { xor esi, esi }
	__asm { L_009a9494: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a94c1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a94c1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009a94c1: }
	__asm { pop edi }
	__asm { L_009a94c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009acd80();
// FUNCTION: ROBLOXSTUDIO 0x009a94e0
extern "C" __declspec(naked) void asm_009a94e0()
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
	__asm { call fn_009acd80 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a9552 }
	__asm { add esi, 5 }
	__asm { je L_009a9522 }
	__asm { add esi, -5 }
	__asm { jmp L_009a9524 }
	__asm { L_009a9522: }
	__asm { xor esi, esi }
	__asm { L_009a9524: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9551 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a9551 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009a9551: }
	__asm { pop edi }
	__asm { L_009a9552: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_009ad110();
// FUNCTION: ROBLOXSTUDIO 0x009a9570
extern "C" __declspec(naked) void asm_009a9570()
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
	__asm { call fn_009ad110 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009a95e2 }
	__asm { add esi, 5 }
	__asm { je L_009a95b2 }
	__asm { add esi, -5 }
	__asm { jmp L_009a95b4 }
	__asm { L_009a95b2: }
	__asm { xor esi, esi }
	__asm { L_009a95b4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a95e1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009a95e1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009a95e1: }
	__asm { pop edi }
	__asm { L_009a95e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008d01b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009aa9f0
extern "C" __declspec(naked) void asm_009aa9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009aaa32 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009aaa32: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009a4da0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ab880
extern "C" __declspec(naked) void asm_009ab880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a4da0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009ab8de }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ab8de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0078a830();
extern "C" void fn_007ae020();
// FUNCTION: ROBLOXSTUDIO 0x009ad9f0
extern "C" __declspec(naked) void asm_009ad9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_007ae020 }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0078a830 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { test ecx, ecx }
	__asm { je L_009ada28 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_009ada2a }
	__asm { L_009ada28: }
	__asm { xor ecx, ecx }
	__asm { L_009ada2a: }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { call edx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b0160
extern "C" __declspec(naked) void asm_009b0160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ec10 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_009b01a5 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b01a5: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_009b01c8 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b01c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303ef4[];
extern "C" char g_01303ef8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b2550
extern "C" __declspec(naked) void asm_009b2550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ee3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303ef8] }
	__asm { test al, 1 }
	__asm { jne L_009b25c3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ef8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b25ae }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303ef4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b25ae: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303ef4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b25c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303ef4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303ee4[];
extern "C" char g_01303ee8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b25e0
extern "C" __declspec(naked) void asm_009b25e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ee5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303ee8] }
	__asm { test al, 1 }
	__asm { jne L_009b2653 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ee8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b263e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303ee4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b263e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303ee4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b2653: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303ee4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303eec[];
extern "C" char g_01303ef0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b2670
extern "C" __declspec(naked) void asm_009b2670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ee7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303ef0] }
	__asm { test al, 1 }
	__asm { jne L_009b26e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ef0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b26ce }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303eec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b26ce: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303eec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b26e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303eec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303edc[];
extern "C" char g_01303ee0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b2700
extern "C" __declspec(naked) void asm_009b2700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ee9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303ee0] }
	__asm { test al, 1 }
	__asm { jne L_009b2773 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ee0], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b275e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303edc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b275e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303edc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b2773: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303edc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303f34[];
extern "C" char g_01303f38[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b2790
extern "C" __declspec(naked) void asm_009b2790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3eebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303f38] }
	__asm { test al, 1 }
	__asm { jne L_009b2803 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303f38], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b27ee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303f34], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b27ee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303f34], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b2803: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303f34] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303f24[];
extern "C" char g_01303f28[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b2820
extern "C" __declspec(naked) void asm_009b2820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3eede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303f28] }
	__asm { test al, 1 }
	__asm { jne L_009b2893 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303f28], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b287e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303f24], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b287e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303f24], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b2893: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303f24] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303f2c[];
extern "C" char g_01303f30[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b28b0
extern "C" __declspec(naked) void asm_009b28b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3eefe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303f30] }
	__asm { test al, 1 }
	__asm { jne L_009b2923 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303f30], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b290e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303f2c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b290e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303f2c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b2923: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_01303f2c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b2a50
extern "C" __declspec(naked) void asm_009b2a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x110 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_009b2a86 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_009b2a86: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009b2a97 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b2a97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b2ab0
extern "C" __declspec(naked) void asm_009b2ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x128 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_009b2ae6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_009b2ae6: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_009b2af7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b2af7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b2bd0
extern "C" __declspec(naked) void asm_009b2bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ef30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b2c28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe942d0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009b2c2a }
	__asm { L_009b2c28: }
	__asm { xor eax, eax }
	__asm { L_009b2c2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_013041f8[];
extern "C" char g_013041fc[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009b2f80
extern "C" __declspec(naked) void asm_009b2f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ef4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013041fc] }
	__asm { test al, 1 }
	__asm { jne L_009b2fc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013041fc], eax }
	__asm { push 0xe93874 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013041f8], eax }
	__asm { L_009b2fc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f33c0[];
extern "C" void fn_004115f0();
extern "C" void fn_009b3e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b37e0
extern "C" __declspec(naked) void asm_009b37e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3efee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820ca0 }
	__asm { push 0x12f2dc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f33c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009b3841 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f33c0], eax }
	__asm { mov ecx, 0x12f3338 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b3e70 }
	__asm { push 0xde8070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009b3841: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f3338 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_009b3868 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b3868: }
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

extern "C" char g_01304098[];
extern "C" char g_013041d4[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00b91800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b3ad0
extern "C" __declspec(naked) void asm_009b3ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f016 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b91800 }
	__asm { mov dword ptr [esi], 0xe93f5c }
	__asm { mov dword ptr [esi + 4], 0xe94004 }
	__asm { mov dword ptr [esi + 0x18], 0xe9400c }
	__asm { mov dword ptr [esi + 0x1c], 0xe94018 }
	__asm { mov dword ptr [esi + 0x64], 0xe94028 }
	__asm { mov eax, dword ptr [g_013041d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009b3b6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013041d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe938c0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x13040a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf8780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009b3b6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x13040a8 }
	__asm { inc dword ptr [g_01304098] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c74[];
extern "C" char g_012ed80c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b3b90
extern "C" __declspec(naked) void asm_009b3b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f036 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov eax, dword ptr [g_012ed80c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009b3c0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed80c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9388c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed6e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009b3c0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ed6e0 }
	__asm { inc dword ptr [g_012e4c74] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4ad0[];
extern "C" char g_012ed6dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b3c30
extern "C" __declspec(naked) void asm_009b3c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f056 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe938dc }
	__asm { mov dword ptr [esi + 4], 0xe93954 }
	__asm { mov dword ptr [esi + 0x18], 0xe9395c }
	__asm { mov dword ptr [esi + 0x1c], 0xe93968 }
	__asm { mov eax, dword ptr [g_012ed6dc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009b3cc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed6dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe93878 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed5b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7700 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009b3cc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ed5b0 }
	__asm { inc dword ptr [g_012e4ad0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c78[];
extern "C" char g_012ed93c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080fb90();
extern "C" void fn_009b4430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b3cf0
extern "C" __declspec(naked) void asm_009b3cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f076 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009b4430 }
	__asm { mov dword ptr [esi], 0xe93ac4 }
	__asm { mov dword ptr [esi + 4], 0xe93b3c }
	__asm { mov dword ptr [esi + 0x18], 0xe93b44 }
	__asm { mov dword ptr [esi + 0x1c], 0xe93b50 }
	__asm { mov dword ptr [esi + 0x64], 0xe93b60 }
	__asm { mov eax, dword ptr [g_012ed93c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009b3d8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed93c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe93898 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080fb90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed810 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009b3d8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ed810 }
	__asm { inc dword ptr [g_012e4c78] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c7c[];
extern "C" char g_012eda6c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080fb90();
extern "C" void fn_009b4430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b3db0
extern "C" __declspec(naked) void asm_009b3db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f096 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009b4430 }
	__asm { mov dword ptr [esi], 0xe93c14 }
	__asm { mov dword ptr [esi + 4], 0xe93c8c }
	__asm { mov dword ptr [esi + 0x18], 0xe93c94 }
	__asm { mov dword ptr [esi + 0x1c], 0xe93ca0 }
	__asm { mov dword ptr [esi + 0x64], 0xe93cb0 }
	__asm { mov eax, dword ptr [g_012eda6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009b3e4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eda6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe938ac }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080fb90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed940 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7fb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009b3e4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ed940 }
	__asm { inc dword ptr [g_012e4c7c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ed80c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b4070
extern "C" __declspec(naked) void asm_009b4070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23a2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed80c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009b40e5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed80c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9388c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed6e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009b40e5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12ed6e0 }
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

extern "C" void fn_00421370();
extern "C" void fn_00c7de70();
// FUNCTION: ROBLOXSTUDIO 0x009b4d60
extern "C" __declspec(naked) void asm_009b4d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009b4dad }
	__asm { test al, 1 }
	__asm { jne L_009b4da6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009b4da6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b4da6: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_009b4dad: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c7de70 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009b4dca }
	__asm { push esi }
	__asm { call fn_00421370 }
	__asm { add esp, 4 }
	__asm { L_009b4dca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x009b5150
extern "C" __declspec(naked) void asm_009b5150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_009b519d }
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
	__asm { L_009b519d: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402ef0();
extern "C" void fn_00b34640();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b53d0
extern "C" __declspec(naked) void asm_009b53d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f2b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 3] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00402ef0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009b544a }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov dword ptr [ebx + edi*4], eax }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b544a: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi + 0x14], ebx }
	__asm { call fn_00b34640 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b3590();
// FUNCTION: ROBLOXSTUDIO 0x009b5ba0
extern "C" __declspec(naked) void asm_009b5ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_009b3590 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_009b5bd3 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009b5bd3: }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
extern "C" void fn_009b3590();
// FUNCTION: ROBLOXSTUDIO 0x009b5cb0
extern "C" __declspec(naked) void asm_009b5cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_009b3590 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ebx, eax }
	__asm { test ecx, ecx }
	__asm { je L_009b5cd8 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_009b5cda }
	__asm { L_009b5cd8: }
	__asm { xor ecx, ecx }
	__asm { L_009b5cda: }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { push ebx }
	__asm { call edx }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_009b33e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b5db0
extern "C" __declspec(naked) void asm_009b5db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { movzx eax, byte ptr [ecx + 0x74] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x74 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { add eax, ecx }
	__asm { je L_009b5dcb }
	__asm { inc eax }
	__asm { jmp L_009b5dcd }
	__asm { L_009b5dcb: }
	__asm { xor eax, eax }
	__asm { L_009b5dcd: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_009b33e0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_009b5dec }
	__asm { mov al, byte ptr [eax + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b5dec: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 8], 0xe9415c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131c918[];
extern "C" char g_0131c91c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009b5ee0
extern "C" __declspec(naked) void asm_009b5ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3f32e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x546230 }
	__asm { push 0x131c920 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c91c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009b5f42 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c91c], eax }
	__asm { push 0xe93868 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c918], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b5f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c918] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013041f8[];
extern "C" char g_013041fc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x009b5f60
extern "C" __declspec(naked) void asm_009b5f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ef4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9b2f80 }
	__asm { push 0x13041f0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013041fc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009b5fc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013041fc], eax }
	__asm { push 0xe93874 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013041f8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b5fc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013041f8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x009b6de0
extern "C" __declspec(naked) void asm_009b6de0()
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
	__asm { je L_009b6e41 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_009b6e00: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_009b6e0b }
	__asm { add esi, -0x2c }
	__asm { jmp L_009b6e0d }
	__asm { L_009b6e0b: }
	__asm { xor esi, esi }
	__asm { L_009b6e0d: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_009b6e28 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { jmp L_009b6e3a }
	__asm { L_009b6e28: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { lea edx, [esi + 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_009b6e3a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_009b6e00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_009b6e41: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b53d0();
extern "C" void fn_009b6de0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x009b72b0
extern "C" __declspec(naked) void asm_009b72b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_009b72e4 }
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
	__asm { L_009b72e4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_009b731a }
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
	__asm { je L_009b731a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009b6de0 }
	__asm { L_009b731a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_013041d8[];
extern "C" char g_013041dc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009b7330
extern "C" __declspec(naked) void asm_009b7330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3f38e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013041dc] }
	__asm { test al, 1 }
	__asm { jne L_009b73a3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013041dc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b738e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013041d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b738e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013041d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b73a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_013041d8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b33e0();
extern "C" void fn_009b4bb0();
// FUNCTION: ROBLOXSTUDIO 0x009b7470
extern "C" __declspec(naked) void asm_009b7470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movzx eax, byte ptr [esi + 0x74] }
	__asm { lea ecx, [esi + 0x74] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_009b7486 }
	__asm { inc eax }
	__asm { jmp L_009b7488 }
	__asm { L_009b7486: }
	__asm { xor eax, eax }
	__asm { L_009b7488: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_009b33e0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_009b74b9 }
	__asm { mov cl, byte ptr [ebp + 0xc] }
	__asm { cmp cl, byte ptr [eax + 8] }
	__asm { je L_009b74b9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax + 8], cl }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_009b4bb0 }
	__asm { L_009b74b9: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e26f4[];
extern "C" char g_012e4e98[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b7da0
extern "C" __declspec(naked) void asm_009b7da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f416 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe94474 }
	__asm { mov dword ptr [esi + 4], 0xe944ec }
	__asm { mov dword ptr [esi + 0x18], 0xe944f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe94500 }
	__asm { mov eax, dword ptr [g_012e26f4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009b7e39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e26f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94460 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e25c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009b7e39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e25c8 }
	__asm { inc dword ptr [g_012e4e98] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e26f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009b7e60
extern "C" __declspec(naked) void asm_009b7e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f42e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e26f4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009b7ed5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e26f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe94460 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e25c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009b7ed5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e25c8 }
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

extern "C" void fn_0041cd30();
extern "C" void fn_007c9370();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x009b8280
extern "C" __declspec(naked) void asm_009b8280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_009b82d3 }
	__asm { add edi, 0x1c }
	__asm { je L_009b82ac }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007c9370 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009b82ac }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_009b82cb }
	__asm { L_009b82ac: }
	__asm { test edi, edi }
	__asm { je L_009b82d3 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009b82d3 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_009b82d3 }
	__asm { L_009b82cb: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009b82d3: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_0043f040();
extern "C" void fn_008523c0();
extern "C" void fn_009b7cc0();
// FUNCTION: ROBLOXSTUDIO 0x009b8430
extern "C" __declspec(naked) void asm_009b8430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009b84a2 }
	__asm { push eax }
	__asm { call fn_008523c0 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009b84a2 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xae0] }
	__asm { mov dword ptr [ebp - 0x10], 0x9b83a0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_009b7cc0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_009b8487 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009b8487: }
	__asm { cmp byte ptr [edi + 0xc70], 0 }
	__asm { je L_009b84a2 }
	__asm { cmp byte ptr [esi + 0x72], 0 }
	__asm { je L_009b84a2 }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { mov byte ptr [esi + 0x70], 1 }
	__asm { call fn_0043f040 }
	__asm { L_009b84a2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f86ab[];
extern "C" void fn_006b9740();
extern "C" void fn_00ce3b30();
// FUNCTION: ROBLOXSTUDIO 0x009b8580
extern "C" __declspec(naked) void asm_009b8580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009b85cd }
	__asm { cmp byte ptr [esi + 0x71], 0 }
	__asm { je L_009b85cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009b85bc }
	__asm { push 0x3f }
	__asm { push 0xe94650 }
	__asm { push 0xe94698 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b85cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009b85bc: }
	__asm { movzx eax, al }
	__asm { push 0xe946c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b85cd: }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { mov byte ptr [esi + 0x71], 1 }
	__asm { jne L_009b85e0 }
	__asm { mov byte ptr [esi + 0x72], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009b85e0: }
	__asm { cmp byte ptr [g_012f86ab], 0 }
	__asm { je L_009b8605 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0x9b8610 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_00ce3b30 }
	__asm { L_009b8605: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009bab60();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009b8fe0
extern "C" __declspec(naked) void asm_009b8fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f4f0 }
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
	__asm { je L_009b9038 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe94d40 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009b903a }
	__asm { L_009b9038: }
	__asm { xor eax, eax }
	__asm { L_009b903a: }
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
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009bab60 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00424f10();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x009bb0f0
extern "C" __declspec(naked) void asm_009bb0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_009bb141 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009bb110 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009bb112 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009bb112 }
	__asm { L_009bb110: }
	__asm { mov eax, ecx }
	__asm { L_009bb112: }
	__asm { test eax, eax }
	__asm { je L_009bb141 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009bb141 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_009bb141 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_009bb141 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00424f10 }
	__asm { L_009bb141: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4bd8[];
extern "C" char g_012e57c4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009bb2f0
extern "C" __declspec(naked) void asm_009bb2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f776 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe947ec }
	__asm { mov dword ptr [esi + 4], 0xe94864 }
	__asm { mov dword ptr [esi + 0x18], 0xe9486c }
	__asm { mov dword ptr [esi + 0x1c], 0xe94878 }
	__asm { mov eax, dword ptr [g_012e57c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009bb389 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e57c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe947d8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009bb389: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e5698 }
	__asm { inc dword ptr [g_012e4bd8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e57c4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009bba20
extern "C" __declspec(naked) void asm_009bba20()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009bba95 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e57c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe947d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009bba95: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e5698 }
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
extern "C" void fn_009be2d0();
// FUNCTION: ROBLOXSTUDIO 0x009bcba0
extern "C" __declspec(naked) void asm_009bcba0()
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
	__asm { call fn_009be2d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009bcc12 }
	__asm { add esi, 5 }
	__asm { je L_009bcbe2 }
	__asm { add esi, -5 }
	__asm { jmp L_009bcbe4 }
	__asm { L_009bcbe2: }
	__asm { xor esi, esi }
	__asm { L_009bcbe4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcc11 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bcc11 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009bcc11: }
	__asm { pop edi }
	__asm { L_009bcc12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
