// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00794940();
extern "C" void fn_007ac500();
extern "C" void fn_007ac700();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3bb0
extern "C" __declspec(naked) void asm_00da3bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x12e1954 }
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
	__asm { push 0x422270 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xe5519c }
	__asm { mov ecx, 0x12e1d50 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_007ac500 }
	__asm { push 0xde40a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 2 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x7b0ca3 }
	__asm { push 0xe52d44 }
	__asm { push 0xe5533c }
	__asm { mov ecx, 0x12e1d7c }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x15 }
	__asm { call fn_007ac700 }
	__asm { push 0xde40c0 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012ffa40[];
extern "C" char g_012ffa5c[];
extern "C" char g_012ffa68[];
extern "C" char g_012ffa6c[];
extern "C" void fn_007d5550();
extern "C" void fn_0092c1f0();
extern "C" void fn_0092e6c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb570
extern "C" __declspec(naked) void asm_00dbb570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35fea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ffa40 }
	__asm { push 1 }
	__asm { push 0xe81414 }
	__asm { call fn_0092e6c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ffa40], 0xe8140c }
	__asm { mov dword ptr [g_012ffa68], 0x9302d0 }
	__asm { mov dword ptr [g_012ffa6c], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xdf3a40 }
	__asm { mov dword ptr [g_012ffa5c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push 5 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xb8 }
	__asm { push 0xe81390 }
	__asm { push 0xe813e8 }
	__asm { mov ecx, 0x12ffa10 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x15 }
	__asm { call fn_0092c1f0 }
	__asm { push 0xdf3aa0 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_01300a48[];
extern "C" char g_01300a64[];
extern "C" char g_01300a70[];
extern "C" char g_01300a74[];
extern "C" void fn_00825060();
extern "C" void fn_009571a0();
extern "C" void fn_0095b610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc7c0
extern "C" __declspec(naked) void asm_00dbc7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39aaa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1300a48 }
	__asm { push 0 }
	__asm { push 0xe84f24 }
	__asm { call fn_0095b610 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01300a48], 0xe84f1c }
	__asm { mov dword ptr [g_01300a70], 0x95ecd0 }
	__asm { mov dword ptr [g_01300a74], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdf4a50 }
	__asm { mov dword ptr [g_01300a64], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x42ee90 }
	__asm { push 0xe52d44 }
	__asm { push 0xe84f70 }
	__asm { mov ecx, 0x1300a78 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x15 }
	__asm { call fn_009571a0 }
	__asm { push 0xdf4ab0 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00961020();
extern "C" void fn_00963f50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcf80
extern "C" __declspec(naked) void asm_00dbcf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13010a8 }
	__asm { push 3 }
	__asm { push 0x1024d64 }
	__asm { push 0xe86024 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x403a00 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00963f50 }
	__asm { push 0xdf4d50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x15 }
	__asm { mov eax, esp }
	__asm { push 0xe55160 }
	__asm { mov dword ptr [eax], 0x968e70 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0x10034d4 }
	__asm { mov ecx, 0x1301078 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00961020 }
	__asm { push 0xdf4dc0 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_00987930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf140
extern "C" __declspec(naked) void asm_00dbf140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x13020a4 }
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
	__asm { push 0x990000 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xe8d274 }
	__asm { mov ecx, 0x13020d0 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00987930 }
	__asm { push 0xdf6860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x98feb0 }
	__asm { push 0xe52d44 }
	__asm { push 0xe53008 }
	__asm { mov ecx, 0x13020fc }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x15 }
	__asm { call fn_00987930 }
	__asm { push 0xdf6880 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_013032e4[];
extern "C" void fn_007cb250();
extern "C" void fn_0099f400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfdc0
extern "C" __declspec(naked) void asm_00dbfdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13033f0 }
	__asm { push 0 }
	__asm { push 0xe9215c }
	__asm { push 0xe92164 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9a2050 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0099f400 }
	__asm { push 0xdf7110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0xe91dc0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013032e4], eax }
	__asm { ret }
}

