// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006b98c0();
extern "C" void fn_00774920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ae2ef0
extern "C" __declspec(naked) void asm_00ae2ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1012c70 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_00ae2f2e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00ae2f2e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xebe2b0 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00ae2f56 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ae2f56: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ae7110
extern "C" __declspec(naked) void asm_00ae7110()
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
	__asm { lea esi, [edi + 0x350] }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00ae716f }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00ae715d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00ae715d: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x130c630 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00ae716f: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00ae7180 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ae7180: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ae7530
extern "C" __declspec(naked) void asm_00ae7530()
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
	__asm { lea esi, [edi + 0x334] }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00ae758f }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00ae757d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00ae757d: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push 0x130c604 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00ae758f: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00ae75a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ae75a0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012e4e90[];
extern "C" char g_012f1e24[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae88e0
extern "C" __declspec(naked) void asm_00ae88e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51c16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xebec74 }
	__asm { mov dword ptr [esi + 4], 0xebecec }
	__asm { mov dword ptr [esi + 0x18], 0xebecf4 }
	__asm { mov dword ptr [esi + 0x1c], 0xebed00 }
	__asm { mov eax, dword ptr [g_012f1e24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ae8979 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1e24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebec64 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1cf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ae8979: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f1cf8 }
	__asm { inc dword ptr [g_012e4e90] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f1e24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae8eb0
extern "C" __declspec(naked) void asm_00ae8eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51c5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1e24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00ae8f25 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1e24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebec64 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1cf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ae8f25: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12f1cf8 }
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
extern "C" void fn_00aea2e0();
// FUNCTION: ROBLOXSTUDIO 0x00ae9540
extern "C" __declspec(naked) void asm_00ae9540()
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
	__asm { call fn_00aea2e0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae95b2 }
	__asm { add esi, 5 }
	__asm { je L_00ae9582 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae9584 }
	__asm { L_00ae9582: }
	__asm { xor esi, esi }
	__asm { L_00ae9584: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae95b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae95b1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ae95b1: }
	__asm { pop edi }
	__asm { L_00ae95b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00aea670();
// FUNCTION: ROBLOXSTUDIO 0x00ae95d0
extern "C" __declspec(naked) void asm_00ae95d0()
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
	__asm { call fn_00aea670 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae9642 }
	__asm { add esi, 5 }
	__asm { je L_00ae9612 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae9614 }
	__asm { L_00ae9612: }
	__asm { xor esi, esi }
	__asm { L_00ae9614: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae9641 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae9641 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ae9641: }
	__asm { pop edi }
	__asm { L_00ae9642: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00aeaa00();
// FUNCTION: ROBLOXSTUDIO 0x00ae9660
extern "C" __declspec(naked) void asm_00ae9660()
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
	__asm { call fn_00aeaa00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae96d2 }
	__asm { add esi, 5 }
	__asm { je L_00ae96a2 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae96a4 }
	__asm { L_00ae96a2: }
	__asm { xor esi, esi }
	__asm { L_00ae96a4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae96d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae96d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ae96d1: }
	__asm { pop edi }
	__asm { L_00ae96d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00ae9b50
extern "C" __declspec(naked) void asm_00ae9b50()
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
	__asm { jne L_00ae9b9d }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00ae9b9d: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { and edx, 0xfffffffe }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ae9bd0
extern "C" __declspec(naked) void asm_00ae9bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, ecx }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00ae9c17 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ae9c17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00ae9820();
extern "C" void fn_00aebe70();
// FUNCTION: ROBLOXSTUDIO 0x00aead90
extern "C" __declspec(naked) void asm_00aead90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_00ae9820 }
	__asm { test esi, esi }
	__asm { je L_00aeadc5 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_00aebe70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00aeadc5: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { xor eax, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_00aebe70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aeb060
extern "C" __declspec(naked) void asm_00aeb060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57998 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00aeb0ba }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_00aeb0ba: }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { jb L_00aeb0cb }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00aeb0cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aeb650
extern "C" __declspec(naked) void asm_00aeb650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57998 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { jb L_00aeb699 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00aeb699: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_00ae8310();
extern "C" void fn_00c307f0();
// FUNCTION: ROBLOXSTUDIO 0x00aebd70
extern "C" __declspec(naked) void asm_00aebd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00aebdc3 }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00aebdc3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x78] }
	__asm { mov dword ptr [ebp - 0x10], 0xaebdd0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_00ae8310 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00aebdc3 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00aebdc3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130c790[];
extern "C" char g_0130c794[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aebf20
extern "C" __declspec(naked) void asm_00aebf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd51f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130c794] }
	__asm { test al, 1 }
	__asm { jne L_00aebf93 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c794], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aebf7e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c790], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aebf7e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c790], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aebf93: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130c790] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c7a0[];
extern "C" char g_0130c7a4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aebfb0
extern "C" __declspec(naked) void asm_00aebfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd51f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130c7a4] }
	__asm { test al, 1 }
	__asm { jne L_00aec023 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c7a4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aec00e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c7a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec00e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c7a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec023: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130c7a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c798[];
extern "C" char g_0130c79c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aec040
extern "C" __declspec(naked) void asm_00aec040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd51f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130c79c] }
	__asm { test al, 1 }
	__asm { jne L_00aec0b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c79c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aec09e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c798], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec09e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c798], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec0b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130c798] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c7c0[];
