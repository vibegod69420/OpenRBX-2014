// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d304[];
extern "C" void fn_0040bb80();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087ff80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087f4b0
extern "C" __declspec(naked) void asm_0087f4b0()
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
	__asm { call fn_0087ff80 }
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
	__asm { jne L_0087f56c }
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
	__asm { L_0087f56c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe651d0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087f5ea }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087f5ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087f5d5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087f5ea }
	__asm { L_0087f5d5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087f5ea: }
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
extern "C" void fn_0040ba00();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087ffd0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087f600
extern "C" __declspec(naked) void asm_0087f600()
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
	__asm { call fn_0087ffd0 }
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
	__asm { jne L_0087f6bc }
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
	__asm { L_0087f6bc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64fb0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087f73a }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087f73a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087f725 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087f73a }
	__asm { L_0087f725: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087f73a: }
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
extern "C" void fn_0087b310();
extern "C" void fn_00880020();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087f750
extern "C" __declspec(naked) void asm_0087f750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b476 }
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
	__asm { call fn_00880020 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087f80c }
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
	__asm { L_0087f80c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe652b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087f88a }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087f88a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087f875 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087f88a }
	__asm { L_0087f875: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087f88a: }
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
extern "C" void fn_0040ba00();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00880070();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087f8a0
extern "C" __declspec(naked) void asm_0087f8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b4a6 }
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
	__asm { call fn_00880070 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087f95c }
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
	__asm { L_0087f95c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64fb0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087f9da }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087f9da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087f9c5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087f9da }
	__asm { L_0087f9c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087f9da: }
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
extern "C" void fn_0040ba00();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008800c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087f9f0
extern "C" __declspec(naked) void asm_0087f9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b4d6 }
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
	__asm { call fn_008800c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0087faaf }
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
	__asm { L_0087faaf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d308 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe64fb0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0087fb2d }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0087fb2d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0087fb18 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0087fb2d }
	__asm { L_0087fb18: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0087fb2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4dd4[];
extern "C" char g_0131d304[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00869c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0087fb40
extern "C" __declspec(naked) void asm_0087fb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b4f6 }
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
	__asm { mov dword ptr [esi], 0xe64bdc }
	__asm { mov dword ptr [esi + 4], 0xe64c94 }
	__asm { mov dword ptr [esi + 0x18], 0xe64c9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe64ca8 }
	__asm { mov dword ptr [esi + 0x64], 0xe64cb8 }
	__asm { mov dword ptr [esi + 0x68], 0xe64cc0 }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0087fbe9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe64bcc }
	__asm { mov byte ptr [ebp - 4], 1 }
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
	__asm { L_0087fbe9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d308 }
	__asm { inc dword ptr [g_012e4dd4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00881aa0();
// FUNCTION: ROBLOXSTUDIO 0x0087fc10
extern "C" __declspec(naked) void asm_0087fc10()
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
	__asm { je L_0087fc5b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0087fc5b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0087fcae }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe654fc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe65504 }
	__asm { mov dword ptr [esi + 8], 0xe65514 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe6551c }
	__asm { mov dword ptr [esi + 8], 0xe6552c }
	__asm { jmp L_0087fcb0 }
	__asm { L_0087fcae: }
	__asm { xor esi, esi }
	__asm { L_0087fcb0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00881aa0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0087fccd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0087fccd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_008251b0();
extern "C" void fn_008801f0();
// FUNCTION: ROBLOXSTUDIO 0x00880120
extern "C" __declspec(naked) void asm_00880120()
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
	__asm { call fn_008801f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe65034 }
	__asm { call fn_007d5d30 }
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
	__asm { jae L_008801b2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008801b2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_008801d5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008801d5: }
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
extern "C" char g_0131d304[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008802a0
extern "C" __declspec(naked) void asm_008802a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b536 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0088031a }
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
	__asm { L_0088031a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131d308 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6500c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00880392 }
	__asm { push 0x12076f4 }
	__asm { mov ecx, 0x12076f4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00880392 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0088037d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00880392 }
	__asm { L_0088037d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00880392: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00881720
extern "C" __declspec(naked) void asm_00881720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { test al, al }
	__asm { je L_0088177b }
	__asm { cmp dword ptr [edi + 0x310], 0 }
	__asm { jge L_0088177b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0088176a }
	__asm { push 0x1f9 }
	__asm { push 0xe652f0 }
	__asm { push 0xe65420 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088177b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0088176a: }
	__asm { movzx eax, al }
	__asm { push 0xe65498 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088177b: }
	__asm { cmp dword ptr [edi + 0x310], 0 }
	__asm { mov edx, dword ptr [edi + 0x2fc] }
	__asm { lea esi, [edi + 0x310] }
	__asm { lea ecx, [ebp - 4] }
	__asm { cmovg ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 8] }
	__asm { cmovge eax, ecx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x2ec] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_004601a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008817e0
extern "C" __declspec(naked) void asm_008817e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b689 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00881858 }
	__asm { cmp dword ptr [ebx + 0x310], 0 }
	__asm { jge L_00881858 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00881847 }
	__asm { push 0x1ec }
	__asm { push 0xe652f0 }
	__asm { push 0xe65420 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00881858 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00881847: }
	__asm { movzx eax, al }
	__asm { push 0xe65430 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00881858: }
	__asm { cmp dword ptr [ebx + 0x310], 0 }
	__asm { mov edx, dword ptr [ebx + 0x2fc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea edi, [ebx + 0x310] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { cmovg ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmovge eax, ecx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x2ec] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { push 1 }
	__asm { push 0xe65490 }
	__asm { push dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { call fn_004601a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00881920
extern "C" __declspec(naked) void asm_00881920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00881943 }
	__asm { add eax, -0x1c }
	__asm { je L_00881943 }
	__asm { lea ecx, [eax + 0x298] }
	__asm { jmp L_00881945 }
	__asm { L_00881943: }
	__asm { xor ecx, ecx }
	__asm { L_00881945: }
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
	__asm { jae L_00881980 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0088198a }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0088198a }
	__asm { L_00881980: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0088198a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_008819b8 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008819b8: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_007c2020();
extern "C" void fn_0097aca0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00881c50
extern "C" __declspec(naked) void asm_00881c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 0x84], 0x76 }
	__asm { jne L_00881cb5 }
	__asm { push ecx }
	__asm { call fn_007c2020 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00881cb5 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0097aca0 }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov eax, esi }
	__asm { cmp esi, edx }
	__asm { je L_00881c9d }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ecx + 0x8c] }
	__asm { L_00881c92: }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { je L_00881cbf }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00881c92 }
	__asm { L_00881c9d: }
	__asm { test esi, esi }
	__asm { je L_00881cb5 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00881cb5: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00881cbf: }
	__asm { test esi, esi }
	__asm { je L_00881cd7 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00881cd7: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043aaf0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00880b10();
// FUNCTION: ROBLOXSTUDIO 0x00881cf0
extern "C" __declspec(naked) void asm_00881cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x330] }
	__asm { test eax, eax }
	__asm { je L_00881d09 }
	__asm { cmp eax, 1 }
	__asm { jne L_00881d90 }
	__asm { L_00881d09: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00880b10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x31c], eax }
	__asm { mov dword ptr [edi + 0x318], esi }
	__asm { mov byte ptr [edi + 0x320], bl }
	__asm { cmp esi, 2 }
	__asm { je L_00881d3c }
	__asm { mov dword ptr [edi + 0x330], 1 }
	__asm { L_00881d3c: }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00881d51 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00881d53 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00881d53 }
	__asm { L_00881d51: }
	__asm { mov eax, edi }
	__asm { L_00881d53: }
	__asm { test eax, eax }
	__asm { je L_00881d8e }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00881d8e }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00881d8e }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00881d8e }
	__asm { call fn_0043aaf0 }
	__asm { test eax, eax }
	__asm { je L_00881d8e }
	__asm { fld qword ptr [eax + 0x90] }
	__asm { fstp qword ptr [edi + 0x328] }
	__asm { L_00881d8e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00881d90: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004038a0();
extern "C" void fn_00412c00();
extern "C" void fn_004226b0();
extern "C" void fn_00545490();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_0087b850();
extern "C" void fn_0087fc10();
extern "C" void fn_00a46650();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008822f0
extern "C" __declspec(naked) void asm_008822f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00882334 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x2ec] }
	__asm { push 0xf12f2d }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [edi + 0x33c] }
	__asm { call fn_006b9e50 }
	__asm { L_00882334: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x290] }
	__asm { call fn_00a46650 }
	__asm { test ebx, ebx }
	__asm { je L_00882418 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x298] }
	__asm { call fn_0087b850 }
	__asm { lea esi, [edi + 0x2ec] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp esi, eax }
	__asm { je L_00882394 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0088237b }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_0088237b: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_00882394: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008823a5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008823a5: }
	__asm { mov ecx, ebx }
	__asm { call fn_00545490 }
	__asm { test eax, eax }
	__asm { je L_00882418 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x364] }
	__asm { mov dword ptr [ebp - 0x1c], 0x880e50 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_0087fc10 }
	__asm { mov esi, eax }
	__asm { add edi, 0x33c }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_008823fe }
	__asm { mov ecx, edi }
	__asm { call fn_006b9e50 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006b9b80 }
	__asm { L_008823fe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00882418 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00882418: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00532480();
extern "C" void fn_0067af70();
extern "C" void fn_007cd560();
extern "C" void fn_00875650();
extern "C" void fn_00882aa0();
// FUNCTION: ROBLOXSTUDIO 0x00882430
extern "C" __declspec(naked) void asm_00882430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [eax - 0x64] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test edi, edi }
	__asm { je L_00882489 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0088245a }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0088245c }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0088245c }
	__asm { L_0088245a: }
	__asm { mov eax, edi }
	__asm { L_0088245c: }
	__asm { test eax, eax }
	__asm { je L_00882489 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00882489 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00882489 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00882489 }
	__asm { call fn_0067af70 }
	__asm { jmp L_0088248b }
	__asm { L_00882489: }
	__asm { xor eax, eax }
	__asm { L_0088248b: }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebx - 0x2c] }
	__asm { cmp eax, ecx }
	__asm { je L_008824ee }
	__asm { test ecx, ecx }
	__asm { je L_008824a3 }
	__asm { push eax }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { jne L_008824ee }
	__asm { L_008824a3: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00875650 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x64], 9 }
	__asm { jne L_008824cb }
	__asm { cmp dword ptr [eax + 0x68], 2 }
	__asm { jne L_008824cb }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00882aa0 }
	__asm { L_008824cb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008824ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d694[];
extern "C" void fn_0040bc40();
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00884060();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008837a0
extern "C" __declspec(naked) void asm_008837a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b7c6 }
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
	__asm { call fn_00884060 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0088385c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65624 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0088385c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d698 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65ad4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008838da }
	__asm { push 0x1208718 }
	__asm { mov ecx, 0x1208718 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008838da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008838c5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008838da }
	__asm { L_008838c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008838da: }
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
extern "C" char g_0131d694[];
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008840b0();
extern "C" void fn_008841a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008838f0
extern "C" __declspec(naked) void asm_008838f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b796 }
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
	__asm { call fn_008840b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008839ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65624 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008839ac: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d698 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe659e4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00883a2a }
	__asm { push 0x1208718 }
	__asm { mov ecx, 0x1208718 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00883a2a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00883a15 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00883a2a }
	__asm { L_00883a15: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00883a2a: }
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
extern "C" char g_0131d694[];
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_00884100();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00883a40
extern "C" __declspec(naked) void asm_00883a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b796 }
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
	__asm { call fn_00884100 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00883afc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65624 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00883afc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d698 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65a28 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00883b7a }
	__asm { push 0x1208718 }
	__asm { mov ecx, 0x1208718 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00883b7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00883b65 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00883b7a }
	__asm { L_00883b65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00883b7a: }
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
extern "C" char g_0131d694[];
extern "C" void fn_0040bb80();
extern "C" void fn_0041ee10();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00884150();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00883b90
extern "C" __declspec(naked) void asm_00883b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b7c6 }
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
	__asm { call fn_00884150 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d694] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00883c4c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65624 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00883c4c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d698 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65a84 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00883cca }
	__asm { push 0x1208718 }
	__asm { mov ecx, 0x1208718 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00883cca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00883cb5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00883cca }
	__asm { L_00883cb5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00883cca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e4dc8[];
extern "C" char g_0131d694[];
extern "C" void fn_0041ee10();
extern "C" void fn_007cbf10();
extern "C" void fn_00869630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00883ce0
extern "C" __declspec(naked) void asm_00883ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b7e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869630 }
	__asm { mov dword ptr [esi], 0xe65634 }
	__asm { mov dword ptr [esi + 4], 0xe656ec }
	__asm { mov dword ptr [esi + 0x18], 0xe656f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe65700 }
	__asm { mov dword ptr [esi + 0x64], 0xe65710 }
	__asm { mov dword ptr [esi + 0x68], 0xe65718 }
	__asm { mov eax, dword ptr [g_0131d694] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00883d86 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65624 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00883d86: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d698 }
	__asm { inc dword ptr [g_012e4dc8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fafac[];
extern "C" char g_012fafb0[];
extern "C" char g_012fafb4[];
extern "C" char g_012fafb8[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00883db0
extern "C" __declspec(naked) void asm_00883db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fafb8] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00883e0c }
	__asm { or eax, 1 }
	__asm { push 0xdec4f0 }
	__asm { mov dword ptr [g_012fafb8], eax }
	__asm { mov dword ptr [g_012fafac], 0x120873c }
	__asm { mov dword ptr [g_012fafb4], 0x98cf00 }
	__asm { mov dword ptr [g_012fafb0], 0x8846b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00883e0c: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, 0x12fafac }
	__asm { jne L_00883e34 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_00883e2c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00883e2c: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jmp L_00883e8a }
	__asm { L_00883e34: }
	__asm { test ecx, ecx }
	__asm { je L_00883e4a }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00883e4a: }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00883e84 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { L_00883e84: }
	__asm { mov dword ptr [edi], 0x12fafac }
	__asm { L_00883e8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_00883ea0();
extern "C" void fn_00980720();
// FUNCTION: ROBLOXSTUDIO 0x00883f30
extern "C" __declspec(naked) void asm_00883f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x120873c }
	__asm { je L_0088400c }
	__asm { push eax }
	__asm { mov ecx, 0x120873c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0088400c }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00883f9d }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00883f9d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00980720 }
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
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00884040 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088400c: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_00883ea0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { L_00884040: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_00b09170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008841a0
extern "C" __declspec(naked) void asm_008841a0()
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
	__asm { call fn_00b09170 }
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
	__asm { mov dword ptr [edi], 0xe659a8 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00884237 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00884226 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_00884226: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00884237 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_00884237: }
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

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00884820
extern "C" __declspec(naked) void asm_00884820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00884858 }
	__asm { add eax, -0x1c }
	__asm { je L_00884858 }
	__asm { lea ecx, [eax + 0x3ac] }
	__asm { jmp L_0088485a }
	__asm { L_00884858: }
	__asm { xor ecx, ecx }
	__asm { L_0088485a: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { jb L_008848a5 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008848a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d7c4[];
extern "C" void fn_0040bc40();
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00885470();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00884e60
extern "C" __declspec(naked) void asm_00884e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b896 }
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
	__asm { call fn_00885470 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d7c4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00884f1c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d7c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65b6c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d7c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00884f1c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d7c8 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65f78 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00884f9a }
	__asm { push 0x1208d34 }
	__asm { mov ecx, 0x1208d34 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00884f9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00884f85 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00884f9a }
	__asm { L_00884f85: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00884f9a: }
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
extern "C" char g_0131d7c4[];
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_008854c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00884fb0
extern "C" __declspec(naked) void asm_00884fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b8c6 }
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
	__asm { call fn_008854c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d7c4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0088506c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d7c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65b6c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d7c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0088506c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d7c8 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65ec4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008850ea }
	__asm { push 0x1208d34 }
	__asm { mov ecx, 0x1208d34 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008850ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008850d5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008850ea }
	__asm { L_008850d5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008850ea: }
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
extern "C" char g_0131d7c4[];
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_00885510();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00885100
extern "C" __declspec(naked) void asm_00885100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b8c6 }
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
	__asm { call fn_00885510 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d7c4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008851bc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d7c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65b6c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d7c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008851bc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d7c8 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65f00 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0088523a }
	__asm { push 0x1208d34 }
	__asm { mov ecx, 0x1208d34 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0088523a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00885225 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088523a }
	__asm { L_00885225: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088523a: }
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
extern "C" char g_0131d7c4[];
extern "C" void fn_0040bb80();
extern "C" void fn_0041ee90();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00885560();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00885250
extern "C" __declspec(naked) void asm_00885250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b896 }
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
	__asm { call fn_00885560 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d7c4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0088530c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d7c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65b6c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d7c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0088530c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d7c8 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe65f3c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0088538a }
	__asm { push 0x1208d34 }
	__asm { mov ecx, 0x1208d34 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0088538a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00885375 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088538a }
	__asm { L_00885375: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088538a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e4dcc[];
extern "C" char g_0131d7c4[];
extern "C" void fn_0041ee90();
extern "C" void fn_007cbf10();
extern "C" void fn_00869be0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008853a0
extern "C" __declspec(naked) void asm_008853a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b8e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869be0 }
	__asm { mov dword ptr [esi], 0xe65b7c }
	__asm { mov dword ptr [esi + 4], 0xe65c34 }
	__asm { mov dword ptr [esi + 0x18], 0xe65c3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe65c48 }
	__asm { mov dword ptr [esi + 0x64], 0xe65c58 }
	__asm { mov dword ptr [esi + 0x68], 0xe65c60 }
	__asm { mov eax, dword ptr [g_0131d7c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00885446 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d7c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe65b6c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d7c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00885446: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d7c8 }
	__asm { inc dword ptr [g_012e4dcc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00885830
extern "C" __declspec(naked) void asm_00885830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_00885868 }
	__asm { add eax, -0x1c }
	__asm { je L_00885868 }
	__asm { lea ecx, [eax + 0x290] }
	__asm { jmp L_0088586a }
	__asm { L_00885868: }
	__asm { xor ecx, ecx }
	__asm { L_0088586a: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { jb L_008858b5 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008858b5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00885e40
extern "C" __declspec(naked) void asm_00885e40()
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
	__asm { mov dword ptr [esi + 0x10], 0x11ef0c0 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00885ee9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00885ee9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00885ed4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00885ee9 }
	__asm { L_00885ed4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00885ee9: }
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
extern "C" char g_012fb0b8[];
extern "C" char g_012fb0d4[];
extern "C" void fn_0040c5b0();
extern "C" void fn_0048e3f0();
extern "C" void fn_00885e40();
extern "C" void fn_00886090();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00885fa0
extern "C" __declspec(naked) void asm_00885fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2b946 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00885fde }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00886076 }
	__asm { L_00885fde: }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048e3f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { jb L_00886017 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886017: }
	__asm { mov eax, dword ptr [g_012fb0d4] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test al, 1 }
	__asm { jne L_00886070 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fb0d4], eax }
	__asm { push 0 }
	__asm { push 0xe66014 }
	__asm { mov ecx, 0x12fb0b8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00885e40 }
	__asm { push 0xdec650 }
	__asm { mov dword ptr [g_012fb0b8], 0xe66010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00886070: }
	__asm { mov dword ptr [edi], 0x12fb0b8 }
	__asm { L_00886076: }
	__asm { mov ecx, edi }
	__asm { call fn_00886090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f86ac[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_004220b0();
extern "C" void fn_00793050();
extern "C" void fn_008865d0();
extern "C" void fn_00886810();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008862a0
extern "C" __declspec(naked) void asm_008862a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b9b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00793050 }
	__asm { test al, al }
	__asm { je L_0088634c }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00886810 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp edi, esi }
	__asm { je L_0088630d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_0088630d: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { mov ecx, edi }
	__asm { call fn_008865d0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { jb L_00886322 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00886322: }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00886340 }
	__asm { or dword ptr [g_012f86ac], 0x200 }
	__asm { L_00886340: }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_004220b0 }
	__asm { mov bl, 1 }
	__asm { jmp L_0088634e }
	__asm { L_0088634c: }
	__asm { xor bl, bl }
	__asm { L_0088634e: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0088635f }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088635f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00886380
extern "C" __declspec(naked) void asm_00886380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b9d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00886402 }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { jmp L_00886409 }
	__asm { L_00886402: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00886409: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f86ac[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_008865d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00886420
extern "C" __declspec(naked) void asm_00886420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b9fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0088647a }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { jmp L_0088647c }
	__asm { L_0088647a: }
	__asm { xor eax, eax }
	__asm { L_0088647c: }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp esi, eax }
	__asm { je L_008864bb }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_008864bb: }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov ecx, esi }
	__asm { call fn_008865d0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmovae eax, dword ptr [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_008864ee }
	__asm { or dword ptr [g_012f86ac], 0x200 }
	__asm { L_008864ee: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008864ff }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008864ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
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
extern "C" void fn_00886810();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00886740
extern "C" __declspec(naked) void asm_00886740()
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
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00886810 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp edi, esi }
	__asm { je L_00886788 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00886788: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { mov ecx, edi }
	__asm { call fn_008865d0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { jb L_0088679d }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0088679d: }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_008867b9 }
	__asm { or dword ptr [g_012f86ac], 0x200 }
	__asm { L_008867b9: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_008867ea }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008867d0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008867d0: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008867ea: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_008867fd }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008867fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f86ac[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00886420();
extern "C" void fn_008865d0();
// FUNCTION: ROBLOXSTUDIO 0x00886810
extern "C" __declspec(naked) void asm_00886810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ba69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886420 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { cmp esi, edi }
	__asm { je L_00886864 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00886864: }
	__asm { push dword ptr [esi + 0x18] }
	__asm { mov ecx, esi }
	__asm { call fn_008865d0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { jb L_00886879 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00886879: }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { mov eax, esi }
	__asm { je L_00886897 }
	__asm { or dword ptr [g_012f86ac], 0x200 }
	__asm { L_00886897: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008868b0
extern "C" __declspec(naked) void asm_008868b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ba88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_00405b90 }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov edi, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0088692e }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00886914 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886914: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088692e: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0088693f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088693f: }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { test esi, esi }
	__asm { je L_00886982 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00886968 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886968: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886982: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_00886993 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886993: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00886420();
extern "C" void fn_00886740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00886b10
extern "C" __declspec(naked) void asm_00886b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ba38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00886420 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886740 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00886b64 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov bl, 1 }
	__asm { jmp L_00886b66 }
	__asm { L_00886b64: }
	__asm { xor bl, bl }
	__asm { L_00886b66: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00886b97 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00886b7d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886b7d: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886b97: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00886ba8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00886ba8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fb0e0[];
extern "C" void fn_00407e90();
extern "C" void fn_007afa40();
extern "C" void fn_008870e0();
// FUNCTION: ROBLOXSTUDIO 0x00888370
extern "C" __declspec(naked) void asm_00888370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2bbc3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { call fn_008870e0 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00888409 }
	__asm { mov ecx, esi }
	__asm { call fn_007afa40 }
	__asm { cmp byte ptr [g_012fb0e0], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jne L_008883eb }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x12fb0dc }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0x889770 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012fb0e0], 1 }
	__asm { L_008883eb: }
	__asm { mov dword ptr [esi], 0xe6603c }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00888409: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007b1fa0();
