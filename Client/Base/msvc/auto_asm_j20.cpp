// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f4530[];
extern "C" void fn_00843ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822080
extern "C" __declspec(naked) void asm_00822080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2360e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4530] }
	__asm { test al, 1 }
	__asm { jne L_008220c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4530], eax }
	__asm { mov ecx, 0x12f44a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843ff0 }
	__asm { push 0xde83c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008220c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f34e0[];
extern "C" void fn_00aef060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008220e0
extern "C" __declspec(naked) void asm_008220e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f34e0] }
	__asm { test al, 1 }
	__asm { jne L_00822127 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f34e0], eax }
	__asm { mov ecx, 0x12f3458 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef060 }
	__asm { push 0xde83d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822127: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3210[];
extern "C" void fn_008fde00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822140
extern "C" __declspec(naked) void asm_00822140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3210] }
	__asm { test al, 1 }
	__asm { jne L_00822187 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3210], eax }
	__asm { mov ecx, 0x12f3188 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fde00 }
	__asm { push 0xde83e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822187: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008221a0
extern "C" __declspec(naked) void asm_008221a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2362e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4bf0] }
	__asm { test al, 1 }
	__asm { jne L_008221e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008221e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5100[];
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822200
extern "C" __declspec(naked) void asm_00822200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5100] }
	__asm { test al, 1 }
	__asm { jne L_00822247 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822247: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4260[];
extern "C" void fn_009d1260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822260
extern "C" __declspec(naked) void asm_00822260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2334e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4260] }
	__asm { test al, 1 }
	__asm { jne L_008222a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4260], eax }
	__asm { mov ecx, 0x12f41d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1260 }
	__asm { push 0xde8410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008222a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4140[];
extern "C" void fn_009d14c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008222c0
extern "C" __declspec(naked) void asm_008222c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4132e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4140] }
	__asm { test al, 1 }
	__asm { jne L_00822307 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822307: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f46e0[];
extern "C" void fn_00af1d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822320
extern "C" __declspec(naked) void asm_00822320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2364e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f46e0] }
	__asm { test al, 1 }
	__asm { jne L_00822367 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f46e0], eax }
	__asm { mov ecx, 0x12f4658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1d80 }
	__asm { push 0xde8430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822367: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f57c0[];
extern "C" void fn_00981740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822380
extern "C" __declspec(naked) void asm_00822380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f57c0] }
	__asm { test al, 1 }
	__asm { jne L_008223c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f57c0], eax }
	__asm { mov ecx, 0x12f5738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00981740 }
	__asm { push 0xde8440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008223c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5850[];
extern "C" void fn_00867ac0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008223e0
extern "C" __declspec(naked) void asm_008223e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2366e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5850] }
	__asm { test al, 1 }
	__asm { jne L_00822427 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5850], eax }
	__asm { mov ecx, 0x12f57c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ac0 }
	__asm { push 0xde8450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822427: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3f90[];
extern "C" void fn_00af17a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822440
extern "C" __declspec(naked) void asm_00822440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2336e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3f90] }
	__asm { test al, 1 }
	__asm { jne L_00822487 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f90], eax }
	__asm { mov ecx, 0x12f3f08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af17a0 }
	__asm { push 0xde8460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822487: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4d10[];
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008224a0
extern "C" __declspec(naked) void asm_008224a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { test al, 1 }
	__asm { jne L_008224e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008224e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4e30[];
extern "C" void fn_009734a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822500
extern "C" __declspec(naked) void asm_00822500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4e30] }
	__asm { test al, 1 }
	__asm { jne L_00822547 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4e30], eax }
	__asm { mov ecx, 0x12f4da8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009734a0 }
	__asm { push 0xde8480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822547: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6030[];
extern "C" void fn_008ed280();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822560
extern "C" __declspec(naked) void asm_00822560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6030] }
	__asm { test al, 1 }
	__asm { jne L_008225a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6030], eax }
	__asm { mov ecx, 0x12f5fa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed280 }
	__asm { push 0xde8490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008225a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f32a0[];
extern "C" void fn_008fdf40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008225c0
extern "C" __declspec(naked) void asm_008225c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f32a0] }
	__asm { test al, 1 }
	__asm { jne L_00822607 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f32a0], eax }
	__asm { mov ecx, 0x12f3218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdf40 }
	__asm { push 0xde84a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822607: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3de0[];
extern "C" void fn_00a8cd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822620
extern "C" __declspec(naked) void asm_00822620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2368e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3de0] }
	__asm { test al, 1 }
	__asm { jne L_00822667 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3de0], eax }
	__asm { mov ecx, 0x12f3d58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cd60 }
	__asm { push 0xde84b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822667: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5730[];
extern "C" void fn_008bab60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822680
extern "C" __declspec(naked) void asm_00822680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5730] }
	__asm { test al, 1 }
	__asm { jne L_008226c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5730], eax }
	__asm { mov ecx, 0x12f56a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bab60 }
	__asm { push 0xde84c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008226c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3690[];
extern "C" void fn_00867c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008226e0
extern "C" __declspec(naked) void asm_008226e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3690] }
	__asm { test al, 1 }
	__asm { jne L_00822727 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3690], eax }
	__asm { mov ecx, 0x12f3608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867c20 }
	__asm { push 0xde84d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822727: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3570[];
extern "C" void fn_00867d60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822740
extern "C" __declspec(naked) void asm_00822740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3570] }
	__asm { test al, 1 }
	__asm { jne L_00822787 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3570], eax }
	__asm { mov ecx, 0x12f34e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867d60 }
	__asm { push 0xde84e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822787: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3600[];
extern "C" void fn_00867ee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008227a0
extern "C" __declspec(naked) void asm_008227a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3600] }
	__asm { test al, 1 }
	__asm { jne L_008227e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3600], eax }
	__asm { mov ecx, 0x12f3578 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ee0 }
	__asm { push 0xde84f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008227e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f54f0[];
extern "C" void fn_00907c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822800
extern "C" __declspec(naked) void asm_00822800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f54f0] }
	__asm { test al, 1 }
	__asm { jne L_00822847 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f54f0], eax }
	__asm { mov ecx, 0x12f5468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907c90 }
	__asm { push 0xde8500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822847: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5df0[];
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822860
extern "C" __declspec(naked) void asm_00822860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5df0] }
	__asm { test al, 1 }
	__asm { jne L_008228a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008228a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5d60[];
extern "C" void fn_009cc760();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008228c0
extern "C" __declspec(naked) void asm_008228c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5d60] }
	__asm { test al, 1 }
	__asm { jne L_00822907 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5d60], eax }
	__asm { mov ecx, 0x12f5cd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc760 }
	__asm { push 0xde8520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822907: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5460[];
extern "C" void fn_00907df0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822920
extern "C" __declspec(naked) void asm_00822920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5460] }
	__asm { test al, 1 }
	__asm { jne L_00822967 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5460], eax }
	__asm { mov ecx, 0x12f53d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907df0 }
	__asm { push 0xde8530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822967: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ad0[];
extern "C" void fn_00aef1a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822980
extern "C" __declspec(naked) void asm_00822980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2338e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4ad0] }
	__asm { test al, 1 }
	__asm { jne L_008229c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ad0], eax }
	__asm { mov ecx, 0x12f4a48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef1a0 }
	__asm { push 0xde8540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008229c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4800[];
extern "C" void fn_00aef2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008229e0
extern "C" __declspec(naked) void asm_008229e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24c0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4800] }
	__asm { test al, 1 }
	__asm { jne L_00822a27 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4800], eax }
	__asm { mov ecx, 0x12f4778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef2d0 }
	__asm { push 0xde8550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822a27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5c40[];
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822a40
extern "C" __declspec(naked) void asm_00822a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5c40] }
	__asm { test al, 1 }
	__asm { jne L_00822a87 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822a87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822aa0
extern "C" __declspec(naked) void asm_00822aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2370e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5bb0] }
	__asm { test al, 1 }
	__asm { jne L_00822ae7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822ae7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3720[];
extern "C" void fn_00a0e2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822b00
extern "C" __declspec(naked) void asm_00822b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3720] }
	__asm { test al, 1 }
	__asm { jne L_00822b47 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3720], eax }
	__asm { mov ecx, 0x12f3698 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e2d0 }
	__asm { push 0xde8580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822b47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f37b0[];
extern "C" void fn_00a0e410();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822b60
extern "C" __declspec(naked) void asm_00822b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2372e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f37b0] }
	__asm { test al, 1 }
	__asm { jne L_00822ba7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f37b0], eax }
	__asm { mov ecx, 0x12f3728 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e410 }
	__asm { push 0xde8590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822ba7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00823e30
extern "C" __declspec(naked) void asm_00823e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00823e46 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00823e46: }
	__asm { cmp eax, 1 }
	__asm { jne L_00823e5d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00823e5d: }
	__asm { cmp eax, 2 }
	__asm { jne L_00823e6d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00823e6d: }
	__asm { cmp eax, 3 }
	__asm { jne L_00823e90 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11f1440 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00823e90: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11f1440 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3058[];
extern "C" char g_012f305c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00824140
extern "C" __declspec(naked) void asm_00824140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24fde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f305c] }
	__asm { test al, 1 }
	__asm { jne L_008241b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f305c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0082419e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f3058], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082419e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f3058], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008241b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f3058] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f621c[];
