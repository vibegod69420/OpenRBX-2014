// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00eac378[];
extern "C" char g_012f64cc[];
extern "C" char g_012f64d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6750
extern "C" __declspec(naked) void asm_007e6750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2212e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eac378], 0 }
	__asm { jne L_007e6784 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6784: }
	__asm { push 0x7e1a40 }
	__asm { push 0x12f627c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e67ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64d0], eax }
	__asm { push 0xeac378 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e67ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e18[];
extern "C" char g_012f66cc[];
extern "C" char g_012f66d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e67f0
extern "C" __declspec(naked) void asm_007e67f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2214e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e18], 0 }
	__asm { jne L_007e6824 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6824: }
	__asm { push 0x7e1a90 }
	__asm { push 0x12f647c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e686e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66d0], eax }
	__asm { push 0xe94e18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e686e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb14fc[];
extern "C" char g_012f6534[];
extern "C" char g_012f6538[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6890
extern "C" __declspec(naked) void asm_007e6890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2216e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb14fc], 0 }
	__asm { jne L_007e68c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e68c4: }
	__asm { push 0x7e1ae0 }
	__asm { push 0x12f62e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6538] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e690e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6538], eax }
	__asm { push 0xeb14fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6534], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e690e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6534] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3798[];
extern "C" char g_012f64dc[];
extern "C" char g_012f64e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6930
extern "C" __declspec(naked) void asm_007e6930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2218e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ec3798], 0 }
	__asm { jne L_007e6964 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6964: }
	__asm { push 0x7e1b30 }
	__asm { push 0x12f628c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e69ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64e0], eax }
	__asm { push 0xec3798 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e69ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac674[];
extern "C" char g_012f64d4[];
extern "C" char g_012f64d8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e69d0
extern "C" __declspec(naked) void asm_007e69d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd221ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eac674], 0 }
	__asm { jne L_007e6a04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6a04: }
	__asm { push 0x7e1b80 }
	__asm { push 0x12f6284 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6a4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64d8], eax }
	__asm { push 0xeac674 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6a4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eaf290[];
extern "C" char g_012f651c[];
extern "C" char g_012f6520[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6a70
extern "C" __declspec(naked) void asm_007e6a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2269e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eaf290], 0 }
	__asm { jne L_007e6aa4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6aa4: }
	__asm { push 0x7e1bd0 }
	__asm { push 0x12f62cc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6520] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6aee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6520], eax }
	__asm { push 0xeaf290 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f651c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6aee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f651c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ead924[];
extern "C" char g_012f64fc[];
extern "C" char g_012f6500[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6b10
extern "C" __declspec(naked) void asm_007e6b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd221ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ead924], 0 }
	__asm { jne L_007e6b44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6b44: }
	__asm { push 0x7e1c20 }
	__asm { push 0x12f62ac }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6500] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6b8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6500], eax }
	__asm { push 0xead924 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64fc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6b8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64fc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ead464[];
extern "C" char g_012f64f4[];
extern "C" char g_012f64f8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6bb0
extern "C" __declspec(naked) void asm_007e6bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd226be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ead464], 0 }
	__asm { jne L_007e6be4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6be4: }
	__asm { push 0x7e1c70 }
	__asm { push 0x12f62a4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6c2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64f8], eax }
	__asm { push 0xead464 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64f4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6c2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64f4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94df8[];
extern "C" char g_012f66e4[];
extern "C" char g_012f66e8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6c50
extern "C" __declspec(naked) void asm_007e6c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd226de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94df8], 0 }
	__asm { jne L_007e6c84 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6c84: }
	__asm { push 0x7e1cc0 }
	__asm { push 0x12f6494 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6cce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66e8], eax }
	__asm { push 0xe94df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6cce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e04[];
extern "C" char g_012f669c[];
extern "C" char g_012f66a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6cf0
extern "C" __declspec(naked) void asm_007e6cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd226fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e04], 0 }
	__asm { jne L_007e6d24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6d24: }
	__asm { push 0x7e1d10 }
	__asm { push 0x12f644c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6d6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66a0], eax }
	__asm { push 0xe94e04 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f669c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6d6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f669c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb257c[];
extern "C" char g_012f6554[];
extern "C" char g_012f6558[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6d90
extern "C" __declspec(naked) void asm_007e6d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd221ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb257c], 0 }
	__asm { jne L_007e6dc4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6dc4: }
	__asm { push 0x7e1d60 }
	__asm { push 0x12f6304 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6558] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6e0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6558], eax }
	__asm { push 0xeb257c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6554], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6e0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6554] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb28b4[];
extern "C" char g_012f655c[];
extern "C" char g_012f6560[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6e30
extern "C" __declspec(naked) void asm_007e6e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2220e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb28b4], 0 }
	__asm { jne L_007e6e64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6e64: }
	__asm { push 0x7e1db0 }
	__asm { push 0x12f630c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6560] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6eae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6560], eax }
	__asm { push 0xeb28b4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f655c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6eae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f655c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebc048[];
extern "C" char g_012f663c[];
extern "C" char g_012f6640[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6ed0
extern "C" __declspec(naked) void asm_007e6ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2271e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebc048], 0 }
	__asm { jne L_007e6f04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6f04: }
	__asm { push 0x7e1e00 }
	__asm { push 0x12f63ec }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6640] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6f4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6640], eax }
	__asm { push 0xebc048 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f663c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6f4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f663c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eadf84[];
extern "C" char g_012f6514[];
extern "C" char g_012f6518[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6f70
extern "C" __declspec(naked) void asm_007e6f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2222e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eadf84], 0 }
	__asm { jne L_007e6fa4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6fa4: }
	__asm { push 0x7e1e50 }
	__asm { push 0x12f62c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6518] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e6fee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6518], eax }
	__asm { push 0xeadf84 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6514], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6fee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6514] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebf288[];