extern "C" void fn_00889570();
extern "C" void fn_00889690();
// FUNCTION: ROBLOXSTUDIO 0x008889f0
extern "C" __declspec(naked) void asm_008889f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00888a98 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { jne L_00888a49 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00888a34 }
	__asm { push 0x160 }
	__asm { push 0xe66178 }
	__asm { push 0xe662d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00888a49 }
	__asm { L_00888a34: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe662f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00888a49: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00888a98 }
	__asm { test edi, edi }
	__asm { je L_00888a62 }
	__asm { push edi }
	__asm { mov ecx, edi }
	__asm { call fn_007b1fa0 }
	__asm { test al, al }
	__asm { jne L_00888a98 }
	__asm { L_00888a62: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00888a83 }
	__asm { push 0x109 }
	__asm { push 0xe66178 }
	__asm { push 0xe66218 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00888a98 }
	__asm { L_00888a83: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe66250 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00888a98: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00889690 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00889570 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0088adb0
extern "C" __declspec(naked) void asm_0088adb0()
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
	__asm { mov dword ptr [esi + 8], 0xe68b58 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe68e68 }
	__asm { mov dword ptr [esi + 8], 0xe68e78 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0088ae5a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_0088ae46 }
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
	__asm { L_0088ae46: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0088ae5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4d54[];
extern "C" char g_0131ab44[];
extern "C" void fn_004212b0();
extern "C" void fn_007cbf10();
extern "C" void fn_008a5310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0088ae70
extern "C" __declspec(naked) void asm_0088ae70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2be06 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_0088ae9c }
	__asm { mov dword ptr [esi + 0x68], 0xe6679c }
	__asm { L_0088ae9c: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008a5310 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe666e4 }
	__asm { mov dword ptr [esi + 4], 0xe6676c }
	__asm { mov dword ptr [esi + 0x18], 0xe66774 }
	__asm { mov dword ptr [esi + 0x1c], 0xe66780 }
	__asm { mov dword ptr [esi + 0x64], 0xe66790 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe66798 }
	__asm { mov eax, dword ptr [g_0131ab44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0088af2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe66644 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131aa18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0088af2f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131aa18 }
	__asm { inc dword ptr [g_012e4d54] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x0088b0b0
extern "C" __declspec(naked) void asm_0088b0b0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c38c0 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0088b159 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_0088b159 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0088b144 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088b159 }
	__asm { L_0088b144: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088b159: }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00893aa0();
// FUNCTION: ROBLOXSTUDIO 0x0088b380
extern "C" __declspec(naked) void asm_0088b380()
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
	__asm { push 0x38 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0088b3cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0088b3cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0088b42a }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe68b60 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe68e38 }
	__asm { mov dword ptr [esi + 8], 0xe68e48 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xe68e50 }
	__asm { mov dword ptr [esi + 8], 0xe68e60 }
	__asm { jmp L_0088b42c }
	__asm { L_0088b42a: }
	__asm { xor esi, esi }
	__asm { L_0088b42c: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00893aa0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0088b449 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0088b449: }
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
extern "C" void fn_0088adb0();
extern "C" void fn_00893aa0();
// FUNCTION: ROBLOXSTUDIO 0x0088b5b0
extern "C" __declspec(naked) void asm_0088b5b0()
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
	__asm { je L_0088b5fb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0088b5fb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0088b624 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0088adb0 }
	__asm { mov dword ptr [esi], 0xe68e80 }
	__asm { mov dword ptr [esi + 8], 0xe68e90 }
	__asm { jmp L_0088b626 }
	__asm { L_0088b624: }
	__asm { xor esi, esi }
	__asm { L_0088b626: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00893aa0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0088b64a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0088b64a: }
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
extern "C" void fn_0043bb80();
extern "C" void fn_0088df20();
// FUNCTION: ROBLOXSTUDIO 0x0088b660
extern "C" __declspec(naked) void asm_0088b660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2be94 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0088b6ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0088b6ab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0088b6f6 }
	__asm { mov dword ptr [esi + 8], 0xe3cb0c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], 0xe68e98 }
	__asm { mov dword ptr [esi + 8], 0xe68ea8 }
	__asm { call fn_0088df20 }
	__asm { mov dword ptr [esi], 0xe68eb0 }
	__asm { mov dword ptr [esi + 8], 0xe68ec0 }
	__asm { jmp L_0088b6f8 }
	__asm { L_0088b6f6: }
	__asm { xor esi, esi }
	__asm { L_0088b6f8: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0088b71c }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0088b71c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004b3a00();