extern "C" char g_012f6220[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008241d0
extern "C" __declspec(naked) void asm_008241d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2500e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6220] }
	__asm { test al, 1 }
	__asm { jne L_00824243 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6220], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0082422e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f621c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082422e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f621c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824243: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f621c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3060[];
extern "C" char g_012f3064[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00824260
extern "C" __declspec(naked) void asm_00824260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2502e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3064] }
	__asm { test al, 1 }
	__asm { jne L_008242d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3064], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008242be }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f3060], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008242be: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f3060], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008242d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f3060] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f622c[];
extern "C" char g_012f6230[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008242f0
extern "C" __declspec(naked) void asm_008242f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2504e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6230] }
	__asm { test al, 1 }
	__asm { jne L_00824363 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6230], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0082434e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f622c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082434e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f622c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824363: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f622c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6244[];
extern "C" char g_012f6248[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00824380
extern "C" __declspec(naked) void asm_00824380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2506e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6248] }
	__asm { test al, 1 }
	__asm { jne L_008243f3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6248], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008243de }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f6244], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008243de: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f6244], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008243f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6244] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f623c[];
extern "C" char g_012f6240[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00824410
extern "C" __declspec(naked) void asm_00824410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2508e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6240] }
	__asm { test al, 1 }
	__asm { jne L_00824483 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6240], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0082446e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f623c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082446e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f623c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824483: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f623c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6234[];
extern "C" char g_012f6238[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008244a0
extern "C" __declspec(naked) void asm_008244a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd250ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6238] }
	__asm { test al, 1 }
	__asm { jne L_00824513 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6238], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008244fe }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f6234], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008244fe: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f6234], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824513: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6234] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6224[];
extern "C" char g_012f6228[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00824530
extern "C" __declspec(naked) void asm_00824530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd250ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6228] }
	__asm { test al, 1 }
	__asm { jne L_008245a3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6228], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0082458e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f6224], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082458e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f6224], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008245a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6224] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3450[];
extern "C" void fn_004115f0();
extern "C" void fn_00927c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00824750
extern "C" __declspec(naked) void asm_00824750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820be0 }
	__asm { push 0x12f2dc8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3450] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008247a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3450], eax }
	__asm { mov ecx, 0x12f33c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00927c20 }
	__asm { push 0xde8050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008247a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f33c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008247c0
extern "C" __declspec(naked) void asm_008247c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00824819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00824819: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f3968 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00824c60
extern "C" __declspec(naked) void asm_00824c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { je L_00824cad }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00824c78 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824c7d }
	__asm { L_00824c78: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824c7d: }
	__asm { cmp ecx, 0x12c35e0 }
	__asm { je L_00824ca1 }
	__asm { test eax, eax }
	__asm { je L_00824c8d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824c92 }
	__asm { L_00824c8d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824c92: }
	__asm { push 0x12c35e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00824cad }
	__asm { L_00824ca1: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00824cad }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824cad: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5b7dc }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012f6cd4[];