extern "C" char g_012f668c[];
extern "C" char g_012f6690[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7010
extern "C" __declspec(naked) void asm_007e7010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2224e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebf288], 0 }
	__asm { jne L_007e7044 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7044: }
	__asm { push 0x7e1ea0 }
	__asm { push 0x12f643c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e708e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6690], eax }
	__asm { push 0xebf288 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f668c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e708e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f668c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb1b8[];
extern "C" char g_012f661c[];
extern "C" char g_012f6620[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e70b0
extern "C" __declspec(naked) void asm_007e70b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2226e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebb1b8], 0 }
	__asm { jne L_007e70e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e70e4: }
	__asm { push 0x7e1ef0 }
	__asm { push 0x12f63cc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6620] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e712e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6620], eax }
	__asm { push 0xebb1b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f661c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e712e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f661c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb5694[];
extern "C" char g_012f65a4[];
extern "C" char g_012f65a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7150
extern "C" __declspec(naked) void asm_007e7150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2228e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb5694], 0 }
	__asm { jne L_007e7184 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7184: }
	__asm { push 0x7e1f40 }
	__asm { push 0x12f6354 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e71ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65a8], eax }
	__asm { push 0xeb5694 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e71ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb61ec[];
extern "C" char g_012f65bc[];
extern "C" char g_012f65c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e71f0
extern "C" __declspec(naked) void asm_007e71f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd222ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb61ec], 0 }
	__asm { jne L_007e7224 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7224: }
	__asm { push 0x7e1f90 }
	__asm { push 0x12f636c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e726e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65c0], eax }
	__asm { push 0xeb61ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e726e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65bc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a70[];
extern "C" char g_012f6544[];
extern "C" char g_012f6548[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7290
extern "C" __declspec(naked) void asm_007e7290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2273e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb1a70], 0 }
	__asm { jne L_007e72c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e72c4: }
	__asm { push 0x7e1fe0 }
	__asm { push 0x12f62f4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6548] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e730e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6548], eax }
	__asm { push 0xeb1a70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6544], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e730e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6544] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94df4[];
extern "C" char g_012f66dc[];
extern "C" char g_012f66e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7330
extern "C" __declspec(naked) void asm_007e7330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd222ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94df4], 0 }
	__asm { jne L_007e7364 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7364: }
	__asm { push 0x7e2030 }
	__asm { push 0x12f648c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e73ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66e0], eax }
	__asm { push 0xe94df4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e73ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e00[];
extern "C" char g_012f6694[];
extern "C" char g_012f6698[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e73d0
extern "C" __declspec(naked) void asm_007e73d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd222ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e00], 0 }
	__asm { jne L_007e7404 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7404: }
	__asm { push 0x7e2080 }
	__asm { push 0x12f6444 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6698] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e744e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6698], eax }
	__asm { push 0xe94e00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6694], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e744e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6694] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eaccf4[];
extern "C" char g_012f64ec[];
extern "C" char g_012f64f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7470
extern "C" __declspec(naked) void asm_007e7470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2275e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eaccf4], 0 }
	__asm { jne L_007e74a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e74a4: }
	__asm { push 0x7e20d0 }
	__asm { push 0x12f629c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e74ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64f0], eax }
	__asm { push 0xeaccf4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e74ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebcbe8[];
extern "C" char g_012f6664[];
extern "C" char g_012f6668[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7510
extern "C" __declspec(naked) void asm_007e7510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2277e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebcbe8], 0 }
	__asm { jne L_007e7544 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7544: }
	__asm { push 0x7e2120 }
	__asm { push 0x12f6414 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6668] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e758e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6668], eax }
	__asm { push 0xebcbe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6664], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e758e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6664] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb31e0[];
extern "C" char g_012f6564[];
extern "C" char g_012f6568[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e75b0
extern "C" __declspec(naked) void asm_007e75b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2279e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb31e0], 0 }
	__asm { jne L_007e75e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e75e4: }
	__asm { push 0x7e2170 }
	__asm { push 0x12f6314 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6568] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e762e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6568], eax }
	__asm { push 0xeb31e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6564], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e762e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6564] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb9808[];
extern "C" char g_012f660c[];
extern "C" char g_012f6610[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7650
extern "C" __declspec(naked) void asm_007e7650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd227be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb9808], 0 }
	__asm { jne L_007e7684 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7684: }
	__asm { push 0x7e21c0 }
	__asm { push 0x12f63bc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6610] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e76ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6610], eax }
	__asm { push 0xeb9808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f660c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e76ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f660c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb61e8[];
extern "C" char g_012f65b4[];
extern "C" char g_012f65b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e76f0
extern "C" __declspec(naked) void asm_007e76f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2230e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb61e8], 0 }
	__asm { jne L_007e7724 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7724: }
	__asm { push 0x7e2210 }
	__asm { push 0x12f6364 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e776e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65b8], eax }
	__asm { push 0xeb61e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e776e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a6c[];
extern "C" char g_012f653c[];
extern "C" char g_012f6540[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7790
extern "C" __declspec(naked) void asm_007e7790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd227de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb1a6c], 0 }
	__asm { jne L_007e77c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e77c4: }
	__asm { push 0x7e2260 }
	__asm { push 0x12f62ec }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6540] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e780e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6540], eax }
	__asm { push 0xeb1a6c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f653c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e780e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f653c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb0328[];
extern "C" char g_012f652c[];
extern "C" char g_012f6530[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7830
extern "C" __declspec(naked) void asm_007e7830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2232e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb0328], 0 }
	__asm { jne L_007e7864 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7864: }
	__asm { push 0x7e22b0 }
	__asm { push 0x12f62dc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6530] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e78ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6530], eax }
	__asm { push 0xeb0328 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f652c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e78ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f652c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eadaf0[];
extern "C" char g_012f6504[];
extern "C" char g_012f6508[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e78d0
extern "C" __declspec(naked) void asm_007e78d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2234e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eadaf0], 0 }
	__asm { jne L_007e7904 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7904: }
	__asm { push 0x7e2300 }
	__asm { push 0x12f62b4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6508] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e794e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6508], eax }
	__asm { push 0xeadaf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6504], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e794e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6504] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebdd30[];
extern "C" char g_012f6674[];
extern "C" char g_012f6678[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7970
extern "C" __declspec(naked) void asm_007e7970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2236e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebdd30], 0 }
	__asm { jne L_007e79a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e79a4: }
	__asm { push 0x7e2350 }
	__asm { push 0x12f6424 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6678] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e79ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6678], eax }
	__asm { push 0xebdd30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6674], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e79ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6674] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e10[];
