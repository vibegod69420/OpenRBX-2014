// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_008b9b10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4720
extern "C" __declspec(naked) void asm_00db4720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x4f4ed0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x403b10 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6d86c }
	__asm { mov ecx, 0x12fc814 }
	__asm { call fn_008b9b10 }
	__asm { push 0xdeec40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b96f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4880
extern "C" __declspec(naked) void asm_00db4880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8bc180 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa8d9e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6d624 }
	__asm { mov ecx, 0x12fc658 }
	__asm { call fn_008b96f0 }
	__asm { push 0xdeecc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b9900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db48e0
extern "C" __declspec(naked) void asm_00db48e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8bc090 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa6f2a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d90c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6d918 }
	__asm { mov ecx, 0x12fc8f8 }
	__asm { call fn_008b9900 }
	__asm { push 0xdeece0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcea8[];
extern "C" void fn_008c2da0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db5d50
extern "C" __declspec(naked) void asm_00db5d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fcea8 }
	__asm { push 0 }
	__asm { push 0xe6f454 }
	__asm { push 0 }
	__asm { push 0x8c5830 }
	__asm { call fn_008c2da0 }
	__asm { push 0xdefba0 }
	__asm { mov dword ptr [g_012fcea8], 0xe6f438 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcf08[];
extern "C" char g_012fcf24[];
extern "C" char g_012fcf30[];
extern "C" char g_012fcf34[];
extern "C" void fn_00825140();
extern "C" void fn_008c2e50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db5e60
extern "C" __declspec(naked) void asm_00db5e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ed6a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fcf08 }
	__asm { push 1 }
	__asm { push 0x101d14c }
	__asm { call fn_008c2e50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fcf08], 0xe6f474 }
	__asm { mov dword ptr [g_012fcf30], 0x43eec0 }
	__asm { mov dword ptr [g_012fcf34], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdefcc0 }
	__asm { mov dword ptr [g_012fcf24], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcf38[];
extern "C" char g_012fcf54[];
extern "C" char g_012fcf60[];
extern "C" char g_012fcf64[];
extern "C" void fn_00825140();
extern "C" void fn_008c2e50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db5ee0
extern "C" __declspec(naked) void asm_00db5ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ed8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fcf38 }
	__asm { push 1 }
	__asm { push 0x101d240 }
	__asm { call fn_008c2e50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fcf38], 0xe6f474 }
	__asm { mov dword ptr [g_012fcf60], 0x4d1cd0 }
	__asm { mov dword ptr [g_012fcf64], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdefd20 }
	__asm { mov dword ptr [g_012fcf54], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cdb90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6530
extern "C" __declspec(naked) void asm_00db6530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd304 }
	__asm { push 0 }
	__asm { push 0x1032eb8 }
	__asm { push 0xe700e8 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xf12998 }
	__asm { push 0x258 }
	__asm { call fn_008cdb90 }
	__asm { push 0xdf02f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cdd70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6580
extern "C" __declspec(naked) void asm_00db6580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd050 }
	__asm { push 5 }
	__asm { push 0x1032eb8 }
	__asm { push 0xe6fc6c }
	__asm { push 0xe5dcd8 }
	__asm { push 0xe6fc74 }
	__asm { push 0x25c }
	__asm { call fn_008cdd70 }
	__asm { push 0xdf0350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd6a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db65d0
extern "C" __declspec(naked) void asm_00db65d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd1a0 }
	__asm { push 5 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe55428 }
	__asm { push 0x1004e08 }
	__asm { push 0xe6ffec }
	__asm { push 0 }
	__asm { push 0x8d2780 }
	__asm { call fn_008cd6a0 }
	__asm { push 0xdf03b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd2a8[];
extern "C" char g_012fd2c4[];
extern "C" char g_012fd2d0[];
extern "C" char g_012fd2d4[];
extern "C" void fn_00825060();
extern "C" void fn_008ce000();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db66e0
extern "C" __declspec(naked) void asm_00db66e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2fe5a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fd2a8 }
	__asm { push 5 }
	__asm { push 0xe70060 }
	__asm { call fn_008ce000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fd2a8], 0xe70058 }
	__asm { mov dword ptr [g_012fd2d0], 0x8d9340 }
	__asm { mov dword ptr [g_012fd2d4], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdf0510 }
	__asm { mov dword ptr [g_012fd2c4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd170[];
extern "C" char g_012fd18c[];
extern "C" char g_012fd198[];
extern "C" char g_012fd19c[];
extern "C" void fn_00825140();
extern "C" void fn_008ce000();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6760
extern "C" __declspec(naked) void asm_00db6760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2fe7a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fd170 }
	__asm { push 5 }
	__asm { push 0xe6ffc4 }
	__asm { call fn_008ce000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fd170], 0xe6ffbc }
	__asm { mov dword ptr [g_012fd198], 0x8dc030 }
	__asm { mov dword ptr [g_012fd19c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf0570 }
	__asm { mov dword ptr [g_012fd18c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db67e0
extern "C" __declspec(naked) void asm_00db67e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd138 }
	__asm { push 5 }
	__asm { push 0xe6ff8c }
	__asm { push 0xe6ff4c }
	__asm { push 0xe6ff9c }
	__asm { push 0 }
	__asm { push 0x8e01e0 }
	__asm { call fn_008cd900 }
	__asm { push 0xdf05d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6830
extern "C" __declspec(naked) void asm_00db6830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd100 }
	__asm { push 5 }
	__asm { push 0x1004e08 }
	__asm { push 0xe6ff4c }
	__asm { push 0xe6ff70 }
	__asm { push 0 }
	__asm { push 0x8e0310 }
	__asm { call fn_008cd850 }
	__asm { push 0xdf05e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cd850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6880
extern "C" __declspec(naked) void asm_00db6880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd0c8 }
	__asm { push 5 }
	__asm { push 0x1004e08 }
	__asm { push 0xe6ff4c }
	__asm { push 0xe6ff58 }
	__asm { push 0 }
	__asm { push 0x8e0390 }
	__asm { call fn_008cd850 }
	__asm { push 0xdf05f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008eb890();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db69f0
extern "C" __declspec(naked) void asm_00db69f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd558 }
	__asm { push 5 }
	__asm { push 0xe738a4 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xe5dfd8 }
	__asm { push 0x90 }
	__asm { push 0xe73900 }
	__asm { call fn_008eb890 }
	__asm { push 0xdf0800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ecfd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6ac0
extern "C" __declspec(naked) void asm_00db6ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd520 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe73878 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xe738d4 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x8eef40 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_008ecfd0 }
	__asm { push 0xdf0990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd5f0[];
extern "C" char g_012fd60c[];
extern "C" char g_012fd618[];
extern "C" char g_012fd61c[];
extern "C" void fn_00825140();
extern "C" void fn_008ed3e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6b20
extern "C" __declspec(naked) void asm_00db6b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd319aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fd5f0 }
	__asm { push 5 }
	__asm { push 0xe73970 }
	__asm { call fn_008ed3e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fd5f0], 0xe73968 }
	__asm { mov dword ptr [g_012fd618], 0x8ef010 }
	__asm { mov dword ptr [g_012fd61c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf09a0 }
	__asm { mov dword ptr [g_012fd60c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ecde0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6ba0
extern "C" __declspec(naked) void asm_00db6ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd5b8 }
	__asm { push 5 }
	__asm { push 0xe738a4 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xe73954 }
	__asm { push 0 }
	__asm { push 0x8ef020 }
	__asm { call fn_008ecde0 }
	__asm { push 0xdf0a00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ece90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6bf0
extern "C" __declspec(naked) void asm_00db6bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fd4a0 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe73878 }
	__asm { push 0xe73880 }
	__asm { push 0xe5e0c8 }
	__asm { push 0xe7388c }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x8efff0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_008ece90 }
	__asm { push 0xdf0ac0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f24f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6dc0
extern "C" __declspec(naked) void asm_00db6dc0()
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
	__asm { push 0x8f73e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x10294c4 }
	__asm { mov ecx, 0x12fd66c }
	__asm { call fn_008f24f0 }
	__asm { push 0xdf0c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f2640();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db6e20
extern "C" __declspec(naked) void asm_00db6e20()
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
	__asm { push 0x8f7ec0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe60c1c }
	__asm { mov ecx, 0x12fd7b0 }
	__asm { call fn_008f2640 }
	__asm { push 0xdf0ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe258[];
extern "C" char g_012fe274[];
extern "C" char g_012fe280[];
extern "C" char g_012fe284[];
extern "C" void fn_00825140();
extern "C" void fn_008fe100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7180
extern "C" __declspec(naked) void asm_00db7180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32fca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fe258 }
	__asm { push 3 }
	__asm { push 0xe75898 }
	__asm { call fn_008fe100 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fe258], 0xe75890 }
	__asm { mov dword ptr [g_012fe280], 0x403160 }
	__asm { mov dword ptr [g_012fe284], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf12a0 }
	__asm { mov dword ptr [g_012fe274], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fd520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7200
extern "C" __declspec(naked) void asm_00db7200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe2c0 }
	__asm { push 3 }
	__asm { push 0xe75930 }
	__asm { push 0xe7593c }
	__asm { push 0xe75948 }
	__asm { push 0 }
	__asm { push 0x403100 }
	__asm { call fn_008fd520 }
	__asm { push 0xdf1300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7250
extern "C" __declspec(naked) void asm_00db7250()
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
	__asm { push 0x8ff220 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75600 }
	__asm { mov ecx, 0x12fde9c }
	__asm { call fn_008fb560 }
	__asm { push 0xdf1380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db72b0
extern "C" __declspec(naked) void asm_00db72b0()
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
	__asm { push 0x8ff230 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe755ec }
	__asm { mov ecx, 0x12fde70 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf13a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7310
extern "C" __declspec(naked) void asm_00db7310()
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
	__asm { push 0x8ff270 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe755dc }
	__asm { mov ecx, 0x12fde44 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf13c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7370
extern "C" __declspec(naked) void asm_00db7370()
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
	__asm { push 0x8ff2d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe755cc }
	__asm { mov ecx, 0x12fde18 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf13e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fbd40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db73d0
extern "C" __declspec(naked) void asm_00db73d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x403a00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff3a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d934 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75a5c }
	__asm { mov ecx, 0x12fe360 }
	__asm { call fn_008fbd40 }
	__asm { push 0xdf1400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7430
extern "C" __declspec(naked) void asm_00db7430()
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
	__asm { push 0x8ff3b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe5d03c }
	__asm { mov ecx, 0x12fddc0 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf1420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7490
extern "C" __declspec(naked) void asm_00db7490()
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
	__asm { push 0x8ff3c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe703e0 }
	__asm { mov ecx, 0x12fdbdc }
	__asm { call fn_008fb800 }
	__asm { push 0xdf1440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fbbf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db74f0
extern "C" __declspec(naked) void asm_00db74f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x900010 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff460 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe75b90 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75bb8 }
	__asm { mov ecx, 0x12fe4fc }
	__asm { call fn_008fbbf0 }
	__asm { push 0xdf1460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7550
extern "C" __declspec(naked) void asm_00db7550()
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
	__asm { push 0xafd700 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe755a4 }
	__asm { mov ecx, 0x12fdd68 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf1480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb410();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db75b0
extern "C" __declspec(naked) void asm_00db75b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x900040 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff470 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe75b90 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75ba4 }
	__asm { mov ecx, 0x12fe4d0 }
	__asm { call fn_008fb410 }
	__asm { push 0xdf14a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db76b0
extern "C" __declspec(naked) void asm_00db76b0()
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
	__asm { push 0x8ff7b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe755c0 }
	__asm { mov ecx, 0x12fddec }
	__asm { call fn_008fb560 }
	__asm { push 0xdf1500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7710
extern "C" __declspec(naked) void asm_00db7710()
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
	__asm { push 0x8ff510 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75624 }
	__asm { mov ecx, 0x12fdef4 }
	__asm { call fn_008fb800 }
	__asm { push 0xdf1520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb410();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7770
extern "C" __declspec(naked) void asm_00db7770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x900070 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff520 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe75b90 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75b98 }
	__asm { mov ecx, 0x12fe4a4 }
	__asm { call fn_008fb410 }
	__asm { push 0xdf1540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db77d0
extern "C" __declspec(naked) void asm_00db77d0()
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
	__asm { push 0x8fe9e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75590 }
	__asm { mov ecx, 0x12fdd3c }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7830
extern "C" __declspec(naked) void asm_00db7830()
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
	__asm { push 0x8fea90 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75580 }
	__asm { mov ecx, 0x12fdd10 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7890
extern "C" __declspec(naked) void asm_00db7890()
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
	__asm { push 0x8ff540 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe755b4 }
	__asm { mov ecx, 0x12fdd94 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf15a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb0b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db78f0
extern "C" __declspec(naked) void asm_00db78f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9000f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff740 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe75ad4 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75b5c }
	__asm { mov ecx, 0x12fe444 }
	__asm { call fn_008fb0b0 }
	__asm { push 0xdf15c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fbf60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7950
extern "C" __declspec(naked) void asm_00db7950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x403a00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff550 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d934 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75188 }
	__asm { mov ecx, 0x12fe2f8 }
	__asm { call fn_008fbf60 }
	__asm { push 0xdf15e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db79b0
extern "C" __declspec(naked) void asm_00db79b0()
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
	__asm { push 0x8ff870 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75548 }
	__asm { mov ecx, 0x12fdc8c }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1600 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7a10
extern "C" __declspec(naked) void asm_00db7a10()
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
	__asm { push 0x8ff920 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75558 }
	__asm { mov ecx, 0x12fdcb8 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1620 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7a70
extern "C" __declspec(naked) void asm_00db7a70()
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
	__asm { push 0x8ff9d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75514 }
	__asm { mov ecx, 0x12fdc08 }
	__asm { call fn_008fb800 }
	__asm { push 0xdf1640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7ad0
extern "C" __declspec(naked) void asm_00db7ad0()
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
	__asm { push 0x8ffa60 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75538 }
	__asm { mov ecx, 0x12fdc60 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fbbf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7b30
extern "C" __declspec(naked) void asm_00db7b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x900050 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff500 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe75ad4 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75ae4 }
	__asm { mov ecx, 0x12fe3ec }
	__asm { call fn_008fbbf0 }
	__asm { push 0xdf1680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb950();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7b90
extern "C" __declspec(naked) void asm_00db7b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9000a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff560 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe75ad4 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75af8 }
	__asm { mov ecx, 0x12fe418 }
	__asm { call fn_008fb950 }
	__asm { push 0xdf16a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fdfd0[];
extern "C" char g_012fdfec[];
extern "C" char g_012fdff8[];
extern "C" char g_012fdffc[];
extern "C" void fn_007d55c0();
extern "C" void fn_008fe100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7bf0
extern "C" __declspec(naked) void asm_00db7bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32fea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fdfd0 }
	__asm { push 3 }
	__asm { push 0xe756a0 }
	__asm { call fn_008fe100 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fdfd0], 0xe75698 }
	__asm { mov dword ptr [g_012fdff8], 0x8ffb10 }
	__asm { mov dword ptr [g_012fdffc], 0 }
	__asm { call fn_007d55c0 }
	__asm { push 0xdf16c0 }
	__asm { mov dword ptr [g_012fdfec], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7c70
extern "C" __declspec(naked) void asm_00db7c70()
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
	__asm { push 0x8ff580 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe752dc }
	__asm { mov ecx, 0x12fd86c }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7cd0
extern "C" __declspec(naked) void asm_00db7cd0()
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
	__asm { push 0x8ff660 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe752cc }
	__asm { mov ecx, 0x12fd840 }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc380();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7dd0
extern "C" __declspec(naked) void asm_00db7dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9000b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x403ad0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d934 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe750e4 }
	__asm { mov ecx, 0x12fe224 }
	__asm { call fn_008fc380 }
	__asm { push 0xdf17a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7e30
extern "C" __declspec(naked) void asm_00db7e30()
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
	__asm { push 0x900370 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe756f4 }
	__asm { mov ecx, 0x12fe000 }
	__asm { call fn_008fc590 }
	__asm { push 0xdf17c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc830();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7e90
extern "C" __declspec(naked) void asm_00db7e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x410790 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8ff730 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d934 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75abc }
	__asm { mov ecx, 0x12fe3c0 }
	__asm { call fn_008fc830 }
	__asm { push 0xdf17e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7ef0
extern "C" __declspec(naked) void asm_00db7ef0()
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
	__asm { push 0x9003e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75524 }
	__asm { mov ecx, 0x12fdc34 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7f50
extern "C" __declspec(naked) void asm_00db7f50()
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
	__asm { push 0x8feb40 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75570 }
	__asm { mov ecx, 0x12fdce4 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db7fb0
extern "C" __declspec(naked) void asm_00db7fb0()
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
	__asm { push 0x8fec60 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75484 }
	__asm { mov ecx, 0x12fdbb0 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8010
extern "C" __declspec(naked) void asm_00db8010()
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
	__asm { push 0x8ff240 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75614 }
	__asm { mov ecx, 0x12fdec8 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8070
extern "C" __declspec(naked) void asm_00db8070()
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
	__asm { push 0x8ff280 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75678 }
	__asm { mov ecx, 0x12fdfa4 }
	__asm { call fn_008fb800 }
	__asm { push 0xdf1880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db80d0
extern "C" __declspec(naked) void asm_00db80d0()
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
	__asm { push 0x8fed70 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe47350 }
	__asm { mov ecx, 0x12fda7c }
	__asm { call fn_008fad50 }
	__asm { push 0xdf18a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8130
extern "C" __declspec(naked) void asm_00db8130()
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
	__asm { push 0x8fee50 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe753a8 }
	__asm { mov ecx, 0x12fd948 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf18c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8190
extern "C" __declspec(naked) void asm_00db8190()
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
	__asm { push 0x8feea0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7539c }
	__asm { mov ecx, 0x12fd91c }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf18e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008faea0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db81f0
extern "C" __declspec(naked) void asm_00db81f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x900020 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8bb870 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe757d8 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe751f0 }
	__asm { mov ecx, 0x12fe198 }
	__asm { call fn_008faea0 }
	__asm { push 0xdf1900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb6b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8250
extern "C" __declspec(naked) void asm_00db8250()
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
	__asm { push 0x8ff530 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75340 }
	__asm { mov ecx, 0x12fd8c4 }
	__asm { call fn_008fb6b0 }
	__asm { push 0xdf1920 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb6b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db82b0
extern "C" __declspec(naked) void asm_00db82b0()
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
	__asm { push 0xa63570 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7532c }
	__asm { mov ecx, 0x12fd898 }
	__asm { call fn_008fb6b0 }
	__asm { push 0xdf1940 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8310
extern "C" __declspec(naked) void asm_00db8310()
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
	__asm { push 0x8ff790 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75434 }
	__asm { mov ecx, 0x12fda50 }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1960 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8370
extern "C" __declspec(naked) void asm_00db8370()
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
	__asm { push 0x8fffe0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75790 }
	__asm { mov ecx, 0x12fe108 }
	__asm { call fn_008fc6e0 }
	__asm { push 0xdf1980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db83d0
extern "C" __declspec(naked) void asm_00db83d0()
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
	__asm { push 0x8ffff0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75780 }
	__asm { mov ecx, 0x12fe0dc }
	__asm { call fn_008fc6e0 }
	__asm { push 0xdf19a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8430
extern "C" __declspec(naked) void asm_00db8430()
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
	__asm { push 0x8ff7e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75770 }
	__asm { mov ecx, 0x12fe0b0 }
	__asm { call fn_008fc6e0 }
	__asm { push 0xdf19c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8490
extern "C" __declspec(naked) void asm_00db8490()
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
	__asm { push 0x8ff7f0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75750 }
	__asm { mov ecx, 0x12fe058 }
	__asm { call fn_008fc6e0 }
	__asm { push 0xdf19e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db84f0
extern "C" __declspec(naked) void asm_00db84f0()
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
	__asm { push 0x8ff800 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75760 }
	__asm { mov ecx, 0x12fe084 }
	__asm { call fn_008fc6e0 }
	__asm { push 0xdf1a00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fbaa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8550
extern "C" __declspec(naked) void asm_00db8550()
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
	__asm { push 0x8ff810 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75414 }
	__asm { mov ecx, 0x12fd9f8 }
	__asm { call fn_008fbaa0 }
	__asm { push 0xdf1a20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db85b0
extern "C" __declspec(naked) void asm_00db85b0()
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
	__asm { push 0x8ff820 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe753c4 }
	__asm { mov ecx, 0x12fd9a0 }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1a40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8610
extern "C" __declspec(naked) void asm_00db8610()
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
	__asm { push 0x8ff840 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe753b4 }
	__asm { mov ecx, 0x12fd974 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1a60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8670
extern "C" __declspec(naked) void asm_00db8670()
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
	__asm { push 0x8ff850 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe753d0 }
	__asm { mov ecx, 0x12fd9cc }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1a80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db86d0
extern "C" __declspec(naked) void asm_00db86d0()
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
	__asm { push 0x900390 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75444 }
	__asm { mov ecx, 0x12fdad4 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1aa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8730
extern "C" __declspec(naked) void asm_00db8730()
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
	__asm { push 0x8ffec0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x101328c }
	__asm { mov ecx, 0x12fdb2c }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1ac0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8790
extern "C" __declspec(naked) void asm_00db8790()
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
	__asm { push 0x8ff570 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75650 }
	__asm { mov ecx, 0x12fdf4c }
	__asm { call fn_008fb560 }
	__asm { push 0xdf1ae0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db87f0
extern "C" __declspec(naked) void asm_00db87f0()
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
	__asm { push 0x8ff600 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75664 }
	__asm { mov ecx, 0x12fdf78 }
	__asm { call fn_008fb800 }
	__asm { push 0xdf1b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8850
extern "C" __declspec(naked) void asm_00db8850()
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
	__asm { push 0x8ff650 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7563c }
	__asm { mov ecx, 0x12fdf20 }
	__asm { call fn_008fb560 }
	__asm { push 0xdf1b20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db88b0
extern "C" __declspec(naked) void asm_00db88b0()
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
	__asm { push 0x8ff7d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7545c }
	__asm { mov ecx, 0x12fdb58 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8910
extern "C" __declspec(naked) void asm_00db8910()
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
	__asm { push 0x8ff7c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101344c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75470 }
	__asm { mov ecx, 0x12fdb84 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1b60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8970
extern "C" __declspec(naked) void asm_00db8970()
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
	__asm { push 0x900150 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7543c }
	__asm { mov ecx, 0x12fdaa8 }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1b80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fad50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db89d0
extern "C" __declspec(naked) void asm_00db89d0()
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
	__asm { push 0x900280 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75420 }
	__asm { mov ecx, 0x12fda24 }
	__asm { call fn_008fad50 }
	__asm { push 0xdf1ba0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fc6e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8a30
extern "C" __declspec(naked) void asm_00db8a30()
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
	__asm { push 0x900360 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x101d9dc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75740 }
	__asm { mov ecx, 0x12fe02c }
	__asm { call fn_008fc6e0 }
	__asm { push 0xdf1bc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8a90
extern "C" __declspec(naked) void asm_00db8a90()
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
	__asm { push 0x900390 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75448 }
	__asm { mov ecx, 0x12fdb00 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1be0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fb2c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8af0
extern "C" __declspec(naked) void asm_00db8af0()
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
	__asm { push 0x900490 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x100ef6c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe75390 }
	__asm { mov ecx, 0x12fd8f0 }
	__asm { call fn_008fb2c0 }
	__asm { push 0xdf1c00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00900cc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db8b90
extern "C" __declspec(naked) void asm_00db8b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fe5b8 }
	__asm { push 6 }
	__asm { push 0xe75fa4 }
	__asm { push 0xe75fb0 }
	__asm { push 0xe75fb8 }
	__asm { push 0 }
	__asm { push 0x901740 }
	__asm { call fn_00900cc0 }
	__asm { push 0xdf1d50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00907450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9080
extern "C" __declspec(naked) void asm_00db9080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x908710 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x575a80 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x1013c30 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe770cc }
	__asm { mov ecx, 0x12fe7f4 }
	__asm { call fn_00907450 }
	__asm { push 0xdf2170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00908740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9200
extern "C" __declspec(naked) void asm_00db9200()
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
	__asm { push 0x99ce20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x101e874 }
	__asm { mov ecx, 0x12fe980 }
	__asm { call fn_00908740 }
	__asm { push 0xdf2300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009107b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9570
extern "C" __declspec(naked) void asm_00db9570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9153c0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913e90 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a588 }
	__asm { mov ecx, 0x12feb38 }
	__asm { call fn_009107b0 }
	__asm { push 0xdf2460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009107b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db95d0
extern "C" __declspec(naked) void asm_00db95d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9153f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913ef0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a590 }
	__asm { mov ecx, 0x12feb68 }
	__asm { call fn_009107b0 }
	__asm { push 0xdf2480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_009107b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9630
extern "C" __declspec(naked) void asm_00db9630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x10 }
	__asm { push 0x12feb68 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0x9153f0 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0x913ef0 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xe7a598 }
	__asm { mov ecx, 0x12feb98 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_009107b0 }
	__asm { push 0xdf24a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009103c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db96e0
extern "C" __declspec(naked) void asm_00db96e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x914ec0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913780 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a6b8 }
	__asm { mov ecx, 0x12fed28 }
	__asm { call fn_009103c0 }
	__asm { push 0xdf2530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9740
extern "C" __declspec(naked) void asm_00db9740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x914ee0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913790 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a630 }
	__asm { mov ecx, 0x12fec20 }
	__asm { call fn_00910660 }
	__asm { push 0xdf2550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9850
extern "C" __declspec(naked) void asm_00db9850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9131c8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xb0adfa }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a70c }
	__asm { mov ecx, 0x12fed80 }
	__asm { call fn_00910ad0 }
	__asm { push 0xdf25b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db98b0
extern "C" __declspec(naked) void asm_00db98b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x915170 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913d20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a674 }
	__asm { mov ecx, 0x12fec78 }
	__asm { call fn_00910510 }
	__asm { push 0xdf25d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9910
extern "C" __declspec(naked) void asm_00db9910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9151b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913d40 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x101d6c0 }
	__asm { mov ecx, 0x12feca4 }
	__asm { call fn_00910510 }
	__asm { push 0xdf25f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9970
extern "C" __declspec(naked) void asm_00db9970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9151f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913d60 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7a678 }
	__asm { mov ecx, 0x12fecd0 }
	__asm { call fn_00910510 }
	__asm { push 0xdf2610 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db99d0
extern "C" __declspec(naked) void asm_00db99d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x915230 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x913d80 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x101d818 }
	__asm { mov ecx, 0x12fecfc }
	__asm { call fn_00910510 }
	__asm { push 0xdf2630 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012feea8[];
extern "C" char g_012feedc[];
extern "C" char g_012feee0[];
extern "C" void fn_00916130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9bf0
extern "C" __declspec(naked) void asm_00db9bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12feea8 }
	__asm { push 0 }
	__asm { push 0xe7baac }
	__asm { push 0xe7bab8 }
	__asm { push 0 }
	__asm { push 0x140 }
	__asm { call fn_00916130 }
	__asm { push 0xdf2780 }
	__asm { mov dword ptr [g_012feea8], 0xe7ba90 }
	__asm { mov dword ptr [g_012feedc], 0 }
	__asm { mov dword ptr [g_012feee0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012feee8[];
extern "C" char g_012fef1c[];
extern "C" char g_012fef20[];
extern "C" void fn_00916200();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9c50
extern "C" __declspec(naked) void asm_00db9c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12feee8 }
	__asm { push 0 }
	__asm { push 0xe7baf0 }
	__asm { push 0 }
	__asm { push 0x148 }
	__asm { call fn_00916200 }
	__asm { push 0xdf27e0 }
	__asm { mov dword ptr [g_012feee8], 0xe7bad4 }
	__asm { mov dword ptr [g_012fef1c], 0 }
	__asm { mov dword ptr [g_012fef20], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00915750();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9cb0
extern "C" __declspec(naked) void asm_00db9cb0()
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
	__asm { mov dword ptr [eax], 0x917af0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x9175e0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe58414 }
	__asm { mov ecx, 0x12fee7c }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00915750 }
	__asm { push 0xdf2840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff0a8[];
extern "C" char g_012ff0dc[];
extern "C" char g_012ff0e0[];
extern "C" void fn_00918e40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9d30
extern "C" __declspec(naked) void asm_00db9d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12ff0a8 }
	__asm { push 0 }
	__asm { push 0xe7baac }
	__asm { push 0xe7bab8 }
	__asm { push 0 }
	__asm { push 0x250 }
	__asm { call fn_00918e40 }
	__asm { push 0xdf2860 }
	__asm { mov dword ptr [g_012ff0a8], 0xe7cedc }
	__asm { mov dword ptr [g_012ff0dc], 0 }
	__asm { mov dword ptr [g_012ff0e0], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff0e8[];
extern "C" char g_012ff11c[];
extern "C" char g_012ff120[];
extern "C" void fn_00918f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9d90
extern "C" __declspec(naked) void asm_00db9d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12ff0e8 }
	__asm { push 0 }
	__asm { push 0xe7baf0 }
	__asm { push 0 }
	__asm { push 0x258 }
	__asm { call fn_00918f10 }
	__asm { push 0xdf28c0 }
	__asm { mov dword ptr [g_012ff0e8], 0xe7cefc }
	__asm { mov dword ptr [g_012ff11c], 0 }
	__asm { mov dword ptr [g_012ff120], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00917c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9df0
extern "C" __declspec(naked) void asm_00db9df0()
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
	__asm { mov dword ptr [eax], 0x91b870 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x8ac810 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe58414 }
	__asm { mov ecx, 0x12fef48 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00917c00 }
	__asm { push 0xdf2920 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009181b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9e70
extern "C" __declspec(naked) void asm_00db9e70()
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
	__asm { mov dword ptr [eax], 0x91b900 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x91a6c0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe7ce94 }
	__asm { mov ecx, 0x12ff050 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009181b0 }
	__asm { push 0xdf2940 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00917ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db9fd0
extern "C" __declspec(naked) void asm_00db9fd0()
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
	__asm { mov dword ptr [eax], 0x91b990 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x91a840 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe7ce30 }
	__asm { mov ecx, 0x12fefa0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00917ed0 }
	__asm { push 0xdf29a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00917ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba050
extern "C" __declspec(naked) void asm_00dba050()
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
	__asm { mov dword ptr [eax], 0x91b9e0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x91a850 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe608fc }
	__asm { mov ecx, 0x12fef74 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00917ed0 }
	__asm { push 0xdf29c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00918040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba0d0
extern "C" __declspec(naked) void asm_00dba0d0()
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
	__asm { mov dword ptr [eax], 0x91ba30 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0x91a860 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe7ce8c }
	__asm { mov ecx, 0x12ff024 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00918040 }
	__asm { push 0xdf29e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00918040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba150
extern "C" __declspec(naked) void asm_00dba150()
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
	__asm { mov dword ptr [eax], 0x91ba70 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [eax], 0xc4a180 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe7ce80 }
	__asm { mov ecx, 0x12feff8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00918040 }
	__asm { push 0xdf2a00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff130[];
extern "C" char g_012ff14c[];
extern "C" char g_012ff158[];
extern "C" char g_012ff15c[];
extern "C" void fn_007d5630();
extern "C" void fn_0091c790();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba210
extern "C" __declspec(naked) void asm_00dba210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34d1a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ff130 }
	__asm { push 0 }
	__asm { push 0xe7d4f4 }
	__asm { call fn_0091c790 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ff130], 0xe7d4ec }
	__asm { mov dword ptr [g_012ff158], 0x91d300 }
	__asm { mov dword ptr [g_012ff15c], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xdf2af0 }
	__asm { mov dword ptr [g_012ff14c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091c2a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba2d0
extern "C" __declspec(naked) void asm_00dba2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x91cb20 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x463e50 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a88c }
	__asm { mov ecx, 0x12ff1d0 }
	__asm { call fn_0091c2a0 }
	__asm { push 0xdf2c20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091c3f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba330
extern "C" __declspec(naked) void asm_00dba330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x91cbc0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x91caf0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7d5b0 }
	__asm { mov ecx, 0x12ff228 }
	__asm { call fn_0091c3f0 }
	__asm { push 0xdf2c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091c3f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba390
extern "C" __declspec(naked) void asm_00dba390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x91cc10 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xaaace0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7d5a8 }
	__asm { mov ecx, 0x12ff1fc }
	__asm { call fn_0091c3f0 }
	__asm { push 0xdf2c60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff258[];
extern "C" char g_012ff274[];
extern "C" char g_012ff280[];
extern "C" char g_012ff284[];
extern "C" void fn_007d5630();
extern "C" void fn_0091cfb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba430
extern "C" __declspec(naked) void asm_00dba430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34e0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ff258 }
	__asm { push 0 }
	__asm { push 0xe7d74c }
	__asm { call fn_0091cfb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ff258], 0xe7d744 }
	__asm { mov dword ptr [g_012ff280], 0x91d300 }
	__asm { mov dword ptr [g_012ff284], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xdf2d50 }
	__asm { mov dword ptr [g_012ff274], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff328[];
extern "C" char g_012ff344[];
extern "C" char g_012ff350[];
extern "C" char g_012ff354[];
extern "C" void fn_007d5630();
extern "C" void fn_0091ed00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba5c0
extern "C" __declspec(naked) void asm_00dba5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34fea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ff328 }
	__asm { push 0 }
	__asm { push 0xe7d934 }
	__asm { call fn_0091ed00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ff328], 0xe7d92c }
	__asm { mov dword ptr [g_012ff350], 0x91d300 }
	__asm { mov dword ptr [g_012ff354], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xdf3030 }
	__asm { mov dword ptr [g_012ff344], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091d620();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba680
extern "C" __declspec(naked) void asm_00dba680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x920a50 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x920390 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7d9b4 }
	__asm { mov ecx, 0x12ff3c8 }
	__asm { call fn_0091d620 }
	__asm { push 0xdf3160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff5e8[];
extern "C" char g_012ff618[];
extern "C" char g_012ff61c[];
extern "C" void fn_00922820();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba780
extern "C" __declspec(naked) void asm_00dba780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12ff5e8 }
	__asm { push 0 }
	__asm { push 0xe7e390 }
	__asm { push 0x23c }
	__asm { call fn_00922820 }
	__asm { push 0xdf31c0 }
	__asm { mov dword ptr [g_012ff5e8], 0xe7e374 }
	__asm { mov dword ptr [g_012ff618], 0 }
	__asm { mov dword ptr [g_012ff61c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff620[];
extern "C" char g_012ff650[];
extern "C" char g_012ff654[];
extern "C" void fn_00922820();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dba7e0
extern "C" __declspec(naked) void asm_00dba7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12ff620 }
	__asm { push 0 }
	__asm { push 0xe7e39c }
	__asm { push 0x248 }
	__asm { call fn_00922820 }
	__asm { push 0xdf3220 }
	__asm { mov dword ptr [g_012ff620], 0xe7e374 }
	__asm { mov dword ptr [g_012ff650], 0 }
	__asm { mov dword ptr [g_012ff654], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009271b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbab60
extern "C" __declspec(naked) void asm_00dbab60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x929910 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9289b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe7fea4 }
	__asm { mov ecx, 0x12ff694 }
	__asm { call fn_009271b0 }
	__asm { push 0xdf3440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff7e0[];
extern "C" char g_012ff7fc[];
extern "C" char g_012ff808[];
extern "C" char g_012ff80c[];
extern "C" void fn_00825140();
extern "C" void fn_00927f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbada0
extern "C" __declspec(naked) void asm_00dbada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3597a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ff7e0 }
	__asm { push 5 }
	__asm { push 0x1006b38 }
	__asm { call fn_00927f30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ff7e0], 0xe80004 }
	__asm { mov dword ptr [g_012ff808], 0x9288f0 }
	__asm { mov dword ptr [g_012ff80c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf35e0 }
	__asm { mov dword ptr [g_012ff7fc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff7b0[];
extern "C" char g_012ff7cc[];
extern "C" char g_012ff7d8[];
extern "C" char g_012ff7dc[];
extern "C" void fn_00825140();
extern "C" void fn_00927f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbae20
extern "C" __declspec(naked) void asm_00dbae20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3599a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ff7b0 }
	__asm { push 5 }
	__asm { push 0xe8000c }
	__asm { call fn_00927f30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ff7b0], 0xe80004 }
	__asm { mov dword ptr [g_012ff7d8], 0x88f084 }
	__asm { mov dword ptr [g_012ff7dc], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf3640 }
	__asm { mov dword ptr [g_012ff7cc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092e140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb350
extern "C" __declspec(naked) void asm_00dbb350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fldz }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff8c8 }
	__asm { push 1 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe812c4 }
	__asm { push 0xe812cc }
	__asm { push 0 }
	__asm { push 0x930320 }
	__asm { call fn_0092e140 }
	__asm { push 0xdf3820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092e330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb3e0
extern "C" __declspec(naked) void asm_00dbb3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12ff938 }
	__asm { push 5 }
	__asm { push 0xe37160 }
	__asm { push 0xe81318 }
	__asm { push 0xe75214 }
	__asm { push 0 }
	__asm { push 0x931140 }
	__asm { call fn_0092e330 }
	__asm { push 0xdf3900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff9a8[];
extern "C" char g_012ff9c4[];
extern "C" char g_012ff9d0[];
extern "C" char g_012ff9d4[];
extern "C" void fn_00825140();
extern "C" void fn_0092e8e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb430
extern "C" __declspec(naked) void asm_00dbb430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35faa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ff9a8 }
	__asm { push 5 }
	__asm { push 0xe8135c }
	__asm { call fn_0092e8e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ff9a8], 0xe81354 }
	__asm { mov dword ptr [g_012ff9d0], 0x9316f0 }
	__asm { mov dword ptr [g_012ff9d4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf3910 }
	__asm { mov dword ptr [g_012ff9c4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffa70[];
extern "C" char g_012ffa8c[];
extern "C" char g_012ffa98[];
extern "C" char g_012ffa9c[];
extern "C" void fn_007d54e0();
extern "C" void fn_0092e6c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb4f0
extern "C" __declspec(naked) void asm_00dbb4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35fca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12ffa70 }
	__asm { push 1 }
	__asm { push 0xe81430 }
	__asm { call fn_0092e6c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012ffa70], 0xe81428 }
	__asm { mov dword ptr [g_012ffa98], 0x856770 }
	__asm { mov dword ptr [g_012ffa9c], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdf39e0 }
	__asm { mov dword ptr [g_012ffa8c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013002c0[];
extern "C" char g_013002dc[];
extern "C" char g_013002e8[];
extern "C" char g_013002ec[];
extern "C" void fn_007d5550();
extern "C" void fn_009374b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb840
extern "C" __declspec(naked) void asm_00dbb840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36d8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13002c0 }
	__asm { push 0 }
	__asm { push 0xe820c0 }
	__asm { call fn_009374b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013002c0], 0xe820b8 }
	__asm { mov dword ptr [g_013002e8], 0x938620 }
	__asm { mov dword ptr [g_013002ec], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xdf3e30 }
	__asm { mov dword ptr [g_013002dc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00937170();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb900
extern "C" __declspec(naked) void asm_00dbb900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13001a0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe82024 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe8202c }
	__asm { push 0 }
	__asm { push 0x938800 }
	__asm { call fn_00937170 }
	__asm { push 0xdf3f40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00937030();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb950
extern "C" __declspec(naked) void asm_00dbb950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13001d8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe82044 }
	__asm { push 0xe37160 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe82054 }
	__asm { push 0 }
	__asm { push 0x9389f0 }
	__asm { call fn_00937030 }
	__asm { push 0xdf4000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009393e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb9a0
extern "C" __declspec(naked) void asm_00dbb9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939e00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x656ef0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82888 }
	__asm { mov ecx, 0x1300400 }
	__asm { call fn_009393e0 }
	__asm { push 0xdf4010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00938de0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbba00
extern "C" __declspec(naked) void asm_00dbba00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939e60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x656f00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe8286c }
	__asm { mov ecx, 0x1300350 }
	__asm { call fn_00938de0 }
	__asm { push 0xdf4030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00938c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbba60
extern "C" __declspec(naked) void asm_00dbba60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939eb0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x672bc0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a8a4 }
	__asm { mov ecx, 0x1300324 }
	__asm { call fn_00938c90 }
	__asm { push 0xdf4050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00938f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbac0
extern "C" __declspec(naked) void asm_00dbbac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939f10 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x656f10 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1009a60 }
	__asm { mov ecx, 0x13002f8 }
	__asm { call fn_00938f30 }
	__asm { push 0xdf4070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009391d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbb20
extern "C" __declspec(naked) void asm_00dbbb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939f30 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x532380 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82890 }
	__asm { mov ecx, 0x130042c }
	__asm { call fn_009391d0 }
	__asm { push 0xdf4090 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00939080();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbb80
extern "C" __declspec(naked) void asm_00dbbb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939f60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x656f20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82880 }
	__asm { mov ecx, 0x13003a8 }
	__asm { call fn_00939080 }
	__asm { push 0xdf40b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009393e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbbe0
extern "C" __declspec(naked) void asm_00dbbbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x939fc0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x656f20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82880 }
	__asm { mov ecx, 0x13003d4 }
	__asm { call fn_009393e0 }
	__asm { push 0xdf40d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00938f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbc40
extern "C" __declspec(naked) void asm_00dbbc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93a020 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x656f30 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82878 }
	__asm { mov ecx, 0x130037c }
	__asm { call fn_00938f30 }
	__asm { push 0xdf40f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093a6c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbca0
extern "C" __declspec(naked) void asm_00dbbca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93c4b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x93ba50 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624ec }
	__asm { mov ecx, 0x13004dc }
	__asm { call fn_0093a6c0 }
	__asm { push 0xdf4110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093a040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbd00
extern "C" __declspec(naked) void asm_00dbbd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93c6c0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x93bac0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82c00 }
	__asm { mov ecx, 0x1300508 }
	__asm { call fn_0093a040 }
	__asm { push 0xdf4130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093a6c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbd60
extern "C" __declspec(naked) void asm_00dbbd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93c750 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x93bb40 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1009a60 }
	__asm { mov ecx, 0x13004b0 }
	__asm { call fn_0093a6c0 }
	__asm { push 0xdf4150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093a190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbdc0
extern "C" __declspec(naked) void asm_00dbbdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93c780 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x93bb50 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82890 }
	__asm { mov ecx, 0x1300534 }
	__asm { call fn_0093a190 }
	__asm { push 0xdf4170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093a4f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbe20
extern "C" __declspec(naked) void asm_00dbbe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93c4e0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x93ba60 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82b80 }
	__asm { mov ecx, 0x1300480 }
	__asm { call fn_0093a4f0 }
	__asm { push 0xdf4190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093a3a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbbe80
extern "C" __declspec(naked) void asm_00dbbe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x93c7b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x93bc70 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82ca0 }
	__asm { mov ecx, 0x1300568 }
	__asm { call fn_0093a3a0 }
	__asm { push 0xdf41b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093f990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc0c0
extern "C" __declspec(naked) void asm_00dbc0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13007d8 }
	__asm { push 1 }
	__asm { push 0xe83744 }
	__asm { push 0x1024cec }
	__asm { push 0x1022f74 }
	__asm { push 0xe83750 }
	__asm { push 0 }
	__asm { push 0x941eb0 }
	__asm { call fn_0093f990 }
	__asm { push 0xdf43d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013005e0[];
extern "C" char g_013005fc[];
extern "C" char g_01300608[];
extern "C" char g_0130060c[];
extern "C" void fn_007d5710();
extern "C" void fn_009400f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc110
extern "C" __declspec(naked) void asm_00dbc110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3783a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13005e0 }
	__asm { push 1 }
	__asm { push 0xe83610 }
	__asm { call fn_009400f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013005e0], 0xe83608 }
	__asm { mov dword ptr [g_01300608], 0x942320 }
	__asm { mov dword ptr [g_0130060c], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xdf43e0 }
	__asm { mov dword ptr [g_013005fc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0093f870();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc1d0
extern "C" __declspec(naked) void asm_00dbc1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 1 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe837e4 }
	__asm { push 0x102b230 }
	__asm { push 0 }
	__asm { push 0x9434c0 }
	__asm { mov ecx, 0x1300888 }
	__asm { call fn_0093f870 }
	__asm { push 0xdf44f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0093f870();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc230
extern "C" __declspec(naked) void asm_00dbc230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 1 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe837e4 }
	__asm { push 0x102b220 }
	__asm { push 0 }
	__asm { push 0x943540 }
	__asm { mov ecx, 0x13008c0 }
	__asm { call fn_0093f870 }
	__asm { push 0xdf45a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300610[];
extern "C" char g_0130062c[];
extern "C" char g_01300638[];
extern "C" char g_0130063c[];
extern "C" void fn_007d5710();
extern "C" void fn_0093ffe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc290
extern "C" __declspec(naked) void asm_00dbc290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3785a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1300610 }
	__asm { push 1 }
	__asm { push 0xe83638 }
	__asm { call fn_0093ffe0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01300610], 0xe83630 }
	__asm { mov dword ptr [g_01300638], 0x9438f0 }
	__asm { mov dword ptr [g_0130063c], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xdf4650 }
	__asm { mov dword ptr [g_0130062c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300720[];
extern "C" char g_0130073c[];
extern "C" char g_01300748[];
extern "C" char g_0130074c[];
extern "C" void fn_007d5390();
extern "C" void fn_0093ffe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc350
extern "C" __declspec(naked) void asm_00dbc350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3787a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1300720 }
	__asm { push 1 }
	__asm { push 0xe836c8 }
	__asm { call fn_0093ffe0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01300720], 0xe836c0 }
	__asm { mov dword ptr [g_01300748], 0x9439b0 }
	__asm { mov dword ptr [g_0130074c], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xdf4760 }
	__asm { mov dword ptr [g_0130073c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093f680();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc3d0
extern "C" __declspec(naked) void asm_00dbc3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300850 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe837c0 }
	__asm { push 0x1032eb8 }
	__asm { push 0xe837cc }
	__asm { push 0 }
	__asm { push 0x944170 }
	__asm { call fn_0093f680 }
	__asm { push 0xdf47c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