extern "C" char g_0130c7c4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aec0d0
extern "C" __declspec(naked) void asm_00aec0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd51f9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130c7c4] }
	__asm { test al, 1 }
	__asm { jne L_00aec143 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c7c4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aec12e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c7c0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec12e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c7c0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec143: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130c7c0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c7d0[];
extern "C" char g_0130c7d4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aec160
extern "C" __declspec(naked) void asm_00aec160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd51fbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130c7d4] }
	__asm { test al, 1 }
	__asm { jne L_00aec1d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c7d4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aec1be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c7d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec1be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c7d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aec1d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130c7d0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4bf4[];
extern "C" char g_012f2084[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00aecf40
extern "C" __declspec(naked) void asm_00aecf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52136 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xebf294 }
	__asm { mov dword ptr [esi + 4], 0xebf30c }
	__asm { mov dword ptr [esi + 0x18], 0xebf314 }
	__asm { mov dword ptr [esi + 0x1c], 0xebf320 }
	__asm { mov eax, dword ptr [g_012f2084] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00aecfd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2084], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebf278 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1f58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00aecfd9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f1f58 }
	__asm { inc dword ptr [g_012e4bf4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aec620();
// FUNCTION: ROBLOXSTUDIO 0x00aee540
extern "C" __declspec(naked) void asm_00aee540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59cd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aec620 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00aee59b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00aee59b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00af0ee0
extern "C" __declspec(naked) void asm_00af0ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov esi, dword ptr [esi + eax*4 + 0x120] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [edi + 0x100] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { cmp esi, 1 }
	__asm { je L_00af0f29 }
	__asm { cmp dword ptr [edi + eax*4 + 0x120], 1 }
	__asm { je L_00af0f29 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af0f29: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00af0f30
extern "C" __declspec(naked) void asm_00af0f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov edi, dword ptr [esi + eax*4 + 0x120] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov eax, dword ptr [esi + eax*4 + 0x120] }
	__asm { cmp edi, 6 }
	__asm { je L_00af0f8f }
	__asm { cmp eax, 6 }
	__asm { je L_00af0f8f }
	__asm { cmp edi, 8 }
	__asm { je L_00af0f8f }
	__asm { cmp eax, 8 }
	__asm { je L_00af0f8f }
	__asm { cmp edi, 7 }
	__asm { je L_00af0f8f }
	__asm { cmp eax, 7 }
	__asm { je L_00af0f8f }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af0f8f: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00af0fa0
extern "C" __declspec(naked) void asm_00af0fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov edi, dword ptr [esi + eax*4 + 0x120] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov eax, dword ptr [esi + eax*4 + 0x120] }
	__asm { cmp edi, 3 }
	__asm { jne L_00af0fe5 }
	__asm { cmp eax, 4 }
	__asm { jmp L_00af0fed }
	__asm { L_00af0fe5: }
	__asm { cmp edi, 4 }
	__asm { jne L_00af0ffa }
	__asm { cmp eax, 3 }
	__asm { L_00af0fed: }
	__asm { je L_00af100d }
	__asm { cmp eax, 5 }
	__asm { je L_00af100d }
	__asm { L_00af0ff4: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af0ffa: }
	__asm { cmp edi, 5 }
	__asm { jne L_00af0ff4 }
	__asm { cmp eax, edi }
	__asm { je L_00af100d }
	__asm { cmp eax, 4 }
	__asm { je L_00af100d }
	__asm { cmp eax, 3 }
	__asm { jne L_00af0ff4 }
	__asm { L_00af100d: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00af1020
extern "C" __declspec(naked) void asm_00af1020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov esi, dword ptr [esi + eax*4 + 0x120] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [edi + 0x100] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { cmp esi, 2 }
	__asm { je L_00af1069 }
	__asm { cmp dword ptr [edi + eax*4 + 0x120], 2 }
	__asm { je L_00af1069 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af1069: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099cef0();
// FUNCTION: ROBLOXSTUDIO 0x00af1070
extern "C" __declspec(naked) void asm_00af1070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0xc0] }
	__asm { xor esi, esi }
	__asm { test edi, edi }
	__asm { jle L_00af10a3 }
	__asm { L_00af1085: }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_0099cef0 }
	__asm { mov ebx, eax }
	__asm { mov ecx, ebx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { call dword ptr [edx + 0x18] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_00af10aa }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc esi }
	__asm { cmp esi, edi }
	__asm { jl L_00af1085 }
	__asm { L_00af10a3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af10aa: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00af1070();
// FUNCTION: ROBLOXSTUDIO 0x00af10c0
extern "C" __declspec(naked) void asm_00af10c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00af1070 }
	__asm { mov esi, eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00af1116 }
	__asm { test esi, esi }
	__asm { jne L_00af1116 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00af1105 }
	__asm { push 0x79 }
	__asm { push 0xebfb0c }
	__asm { push 0xe56ba4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af1116 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00af1105: }
	__asm { movzx eax, al }
	__asm { push 0xebfec0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af1116: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00af1550
extern "C" __declspec(naked) void asm_00af1550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00af15b8 }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [esi + 0x30], edx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sete dl }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { sete al }
	__asm { cmp eax, edx }
	__asm { jne L_00af15af }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af159e }
	__asm { push 0x86 }
	__asm { push 0xebfb0c }
	__asm { push 0xebff14 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af15af }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00af159e: }
	__asm { movzx eax, cl }
	__asm { push 0xebff40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af15af: }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af15b8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4be8[];
