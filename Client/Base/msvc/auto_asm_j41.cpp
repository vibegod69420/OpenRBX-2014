// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f4800[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9c40
extern "C" __declspec(naked) void asm_00da9c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24c0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8229e0 }
	__asm { push 0x12f2ee0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4800] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9c99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4800], eax }
	__asm { mov ecx, 0x12f4778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef2d0 }
	__asm { push 0xde8550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9c99: }
	__asm { push 0xde6c30 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5c40[];
extern "C" void fn_004115f0();
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9cc0
extern "C" __declspec(naked) void asm_00da9cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822a40 }
	__asm { push 0x12f3000 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5c40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9d19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9d19: }
	__asm { push 0xde6c40 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_004115f0();
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9d40
extern "C" __declspec(naked) void asm_00da9d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2370e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822aa0 }
	__asm { push 0x12f2ff8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5bb0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9d99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9d99: }
	__asm { push 0xde6c50 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3720[];
extern "C" void fn_004115f0();
extern "C" void fn_00a0e2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9dc0
extern "C" __declspec(naked) void asm_00da9dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822b00 }
	__asm { push 0x12f2df0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3720] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9e19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3720], eax }
	__asm { mov ecx, 0x12f3698 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e2d0 }
	__asm { push 0xde8580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9e19: }
	__asm { push 0xde6c60 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5e80[];
extern "C" void fn_004115f0();
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa340
extern "C" __declspec(naked) void asm_00daa340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820ac0 }
	__asm { push 0x12f3020 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5e80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa399: }
	__asm { push 0xde6ec0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3330[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeeaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa3c0
extern "C" __declspec(naked) void asm_00daa3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820b20 }
	__asm { push 0x12f2db8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3330] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa419 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3330], eax }
	__asm { mov ecx, 0x12f32a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeaf0 }
	__asm { push 0xde8030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa419: }
	__asm { push 0xde6ed0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f40b0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a55ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa440
extern "C" __declspec(naked) void asm_00daa440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820b80 }
	__asm { push 0x12f2e78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f40b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f40b0], eax }
	__asm { mov ecx, 0x12f4028 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a55ed0 }
	__asm { push 0xde8040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa499: }
	__asm { push 0xde6ee0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3450[];
extern "C" void fn_004115f0();
extern "C" void fn_00927c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa4c0
extern "C" __declspec(naked) void asm_00daa4c0()
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
	__asm { jne L_00daa519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3450], eax }
	__asm { mov ecx, 0x12f33c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00927c20 }
	__asm { push 0xde8050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa519: }
	__asm { push 0xde6ef0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f53d0[];
extern "C" void fn_004115f0();
extern "C" void fn_009fcd30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa540
extern "C" __declspec(naked) void asm_00daa540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820c40 }
	__asm { push 0x12f2f88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f53d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f53d0], eax }
	__asm { mov ecx, 0x12f5348 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fcd30 }
	__asm { push 0xde8060 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa599: }
	__asm { push 0xde6f00 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f33c0[];
extern "C" void fn_004115f0();
extern "C" void fn_009b3e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa5c0
extern "C" __declspec(naked) void asm_00daa5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3efee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820ca0 }
	__asm { push 0x12f2dc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f33c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa619 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f33c0], eax }
	__asm { mov ecx, 0x12f3338 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b3e70 }
	__asm { push 0xde8070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa619: }
	__asm { push 0xde6f10 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3960[];
extern "C" void fn_004115f0();
extern "C" void fn_007b92b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa640
extern "C" __declspec(naked) void asm_00daa640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820d00 }
	__asm { push 0x12f2e10 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3960] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa699 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3960], eax }
	__asm { mov ecx, 0x12f38d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b92b0 }
	__asm { push 0xde8080 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa699: }
	__asm { push 0xde6f20 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f56a0[];
extern "C" void fn_004115f0();
extern "C" void fn_008ba710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa6c0
extern "C" __declspec(naked) void asm_00daa6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820d60 }
	__asm { push 0x12f2fb0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f56a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f56a0], eax }
	__asm { mov ecx, 0x12f5618 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba710 }
	__asm { push 0xde8090 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa719: }
	__asm { push 0xde6f30 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3578[];
extern "C" void fn_004115f0();
extern "C" void fn_007b93e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa740
extern "C" __declspec(naked) void asm_00daa740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7bcd00 }
	__asm { push 0x12e34e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3578] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3578], eax }
	__asm { mov ecx, 0x12e34f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b93e0 }
	__asm { push 0xde4660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa799: }
	__asm { push 0xde6f40 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e34b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007b9510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa7c0
extern "C" __declspec(naked) void asm_00daa7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2023e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7bcd60 }
	__asm { push 0x12e3420 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e34b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e34b0], eax }
	__asm { mov ecx, 0x12e3428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b9510 }
	__asm { push 0xde4670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa819: }
	__asm { push 0xde6f50 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004115f0();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa840
extern "C" __declspec(naked) void asm_00daa840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820dc0 }
	__asm { push 0x12f2fe8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa899: }
	__asm { push 0xde6f60 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004115f0();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa8c0
extern "C" __declspec(naked) void asm_00daa8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820e20 }
	__asm { push 0x12f2fe0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa919 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa919: }
	__asm { push 0xde6f70 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004115f0();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa940
extern "C" __declspec(naked) void asm_00daa940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820e80 }
	__asm { push 0x12f2ff0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daa999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daa999: }
	__asm { push 0xde6f80 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5190[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daa9c0
extern "C" __declspec(naked) void asm_00daa9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2342e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820ee0 }
	__asm { push 0x12f2f68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5190] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daaa19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daaa19: }
	__asm { push 0xde6f90 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5220[];
extern "C" void fn_004115f0();
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daaa40
extern "C" __declspec(naked) void asm_00daaa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820f40 }
	__asm { push 0x12f2f70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daaa99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daaa99: }
	__asm { push 0xde6fa0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3a80[];
extern "C" void fn_004115f0();
extern "C" void fn_00986cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daaac0
extern "C" __declspec(naked) void asm_00daaac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2344e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820fa0 }
	__asm { push 0x12f2e20 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3a80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daab19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3a80], eax }
	__asm { mov ecx, 0x12f39f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00986cf0 }
	__asm { push 0xde80f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daab19: }
	__asm { push 0xde6fb0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5580[];
extern "C" void fn_004115f0();
extern "C" void fn_008ba850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daab40
extern "C" __declspec(naked) void asm_00daab40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821000 }
	__asm { push 0x12f2fa0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5580] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daab99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5580], eax }
	__asm { mov ecx, 0x12f54f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba850 }
	__asm { push 0xde8100 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daab99: }
	__asm { push 0xde6fc0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_004115f0();
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daabc0
extern "C" __declspec(naked) void asm_00daabc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821060 }
	__asm { push 0x12f3030 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5fa0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daac19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daac19: }
	__asm { push 0xde6fd0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f42f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00843a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daac40
extern "C" __declspec(naked) void asm_00daac40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd270fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8210c0 }
	__asm { push 0x12f2e98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f42f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daac99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f42f0], eax }
	__asm { mov ecx, 0x12f4268 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843a30 }
	__asm { push 0xde8120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daac99: }
	__asm { push 0xde6fe0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f52b0[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daacc0
extern "C" __declspec(naked) void asm_00daacc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821120 }
	__asm { push 0x12f2f78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f52b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daad19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f52b0], eax }
	__asm { mov ecx, 0x12f5228 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5990 }
	__asm { push 0xde8130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daad19: }
	__asm { push 0xde6ff0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f58e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a6e1c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daad40
extern "C" __declspec(naked) void asm_00daad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821180 }
	__asm { push 0x12f2fd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f58e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daad99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f58e0], eax }
	__asm { mov ecx, 0x12f5858 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e1c0 }
	__asm { push 0xde8140 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daad99: }
	__asm { push 0xde7000 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5970[];
extern "C" void fn_004115f0();
extern "C" void fn_00a6e300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daadc0
extern "C" __declspec(naked) void asm_00daadc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2320e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8211e0 }
	__asm { push 0x12f2fd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5970] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daae19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5970], eax }
	__asm { mov ecx, 0x12f58e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e300 }
	__asm { push 0xde8150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daae19: }
	__asm { push 0xde7010 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3c30[];
extern "C" void fn_004115f0();
extern "C" void fn_008fd8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daae40
extern "C" __declspec(naked) void asm_00daae40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2346e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821240 }
	__asm { push 0x12f2e38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3c30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daae99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3c30], eax }
	__asm { mov ecx, 0x12f3ba8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fd8d0 }
	__asm { push 0xde8160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daae99: }
	__asm { push 0xde7020 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3ba0[];
extern "C" void fn_004115f0();
extern "C" void fn_008fda40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daaec0
extern "C" __declspec(naked) void asm_00daaec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2348e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8212a0 }
	__asm { push 0x12f2e30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3ba0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daaf19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3ba0], eax }
	__asm { mov ecx, 0x12f3b18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fda40 }
	__asm { push 0xde8170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daaf19: }
	__asm { push 0xde7030 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5cd0[];
extern "C" void fn_004115f0();
extern "C" void fn_008a6a00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daaf40
extern "C" __declspec(naked) void asm_00daaf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821300 }
	__asm { push 0x12f3008 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5cd0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daaf99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5cd0], eax }
	__asm { mov ecx, 0x12f5c48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a6a00 }
	__asm { push 0xde8180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daaf99: }
	__asm { push 0xde7040 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f38d0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a0dfd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daafc0
extern "C" __declspec(naked) void asm_00daafc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821360 }
	__asm { push 0x12f2e08 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f38d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab019 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f38d0], eax }
	__asm { mov ecx, 0x12f3848 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0dfd0 }
	__asm { push 0xde8190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab019: }
	__asm { push 0xde7050 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3840[];
extern "C" void fn_004115f0();
extern "C" void fn_00a0e130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab040
extern "C" __declspec(naked) void asm_00dab040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8213c0 }
	__asm { push 0x12f2e00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3840] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab099 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3840], eax }
	__asm { mov ecx, 0x12f37b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e130 }
	__asm { push 0xde81a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab099: }
	__asm { push 0xde7060 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4da0[];
extern "C" void fn_004115f0();
extern "C" void fn_0088c8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab0c0
extern "C" __declspec(naked) void asm_00dab0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821420 }
	__asm { push 0x12f2f30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4da0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab119 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4da0], eax }
	__asm { mov ecx, 0x12f4d18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088c8a0 }
	__asm { push 0xde81b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab119: }
	__asm { push 0xde7070 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4a40[];
extern "C" void fn_004115f0();
extern "C" void fn_009bb3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab140
extern "C" __declspec(naked) void asm_00dab140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821480 }
	__asm { push 0x12f2f00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4a40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4a40], eax }
	__asm { mov ecx, 0x12f49b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb3b0 }
	__asm { push 0xde81c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab199: }
	__asm { push 0xde7080 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f49b0[];
extern "C" void fn_004115f0();
extern "C" void fn_009bb500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab1c0
extern "C" __declspec(naked) void asm_00dab1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2322e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8214e0 }
	__asm { push 0x12f2ef8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f49b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab219 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f49b0], eax }
	__asm { mov ecx, 0x12f4928 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb500 }
	__asm { push 0xde81d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab219: }
	__asm { push 0xde7090 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4410[];
extern "C" void fn_004115f0();
extern "C" void fn_00843b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab240
extern "C" __declspec(naked) void asm_00dab240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2850e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821540 }
	__asm { push 0x12f2ea8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4410] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab299 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4410], eax }
	__asm { mov ecx, 0x12f4388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843b60 }
	__asm { push 0xde81e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab299: }
	__asm { push 0xde70a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f44a0[];
extern "C" void fn_004115f0();
extern "C" void fn_00843c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab2c0
extern "C" __declspec(naked) void asm_00dab2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2852e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8215a0 }
	__asm { push 0x12f2eb0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f44a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab319 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f44a0], eax }
	__asm { mov ecx, 0x12f4418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843c90 }
	__asm { push 0xde81f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab319: }
	__asm { push 0xde70b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4380[];
extern "C" void fn_004115f0();
extern "C" void fn_00843e20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab340
extern "C" __declspec(naked) void asm_00dab340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2854e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821600 }
	__asm { push 0x12f2ea0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4380] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4380], eax }
	__asm { mov ecx, 0x12f42f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843e20 }
	__asm { push 0xde8200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab399: }
	__asm { push 0xde70c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5f10[];
extern "C" void fn_004115f0();
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab3c0
extern "C" __declspec(naked) void asm_00dab3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821660 }
	__asm { push 0x12f3028 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5f10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab419 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab419: }
	__asm { push 0xde70d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3cc0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a8cae0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab440
extern "C" __declspec(naked) void asm_00dab440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8216c0 }
	__asm { push 0x12f2e40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3cc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3cc0], eax }
	__asm { mov ecx, 0x12f3c38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cae0 }
	__asm { push 0xde8220 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab499: }
	__asm { push 0xde70e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5340[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab4c0
extern "C" __declspec(naked) void asm_00dab4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2324e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821720 }
	__asm { push 0x12f2f80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5340] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5340], eax }
	__asm { mov ecx, 0x12f52b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5ad0 }
	__asm { push 0xde8230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab519: }
	__asm { push 0xde70f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab540
extern "C" __declspec(naked) void asm_00dab540()
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
	__asm { jne L_00dab599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab599: }
	__asm { push 0xde7100 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3e70[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab5c0
extern "C" __declspec(naked) void asm_00dab5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2326e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8217e0 }
	__asm { push 0x12f2e58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3e70] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab619 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3e70], eax }
	__asm { mov ecx, 0x12f3de8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef650 }
	__asm { push 0xde8250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab619: }
	__asm { push 0xde7110 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f60c0[];
extern "C" void fn_004115f0();
extern "C" void fn_00b07e10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab640
extern "C" __declspec(naked) void asm_00dab640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821840 }
	__asm { push 0x12f3040 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f60c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab699 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f60c0], eax }
	__asm { mov ecx, 0x12f6038 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b07e10 }
	__asm { push 0xde8260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab699: }
	__asm { push 0xde7120 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3f00[];
extern "C" void fn_004115f0();
extern "C" void fn_00af1670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab6c0
extern "C" __declspec(naked) void asm_00dab6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2350e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8218a0 }
	__asm { push 0x12f2e60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3f00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f00], eax }
	__asm { mov ecx, 0x12f3e78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1670 }
	__asm { push 0xde8270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab719: }
	__asm { push 0xde7130 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3b10[];
extern "C" void fn_004115f0();
extern "C" void fn_009a3560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab740
extern "C" __declspec(naked) void asm_00dab740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821900 }
	__asm { push 0x12f2e28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3b10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3b10], eax }
	__asm { mov ecx, 0x12f3a88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a3560 }
	__asm { push 0xde8280 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab799: }
	__asm { push 0xde7140 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3d50[];
extern "C" void fn_004115f0();
extern "C" void fn_00a8cc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab7c0
extern "C" __declspec(naked) void asm_00dab7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2328e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821960 }
	__asm { push 0x12f2e48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3d50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3d50], eax }
	__asm { mov ecx, 0x12f3cc8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cc20 }
	__asm { push 0xde8290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab819: }
	__asm { push 0xde7150 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f45c0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeec50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab840
extern "C" __declspec(naked) void asm_00dab840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8219c0 }
	__asm { push 0x12f2ec0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f45c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f45c0], eax }
	__asm { mov ecx, 0x12f4538 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeec50 }
	__asm { push 0xde82a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab899: }
	__asm { push 0xde7160 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4c80[];
extern "C" void fn_004115f0();
extern "C" void fn_008aa2f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab8c0
extern "C" __declspec(naked) void asm_00dab8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2352e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821a20 }
	__asm { push 0x12f2f20 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4c80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab919 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4c80], eax }
	__asm { mov ecx, 0x12f4bf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008aa2f0 }
	__asm { push 0xde82b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab919: }
	__asm { push 0xde7170 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6150[];
extern "C" void fn_004115f0();
extern "C" void fn_00a676e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab940
extern "C" __declspec(naked) void asm_00dab940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821a80 }
	__asm { push 0x12f3048 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6150] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dab999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6150], eax }
	__asm { mov ecx, 0x12f60c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a676e0 }
	__asm { push 0xde82c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dab999: }
	__asm { push 0xde7180 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4f50[];
extern "C" void fn_004115f0();
extern "C" void fn_00973200();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dab9c0
extern "C" __declspec(naked) void asm_00dab9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2354e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821ae0 }
	__asm { push 0x12f2f48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4f50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daba19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4f50], eax }
	__asm { mov ecx, 0x12f4ec8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973200 }
	__asm { push 0xde82d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daba19: }
	__asm { push 0xde7190 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4b60[];
extern "C" void fn_004115f0();
extern "C" void fn_00aa4b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daba40
extern "C" __declspec(naked) void asm_00daba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2356e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821b40 }
	__asm { push 0x12f2f10 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4b60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daba99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4b60], eax }
	__asm { mov ecx, 0x12f4ad8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aa4b40 }
	__asm { push 0xde82e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daba99: }
	__asm { push 0xde71a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f41d0[];
extern "C" void fn_004115f0();
extern "C" void fn_009d1120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabac0
extern "C" __declspec(naked) void asm_00dabac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821ba0 }
	__asm { push 0x12f2e88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f41d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabb19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f41d0], eax }
	__asm { mov ecx, 0x12f4148 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1120 }
	__asm { push 0xde82f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabb19: }
	__asm { push 0xde71b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4020[];
extern "C" void fn_004115f0();
extern "C" void fn_007d6150();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabb40
extern "C" __declspec(naked) void asm_00dabb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821c00 }
	__asm { push 0x12f2e70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4020] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabb99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4020], eax }
	__asm { mov ecx, 0x12f3f98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6150 }
	__asm { push 0xde8300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabb99: }
	__asm { push 0xde71c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4890[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeed90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabbc0
extern "C" __declspec(naked) void asm_00dabbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821c60 }
	__asm { push 0x12f2ee8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4890] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabc19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4890], eax }
	__asm { mov ecx, 0x12f4808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeed90 }
	__asm { push 0xde8310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabc19: }
	__asm { push 0xde71d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4920[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeeef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabc40
extern "C" __declspec(naked) void asm_00dabc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821cc0 }
	__asm { push 0x12f2ef0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4920] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabc99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4920], eax }
	__asm { mov ecx, 0x12f4898 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeef0 }
	__asm { push 0xde8320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabc99: }
	__asm { push 0xde71e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4fe0[];
extern "C" void fn_004115f0();
extern "C" void fn_0088ca10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabcc0
extern "C" __declspec(naked) void asm_00dabcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2358e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821d20 }
	__asm { push 0x12f2f50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4fe0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabd19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4fe0], eax }
	__asm { mov ecx, 0x12f4f58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088ca10 }
	__asm { push 0xde8330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabd19: }
	__asm { push 0xde71f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ec0[];
extern "C" void fn_004115f0();
extern "C" void fn_00973340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabd40
extern "C" __declspec(naked) void asm_00dabd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821d80 }
	__asm { push 0x12f2f40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4ec0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabd99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ec0], eax }
	__asm { mov ecx, 0x12f4e38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973340 }
	__asm { push 0xde8340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabd99: }
	__asm { push 0xde7200 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4650[];
extern "C" void fn_004115f0();
extern "C" void fn_0091ebb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabdc0
extern "C" __declspec(naked) void asm_00dabdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821de0 }
	__asm { push 0x12f2ec8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4650] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabe19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4650], eax }
	__asm { mov ecx, 0x12f45c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0091ebb0 }
	__asm { push 0xde8350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabe19: }
	__asm { push 0xde7210 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3180[];
extern "C" void fn_004115f0();
extern "C" void fn_008fdb80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabe40
extern "C" __declspec(naked) void asm_00dabe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2330e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821e40 }
	__asm { push 0x12f2da0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3180] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabe99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3180], eax }
	__asm { mov ecx, 0x12f30f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdb80 }
	__asm { push 0xde8360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabe99: }
	__asm { push 0xde7220 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4770[];
extern "C" void fn_004115f0();
extern "C" void fn_00af3210();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabec0
extern "C" __declspec(naked) void asm_00dabec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821ea0 }
	__asm { push 0x12f2ed8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4770] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabf19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4770], eax }
	__asm { mov ecx, 0x12f46e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af3210 }
	__asm { push 0xde8370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabf19: }
	__asm { push 0xde7230 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f61e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabf40
extern "C" __declspec(naked) void asm_00dabf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821f00 }
	__asm { push 0x12f3050 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f61e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dabf99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f61e0], eax }
	__asm { mov ecx, 0x12f6158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5c00 }
	__asm { push 0xde8380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dabf99: }
	__asm { push 0xde7240 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5610[];
extern "C" void fn_004115f0();
extern "C" void fn_008ba9b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dabfc0
extern "C" __declspec(naked) void asm_00dabfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821f60 }
	__asm { push 0x12f2fa8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5610] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac019 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5610], eax }
	__asm { mov ecx, 0x12f5588 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba9b0 }
	__asm { push 0xde8390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac019: }
	__asm { push 0xde7250 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f30f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a74a50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac040
extern "C" __declspec(naked) void asm_00dac040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24efe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821fc0 }
	__asm { push 0x12f2d98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f30f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac099 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f30f0], eax }
	__asm { mov ecx, 0x12f3068 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a74a50 }
	__asm { push 0xde83a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac099: }
	__asm { push 0xde7260 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cf74[];
extern "C" void fn_004115f0();
extern "C" void fn_0078aaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac0c0
extern "C" __declspec(naked) void asm_00dac0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x40c550 }
	__asm { push 0x131a29c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cf74] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac119 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cf74], eax }
	__asm { mov ecx, 0x131cf78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078aaf0 }
	__asm { push 0xddc020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac119: }
	__asm { push 0xde7270 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5070[];
extern "C" void fn_004115f0();
extern "C" void fn_008fdcc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac140
extern "C" __declspec(naked) void asm_00dac140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2332e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822020 }
	__asm { push 0x12f2f58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5070] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5070], eax }
	__asm { mov ecx, 0x12f4fe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdcc0 }
	__asm { push 0xde83b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac199: }
	__asm { push 0xde7280 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4530[];
extern "C" void fn_004115f0();
extern "C" void fn_00843ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac1c0
extern "C" __declspec(naked) void asm_00dac1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2360e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822080 }
	__asm { push 0x12f2eb8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4530] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac219 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4530], eax }
	__asm { mov ecx, 0x12f44a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843ff0 }
	__asm { push 0xde83c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac219: }
	__asm { push 0xde7290 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f34e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac240
extern "C" __declspec(naked) void asm_00dac240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8220e0 }
	__asm { push 0x12f2dd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f34e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac299 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f34e0], eax }
	__asm { mov ecx, 0x12f3458 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef060 }
	__asm { push 0xde83d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac299: }
	__asm { push 0xde72a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3210[];
extern "C" void fn_004115f0();
extern "C" void fn_008fde00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac2c0
extern "C" __declspec(naked) void asm_00dac2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822140 }
	__asm { push 0x12f2da8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3210] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac319 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3210], eax }
	__asm { mov ecx, 0x12f3188 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fde00 }
	__asm { push 0xde83e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac319: }
	__asm { push 0xde72b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac340
extern "C" __declspec(naked) void asm_00dac340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2362e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8221a0 }
	__asm { push 0x12f2f18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4bf0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac399: }
	__asm { push 0xde72c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5100[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac3c0
extern "C" __declspec(naked) void asm_00dac3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822200 }
	__asm { push 0x12f2f60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac419 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac419: }
	__asm { push 0xde72d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4260[];
extern "C" void fn_004115f0();
extern "C" void fn_009d1260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac440
extern "C" __declspec(naked) void asm_00dac440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2334e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822260 }
	__asm { push 0x12f2e90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4260] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4260], eax }
	__asm { mov ecx, 0x12f41d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1260 }
	__asm { push 0xde8410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac499: }
	__asm { push 0xde72e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4140[];
extern "C" void fn_004115f0();
extern "C" void fn_009d14c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac4c0
extern "C" __declspec(naked) void asm_00dac4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4132e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8222c0 }
	__asm { push 0x12f2e80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4140] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac519: }
	__asm { push 0xde72f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f46e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00af1d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac540
extern "C" __declspec(naked) void asm_00dac540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2364e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822320 }
	__asm { push 0x12f2ed0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f46e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f46e0], eax }
	__asm { mov ecx, 0x12f4658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1d80 }
	__asm { push 0xde8430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac599: }
	__asm { push 0xde7300 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f57c0[];
extern "C" void fn_004115f0();
extern "C" void fn_00981740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac5c0
extern "C" __declspec(naked) void asm_00dac5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822380 }
	__asm { push 0x12f2fc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f57c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac619 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f57c0], eax }
	__asm { mov ecx, 0x12f5738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00981740 }
	__asm { push 0xde8440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac619: }
	__asm { push 0xde7310 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5850[];
extern "C" void fn_004115f0();
extern "C" void fn_00867ac0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac640
extern "C" __declspec(naked) void asm_00dac640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2366e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8223e0 }
	__asm { push 0x12f2fc8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5850] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac699 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5850], eax }
	__asm { mov ecx, 0x12f57c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ac0 }
	__asm { push 0xde8450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac699: }
	__asm { push 0xde7320 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3f90[];
extern "C" void fn_004115f0();
extern "C" void fn_00af17a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac6c0
extern "C" __declspec(naked) void asm_00dac6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2336e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822440 }
	__asm { push 0x12f2e68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3f90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f90], eax }
	__asm { mov ecx, 0x12f3f08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af17a0 }
	__asm { push 0xde8460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac719: }
	__asm { push 0xde7330 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac740
extern "C" __declspec(naked) void asm_00dac740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac799: }
	__asm { push 0xde7340 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4e30[];
extern "C" void fn_004115f0();
extern "C" void fn_009734a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac7c0
extern "C" __declspec(naked) void asm_00dac7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822500 }
	__asm { push 0x12f2f38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4e30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4e30], eax }
	__asm { mov ecx, 0x12f4da8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009734a0 }
	__asm { push 0xde8480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac819: }
	__asm { push 0xde7350 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6030[];
extern "C" void fn_004115f0();
extern "C" void fn_008ed280();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac840
extern "C" __declspec(naked) void asm_00dac840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822560 }
	__asm { push 0x12f3038 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6030] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6030], eax }
	__asm { mov ecx, 0x12f5fa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed280 }
	__asm { push 0xde8490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac899: }
	__asm { push 0xde7360 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f32a0[];
extern "C" void fn_004115f0();
extern "C" void fn_008fdf40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac8c0
extern "C" __declspec(naked) void asm_00dac8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8225c0 }
	__asm { push 0x12f2db0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f32a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac919 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f32a0], eax }
	__asm { mov ecx, 0x12f3218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdf40 }
	__asm { push 0xde84a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac919: }
	__asm { push 0xde7370 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3de0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a8cd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac940
extern "C" __declspec(naked) void asm_00dac940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2368e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822620 }
	__asm { push 0x12f2e50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3de0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dac999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3de0], eax }
	__asm { mov ecx, 0x12f3d58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cd60 }
	__asm { push 0xde84b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dac999: }
	__asm { push 0xde7380 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5730[];
extern "C" void fn_004115f0();
extern "C" void fn_008bab60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dac9c0
extern "C" __declspec(naked) void asm_00dac9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822680 }
	__asm { push 0x12f2fb8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5730] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daca19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5730], eax }
	__asm { mov ecx, 0x12f56a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bab60 }
	__asm { push 0xde84c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daca19: }
	__asm { push 0xde7390 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3690[];
extern "C" void fn_004115f0();
extern "C" void fn_00867c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daca40
extern "C" __declspec(naked) void asm_00daca40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8226e0 }
	__asm { push 0x12f2de8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00daca99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3690], eax }
	__asm { mov ecx, 0x12f3608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867c20 }
	__asm { push 0xde84d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00daca99: }
	__asm { push 0xde73a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3570[];
extern "C" void fn_004115f0();
extern "C" void fn_00867d60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacac0
extern "C" __declspec(naked) void asm_00dacac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822740 }
	__asm { push 0x12f2dd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3570] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacb19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3570], eax }
	__asm { mov ecx, 0x12f34e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867d60 }
	__asm { push 0xde84e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacb19: }
	__asm { push 0xde73b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3600[];
extern "C" void fn_004115f0();
extern "C" void fn_00867ee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacb40
extern "C" __declspec(naked) void asm_00dacb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8227a0 }
	__asm { push 0x12f2de0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3600] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacb99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3600], eax }
	__asm { mov ecx, 0x12f3578 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ee0 }
	__asm { push 0xde84f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacb99: }
	__asm { push 0xde73c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f54f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00907c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacbc0
extern "C" __declspec(naked) void asm_00dacbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822800 }
	__asm { push 0x12f2f98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f54f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacc19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f54f0], eax }
	__asm { mov ecx, 0x12f5468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907c90 }
	__asm { push 0xde8500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacc19: }
	__asm { push 0xde73d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5df0[];
extern "C" void fn_004115f0();
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacc40
extern "C" __declspec(naked) void asm_00dacc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822860 }
	__asm { push 0x12f3018 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5df0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacc99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacc99: }
	__asm { push 0xde73e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5d60[];
extern "C" void fn_004115f0();
extern "C" void fn_009cc760();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daccc0
extern "C" __declspec(naked) void asm_00daccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8228c0 }
	__asm { push 0x12f3010 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5d60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacd19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5d60], eax }
	__asm { mov ecx, 0x12f5cd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc760 }
	__asm { push 0xde8520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacd19: }
	__asm { push 0xde73f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5460[];
extern "C" void fn_004115f0();
extern "C" void fn_00907df0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacd40
extern "C" __declspec(naked) void asm_00dacd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822920 }
	__asm { push 0x12f2f90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5460] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacd99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5460], eax }
	__asm { mov ecx, 0x12f53d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907df0 }
	__asm { push 0xde8530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacd99: }
	__asm { push 0xde7400 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ad0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef1a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacdc0
extern "C" __declspec(naked) void asm_00dacdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2338e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822980 }
	__asm { push 0x12f2f08 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4ad0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dace19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ad0], eax }
	__asm { mov ecx, 0x12f4a48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef1a0 }
	__asm { push 0xde8540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dace19: }
	__asm { push 0xde7410 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4800[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dace40
extern "C" __declspec(naked) void asm_00dace40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24c0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8229e0 }
	__asm { push 0x12f2ee0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4800] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dace99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4800], eax }
	__asm { mov ecx, 0x12f4778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef2d0 }
	__asm { push 0xde8550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dace99: }
	__asm { push 0xde7420 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5c40[];
extern "C" void fn_004115f0();
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacec0
extern "C" __declspec(naked) void asm_00dacec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822a40 }
	__asm { push 0x12f3000 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5c40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacf19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacf19: }
	__asm { push 0xde7430 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_004115f0();
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacf40
extern "C" __declspec(naked) void asm_00dacf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2370e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822aa0 }
	__asm { push 0x12f2ff8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5bb0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dacf99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dacf99: }
	__asm { push 0xde7440 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3720[];
extern "C" void fn_004115f0();
extern "C" void fn_00a0e2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dacfc0
extern "C" __declspec(naked) void asm_00dacfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822b00 }
	__asm { push 0x12f2df0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3720] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dad019 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3720], eax }
	__asm { mov ecx, 0x12f3698 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e2d0 }
	__asm { push 0xde8580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dad019: }
	__asm { push 0xde7450 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fcc80();
extern "C" void fn_008fe680();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00db7080
extern "C" __declspec(naked) void asm_00db7080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x828 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00db70bd }
	__asm { mov ecx, eax }
	__asm { call fn_008fe680 }
	__asm { jmp L_00db70bf }
	__asm { L_00db70bd: }
	__asm { xor eax, eax }
	__asm { L_00db70bf: }
	__asm { push eax }
	__asm { mov ecx, 0x12fe528 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008fcc80 }
	__asm { push 0xdf1170 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c3e4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbaea0
extern "C" __declspec(naked) void asm_00dbaea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35eee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c3e4] }
	__asm { test al, 1 }
	__asm { jne L_00dbaf0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c3e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe80a3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c2b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbaf0b: }
	__asm { push 0xdf36a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013000ac[];
extern "C" void fn_004959d0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbaf30
extern "C" __declspec(naked) void asm_00dbaf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35f0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013000ac] }
	__asm { test al, 1 }
	__asm { jne L_00dbaf9b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013000ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe809f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004959d0 }
	__asm { push eax }
	__asm { mov ecx, 0x12fff80 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf37d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbaf9b: }
	__asm { push 0xdf36b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffe4c[];
extern "C" void fn_004959d0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbafc0
extern "C" __declspec(naked) void asm_00dbafc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35f2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ffe4c] }
	__asm { test al, 1 }
	__asm { jne L_00dbb02b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ffe4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe80a48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004959d0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ffd20 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf37e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbb02b: }
	__asm { push 0xdf36c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffd1c[];
extern "C" void fn_004959d0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb050
extern "C" __declspec(naked) void asm_00dbb050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35f4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ffd1c] }
	__asm { test al, 1 }
	__asm { jne L_00dbb0bb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ffd1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe80a24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004959d0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ffbf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf37f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbb0bb: }
	__asm { push 0xdf36d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fff7c[];
extern "C" void fn_004959d0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb0e0
extern "C" __declspec(naked) void asm_00dbb0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35f6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012fff7c] }
	__asm { test al, 1 }
	__asm { jne L_00dbb14b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fff7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe80a64 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004959d0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ffe50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf3800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbb14b: }
	__asm { push 0xdf36e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c480[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbb170
extern "C" __declspec(naked) void asm_00dbb170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd361be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c480] }
	__asm { test al, 1 }
	__asm { jne L_00dbb1db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c480], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1015c18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c488 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbb1db: }
	__asm { push 0xdf36f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300c0c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc620
extern "C" __declspec(naked) void asm_00dbc620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39a4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01300c0c] }
	__asm { test al, 1 }
	__asm { jne L_00dbc68b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300c0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe84b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1300ae0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf49d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbc68b: }
	__asm { push 0xdf49b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300d3c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0095e520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc6b0
extern "C" __declspec(naked) void asm_00dbc6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39a6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01300d3c] }
	__asm { test al, 1 }
	__asm { jne L_00dbc71b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300d3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe84b30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_0095e520 }
	__asm { push eax }
	__asm { mov ecx, 0x1300c10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf49e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dbc71b: }
	__asm { push 0xdf49c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302f7c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe880
extern "C" __declspec(naked) void asm_00dbe880()
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
	__asm { jne L_00dbe8eb }
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
	__asm { L_00dbe8eb: }
	__asm { push 0xdf63c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2104[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe910
extern "C" __declspec(naked) void asm_00dbe910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cb8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2104] }
	__asm { test al, 1 }
	__asm { jne L_00dbe97b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2104], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89f04 }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { L_00dbe97b: }
	__asm { push 0xdf63d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013030ac[];
extern "C" void fn_007cbf10();
extern "C" void fn_0098cb00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe9a0
extern "C" __declspec(naked) void asm_00dbe9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cbae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013030ac] }
	__asm { test al, 1 }
	__asm { jne L_00dbea0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013030ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89f50 }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { L_00dbea0b: }
	__asm { push 0xdf63e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013041d4[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0bd0
extern "C" __declspec(naked) void asm_00dc0bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f24e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013041d4] }
	__asm { test al, 1 }
	__asm { jne L_00dc0c3b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013041d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe938c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
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
	__asm { L_00dc0c3b: }
	__asm { push 0xdf8560 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013098f8[];
extern "C" void fn_004115f0();
extern "C" void fn_00a854a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dca330
extern "C" __declspec(naked) void asm_00dca330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4b9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xa8a680 }
	__asm { push 0x1309848 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013098f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dca389 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013098f8], eax }
	__asm { mov ecx, 0x1309870 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a854a0 }
	__asm { push 0xdfff70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dca389: }
	__asm { push 0xdffa20 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130aaec[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcb860
extern "C" __declspec(naked) void asm_00dcb860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cb3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130aaec] }
	__asm { test al, 1 }
	__asm { jne L_00dcb8cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130aaec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a9c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dcb8cb: }
	__asm { push 0xe00680 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a62c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcb8f0
extern "C" __declspec(naked) void asm_00dcb8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cb5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130a62c] }
	__asm { test al, 1 }
	__asm { jne L_00dcb95b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a62c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a500 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dcb95b: }
	__asm { push 0xe00690 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a4fc[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcb980
extern "C" __declspec(naked) void asm_00dcb980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cb7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130a4fc] }
	__asm { test al, 1 }
	__asm { jne L_00dcb9eb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a4fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34d4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a3d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00770 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dcb9eb: }
	__asm { push 0xe006a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a88c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcba10
extern "C" __declspec(naked) void asm_00dcba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cb9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130a88c] }
	__asm { test al, 1 }
	__asm { jne L_00dcba7b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a88c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34b4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a760 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dcba7b: }
	__asm { push 0xe006b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a75c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbaa0
extern "C" __declspec(naked) void asm_00dcbaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cbbe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130a75c] }
	__asm { test al, 1 }
	__asm { jne L_00dcbb0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a75c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb3500 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a630 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe00790 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dcbb0b: }
	__asm { push 0xe006c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a9bc[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dcbb30
extern "C" __declspec(naked) void asm_00dcbb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cbde }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130a9bc] }
	__asm { test al, 1 }
	__asm { jne L_00dcbb9b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130a9bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xeb34c4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0080f590 }
	__asm { push eax }
	__asm { mov ecx, 0x130a890 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe007a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dcbb9b: }
	__asm { push 0xe006d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130faac[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd3420
extern "C" __declspec(naked) void asm_00dd3420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f0ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130faac] }
	__asm { test al, 1 }
	__asm { jne L_00dd348b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130faac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x130f980 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd348b: }
	__asm { push 0xe08290 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130fd0c[];
extern "C" void fn_007cbf10();
extern "C" void fn_0095e520();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd34b0
extern "C" __declspec(naked) void asm_00dd34b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efde }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130fd0c] }
	__asm { test al, 1 }
	__asm { jne L_00dd351b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_0095e520 }
	__asm { push eax }
	__asm { mov ecx, 0x130fbe0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd351b: }
	__asm { push 0xe082a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312248[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fd00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6de0
extern "C" __declspec(naked) void asm_00dd6de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6500e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc4ae70 }
	__asm { push 0x1312118 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312248] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd6e39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312248], eax }
	__asm { mov ecx, 0x13121c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fd00 }
	__asm { push 0xe0c190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd6e39: }
	__asm { push 0xe0c290 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310880[];
extern "C" void fn_004115f0();
extern "C" void fn_00c25090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6e60
extern "C" __declspec(naked) void asm_00dd6e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc31250 }
	__asm { push 0x13107c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310880] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd6eb9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310880], eax }
	__asm { mov ecx, 0x13107f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c25090 }
	__asm { push 0xe09e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd6eb9: }
	__asm { push 0xe0c2a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312c58[];
extern "C" void fn_004115f0();
extern "C" void fn_00cb9ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6ee0
extern "C" __declspec(naked) void asm_00dd6ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53cf0 }
	__asm { push 0x1312a98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312c58] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd6f39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312c58], eax }
	__asm { mov ecx, 0x1312bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9ca0 }
	__asm { push 0xe0c460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd6f39: }
	__asm { push 0xe0c2b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013121b8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6f60
extern "C" __declspec(naked) void asm_00dd6f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64eee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc4aed0 }
	__asm { push 0x1312110 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013121b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd6fb9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013121b8], eax }
	__asm { mov ecx, 0x1312130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fe30 }
	__asm { push 0xe0c1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd6fb9: }
	__asm { push 0xe0c2c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312b38[];
extern "C" void fn_004115f0();
extern "C" void fn_00c567b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd6ff0
extern "C" __declspec(naked) void asm_00dd6ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53d50 }
	__asm { push 0x1312a88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312b38] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7049 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312b38], eax }
	__asm { mov ecx, 0x1312ab0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c567b0 }
	__asm { push 0xe0c470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7049: }
	__asm { push 0xe0c2d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312bc8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c56900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7070
extern "C" __declspec(naked) void asm_00dd7070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53db0 }
	__asm { push 0x1312a90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312bc8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd70c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312bc8], eax }
	__asm { mov ecx, 0x1312b40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56900 }
	__asm { push 0xe0c480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd70c9: }
	__asm { push 0xe0c2e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312d78[];
extern "C" void fn_004115f0();
extern "C" void fn_00c56a60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd70f0
extern "C" __declspec(naked) void asm_00dd70f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53e10 }
	__asm { push 0x1312aa8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312d78] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7149 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312d78], eax }
	__asm { mov ecx, 0x1312cf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56a60 }
	__asm { push 0xe0c490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7149: }
	__asm { push 0xe0c2f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312ce8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c56b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7170
extern "C" __declspec(naked) void asm_00dd7170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6502e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53e70 }
	__asm { push 0x1312aa0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312ce8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd71c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312ce8], eax }
	__asm { mov ecx, 0x1312c60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56b90 }
	__asm { push 0xe0c4a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd71c9: }
	__asm { push 0xe0c300 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310910[];
extern "C" void fn_004115f0();
extern "C" void fn_00c251d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd71f0
extern "C" __declspec(naked) void asm_00dd71f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc312b0 }
	__asm { push 0x13107cc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310910] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7249 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310910], eax }
	__asm { mov ecx, 0x1310888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c251d0 }
	__asm { push 0xe09e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7249: }
	__asm { push 0xe0c310 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312248[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fd00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7270
extern "C" __declspec(naked) void asm_00dd7270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6500e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc4ae70 }
	__asm { push 0x1312118 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312248] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd72c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312248], eax }
	__asm { mov ecx, 0x13121c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fd00 }
	__asm { push 0xe0c190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd72c9: }
	__asm { push 0xe0c320 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310880[];
extern "C" void fn_004115f0();
extern "C" void fn_00c25090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd72f0
extern "C" __declspec(naked) void asm_00dd72f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc31250 }
	__asm { push 0x13107c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01310880] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7349 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310880], eax }
	__asm { mov ecx, 0x13107f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c25090 }
	__asm { push 0xe09e80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7349: }
	__asm { push 0xe0c330 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312c58[];
extern "C" void fn_004115f0();
extern "C" void fn_00cb9ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7370
extern "C" __declspec(naked) void asm_00dd7370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53cf0 }
	__asm { push 0x1312a98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312c58] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd73c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312c58], eax }
	__asm { mov ecx, 0x1312bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb9ca0 }
	__asm { push 0xe0c460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd73c9: }
	__asm { push 0xe0c340 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013121b8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c3fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd73f0
extern "C" __declspec(naked) void asm_00dd73f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64eee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc4aed0 }
	__asm { push 0x1312110 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013121b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7449 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013121b8], eax }
	__asm { mov ecx, 0x1312130 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c3fe30 }
	__asm { push 0xe0c1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7449: }
	__asm { push 0xe0c350 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312b38[];
extern "C" void fn_004115f0();
extern "C" void fn_00c567b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7470
extern "C" __declspec(naked) void asm_00dd7470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53d50 }
	__asm { push 0x1312a88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312b38] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd74c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312b38], eax }
	__asm { mov ecx, 0x1312ab0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c567b0 }
	__asm { push 0xe0c470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd74c9: }
	__asm { push 0xe0c360 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312bc8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c56900();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd74f0
extern "C" __declspec(naked) void asm_00dd74f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd64fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53db0 }
	__asm { push 0x1312a90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312bc8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7549 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312bc8], eax }
	__asm { mov ecx, 0x1312b40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56900 }
	__asm { push 0xe0c480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7549: }
	__asm { push 0xe0c370 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312d78[];
extern "C" void fn_004115f0();
extern "C" void fn_00c56a60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd7570
extern "C" __declspec(naked) void asm_00dd7570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd650ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53e10 }
	__asm { push 0x1312aa8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312d78] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd75c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312d78], eax }
	__asm { mov ecx, 0x1312cf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56a60 }
	__asm { push 0xe0c490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd75c9: }
	__asm { push 0xe0c380 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01312ce8[];
extern "C" void fn_004115f0();
extern "C" void fn_00c56b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd75f0
extern "C" __declspec(naked) void asm_00dd75f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6502e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xc53e70 }
	__asm { push 0x1312aa0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01312ce8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00dd7649 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01312ce8], eax }
	__asm { mov ecx, 0x1312c60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c56b90 }
	__asm { push 0xe0c4a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00dd7649: }
	__asm { push 0xe0c390 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131476c[];
extern "C" char g_01314770[];
extern "C" char g_01314774[];
extern "C" char g_01314778[];
extern "C" char g_0131477c[];
extern "C" void fn_00403100();
extern "C" void fn_00403110();
extern "C" void fn_009fd3f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dda710
extern "C" __declspec(naked) void asm_00dda710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 2] }
	__asm { push eax }
	__asm { lea eax, [ebp - 3] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, 0x1314768 }
	__asm { call fn_00403100 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push eax }
	__asm { mov ecx, 0x131476b }
	__asm { call fn_009fd3f0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00dda762 }
	__asm { sub eax, 4 }
	__asm { L_00dda762: }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0xe0ec10 }
	__asm { mov dword ptr [g_0131476c], eax }
	__asm { mov dword ptr [g_01314770], 0 }
	__asm { mov dword ptr [g_01314774], 0x3f800000 }
	__asm { mov dword ptr [g_01314778], 0 }
	__asm { mov dword ptr [g_0131477c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012de568[];
extern "C" char g_012de56c[];
extern "C" char g_012de570[];
extern "C" void fn_00402eb0();
extern "C" void fn_00403a30();
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0790
extern "C" __declspec(naked) void asm_00de0790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [g_012de568], 0 }
	__asm { je L_00de080d }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 0x12de568 }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov esi, dword ptr [g_012de56c] }
	__asm { mov edi, dword ptr [g_012de568] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { mov ecx, 0x12de568 }
	__asm { call fn_00402eb0 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0041fe80 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012de568] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de568], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [g_012de56c], 0 }
	__asm { mov dword ptr [g_012de570], 0 }
	__asm { pop esi }
	__asm { L_00de080d: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_012e06f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00de15f0
extern "C" __declspec(naked) void asm_00de15f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ab4a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 0x12e06f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043f630 }
	__asm { mov eax, dword ptr [g_012e06f4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00de1665 }
	__asm { lea esi, [eax + 5] }
	__asm { test esi, esi }
	__asm { je L_00de1637 }
	__asm { add esi, -5 }
	__asm { jmp L_00de1639 }
	__asm { L_00de1637: }
	__asm { xor esi, esi }
	__asm { L_00de1639: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00de1665 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00de1665 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00de1665: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3258[];
extern "C" char g_012e3278[];
extern "C" char g_012e3288[];
extern "C" char g_012e328c[];
extern "C" char g_012e3290[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de43a0
extern "C" __declspec(naked) void asm_00de43a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [g_012e3290] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [g_012e328c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00de43c4 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de43c4: }
	__asm { mov eax, dword ptr [g_012e3288] }
	__asm { test eax, eax }
	__asm { je L_00de43d6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de43d6: }
	__asm { push esi }
	__asm { mov ecx, 0x12e3278 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e3278] }
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
	__asm { mov dword ptr [g_012e3258], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303460[];
extern "C" char g_01303480[];
extern "C" char g_01303494[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df70a0
extern "C" __declspec(naked) void asm_00df70a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01303494] }
	__asm { test eax, eax }
	__asm { je L_00df70b6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df70b6: }
	__asm { push esi }
	__asm { mov ecx, 0x1303480 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303480] }
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
	__asm { mov dword ptr [g_01303460], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308350[];
extern "C" char g_01308370[];
extern "C" char g_01308380[];
extern "C" char g_01308384[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdc20
extern "C" __declspec(naked) void asm_00dfdc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01308384] }
	__asm { test eax, eax }
	__asm { je L_00dfdc36 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfdc36: }
	__asm { push esi }
	__asm { push dword ptr [g_01308380] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1308370 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308370] }
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
	__asm { mov dword ptr [g_01308350], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308388[];
extern "C" char g_013083a8[];
extern "C" char g_013083b8[];
extern "C" char g_013083bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdca0
extern "C" __declspec(naked) void asm_00dfdca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013083bc] }
	__asm { test eax, eax }
	__asm { je L_00dfdcb6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfdcb6: }
	__asm { push esi }
	__asm { push dword ptr [g_013083b8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13083a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013083a8] }
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
	__asm { mov dword ptr [g_01308388], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013083f8[];
extern "C" char g_01308418[];
extern "C" char g_01308428[];
extern "C" char g_0130842c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdd20
extern "C" __declspec(naked) void asm_00dfdd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130842c] }
	__asm { test eax, eax }
	__asm { je L_00dfdd36 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfdd36: }
	__asm { push esi }
	__asm { push dword ptr [g_01308428] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1308418 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308418] }
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
	__asm { mov dword ptr [g_013083f8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308430[];
extern "C" char g_01308450[];
extern "C" char g_01308460[];
extern "C" char g_01308464[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdda0
extern "C" __declspec(naked) void asm_00dfdda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01308464] }
	__asm { test eax, eax }
	__asm { je L_00dfddb6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfddb6: }
	__asm { push esi }
	__asm { push dword ptr [g_01308460] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1308450 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308450] }
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
	__asm { mov dword ptr [g_01308430], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308318[];
extern "C" char g_01308338[];
extern "C" char g_01308348[];
extern "C" char g_0130834c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfde80
extern "C" __declspec(naked) void asm_00dfde80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130834c] }
	__asm { test eax, eax }
	__asm { je L_00dfde96 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfde96: }
	__asm { push esi }
	__asm { push dword ptr [g_01308348] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1308338 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308338] }
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
	__asm { mov dword ptr [g_01308318], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013083c0[];
extern "C" char g_013083e0[];
extern "C" char g_013083f0[];
extern "C" char g_013083f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdf00
extern "C" __declspec(naked) void asm_00dfdf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_013083f4] }
	__asm { test eax, eax }
	__asm { je L_00dfdf16 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfdf16: }
	__asm { push esi }
	__asm { push dword ptr [g_013083f0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13083e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013083e0] }
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
	__asm { mov dword ptr [g_013083c0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308468[];
extern "C" char g_01308488[];
extern "C" char g_01308498[];
extern "C" char g_0130849c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdf80
extern "C" __declspec(naked) void asm_00dfdf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130849c] }
	__asm { test eax, eax }
	__asm { je L_00dfdf96 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfdf96: }
	__asm { push esi }
	__asm { push dword ptr [g_01308498] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1308488 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308488] }
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
	__asm { mov dword ptr [g_01308468], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