extern "C" void fn_00789cb0();
extern "C" void fn_0088b9e0();
extern "C" void fn_008935b0();
extern "C" void fn_00896c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088b730
extern "C" __declspec(naked) void asm_0088b730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { jne L_0088b75d }
	__asm { xor edi, edi }
	__asm { jmp L_0088b768 }
	__asm { L_0088b75d: }
	__asm { push eax }
	__asm { call fn_008935b0 }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { L_0088b768: }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { lea eax, [esi + 1] }
	__asm { add eax, ecx }
	__asm { je L_0088b775 }
	__asm { inc eax }
	__asm { jmp L_0088b777 }
	__asm { L_0088b775: }
	__asm { xor eax, eax }
	__asm { L_0088b777: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0088b9e0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0088b7a8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0088b7a8: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_0088b7b2 }
	__asm { inc eax }
	__asm { jmp L_0088b7b4 }
	__asm { L_0088b7b2: }
	__asm { xor eax, eax }
	__asm { L_0088b7b4: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00789cb0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00896c40 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b3a00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0088b80d }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088b80d: }
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

extern "C" char g_00e10524[];
extern "C" void fn_007d2b50();
extern "C" void fn_0088b180();
// FUNCTION: ROBLOXSTUDIO 0x0088bb10
extern "C" __declspec(naked) void asm_0088bb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d268 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efd60 }
	__asm { je L_0088bbc0 }
	__asm { push eax }
	__asm { mov ecx, 0x11efd60 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0088bbc0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0088bb71 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0088bb71: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0088bbad }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0088bbad: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088bbc0: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0088b180 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2bc0();
extern "C" void fn_00825140();
extern "C" void fn_0088c3f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0088bbf0
extern "C" __declspec(naked) void asm_0088bbf0()
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
	__asm { cmp eax, 1 }
	__asm { jb L_0088bcbb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0088c3f0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0088bc43 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088bc43: }
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
	__asm { je L_0088bca1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2bc0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0088bc90 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0088bc90: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088bca1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0088bcbb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088bcbb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0088bcd5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088bcd5: }
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

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007cb250();
extern "C" void fn_007d5630();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088c6b0
extern "C" __declspec(naked) void asm_0088c6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0088d350 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe671f0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0088c718 }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_0088c71a }
	__asm { L_0088c718: }
	__asm { xor eax, eax }
	__asm { L_0088c71a: }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov byte ptr [ebp - 0x4c], bl }
	__asm { test al, 1 }
	__asm { jne L_0088c76f }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0088c76f: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a268 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5630 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0088c7be }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088c7be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00825140();