extern "C" char g_012f14a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af1cc0
extern "C" __declspec(naked) void asm_00af1cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd523a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec02dc }
	__asm { mov dword ptr [esi + 4], 0xec0354 }
	__asm { mov dword ptr [esi + 0x18], 0xec035c }
	__asm { mov dword ptr [esi + 0x1c], 0xec0368 }
	__asm { mov eax, dword ptr [g_012f14a4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00af1d59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f14a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec02c4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1378 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00af1d59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f1378 }
	__asm { inc dword ptr [g_012e4be8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96b8[];
extern "C" char g_012f96bc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00af2380
extern "C" __declspec(naked) void asm_00af2380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5245e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8351d0 }
	__asm { push 0x12f9508 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f96bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00af23e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96bc], eax }
	__asm { push 0xec02c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f96b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af23e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f96b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af2a30
extern "C" __declspec(naked) void asm_00af2a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x68 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00af2a63 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00af2a63: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00af2a74 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af2a74: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af2a90
extern "C" __declspec(naked) void asm_00af2a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0xc8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00af2ac6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00af2ac6: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00af2ad7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af2ad7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af2af0
extern "C" __declspec(naked) void asm_00af2af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0xf8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00af2b26 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00af2b26: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00af2b37 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af2b37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af2b50
extern "C" __declspec(naked) void asm_00af2b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0xe0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00af2b86 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00af2b86: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00af2b97 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af2b97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e4bfc[];
extern "C" char g_012e8adc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af3150
extern "C" __declspec(naked) void asm_00af3150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52516 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec05ec }
	__asm { mov dword ptr [esi + 4], 0xec0664 }
	__asm { mov dword ptr [esi + 0x18], 0xec066c }
	__asm { mov dword ptr [esi + 0x1c], 0xec0678 }
	__asm { mov eax, dword ptr [g_012e8adc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00af31e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8adc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec05cc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e89b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00af31e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e89b0 }
	__asm { inc dword ptr [g_012e4bfc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af36a0
extern "C" __declspec(naked) void asm_00af36a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc4], 0x10 }
	__asm { jb L_00af36ba }
	__asm { push dword ptr [esi + 0xb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af36ba: }
	__asm { mov dword ptr [esi + 0xc4], 0xf }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov byte ptr [esi + 0xb0], 0 }
	__asm { cmp dword ptr [esi + 0xac], 0x10 }
	__asm { jb L_00af36ec }
	__asm { push dword ptr [esi + 0x98] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af36ec: }
	__asm { mov dword ptr [esi + 0xac], 0xf }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov byte ptr [esi + 0x98], 0 }
	__asm { cmp dword ptr [esi + 0x94], 0x10 }
	__asm { jb L_00af371e }
	__asm { push dword ptr [esi + 0x80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af371e: }
	__asm { mov dword ptr [esi + 0x94], 0xf }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00af374a }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af374a: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_012f96a8[];
extern "C" char g_012f96ac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00af3cf0
extern "C" __declspec(naked) void asm_00af3cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25f8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8350e0 }
	__asm { push 0x12f94f8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f96ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00af3d52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96ac], eax }
	__asm { push 0xec05e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f96a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af3d52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f96a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af4670
extern "C" __declspec(naked) void asm_00af4670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2362e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00af4694 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00af4694: }
	__asm { push 0x8221a0 }
	__asm { push 0x12f2f18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4bf0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00af46dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af46dc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f4b68 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4dbc[];
extern "C" char g_012ef234[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af4dc0
extern "C" __declspec(naked) void asm_00af4dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52746 }
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
	__asm { mov dword ptr [esi], 0xec0a34 }
	__asm { mov dword ptr [esi + 4], 0xec0aac }
	__asm { mov dword ptr [esi + 0x18], 0xec0ab4 }
	__asm { mov dword ptr [esi + 0x1c], 0xec0ac0 }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00af4e5a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00af4e5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef108 }
	__asm { inc dword ptr [g_012e4dbc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_0042e3d0();
// FUNCTION: ROBLOXSTUDIO 0x00af5760
extern "C" __declspec(naked) void asm_00af5760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00af57aa }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00af57b4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00af57b4 }
	__asm { L_00af57aa: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00af57b4: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00af63c0
extern "C" __declspec(naked) void asm_00af63c0()
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
	__asm { je L_00af63e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00af63ee }
	__asm { L_00af63e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00af63ee: }
	__asm { cmp ecx, 0x11f0ee8 }
	__asm { je L_00af6437 }
	__asm { test eax, eax }
	__asm { je L_00af63fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00af6403 }
	__asm { L_00af63fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00af6403: }
	__asm { push 0x11f0ee8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00af6437 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00af6437: }
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
// FUNCTION: ROBLOXSTUDIO 0x00af6450
extern "C" __declspec(naked) void asm_00af6450()
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
	__asm { je L_00af6479 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00af647e }
	__asm { L_00af6479: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00af647e: }
	__asm { cmp ecx, 0x11f0ebc }
	__asm { je L_00af64c7 }
	__asm { test eax, eax }
	__asm { je L_00af648e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00af6493 }
	__asm { L_00af648e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00af6493: }
	__asm { push 0x11f0ebc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00af64c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00af64c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00af64e0
extern "C" __declspec(naked) void asm_00af64e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd351d3 }
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
	__asm { je L_00af6524 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, eax }
	__asm { jmp L_00af6526 }
	__asm { L_00af6524: }
	__asm { xor ecx, ecx }
	__asm { L_00af6526: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00af6552 }
	__asm { test al, 1 }
	__asm { jne L_00af6552 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af6552 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af6552: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10388[];
extern "C" void fn_00953940();
// FUNCTION: ROBLOXSTUDIO 0x00af73f0
extern "C" __declspec(naked) void asm_00af73f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52969 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00af7468 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { add esi, 4 }
	__asm { push 0 }
	__asm { lea edi, [ecx + 4] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00953940 }
	__asm { mov dword ptr [esi], eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop edi }
	__asm { L_00af7468: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00836db0();
// FUNCTION: ROBLOXSTUDIO 0x00af7480
extern "C" __declspec(naked) void asm_00af7480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00af74d1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00af74a0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00af74a2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00af74a2 }
	__asm { L_00af74a0: }
	__asm { mov eax, ecx }
	__asm { L_00af74a2: }
	__asm { test eax, eax }
	__asm { je L_00af74d1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00af74d1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00af74d1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00af74d1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00836db0 }
	__asm { L_00af74d1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083c600();
// FUNCTION: ROBLOXSTUDIO 0x00af76b0
extern "C" __declspec(naked) void asm_00af76b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00af7701 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00af76d0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00af76d2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00af76d2 }
	__asm { L_00af76d0: }
	__asm { mov eax, ecx }
	__asm { L_00af76d2: }
	__asm { test eax, eax }
	__asm { je L_00af7701 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00af7701 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00af7701 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00af7701 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083c600 }
	__asm { L_00af7701: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5100[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af8290
extern "C" __declspec(naked) void asm_00af8290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24f3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x822200 }
	__asm { push 0x12f2f60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00af82f1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af82f1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5078 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00af8318 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af8318: }
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

extern "C" char g_012f5190[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af8330
extern "C" __declspec(naked) void asm_00af8330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2342e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820ee0 }
	__asm { push 0x12f2f68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5190] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00af8391 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af8391: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5108 }
	__asm { push 2 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00af83b8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af83b8: }
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

extern "C" char g_012ef234[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af8f80
extern "C" __declspec(naked) void asm_00af8f80()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00af8ff5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af8ff5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12ef108 }
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

// FUNCTION: ROBLOXSTUDIO 0x00af9300
extern "C" __declspec(naked) void asm_00af9300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { je L_00af9362 }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test cl, 1 }
	__asm { je L_00af934e }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00af934e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af9362: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_00afc3b0();
// FUNCTION: ROBLOXSTUDIO 0x00af9ee0
extern "C" __declspec(naked) void asm_00af9ee0()
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
	__asm { call fn_00afc3b0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00af9f52 }
	__asm { add esi, 5 }
	__asm { je L_00af9f22 }
	__asm { add esi, -5 }
	__asm { jmp L_00af9f24 }
	__asm { L_00af9f22: }
	__asm { xor esi, esi }
	__asm { L_00af9f24: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00af9f51 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00af9f51 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00af9f51: }
	__asm { pop edi }
	__asm { L_00af9f52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00421370();
extern "C" void fn_009bccc0();
extern "C" void fn_00c7de70();
// FUNCTION: ROBLOXSTUDIO 0x00afa9d0
extern "C" __declspec(naked) void asm_00afa9d0()
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
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c7de70 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00afaa1b }
	__asm { push esi }
	__asm { call fn_00421370 }
	__asm { add esp, 4 }
	__asm { L_00afaa1b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130d0d9[];
extern "C" void fn_009b99c0();
// FUNCTION: ROBLOXSTUDIO 0x00afb860
extern "C" __declspec(naked) void asm_00afb860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xd0] }
	__asm { sub esp, 8 }
	__asm { mov edx, eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea edi, [ecx + 0xd0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00afb896 }
	__asm { L_00afb882: }
	__asm { cmp dword ptr [ecx + 0x10], esi }
	__asm { jge L_00afb88c }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { jmp L_00afb890 }
	__asm { L_00afb88c: }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00afb890: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { je L_00afb882 }
	__asm { L_00afb896: }
	__asm { cmp edx, eax }
	__asm { je L_00afb8a2 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp esi, dword ptr [edx + 0x10] }
	__asm { jge L_00afb8a5 }
	__asm { L_00afb8a2: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00afb8a5: }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmp dword ptr [ecx], eax }
	__asm { jne L_00afb8c5 }
	__asm { movzx eax, byte ptr [g_0130d0d9] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009b99c0 }
	__asm { L_00afb8c5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f5190[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00afbdc0
extern "C" __declspec(naked) void asm_00afbdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2342e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00afbde4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00afbde4: }
	__asm { push 0x820ee0 }
	__asm { push 0x12f2f68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5190] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00afbe2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00afbe2c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5108 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5100[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00afbe60
extern "C" __declspec(naked) void asm_00afbe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00afbe84 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00afbe84: }
	__asm { push 0x822200 }
	__asm { push 0x12f2f60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00afbecc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00afbecc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5078 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af7fc0();
// FUNCTION: ROBLOXSTUDIO 0x00afd0c0
extern "C" __declspec(naked) void asm_00afd0c0()
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
	__asm { call fn_00af7fc0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00afd0f3 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00afd0f3: }
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

// FUNCTION: ROBLOXSTUDIO 0x00afd2a0
extern "C" __declspec(naked) void asm_00afd2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, esi }
	__asm { jne L_00afd2cb }
	__asm { mov dl, byte ptr [edi] }
	__asm { L_00afd2b7: }
	__asm { cmp byte ptr [eax + 0xe], dl }
	__asm { jge L_00afd2c1 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00afd2c5 }
	__asm { L_00afd2c1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00afd2c5: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00afd2b7 }
	__asm { L_00afd2cb: }
	__asm { cmp ecx, esi }
	__asm { je L_00afd2d9 }
	__asm { mov al, byte ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp al, byte ptr [ecx + 0xe] }
	__asm { jge L_00afd2dc }
	__asm { L_00afd2d9: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_00afd2dc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x00afdd70
extern "C" __declspec(naked) void asm_00afdd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { jne L_00afddc1 }
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
	__asm { L_00afddc1: }
	__asm { add eax, 8 }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d0e4[];
extern "C" char g_0130d0e8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00afedd0
extern "C" __declspec(naked) void asm_00afedd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5330e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130d0e8] }
	__asm { test al, 1 }
	__asm { jne L_00afee43 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d0e8], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00afee2e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130d0e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00afee2e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130d0e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00afee43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130d0e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00838390();
