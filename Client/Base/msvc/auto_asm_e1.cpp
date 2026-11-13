// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x00403040
extern "C" __declspec(naked) void asm_00403040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_00403051 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00403051: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0040e580
extern "C" __declspec(naked) void asm_0040e580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x12bdbc4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x0044e490
extern "C" __declspec(naked) void asm_0044e490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_0044e4a1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0044e4a1: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x005323f0
extern "C" __declspec(naked) void asm_005323f0()
{
	__asm { push 4 }
	__asm { push 0xf12f28 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { ret }
}

extern "C" char g_00e10188[];
// FUNCTION: ROBLOXSTUDIO 0x006bca70
extern "C" __declspec(naked) void asm_006bca70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call dword ptr [g_00e10188] }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006c6500
extern "C" __declspec(naked) void asm_006c6500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { xor eax, eax }
	__asm { cpuid }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00770e20
extern "C" __declspec(naked) void asm_00770e20()
{
	__asm { cmp dword ptr [ecx], 0x3d09000 }
	__asm { sbb eax, eax }
	__asm { and eax, 0xfffffe00 }
	__asm { add eax, 0x400 }
	__asm { ret }
}

extern "C" char g_00e106e4[];
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x00779740
extern "C" __declspec(naked) void asm_00779740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00779760 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_00e106e4] }
	__asm { add esp, 8 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00779760: }
	__asm { push 0x80004005 }
	__asm { call fn_0042ee70 }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x007929e0
extern "C" __declspec(naked) void asm_007929e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { jb L_007929f4 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007929f4: }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007c5a70
extern "C" __declspec(naked) void asm_007c5a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x12bc0ec }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828831
extern "C" __declspec(naked) void asm_00828831()
{
	__asm { adc dword ptr [ebx], 0xf07d8300 }
	__asm { adc byte ptr [edx + 0xb], dh }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c37c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0082dd50
extern "C" __declspec(naked) void asm_0082dd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x3c], 0 }
	__asm { je L_0082dd71 }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { sar ecx, 3 }
	__asm { cmp eax, ecx }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082dd71: }
	__asm { xor eax, eax }
	__asm { xor ecx, ecx }
	__asm { cmp eax, ecx }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00857cb0
extern "C" __declspec(naked) void asm_00857cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xe18] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { and eax, edx }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x00886570
extern "C" __declspec(naked) void asm_00886570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { jb L_00886581 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00886581: }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x008865a0
extern "C" __declspec(naked) void asm_008865a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { jb L_008865b1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008865b1: }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x008bb580
extern "C" __declspec(naked) void asm_008bb580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x11edf0c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e106e4[];
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x008f4f20
extern "C" __declspec(naked) void asm_008f4f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_008f4f41 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_00e106e4] }
	__asm { add esp, 8 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f4f41: }
	__asm { push 0x80004005 }
	__asm { call fn_0042ee70 }
}

