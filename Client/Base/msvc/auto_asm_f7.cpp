// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7e90
extern "C" __declspec(naked) void asm_00dc7e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 3 }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { call fn_006da0e0 }
	__asm { push 0xeac904 }
	__asm { push 0xe3af14 }
	__asm { push 0xeac90c }
	__asm { push 0 }
	__asm { push 0xa64510 }
	__asm { mov ecx, 0x1308318 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfde80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7ee0
extern "C" __declspec(naked) void asm_00dc7ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 3 }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { call fn_006da0e0 }
	__asm { push 0xeac904 }
	__asm { push 0xe3af14 }
	__asm { push 0xeac934 }
	__asm { push 0 }
	__asm { push 0xa64610 }
	__asm { mov ecx, 0x13083c0 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfdf00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7f30
extern "C" __declspec(naked) void asm_00dc7f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 3 }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { call fn_006da0e0 }
	__asm { push 0xeac904 }
	__asm { push 0xe3af14 }
	__asm { push 0xeac95c }
	__asm { push 0 }
	__asm { push 0xa64c60 }
	__asm { mov ecx, 0x1308468 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfdf80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013084a0[];
extern "C" char g_013084bc[];
extern "C" char g_013084c8[];
extern "C" char g_013084cc[];
extern "C" void fn_00825140();
extern "C" void fn_00a63e30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8040
extern "C" __declspec(naked) void asm_00dc8040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4984a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13084a0 }
	__asm { push 3 }
	__asm { push 0xeac974 }
	__asm { call fn_00a63e30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013084a0], 0xeac96c }
	__asm { mov dword ptr [g_013084c8], 0xa654f0 }
	__asm { mov dword ptr [g_013084cc], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfe210 }
	__asm { mov dword ptr [g_013084bc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130870c[];
extern "C" char g_0130873c[];
extern "C" char g_01308740[];
extern "C" void fn_00a67b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc82a0
extern "C" __declspec(naked) void asm_00dc82a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130870c }
	__asm { push 6 }
	__asm { push 0xead054 }
	__asm { push 0xead068 }
	__asm { push 0x6c }
	__asm { call fn_00a67b60 }
	__asm { push 0xdfe450 }
	__asm { mov dword ptr [g_0130870c], 0xead038 }
	__asm { mov dword ptr [g_0130873c], 0 }
	__asm { mov dword ptr [g_01308740], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308610[];
extern "C" char g_0130862c[];
extern "C" char g_01308638[];
extern "C" char g_0130863c[];
extern "C" void fn_00825060();
extern "C" void fn_00a67e30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc83c0
extern "C" __declspec(naked) void asm_00dc83c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49d6a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1308610 }
	__asm { push 0 }
	__asm { push 0xeacf30 }
	__asm { call fn_00a67e30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01308610], 0xeacf28 }
	__asm { mov dword ptr [g_01308638], 0xa6b640 }
	__asm { mov dword ptr [g_0130863c], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdfe570 }
	__asm { mov dword ptr [g_0130862c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308640[];
extern "C" char g_0130865c[];
extern "C" char g_01308668[];
extern "C" char g_0130866c[];
extern "C" void fn_00825140();
extern "C" void fn_00a67e30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8440
extern "C" __declspec(naked) void asm_00dc8440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49d8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1308640 }
	__asm { push 5 }
	__asm { push 0xeacf4c }
	__asm { call fn_00a67e30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01308640], 0xeacf44 }
	__asm { mov dword ptr [g_01308668], 0xa6ce70 }
	__asm { mov dword ptr [g_0130866c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfe5d0 }
	__asm { mov dword ptr [g_0130865c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308908[];
extern "C" char g_01308938[];
extern "C" char g_0130893c[];
extern "C" void fn_00a6e440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8500
extern "C" __declspec(naked) void asm_00dc8500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1308908 }
	__asm { push 0 }
	__asm { push 0xead764 }
	__asm { push 0xe73878 }
	__asm { push 0xead7d0 }
	__asm { push 0x90 }
	__asm { call fn_00a6e440 }
	__asm { push 0xdfe6e0 }
	__asm { mov dword ptr [g_01308908], 0xead7b4 }
	__asm { mov dword ptr [g_01308938], 1 }
	__asm { mov dword ptr [g_0130893c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6e050();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8560
extern "C" __declspec(naked) void asm_00dc8560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13088d0 }
	__asm { push 5 }
	__asm { push 0xead764 }
	__asm { push 0xe73878 }
	__asm { push 0xead774 }
	__asm { push 0 }
	__asm { push 0xa6f550 }
	__asm { call fn_00a6e050 }
	__asm { push 0xdfe740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6dba0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc85b0
extern "C" __declspec(naked) void asm_00dc85b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa6f410 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa6f290 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xead6f0 }
	__asm { mov ecx, 0x1308874 }
	__asm { call fn_00a6dba0 }
	__asm { push 0xdfe750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6d780();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8610
extern "C" __declspec(naked) void asm_00dc8610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa6f440 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x532380 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xead64c }
	__asm { mov ecx, 0x130880c }
	__asm { call fn_00a6d780 }
	__asm { push 0xdfe770 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6d630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8720
extern "C" __declspec(naked) void asm_00dc8720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa6f4c0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa6f2c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xead5e8 }
	__asm { mov ecx, 0x13087e0 }
	__asm { call fn_00a6d630 }
	__asm { push 0xdfe7d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6f700();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8780
extern "C" __declspec(naked) void asm_00dc8780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa6fd80 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa6fd00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadabc }
	__asm { mov ecx, 0x130896c }
	__asm { call fn_00a6f700 }
	__asm { push 0xdfe7f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a6f700();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc87e0
extern "C" __declspec(naked) void asm_00dc87e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa6fe10 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa6fd40 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadab0 }
	__asm { mov ecx, 0x1308940 }
	__asm { call fn_00a6f700 }
	__asm { push 0xdfe810 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8840
extern "C" __declspec(naked) void asm_00dc8840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa709d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70820 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeade48 }
	__asm { mov ecx, 0x1308c2c }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe830 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc88a0
extern "C" __declspec(naked) void asm_00dc88a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70a30 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa708a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd9c }
	__asm { mov ecx, 0x1308acc }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8900
extern "C" __declspec(naked) void asm_00dc8900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70a60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa708b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeade54 }
	__asm { mov ecx, 0x1308c58 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8960
extern "C" __declspec(naked) void asm_00dc8960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70a90 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa708c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadf2c }
	__asm { mov ecx, 0x1308ce4 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe890 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc89c0
extern "C" __declspec(naked) void asm_00dc89c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70ac0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa708d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd18 }
	__asm { mov ecx, 0x1308998 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe8b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8a20
extern "C" __declspec(naked) void asm_00dc8a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70af0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa708e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeade28 }
	__asm { mov ecx, 0x1308bd4 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe8d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8a80
extern "C" __declspec(naked) void asm_00dc8a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70b20 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa708f0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeaddb8 }
	__asm { mov ecx, 0x1308af8 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe8f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8ae0
extern "C" __declspec(naked) void asm_00dc8ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70b50 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70900 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadde0 }
	__asm { mov ecx, 0x1308b50 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8b40
extern "C" __declspec(naked) void asm_00dc8b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70b80 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70910 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd7c }
	__asm { mov ecx, 0x1308a74 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe930 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8ba0
extern "C" __declspec(naked) void asm_00dc8ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70bb0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70920 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd8c }
	__asm { mov ecx, 0x1308aa0 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe950 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8c00
extern "C" __declspec(naked) void asm_00dc8c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70be0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70930 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeaddf8 }
	__asm { mov ecx, 0x1308b7c }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8c60
extern "C" __declspec(naked) void asm_00dc8c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70c10 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70940 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeade14 }
	__asm { mov ecx, 0x1308ba8 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8cc0
extern "C" __declspec(naked) void asm_00dc8cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70c40 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70950 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd54 }
	__asm { mov ecx, 0x1308a1c }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe9b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8d20