extern "C" void fn_0088d350();
extern "C" void fn_00890b10();
// FUNCTION: ROBLOXSTUDIO 0x0088c7e0
extern "C" __declspec(naked) void asm_0088c7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2bee6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0088d350 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6736c }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00890b10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007939d0();
extern "C" void fn_007cb250();
extern "C" void fn_008b1920();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x0088c8a0
extern "C" __declspec(naked) void asm_0088c8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33950 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0638 }
	__asm { mov edi, ecx }
	__asm { push 0xe67138 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59c40 }
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
	__asm { push 0xe67144 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x1015400 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe67150 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56808 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe67158 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { call fn_008b1920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 1 }
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
extern "C" void fn_0088d1d0();
// FUNCTION: ROBLOXSTUDIO 0x0088ccc0
extern "C" __declspec(naked) void asm_0088ccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_0088d1d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe67454 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
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
	__asm { jae L_0088cd66 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0088cd66: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0088cd89 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088cd89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_0088d1d0();
// FUNCTION: ROBLOXSTUDIO 0x0088cda0
extern "C" __declspec(naked) void asm_0088cda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_0088d1d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe67454 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
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
	__asm { jae L_0088ce47 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0088ce47: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0088ce6a }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088ce6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_0088d1d0();
// FUNCTION: ROBLOXSTUDIO 0x0088ce80
extern "C" __declspec(naked) void asm_0088ce80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_0088d1d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe67494 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
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
	__asm { jae L_0088cf26 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0088cf26: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0088cf49 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088cf49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_0088d1d0();
// FUNCTION: ROBLOXSTUDIO 0x0088cf70
extern "C" __declspec(naked) void asm_0088cf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_0088d1d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe67494 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
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
	__asm { jae L_0088d017 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0088d017: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0088d03a }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088d03a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d59b0();
extern "C" void fn_008251b0();
extern "C" void fn_0088d120();
// FUNCTION: ROBLOXSTUDIO 0x0088d050
extern "C" __declspec(naked) void asm_0088d050()
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
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0088d120 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe673a8 }
	__asm { call fn_007d59b0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
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
	__asm { jae L_0088d0e5 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0088d0e5: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0088d108 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0088d108: }
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

extern "C" char g_0131ab44[];
extern "C" void fn_004212b0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0088d120
extern "C" __declspec(naked) void asm_0088d120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1157e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ab44] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0088d195 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe66644 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131aa18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0088d195: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0x131aa18 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_0131ab44[];
extern "C" void fn_004212b0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0088d1d0
extern "C" __declspec(naked) void asm_0088d1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1157e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ab44] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0088d245 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe66644 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131aa18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0088d245: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push 0x131aa18 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131ab44[];
extern "C" void fn_004212b0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0088d350
extern "C" __declspec(naked) void asm_0088d350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2bf26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131ab44] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0088d3ca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ab44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe66644 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131aa18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0088d3ca: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131aa18 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe67174 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0088d442 }
	__asm { push 0x11f9cd4 }
	__asm { mov ecx, 0x11f9cd4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0088d442 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0088d42d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0088d442 }
	__asm { L_0088d42d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0088d442: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d5940();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088d460
extern "C" __declspec(naked) void asm_0088d460()
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
	__asm { call fn_007d5940 }
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
	__asm { mov dword ptr [edi], 0xe67298 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0088d4f7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0088d4e6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0088d4e6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0088d4f7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0088d4f7: }
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
extern "C" void fn_007d59b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088d520
extern "C" __declspec(naked) void asm_0088d520()
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
	__asm { call fn_007d59b0 }
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
	__asm { mov dword ptr [edi], 0xe66868 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0088d5b7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0088d5a6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0088d5a6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0088d5b7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0088d5b7: }
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
extern "C" void fn_007d5be0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088d5e0
extern "C" __declspec(naked) void asm_0088d5e0()
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
	__asm { call fn_007d5be0 }
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
	__asm { mov dword ptr [edi], 0xe66a28 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0088d677 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0088d666 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0088d666: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0088d677 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0088d677: }
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

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x0088d950
extern "C" __declspec(naked) void asm_0088d950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { fstp dword ptr [ebx + 0x10] }
	__asm { add esi, 0x38 }
	__asm { fld dword ptr [esi - 0x24] }
	__asm { push esi }
	__asm { fstp dword ptr [ebx + 0x14] }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { fld dword ptr [esi - 0x20] }
	__asm { fstp dword ptr [ebx + 0x18] }
	__asm { fld dword ptr [esi - 0x1c] }
	__asm { fstp dword ptr [ebx + 0x1c] }
	__asm { mov eax, dword ptr [esi - 0x18] }
	__asm { mov dword ptr [ebx + 0x20], eax }
	__asm { mov eax, dword ptr [esi - 0x14] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, dword ptr [esi - 0x10] }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov eax, dword ptr [esi - 0xc] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { mov eax, dword ptr [esi - 8] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x5c], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x60], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x64], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e36268[];
extern "C" char g_00e36270[];
extern "C" void fn_006da0e0();
extern "C" void fn_0088fa20();
// FUNCTION: ROBLOXSTUDIO 0x0088de20
extern "C" __declspec(naked) void asm_0088de20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c0c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi], 0xe66684 }
	__asm { call fn_006da0e0 }
	__asm { fldz }
	__asm { fst qword ptr [edi + 0x38] }
	__asm { fst qword ptr [edi + 0x48] }
	__asm { mov word ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { fld qword ptr [g_00e36270] }
	__asm { fstp qword ptr [edi + 0x58] }
	__asm { mov byte ptr [edi + 0x78], 1 }
	__asm { fst qword ptr [edi + 0x60] }
	__asm { fst qword ptr [edi + 0x68] }
	__asm { fst qword ptr [edi + 0x70] }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { fld qword ptr [g_00e36268] }
	__asm { fstp qword ptr [edi + 0x88] }
	__asm { mov byte ptr [edi + 0xa8], 1 }
	__asm { fst qword ptr [edi + 0x90] }
	__asm { fst qword ptr [edi + 0x98] }
	__asm { fst qword ptr [edi + 0xa0] }
	__asm { lea esi, [edi + 0xb8] }
	__asm { fstp qword ptr [edi + 0xb0] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0088fa20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0x18], 8 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0xd8], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00890e50();
// FUNCTION: ROBLOXSTUDIO 0x0088e150
extern "C" __declspec(naked) void asm_0088e150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c118 }
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
	__asm { je L_0088e1dd }
	__asm { add esi, 5 }
	__asm { je L_0088e1a5 }
	__asm { add esi, -5 }
	__asm { jmp L_0088e1a7 }
	__asm { L_0088e1a5: }
	__asm { xor esi, esi }
	__asm { L_0088e1a7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0088e1d7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0088e1d7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0088e1dd }
	__asm { L_0088e1d7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0088e1dd: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00890e50 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0088e22c }
	__asm { add esi, 5 }
	__asm { je L_0088e202 }
	__asm { add esi, -5 }
	__asm { jmp L_0088e204 }
	__asm { L_0088e202: }
	__asm { xor esi, esi }
	__asm { L_0088e204: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0088e22c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0088e22c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0088e22c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb0f4[];
extern "C" void fn_006d19a0();
extern "C" void fn_00890290();
extern "C" void fn_0099c980();
extern "C" void fn_0099d070();
extern "C" void fn_00b5c8e0();
// FUNCTION: ROBLOXSTUDIO 0x0088fb70
extern "C" __declspec(naked) void asm_0088fb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { cmp byte ptr [g_012fb0f4], 0 }
	__asm { mov edi, eax }
	__asm { jne L_0088fc3b }
	__asm { test edi, edi }
	__asm { je L_0088fc3b }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { test eax, eax }
	__asm { je L_0088fc3b }
	__asm { mov ecx, eax }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_0088fbc9 }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_0088fbc9 }
	__asm { add eax, -0x70 }
	__asm { jmp L_0088fbcb }
	__asm { L_0088fbc9: }
	__asm { xor eax, eax }
	__asm { L_0088fbcb: }
	__asm { mov al, byte ptr [eax + 0xf8] }
	__asm { test al, al }
	__asm { je L_0088fc3b }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0088fc3b }
	__asm { mov ecx, edi }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_0088fc00 }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_0088fc00 }
	__asm { add eax, -0x70 }
	__asm { jmp L_0088fc02 }
	__asm { L_0088fc00: }
	__asm { xor eax, eax }
	__asm { L_0088fc02: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00890290 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0088fc3b: }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099c980 }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { mov edi, eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push edi }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f9400[];
extern "C" char g_012f9404[];
extern "C" char g_012f9408[];
extern "C" void fn_006d1460();
extern "C" void fn_006d14a0();
extern "C" void fn_006d14e0();
extern "C" void fn_0084a270();
extern "C" void fn_0084a5a0();
extern "C" void fn_0084a7a0();
extern "C" void fn_00b49710();
extern "C" void fn_00b5e850();
// FUNCTION: ROBLOXSTUDIO 0x0088ff40
extern "C" __declspec(naked) void asm_0088ff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f9408] }
	__asm { sub esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0088ff6c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9408], eax }
	__asm { mov eax, 1 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [g_012f9400], eax }
	__asm { mov word ptr [g_012f9404], cx }
	__asm { jmp L_0088ff71 }
	__asm { L_0088ff6c: }
	__asm { mov eax, dword ptr [g_012f9400] }
	__asm { L_0088ff71: }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [g_012f9404] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { je L_0088ff96 }
	__asm { call fn_006d14e0 }
	__asm { jmp L_00890004 }
	__asm { L_0088ff96: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0084a7a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { jne L_0088ffff }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0084a5a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { jne L_0088ffff }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0084a270 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { je L_0088ffe5 }
	__asm { call fn_006d14a0 }
	__asm { jmp L_00890004 }
	__asm { L_0088ffe5: }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { add eax, dword ptr [esi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b5e850 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088ffff: }
	__asm { call fn_006d1460 }
	__asm { L_00890004: }
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
	__asm { ret }
}

extern "C" char g_012f940c[];
extern "C" char g_012f9410[];
extern "C" char g_012f9414[];
extern "C" void fn_0084a7a0();
extern "C" void fn_00b49740();
// FUNCTION: ROBLOXSTUDIO 0x00890110
extern "C" __declspec(naked) void asm_00890110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0084a7a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00b49740 }
	__asm { test al, al }
	__asm { je L_0089017c }
	__asm { mov eax, dword ptr [g_012f9414] }
	__asm { test al, 1 }
	__asm { jne L_00890159 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9414], eax }
	__asm { mov eax, 1 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [g_012f940c], eax }
	__asm { mov word ptr [g_012f9410], cx }
	__asm { jmp L_0089015e }
	__asm { L_00890159: }
	__asm { mov eax, dword ptr [g_012f940c] }
	__asm { L_0089015e: }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [g_012f9410] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b49740 }
	__asm { test al, al }
	__asm { je L_0089017c }
	__asm { mov bl, 1 }
	__asm { jmp L_0089017e }
	__asm { L_0089017c: }
	__asm { xor bl, bl }
	__asm { L_0089017e: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00b49740 }
	__asm { pop esi }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_00890198 }
	__asm { test al, al }
	__asm { je L_00890198 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00890198: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_007e9290();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00890b10
extern "C" __declspec(naked) void asm_00890b10()
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
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007e9290 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00890b8d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00890b8d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00890ba7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00890ba7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_012de694[];
extern "C" void fn_006b9770();
extern "C" void fn_006b9800();
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x00890bc0
extern "C" __declspec(naked) void asm_00890bc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00890c07 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x24], 0 }
	__asm { jge L_00890c07 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00890bfa }
	__asm { push 0x11e }
	__asm { push 0xe67530 }
	__asm { push 0xe6764c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00890c07 }
	__asm { L_00890bfa: }
	__asm { push 0xe6764c }
	__asm { call fn_006b9770 }
	__asm { add esp, 4 }
	__asm { L_00890c07: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [eax + 0x24] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00890c53 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00890c53 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x20], 0 }
	__asm { je L_00890c53 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_007b5ea0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { L_00890c53: }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x24], 0 }
	__asm { pop esi }
	__asm { jge L_00890c8d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00890c82 }
	__asm { push 0x123 }
	__asm { push 0xe67530 }
	__asm { push 0xe67688 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00890c8d }
	__asm { L_00890c82: }
	__asm { push 0xe67688 }
	__asm { call fn_006b9770 }
	__asm { pop ecx }
	__asm { L_00890c8d: }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