// FUNCTION: ROBLOXSTUDIO 0x00b00800
extern "C" __declspec(naked) void asm_00b00800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00b00851 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00b00820 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00b00822 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00b00822 }
	__asm { L_00b00820: }
	__asm { mov eax, ecx }
	__asm { L_00b00822: }
	__asm { test eax, eax }
	__asm { je L_00b00851 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b00851 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00b00851 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b00851 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00838390 }
	__asm { L_00b00851: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5e80[];
extern "C" void fn_004115f0();
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b00ef0
extern "C" __declspec(naked) void asm_00b00ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24a2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x820ac0 }
	__asm { push 0x12f3020 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5e80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b00f51 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b00f51: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5df8 }
	__asm { push 2 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00b00f78 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b00f78: }
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

extern "C" char g_012e4c00[];
extern "C" char g_012e8d3c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b01800
extern "C" __declspec(naked) void asm_00b01800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec156c }
	__asm { mov dword ptr [esi + 4], 0xec15e4 }
	__asm { mov dword ptr [esi + 0x18], 0xec15ec }
	__asm { mov dword ptr [esi + 0x1c], 0xec15f8 }
	__asm { mov eax, dword ptr [g_012e8d3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b01899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8d3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec1558 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8c10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b01899: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8c10 }
	__asm { inc dword ptr [g_012e4c00] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b02c30
extern "C" __declspec(naked) void asm_00b02c30()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { test esi, esi }
	__asm { je L_00b02c65 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b02c4b }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02c4b: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02c65: }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00b02ca1 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b02c87 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02c87: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02ca1: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b03090();
// FUNCTION: ROBLOXSTUDIO 0x00b02ef0
extern "C" __declspec(naked) void asm_00b02ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b02f3e }
	__asm { test al, 1 }
	__asm { jne L_00b02f37 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x60] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b02f37 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b02f37: }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { L_00b02f3e: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00b02f60
extern "C" __declspec(naked) void asm_00b02f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39858 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b02fad }
	__asm { test al, 1 }
	__asm { jne L_00b02fa6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b02fa6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b02fa6: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00b02fad: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b03090();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b03640
extern "C" __declspec(naked) void asm_00b03640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b03691 }
	__asm { test al, 1 }
	__asm { jne L_00b0368a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x60] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b0368a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b0368a: }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { L_00b03691: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b036ae }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b036ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f5e80[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b03a90
extern "C" __declspec(naked) void asm_00b03a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b03ab4 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00b03ab4: }
	__asm { push 0x820ac0 }
	__asm { push 0x12f3020 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5e80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b03afc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b03afc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5df8 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96c0[];
extern "C" char g_012f96c4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b05c40
extern "C" __declspec(naked) void asm_00b05c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd53dee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834cd0 }
	__asm { push 0x12f9510 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f96c4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b05ca2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96c4], eax }
	__asm { push 0xec1554 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f96c0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b05ca2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f96c0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" void fn_00841fd0();
extern "C" void fn_0096e8d0();
// FUNCTION: ROBLOXSTUDIO 0x00b06830
extern "C" __declspec(naked) void asm_00b06830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ae08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_00b0685c }
	__asm { xor ecx, ecx }
	__asm { jmp L_00b0686c }
	__asm { L_00b0685c: }
	__asm { mov ecx, edx }
	__asm { push esi }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00b06862: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00b06862 }
	__asm { sub ecx, esi }
	__asm { pop esi }
	__asm { L_00b0686c: }
	__asm { lea eax, [ecx + edx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0096e8d0 }
	__asm { test al, al }
	__asm { je L_00b06893 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b06893: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x2c], 0xe5d3b8 }
	__asm { mov dword ptr [ebp - 0x20], 0x127a900 }
	__asm { mov dword ptr [ebp - 0x1c], 0x12be4a4 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00841fd0 }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08bf0
extern "C" __declspec(naked) void asm_00b08bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675e0 }
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
	__asm { je L_00b08c65 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00b08c65: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { jb L_00b08c7d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08c7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb440();
extern "C" void fn_00b08bf0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08db0
extern "C" __declspec(naked) void asm_00b08db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675e0 }
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
	__asm { call fn_00b08bf0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b08e1d }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov bl, 1 }
	__asm { jmp L_00b08e1f }
	__asm { L_00b08e1d: }
	__asm { xor bl, bl }
	__asm { L_00b08e1f: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b08e30 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08e30: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00405b90();
extern "C" void fn_007d8220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08e50
extern "C" __declspec(naked) void asm_00b08e50()
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
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { mov edi, eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007d8220 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b08ec6 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08ec6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00405b90();
extern "C" void fn_007d8220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b09180
extern "C" __declspec(naked) void asm_00b09180()
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
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { mov edi, eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007d8220 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b091f6 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b091f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130d870[];
extern "C" char g_0130d874[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0a050
extern "C" __declspec(naked) void asm_00b0a050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd543be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130d874] }
	__asm { test al, 1 }
	__asm { jne L_00b0a092 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d874], eax }
	__asm { push 0xec2358 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d870], eax }
	__asm { L_00b0a092: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d870[];
extern "C" char g_0130d874[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0a0a0
extern "C" __declspec(naked) void asm_00b0a0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd543be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb0a050 }
	__asm { push 0x130d848 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130d874] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b0a102 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d874], eax }
	__asm { push 0xec2358 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d870], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0a102: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130d870] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083c360();