extern "C" char g_012f6cf0[];
extern "C" void fn_00824830();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00824f80
extern "C" __declspec(naked) void asm_00824f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2510e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6cf0] }
	__asm { test al, 1 }
	__asm { jne L_00824fd8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6cf0], eax }
	__asm { push 0 }
	__asm { push 0x100a8ec }
	__asm { mov ecx, 0x12f6cd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00824830 }
	__asm { push 0xde8b00 }
	__asm { mov dword ptr [g_012f6cd4], 0xe5b7d8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00824fd8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f6cd4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6cb4[];
extern "C" char g_012f6cd0[];
extern "C" void fn_00824900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00824ff0
extern "C" __declspec(naked) void asm_00824ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2512e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6cd0] }
	__asm { test al, 1 }
	__asm { jne L_00825048 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6cd0], eax }
	__asm { push 0 }
	__asm { push 0xe5b7a8 }
	__asm { mov ecx, 0x12f6cb4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00824900 }
	__asm { push 0xde8b10 }
	__asm { mov dword ptr [g_012f6cb4], 0xe5b7a4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00825048: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f6cb4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6c74[];
extern "C" char g_012f6c90[];
extern "C" void fn_008249d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00825060
extern "C" __declspec(naked) void asm_00825060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2514e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6c90] }
	__asm { test al, 1 }
	__asm { jne L_008250b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6c90], eax }
	__asm { push 0 }
	__asm { push 0x100a900 }
	__asm { mov ecx, 0x12f6c74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008249d0 }
	__asm { push 0xde8b20 }
	__asm { mov dword ptr [g_012f6c74], 0xe5b77c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008250b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f6c74 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6c94[];
extern "C" char g_012f6cb0[];
extern "C" void fn_008249d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008250d0
extern "C" __declspec(naked) void asm_008250d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2516e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6cb0] }
	__asm { test al, 1 }
	__asm { jne L_00825128 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6cb0], eax }
	__asm { push 0 }
	__asm { push 0xe5b780 }
	__asm { mov ecx, 0x12f6c94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008249d0 }
	__asm { push 0xde8b30 }
	__asm { mov dword ptr [g_012f6c94], 0xe5b77c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00825128: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f6c94 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6cf4[];
extern "C" char g_012f6d10[];
extern "C" void fn_00824b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00825140
extern "C" __declspec(naked) void asm_00825140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2518e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6d10] }
	__asm { test al, 1 }
	__asm { jne L_00825198 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6d10], eax }
	__asm { push 0 }
	__asm { push 0xe5b7fc }
	__asm { mov ecx, 0x12f6cf4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00824b40 }
	__asm { push 0xde8b40 }
	__asm { mov dword ptr [g_012f6cf4], 0xe5b7f8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00825198: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f6cf4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6cf4[];
extern "C" char g_012f6d10[];
extern "C" void fn_007a1040();
extern "C" void fn_00824b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008253e0
extern "C" __declspec(naked) void asm_008253e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2518e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6d10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00825443 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6d10], eax }
	__asm { push 0 }
	__asm { push 0xe5b7fc }
	__asm { mov ecx, 0x12f6cf4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00824b40 }
	__asm { push 0xde8b40 }
	__asm { mov dword ptr [g_012f6cf4], 0xe5b7f8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00825443: }
	__asm { push 0 }
	__asm { mov dword ptr [edi], 0x12f6cf4 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_007a1040 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4e88[];
extern "C" char g_0131b374[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00825bb0
extern "C" __declspec(naked) void asm_00825bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25276 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5baf4 }
	__asm { mov dword ptr [esi + 4], 0xe5bb6c }
	__asm { mov dword ptr [esi + 0x18], 0xe5bb74 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5bb80 }
	__asm { mov eax, dword ptr [g_0131b374] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00825c49 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5bad8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00825c49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131b248 }
	__asm { inc dword ptr [g_012e4e88] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00626ae0();
extern "C" void fn_00825fe0();
// FUNCTION: ROBLOXSTUDIO 0x00826110
extern "C" __declspec(naked) void asm_00826110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { sub esi, ebx }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jae L_00826178 }
	__asm { sub ebx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x9249249 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_00826165 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00826165: }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00626ae0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00825fe0 }
	__asm { L_00826178: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008c0570();
extern "C" void fn_008e00f0();
// FUNCTION: ROBLOXSTUDIO 0x008261e0
extern "C" __declspec(naked) void asm_008261e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25348 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00826246 }
	__asm { cmp dword ptr [esi + 0x68], 1 }
	__asm { je L_00826246 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00826235 }
	__asm { push 0x5d }
	__asm { push 0xe5bc70 }
	__asm { push 0xe5bd40 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00826246 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00826235: }
	__asm { movzx eax, al }
	__asm { push 0xe5be98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00826246: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x94] }
	__asm { call fn_008e00f0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008267b0
extern "C" __declspec(naked) void asm_008267b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_008267fa }
	__asm { cmp dword ptr [esi + 0x68], 1 }
	__asm { je L_008267fa }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008267e9 }
	__asm { push 0x4f }
	__asm { push 0xe5bc70 }
	__asm { push 0xe5bd40 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008267fa }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008267e9: }
	__asm { movzx eax, al }
	__asm { push 0xe5be28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008267fa: }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x68], 3 }
	__asm { jne L_0082680d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { L_0082680d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f855c[];
extern "C" void fn_00826a70();
extern "C" void fn_00a113c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00827120
extern "C" __declspec(naked) void asm_00827120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0082715a }
	__asm { mov ecx, eax }
	__asm { call fn_00a113c0 }
	__asm { jmp L_0082715c }
	__asm { L_0082715a: }
	__asm { xor eax, eax }
	__asm { L_0082715c: }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012f855c] }
	__asm { mov dword ptr [g_012f855c], eax }
	__asm { test esi, esi }
	__asm { je L_0082717c }
	__asm { mov ecx, esi }
	__asm { call fn_00826a70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082717c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008272f0
extern "C" __declspec(naked) void asm_008272f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25410 }
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
	__asm { je L_00827348 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5cfec }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0082734a }
	__asm { L_00827348: }
	__asm { xor eax, eax }
	__asm { L_0082734a: }
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