extern "C" void fn_0083e550();
extern "C" void fn_0088bbf0();
// FUNCTION: ROBLOXSTUDIO 0x008913a0
extern "C" __declspec(naked) void asm_008913a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0088bbf0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_008913db }
	__asm { lea eax, [ecx - 0x1c] }
	__asm { jmp L_008913dd }
	__asm { L_008913db: }
	__asm { xor eax, eax }
	__asm { L_008913dd: }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov edx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [eax + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_00410d50 }
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
extern "C" void fn_00893100();
// FUNCTION: ROBLOXSTUDIO 0x008915e0
extern "C" __declspec(naked) void asm_008915e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_0089165f }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_0089165f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0089164e }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089165f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0089164e: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089165f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0089166b }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_0089166d }
	__asm { L_0089166b: }
	__asm { xor esi, esi }
	__asm { L_0089166d: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00893100 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007a0870 }
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
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_0088ef10();
extern "C" void fn_00893100();
// FUNCTION: ROBLOXSTUDIO 0x008916b0
extern "C" __declspec(naked) void asm_008916b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_0089172f }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_0089172f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0089171e }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089172f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0089171e: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089172f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0089173b }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_0089173d }
	__asm { L_0089173b: }
	__asm { xor esi, esi }
	__asm { L_0089173d: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00893100 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0088ef10 }
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
extern "C" void fn_006b9740();
extern "C" void fn_0088b180();
extern "C" void fn_0088ee40();
// FUNCTION: ROBLOXSTUDIO 0x00891780
extern "C" __declspec(naked) void asm_00891780()
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
	__asm { je L_008917ea }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_008917ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008917d9 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008917ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008917d9: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008917ea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008917f6 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_008917f8 }
	__asm { L_008917f6: }
	__asm { xor esi, esi }
	__asm { L_008917f8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0088b180 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 0x68] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [edx + 0x28] }
	__asm { lea ecx, [esi + 0x68] }
	__asm { add ecx, eax }
	__asm { call fn_0088ee40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043f040();
extern "C" void fn_006b9740();
extern "C" void fn_00893100();
// FUNCTION: ROBLOXSTUDIO 0x00891830
extern "C" __declspec(naked) void asm_00891830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test bl, bl }
	__asm { je L_00891894 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { sub edx, dword ptr [eax] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_00891894 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00891883 }
	__asm { push 0x114 }
	__asm { push 0xe52268 }
	__asm { push 0xe541b4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00891894 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00891883: }
	__asm { movzx eax, bl }
	__asm { push 0xe541c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00891894: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008918a0 }
	__asm { add eax, -0x1c }
	__asm { jmp L_008918a2 }
	__asm { L_008918a0: }
	__asm { xor eax, eax }
	__asm { L_008918a2: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00893100 }
	__asm { mov ecx, eax }
	__asm { call fn_0043f040 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b8aae();
extern "C" void fn_006b9800();
extern "C" void fn_006b9ee0();
// FUNCTION: ROBLOXSTUDIO 0x00891a00
extern "C" __declspec(naked) void asm_00891a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd160d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006b9ee0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xe66654 }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00891a86 }
	__asm { add esi, 5 }
	__asm { je L_00891a58 }
	__asm { add esi, -5 }
	__asm { jmp L_00891a5a }
	__asm { L_00891a58: }
	__asm { xor esi, esi }
	__asm { L_00891a5a: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00891a86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00891a86 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00891a86: }
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
// FUNCTION: ROBLOXSTUDIO 0x00892b00
extern "C" __declspec(naked) void asm_00892b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00892ba3 }
	__asm { cmp edi, dword ptr [esi + 8] }
	__asm { jl L_00892b4f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00892b3a }
	__asm { push 0x3b }
	__asm { push 0xe66d58 }
	__asm { push 0xe66d9c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00892b4f }
	__asm { L_00892b3a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe66dd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00892b4f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00892ba3 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [esi], ecx }
	__asm { jne L_00892b68 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { L_00892b68: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp ecx, dword ptr [eax + edi*4] }
	__asm { je L_00892ba3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00892b8e }
	__asm { push 0x3c }
	__asm { push 0xe66d58 }
	__asm { push 0xe66da8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00892ba3 }
	__asm { L_00892b8e: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xe66e38 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00892ba3: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fb0f4[];
extern "C" void fn_006d19a0();
extern "C" void fn_008925a0();
extern "C" void fn_0099c980();
extern "C" void fn_0099d070();
extern "C" void fn_00b5c8e0();
// FUNCTION: ROBLOXSTUDIO 0x00892e50
extern "C" __declspec(naked) void asm_00892e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { cmp byte ptr [g_012fb0f4], 0 }
	__asm { mov edi, eax }
	__asm { jne L_00892f18 }
	__asm { test edi, edi }
	__asm { je L_00892f18 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { test eax, eax }
	__asm { je L_00892f18 }
	__asm { mov ecx, eax }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_00892ea9 }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_00892ea9 }
	__asm { add eax, -0x70 }
	__asm { jmp L_00892eab }
	__asm { L_00892ea9: }
	__asm { xor eax, eax }
	__asm { L_00892eab: }
	__asm { mov al, byte ptr [eax + 0xf8] }
	__asm { test al, al }
	__asm { je L_00892f18 }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00892f18 }
	__asm { mov ecx, edi }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_00892ee0 }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_00892ee0 }
	__asm { add eax, -0x70 }
	__asm { jmp L_00892ee2 }
	__asm { L_00892ee0: }
	__asm { xor eax, eax }
	__asm { L_00892ee2: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008925a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892f18: }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099c980 }
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
	__asm { ret 4 }
}

extern "C" char g_012de694[];
extern "C" void fn_006b9770();
extern "C" void fn_006b97d0();
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_0088f3f0();
// FUNCTION: ROBLOXSTUDIO 0x00893910
extern "C" __declspec(naked) void asm_00893910()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00893957 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x24], 0 }
	__asm { jge L_00893957 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0089394a }
	__asm { push 0x115 }
	__asm { push 0xe67530 }
	__asm { push 0xe6764c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00893957 }
	__asm { L_0089394a: }
	__asm { push 0xe6764c }
	__asm { call fn_006b9770 }
	__asm { add esp, 4 }
	__asm { L_00893957: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [eax + 0x24] }
	__asm { call fn_006b97d0 }
	__asm { cmp eax, 1 }
	__asm { jne L_00893972 }
	__asm { mov ecx, esi }
	__asm { call fn_0088f3f0 }
	__asm { L_00893972: }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x24], 0 }
	__asm { pop esi }
	__asm { jge L_008939ac }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008939a1 }
	__asm { push 0x119 }
	__asm { push 0xe67530 }
	__asm { push 0xe67688 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008939ac }
	__asm { L_008939a1: }
	__asm { push 0xe67688 }
	__asm { call fn_006b9770 }
	__asm { pop ecx }
	__asm { L_008939ac: }
	__asm { ret }
}

extern "C" char g_00e100d4[];
extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x008939b0
extern "C" __declspec(naked) void asm_008939b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { cmp ebx, edi }
	__asm { je L_00893a01 }
	__asm { test edi, edi }
	__asm { je L_008939f0 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_008939e9 }
	__asm { mov ecx, edi }
	__asm { call fn_006e84d0 }
	__asm { test edi, edi }
	__asm { je L_008939e9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { L_008939e9: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_008939f0: }
	__asm { test ebx, ebx }
	__asm { je L_00893a01 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { L_00893a01: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test eax, eax }
	__asm { jle L_00893a2d }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00893a2d: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f9400[];
extern "C" char g_012f9404[];
extern "C" char g_012f9408[];
extern "C" char g_012f940c[];
extern "C" char g_012f9410[];
extern "C" char g_012f9414[];
extern "C" void fn_00b49710();
// FUNCTION: ROBLOXSTUDIO 0x00893fc0
extern "C" __declspec(naked) void asm_00893fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012f9408] }
	__asm { sub esp, 0x10 }
	__asm { test al, 1 }
	__asm { jne L_00893fec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9408], eax }
	__asm { mov eax, 1 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [g_012f9400], eax }
	__asm { mov word ptr [g_012f9404], cx }
	__asm { jmp L_00893ff1 }
	__asm { L_00893fec: }
	__asm { mov eax, dword ptr [g_012f9400] }
	__asm { L_00893ff1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [g_012f9404] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { jne L_00894056 }
	__asm { mov eax, dword ptr [g_012f9414] }
	__asm { test al, 1 }
	__asm { jne L_00894032 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9414], eax }
	__asm { mov eax, 1 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [g_012f940c], eax }
	__asm { mov word ptr [g_012f9410], cx }
	__asm { jmp L_00894037 }
	__asm { L_00894032: }
	__asm { mov eax, dword ptr [g_012f940c] }
	__asm { L_00894037: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_012f9410] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00b49710 }
	__asm { test al, al }
	__asm { jne L_00894056 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00894056: }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c58f0();