extern "C" char g_012f66bc[];
extern "C" char g_012f66c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7a10
extern "C" __declspec(naked) void asm_007e7a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd227fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e10], 0 }
	__asm { jne L_007e7a44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7a44: }
	__asm { push 0x7e23a0 }
	__asm { push 0x12f646c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7a8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66c0], eax }
	__asm { push 0xe94e10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7a8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66bc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb351c[];
extern "C" char g_012f659c[];
extern "C" char g_012f65a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7ab0
extern "C" __declspec(naked) void asm_007e7ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2238e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb351c], 0 }
	__asm { jne L_007e7ae4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7ae4: }
	__asm { push 0x7e23f0 }
	__asm { push 0x12f634c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7b2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65a0], eax }
	__asm { push 0xeb351c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f659c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7b2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f659c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb1b4[];
extern "C" char g_012f6614[];
extern "C" char g_012f6618[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7b50
extern "C" __declspec(naked) void asm_007e7b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2281e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebb1b4], 0 }
	__asm { jne L_007e7b84 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7b84: }
	__asm { push 0x7e2440 }
	__asm { push 0x12f63c4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6618] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7bce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6618], eax }
	__asm { push 0xebb1b4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6614], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7bce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6614] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebe6c0[];
extern "C" char g_012f667c[];
extern "C" char g_012f6680[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7bf0
extern "C" __declspec(naked) void asm_007e7bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd223ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebe6c0], 0 }
	__asm { jne L_007e7c24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7c24: }
	__asm { push 0x7e2490 }
	__asm { push 0x12f642c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6680] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7c6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6680], eax }
	__asm { push 0xebe6c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f667c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7c6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f667c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb6bd4[];
extern "C" char g_012f65cc[];
extern "C" char g_012f65d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7c90
extern "C" __declspec(naked) void asm_007e7c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2283e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb6bd4], 0 }
	__asm { jne L_007e7cc4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7cc4: }
	__asm { push 0x7e24e0 }
	__asm { push 0x12f637c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7d0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65d0], eax }
	__asm { push 0xeb6bd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7d0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb6f4[];
extern "C" char g_012f6624[];
extern "C" char g_012f6628[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7d30
extern "C" __declspec(naked) void asm_007e7d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2285e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebb6f4], 0 }
	__asm { jne L_007e7d64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7d64: }
	__asm { push 0x7e2530 }
	__asm { push 0x12f63d4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6628] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7dae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6628], eax }
	__asm { push 0xebb6f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6624], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7dae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6624] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebb6ec[];
extern "C" char g_012f662c[];
extern "C" char g_012f6630[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7dd0
extern "C" __declspec(naked) void asm_007e7dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd223ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebb6ec], 0 }
	__asm { jne L_007e7e04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7e04: }
	__asm { push 0x7e2580 }
	__asm { push 0x12f63dc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6630] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7e4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6630], eax }
	__asm { push 0xebb6ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f662c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7e4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f662c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb821c[];
extern "C" char g_012f65dc[];
extern "C" char g_012f65e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7e70
extern "C" __declspec(naked) void asm_007e7e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2287e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb821c], 0 }
	__asm { jne L_007e7ea4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7ea4: }
	__asm { push 0x7e25d0 }
	__asm { push 0x12f638c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7eee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65e0], eax }
	__asm { push 0xeb821c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7eee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb6db8[];
extern "C" char g_012f65d4[];
extern "C" char g_012f65d8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7f10
extern "C" __declspec(naked) void asm_007e7f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2289e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb6db8], 0 }
	__asm { jne L_007e7f44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7f44: }
	__asm { push 0x7e2620 }
	__asm { push 0x12f6384 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e7f8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65d8], eax }
	__asm { push 0xeb6db8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7f8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb84f0[];
extern "C" char g_012f65e4[];
extern "C" char g_012f65e8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e7fb0
extern "C" __declspec(naked) void asm_007e7fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd228be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb84f0], 0 }
	__asm { jne L_007e7fe4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e7fe4: }
	__asm { push 0x7e2670 }
	__asm { push 0x12f6394 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e802e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65e8], eax }
	__asm { push 0xeb84f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e802e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb8fb8[];
extern "C" char g_012f65ec[];
extern "C" char g_012f65f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8050
extern "C" __declspec(naked) void asm_007e8050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd223ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb8fb8], 0 }
	__asm { jne L_007e8084 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8084: }
	__asm { push 0x7e26c0 }
	__asm { push 0x12f639c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e80ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65f0], eax }
	__asm { push 0xeb8fb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e80ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb9218[];
extern "C" char g_012f65f4[];
extern "C" char g_012f65f8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e80f0
extern "C" __declspec(naked) void asm_007e80f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd228de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb9218], 0 }
	__asm { jne L_007e8124 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8124: }
	__asm { push 0x7e2710 }
	__asm { push 0x12f63a4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e816e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65f8], eax }
	__asm { push 0xeb9218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65f4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e816e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65f4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb0054[];
extern "C" char g_012f6524[];
extern "C" char g_012f6528[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8190
extern "C" __declspec(naked) void asm_007e8190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd228fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb0054], 0 }
	__asm { jne L_007e81c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e81c4: }
	__asm { push 0x7e2760 }
	__asm { push 0x12f62d4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6528] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e820e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6528], eax }
	__asm { push 0xeb0054 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6524], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e820e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6524] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eadf88[];
extern "C" char g_012f650c[];
extern "C" char g_012f6510[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8230
extern "C" __declspec(naked) void asm_007e8230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2291e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eadf88], 0 }
	__asm { jne L_007e8264 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8264: }
	__asm { push 0x7e27b0 }
	__asm { push 0x12f62bc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6510] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e82ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6510], eax }
	__asm { push 0xeadf88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f650c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e82ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f650c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebbce8[];
extern "C" char g_012f6634[];
extern "C" char g_012f6638[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e82d0
extern "C" __declspec(naked) void asm_007e82d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2293e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebbce8], 0 }
	__asm { jne L_007e8304 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8304: }
	__asm { push 0x7e2800 }
	__asm { push 0x12f63e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6638] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e834e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6638], eax }
	__asm { push 0xebbce8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6634], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e834e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6634] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb9490[];