// FUNCTION: ROBLOXSTUDIO 0x00b0a120
extern "C" __declspec(naked) void asm_00b0a120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00b0a171 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00b0a140 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00b0a142 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00b0a142 }
	__asm { L_00b0a140: }
	__asm { mov eax, ecx }
	__asm { L_00b0a142: }
	__asm { test eax, eax }
	__asm { je L_00b0a171 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00b0a171 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00b0a171 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00b0a171 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083c360 }
	__asm { L_00b0a171: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d34[];
extern "C" char g_012e58f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b0a3d0
extern "C" __declspec(naked) void asm_00b0a3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd543e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec2364 }
	__asm { mov dword ptr [esi + 4], 0xec23dc }
	__asm { mov dword ptr [esi + 0x18], 0xec23e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xec23f0 }
	__asm { mov eax, dword ptr [g_012e58f4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b0a469 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101a1bc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b0a469: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e57c8 }
	__asm { inc dword ptr [g_012e4d34] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e58f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b0a630
extern "C" __declspec(naked) void asm_00b0a630()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b0a6a5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101a1bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b0a6a5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e57c8 }
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

extern "C" char g_00e10528[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b0af50
extern "C" __declspec(naked) void asm_00b0af50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ecx + 0x8c], 0 }
	__asm { jne L_00b0af8c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b0afa6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b0af95 }
	__asm { push 0x126 }
	__asm { push 0xec27b4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b0afa6 }
	__asm { jmp L_00b0af90 }
	__asm { L_00b0af8c: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0af90: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b0af95: }
	__asm { movzx eax, al }
	__asm { push 0xec27f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b0afa6: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xec2848 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00b0b7d0
extern "C" __declspec(naked) void asm_00b0b7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x30 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00b0b7e4 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00b0b7e6 }
	__asm { L_00b0b7e4: }
	__asm { xor eax, eax }
	__asm { L_00b0b7e6: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
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
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b0b820
extern "C" __declspec(naked) void asm_00b0b820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b0b83b }
	__asm { add eax, -0x1c }
	__asm { jmp L_00b0b83d }
	__asm { L_00b0b83b: }
	__asm { xor eax, eax }
	__asm { L_00b0b83d: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [esi], 0xe461dc }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0127c0f8[];
extern "C" void fn_00afd790();
extern "C" void fn_00b0a120();
// FUNCTION: ROBLOXSTUDIO 0x00b0b890
extern "C" __declspec(naked) void asm_00b0b890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0xa8] }
	__asm { cmp byte ptr [g_0127c0f8], 0 }
	__asm { je L_00b0b8d0 }
	__asm { push dword ptr [esi + 0x8c] }
	__asm { call fn_00b0a120 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b0b8e6 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00afd790 }
	__asm { cvttss2si eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0b8d0: }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { test eax, eax }
	__asm { je L_00b0b8e6 }
	__asm { movsx eax, word ptr [eax + 0x88] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0b8e6: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0127c0f8[];
extern "C" void fn_00afd790();
extern "C" void fn_00b0a120();
// FUNCTION: ROBLOXSTUDIO 0x00b0b8f0
extern "C" __declspec(naked) void asm_00b0b8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0xa8] }
	__asm { cmp byte ptr [g_0127c0f8], 0 }
	__asm { je L_00b0b931 }
	__asm { push dword ptr [esi + 0x8c] }
	__asm { call fn_00b0a120 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b0b947 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00afd790 }
	__asm { cvttss2si eax, dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0b931: }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { test eax, eax }
	__asm { je L_00b0b947 }
	__asm { movsx eax, word ptr [eax + 0x8a] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0b947: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d904[];
extern "C" char g_0130d908[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0c2d0
extern "C" __declspec(naked) void asm_00b0c2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5478e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130d908] }
	__asm { test al, 1 }
	__asm { jne L_00b0c312 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d908], eax }
	__asm { push 0xec28fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d904], eax }
	__asm { L_00b0c312: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d904[];
extern "C" char g_0130d908[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0c4a0
extern "C" __declspec(naked) void asm_00b0c4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5478e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb0c2d0 }
	__asm { push 0x130d8fc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130d908] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b0c502 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d908], eax }
	__asm { push 0xec28fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d904], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0c502: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130d904] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d980[];
extern "C" char g_0130d984[];
extern "C" char g_0130d988[];
extern "C" char g_0130d98c[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0cb20
extern "C" __declspec(naked) void asm_00b0cb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5486e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130d98c] }
	__asm { test al, 1 }
	__asm { jne L_00b0cb62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d98c], eax }
	__asm { push 0xec2be0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d988], eax }
	__asm { L_00b0cb62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5488e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130d984] }
	__asm { test al, 1 }
	__asm { jne L_00b0cbb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d984], eax }
	__asm { push 0xec2bdc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d980], eax }
	__asm { L_00b0cbb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d988[];
extern "C" char g_0130d98c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0cd50
extern "C" __declspec(naked) void asm_00b0cd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5486e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb0cb20 }
	__asm { push 0x130d978 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130d98c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b0cdb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d98c], eax }
	__asm { push 0xec2be0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d988], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0cdb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130d988] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d980[];
extern "C" char g_0130d984[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0cdd0
extern "C" __declspec(naked) void asm_00b0cdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5488e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb0cb70 }
	__asm { push 0x130d970 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130d984] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b0ce32 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d984], eax }
	__asm { push 0xec2bdc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d980], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0ce32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130d980] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00b0d0b0
extern "C" __declspec(naked) void asm_00b0d0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00b0d0dd }
	__asm { push 0 }
	__asm { push 0x11f9cf4 }
	__asm { push 0x12bc2e4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_00b0d0df }
	__asm { jmp L_00b0d0f8 }
	__asm { L_00b0d0dd: }
	__asm { xor eax, eax }
	__asm { L_00b0d0df: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b0d0f8: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b0d1f0
extern "C" __declspec(naked) void asm_00b0d1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00b0d245 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_00b0d203: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b0d23d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b0d23d: }
	__asm { add esi, 0xc }
	__asm { cmp esi, edi }
	__asm { jne L_00b0d203 }
	__asm { pop ebx }
	__asm { L_00b0d245: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d99c[];
extern "C" char g_0130d9a0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0d430
extern "C" __declspec(naked) void asm_00b0d430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd549be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130d9a0] }
	__asm { test al, 1 }
	__asm { jne L_00b0d472 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d9a0], eax }
	__asm { push 0xec3070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d99c], eax }
	__asm { L_00b0d472: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d99c[];
extern "C" char g_0130d9a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b0dea0
extern "C" __declspec(naked) void asm_00b0dea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd549be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb0d430 }
	__asm { push 0x130d994 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130d9a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b0df02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d9a0], eax }
	__asm { push 0xec3070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d99c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b0df02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130d99c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e790c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b0ec70
extern "C" __declspec(naked) void asm_00b0ec70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54a3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e790c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b0ece5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e790c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec379c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e77e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b0ece5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e77e0 }
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