extern "C" char g_01308290[];
extern "C" char g_013082ac[];
extern "C" char g_013082b8[];
extern "C" char g_013082bc[];
extern "C" void fn_007d5470();
extern "C" void fn_00a62a60();
extern "C" void fn_00a62f20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7c00
extern "C" __declspec(naked) void asm_00dc7c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4965a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1308290 }
	__asm { push 0 }
	__asm { push 0xeac758 }
	__asm { call fn_00a62f20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01308290], 0xeac710 }
	__asm { mov dword ptr [g_013082b8], 0xa63570 }
	__asm { mov dword ptr [g_013082bc], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xdfdba0 }
	__asm { mov dword ptr [g_013082ac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0 }
	__asm { push 0xa638b0 }
	__asm { push 0 }
	__asm { push 0xa63580 }
	__asm { push 0xe52d44 }
	__asm { push 0x1009870 }
	__asm { mov ecx, 0x1308234 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1f }
	__asm { call fn_00a62a60 }
	__asm { push 0xdfdc00 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00a718e0();
extern "C" void fn_00a74290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc9160
extern "C" __declspec(naked) void asm_00dc9160()
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
	__asm { push 0xe73fe4 }
	__asm { push 0 }
	__asm { push 0xa79ba0 }
	__asm { mov ecx, 0x1308f30 }
	__asm { call fn_00a74290 }
	__asm { push 0xdfec00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x92 }
	__asm { push 0xe60b34 }
	__asm { push 0xeae338 }
	__asm { mov ecx, 0x1308dcc }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 4 }
	__asm { call fn_00a718e0 }
	__asm { push 0xdfecb0 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e13188[];
extern "C" char g_01310074[];
extern "C" void fn_00794940();
extern "C" void fn_00c1ef20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd41a0
extern "C" __declspec(naked) void asm_00dd41a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x10 }
	__asm { push 0x1310188 }
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
	__asm { push 0xc30c40 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xeee9e4 }
	__asm { mov ecx, 0x1310678 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00c1ef20 }
	__asm { push 0xe08f30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { call dword ptr [g_00e13188] }
	__asm { mov dword ptr [g_01310074], eax }
	__asm { ret }
}

extern "C" void fn_00794960();
extern "C" void fn_00c55500();
extern "C" void fn_00c55e90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd8140
extern "C" __declspec(naked) void asm_00dd8140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_00794960 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 8 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0x403a00 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0x985210 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe6071c }
	__asm { push 0xef2c88 }
	__asm { mov ecx, 0x1312ec0 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00c55500 }
	__asm { push 0xe0c9f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf0 }
	__asm { push 0xe6071c }
	__asm { push 0xef2b80 }
	__asm { mov ecx, 0x1313270 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1f }
	__asm { call fn_00c55e90 }
	__asm { push 0xe0ca10 }
	__asm { call fn_00cf6609 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012fbe80[];
extern "C" char g_012fbea0[];
extern "C" char g_012fbeb4[];
extern "C" char g_012fbeb8[];
extern "C" char g_012fbebc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_008a0b20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dedbd0
extern "C" __declspec(naked) void asm_00dedbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbebc] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbeb8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbeb4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x12fbea0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbea0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbe80], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov ecx, 0x12fc150 }
	__asm { jmp fn_008a0b20 }
}

extern "C" char g_0130b6a0[];
extern "C" char g_0130b6c0[];
extern "C" char g_0130b6d0[];
extern "C" char g_0130b6d4[];
extern "C" char g_0130b6d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00ab81e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e01d70
extern "C" __declspec(naked) void asm_00e01d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130b6d8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130b6d4] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130b6d0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x130b6c0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130b6c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130b6a0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov ecx, 0x130b6e0 }
	__asm { jmp fn_00ab81e0 }
}