extern "C" char g_012f65fc[];
extern "C" char g_012f6600[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8370
extern "C" __declspec(naked) void asm_007e8370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2240e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb9490], 0 }
	__asm { jne L_007e83a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e83a4: }
	__asm { push 0x7e2850 }
	__asm { push 0x12f63ac }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6600] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e83ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6600], eax }
	__asm { push 0xeb9490 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65fc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e83ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65fc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb95f0[];
extern "C" char g_012f6604[];
extern "C" char g_012f6608[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8410
extern "C" __declspec(naked) void asm_007e8410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2295e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb95f0], 0 }
	__asm { jne L_007e8444 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8444: }
	__asm { push 0x7e28a0 }
	__asm { push 0x12f63b4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6608] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e848e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6608], eax }
	__asm { push 0xeb95f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6604], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e848e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6604] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e0c[];
extern "C" char g_012f66b4[];
extern "C" char g_012f66b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e84b0
extern "C" __declspec(naked) void asm_007e84b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2242e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e0c], 0 }
	__asm { jne L_007e84e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e84e4: }
	__asm { push 0x7e28f0 }
	__asm { push 0x12f6464 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e852e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66b8], eax }
	__asm { push 0xe94e0c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e852e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb1a74[];
extern "C" char g_012f654c[];
extern "C" char g_012f6550[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8550
extern "C" __declspec(naked) void asm_007e8550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2244e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb1a74], 0 }
	__asm { jne L_007e8584 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8584: }
	__asm { push 0x7e2940 }
	__asm { push 0x12f62fc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6550] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e85ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6550], eax }
	__asm { push 0xeb1a74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f654c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e85ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f654c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac7a0[];
extern "C" char g_012f64e4[];
extern "C" char g_012f64e8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e85f0
extern "C" __declspec(naked) void asm_007e85f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2246e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eac7a0], 0 }
	__asm { jne L_007e8624 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e8624: }
	__asm { push 0x7e2990 }
	__asm { push 0x12f6294 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e866e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64e8], eax }
	__asm { push 0xeac7a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e866e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb6474[];
extern "C" char g_012f65c4[];
extern "C" char g_012f65c8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e8690
extern "C" __declspec(naked) void asm_007e8690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2248e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb6474], 0 }
	__asm { jne L_007e86c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e86c4: }
	__asm { push 0x7e29e0 }
	__asm { push 0x12f6374 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65c8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e870e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65c8], eax }
	__asm { push 0xeb6474 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65c4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e870e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65c4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5e80[];
extern "C" void fn_004115f0();
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8880
extern "C" __declspec(naked) void asm_007e8880()
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
	__asm { jne L_007e88d9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e88d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5df8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f40b0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a55ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e88f0
extern "C" __declspec(naked) void asm_007e88f0()
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
	__asm { jne L_007e8949 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f40b0], eax }
	__asm { mov ecx, 0x12f4028 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a55ed0 }
	__asm { push 0xde8040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8949: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4028 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f33c0[];
extern "C" void fn_004115f0();
extern "C" void fn_009b3e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8960
extern "C" __declspec(naked) void asm_007e8960()
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
	__asm { jne L_007e89b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f33c0], eax }
	__asm { mov ecx, 0x12f3338 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b3e70 }
	__asm { push 0xde8070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e89b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f3338 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3960[];
extern "C" void fn_004115f0();
extern "C" void fn_007b92b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e89d0
extern "C" __declspec(naked) void asm_007e89d0()
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
	__asm { jne L_007e8a29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3960], eax }
	__asm { mov ecx, 0x12f38d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b92b0 }
	__asm { push 0xde8080 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8a29: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f38d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3578[];
extern "C" void fn_004115f0();
extern "C" void fn_007b93e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8a40
extern "C" __declspec(naked) void asm_007e8a40()
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
	__asm { jne L_007e8a99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3578], eax }
	__asm { mov ecx, 0x12e34f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b93e0 }
	__asm { push 0xde4660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8a99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e34f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e34b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007b9510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8ab0
extern "C" __declspec(naked) void asm_007e8ab0()
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
	__asm { jne L_007e8b09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e34b0], eax }
	__asm { mov ecx, 0x12e3428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b9510 }
	__asm { push 0xde4670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8b09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e3428 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004115f0();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8b20
extern "C" __declspec(naked) void asm_007e8b20()
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
	__asm { jne L_007e8b79 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8b79: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5a08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004115f0();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8b90
extern "C" __declspec(naked) void asm_007e8b90()
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
	__asm { jne L_007e8be9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8be9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5978 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004115f0();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8c00
extern "C" __declspec(naked) void asm_007e8c00()
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
	__asm { jne L_007e8c59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8c59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5a98 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5190[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8c70
extern "C" __declspec(naked) void asm_007e8c70()
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
	__asm { jne L_007e8cc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8cc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5108 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5220[];
extern "C" void fn_004115f0();
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8ce0
extern "C" __declspec(naked) void asm_007e8ce0()
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
	__asm { jne L_007e8d39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8d39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5198 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_004115f0();
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8d50
extern "C" __declspec(naked) void asm_007e8d50()
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
	__asm { jne L_007e8da9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8da9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5f18 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f42f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00843a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8dc0
extern "C" __declspec(naked) void asm_007e8dc0()
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
	__asm { jne L_007e8e19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f42f0], eax }
	__asm { mov ecx, 0x12f4268 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843a30 }
	__asm { push 0xde8120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8e19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4268 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f52b0[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8e30
extern "C" __declspec(naked) void asm_007e8e30()
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
	__asm { jne L_007e8e89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f52b0], eax }
	__asm { mov ecx, 0x12f5228 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5990 }
	__asm { push 0xde8130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8e89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5228 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4a40[];
extern "C" void fn_004115f0();
extern "C" void fn_009bb3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8ea0
extern "C" __declspec(naked) void asm_007e8ea0()
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
	__asm { jne L_007e8ef9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4a40], eax }
	__asm { mov ecx, 0x12f49b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb3b0 }
	__asm { push 0xde81c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8ef9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f49b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f49b0[];
extern "C" void fn_004115f0();
extern "C" void fn_009bb500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8f10
extern "C" __declspec(naked) void asm_007e8f10()
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
	__asm { jne L_007e8f69 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f49b0], eax }
	__asm { mov ecx, 0x12f4928 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb500 }
	__asm { push 0xde81d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8f69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4928 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4410[];
extern "C" void fn_004115f0();
extern "C" void fn_00843b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8f80
extern "C" __declspec(naked) void asm_007e8f80()
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
	__asm { jne L_007e8fd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4410], eax }
	__asm { mov ecx, 0x12f4388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843b60 }
	__asm { push 0xde81e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e8fd9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4388 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f44a0[];
extern "C" void fn_004115f0();
extern "C" void fn_00843c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e8ff0
extern "C" __declspec(naked) void asm_007e8ff0()
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
	__asm { jne L_007e9049 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f44a0], eax }
	__asm { mov ecx, 0x12f4418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843c90 }
	__asm { push 0xde81f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9049: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4418 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4380[];
extern "C" void fn_004115f0();
extern "C" void fn_00843e20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9060
extern "C" __declspec(naked) void asm_007e9060()
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
	__asm { jne L_007e90b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4380], eax }
	__asm { mov ecx, 0x12f42f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843e20 }
	__asm { push 0xde8200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e90b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f42f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5f10[];
extern "C" void fn_004115f0();
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e90d0
extern "C" __declspec(naked) void asm_007e90d0()
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
	__asm { jne L_007e9129 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9129: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5e88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5340[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9140
extern "C" __declspec(naked) void asm_007e9140()
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
	__asm { jne L_007e9199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5340], eax }
	__asm { mov ecx, 0x12f52b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5ad0 }
	__asm { push 0xde8230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9199: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f52b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6150[];
extern "C" void fn_004115f0();
extern "C" void fn_00a676e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e91b0
extern "C" __declspec(naked) void asm_007e91b0()
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
	__asm { jne L_007e9209 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6150], eax }
	__asm { mov ecx, 0x12f60c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a676e0 }
	__asm { push 0xde82c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9209: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f60c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4b60[];
extern "C" void fn_004115f0();
extern "C" void fn_00aa4b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9220
extern "C" __declspec(naked) void asm_007e9220()
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
	__asm { jne L_007e9279 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4b60], eax }
	__asm { mov ecx, 0x12f4ad8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aa4b40 }
	__asm { push 0xde82e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9279: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4ad8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4020[];
extern "C" void fn_004115f0();
extern "C" void fn_007d6150();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9290
extern "C" __declspec(naked) void asm_007e9290()
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
	__asm { jne L_007e92e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4020], eax }
	__asm { mov ecx, 0x12f3f98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6150 }
	__asm { push 0xde8300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e92e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f3f98 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ec0[];
extern "C" void fn_004115f0();
extern "C" void fn_00973340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9300
extern "C" __declspec(naked) void asm_007e9300()
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
	__asm { jne L_007e9359 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ec0], eax }
	__asm { mov ecx, 0x12f4e38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973340 }
	__asm { push 0xde8340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9359: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4e38 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f61e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9370
extern "C" __declspec(naked) void asm_007e9370()
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
	__asm { jne L_007e93c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f61e0], eax }
	__asm { mov ecx, 0x12f6158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5c00 }
	__asm { push 0xde8380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e93c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f6158 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cf74[];
extern "C" void fn_004115f0();
extern "C" void fn_0078aaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e93e0
extern "C" __declspec(naked) void asm_007e93e0()
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
	__asm { jne L_007e9439 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cf74], eax }
	__asm { mov ecx, 0x131cf78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078aaf0 }
	__asm { push 0xddc020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9439: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cf78 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4530[];
extern "C" void fn_004115f0();
extern "C" void fn_00843ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9450
extern "C" __declspec(naked) void asm_007e9450()
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
	__asm { jne L_007e94a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4530], eax }
	__asm { mov ecx, 0x12f44a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843ff0 }
	__asm { push 0xde83c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e94a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f44a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e94c0
extern "C" __declspec(naked) void asm_007e94c0()
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
	__asm { jne L_007e9519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9519: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4b68 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5100[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9530
extern "C" __declspec(naked) void asm_007e9530()
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
	__asm { jne L_007e9589 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9589: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5078 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4260[];
extern "C" void fn_004115f0();
extern "C" void fn_009d1260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e95a0
extern "C" __declspec(naked) void asm_007e95a0()
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
	__asm { jne L_007e95f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4260], eax }
	__asm { mov ecx, 0x12f41d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1260 }
	__asm { push 0xde8410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e95f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f41d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4140[];
extern "C" void fn_004115f0();
extern "C" void fn_009d14c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9610
extern "C" __declspec(naked) void asm_007e9610()
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
	__asm { jne L_007e9669 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9669: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f40b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9680
extern "C" __declspec(naked) void asm_007e9680()
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
	__asm { jne L_007e96d9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e96d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4c88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4e30[];
extern "C" void fn_004115f0();
extern "C" void fn_009734a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e96f0
extern "C" __declspec(naked) void asm_007e96f0()
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
	__asm { jne L_007e9749 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4e30], eax }
	__asm { mov ecx, 0x12f4da8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009734a0 }
	__asm { push 0xde8480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9749: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f4da8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6030[];
extern "C" void fn_004115f0();
extern "C" void fn_008ed280();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9760
extern "C" __declspec(naked) void asm_007e9760()
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
	__asm { jne L_007e97b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6030], eax }
	__asm { mov ecx, 0x12f5fa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed280 }
	__asm { push 0xde8490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e97b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5fa8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3690[];
extern "C" void fn_004115f0();
extern "C" void fn_00867c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e97d0
extern "C" __declspec(naked) void asm_007e97d0()
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
	__asm { jne L_007e9829 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3690], eax }
	__asm { mov ecx, 0x12f3608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867c20 }
	__asm { push 0xde84d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9829: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f3608 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3570[];
extern "C" void fn_004115f0();
extern "C" void fn_00867d60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9840
extern "C" __declspec(naked) void asm_007e9840()
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
	__asm { jne L_007e9899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3570], eax }
	__asm { mov ecx, 0x12f34e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867d60 }
	__asm { push 0xde84e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9899: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f34e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3600[];
extern "C" void fn_004115f0();
extern "C" void fn_00867ee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e98b0
extern "C" __declspec(naked) void asm_007e98b0()
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
	__asm { jne L_007e9909 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3600], eax }
	__asm { mov ecx, 0x12f3578 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ee0 }
	__asm { push 0xde84f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9909: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f3578 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5df0[];
extern "C" void fn_004115f0();
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9920
extern "C" __declspec(naked) void asm_007e9920()
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
	__asm { jne L_007e9979 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9979: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5d68 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5c40[];
extern "C" void fn_004115f0();
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9990
extern "C" __declspec(naked) void asm_007e9990()
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
	__asm { jne L_007e99e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e99e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5bb8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_004115f0();
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007e9a00
extern "C" __declspec(naked) void asm_007e9a00()
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
	__asm { jne L_007e9a59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007e9a59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f5b28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081cb30();
// FUNCTION: ROBLOXSTUDIO 0x00806400
extern "C" __declspec(naked) void asm_00806400()
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
	__asm { call fn_0081cb30 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00806472 }
	__asm { add esi, 5 }
	__asm { je L_00806442 }
	__asm { add esi, -5 }
	__asm { jmp L_00806444 }
	__asm { L_00806442: }
	__asm { xor esi, esi }
	__asm { L_00806444: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806471 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806471 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806471: }
	__asm { pop edi }
	__asm { L_00806472: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081cec0();
// FUNCTION: ROBLOXSTUDIO 0x00806490
extern "C" __declspec(naked) void asm_00806490()
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
	__asm { call fn_0081cec0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00806502 }
	__asm { add esi, 5 }
	__asm { je L_008064d2 }
	__asm { add esi, -5 }
	__asm { jmp L_008064d4 }
	__asm { L_008064d2: }
	__asm { xor esi, esi }
	__asm { L_008064d4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806501 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806501 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806501: }
	__asm { pop edi }
	__asm { L_00806502: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081d250();
// FUNCTION: ROBLOXSTUDIO 0x00806520
extern "C" __declspec(naked) void asm_00806520()
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
	__asm { call fn_0081d250 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00806592 }
	__asm { add esi, 5 }
	__asm { je L_00806562 }
	__asm { add esi, -5 }
	__asm { jmp L_00806564 }
	__asm { L_00806562: }
	__asm { xor esi, esi }
	__asm { L_00806564: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806591 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806591 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806591: }
	__asm { pop edi }
	__asm { L_00806592: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081d5e0();
// FUNCTION: ROBLOXSTUDIO 0x008065b0
extern "C" __declspec(naked) void asm_008065b0()
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
	__asm { call fn_0081d5e0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00806622 }
	__asm { add esi, 5 }
	__asm { je L_008065f2 }
	__asm { add esi, -5 }
	__asm { jmp L_008065f4 }
	__asm { L_008065f2: }
	__asm { xor esi, esi }
	__asm { L_008065f4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806621 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806621 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806621: }
	__asm { pop edi }
	__asm { L_00806622: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081d970();
// FUNCTION: ROBLOXSTUDIO 0x00806640
extern "C" __declspec(naked) void asm_00806640()
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
	__asm { call fn_0081d970 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008066b2 }
	__asm { add esi, 5 }
	__asm { je L_00806682 }
	__asm { add esi, -5 }
	__asm { jmp L_00806684 }
	__asm { L_00806682: }
	__asm { xor esi, esi }
	__asm { L_00806684: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008066b1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008066b1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008066b1: }
	__asm { pop edi }
	__asm { L_008066b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081dd00();
// FUNCTION: ROBLOXSTUDIO 0x008066d0
extern "C" __declspec(naked) void asm_008066d0()
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
	__asm { call fn_0081dd00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00806742 }
	__asm { add esi, 5 }
	__asm { je L_00806712 }
	__asm { add esi, -5 }
	__asm { jmp L_00806714 }
	__asm { L_00806712: }
	__asm { xor esi, esi }
	__asm { L_00806714: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806741 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806741 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806741: }
	__asm { pop edi }
	__asm { L_00806742: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081e090();
// FUNCTION: ROBLOXSTUDIO 0x00806760
extern "C" __declspec(naked) void asm_00806760()
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
	__asm { call fn_0081e090 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008067d2 }
	__asm { add esi, 5 }
	__asm { je L_008067a2 }
	__asm { add esi, -5 }
	__asm { jmp L_008067a4 }
	__asm { L_008067a2: }
	__asm { xor esi, esi }
	__asm { L_008067a4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008067d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008067d1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008067d1: }
	__asm { pop edi }
	__asm { L_008067d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081e420();
// FUNCTION: ROBLOXSTUDIO 0x008067f0
extern "C" __declspec(naked) void asm_008067f0()
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
	__asm { call fn_0081e420 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00806862 }
	__asm { add esi, 5 }
	__asm { je L_00806832 }
	__asm { add esi, -5 }
	__asm { jmp L_00806834 }
	__asm { L_00806832: }
	__asm { xor esi, esi }
	__asm { L_00806834: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806861 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806861 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806861: }
	__asm { pop edi }
	__asm { L_00806862: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0081e7b0();
// FUNCTION: ROBLOXSTUDIO 0x00806880
extern "C" __declspec(naked) void asm_00806880()
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
	__asm { call fn_0081e7b0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008068f2 }
	__asm { add esi, 5 }
	__asm { je L_008068c2 }
	__asm { add esi, -5 }
	__asm { jmp L_008068c4 }
	__asm { L_008068c2: }
	__asm { xor esi, esi }
	__asm { L_008068c4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008068f1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008068f1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008068f1: }
	__asm { pop edi }
	__asm { L_008068f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x0080cca0
extern "C" __declspec(naked) void asm_0080cca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23188 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp dword ptr [esi + 0x90], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_0080ccda }
	__asm { push dword ptr [esi + 0x7c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0080ccda: }
	__asm { mov dword ptr [esi + 0x90], 0xf }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe5914c }
	__asm { mov dword ptr [esi + 4], 0xe591c4 }
	__asm { mov dword ptr [esi + 0x18], 0xe591cc }
	__asm { mov dword ptr [esi + 0x1c], 0xe591d8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94df4[];
extern "C" char g_012f2c64[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080e890
extern "C" __declspec(naked) void asm_0080e890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4016e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2c64] }
	__asm { test al, 1 }
	__asm { jne L_0080e8fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2c64], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94df4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2b38 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080e8fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2b38 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94df8[];
extern "C" char g_012f2d94[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080e910
extern "C" __declspec(naked) void asm_0080e910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2374e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2d94] }
	__asm { test al, 1 }
	__asm { jne L_0080e97c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2d94], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94df8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2c68 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080e97c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2c68 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e00[];
extern "C" char g_012f21b4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080e990
extern "C" __declspec(naked) void asm_0080e990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2376e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f21b4] }
	__asm { test al, 1 }
	__asm { jne L_0080e9fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f21b4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e00] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2088 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080e9fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2088 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e04[];
extern "C" char g_012f22e4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ea10
extern "C" __declspec(naked) void asm_0080ea10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4018e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f22e4] }
	__asm { test al, 1 }
	__asm { jne L_0080ea7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f22e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e04] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f21b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ea7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f21b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e20[];
extern "C" char g_012f2544[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ea90
extern "C" __declspec(naked) void asm_0080ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2378e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2544] }
	__asm { test al, 1 }
	__asm { jne L_0080eafc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2544], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e20] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2418 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080eafc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2418 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e1c[];
extern "C" char g_012f2b34[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080eb10
extern "C" __declspec(naked) void asm_0080eb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd401ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2b34] }
	__asm { test al, 1 }
	__asm { jne L_0080eb7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2b34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e1c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2a08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080eb7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2a08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e18[];
extern "C" char g_012f2a04[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080eb90
extern "C" __declspec(naked) void asm_0080eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd401ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2a04] }
	__asm { test al, 1 }
	__asm { jne L_0080ebfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2a04], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e18] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f28d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde74f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ebfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f28d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e14[];
extern "C" char g_012f28d4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ec10
extern "C" __declspec(naked) void asm_0080ec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd401ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f28d4] }
	__asm { test al, 1 }
	__asm { jne L_0080ec7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f28d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e14] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f27a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ec7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f27a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e10[];
extern "C" char g_012f27a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ec90
extern "C" __declspec(naked) void asm_0080ec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4020e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f27a4] }
	__asm { test al, 1 }
	__asm { jne L_0080ecfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f27a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e10] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2678 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ecfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2678 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e0c[];
extern "C" char g_012f2674[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ed10
extern "C" __declspec(naked) void asm_0080ed10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd237ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2674] }
	__asm { test al, 1 }
	__asm { jne L_0080ed7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2674], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e0c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f2548 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ed7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f2548 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e08[];
extern "C" char g_012f2414[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ed90
extern "C" __declspec(naked) void asm_0080ed90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4022e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f2414] }
	__asm { test al, 1 }
	__asm { jne L_0080edfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2414], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e94e08] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f22e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080edfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f22e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebec60[];
extern "C" char g_012f1e24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ee10
extern "C" __declspec(naked) void asm_0080ee10()
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
	__asm { test al, 1 }
	__asm { jne L_0080ee7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1e24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebec60] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1cf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ee7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1cf8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebd518[];
extern "C" char g_012f1a94[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ee90
extern "C" __declspec(naked) void asm_0080ee90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd237ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1a94] }
	__asm { test al, 1 }
	__asm { jne L_0080eefc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1a94], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebd518] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1968 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080eefc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f1968 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e92638[];
extern "C" char g_012efe14[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ef10
extern "C" __declspec(naked) void asm_0080ef10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd237ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012efe14] }
	__asm { test al, 1 }
	__asm { jne L_0080ef7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efe14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e92638] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12efce8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ef7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12efce8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebc3ac[];
extern "C" char g_012eff44[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ef90
extern "C" __declspec(naked) void asm_0080ef90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2380e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eff44] }
	__asm { test al, 1 }
	__asm { jne L_0080effc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eff44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebc3ac] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12efe18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080effc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12efe18 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec5ee4[];
extern "C" char g_012f0074[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f010
extern "C" __declspec(naked) void asm_0080f010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55b7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0074] }
	__asm { test al, 1 }
	__asm { jne L_0080f07c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0074], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec5ee4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eff48 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f07c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eff48 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec6148[];
extern "C" char g_012f01a4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f090
extern "C" __declspec(naked) void asm_0080f090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2382e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f01a4] }
	__asm { test al, 1 }
	__asm { jne L_0080f0fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f01a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec6148] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0078 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f0fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0078 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebc558[];
extern "C" char g_012f0664[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f110
extern "C" __declspec(naked) void asm_0080f110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5022e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0664] }
	__asm { test al, 1 }
	__asm { jne L_0080f17c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0664], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebc558] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0538 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f17c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0538 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb5c68[];
extern "C" char g_012eba5c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810d10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f190
extern "C" __declspec(naked) void asm_0080f190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2384e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eba5c] }
	__asm { test al, 1 }
	__asm { jne L_0080f1fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eba5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb5c68] }
	__asm { call fn_00810d10 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb930 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f1fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb930 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec1554[];
extern "C" char g_012e8d3c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f210
extern "C" __declspec(naked) void asm_0080f210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2386e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e8d3c] }
	__asm { test al, 1 }
	__asm { jne L_0080f27c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8d3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec1554] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8c10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f27c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8c10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eab730[];