extern "C" void fn_00a10960();
// FUNCTION: ROBLOXSTUDIO 0x00900760
extern "C" __declspec(naked) void asm_00900760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00a10960 }
	__asm { and eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0092b880
extern "C" __declspec(naked) void asm_0092b880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { cmp ecx, dword ptr [eax + 4] }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00965cc0
extern "C" __declspec(naked) void asm_00965cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009decf0
extern "C" __declspec(naked) void asm_009decf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x12d6c8c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a0a240
extern "C" __declspec(naked) void asm_00a0a240()
{
	__asm { xor eax, eax }
	__asm { cmp eax, dword ptr [ecx + 0x18] }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a11390
extern "C" __declspec(naked) void asm_00a11390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, 5 }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37870
extern "C" __declspec(naked) void asm_00a37870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { and ecx, 0x3f }
	__asm { cmp ecx, 0x1c }
	__asm { jl L_00a37896 }
	__asm { cmp ecx, 0x1e }
	__asm { jle L_00a3788a }
	__asm { cmp ecx, 0x22 }
	__asm { jne L_00a37896 }
	__asm { L_00a3788a: }
	__asm { and eax, 0xff800000 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37896: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a56370
extern "C" __declspec(naked) void asm_00a56370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, 2 }
	__asm { ja L_00a56392 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { and eax, edx }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a56392: }
	__asm { mov eax, dword ptr [eax] }
	__asm { xor edx, edx }
	__asm { and eax, edx }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00a77240
extern "C" __declspec(naked) void asm_00a77240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x11e5790 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aae550();
// FUNCTION: ROBLOXSTUDIO 0x00aaea50
extern "C" __declspec(naked) void asm_00aaea50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aae550 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b47fe0();
// FUNCTION: ROBLOXSTUDIO 0x00b480d0
extern "C" __declspec(naked) void asm_00b480d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b47fe0 }
	__asm { add esp, 4 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00891b10();
extern "C" void fn_009d5f80();
// FUNCTION: ROBLOXSTUDIO 0x00b92fb0
extern "C" __declspec(naked) void asm_00b92fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { push eax }
	__asm { call fn_009d5f80 }
	__asm { add esp, 8 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { add eax, 2 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c72530
extern "C" __declspec(naked) void asm_00c72530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { dec eax }
	__asm { mov edx, 0xd }
	__asm { cmp edx, eax }
	__asm { sbb eax, eax }
	__asm { and eax, 8 }
	__asm { add eax, 0x18 }
	__asm { mov dword ptr [ecx + 0xe90], eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c8dae0();
// FUNCTION: ROBLOXSTUDIO 0x00c8e040
extern "C" __declspec(naked) void asm_00c8e040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { add edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { adc eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c8dae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00c96fc0();
// FUNCTION: ROBLOXSTUDIO 0x00c96500
extern "C" __declspec(naked) void asm_00c96500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c96fc0 }
	__asm { add esp, 8 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00500320();
extern "C" void fn_00c8d1b0();
// FUNCTION: ROBLOXSTUDIO 0x00cb71a0
extern "C" __declspec(naked) void asm_00cb71a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x465c], 0 }
	__asm { je L_00cb71d5 }
	__asm { mov ecx, dword ptr [esi + 0x2034] }
	__asm { test ecx, ecx }
	__asm { je L_00cb71c5 }
	__asm { call fn_00500320 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { je L_00cb71d5 }
	__asm { L_00cb71c5: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c8d1b0 }
	__asm { L_00cb71d5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" void fn_00cf6564();
// FUNCTION: ROBLOXSTUDIO 0x00cf6609
extern "C" __declspec(naked) void asm_00cf6609()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6564 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ecx }
	__asm { dec eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { jmp dword ptr [g_00e10504] }
}

extern "C" void fn_00cf6a60();
// FUNCTION: ROBLOXSTUDIO 0x00cf6810
extern "C" __declspec(naked) void asm_00cf6810()
{
	__asm { push ecx }
	__asm { lea ecx, [esp + 8] }
	__asm { sub ecx, eax }
	__asm { and ecx, 0xf }
	__asm { add eax, ecx }
	__asm { sbb ecx, ecx }
	__asm { or eax, ecx }
	__asm { pop ecx }
	__asm { jmp fn_00cf6a60 }
	__asm { push ecx }
	__asm { lea ecx, [esp + 8] }
	__asm { sub ecx, eax }
	__asm { and ecx, 7 }
	__asm { add eax, ecx }
	__asm { sbb ecx, ecx }
	__asm { or eax, ecx }
	__asm { pop ecx }
	__asm { jmp fn_00cf6a60 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf6a60
extern "C" __declspec(naked) void asm_00cf6a60()
{
	__asm { push ecx }
	__asm { lea ecx, [esp + 4] }
	__asm { sub ecx, eax }
	__asm { sbb eax, eax }
	__asm { not eax }
	__asm { and ecx, eax }
	__asm { mov eax, esp }
	__asm { and eax, 0xfffff000 }
	__asm { L_00cf6a74: }
	__asm { cmp ecx, eax }
	__asm { jb L_00cf6a82 }
	__asm { mov eax, ecx }
	__asm { pop ecx }
	__asm { xchg esp, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esp], eax }
	__asm { ret }
	__asm { L_00cf6a82: }
	__asm { sub eax, 0x1000 }
	__asm { test dword ptr [eax], eax }
	__asm { jmp L_00cf6a74 }
}