extern "C" void fn_008282a0();
extern "C" void fn_0082a3d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008274f0
extern "C" __declspec(naked) void asm_008274f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25431 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_0082a3d0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00827541 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008282a0 }
	__asm { L_00827541: }
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

extern "C" char g_012f86a0[];
extern "C" char g_012f86a4[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00827970
extern "C" __declspec(naked) void asm_00827970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2549e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f86a4] }
	__asm { test al, 1 }
	__asm { jne L_008279aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f86a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f86a0], eax }
	__asm { L_008279aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_008272f0();
extern "C" void fn_00828070();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008279c0
extern "C" __declspec(naked) void asm_008279c0()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00827a0e }
	__asm { mov ecx, eax }
	__asm { call fn_00828070 }
	__asm { mov esi, eax }
	__asm { jmp L_00827a10 }
	__asm { L_00827a0e: }
	__asm { xor esi, esi }
	__asm { L_00827a10: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_008272f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00827a41 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00827a41 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00827a41: }
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
extern "C" void fn_00827a60();
// FUNCTION: ROBLOXSTUDIO 0x00827bb0
extern "C" __declspec(naked) void asm_00827bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00827c01 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00827bd0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00827bd2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00827bd2 }
	__asm { L_00827bd0: }
	__asm { mov eax, ecx }
	__asm { L_00827bd2: }
	__asm { test eax, eax }
	__asm { je L_00827c01 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00827c01 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00827c01 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00827c01 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_00827a60 }
	__asm { L_00827c01: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043a870();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00827c10
extern "C" __declspec(naked) void asm_00827c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00827c61 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00827c30 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00827c32 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00827c32 }
	__asm { L_00827c30: }
	__asm { mov eax, ecx }
	__asm { L_00827c32: }
	__asm { test eax, eax }
	__asm { je L_00827c61 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00827c61 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00827c61 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00827c61 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0043a870 }
	__asm { L_00827c61: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00827c70
extern "C" __declspec(naked) void asm_00827c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00827cc1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00827c90 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00827c92 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00827c92 }
	__asm { L_00827c90: }
	__asm { mov eax, ecx }
	__asm { L_00827c92: }
	__asm { test eax, eax }
	__asm { je L_00827cc1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00827cc1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00827cc1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00827cc1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0052d5c0 }
	__asm { L_00827cc1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0089a390();
extern "C" void fn_0089a610();
// FUNCTION: ROBLOXSTUDIO 0x00827f80
extern "C" __declspec(naked) void asm_00827f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test al, al }
	__asm { je L_00827fcf }
	__asm { cmp dword ptr [ebx + 0x6c], 0 }
	__asm { jne L_00827fcf }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00827fbe }
	__asm { push 0xf7 }
	__asm { push 0xe5ce30 }
	__asm { push 0xe5ce78 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00827fcf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00827fbe: }
	__asm { movzx eax, al }
	__asm { push 0xe5ce90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00827fcf: }
	__asm { mov ebx, dword ptr [ebx + 0x6c] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_0089a610 }
	__asm { cmp esi, edi }
	__asm { je L_00827ff3 }
	__asm { L_00827fe3: }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, ebx }
	__asm { call fn_0089a390 }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_00827fe3 }
	__asm { L_00827ff3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00828000
extern "C" __declspec(naked) void asm_00828000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00828059 }
	__asm { call fn_007d5d30 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00828059 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00828044 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00828059 }
	__asm { L_00828044: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00828059: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_007c1c80();
extern "C" void fn_00828a60();
// FUNCTION: ROBLOXSTUDIO 0x00828410
extern "C" __declspec(naked) void asm_00828410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25558 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { sub esp, 0x18 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { push 0xa }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe5ce20 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe5c41c }
	__asm { test edi, edi }
	__asm { je L_0082848c }
	__asm { mov ecx, edi }
	__asm { call fn_007c1c80 }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0082848c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828640
extern "C" __declspec(naked) void asm_00828640()
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
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828672 }
	__asm { lea eax, [edi + 0x150] }
	__asm { jmp L_00828674 }
	__asm { L_00828672: }
	__asm { xor eax, eax }
	__asm { L_00828674: }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xe5c21c }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { jb L_008286ab }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008286ab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_00828a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828870