extern "C" char g_012e4bc0[];
extern "C" char g_012e7c9c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b0f340
extern "C" __declspec(naked) void asm_00b0f340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54b16 }
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
	__asm { mov dword ptr [esi], 0xec38c4 }
	__asm { mov dword ptr [esi + 4], 0xec393c }
	__asm { mov dword ptr [esi + 0x18], 0xec3944 }
	__asm { mov dword ptr [esi + 0x1c], 0xec3950 }
	__asm { mov eax, dword ptr [g_012e7c9c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b0f3da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e7c9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec38b4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7b70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7770 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b0f3da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7b70 }
	__asm { inc dword ptr [g_012e4bc0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_006a41d0();
extern "C" void fn_00b0f340();
extern "C" void fn_00b0fbb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b0fa00
extern "C" __declspec(naked) void asm_00b0fa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54ba8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xec38b4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00b0f340 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xec3964 }
	__asm { mov dword ptr [esi + 4], 0xec39dc }
	__asm { mov dword ptr [esi + 0x18], 0xec39e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xec39f0 }
	__asm { call fn_006a41d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x7c], 0x3e8 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b0fbb0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e1033c] }
}

extern "C" char g_012f9678[];
extern "C" char g_012f967c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b100b0
extern "C" __declspec(naked) void asm_00b100b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd54c3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834e10 }
	__asm { push 0x12f94c8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f967c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b10112 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f967c], eax }
	__asm { push 0xec38b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9678], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b10112: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9678] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4be0[];
extern "C" char g_012e861c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b10500
extern "C" __declspec(naked) void asm_00b10500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54c66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec3afc }
	__asm { mov dword ptr [esi + 4], 0xec3b74 }
	__asm { mov dword ptr [esi + 0x18], 0xec3b7c }
	__asm { mov dword ptr [esi + 0x1c], 0xec3b88 }
	__asm { mov eax, dword ptr [g_012e861c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b10599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e861c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec3ae4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e84f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b10599: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e84f0 }
	__asm { inc dword ptr [g_012e4be0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x00b105c0
extern "C" __declspec(naked) void asm_00b105c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi], 0xec3c38 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00b105fa }
	__asm { sub eax, 4 }
	__asm { L_00b105fa: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088b9e0();
extern "C" void fn_008935b0();
// FUNCTION: ROBLOXSTUDIO 0x00b108d0
extern "C" __declspec(naked) void asm_00b108d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movzx eax, byte ptr [ecx + 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 4] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { lea esi, [edi + 1] }
	__asm { add esi, eax }
	__asm { je L_00b108ed }
	__asm { inc esi }
	__asm { jmp L_00b108ef }
	__asm { L_00b108ed: }
	__asm { xor esi, esi }
	__asm { L_00b108ef: }
	__asm { test edx, edx }
	__asm { jne L_00b108f7 }
	__asm { xor eax, eax }
	__asm { jmp L_00b10900 }
	__asm { L_00b108f7: }
	__asm { push edx }
	__asm { call fn_008935b0 }
	__asm { add esp, 4 }
	__asm { L_00b10900: }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088b9e0 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de655[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_00b109c0();
// FUNCTION: ROBLOXSTUDIO 0x00b10930
extern "C" __declspec(naked) void asm_00b10930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de655] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b10955 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xec3d08 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b10955: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_00b109c0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test cl, cl }
	__asm { je L_00b109ad }
	__asm { cmp eax, 1 }
	__asm { je L_00b109ad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b1099c }
	__asm { push 0x103 }
	__asm { push 0xe54bd0 }
	__asm { push 0xec3d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b109ad }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b1099c: }
	__asm { movzx eax, cl }
	__asm { push 0xec3d28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b109ad: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f9680[];
extern "C" char g_012f9684[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b10a90
extern "C" __declspec(naked) void asm_00b10a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25f4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834e60 }
	__asm { push 0x12f94d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9684] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b10af2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9684], eax }
	__asm { push 0xec3af0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9680], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b10af2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9680] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4be4[];
extern "C" char g_012e89ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b11170
extern "C" __declspec(naked) void asm_00b11170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54d36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec3f2c }
	__asm { mov dword ptr [esi + 4], 0xec3fa4 }
	__asm { mov dword ptr [esi + 0x18], 0xec3fac }
	__asm { mov dword ptr [esi + 0x1c], 0xec3fb8 }
	__asm { mov eax, dword ptr [g_012e89ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b11209 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e89ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec3f14 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8880 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b11209: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8880 }
	__asm { inc dword ptr [g_012e4be4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b11490
extern "C" __declspec(naked) void asm_00b11490()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x34] }
	__asm { test esi, esi }
	__asm { je L_00b114c5 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b114ab }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b114ab: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b114c5: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00b114f6 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b114dc }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b114dc: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b114f6: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012f9670[];
extern "C" char g_012f9674[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b11a00
extern "C" __declspec(naked) void asm_00b11a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2680e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834dc0 }
	__asm { push 0x12f94c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9674] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b11a62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9674], eax }
	__asm { push 0xec3f24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9670], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b11a62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9670] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4bcc[];
extern "C" char g_012eac1c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b11a80
extern "C" __declspec(naked) void asm_00b11a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e66 }
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
	__asm { mov dword ptr [esi], 0xec4114 }
	__asm { mov dword ptr [esi + 4], 0xec418c }
	__asm { mov dword ptr [esi + 0x18], 0xec4194 }
	__asm { mov dword ptr [esi + 0x1c], 0xec41a0 }
	__asm { mov eax, dword ptr [g_012eac1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b11b1a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eac1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec4100 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eaaf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b11b1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eaaf0 }
	__asm { inc dword ptr [g_012e4bcc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00b11b40
extern "C" __declspec(naked) void asm_00b11b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00b11b75 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00b11b7f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00b11b7f }
	__asm { L_00b11b75: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b11b7f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00985e80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b12100
extern "C" __declspec(naked) void asm_00b12100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54ea1 }
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
	__asm { je L_00b12166 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_00b12166: }
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

extern "C" void fn_007b00e0();
extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b13f00
extern "C" __declspec(naked) void asm_00b13f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0xec41b4 }
	__asm { mov dword ptr [edi + 4], 0xec422c }
	__asm { mov dword ptr [edi + 0x18], 0xec4234 }
	__asm { mov dword ptr [edi + 0x1c], 0xec4240 }
	__asm { cmp dword ptr [edi + 0x8c], 0x10 }
	__asm { jb L_00b13f37 }
	__asm { push dword ptr [edi + 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b13f37: }
	__asm { mov dword ptr [edi + 0x8c], 0xf }
	__asm { mov dword ptr [edi + 0x88], 0 }
	__asm { mov byte ptr [edi + 0x78], 0 }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [edi + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [edi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call fn_007b00e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9640[];
extern "C" char g_012f9644[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b14460
extern "C" __declspec(naked) void asm_00b14460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd267ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834d20 }
	__asm { push 0x12f9490 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9644] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b144c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9644], eax }
	__asm { push 0xec40f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9640], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b144c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9640] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402ec0();
extern "C" void fn_00860040();
extern "C" void fn_009a7290();
extern "C" void fn_00b11e50();
extern "C" void fn_00b13320();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1476a
extern "C" __declspec(naked) void asm_00b1476a()
{
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_00402ec0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0xb14cf0 }
	__asm { push esi }
	__asm { call fn_00b13320 }
	__asm { add esp, 0x28 }
	__asm { mov ecx, edi }
	__asm { call fn_00b11e50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00860040 }
	__asm { xor bl, bl }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00b147c2 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b147c2: }
	__asm { mov al, bl }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b13fa0();