extern "C" void fn_007b4f50();
extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x008949e0
extern "C" __declspec(naked) void asm_008949e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { cmp byte ptr [eax + 0x78], 0 }
	__asm { je L_00894a45 }
	__asm { mov ecx, dword ptr [edi + 0x7c] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { call eax }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006c58f0 }
	__asm { fld qword ptr [eax] }
	__asm { mov ecx, dword ptr [edi + 0x70] }
	__asm { fsub qword ptr [ebp - 8] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { call fn_0099c980 }
	__asm { mov ecx, dword ptr [edi + 0x7c] }
	__asm { fldz }
	__asm { lea esi, [edi - 0x70] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ebx, [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xec] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00894a45: }
	__asm { lea ecx, [edi - 0x70] }
	__asm { push 0x12fb7ac }
	__asm { call fn_007b4f50 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038128[];
extern "C" char g_013137a1[];
extern "C" void fn_00532170();
extern "C" void fn_006c54a0();
extern "C" void fn_007cd560();
extern "C" void fn_0084a550();
extern "C" void fn_008929a0();
extern "C" void fn_00893c50();
extern "C" void fn_00897dd0();
extern "C" void fn_00897f30();
extern "C" void fn_0096c1b0();
extern "C" void fn_00c30b60();
extern "C" void fn_00c30e30();
// FUNCTION: ROBLOXSTUDIO 0x00894a60
extern "C" __declspec(naked) void asm_00894a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_008929a0 }
	__asm { push eax }
	__asm { call fn_00893c50 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00894b2c }
	__asm { push edi }
	__asm { call fn_0096c1b0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00894b2c }
	__asm { call fn_00c30b60 }
	__asm { test al, al }
	__asm { je L_00894b2c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 0x38] }
	__asm { test ebx, ebx }
	__asm { je L_00894ad6 }
	__asm { add ebx, 0x1c }
	__asm { je L_00894ad6 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00894ad6 }
	__asm { add ebx, -0x1c }
	__asm { je L_00894ad6 }
	__asm { push ebx }
	__asm { call fn_00c30e30 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00894b2b }
	__asm { L_00894ad6: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { fld qword ptr [eax] }
	__asm { add esp, 4 }
	__asm { fadd qword ptr [g_01038128] }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edi + 0xf0], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi + 0xf4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0084a550 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_013137a1], 0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax] }
	__asm { je L_00894b26 }
	__asm { call fn_00897f30 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00894b26: }
	__asm { call fn_00897dd0 }
	__asm { L_00894b2b: }
	__asm { pop ebx }
	__asm { L_00894b2c: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_0083be20();
extern "C" void fn_0088b350();
extern "C" void fn_00895210();
extern "C" void fn_00b10d10();
// FUNCTION: ROBLOXSTUDIO 0x00894b40
extern "C" __declspec(naked) void asm_00894b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_00894b70 }
	__asm { lea ecx, [esi + 0x108] }
	__asm { call fn_006b9e50 }
	__asm { L_00894b70: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00894c59 }
	__asm { call fn_0083be20 }
	__asm { mov edx, dword ptr [esi + 0x48] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { cmp dword ptr [edx + 0xc], 0 }
	__asm { jne L_00894b97 }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x64] }
	__asm { call fn_00895210 }
	__asm { jmp L_00894be4 }
	__asm { L_00894b97: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00894be4 }
	__asm { push dword ptr [edx + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00b10d10 }
	__asm { test al, al }
	__asm { jne L_00894be4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00894bcf }
	__asm { push 0x30c }
	__asm { push 0xe67530 }
	__asm { push 0xe67b68 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00894be4 }
	__asm { L_00894bcf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe67ba0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00894be4: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x100] }
	__asm { mov dword ptr [ebp - 0x24], 0x897dd0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0088b350 }
	__asm { mov edi, eax }
	__asm { add esi, 0x108 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00894c3f }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006b9b80 }
	__asm { L_00894c3f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00894c59 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00894c59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" char g_012e0d9c[];
extern "C" char g_012e0da0[];
extern "C" char g_012e0da4[];
extern "C" char g_012e0da8[];
extern "C" char g_012e0dac[];
extern "C" char g_012e0db0[];
extern "C" char g_012e0db4[];
extern "C" char g_012e0db8[];
extern "C" char g_012e0dbc[];
extern "C" char g_012e0dc0[];
extern "C" void fn_006da0e0();
extern "C" void fn_00793430();
extern "C" void fn_00891c90();
// FUNCTION: ROBLOXSTUDIO 0x00894fe0
extern "C" __declspec(naked) void asm_00894fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_008950cd }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006da0e0 }
	__asm { push dword ptr [g_012e0d94] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0xc] }
	__asm { push dword ptr [g_012e0d98] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 8] }
	__asm { push dword ptr [g_012e0d9c] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { push dword ptr [g_012e0da0] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x30] }
	__asm { push dword ptr [g_012e0da4] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x2c] }
	__asm { push dword ptr [g_012e0da8] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x28] }
	__asm { push dword ptr [g_012e0dac] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x24] }
	__asm { push dword ptr [g_012e0db0] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x20] }
	__asm { add esp, 0x40 }
	__asm { push dword ptr [g_012e0db4] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x1c] }
	__asm { push dword ptr [g_012e0db8] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x18] }
	__asm { push dword ptr [g_012e0dbc] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x14] }
	__asm { push dword ptr [g_012e0dc0] }
	__asm { push esi }
	__asm { call fn_00891c90 }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { add esp, 0x20 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x30] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_008950cd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_0088fab0();
extern "C" void fn_00968a10();
extern "C" void fn_00a21530();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00897190
extern "C" __declspec(naked) void asm_00897190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c628 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_008971f9 }
	__asm { cmp dword ptr [esi + 0xe0], 0 }
	__asm { jne L_008971f9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008971e8 }
	__asm { push 0x4b3 }
	__asm { push 0xe67530 }
	__asm { push 0xe67704 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008971f9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008971e8: }
	__asm { movzx eax, al }
	__asm { push 0xe67e48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008971f9: }
	__asm { push esi }
	__asm { call fn_00968a10 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00897252 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00b5cbf0 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088fab0 }
	__asm { push edi }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a21530 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { L_00897252: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097efd0();
extern "C" void fn_0099d070();
extern "C" void fn_00b5c8e0();
// FUNCTION: ROBLOXSTUDIO 0x00897930
extern "C" __declspec(naked) void asm_00897930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { mov edi, eax }
	__asm { call fn_0097efd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, 1 }
	__asm { je L_00897969 }
	__asm { cmp ecx, 2 }
	__asm { je L_00897969 }
	__asm { cmp ecx, 3 }
	__asm { je L_00897969 }
	__asm { cmp ecx, 4 }
	__asm { je L_00897969 }
	__asm { cmp ecx, 5 }
	__asm { je L_00897969 }
	__asm { cmp ecx, 6 }
	__asm { jne L_0089799b }
	__asm { L_00897969: }
	__asm { test edi, edi }
	__asm { je L_0089799b }
	__asm { mov ecx, edi }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_00897999 }
	__asm { mov esi, dword ptr [eax + 0x108] }
	__asm { test esi, esi }
	__asm { je L_00897999 }
	__asm { mov eax, dword ptr [esi - 0x70] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add esi, -0x70 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00897999: }
	__asm { xor esi, esi }
	__asm { L_0089799b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00897c10
extern "C" __declspec(naked) void asm_00897c10()
{
	__asm { L_00897c10: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00897c4f }
	__asm { lea ebx, [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00897c4f }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00897c4f }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00897c4f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0x104] }
	__asm { L_00897c4a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00897c4f: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { L_00897c54: }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_00897c4a }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { sar eax, 3 }
	__asm { cmp esi, eax }
	__asm { jae L_00897c4a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00897cab }
	__asm { test ecx, ecx }
	__asm { jne L_00897cab }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00897c9a }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00897cab }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00897c9a: }
	__asm { movzx eax, al }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00897cab: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [eax + esi*8] }
	__asm { call L_00897c10 }
	__asm { add esp, 8 }
	__asm { inc esi }
	__asm { jmp L_00897c54 }
}