extern "C" char g_012e6acc[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f290
extern "C" __declspec(naked) void asm_0080f290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd407be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e6acc] }
	__asm { test al, 1 }
	__asm { jne L_0080f2fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6acc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eab730] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x12e69a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f2fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e69a0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eab990[];
extern "C" char g_012e6bfc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f310
extern "C" __declspec(naked) void asm_0080f310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2388e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e6bfc] }
	__asm { test al, 1 }
	__asm { jne L_0080f37c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6bfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eab990] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6ad0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f37c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6ad0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eab2b4[];
extern "C" char g_012e63ac[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f390
extern "C" __declspec(naked) void asm_0080f390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd238ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e63ac] }
	__asm { test al, 1 }
	__asm { jne L_0080f3fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e63ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eab2b4] }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6280 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f3fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6280 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebcb5c[];
extern "C" char g_012f0b24[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f410
extern "C" __declspec(naked) void asm_0080f410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5097e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0b24] }
	__asm { test al, 1 }
	__asm { jne L_0080f47c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0b24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebcb5c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f09f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7600 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f47c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f09f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebcb58[];
extern "C" char g_012f09f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f490
extern "C" __declspec(naked) void asm_0080f490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd238ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f09f4] }
	__asm { test al, 1 }
	__asm { jne L_0080f4fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f09f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ebcb58] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f08c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7610 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f4fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f08c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9a630[];