extern "C" __declspec(naked) void asm_00dc8d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70c70 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70960 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd28 }
	__asm { mov ecx, 0x13089c4 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe9d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8d80
extern "C" __declspec(naked) void asm_00dc8d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70ca0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70970 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeaddcc }
	__asm { mov ecx, 0x1308b24 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfe9f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8de0
extern "C" __declspec(naked) void asm_00dc8de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70cd0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70980 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeade3c }
	__asm { mov ecx, 0x1308c00 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfea10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8e40
extern "C" __declspec(naked) void asm_00dc8e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70d00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa70990 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd3c }
	__asm { mov ecx, 0x13089f0 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfea30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8ea0
extern "C" __declspec(naked) void asm_00dc8ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70d30 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa709a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xeadd10 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadd68 }
	__asm { mov ecx, 0x1308a48 }
	__asm { call fn_00a70260 }
	__asm { push 0xdfea50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a70110();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc8f00
extern "C" __declspec(naked) void asm_00dc8f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa70d60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa709b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeadf18 }
	__asm { mov ecx, 0x1308cb8 }
	__asm { call fn_00a70110 }
	__asm { push 0xdfea70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00a74290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9100
extern "C" __declspec(naked) void asm_00dc9100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xf12998 }
	__asm { push 0 }
	__asm { push 0xa79ba0 }
	__asm { mov ecx, 0x1308ec0 }
	__asm { call fn_00a74290 }
	__asm { push 0xdfeb50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00a74290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9200
extern "C" __declspec(naked) void asm_00dc9200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xeae38c }
	__asm { push 0 }
	__asm { push 0xa7c860 }
	__asm { mov ecx, 0x1308e88 }
	__asm { call fn_00a74290 }
	__asm { push 0xdfecd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00a74290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9340
extern "C" __declspec(naked) void asm_00dc9340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xe31fdc }
	__asm { push 0 }
	__asm { push 0xa7de30 }
	__asm { mov ecx, 0x1308e50 }
	__asm { call fn_00a74290 }
	__asm { push 0xdfee70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309428[];
extern "C" char g_01309458[];
extern "C" char g_0130945c[];
extern "C" void fn_00a74d70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc93a0
extern "C" __declspec(naked) void asm_00dc93a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1309428 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { push 0x1032eb8 }
	__asm { push 0x1022f74 }
	__asm { push 0xeae460 }
	__asm { push 0xeae58c }
	__asm { push 0x1a8 }
	__asm { call fn_00a74d70 }
	__asm { push 0xdfef20 }
	__asm { mov dword ptr [g_01309428], 0xeae570 }
	__asm { mov dword ptr [g_01309458], 0 }
	__asm { mov dword ptr [g_0130945c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013093f0[];
extern "C" char g_01309420[];
extern "C" char g_01309424[];
extern "C" void fn_00a74b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9410
extern "C" __declspec(naked) void asm_00dc9410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13093f0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { push 0x1032eb8 }
	__asm { push 0x1022f74 }
	__asm { push 0xeae538 }
	__asm { push 0x1a0 }
	__asm { call fn_00a74b90 }
	__asm { push 0xdfef80 }
	__asm { mov dword ptr [g_013093f0], 0xeae51c }
	__asm { mov dword ptr [g_01309420], 0 }
	__asm { mov dword ptr [g_01309424], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013092e8[];
extern "C" char g_01309304[];
extern "C" char g_01309310[];
extern "C" char g_01309314[];
extern "C" void fn_00825140();
extern "C" void fn_00a75190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9580
extern "C" __declspec(naked) void asm_00dc9580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ac7a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13092e8 }
	__asm { push 0 }
	__asm { push 0x100e504 }
	__asm { call fn_00a75190 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013092e8], 0xeae488 }
	__asm { mov dword ptr [g_01309310], 0xa79ad0 }
	__asm { mov dword ptr [g_01309314], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdff0b0 }
	__asm { mov dword ptr [g_01309304], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a74480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9600
extern "C" __declspec(naked) void asm_00dc9600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1309268 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe3ef24 }
	__asm { push 0xeae454 }
	__asm { push 0xf12998 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xa79c70 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00a74480 }
	__asm { push 0xdff110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a74480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9660
extern "C" __declspec(naked) void asm_00dc9660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13092a8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe3ef24 }
	__asm { push 0xeae454 }
	__asm { push 0xeae47c }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xa7a040 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00a74480 }
	__asm { push 0xdff120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309318[];
extern "C" char g_01309334[];
extern "C" char g_01309340[];
extern "C" char g_01309344[];
extern "C" void fn_00825060();
extern "C" void fn_00a75190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc96c0
extern "C" __declspec(naked) void asm_00dc96c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ac9a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1309318 }
	__asm { push 3 }
	__asm { push 0xeae49c }
	__asm { call fn_00a75190 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01309318], 0xeae494 }
	__asm { mov dword ptr [g_01309340], 0xa7ac00 }
	__asm { mov dword ptr [g_01309344], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdff130 }
	__asm { mov dword ptr [g_01309334], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a74480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc97c0
extern "C" __declspec(naked) void asm_00dc97c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1309128 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52df8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe3ef24 }
	__asm { push 0x1022f74 }
	__asm { push 0xe4f090 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0xa7bba0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_00a74480 }
	__asm { push 0xdff2f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00a7f2e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca000
extern "C" __declspec(naked) void asm_00dca000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 6 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe53728 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xeaf7d0 }
	__asm { push 0x1016eb0 }
	__asm { push 0xeaf7d8 }
	__asm { push 0 }
	__asm { push 0xa81170 }
	__asm { mov ecx, 0x1309538 }
	__asm { call fn_00a7f2e0 }
	__asm { push 0xdff900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309508[];
extern "C" char g_01309524[];
extern "C" char g_01309530[];
extern "C" char g_01309534[];
extern "C" void fn_007d5710();
extern "C" void fn_00a7f4a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca070
extern "C" __declspec(naked) void asm_00dca070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4b41a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1309508 }
	__asm { push 0 }
	__asm { push 0xeaf7b0 }
	__asm { call fn_00a7f4a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01309508], 0xeaf7a8 }
	__asm { mov dword ptr [g_01309530], 0xa816d0 }
	__asm { mov dword ptr [g_01309534], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xdff910 }
	__asm { mov dword ptr [g_01309524], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a85240();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca850
extern "C" __declspec(naked) void asm_00dca850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1309718 }
	__asm { push 0 }
	__asm { push 0xeb08fc }
	__asm { push 0xeb0908 }
	__asm { push 0xeb0910 }
	__asm { push 0xeb0918 }
	__asm { push 0 }
	__asm { push 0xa88250 }
	__asm { call fn_00a85240 }
	__asm { push 0xdffe50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a83d40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca8a0
extern "C" __declspec(naked) void asm_00dca8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8b0f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa63570 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb08d8 }
	__asm { mov ecx, 0x13096ec }
	__asm { call fn_00a83d40 }
	__asm { push 0xdffed0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a83b30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca900
extern "C" __declspec(naked) void asm_00dca900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8bb870 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1003760 }
	__asm { mov ecx, 0x13097c0 }
	__asm { call fn_00a83b30 }
	__asm { push 0xdffef0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309790[];
extern "C" char g_013097ac[];
extern "C" char g_013097b8[];
extern "C" char g_013097bc[];
extern "C" void fn_00825060();
extern "C" void fn_00a85600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca960
extern "C" __declspec(naked) void asm_00dca960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ba0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1309790 }
	__asm { push 0 }
	__asm { push 0xeb0970 }
	__asm { call fn_00a85600 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01309790], 0xeb0968 }
	__asm { mov dword ptr [g_013097b8], 0xa8a0d0 }
	__asm { mov dword ptr [g_013097bc], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdfff10 }
	__asm { mov dword ptr [g_013097ac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8bfe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca9e0
extern "C" __declspec(naked) void asm_00dca9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8dee0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913d00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a744 }
	__asm { mov ecx, 0x13099cc }
	__asm { call fn_00a8bfe0 }
	__asm { push 0xdfff90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8bfe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcaa40
extern "C" __declspec(naked) void asm_00dcaa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8df20 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa8d9a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a70c }
	__asm { mov ecx, 0x13099a0 }
	__asm { call fn_00a8bfe0 }
	__asm { push 0xdfffb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8bbc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcaaa0
extern "C" __declspec(naked) void asm_00dcaaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8df60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa8d9e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb21fc }
	__asm { mov ecx, 0x13099f8 }
	__asm { call fn_00a8bbc0 }
	__asm { push 0xdfffd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8c130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcab00
extern "C" __declspec(naked) void asm_00dcab00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8df80 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x575a80 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x10036a4 }
	__asm { mov ecx, 0x1309944 }
	__asm { call fn_00a8c130 }
	__asm { push 0xdffff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8b7a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcab60
extern "C" __declspec(naked) void asm_00dcab60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8e100 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa6f2a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe62888 }
	__asm { mov ecx, 0x1309a94 }
	__asm { call fn_00a8b7a0 }
	__asm { push 0xe00010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8b9b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcabc0
extern "C" __declspec(naked) void asm_00dcabc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8e130 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x532380 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb2188 }
	__asm { mov ecx, 0x1309a60 }
	__asm { call fn_00a8b9b0 }
	__asm { push 0xe00030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8bfe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcac20
extern "C" __declspec(naked) void asm_00dcac20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8e160 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913e10 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a700 }
	__asm { mov ecx, 0x1309974 }
	__asm { call fn_00a8bfe0 }
	__asm { push 0xe00050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8bdd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcac80
extern "C" __declspec(naked) void asm_00dcac80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8e2d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x4bb180 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb217c }
	__asm { mov ecx, 0x1309a2c }
	__asm { call fn_00a8bdd0 }
	__asm { push 0xe00070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a8e300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcace0
extern "C" __declspec(naked) void asm_00dcace0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa8f4b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa8f180 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe97864 }
	__asm { mov ecx, 0x1309afc }
	__asm { call fn_00a8e300 }
	__asm { push 0xe000a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309f90[];
extern "C" char g_01309fac[];
extern "C" char g_01309fb8[];
extern "C" char g_01309fbc[];
extern "C" void fn_00825140();
extern "C" void fn_00a94590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcafd0
extern "C" __declspec(naked) void asm_00dcafd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cafa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1309f90 }
	__asm { push 0 }
	__asm { push 0xeb51d4 }
	__asm { call fn_00a94590 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01309f90], 0xeb47f0 }
	__asm { mov dword ptr [g_01309fb8], 0xa95990 }
	__asm { mov dword ptr [g_01309fbc], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe00220 }
	__asm { mov dword ptr [g_01309fac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a1b8[];
extern "C" char g_0130a1e8[];
extern "C" char g_0130a1ec[];
extern "C" void fn_00a94210();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbcb0
extern "C" __declspec(naked) void asm_00dcbcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130a1b8 }
	__asm { push 0 }
	__asm { push 0xeb51fc }
	__asm { push 0x170 }
	__asm { call fn_00a94210 }
	__asm { push 0xe007c0 }
	__asm { mov dword ptr [g_0130a1b8], 0xeb5398 }
	__asm { mov dword ptr [g_0130a1e8], 1 }
	__asm { mov dword ptr [g_0130a1ec], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309fc0[];
extern "C" char g_01309ff0[];
extern "C" char g_01309ff4[];
extern "C" void fn_00a942c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbd10
extern "C" __declspec(naked) void asm_00dcbd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1309fc0 }
	__asm { push 0 }
	__asm { push 0xeb51fc }
	__asm { push 0x188 }
	__asm { call fn_00a942c0 }
	__asm { push 0xe00820 }
	__asm { mov dword ptr [g_01309fc0], 0xeb51e0 }
	__asm { mov dword ptr [g_01309ff0], 1 }
	__asm { mov dword ptr [g_01309ff4], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309f60[];
extern "C" char g_01309f7c[];
extern "C" char g_01309f88[];
extern "C" char g_01309f8c[];
extern "C" void fn_00825140();
extern "C" void fn_00a94590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbd70
extern "C" __declspec(naked) void asm_00dcbd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cbfa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1309f30 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1309f60 }
	__asm { push 0 }
	__asm { push 0xeb51cc }
	__asm { call fn_00a94590 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01309f60], 0xeb47f0 }
	__asm { mov dword ptr [g_01309f88], 0xa980e0 }
	__asm { mov dword ptr [g_01309f8c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe00880 }
	__asm { mov dword ptr [g_01309f7c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a188[];
extern "C" char g_0130a1a4[];
extern "C" char g_0130a1b0[];
extern "C" char g_0130a1b4[];
extern "C" void fn_007d5be0();
extern "C" void fn_00a94370();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbe00
extern "C" __declspec(naked) void asm_00dcbe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cc1a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130a188 }
	__asm { push 0 }
	__asm { push 0xeb5384 }
	__asm { call fn_00a94370 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130a188], 0xeb5370 }
	__asm { mov dword ptr [g_0130a1b0], 0x517310 }
	__asm { mov dword ptr [g_0130a1b4], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xe008e0 }
	__asm { mov dword ptr [g_0130a1a4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a158[];
extern "C" char g_0130a174[];
extern "C" char g_0130a180[];
extern "C" char g_0130a184[];
extern "C" void fn_007d5be0();
extern "C" void fn_00a94370();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbe80
extern "C" __declspec(naked) void asm_00dcbe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cc3a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130a158 }
	__asm { push 0 }
	__asm { push 0xeb5378 }
	__asm { call fn_00a94370 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130a158], 0xeb5370 }
	__asm { mov dword ptr [g_0130a180], 0x517310 }
	__asm { mov dword ptr [g_0130a184], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xe00940 }
	__asm { mov dword ptr [g_0130a174], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a278[];
extern "C" char g_0130a294[];
extern "C" char g_0130a2a0[];
extern "C" char g_0130a2a4[];
extern "C" void fn_007d5be0();
extern "C" void fn_00a94480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbf00
extern "C" __declspec(naked) void asm_00dcbf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cc5a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130a278 }
	__asm { push 0 }
	__asm { push 0xeb5384 }
	__asm { call fn_00a94480 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130a278], 0xeb547c }
	__asm { mov dword ptr [g_0130a2a0], 0xa985e0 }
	__asm { mov dword ptr [g_0130a2a4], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xe009a0 }
	__asm { mov dword ptr [g_0130a294], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ad38[];
extern "C" char g_0130ad68[];
extern "C" char g_0130ad6c[];
extern "C" void fn_00a9a520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc140
extern "C" __declspec(naked) void asm_00dcc140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130ad38 }
	__asm { push 0 }
	__asm { push 0xeb5978 }
	__asm { push 0xe63064 }
	__asm { push 0xbc }
	__asm { call fn_00a9a520 }
	__asm { push 0xe00b00 }
	__asm { mov dword ptr [g_0130ad38], 0xeb595c }
	__asm { mov dword ptr [g_0130ad68], 0 }
	__asm { mov dword ptr [g_0130ad6c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ad70[];
extern "C" char g_0130ada0[];
extern "C" char g_0130ada4[];
extern "C" void fn_00a9a520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc1a0
extern "C" __declspec(naked) void asm_00dcc1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130ad70 }
	__asm { push 0 }
	__asm { push 0xeb5978 }
	__asm { push 0xe63078 }
	__asm { push 0xc4 }
	__asm { call fn_00a9a520 }
	__asm { push 0xe00b60 }
	__asm { mov dword ptr [g_0130ad70], 0xeb595c }
	__asm { mov dword ptr [g_0130ada0], 0 }
	__asm { mov dword ptr [g_0130ada4], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ad00[];
extern "C" char g_0130ad30[];
extern "C" char g_0130ad34[];
extern "C" void fn_00a9a5f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc200
extern "C" __declspec(naked) void asm_00dcc200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130ad00 }
	__asm { push 0 }
	__asm { push 0xe566d0 }
	__asm { push 0xeb5978 }
	__asm { push 0xeb59c0 }
	__asm { push 0xb4 }
	__asm { call fn_00a9a5f0 }
	__asm { push 0xe00bc0 }
	__asm { mov dword ptr [g_0130ad00], 0xeb59a4 }
	__asm { mov dword ptr [g_0130ad30], 0 }
	__asm { mov dword ptr [g_0130ad34], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ac90[];
extern "C" char g_0130acc0[];
extern "C" char g_0130acc4[];
extern "C" void fn_00a9a520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc260
extern "C" __declspec(naked) void asm_00dcc260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130ac90 }
	__asm { push 0 }
	__asm { push 0xeb5978 }
	__asm { push 0xe62544 }
	__asm { push 0xa4 }
	__asm { call fn_00a9a520 }
	__asm { push 0xe00c20 }
	__asm { mov dword ptr [g_0130ac90], 0xeb595c }
	__asm { mov dword ptr [g_0130acc0], 0 }
	__asm { mov dword ptr [g_0130acc4], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130acc8[];
extern "C" char g_0130acf8[];
extern "C" char g_0130acfc[];
extern "C" void fn_00a9a520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc2c0
extern "C" __declspec(naked) void asm_00dcc2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130acc8 }
	__asm { push 0 }
	__asm { push 0xeb5978 }
	__asm { push 0xe62550 }
	__asm { push 0xac }
	__asm { call fn_00a9a520 }
	__asm { push 0xe00c80 }
	__asm { mov dword ptr [g_0130acc8], 0xeb595c }
	__asm { mov dword ptr [g_0130acf8], 0 }
	__asm { mov dword ptr [g_0130acfc], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a990a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc320
extern "C" __declspec(naked) void asm_00dcc320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa9d410 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa9c4d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe58a98 }
	__asm { mov ecx, 0x130ac64 }
	__asm { call fn_00a990a0 }
	__asm { push 0xe00ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130af9c[];
extern "C" char g_0130afcc[];
extern "C" char g_0130afd0[];
extern "C" void fn_00a9e8b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc520
extern "C" __declspec(naked) void asm_00dcc520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130af9c }
	__asm { push 0 }
	__asm { push 0xeb5f34 }
	__asm { push 0xe63064 }
	__asm { push 0xbc }
	__asm { call fn_00a9e8b0 }
	__asm { push 0xe00dc0 }
	__asm { mov dword ptr [g_0130af9c], 0xeb5f18 }
	__asm { mov dword ptr [g_0130afcc], 0 }
	__asm { mov dword ptr [g_0130afd0], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130afd4[];
extern "C" char g_0130b004[];
extern "C" char g_0130b008[];
extern "C" void fn_00a9e8b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc580
extern "C" __declspec(naked) void asm_00dcc580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130afd4 }
	__asm { push 0 }
	__asm { push 0xeb5f34 }
	__asm { push 0xe63078 }
	__asm { push 0xc4 }
	__asm { call fn_00a9e8b0 }
	__asm { push 0xe00e20 }
	__asm { mov dword ptr [g_0130afd4], 0xeb5f18 }
	__asm { mov dword ptr [g_0130b004], 0 }
	__asm { mov dword ptr [g_0130b008], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130af64[];
extern "C" char g_0130af94[];
extern "C" char g_0130af98[];
extern "C" void fn_00a9e980();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc5e0
extern "C" __declspec(naked) void asm_00dcc5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130af64 }
	__asm { push 0 }
	__asm { push 0xeb5f7c }
	__asm { push 0xeb5f88 }
	__asm { push 0xeb5f34 }
	__asm { push 0xeb59c0 }
	__asm { push 0xb4 }
	__asm { call fn_00a9e980 }
	__asm { push 0xe00e80 }
	__asm { mov dword ptr [g_0130af64], 0xeb5f60 }
	__asm { mov dword ptr [g_0130af94], 0 }
	__asm { mov dword ptr [g_0130af98], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130aef4[];
extern "C" char g_0130af24[];
extern "C" char g_0130af28[];
extern "C" void fn_00a9e8b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc650
extern "C" __declspec(naked) void asm_00dcc650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130aef4 }
	__asm { push 0 }
	__asm { push 0xeb5f34 }
	__asm { push 0xe62544 }
	__asm { push 0xa4 }
	__asm { call fn_00a9e8b0 }
	__asm { push 0xe00ee0 }
	__asm { mov dword ptr [g_0130aef4], 0xeb5f18 }
	__asm { mov dword ptr [g_0130af24], 0 }
	__asm { mov dword ptr [g_0130af28], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130af2c[];
extern "C" char g_0130af5c[];
extern "C" char g_0130af60[];
extern "C" void fn_00a9e8b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc6b0
extern "C" __declspec(naked) void asm_00dcc6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130af2c }
	__asm { push 0 }
	__asm { push 0xeb5f34 }
	__asm { push 0xe62550 }
	__asm { push 0xac }
	__asm { call fn_00a9e8b0 }
	__asm { push 0xe00f40 }
	__asm { mov dword ptr [g_0130af2c], 0xeb5f18 }
	__asm { mov dword ptr [g_0130af5c], 0 }
	__asm { mov dword ptr [g_0130af60], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a9d740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc710
extern "C" __declspec(naked) void asm_00dcc710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xaa1940 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xaa0800 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe58aa8 }
	__asm { mov ecx, 0x130aec8 }
	__asm { call fn_00a9d740 }
	__asm { push 0xe00fa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa1c60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc770
extern "C" __declspec(naked) void asm_00dcc770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xaa2600 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x640960 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6409c }
	__asm { mov ecx, 0x130b12c }
	__asm { call fn_00aa1c60 }
	__asm { push 0xe00fc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa4ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc7d0
extern "C" __declspec(naked) void asm_00dcc7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x130b250 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b280 }
	__asm { push 0 }
	__asm { push 0xeb7754 }
	__asm { push 0xe7baac }
	__asm { push 0xeb776c }
	__asm { push 0 }
	__asm { push 0x27c }
	__asm { call fn_00aa4ca0 }
	__asm { push 0xe00fe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa4ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc8b0
extern "C" __declspec(naked) void asm_00dcc8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b250 }
	__asm { push 0 }
	__asm { push 0xeb7754 }
	__asm { push 0xe7baac }
	__asm { push 0xe7e338 }
	__asm { push 0 }
	__asm { push 0x27c }
	__asm { call fn_00aa4ca0 }
	__asm { push 0xe01110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa4f90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc900
extern "C" __declspec(naked) void asm_00dcc900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b220 }
	__asm { push 0 }
	__asm { push 0xeb7708 }
	__asm { push 0xeb7714 }
	__asm { push 0xeb7720 }
	__asm { push 0 }
	__asm { push 0x278 }
	__asm { call fn_00aa4f90 }
	__asm { push 0xe01170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b3a8[];
extern "C" char g_0130b3dc[];
extern "C" char g_0130b3e0[];
extern "C" void fn_00aa4df0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcc990
extern "C" __declspec(naked) void asm_00dcc990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b3a8 }
	__asm { push 0 }
	__asm { push 0xe7baac }
	__asm { push 0xeb78dc }
	__asm { push 0 }
	__asm { push 0x284 }
	__asm { call fn_00aa4df0 }
	__asm { push 0xe01230 }
	__asm { mov dword ptr [g_0130b3a8], 0xeb78c0 }
	__asm { mov dword ptr [g_0130b3dc], 0 }
	__asm { mov dword ptr [g_0130b3e0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa32f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dccac0
extern "C" __declspec(naked) void asm_00dccac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { mov dword ptr [eax], 0xaa9e90 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x91a850 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe7ce30 }
	__asm { mov ecx, 0x130b190 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00aa32f0 }
	__asm { push 0xe01310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aa3800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dccb40
extern "C" __declspec(naked) void asm_00dccb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { mov dword ptr [eax], 0xaa9ee0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0xaa87d0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xeb7678 }
	__asm { mov ecx, 0x130b1bc }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00aa3800 }
	__asm { push 0xe01330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aab370();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dccf20
extern "C" __declspec(naked) void asm_00dccf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { mov dword ptr [eax], 0xaacf10 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb8c28 }
	__asm { mov dword ptr [eax], 0xaacb20 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe97864 }
	__asm { mov ecx, 0x130b5a0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00aab370 }
	__asm { push 0xe01530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aad1b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dccfa0
extern "C" __declspec(naked) void asm_00dccfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xaad940 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xaad680 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb91f4 }
	__asm { mov ecx, 0x130b5cc }
	__asm { call fn_00aad1b0 }
	__asm { push 0xe01550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b638[];
extern "C" char g_0130b654[];
extern "C" char g_0130b660[];
extern "C" char g_0130b664[];
extern "C" void fn_007d5630();
extern "C" void fn_00aadb50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd000
extern "C" __declspec(naked) void asm_00dcd000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e02a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130b638 }
	__asm { push 0 }
	__asm { push 0xeb9390 }
	__asm { call fn_00aadb50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130b638], 0xeb9388 }
	__asm { mov dword ptr [g_0130b660], 0x888350 }
	__asm { mov dword ptr [g_0130b664], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xe01570 }
	__asm { mov dword ptr [g_0130b654], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab5020();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd220
extern "C" __declspec(naked) void asm_00dcd220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130bbc8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xac5700 }
	__asm { push 0xeba038 }
	__asm { push 0x138 }
	__asm { push 0xeba044 }
	__asm { call fn_00ab5020 }
	__asm { push 0xe01750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130baf0[];
extern "C" char g_0130bb20[];
extern "C" char g_0130bb24[];
extern "C" void fn_00ab60f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd270
extern "C" __declspec(naked) void asm_00dcd270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130baf0 }
	__asm { push 5 }
	__asm { push 0xe97c6c }
	__asm { push 0xeb9f64 }
	__asm { push 0x128 }
	__asm { call fn_00ab60f0 }
	__asm { push 0xe017b0 }
	__asm { mov dword ptr [g_0130baf0], 0xeb9f48 }
	__asm { mov dword ptr [g_0130bb20], 0 }
	__asm { mov dword ptr [g_0130bb24], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b8e8[];
extern "C" char g_0130b918[];
extern "C" char g_0130b91c[];
extern "C" void fn_00ab6a80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd2d0
extern "C" __declspec(naked) void asm_00dcd2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b8e8 }
	__asm { push 5 }
	__asm { push 0xeb9d34 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9d44 }
	__asm { push 0xd8 }
	__asm { call fn_00ab6a80 }
	__asm { push 0xe01810 }
	__asm { mov dword ptr [g_0130b8e8], 0xeb9d18 }
	__asm { mov dword ptr [g_0130b918], 0 }
	__asm { mov dword ptr [g_0130b91c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b958[];
extern "C" char g_0130b988[];
extern "C" char g_0130b98c[];
extern "C" void fn_00ab66d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd340
extern "C" __declspec(naked) void asm_00dcd340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b958 }
	__asm { push 2 }
	__asm { push 0xeb9d34 }
	__asm { push 0xeb9db8 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9dc0 }
	__asm { push 0xe8 }
	__asm { call fn_00ab66d0 }
	__asm { push 0xe01870 }
	__asm { mov dword ptr [g_0130b958], 0xeb9d9c }
	__asm { mov dword ptr [g_0130b988], 0 }
	__asm { mov dword ptr [g_0130b98c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b7d0[];
extern "C" char g_0130b800[];
extern "C" char g_0130b804[];
extern "C" void fn_00ab5f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd3b0
extern "C" __declspec(naked) void asm_00dcd3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b7d0 }
	__asm { push 5 }
	__asm { push 0xeb9a50 }
	__asm { push 0xeb9b54 }
	__asm { push 0xeb9b60 }
	__asm { push 0xeb9bc4 }
	__asm { push 0x118 }
	__asm { call fn_00ab5f10 }
	__asm { push 0xe018d0 }
	__asm { mov dword ptr [g_0130b7d0], 0xeb9ba8 }
	__asm { mov dword ptr [g_0130b800], 0 }
	__asm { mov dword ptr [g_0130b804], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130bb28[];
extern "C" char g_0130bb58[];
extern "C" char g_0130bb5c[];
extern "C" void fn_00ab6c60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd420
extern "C" __declspec(naked) void asm_00dcd420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130bb28 }
	__asm { push 5 }
	__asm { push 0xe73878 }
	__asm { push 0x1024d64 }
	__asm { push 0xeb9fc0 }
	__asm { push 0x130 }
	__asm { call fn_00ab6c60 }
	__asm { push 0xe01930 }
	__asm { mov dword ptr [g_0130bb28], 0xeb9fa4 }
	__asm { mov dword ptr [g_0130bb58], 0 }
	__asm { mov dword ptr [g_0130bb5c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b878[];
extern "C" char g_0130b8a8[];
extern "C" char g_0130b8ac[];
extern "C" void fn_00ab6930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd480
extern "C" __declspec(naked) void asm_00dcd480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b878 }
	__asm { push 6 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9cb0 }
	__asm { push 0xe0 }
	__asm { call fn_00ab6930 }
	__asm { push 0xe01990 }
	__asm { mov dword ptr [g_0130b878], 0xeb9c70 }
	__asm { mov dword ptr [g_0130b8a8], 1 }
	__asm { mov dword ptr [g_0130b8ac], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ba80[];
extern "C" char g_0130bab0[];
extern "C" char g_0130bab4[];
extern "C" void fn_00ab6290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd5c0
extern "C" __declspec(naked) void asm_00dcd5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130ba80 }
	__asm { push 0 }
	__asm { push 0xeb9ea0 }
	__asm { push 0x1004e08 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9eac }
	__asm { push 0x108 }
	__asm { call fn_00ab6290 }
	__asm { push 0xe01ab0 }
	__asm { mov dword ptr [g_0130ba80], 0xeb9e84 }
	__asm { mov dword ptr [g_0130bab0], 1 }
	__asm { mov dword ptr [g_0130bab4], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b720[];
extern "C" char g_0130b750[];
extern "C" char g_0130b754[];
extern "C" void fn_00ab6470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd630
extern "C" __declspec(naked) void asm_00dcd630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b720 }
	__asm { push 5 }
	__asm { push 0xeb9aec }
	__asm { push 0xeb9afc }
	__asm { push 0x1004e08 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9b10 }
	__asm { push 0x110 }
	__asm { call fn_00ab6470 }
	__asm { push 0xe01b10 }
	__asm { mov dword ptr [g_0130b720], 0xeb9ad0 }
	__asm { mov dword ptr [g_0130b750], 1 }
	__asm { mov dword ptr [g_0130b754], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b840[];
extern "C" char g_0130b870[];
extern "C" char g_0130b874[];
extern "C" void fn_00ab6930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd6a0
extern "C" __declspec(naked) void asm_00dcd6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b840 }
	__asm { push 6 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9c8c }
	__asm { push 0xf0 }
	__asm { call fn_00ab6930 }
	__asm { push 0xe01b70 }
	__asm { mov dword ptr [g_0130b840], 0xeb9c70 }
	__asm { mov dword ptr [g_0130b870], 1 }
	__asm { mov dword ptr [g_0130b874], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130b808[];
extern "C" char g_0130b838[];
extern "C" char g_0130b83c[];
extern "C" void fn_00ab61c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd700
extern "C" __declspec(naked) void asm_00dcd700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130b808 }
	__asm { push 5 }
	__asm { push 0xeb9c1c }
	__asm { push 0xeb9c30 }
	__asm { push 0x120 }
	__asm { call fn_00ab61c0 }
	__asm { push 0xe01bd0 }
	__asm { mov dword ptr [g_0130b808], 0xeb9c00 }
	__asm { mov dword ptr [g_0130b838], 1 }
	__asm { mov dword ptr [g_0130b83c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab5580();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd760
extern "C" __declspec(naked) void asm_00dcd760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b8b0 }
	__asm { push 5 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9cdc }
	__asm { push 0 }
	__asm { push 0xac5780 }
	__asm { call fn_00ab5580 }
	__asm { push 0xe01c30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130bb98[];
extern "C" char g_0130bbb4[];
extern "C" char g_0130bbc0[];
extern "C" char g_0130bbc4[];
extern "C" void fn_007d5710();
extern "C" void fn_00ab6f70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd8a0
extern "C" __declspec(naked) void asm_00dcd8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ef8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130bb98 }
	__asm { push 0 }
	__asm { push 0xeba00c }
	__asm { call fn_00ab6f70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130bb98], 0xeba004 }
	__asm { mov dword ptr [g_0130bbc0], 0xac0b00 }
	__asm { mov dword ptr [g_0130bbc4], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xe01c70 }
	__asm { mov dword ptr [g_0130bbb4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab5700();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd920
extern "C" __declspec(naked) void asm_00dcd920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b990 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xeb9df4 }
	__asm { push 0x1004e08 }
	__asm { push 0xeb9e00 }
	__asm { push 0 }
	__asm { push 0xac0ea0 }
	__asm { call fn_00ab5700 }
	__asm { push 0xe01cd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab5820();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd970
extern "C" __declspec(naked) void asm_00dcd970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b9c8 }
	__asm { push 0 }
	__asm { push 0x1004e08 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9e1c }
	__asm { push 0 }
	__asm { push 0xac4c60 }
	__asm { call fn_00ab5820 }
	__asm { push 0xe01d50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab51f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcd9c0
extern "C" __declspec(naked) void asm_00dcd9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b790 }
	__asm { push 5 }
	__asm { push 0xeb9a50 }
	__asm { push 0xeb9b54 }
	__asm { push 0xeb9b60 }
	__asm { push 0xeb9b68 }
	__asm { push 0 }
	__asm { push 0xac7170 }
	__asm { call fn_00ab51f0 }
	__asm { push 0xe01d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab5110();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcda10
extern "C" __declspec(naked) void asm_00dcda10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b6a0 }
	__asm { push 5 }
	__asm { push 0xe4f0b0 }
	__asm { push 0xeb9a50 }
	__asm { push 0xe7383c }
	__asm { push 0xeb9a5c }
	__asm { push 0 }
	__asm { push 0xac71f0 }
	__asm { call fn_00ab5110 }
	__asm { push 0xe01d70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ab52d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcda60
extern "C" __declspec(naked) void asm_00dcda60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130b6e0 }
	__asm { push 5 }
	__asm { push 0xe4f0b0 }
	__asm { push 0x1004e08 }
	__asm { push 0xe73878 }
	__asm { push 0xeb9a8c }
	__asm { push 0 }
	__asm { push 0xac7240 }
	__asm { call fn_00ab52d0 }
	__asm { push 0xe01df0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac8c10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcdb90
extern "C" __declspec(naked) void asm_00dcdb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xac9d50 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xacacb0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe56b98 }
	__asm { mov ecx, 0x130bd3c }
	__asm { call fn_00ac8c10 }
	__asm { push 0xe01eb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac8de0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcdbf0
extern "C" __declspec(naked) void asm_00dcdbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xac9e70 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xacc930 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x101890c }
	__asm { mov ecx, 0x130bd6c }
	__asm { call fn_00ac8de0 }
	__asm { push 0xe01ed0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c120[];
extern "C" char g_0130c150[];
extern "C" char g_0130c154[];
extern "C" void fn_00acf7f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce300
extern "C" __declspec(naked) void asm_00dce300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130c120 }
	__asm { push 0 }
	__asm { push 0xe962d4 }
	__asm { push 0xebc7ac }
	__asm { push 0xebc7b4 }
	__asm { push 0x1011f2c }
	__asm { push 0xebc7c0 }
	__asm { push 0xcc }
	__asm { call fn_00acf7f0 }
	__asm { push 0xe023b0 }
	__asm { mov dword ptr [g_0130c120], 0xebc790 }
	__asm { mov dword ptr [g_0130c150], 1 }
	__asm { mov dword ptr [g_0130c154], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c158[];
extern "C" char g_0130c188[];
extern "C" char g_0130c18c[];
extern "C" void fn_00acf6a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce370
extern "C" __declspec(naked) void asm_00dce370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130c158 }
	__asm { push 0 }
	__asm { push 0xebc7b4 }
	__asm { push 0x1011f2c }
	__asm { push 0xebc808 }
	__asm { push 0xd4 }
	__asm { call fn_00acf6a0 }
	__asm { push 0xe02410 }
	__asm { mov dword ptr [g_0130c158], 0xebc7ec }
	__asm { mov dword ptr [g_0130c188], 1 }
	__asm { mov dword ptr [g_0130c18c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ad7890();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce510
extern "C" __declspec(naked) void asm_00dce510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130c2a8 }
	__asm { push 0 }
	__asm { push 0xebcd4c }
	__asm { push 0xebcd54 }
	__asm { push 0xebcd68 }
	__asm { push 0xebcd74 }
	__asm { push 0 }
	__asm { push 0xad8de0 }
	__asm { call fn_00ad7890 }
	__asm { push 0xe02740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c490[];
extern "C" char g_0130c4c0[];
extern "C" char g_0130c4c4[];
extern "C" void fn_00adc730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce7a0
extern "C" __declspec(naked) void asm_00dce7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130c490 }
	__asm { push 0 }
	__asm { push 0xebdfc0 }
	__asm { push 0xebdfd4 }
	__asm { push 0xebdfe8 }
	__asm { push 0xe7383c }
	__asm { push 0xebdff8 }
	__asm { push 0x68 }
	__asm { call fn_00adc730 }
	__asm { push 0xe029c0 }
	__asm { mov dword ptr [g_0130c490], 0xebdfa4 }
	__asm { mov dword ptr [g_0130c4c0], 1 }
	__asm { mov dword ptr [g_0130c4c4], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adc4f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce810
extern "C" __declspec(naked) void asm_00dce810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130c458 }
	__asm { push 0 }
	__asm { push 0xe9623c }
	__asm { push 0xe7383c }
	__asm { push 0xebdf74 }
	__asm { push 0 }
	__asm { push 0xadfb10 }
	__asm { call fn_00adc4f0 }
	__asm { push 0xe02a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c428[];
extern "C" char g_0130c444[];
extern "C" char g_0130c450[];
extern "C" char g_0130c454[];
extern "C" void fn_007d5390();
extern "C" void fn_00adca40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce860
extern "C" __declspec(naked) void asm_00dce860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5156a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130c428 }
	__asm { push 0 }
	__asm { push 0xebdf54 }
	__asm { call fn_00adca40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130c428], 0xebdf4c }
	__asm { mov dword ptr [g_0130c450], 0xae0cc0 }
	__asm { mov dword ptr [g_0130c454], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xe02aa0 }
	__asm { mov dword ptr [g_0130c444], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae3210();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dce9c0
extern "C" __declspec(naked) void asm_00dce9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4300 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xebea34 }
	__asm { mov ecx, 0x130c580 }
	__asm { call fn_00ae3210 }
	__asm { push 0xe02c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae2f70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcea20
extern "C" __declspec(naked) void asm_00dcea20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xae7110 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4340 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xebeaec }
	__asm { mov ecx, 0x130c630 }
	__asm { call fn_00ae2f70 }
	__asm { push 0xe02c60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae3360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcea80
extern "C" __declspec(naked) void asm_00dcea80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xae5420 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4390 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xebea24 }
	__asm { mov ecx, 0x130c554 }
	__asm { call fn_00ae3360 }
	__asm { push 0xe02c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae30c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dceae0
extern "C" __declspec(naked) void asm_00dceae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xae74a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4770 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82c00 }
	__asm { mov ecx, 0x130c528 }
	__asm { call fn_00ae30c0 }
	__asm { push 0xe02ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae2f70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dceb40
extern "C" __declspec(naked) void asm_00dceb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xae7530 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4bd0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xebeae0 }
	__asm { mov ecx, 0x130c604 }
	__asm { call fn_00ae2f70 }
	__asm { push 0xe02cc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae34b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dceba0
extern "C" __declspec(naked) void asm_00dceba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xae75c0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4c20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xebea84 }
	__asm { mov ecx, 0x130c5ac }
	__asm { call fn_00ae34b0 }
	__asm { push 0xe02ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae3600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcec00
extern "C" __declspec(naked) void asm_00dcec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xae7680 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xae4d80 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xebe98c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xebe998 }
	__asm { mov ecx, 0x130c4fc }
	__asm { call fn_00ae3600 }
	__asm { push 0xe02d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c6e4[];
extern "C" char g_0130c714[];
extern "C" char g_0130c718[];
extern "C" void fn_00ae89a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcee50
extern "C" __declspec(naked) void asm_00dcee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130c6e4 }
	__asm { push 6 }
	__asm { push 0xebee84 }
	__asm { push 0xe7383c }
	__asm { push 0xebef64 }
	__asm { push 0x70 }
	__asm { call fn_00ae89a0 }
	__asm { push 0xe02ec0 }
	__asm { mov dword ptr [g_0130c6e4], 0xebef48 }
	__asm { mov dword ptr [g_0130c714], 0 }
	__asm { mov dword ptr [g_0130c718], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cfe8[];
extern "C" char g_0130d004[];
extern "C" char g_0130d010[];
extern "C" char g_0130d014[];
extern "C" void fn_007d5390();
extern "C" void fn_00af9030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcf7a0
extern "C" __declspec(naked) void asm_00dcf7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52e9a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130cfe8 }
	__asm { push 5 }
	__asm { push 0xec0e68 }
	__asm { call fn_00af9030 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130cfe8], 0xec0e2c }
	__asm { mov dword ptr [g_0130d010], 0xafd660 }
	__asm { mov dword ptr [g_0130d014], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xe03f30 }
	__asm { mov dword ptr [g_0130d004], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cf88[];
extern "C" char g_0130cfa4[];
extern "C" char g_0130cfb0[];
extern "C" char g_0130cfb4[];
extern "C" void fn_007d5390();
extern "C" void fn_00af9030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcf820
extern "C" __declspec(naked) void asm_00dcf820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52eba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130cf88 }
	__asm { push 5 }
	__asm { push 0xec0e44 }
	__asm { call fn_00af9030 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130cf88], 0xec0e2c }
	__asm { mov dword ptr [g_0130cfb0], 0xafd700 }
	__asm { mov dword ptr [g_0130cfb4], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xe03f90 }
	__asm { mov dword ptr [g_0130cfa4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cf58[];
extern "C" char g_0130cf74[];
extern "C" char g_0130cf80[];
extern "C" char g_0130cf84[];
extern "C" void fn_007d5390();
extern "C" void fn_00af9030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcf8a0
extern "C" __declspec(naked) void asm_00dcf8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52eda }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130cf58 }
	__asm { push 5 }
	__asm { push 0xec0e34 }
	__asm { call fn_00af9030 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130cf58], 0xec0e2c }
	__asm { mov dword ptr [g_0130cf80], 0xafdaa0 }
	__asm { mov dword ptr [g_0130cf84], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xe03ff0 }
	__asm { mov dword ptr [g_0130cf74], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d050[];
extern "C" char g_0130d06c[];
extern "C" char g_0130d078[];
extern "C" char g_0130d07c[];
extern "C" void fn_007d5550();
extern "C" void fn_00af9030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcf9a0
extern "C" __declspec(naked) void asm_00dcf9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52efa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130d050 }
	__asm { push 5 }
	__asm { push 0xec0e98 }
	__asm { call fn_00af9030 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130d050], 0xec0e90 }
	__asm { mov dword ptr [g_0130d078], 0xafd6c0 }
	__asm { mov dword ptr [g_0130d07c], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xe04170 }
	__asm { mov dword ptr [g_0130d06c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cef0[];
extern "C" char g_0130cf0c[];
extern "C" char g_0130cf18[];
extern "C" char g_0130cf1c[];
extern "C" void fn_007d5b00();
extern "C" void fn_00af9140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcfa20
extern "C" __declspec(naked) void asm_00dcfa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52f1a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130cef0 }
	__asm { push 5 }
	__asm { push 0xec0dec }
	__asm { call fn_00af9140 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130cef0], 0xec0de4 }
	__asm { mov dword ptr [g_0130cf18], 0xafd820 }
	__asm { mov dword ptr [g_0130cf1c], 0 }
	__asm { call fn_007d5b00 }
	__asm { push 0xe041d0 }
	__asm { mov dword ptr [g_0130cf0c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af83d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcfaa0
extern "C" __declspec(naked) void asm_00dcfaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130ce58 }
	__asm { push 5 }
	__asm { push 0xec0d98 }
	__asm { push 0xec0d9c }
	__asm { push 0xec0da0 }
	__asm { push 0xec0da4 }
	__asm { push 0xec0da8 }
	__asm { push 0 }
	__asm { push 0xafeff0 }
	__asm { call fn_00af83d0 }
	__asm { push 0xe04230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af84d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcfbb0
extern "C" __declspec(naked) void asm_00dcfbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130cd98 }
	__asm { push 5 }
	__asm { push 0x1032ed8 }
	__asm { push 0xe56728 }
	__asm { push 0xe4717c }
	__asm { push 0x1022f74 }
	__asm { push 0x102b498 }
	__asm { push 0xec0d00 }
	__asm { push 0 }
	__asm { push 0xafb560 }
	__asm { call fn_00af84d0 }
	__asm { push 0xe044f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00b01320();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0030
extern "C" __declspec(naked) void asm_00dd0030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xeae454 }
	__asm { push 0xec1910 }
	__asm { push 0xec1920 }
	__asm { push 0xec192c }
	__asm { push 0 }
	__asm { push 0xb03b30 }
	__asm { mov ecx, 0x130d2f0 }
	__asm { call fn_00b01320 }
	__asm { push 0xe04940 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00b01450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd00a0
extern "C" __declspec(naked) void asm_00dd00a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xeae454 }
	__asm { push 0xec1910 }
	__asm { push 0xec1920 }
	__asm { push 0xe73878 }
	__asm { push 0xec194c }
	__asm { push 0 }
	__asm { push 0xb043a0 }
	__asm { mov ecx, 0x130d330 }
	__asm { call fn_00b01450 }
	__asm { push 0xe04950 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b01130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0110
extern "C" __declspec(naked) void asm_00dd0110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130d280 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0xe93224 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xec18c4 }
	__asm { push 0 }
	__asm { push 0xb05a60 }
	__asm { call fn_00b01130 }
	__asm { push 0xe04960 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d3a0[];
extern "C" char g_0130d3bc[];
extern "C" char g_0130d3c8[];
extern "C" char g_0130d3cc[];
extern "C" void fn_007d5710();
extern "C" void fn_00b01b20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd01a0
extern "C" __declspec(naked) void asm_00dd01a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53b2a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130d3a0 }
	__asm { push 0 }
	__asm { push 0xec1998 }
	__asm { call fn_00b01b20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130d3a0], 0xec1990 }
	__asm { mov dword ptr [g_0130d3c8], 0xb060b0 }
	__asm { mov dword ptr [g_0130d3cc], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xe04a50 }
	__asm { mov dword ptr [g_0130d3bc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b015a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0260
extern "C" __declspec(naked) void asm_00dd0260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130d1d0 }
	__asm { push 0 }
	__asm { push 0xec1844 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xec1854 }
	__asm { push 0 }
	__asm { push 0xb07300 }
	__asm { call fn_00b015a0 }
	__asm { push 0xe04b20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d370[];
extern "C" char g_0130d38c[];
extern "C" char g_0130d398[];
extern "C" char g_0130d39c[];
extern "C" void fn_00825140();
extern "C" void fn_00b01b20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd02b0
extern "C" __declspec(naked) void asm_00dd02b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53b4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x130d370 }
	__asm { push 0 }
	__asm { push 0xec197c }
	__asm { call fn_00b01b20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130d370], 0xec1974 }
	__asm { mov dword ptr [g_0130d398], 0xb07520 }
	__asm { mov dword ptr [g_0130d39c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xe04ba0 }
	__asm { mov dword ptr [g_0130d38c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_00b094b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0430
extern "C" __declspec(naked) void asm_00dd0430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x10 }
	__asm { push 0x130d5f4 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0xb0adf5 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xec25cc }
	__asm { mov ecx, 0x130d620 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00b094b0 }
	__asm { push 0xe04d30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_00b09dd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd04d0
extern "C" __declspec(naked) void asm_00dd04d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x130d6d4 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0x9131c8 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xe3ef2c }
	__asm { mov ecx, 0x130d704 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00b09dd0 }
	__asm { push 0xe04db0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b094b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0530
extern "C" __declspec(naked) void asm_00dd0530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0adf5 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6b074 }
	__asm { mov ecx, 0x130d5f4 }
	__asm { call fn_00b094b0 }
	__asm { push 0xe04dd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09750();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0690
extern "C" __declspec(naked) void asm_00dd0690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x88f064 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0ae07 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec27ac }
	__asm { mov ecx, 0x130d818 }
	__asm { call fn_00b09750 }
	__asm { push 0xe04f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd07f0
extern "C" __declspec(naked) void asm_00dd07f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x88f074 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec2758 }
	__asm { mov ecx, 0x130d7c0 }
	__asm { call fn_00b09ab0 }
	__asm { push 0xe05110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0850
extern "C" __declspec(naked) void asm_00dd0850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0ae17 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec2764 }
	__asm { mov ecx, 0x130d7ec }
	__asm { call fn_00b09ab0 }
	__asm { push 0xe05130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0930
extern "C" __declspec(naked) void asm_00dd0930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0ae0f }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a870 }
	__asm { mov ecx, 0x130d768 }
	__asm { call fn_00b09ab0 }
	__asm { push 0xe05210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0990
extern "C" __declspec(naked) void asm_00dd0990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x88f06c }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a874 }
	__asm { mov ecx, 0x130d794 }
	__asm { call fn_00b09ab0 }
	__asm { push 0xe05230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b094b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd09f0
extern "C" __declspec(naked) void asm_00dd09f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0adfa }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a8c8 }
	__asm { mov ecx, 0x130d64c }
	__asm { call fn_00b094b0 }
	__asm { push 0xe05250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09dd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0a50
extern "C" __declspec(naked) void asm_00dd0a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9131c8 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb5140 }
	__asm { mov ecx, 0x130d6d4 }
	__asm { call fn_00b09dd0 }
	__asm { push 0xe05270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0ab0
extern "C" __declspec(naked) void asm_00dd0ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9131d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0b560 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec2668 }
	__asm { mov ecx, 0x130d6a4 }
	__asm { call fn_00b09c00 }
	__asm { push 0xe05290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b098a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0b10
extern "C" __declspec(naked) void asm_00dd0b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0adff }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeb91f4 }
	__asm { mov ecx, 0x130d734 }
	__asm { call fn_00b098a0 }
	__asm { push 0xe052b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b09600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0b70
extern "C" __declspec(naked) void asm_00dd0b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9131d8 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xec260c }
	__asm { mov ecx, 0x130d678 }
	__asm { call fn_00b09600 }
	__asm { push 0xe052d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b0c0b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0bd0
extern "C" __declspec(naked) void asm_00dd0bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb0c5b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa9c540 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624e4 }
	__asm { mov ecx, 0x130d8d0 }
	__asm { call fn_00b0c0b0 }
	__asm { push 0xe05300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b0be00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0c30
extern "C" __declspec(naked) void asm_00dd0c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb0c540 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0c520 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a8a4 }
	__asm { mov ecx, 0x130d878 }
	__asm { call fn_00b0be00 }
	__asm { push 0xe05320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b0bf60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd0c90
extern "C" __declspec(naked) void asm_00dd0c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb0c570 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa0c560 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624f4 }
	__asm { mov ecx, 0x130d8a4 }
	__asm { call fn_00b0bf60 }
	__asm { push 0xe05340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