extern "C" char g_012fc999[];
extern "C" void fn_00402f60();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aa8();
extern "C" void fn_007b5bb0();
extern "C" void fn_0099e840();
// FUNCTION: ROBLOXSTUDIO 0x00897cc0
extern "C" __declspec(naked) void asm_00897cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_007b5bb0 }
	__asm { mov al, byte ptr [g_012fc999] }
	__asm { test al, al }
	__asm { je L_00897d07 }
	__asm { push ebx }
	__asm { movzx eax, al }
	__asm { push 0xe678ac }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { mov al, byte ptr [g_012fc999] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00897d07 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe678c4 }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0xc }
	__asm { L_00897d07: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { jb L_00897d14 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00897d16 }
	__asm { L_00897d14: }
	__asm { mov ecx, esi }
	__asm { L_00897d16: }
	__asm { mov eax, 0x10 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xe678d0 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00897d56 }
	__asm { cmp edi, 0x10 }
	__asm { jb L_00897d56 }
	__asm { cmp edi, 0x10 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00897d56 }
	__asm { mov ecx, dword ptr [ebx + 0xe0] }
	__asm { push 2 }
	__asm { call fn_0099e840 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00897d56: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00897d5e }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00897d5e: }
	__asm { mov eax, 5 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xe3d9d0 }
	__asm { push esi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00897d9e }
	__asm { cmp edi, 5 }
	__asm { jb L_00897d9e }
	__asm { cmp edi, 5 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00897d9e }
	__asm { mov ecx, dword ptr [ebx + 0xe0] }
	__asm { push 1 }
	__asm { call fn_0099e840 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00897d9e: }
	__asm { mov ecx, dword ptr [ebx + 0xe0] }
	__asm { push 0 }
	__asm { call fn_0099e840 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0097efd0();
extern "C" void fn_0099d070();
extern "C" void fn_00b5c8e0();
// FUNCTION: ROBLOXSTUDIO 0x00898660
extern "C" __declspec(naked) void asm_00898660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { mov edi, eax }
	__asm { call fn_0097efd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp ecx, 1 }
	__asm { je L_00898699 }
	__asm { cmp ecx, 2 }
	__asm { je L_00898699 }
	__asm { cmp ecx, 3 }
	__asm { je L_00898699 }
	__asm { cmp ecx, 4 }
	__asm { je L_00898699 }
	__asm { cmp ecx, 5 }
	__asm { je L_00898699 }
	__asm { cmp ecx, 6 }
	__asm { jne L_008986cb }
	__asm { L_00898699: }
	__asm { test edi, edi }
	__asm { je L_008986cb }
	__asm { mov ecx, edi }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_008986c9 }
	__asm { mov esi, dword ptr [eax + 0x108] }
	__asm { test esi, esi }
	__asm { je L_008986c9 }
	__asm { mov eax, dword ptr [esi - 0x70] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add esi, -0x70 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xd4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008986c9: }
	__asm { xor esi, esi }
	__asm { L_008986cb: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xd4] }
	__asm { pop edi }
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
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b4f50();
extern "C" void fn_0099e8e0();
extern "C" void fn_00a24920();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x008986e0
extern "C" __declspec(naked) void asm_008986e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00898734 }
	__asm { cmp dword ptr [esi + 0xe0], 0 }
	__asm { jne L_00898734 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00898723 }
	__asm { push 0x8a7 }
	__asm { push 0xe67530 }
	__asm { push 0xe67704 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00898734 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00898723: }
	__asm { movzx eax, al }
	__asm { push 0xe687d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00898734: }
	__asm { mov eax, dword ptr [esi + 0xe0] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax + edi*4 + 0x138] }
	__asm { test edx, edx }
	__asm { jne L_00898778 }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_00898773 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { mov dword ptr [g_012fba5c], edx }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { L_00898773: }
	__asm { mov edx, 0x12fba5c }
	__asm { L_00898778: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, ecx }
	__asm { je L_008987d8 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0099e8e0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_008987bc }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov byte ptr [eax + 0xb0], 1 }
	__asm { L_008987bc: }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { push edi }
	__asm { call fn_00a24920 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_007b4f50 }
	__asm { L_008987d8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00892850();
extern "C" void fn_00894e80();
// FUNCTION: ROBLOXSTUDIO 0x00898ee0
extern "C" __declspec(naked) void asm_00898ee0()
{
	__asm { L_00898ee0: }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00898f36 }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [edi + 0x28], edi }
	__asm { sete dl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [edi + 4], eax }
	__asm { setne al }
	__asm { cmp eax, edx }
	__asm { jne L_00898f36 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00898f25 }
	__asm { push 0x77 }
	__asm { push 0xe66eb8 }
	__asm { push 0xe66f64 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00898f36 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00898f25: }
	__asm { movzx eax, cl }
	__asm { push 0xe66f98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00898f36: }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { je L_00898ffb }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { mov ecx, esi }
	__asm { call L_00898ee0 }
	__asm { mov eax, dword ptr [edi + 0xa0] }
	__asm { cmp eax, dword ptr [esi + 0xa0] }
	__asm { je L_00898ffa }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { call L_00898ee0 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ecx, esi }
	__asm { call L_00898ee0 }
	__asm { lea eax, [edi + 0xa4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00892850 }
	__asm { push eax }
	__asm { lea eax, [esi + 0xa4] }
	__asm { push eax }
	__asm { call fn_00894e80 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00898fe4 }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { mov ecx, esi }
	__asm { call L_00898ee0 }
	__asm { mov eax, dword ptr [edi + 0xa0] }
	__asm { cmp eax, dword ptr [esi + 0xa0] }
	__asm { jne L_00898fe4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00898fcf }
	__asm { push 0x80 }
	__asm { push 0xe66eb8 }
	__asm { push 0xe67018 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00898fe4 }
	__asm { L_00898fcf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe67048 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00898fe4: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { mov ecx, esi }
	__asm { call L_00898ee0 }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { mov dword ptr [edi + 0xa0], eax }
	__asm { L_00898ffa: }
	__asm { pop esi }
	__asm { L_00898ffb: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_0041bf30();
extern "C" void fn_00421060();
extern "C" void fn_00421110();
// FUNCTION: ROBLOXSTUDIO 0x00899770
extern "C" __declspec(naked) void asm_00899770()
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
	__asm { je L_008997bb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008997bb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0089980e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe69690 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe69698 }
	__asm { mov dword ptr [esi + 8], 0xe696a8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe696b0 }
	__asm { mov dword ptr [esi + 8], 0xe696c0 }
	__asm { jmp L_00899810 }
	__asm { L_0089980e: }
	__asm { xor esi, esi }
	__asm { L_00899810: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0041bf30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0089982d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0089982d: }
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
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x00899850
extern "C" __declspec(naked) void asm_00899850()
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
	__asm { je L_0089989b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0089989b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_008998ee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe696c8 }
	__asm { mov dword ptr [esi + 8], 0xe696d8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe696e0 }
	__asm { mov dword ptr [esi + 8], 0xe696f0 }
	__asm { jmp L_008998f0 }
	__asm { L_008998ee: }
	__asm { xor esi, esi }
	__asm { L_008998f0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0089990d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0089990d: }
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
extern "C" void fn_007d5630();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00899cb0();
// FUNCTION: ROBLOXSTUDIO 0x00899a70
extern "C" __declspec(naked) void asm_00899a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52aeb }
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
	__asm { call fn_00899cb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe69084 }
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
	__asm { call fn_007d5630 }
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
	__asm { je L_00899b1e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00899b1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ec3dc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00899cb0
extern "C" __declspec(naked) void asm_00899cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ec3dc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00899d2a }
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
	__asm { L_00899d2a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ec2b0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6906c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00899da2 }
	__asm { push 0x11edf38 }
	__asm { mov ecx, 0x11edf38 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00899da2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00899d8d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00899da2 }
	__asm { L_00899d8d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00899da2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408d90();
extern "C" void fn_004fd9d0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x0089a8b0
extern "C" __declspec(naked) void asm_0089a8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test bl, bl }
	__asm { je L_0089a90f }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { call fn_00408d90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x7c] }
	__asm { jne L_0089a90f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0089a8fe }
	__asm { push 0x2b }
	__asm { push 0xe690d0 }
	__asm { push 0xe691f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089a90f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0089a8fe: }
	__asm { movzx eax, bl }
	__asm { push 0xe69228 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089a90f: }
	__asm { mov esi, dword ptr [edi + 0x7c] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0089a934 }
	__asm { L_0089a920: }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { jae L_0089a92a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0089a92e }
	__asm { L_0089a92a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0089a92e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0089a920 }
	__asm { L_0089a934: }
	__asm { cmp ecx, esi }
	__asm { je L_0089a940 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { jae L_0089a943 }
	__asm { L_0089a940: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { L_0089a943: }
	__asm { lea esi, [ebp + 8] }
	__asm { mov esi, dword ptr [esi] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_006b9e50 }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { call fn_004fd9d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0089bdf0();
// FUNCTION: ROBLOXSTUDIO 0x0089bba0
extern "C" __declspec(naked) void asm_0089bba0()
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
	__asm { call fn_0089bdf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe69718 }
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
	__asm { call fn_007d5710 }
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
	__asm { je L_0089bc4e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089bc4e: }
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
extern "C" void fn_0089bd40();
// FUNCTION: ROBLOXSTUDIO 0x0089bc70
extern "C" __declspec(naked) void asm_0089bc70()
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
	__asm { call fn_0089bd40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe6977c }
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
	__asm { jae L_0089bd02 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0089bd02: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0089bd25 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089bd25: }
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
extern "C" char g_0131abfc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089bdf0
extern "C" __declspec(naked) void asm_0089bdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c9d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131abfc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0089be6a }
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
	__asm { L_0089be6a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131ac00 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6970c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0089bee2 }
	__asm { push 0x11ee160 }
	__asm { mov ecx, 0x11ee160 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0089bee2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0089becd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089bee2 }
	__asm { L_0089becd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089bee2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0041fe80();
extern "C" void fn_006b9740();
extern "C" void fn_009415f0();
// FUNCTION: ROBLOXSTUDIO 0x0089bf00
extern "C" __declspec(naked) void asm_0089bf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test dl, dl }
	__asm { je L_0089bf5e }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_0089bf5e }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { sar ecx, 3 }
	__asm { test ecx, ecx }
	__asm { je L_0089bf5e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0089bf4d }
	__asm { push 0x5a }
	__asm { push 0xe697dc }
	__asm { push 0xe69818 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089bf5e }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_0089bf4d: }
	__asm { movzx eax, dl }
	__asm { push 0xe69830 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089bf5e: }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x68] }
	__asm { push dword ptr [edi + 0x64] }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [edi + 0x68], eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { add esp, 0x10 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_009415f0 }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db2f0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a82b40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0089ce40
extern "C" __declspec(naked) void asm_0089ce40()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0089ce95 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00a82b40 }
	__asm { mov edi, eax }
	__asm { jmp L_0089ce97 }
	__asm { L_0089ce95: }
	__asm { xor edi, edi }
	__asm { L_0089ce97: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_007db2f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0089cec8 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0089cec8 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007de8e0 }
	__asm { L_0089cec8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_007d09e0();
extern "C" void fn_007d2980();
// FUNCTION: ROBLOXSTUDIO 0x0089de40
extern "C" __declspec(naked) void asm_0089de40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efd80 }
	__asm { je L_0089df12 }
	__asm { push eax }
	__asm { mov ecx, 0x11efd80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0089df12 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0089deac }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0089deac: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007d2980 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0089df3e }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0089df12: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_007d09e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_0089df3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0089d850();
extern "C" void fn_0089ed60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e340
extern "C" __declspec(naked) void asm_0089e340()
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
	__asm { jb L_0089e40b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089ed60 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e393 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e393: }
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
	__asm { je L_0089e3f1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089d850 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089e3e0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089e3e0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e3f1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089e40b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089e40b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089e425 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e425: }
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
extern "C" void fn_0089d850();
extern "C" void fn_0089eff0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e450
extern "C" __declspec(naked) void asm_0089e450()
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
	__asm { jb L_0089e51b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089eff0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e4a3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e4a3: }
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
	__asm { je L_0089e501 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089d850 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089e4f0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089e4f0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e501: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089e51b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089e51b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089e535 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e535: }
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
extern "C" void fn_00825140();
extern "C" void fn_0089d980();
extern "C" void fn_0089ecc0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e560
extern "C" __declspec(naked) void asm_0089e560()
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
	__asm { jb L_0089e62b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089ecc0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e5b3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e5b3: }
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
	__asm { je L_0089e611 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089d980 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089e600 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089e600: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e611: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089e62b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089e62b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089e645 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e645: }
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
extern "C" void fn_0089d980();
extern "C" void fn_0089ee00();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e670
extern "C" __declspec(naked) void asm_0089e670()
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
	__asm { jb L_0089e73b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089ee00 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e6c3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e6c3: }
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
	__asm { je L_0089e721 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089d980 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089e710 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089e710: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e721: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089e73b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089e73b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089e755 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e755: }
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
extern "C" void fn_00825140();
extern "C" void fn_0089dab0();
extern "C" void fn_0089eea0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e780
extern "C" __declspec(naked) void asm_0089e780()
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
	__asm { jb L_0089e84b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089eea0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e7d3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e7d3: }
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
	__asm { je L_0089e831 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089dab0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089e820 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089e820: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e831: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089e84b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089e84b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089e865 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e865: }
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
extern "C" void fn_00825140();
extern "C" void fn_0089dab0();
extern "C" void fn_0089f130();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e890
extern "C" __declspec(naked) void asm_0089e890()
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
	__asm { jb L_0089e95b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089f130 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e8e3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e8e3: }
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
	__asm { je L_0089e941 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089dab0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089e930 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089e930: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e941: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089e95b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089e95b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089e975 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e975: }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_0089dbe0();
extern "C" void fn_0089f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089e9a0
extern "C" __declspec(naked) void asm_0089e9a0()
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
	__asm { jb L_0089ea6b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089f090 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089e9f3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089e9f3: }
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
	__asm { je L_0089ea51 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089dbe0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089ea40 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089ea40: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ea51: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089ea6b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089ea6b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089ea85 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089ea85: }
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
extern "C" void fn_00825140();
extern "C" void fn_0089dd10();
extern "C" void fn_0089ef40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0089eab0
extern "C" __declspec(naked) void asm_0089eab0()
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
	__asm { jb L_0089eb7b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089ef40 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_0089eb03 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089eb03: }
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
	__asm { je L_0089eb61 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0089dd10 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0089eb50 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0089eb50: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089eb61: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0089eb7b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089eb7b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0089eb95 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089eb95: }
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

extern "C" void fn_00827190();
// FUNCTION: ROBLOXSTUDIO 0x0089f320
extern "C" __declspec(naked) void asm_0089f320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar eax, 8 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0089f33d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0089f33f }
	__asm { L_0089f33d: }
	__asm { mov ecx, esi }
	__asm { L_0089f33f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0089f34d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0089f34f }
	__asm { L_0089f34d: }
	__asm { mov ecx, esi }
	__asm { L_0089f34f: }
	__asm { test eax, eax }
	__asm { je L_0089f355 }
	__asm { sub eax, ecx }
	__asm { L_0089f355: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_00827190 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0089f36e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0089f370 }
	__asm { L_0089f36e: }
	__asm { mov ecx, esi }
	__asm { L_0089f370: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0089f37e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0089f380 }
	__asm { L_0089f37e: }
	__asm { mov ecx, esi }
	__asm { L_0089f380: }
	__asm { test eax, eax }
	__asm { jne L_0089f396 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_00827190 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089f396: }
	__asm { push dword ptr [ebp - 4] }
	__asm { sub eax, ecx }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00827190 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a24b0();