extern "C" void fn_00b68b70();
extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b14be0
extern "C" __declspec(naked) void asm_00b14be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b68b70 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [edi + 0x70] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00b69050 }
	__asm { mov al, byte ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x68] }
	__asm { call fn_00b13fa0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00b14c58 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b14c58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b14c90
extern "C" __declspec(naked) void asm_00b14c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x78 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00b14cc3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b14cc3: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b14cd4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b14cd4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00412c00();
extern "C" void fn_004278c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b15040
extern "C" __declspec(naked) void asm_00b15040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x10], 0x400 }
	__asm { jbe L_00b150a7 }
	__asm { push edi }
	__asm { push 0x400 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_00b15095 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b1507c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1507c: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_00b15095: }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { pop edi }
	__asm { jb L_00b150a7 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b150a7: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b08[];
extern "C" char g_012eb59c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b150b0
extern "C" __declspec(naked) void asm_00b150b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55216 }
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
	__asm { mov dword ptr [esi], 0xec42d4 }
	__asm { mov dword ptr [esi + 4], 0xec434c }
	__asm { mov dword ptr [esi + 0x18], 0xec4354 }
	__asm { mov dword ptr [esi + 0x1c], 0xec4360 }
	__asm { mov eax, dword ptr [g_012eb59c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1514a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb59c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe8cf24 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb470 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1514a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eb470 }
	__asm { inc dword ptr [g_012e4b08] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b5b160();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b15580
extern "C" __declspec(naked) void asm_00b15580()
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
	__asm { lea ecx, [esi + 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b155cb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b155cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f9690[];
extern "C" char g_012f9694[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b156a0
extern "C" __declspec(naked) void asm_00b156a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5524e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834f00 }
	__asm { push 0x12f94e0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9694] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b15702 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9694], eax }
	__asm { push 0xec42c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9690], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b15702: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9690] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dca8[];
extern "C" char g_0130dcac[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b16070
extern "C" __declspec(naked) void asm_00b16070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5530e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130dcac] }
	__asm { test al, 1 }
	__asm { jne L_00b160b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130dcac], eax }
	__asm { push 0xec4540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dca8], eax }
	__asm { L_00b160b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dca8[];
extern "C" char g_0130dcac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b16560
extern "C" __declspec(naked) void asm_00b16560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5530e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb16070 }
	__asm { push 0x130dca0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130dcac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b165c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130dcac], eax }
	__asm { push 0xec4540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dca8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b165c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130dca8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4cdc[];
extern "C" char g_012ebb8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b17490
extern "C" __declspec(naked) void asm_00b17490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd553c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec473c }
	__asm { mov dword ptr [esi + 4], 0xec47b4 }
	__asm { mov dword ptr [esi + 0x18], 0xec47bc }
	__asm { mov dword ptr [esi + 0x1c], 0xec47c8 }
	__asm { mov eax, dword ptr [g_012ebb8c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b17529 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebb8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec4724 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eba60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b17529: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eba60 }
	__asm { inc dword ptr [g_012e4cdc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96a0[];
extern "C" char g_012f96a4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b17c50
extern "C" __declspec(naked) void asm_00b17c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2686e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x834fa0 }
	__asm { push 0x12f94f0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f96a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b17cb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96a4], eax }
	__asm { push 0xec4734 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f96a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b17cb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f96a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b30[];
extern "C" char g_012ebcbc[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00928230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b187c0
extern "C" __declspec(naked) void asm_00b187c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55616 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00928230 }
	__asm { mov dword ptr [esi], 0xec4bdc }
	__asm { mov dword ptr [esi + 4], 0xec4c78 }
	__asm { mov dword ptr [esi + 0x18], 0xec4c80 }
	__asm { mov dword ptr [esi + 0x1c], 0xec4c8c }
	__asm { mov dword ptr [esi + 0x64], 0xec4c9c }
	__asm { mov eax, dword ptr [g_012ebcbc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1885e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebcbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec4bc4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12ebb90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1885e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ebb90 }
	__asm { inc dword ptr [g_012e4b30] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9638[];
extern "C" char g_012f963c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b18a60
extern "C" __declspec(naked) void asm_00b18a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25f6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x835040 }
	__asm { push 0x12f9488 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f963c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b18ac2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f963c], eax }
	__asm { push 0xec4bd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9638], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b18ac2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9638] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00b1a2f0
extern "C" __declspec(naked) void asm_00b1a2f0()
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
	__asm { je L_00b1a351 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_00b1a310: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00b1a31b }
	__asm { add esi, -0x1c }
	__asm { jmp L_00b1a31d }
	__asm { L_00b1a31b: }
	__asm { xor esi, esi }
	__asm { L_00b1a31d: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00b1a338 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { jmp L_00b1a34a }
	__asm { L_00b1a338: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea edx, [esi + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00b1a34a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00b1a310 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00b1a351: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130de44[];
extern "C" char g_0130de48[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b1a360
extern "C" __declspec(naked) void asm_00b1a360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd557be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130de48] }
	__asm { test al, 1 }
	__asm { jne L_00b1a3d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130de48], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b1a3be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130de44], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1a3be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130de44], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1a3d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130de44] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dee8[];