extern "C" char g_012e70bc[];
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f510
extern "C" __declspec(naked) void asm_0080f510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd238ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e70bc] }
	__asm { test al, 1 }
	__asm { jne L_0080f57c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e70bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9a630] }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6f90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7620 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f57c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6f90 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb3518[];
extern "C" char g_012eb6cc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f590
extern "C" __declspec(naked) void asm_0080f590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d30e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb6cc] }
	__asm { test al, 1 }
	__asm { jne L_0080f5fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb6cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb3518] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb5a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7630 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f5fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eb5a0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8305c[];
extern "C" char g_012ecd5c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f610
extern "C" __declspec(naked) void asm_0080f610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2390e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ecd5c] }
	__asm { test al, 1 }
	__asm { jne L_0080f67c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ecd5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e8305c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ecc30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f67c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ecc30 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9b3f0[];
extern "C" char g_012e6d2c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f690
extern "C" __declspec(naked) void asm_0080f690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2392e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e6d2c] }
	__asm { test al, 1 }
	__asm { jne L_0080f6fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6d2c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00e9b3f0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6c00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7650 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f6fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e6c00 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3200[];
extern "C" char g_012e5b5c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f710
extern "C" __declspec(naked) void asm_0080f710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2394e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5b5c] }
	__asm { test al, 1 }
	__asm { jne L_0080f77c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5b5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00ef3200] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5a30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f77c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5a30 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eabe4c[];