// FUNCTION: ROBLOXSTUDIO 0x0089f3b0
extern "C" __declspec(naked) void asm_0089f3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cb89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a2c0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008a24b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008a0660();
extern "C" void fn_00a56540();
// FUNCTION: ROBLOXSTUDIO 0x0089f490
extern "C" __declspec(naked) void asm_0089f490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a428 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_00a56540 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0089f544 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089f544: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a25a0();
// FUNCTION: ROBLOXSTUDIO 0x0089f560
extern "C" __declspec(naked) void asm_0089f560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cb89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a388 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008a25a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5be0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008a0660();
// FUNCTION: ROBLOXSTUDIO 0x0089f640
extern "C" __declspec(naked) void asm_0089f640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a3bc }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5be0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5be0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0089f6f4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089f6f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a2690();
// FUNCTION: ROBLOXSTUDIO 0x0089f710
extern "C" __declspec(naked) void asm_0089f710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cc12 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a2d4 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp + 0x30], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x2c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_008a2690 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a2840();
// FUNCTION: ROBLOXSTUDIO 0x0089f860
extern "C" __declspec(naked) void asm_0089f860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cc7f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a32c }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp + 0x2c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_008a2840 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a29b0();
// FUNCTION: ROBLOXSTUDIO 0x0089f980
extern "C" __declspec(naked) void asm_0089f980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ccc9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a440 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008a29b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008a0660();
extern "C" void fn_00a56540();
// FUNCTION: ROBLOXSTUDIO 0x0089fa60
extern "C" __declspec(naked) void asm_0089fa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a36c }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_00a56540 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0089fb14 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0089fb14: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a2aa0();
// FUNCTION: ROBLOXSTUDIO 0x0089fb30
extern "C" __declspec(naked) void asm_0089fb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cd2c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a2fc }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_008a2aa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_008a2bd0();
// FUNCTION: ROBLOXSTUDIO 0x0089fc30
extern "C" __declspec(naked) void asm_0089fc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cb89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_008a0660 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe6a350 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x14], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_008a2bd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4e14[];
extern "C" char g_0131d064[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_008a05b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0089fd10
extern "C" __declspec(naked) void asm_0089fd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cd56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_0089fd46 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_0089fd46: }
	__asm { push 0 }
	__asm { call fn_008a05b0 }
	__asm { mov eax, dword ptr [g_0131d064] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0089fda3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d064], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10034d4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x131d068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0089fda3: }
	__asm { mov dword ptr [esi + 0x28], 0x131d068 }
	__asm { inc dword ptr [g_012e4e14] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe69b84 }
	__asm { mov dword ptr [esi + 4], 0xe69c90 }
	__asm { mov dword ptr [esi + 0x18], 0xe69c98 }
	__asm { mov dword ptr [esi + 0x1c], 0xe69ca4 }
	__asm { mov dword ptr [esi + 0x64], 0xe69cb4 }
	__asm { mov dword ptr [esi + 0x70], 0xe69cbc }
	__asm { mov dword ptr [esi + 0x98], 0xe69cdc }
	__asm { mov dword ptr [esi + 0xb0], 0xe69d10 }
	__asm { mov dword ptr [esi + 0xc4], 0xe69d3c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe69d44 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x0089fe30
extern "C" __declspec(naked) void asm_0089fe30()
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
	__asm { push 0x11f11d0 }
	__asm { mov edi, ecx }
	__asm { push 0xe6a0a4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59e68 }
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
	__asm { push 0xe6a0b0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a0b8 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a0c8 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a0d4 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a0e8 }
	__asm { push 4 }
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
// FUNCTION: ROBLOXSTUDIO 0x008a01a0
extern "C" __declspec(naked) void asm_008a01a0()
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
	__asm { push 0x11f11f4 }
	__asm { mov edi, ecx }
	__asm { push 0xe6a0f8 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59e80 }
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
	__asm { push 0xe6a108 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a870 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a878 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a110 }
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

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x008a02f0
extern "C" __declspec(naked) void asm_008a02f0()
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
	__asm { push 0x11f1248 }
	__asm { mov edi, ecx }
	__asm { push 0xe6a134 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59eb0 }
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
	__asm { push 0xe6a110 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a870 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a144 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a874 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a108 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a878 }
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
// FUNCTION: ROBLOXSTUDIO 0x008a0450
extern "C" __declspec(naked) void asm_008a0450()
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
	__asm { push 0x11f1220 }
	__asm { mov edi, ecx }
	__asm { push 0xe6a118 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59e98 }
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
	__asm { push 0x10131d4 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a124 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xf133d4 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6a12c }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100a8a0 }
	__asm { push 4 }
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
extern "C" char g_0131d064[];
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a0660
extern "C" __declspec(naked) void asm_008a0660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cd76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131d064] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008a06da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d064], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10034d4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x131d068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008a06da: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131d068 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6a2b4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008a0752 }
	__asm { push 0x120c588 }
	__asm { mov ecx, 0x120c588 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008a0752 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a073d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a0752 }
	__asm { L_008a073d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a0752: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d5780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a0770
extern "C" __declspec(naked) void asm_008a0770()
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
	__asm { call fn_007d5780 }
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
	__asm { mov dword ptr [edi], 0xe6a1a8 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008a0807 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008a07f6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_008a07f6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008a0807 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_008a0807: }
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
extern "C" void fn_00a56540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a0830
extern "C" __declspec(naked) void asm_008a0830()
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
	__asm { call fn_00a56540 }
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
	__asm { mov dword ptr [edi], 0xe6a230 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008a08c7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008a08b6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_008a08b6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008a08c7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_008a08c7: }
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

extern "C" char g_0121036b[];
extern "C" void fn_006b8a90();
extern "C" void fn_008a0be0();
extern "C" void fn_008a0cc0();
extern "C" void fn_0096cb20();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x008a0d30
extern "C" __declspec(naked) void asm_008a0d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cdd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe69d4c }
	__asm { mov dword ptr [esi + 4], 0xe69e58 }
	__asm { mov dword ptr [esi + 0x18], 0xe69e60 }
	__asm { mov dword ptr [esi + 0x1c], 0xe69e6c }
	__asm { mov dword ptr [esi + 0x64], 0xe69e7c }
	__asm { mov dword ptr [esi + 0x70], 0xe69e84 }
	__asm { mov dword ptr [esi + 0x98], 0xe69ea4 }
	__asm { mov dword ptr [esi + 0xb0], 0xe69ed8 }
	__asm { mov dword ptr [esi + 0xc4], 0xe69f04 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe69f0c }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x10c] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov al, byte ptr [g_0121036b] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_008a0dd6 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe6a4d4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008a0dd6: }
	__asm { push 0 }
	__asm { push 0x11fa60c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_008a0dfc }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_0096cb20 }
	__asm { L_008a0dfc: }
	__asm { mov ecx, dword ptr [esi + 0x168] }
	__asm { test ecx, ecx }
	__asm { je L_008a0e0c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008a0e0c: }
	__asm { lea ecx, [esi + 0x140] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008a0cc0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008a0be0 }
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
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008a0e40
extern "C" __declspec(naked) void asm_008a0e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008a0ea0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008a0e60 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_008a0e62 }
	__asm { L_008a0e60: }
	__asm { mov edx, eax }
	__asm { L_008a0e62: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, edx }
	__asm { cmp dword ptr [esi], eax }
	__asm { jne L_008a0ea0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a0e8f }
	__asm { push 0x12 }
	__asm { push 0xe69f20 }
	__asm { push 0xe69f68 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a0ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008a0e8f: }
	__asm { movzx eax, cl }
	__asm { push 0xe69f80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a0ea0: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_008a0ead }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_008a0eaf }
	__asm { L_008a0ead: }
	__asm { mov edx, ecx }
	__asm { L_008a0eaf: }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add ecx, edx }
	__asm { cmp eax, ecx }
	__asm { je L_008a0ecf }
	__asm { lea ecx, [eax + 1] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008a0ecf: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe69fe8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d55c0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008a24b0
extern "C" __declspec(naked) void asm_008a24b0()
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
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_008a2551 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2551: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008a2568 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2568: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008a2588 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2588: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5be0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008a25a0
extern "C" __declspec(naked) void asm_008a25a0()
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
	__asm { call fn_007d5be0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_008a2641 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2641: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008a2658 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2658: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008a2678 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2678: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_007d5c50();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008a29b0
extern "C" __declspec(naked) void asm_008a29b0()
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
	__asm { call fn_007d5c50 }
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_008a2a51 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2a51: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008a2a68 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2a68: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008a2a88 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2a88: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008a2bd0
extern "C" __declspec(naked) void asm_008a2bd0()
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
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_008a2c71 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2c71: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008a2c88 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2c88: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008a2ca8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008a2ca8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a2cc0
extern "C" __declspec(naked) void asm_008a2cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_008a2cd6: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { je L_008a2ce1 }
	__asm { add edi, -0x2c }
	__asm { jmp L_008a2ce3 }
	__asm { L_008a2ce1: }
	__asm { xor edi, edi }
	__asm { L_008a2ce3: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebx], eax }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { je L_008a2d17 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { L_008a2d17: }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_008a2d46 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_008a2d46: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebx], ecx }
	__asm { jne L_008a2cd6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0089cef0();
extern "C" void fn_008a0e40();
// FUNCTION: ROBLOXSTUDIO 0x008a2d70
extern "C" __declspec(naked) void asm_008a2d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { je L_008a2e45 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jb L_008a2d8e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008a2d8e: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { L_008a2d95: }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_008a0e40 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_008a0e40 }
	__asm { lea eax, [ebp - 3] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_008a0e40 }
	__asm { lea eax, [ebp - 2] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_008a0e40 }
	__asm { lea eax, [ebp - 5] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_008a0e40 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_008a0e40 }
	__asm { movzx ecx, byte ptr [ebp + 0xf] }
	__asm { movzx eax, byte ptr [ebp - 1] }
	__asm { shl cx, 8 }
	__asm { or cx, ax }
	__asm { movzx eax, byte ptr [ebp - 3] }
	__asm { mov word ptr [ebp - 0xc], cx }
	__asm { movzx ecx, byte ptr [ebp - 2] }
	__asm { shl cx, 8 }
	__asm { or cx, ax }
	__asm { movzx eax, byte ptr [ebp - 5] }
	__asm { mov word ptr [ebp - 0xa], cx }
	__asm { movzx ecx, byte ptr [ebp - 4] }
	__asm { shl cx, 8 }
	__asm { or cx, ax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov word ptr [ebp - 8], cx }
	__asm { call fn_0089cef0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_008a2e34 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_008a2e36 }
	__asm { L_008a2e34: }
	__asm { mov eax, ecx }
	__asm { L_008a2e36: }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { add ecx, eax }
	__asm { cmp dword ptr [ebp - 0x14], ecx }
	__asm { jne L_008a2d95 }
	__asm { pop esi }
	__asm { L_008a2e45: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a2e80
extern "C" __declspec(naked) void asm_008a2e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cec0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov edi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_008a2ed2 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_008a2ed2: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { sete bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008a2ef6 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a2ef6: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_008a2f19 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a2f19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