extern "C" char g_0130deec[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1a7c0
extern "C" __declspec(naked) void asm_00b1a7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd557fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130deec] }
	__asm { test al, 1 }
	__asm { jne L_00b1a802 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130deec], eax }
	__asm { push 0xec5494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dee8], eax }
	__asm { L_00b1a802: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d38[];
extern "C" char g_012ecafc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811c10();
extern "C" void fn_00b0a6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1a810
extern "C" __declspec(naked) void asm_00b1a810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55826 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0a6e0 }
	__asm { mov dword ptr [esi], 0xec549c }
	__asm { mov dword ptr [esi + 4], 0xec554c }
	__asm { mov dword ptr [esi + 0x18], 0xec5554 }
	__asm { mov dword ptr [esi + 0x1c], 0xec5560 }
	__asm { mov eax, dword ptr [g_012ecafc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1a8a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecafc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec5488 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00811c10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec9d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1a8a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ec9d0 }
	__asm { inc dword ptr [g_012e4d38] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dee8[];
extern "C" char g_0130deec[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1a9a0
extern "C" __declspec(naked) void asm_00b1a9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd557fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb1a7c0 }
	__asm { push 0x130dee0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130deec] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b1aa02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130deec], eax }
	__asm { push 0xec5494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dee8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1aa02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130dee8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300d70[];
extern "C" void fn_007cb440();
extern "C" void fn_00b0b200();
// FUNCTION: ROBLOXSTUDIO 0x00b1aa20
extern "C" __declspec(naked) void asm_00b1aa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_01300d70], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00b1aa66 }
	__asm { push esi }
	__asm { call fn_00b0b200 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b1aa66: }
	__asm { mov ecx, dword ptr [ecx + 0x90] }
	__asm { test ecx, ecx }
	__asm { jne L_00b1aa9a }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov byte ptr [esi], cl }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b1aa9a: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [edx + 0x50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130defc[];
extern "C" char g_0130df00[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1abc0
extern "C" __declspec(naked) void asm_00b1abc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5588e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130df00] }
	__asm { test al, 1 }
	__asm { jne L_00b1ac02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130df00], eax }
	__asm { push 0xec5674 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130defc], eax }
	__asm { L_00b1ac02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e18[];
extern "C" char g_012ecc2c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811c10();
extern "C" void fn_00b0a6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1ac10
extern "C" __declspec(naked) void asm_00b1ac10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55876 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0a6e0 }
	__asm { mov dword ptr [esi], 0xec567c }
	__asm { mov dword ptr [esi + 4], 0xec572c }
	__asm { mov dword ptr [esi + 0x18], 0xec5734 }
	__asm { mov dword ptr [esi + 0x1c], 0xec5740 }
	__asm { mov eax, dword ptr [g_012ecc2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1aca7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecc2c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec5668 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00811c10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecb00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1aca7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ecb00 }
	__asm { inc dword ptr [g_012e4e18] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130defc[];
extern "C" char g_0130df00[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1ad50
extern "C" __declspec(naked) void asm_00b1ad50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5588e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb1abc0 }
	__asm { push 0x130def4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130df00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b1adb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130df00], eax }
	__asm { push 0xec5674 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130defc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1adb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130defc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ee51c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1b050
extern "C" __declspec(naked) void asm_00b1b050()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00b1b0c5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee51c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec5828 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee3f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b1b0c5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12ee3f0 }
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

extern "C" char g_012e4c6c[];
extern "C" char g_012eeb0c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1b300
extern "C" __declspec(naked) void asm_00b1b300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55906 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec5904 }
	__asm { mov dword ptr [esi + 4], 0xec597c }
	__asm { mov dword ptr [esi + 0x18], 0xec5984 }
	__asm { mov dword ptr [esi + 0x1c], 0xec5990 }
	__asm { mov eax, dword ptr [g_012eeb0c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1b399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eeb0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec58e0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee9e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1b399: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ee9e0 }
	__asm { inc dword ptr [g_012e4c6c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96d0[];
extern "C" char g_012f96d4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1b5d0
extern "C" __declspec(naked) void asm_00b1b5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5593e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x835180 }
	__asm { push 0x12f9520 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f96d4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b1b632 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96d4], eax }
	__asm { push 0xec58dc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f96d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1b632: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f96d0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1b650
extern "C" __declspec(naked) void asm_00b1b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub ecx, -0x80 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00b1b683 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b1b683: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b1b694 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1b694: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e4d70[];
extern "C" char g_012ef364[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1b6b0
extern "C" __declspec(naked) void asm_00b1b6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55966 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec5a84 }
	__asm { mov dword ptr [esi + 4], 0xec5afc }
	__asm { mov dword ptr [esi + 0x18], 0xec5b04 }
	__asm { mov dword ptr [esi + 0x1c], 0xec5b10 }
	__asm { mov eax, dword ptr [g_012ef364] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1b749 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef364], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec5a70 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef238 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1b749: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef238 }
	__asm { inc dword ptr [g_012e4d70] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa58c[];
extern "C" char g_012fa590[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1ba40
extern "C" __declspec(naked) void asm_00b1ba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x864680 }
	__asm { push 0x12fa56c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fa590] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b1baa2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fa590], eax }
	__asm { push 0xec5a6c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fa58c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1baa2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fa58c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e0c8[];
extern "C" char g_0130e0cc[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1c060
extern "C" __declspec(naked) void asm_00b1c060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd55a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e0cc] }
	__asm { test al, 1 }
	__asm { jne L_00b1c0a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e0cc], eax }
	__asm { push 0xec5bd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e0c8], eax }
	__asm { L_00b1c0a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0086b050();
extern "C" void fn_0086b250();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1c2d0
extern "C" __declspec(naked) void asm_00b1c2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55ad6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x2ac] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0086b050 }
	__asm { cmp dword ptr [esi + 0x2a8], 0x10 }
	__asm { jb L_00b1c318 }
	__asm { push dword ptr [esi + 0x294] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1c318: }
	__asm { mov dword ptr [esi + 0x2a8], 0xf }
	__asm { mov dword ptr [esi + 0x2a4], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x294], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0086b250 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b1c350 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1c350: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130e0c8[];
extern "C" char g_0130e0cc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1c370
extern "C" __declspec(naked) void asm_00b1c370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd55a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb1c060 }
	__asm { push 0x130e0c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e0cc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b1c3d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e0cc], eax }
	__asm { push 0xec5bd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e0c8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b1c3d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130e0c8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1c590
extern "C" __declspec(naked) void asm_00b1c590()
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
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x294] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_00b1c5f7 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00b1c5eb }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00b1c5eb: }
	__asm { push 0x130e090 }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_00b1c5f7: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b1c608 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1c608: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1c670
extern "C" __declspec(naked) void asm_00b1c670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b1c6fa }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1c6fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0130e21c[];
extern "C" char g_0130e220[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b1c710
extern "C" __declspec(naked) void asm_00b1c710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd55cee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130e220] }
	__asm { test al, 1 }
	__asm { jne L_00b1c752 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e220], eax }
	__asm { push 0xec5ee4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e21c], eax }
	__asm { L_00b1c752: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c9c[];
extern "C" char g_012f0074[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b1cf80
extern "C" __declspec(naked) void asm_00b1cf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55b66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xec5eec }
	__asm { mov dword ptr [esi + 4], 0xec5f64 }
	__asm { mov dword ptr [esi + 0x18], 0xec5f6c }
	__asm { mov dword ptr [esi + 0x1c], 0xec5f78 }
	__asm { mov eax, dword ptr [g_012f0074] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00b1d019 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0074], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec5ed4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eff48 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b1d019: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eff48 }
	__asm { inc dword ptr [g_012e4c9c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