extern "C" char g_012e731c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f790
extern "C" __declspec(naked) void asm_0080f790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4918e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e731c] }
	__asm { test al, 1 }
	__asm { jne L_0080f7fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e731c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { push dword ptr [g_00eabe4c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e71f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f7fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e71f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac124[];
extern "C" char g_012e744c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f810
extern "C" __declspec(naked) void asm_0080f810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4937e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e744c] }
	__asm { test al, 1 }
	__asm { jne L_0080f87c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e744c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eac124] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7320 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f87c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7320 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef3ee0[];
extern "C" char g_012f0eb4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f890
extern "C" __declspec(naked) void asm_0080f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2396e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f0eb4] }
	__asm { test al, 1 }
	__asm { jne L_0080f8fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0eb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ef3ee0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0d88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7690 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f8fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f0d88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac378[];
extern "C" char g_012e76ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f910
extern "C" __declspec(naked) void asm_0080f910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2398e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e76ac] }
	__asm { test al, 1 }
	__asm { jne L_0080f97c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e76ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eac378] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7580 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f97c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7580 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e97558[];
extern "C" char g_012e757c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080f990
extern "C" __declspec(naked) void asm_0080f990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd239ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e757c] }
	__asm { test al, 1 }
	__asm { jne L_0080f9fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e757c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e97558] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7450 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080f9fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e7450 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec40f8[];