extern "C" __declspec(naked) void asm_00828870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov al, byte ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi], 0xe5c23c }
	__asm { mov byte ptr [esi + 0x24], al }
	__asm { jb L_008288dc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008288dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00828970();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008288f0
extern "C" __declspec(naked) void asm_008288f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd57a18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00828970 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [esi], 0xe5c23c }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { jb L_0082895d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082895d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00421eb0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828a60
extern "C" __declspec(naked) void asm_00828a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828a96 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828a98 }
	__asm { L_00828a96: }
	__asm { xor eax, eax }
	__asm { L_00828a98: }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { mov dword ptr [esi], 0xe5c1dc }
	__asm { push dword ptr [edi + 0xba0] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00421eb0 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { jb L_00828ae5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828ae5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828b00
extern "C" __declspec(naked) void asm_00828b00()
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
	__asm { push edi }
	__asm { push 0xb }
	__asm { mov esi, ecx }
	__asm { push 0xe5c860 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828b56 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828b58 }
	__asm { L_00828b56: }
	__asm { xor eax, eax }
	__asm { L_00828b58: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00828b75 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828b75: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c3dc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828ba0
extern "C" __declspec(naked) void asm_00828ba0()
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
	__asm { push edi }
	__asm { push 0x14 }
	__asm { mov esi, ecx }
	__asm { push 0xe5c808 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828bf6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828bf8 }
	__asm { L_00828bf6: }
	__asm { xor eax, eax }
	__asm { L_00828bf8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00828c15 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828c15: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c2dc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828c40
extern "C" __declspec(naked) void asm_00828c40()
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
	__asm { push edi }
	__asm { push 0xb }
	__asm { mov esi, ecx }
	__asm { push 0xe5c87c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828c96 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828c98 }
	__asm { L_00828c96: }
	__asm { xor eax, eax }
	__asm { L_00828c98: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00828cb5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828cb5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c3fc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828d20
extern "C" __declspec(naked) void asm_00828d20()
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
	__asm { push edi }
	__asm { push 0xc }
	__asm { mov esi, ecx }
	__asm { push 0x101887c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828d76 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828d78 }
	__asm { L_00828d76: }
	__asm { xor eax, eax }
	__asm { L_00828d78: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00828d95 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828d95: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c39c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828dc0
extern "C" __declspec(naked) void asm_00828dc0()
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
	__asm { push edi }
	__asm { push 0xc }
	__asm { mov esi, ecx }
	__asm { push 0x101888c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828e16 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828e18 }
	__asm { L_00828e16: }
	__asm { xor eax, eax }
	__asm { L_00828e18: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00828e35 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828e35: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c3bc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828e60
extern "C" __declspec(naked) void asm_00828e60()
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
	__asm { push edi }
	__asm { push 0xb }
	__asm { mov esi, ecx }
	__asm { push 0x1018864 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828eb6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828eb8 }
	__asm { L_00828eb6: }
	__asm { xor eax, eax }
	__asm { L_00828eb8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00828ed5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828ed5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c33c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00828a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828f00
extern "C" __declspec(naked) void asm_00828f00()
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
	__asm { push 0xf }
	__asm { mov esi, ecx }
	__asm { push 0xe5cac4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], 0xe5c45c }
	__asm { jb L_00828f8a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828f8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe5c480 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828fb0
extern "C" __declspec(naked) void asm_00828fb0()
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
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00828fe2 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00828fe4 }
	__asm { L_00828fe2: }
	__asm { xor eax, eax }
	__asm { L_00828fe4: }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xe5c1bc }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { jb L_0082901b }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082901b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_004038a0();
extern "C" void fn_007c1c80();
extern "C" void fn_00828a60();
// FUNCTION: ROBLOXSTUDIO 0x00829030
extern "C" __declspec(naked) void asm_00829030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25558 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { sub esp, 0x18 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { push 0x19 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe5ca78 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe5c25c }
	__asm { test edi, edi }
	__asm { je L_00829095 }
	__asm { mov ecx, edi }
	__asm { call fn_007c1c80 }
	__asm { L_00829095: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008290b0
extern "C" __declspec(naked) void asm_008290b0()
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
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cd80 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829106 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829108 }
	__asm { L_00829106: }
	__asm { xor eax, eax }
	__asm { L_00829108: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829125 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829125: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c528 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829150
extern "C" __declspec(naked) void asm_00829150()
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
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cd54 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_008291a6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_008291a8 }
	__asm { L_008291a6: }
	__asm { xor eax, eax }
	__asm { L_008291a8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008291c5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008291c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c4e8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008291f0
extern "C" __declspec(naked) void asm_008291f0()
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
	__asm { push edi }
	__asm { push 0x15 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cd68 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829246 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829248 }
	__asm { L_00829246: }
	__asm { xor eax, eax }
	__asm { L_00829248: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829265 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829265: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c508 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829290
extern "C" __declspec(naked) void asm_00829290()
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
	__asm { push edi }
	__asm { push 0x11 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cda8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_008292e6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_008292e8 }
	__asm { L_008292e6: }
	__asm { xor eax, eax }
	__asm { L_008292e8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829305 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829305: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe5c568 }
	__asm { mov eax, dword ptr [edi + 0xba0] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829330
extern "C" __declspec(naked) void asm_00829330()
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
	__asm { push edi }
	__asm { push 0x14 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cdbc }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829386 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829388 }
	__asm { L_00829386: }
	__asm { xor eax, eax }
	__asm { L_00829388: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008293a5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008293a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe5c588 }
	__asm { mov eax, dword ptr [edi + 0xba0] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008293d0
extern "C" __declspec(naked) void asm_008293d0()
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
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cd94 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829426 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829428 }
	__asm { L_00829426: }
	__asm { xor eax, eax }
	__asm { L_00829428: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829445 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829445: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe5c548 }
	__asm { mov eax, dword ptr [edi + 0xba0] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829470
extern "C" __declspec(naked) void asm_00829470()
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
	__asm { push edi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { push 0xe5ce04 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_008294c6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_008294c8 }
	__asm { L_008294c6: }
	__asm { xor eax, eax }
	__asm { L_008294c8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008294e5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008294e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c5e8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829510
extern "C" __declspec(naked) void asm_00829510()
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
	__asm { push edi }
	__asm { push 0x16 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cdec }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829566 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829568 }
	__asm { L_00829566: }
	__asm { xor eax, eax }
	__asm { L_00829568: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829585 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829585: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c5c8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008295b0
extern "C" __declspec(naked) void asm_008295b0()
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
	__asm { push edi }
	__asm { push 0x14 }
	__asm { mov esi, ecx }
	__asm { push 0xe5cdd4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829606 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829608 }
	__asm { L_00829606: }
	__asm { xor eax, eax }
	__asm { L_00829608: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829625 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829625: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c5a8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829690
extern "C" __declspec(naked) void asm_00829690()
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
	__asm { push edi }
	__asm { push 5 }
	__asm { mov esi, ecx }
	__asm { push 0x1015c18 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_008296e6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_008296e8 }
	__asm { L_008296e6: }
	__asm { xor eax, eax }
	__asm { L_008296e8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829705 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829705: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c31c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829730
extern "C" __declspec(naked) void asm_00829730()
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
	__asm { push edi }
	__asm { push 0xc }
	__asm { mov esi, ecx }
	__asm { push 0x10188a8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829786 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829788 }
	__asm { L_00829786: }
	__asm { xor eax, eax }
	__asm { L_00829788: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008297a5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008297a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c35c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00828a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008297d0
extern "C" __declspec(naked) void asm_008297d0()
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
	__asm { push 0xd }
	__asm { mov esi, ecx }
	__asm { push 0xe5cae4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], 0xe5c45c }
	__asm { jb L_0082985a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082985a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe5c4a4 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829880
extern "C" __declspec(naked) void asm_00829880()
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
	__asm { push edi }
	__asm { push 0xe }
	__asm { mov esi, ecx }
	__asm { push 0xe5c820 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_008298d6 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_008298d8 }
	__asm { L_008298d6: }
	__asm { xor eax, eax }
	__asm { L_008298d8: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008298f5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008298f5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c2fc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00829920
extern "C" __declspec(naked) void asm_00829920()
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
	__asm { push edi }
	__asm { push 0x19 }
	__asm { mov esi, ecx }
	__asm { push 0xe5ccf8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00829976 }
	__asm { lea eax, [edi + 0x88] }
	__asm { jmp L_00829978 }
	__asm { L_00829976: }
	__asm { xor eax, eax }
	__asm { L_00829978: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00829995 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00829995: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xe5c4c8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00eee748[];
extern "C" char g_012f8694[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0082a980
extern "C" __declspec(naked) void asm_0082a980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6201e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f8694] }
	__asm { test al, 1 }
	__asm { jne L_0082a9ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f8694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eee748] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f8568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0082a9ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f8568 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_0096c050();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c363b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0082ce60
extern "C" __declspec(naked) void asm_0082ce60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082ce86 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5c7f8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082ce86: }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082cea7 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082cebd }
	__asm { L_0082cea7: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0xba0] }
	__asm { call fn_0096c050 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0082cebd: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5c604 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007c2560();
// FUNCTION: ROBLOXSTUDIO 0x0082ea90
extern "C" __declspec(naked) void asm_0082ea90()
{
	__asm { push esi }
	__asm { add ecx, 0x14 }
	__asm { call fn_007c2560 }
	__asm { lea esi, [eax + 0x68] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0082eadf }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0082eadf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082eace }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082eadf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082eace: }
	__asm { movzx eax, al }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082eadf: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { sar ecx, 3 }
	__asm { cmp eax, ecx }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0082f160
extern "C" __declspec(naked) void asm_0082f160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0082f1a8 }
	__asm { cmp eax, 1 }
	__asm { je L_0082f1a8 }
	__asm { cmp eax, 2 }
	__asm { je L_0082f1bc }
	__asm { cmp eax, 3 }
	__asm { jne L_0082f197 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11f9d18 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082f197: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11f9d18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082f1a8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0082f1bc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0082f1bc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00407e90();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0082f340
extern "C" __declspec(naked) void asm_0082f340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11f9cf4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0082f375 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_00407e90 }
	__asm { L_0082f375: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0082f3ad }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp edx, eax }
	__asm { je L_0082f3ad }
	__asm { L_0082f386: }
	__asm { cmp dword ptr [edx], ecx }
	__asm { je L_0082f391 }
	__asm { add edx, 4 }
	__asm { cmp edx, eax }
	__asm { jne L_0082f386 }
	__asm { L_0082f391: }
	__asm { cmp edx, eax }
	__asm { je L_0082f3ad }
	__asm { lea ecx, [edx + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x14], -4 }
	__asm { L_0082f3ad: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0045f610();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008305c0
extern "C" __declspec(naked) void asm_008305c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25a70 }
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
	__asm { je L_00830618 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6151c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083061a }
	__asm { L_00830618: }
	__asm { xor eax, eax }
	__asm { L_0083061a: }
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
	__asm { call fn_0045f610 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00830650
extern "C" __declspec(naked) void asm_00830650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25a80 }
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
	__asm { je L_008306a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61904 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008306aa }
	__asm { L_008306a8: }
	__asm { xor eax, eax }
	__asm { L_008306aa: }
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
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00830790
extern "C" __declspec(naked) void asm_00830790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25a90 }
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
	__asm { je L_008307e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61874 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008307ea }
	__asm { L_008307e8: }
	__asm { xor eax, eax }
	__asm { L_008307ea: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830820
extern "C" __declspec(naked) void asm_00830820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25aa0 }
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
	__asm { je L_00830878 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61664 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083087a }
	__asm { L_00830878: }
	__asm { xor eax, eax }
	__asm { L_0083087a: }
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
// FUNCTION: ROBLOXSTUDIO 0x008308b0
extern "C" __declspec(naked) void asm_008308b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ab0 }
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
	__asm { je L_00830908 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61844 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083090a }
	__asm { L_00830908: }
	__asm { xor eax, eax }
	__asm { L_0083090a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830940
extern "C" __declspec(naked) void asm_00830940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ac0 }
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
	__asm { je L_00830998 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe617e4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083099a }
	__asm { L_00830998: }
	__asm { xor eax, eax }
	__asm { L_0083099a: }
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
// FUNCTION: ROBLOXSTUDIO 0x008309d0
extern "C" __declspec(naked) void asm_008309d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ad0 }
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
	__asm { je L_00830a28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6170c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830a2a }
	__asm { L_00830a28: }
	__asm { xor eax, eax }
	__asm { L_00830a2a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830a60
extern "C" __declspec(naked) void asm_00830a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ae0 }
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
	__asm { je L_00830ab8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe615ac }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830aba }
	__asm { L_00830ab8: }
	__asm { xor eax, eax }
	__asm { L_00830aba: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830af0
extern "C" __declspec(naked) void asm_00830af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25af0 }
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
	__asm { je L_00830b48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe617b4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830b4a }
	__asm { L_00830b48: }
	__asm { xor eax, eax }
	__asm { L_00830b4a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830b80
extern "C" __declspec(naked) void asm_00830b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b00 }
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
	__asm { je L_00830bd8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6182c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830bda }
	__asm { L_00830bd8: }
	__asm { xor eax, eax }
	__asm { L_00830bda: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830c10
extern "C" __declspec(naked) void asm_00830c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b10 }
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
	__asm { je L_00830c68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6179c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830c6a }
	__asm { L_00830c68: }
	__asm { xor eax, eax }
	__asm { L_00830c6a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830ca0
extern "C" __declspec(naked) void asm_00830ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b20 }
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
	__asm { je L_00830cf8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61754 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830cfa }
	__asm { L_00830cf8: }
	__asm { xor eax, eax }
	__asm { L_00830cfa: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830d30
extern "C" __declspec(naked) void asm_00830d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b30 }
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
	__asm { je L_00830d88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe615ec }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830d8a }
	__asm { L_00830d88: }
	__asm { xor eax, eax }
	__asm { L_00830d8a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830dc0
extern "C" __declspec(naked) void asm_00830dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b40 }
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
	__asm { je L_00830e18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61694 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830e1a }
	__asm { L_00830e18: }
	__asm { xor eax, eax }
	__asm { L_00830e1a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830e50
extern "C" __declspec(naked) void asm_00830e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b50 }
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
	__asm { je L_00830ea8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61724 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830eaa }
	__asm { L_00830ea8: }
	__asm { xor eax, eax }
	__asm { L_00830eaa: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830ee0
extern "C" __declspec(naked) void asm_00830ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b60 }
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
	__asm { je L_00830f38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6167c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830f3a }
	__asm { L_00830f38: }
	__asm { xor eax, eax }
	__asm { L_00830f3a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00830f70
extern "C" __declspec(naked) void asm_00830f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b70 }
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
	__asm { je L_00830fc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe616c4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00830fca }
	__asm { L_00830fc8: }
	__asm { xor eax, eax }
	__asm { L_00830fca: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831000
extern "C" __declspec(naked) void asm_00831000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b80 }
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
	__asm { je L_00831058 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe616ac }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083105a }
	__asm { L_00831058: }
	__asm { xor eax, eax }
	__asm { L_0083105a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831090
extern "C" __declspec(naked) void asm_00831090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25b90 }
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
	__asm { je L_008310e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61814 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008310ea }
	__asm { L_008310e8: }
	__asm { xor eax, eax }
	__asm { L_008310ea: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831120
extern "C" __declspec(naked) void asm_00831120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ba0 }
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
	__asm { je L_00831178 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6173c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083117a }
	__asm { L_00831178: }
	__asm { xor eax, eax }
	__asm { L_0083117a: }
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
// FUNCTION: ROBLOXSTUDIO 0x008311b0
extern "C" __declspec(naked) void asm_008311b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25bb0 }
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
	__asm { je L_00831208 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61604 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083120a }
	__asm { L_00831208: }
	__asm { xor eax, eax }
	__asm { L_0083120a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831240
extern "C" __declspec(naked) void asm_00831240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25bc0 }
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
	__asm { je L_00831298 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6176c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083129a }
	__asm { L_00831298: }
	__asm { xor eax, eax }
	__asm { L_0083129a: }
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
// FUNCTION: ROBLOXSTUDIO 0x008312d0
extern "C" __declspec(naked) void asm_008312d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25bd0 }
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
	__asm { je L_00831328 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe617cc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083132a }
	__asm { L_00831328: }
	__asm { xor eax, eax }
	__asm { L_0083132a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831360
extern "C" __declspec(naked) void asm_00831360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25be0 }
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
	__asm { je L_008313b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6185c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008313ba }
	__asm { L_008313b8: }
	__asm { xor eax, eax }
	__asm { L_008313ba: }
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
// FUNCTION: ROBLOXSTUDIO 0x008313f0
extern "C" __declspec(naked) void asm_008313f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25bf0 }
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
	__asm { je L_00831448 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61784 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083144a }
	__asm { L_00831448: }
	__asm { xor eax, eax }
	__asm { L_0083144a: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831480
extern "C" __declspec(naked) void asm_00831480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c00 }
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
	__asm { je L_008314d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe616f4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008314da }
	__asm { L_008314d8: }
	__asm { xor eax, eax }
	__asm { L_008314da: }
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
// FUNCTION: ROBLOXSTUDIO 0x00831510
extern "C" __declspec(naked) void asm_00831510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c10 }
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
	__asm { je L_00831568 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe616dc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083156a }
	__asm { L_00831568: }
	__asm { xor eax, eax }
	__asm { L_0083156a: }
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
// FUNCTION: ROBLOXSTUDIO 0x008315a0
extern "C" __declspec(naked) void asm_008315a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c20 }
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
	__asm { je L_008315f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe617fc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008315fa }
	__asm { L_008315f8: }
	__asm { xor eax, eax }
	__asm { L_008315fa: }
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
// FUNCTION: ROBLOXSTUDIO 0x008316f0
extern "C" __declspec(naked) void asm_008316f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c30 }
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
	__asm { je L_00831748 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe615d4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083174a }
	__asm { L_00831748: }
	__asm { xor eax, eax }
	__asm { L_0083174a: }
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