extern "C" char g_012eac1c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fa10
extern "C" __declspec(naked) void asm_0080fa10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd239ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eac1c] }
	__asm { test al, 1 }
	__asm { jne L_0080fa7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eac1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00ec40f8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eaaf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fa7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12eaaf0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74090[];
extern "C" char g_012e5c8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fa90
extern "C" __declspec(naked) void asm_0080fa90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd239ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5c8c] }
	__asm { test al, 1 }
	__asm { jne L_0080fafc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5c8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00e74090] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5b60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fafc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e5b60 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec6f8c[];
extern "C" char g_012f1704[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fb10
extern "C" __declspec(naked) void asm_0080fb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23a0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f1704] }
	__asm { test al, 1 }
	__asm { jne L_0080fb7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1704], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec6f8c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f15d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fb7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12f15d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e93870[];
extern "C" char g_012ed80c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fb90
extern "C" __declspec(naked) void asm_0080fb90()
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
	__asm { test al, 1 }
	__asm { jne L_0080fbfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed80c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e93870] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed6e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fbfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed6e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e93868[];
extern "C" char g_012ed6dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fc10
extern "C" __declspec(naked) void asm_0080fc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23a4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ed6dc] }
	__asm { test al, 1 }
	__asm { jne L_0080fc7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed6dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e93868] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed5b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7700 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fc7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ed5b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3f24[];
extern "C" char g_012e89ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fc90
extern "C" __declspec(naked) void asm_0080fc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23a6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e89ac] }
	__asm { test al, 1 }
	__asm { jne L_0080fcfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e89ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec3f24] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8880 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fcfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8880 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7718c[];
extern "C" char g_012ec9cc[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fd10
extern "C" __declspec(naked) void asm_0080fd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23a8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ec9cc] }
	__asm { test al, 1 }
	__asm { jne L_0080fd7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec9cc], eax }
	__asm { push 1 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e7718c] }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec8a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fd7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ec8a0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb14fc[];
extern "C" char g_012e97ec[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fd90
extern "C" __declspec(naked) void asm_0080fd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23aae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e97ec] }
	__asm { test al, 1 }
	__asm { jne L_0080fdfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e97ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eb14fc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e96c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fdfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e96c0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3798[];
extern "C" char g_012e790c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fe10
extern "C" __declspec(naked) void asm_0080fe10()
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
	__asm { test al, 1 }
	__asm { jne L_0080fe7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e790c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec3798] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e77e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fe7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e77e0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac674[];
extern "C" char g_012e77dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080fe90
extern "C" __declspec(naked) void asm_0080fe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4961e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e77dc] }
	__asm { test al, 1 }
	__asm { jne L_0080fefc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e77dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00eac674] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e76b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080fefc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e76b0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eaf290[];
extern "C" char g_012e8e6c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ff10
extern "C" __declspec(naked) void asm_0080ff10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e8e6c] }
	__asm { test al, 1 }
	__asm { jne L_0080ff7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8e6c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { push dword ptr [g_00eaf290] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8d40 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0080ff7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e8d40 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