extern "C" void fn_00835d60();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00831960
extern "C" __declspec(naked) void asm_00831960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25c60 }
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
	__asm { je L_008319b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6188c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008319ba }
	__asm { L_008319b8: }
	__asm { xor eax, eax }
	__asm { L_008319ba: }
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
	__asm { call fn_00835d60 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00833ce0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00831ab0
extern "C" __declspec(naked) void asm_00831ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x1c }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea ecx, [edx + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00833ce0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00831b1c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00831b1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008326d0
extern "C" __declspec(naked) void asm_008326d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25ca0 }
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
	__asm { je L_00832728 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe61594 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0083272a }
	__asm { L_00832728: }
	__asm { xor eax, eax }
	__asm { L_0083272a: }
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
	__asm { je L_0083274e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0083274e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x008333f0
extern "C" __declspec(naked) void asm_008333f0()
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
	__asm { je L_00833419 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0083341e }
	__asm { L_00833419: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0083341e: }
	__asm { cmp ecx, 0x11f0bc4 }
	__asm { je L_00833467 }
	__asm { test eax, eax }
	__asm { je L_0083342e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00833433 }
	__asm { L_0083342e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00833433: }
	__asm { push 0x11f0bc4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00833467 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00833467: }
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
// FUNCTION: ROBLOXSTUDIO 0x00833480
extern "C" __declspec(naked) void asm_00833480()
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
	__asm { je L_008334a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008334ae }
	__asm { L_008334a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_008334ae: }
	__asm { cmp ecx, 0x11f0ba0 }
	__asm { je L_008334f7 }
	__asm { test eax, eax }
	__asm { je L_008334be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008334c3 }
	__asm { L_008334be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_008334c3: }
	__asm { push 0x11f0ba0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_008334f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_008334f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00844770();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00833590
extern "C" __declspec(naked) void asm_00833590()
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
	__asm { je L_008335d4 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00844770 }
	__asm { mov ecx, eax }
	__asm { jmp L_008335d6 }
	__asm { L_008335d4: }
	__asm { xor ecx, ecx }
	__asm { L_008335d6: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00833602 }
	__asm { test al, 1 }
	__asm { jne L_00833602 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00833602 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00833602: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00833620
extern "C" __declspec(naked) void asm_00833620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33123 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00833680 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_00833682 }
	__asm { L_00833680: }
	__asm { xor esi, esi }
	__asm { L_00833682: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { jb L_00833699 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00833699: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f97b8[];
extern "C" char g_012f97bc[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008353b0
extern "C" __declspec(naked) void asm_008353b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25fee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f97bc] }
	__asm { test al, 1 }
	__asm { jne L_008353ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f97bc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f97b8], eax }
	__asm { L_008353ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9750[];
extern "C" char g_012f9754[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835400
extern "C" __declspec(naked) void asm_00835400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2600e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f9754] }
	__asm { test al, 1 }
	__asm { jne L_0083543a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9754], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9750], eax }
	__asm { L_0083543a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96f8[];
extern "C" char g_012f96fc[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835450
extern "C" __declspec(naked) void asm_00835450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2602e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f96fc] }
	__asm { test al, 1 }
	__asm { jne L_0083548a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96fc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f96f8], eax }
	__asm { L_0083548a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96e0[];
extern "C" char g_012f96e4[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008354a0
extern "C" __declspec(naked) void asm_008354a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2604e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f96e4] }
	__asm { test al, 1 }
	__asm { jne L_008354da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96e4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f96e0], eax }
	__asm { L_008354da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f97b0[];
extern "C" char g_012f97b4[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008354f0
extern "C" __declspec(naked) void asm_008354f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2606e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f97b4] }
	__asm { test al, 1 }
	__asm { jne L_0083552a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f97b4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f97b0], eax }
	__asm { L_0083552a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9790[];
extern "C" char g_012f9794[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835540
extern "C" __declspec(naked) void asm_00835540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2608e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f9794] }
	__asm { test al, 1 }
	__asm { jne L_0083557a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9794], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9790], eax }
	__asm { L_0083557a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9780[];
extern "C" char g_012f9784[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835590
extern "C" __declspec(naked) void asm_00835590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd260ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f9784] }
	__asm { test al, 1 }
	__asm { jne L_008355ca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9784], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9780], eax }
	__asm { L_008355ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f97a8[];
extern "C" char g_012f97ac[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008355e0
extern "C" __declspec(naked) void asm_008355e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd260ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f97ac] }
	__asm { test al, 1 }
	__asm { jne L_0083561a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f97ac], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f97a8], eax }
	__asm { L_0083561a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9760[];
extern "C" char g_012f9764[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835630
extern "C" __declspec(naked) void asm_00835630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd260ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f9764] }
	__asm { test al, 1 }
	__asm { jne L_0083566a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9764], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9760], eax }
	__asm { L_0083566a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9778[];
extern "C" char g_012f977c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835680
extern "C" __declspec(naked) void asm_00835680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2610e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f977c] }
	__asm { test al, 1 }
	__asm { jne L_008356ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f977c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9778], eax }
	__asm { L_008356ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9758[];
extern "C" char g_012f975c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008356d0
extern "C" __declspec(naked) void asm_008356d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2612e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f975c] }
	__asm { test al, 1 }
	__asm { jne L_0083570a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f975c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9758], eax }
	__asm { L_0083570a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96f0[];
extern "C" char g_012f96f4[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835720
extern "C" __declspec(naked) void asm_00835720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2614e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f96f4] }
	__asm { test al, 1 }
	__asm { jne L_0083575a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96f4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f96f0], eax }
	__asm { L_0083575a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9768[];
extern "C" char g_012f976c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835770
extern "C" __declspec(naked) void asm_00835770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2616e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f976c] }
	__asm { test al, 1 }
	__asm { jne L_008357aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f976c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9768], eax }
	__asm { L_008357aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9740[];
extern "C" char g_012f9744[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x008357c0
extern "C" __declspec(naked) void asm_008357c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2618e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f9744] }
	__asm { test al, 1 }
	__asm { jne L_008357fa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9744], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f9740], eax }
	__asm { L_008357fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f96e8[];
extern "C" char g_012f96ec[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00835810
extern "C" __declspec(naked) void asm_00835810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd261ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f96ec] }
	__asm { test al, 1 }
	__asm { jne L_0083584a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f96ec], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012f96e8], eax }
	__asm { L_0083584a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
