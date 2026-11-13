// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_013007a8[];
extern "C" char g_013007c4[];
extern "C" char g_013007d0[];
extern "C" char g_013007d4[];
extern "C" void fn_00825140();
extern "C" void fn_0093ffe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc420
extern "C" __declspec(naked) void asm_00dbc420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3789a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13007a8 }
	__asm { push 1 }
	__asm { push 0xe83714 }
	__asm { call fn_0093ffe0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013007a8], 0xe8370c }
	__asm { mov dword ptr [g_013007d0], 0x9446a0 }
	__asm { mov dword ptr [g_013007d4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf47d0 }
	__asm { mov dword ptr [g_013007c4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300aa8[];
extern "C" char g_01300ac4[];
extern "C" char g_01300ad0[];
extern "C" char g_01300ad4[];
extern "C" void fn_00825140();
extern "C" void fn_0095b840();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc740
extern "C" __declspec(naked) void asm_00dbc740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39a8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1300aa8 }
	__asm { push 0 }
	__asm { push 0xe84f94 }
	__asm { call fn_0095b840 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01300aa8], 0xe84f8c }
	__asm { mov dword ptr [g_01300ad0], 0x95d8a0 }
	__asm { mov dword ptr [g_01300ad4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf49f0 }
	__asm { mov dword ptr [g_01300ac4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00960e30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbc970
extern "C" __declspec(naked) void asm_00dbc970()
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
	__asm { mov dword ptr [eax], 0x96c1d0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [eax], 0x968a40 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe860b0 }
	__asm { mov ecx, 0x1301118 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00960e30 }
	__asm { push 0xdf4b50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301180[];
extern "C" char g_0130119c[];
extern "C" char g_013011a8[];
extern "C" char g_013011ac[];
extern "C" char g_013011b0[];
extern "C" void fn_007d5390();
extern "C" void fn_00964330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcaf0
extern "C" __declspec(naked) void asm_00dbcaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a63a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301180 }
	__asm { push 0 }
	__asm { push 0xe860ec }
	__asm { call fn_00964330 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301180], 0xe860e4 }
	__asm { mov dword ptr [g_013011a8], 0x968d80 }
	__asm { mov dword ptr [g_013011ac], 0 }
	__asm { mov dword ptr [g_013011b0], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xdf4be0 }
	__asm { mov dword ptr [g_0130119c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301148[];
extern "C" char g_01301164[];
extern "C" char g_01301170[];
extern "C" char g_01301174[];
extern "C" char g_01301178[];
extern "C" void fn_007d54e0();
extern "C" void fn_00964330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcb80
extern "C" __declspec(naked) void asm_00dbcb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a65a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301148 }
	__asm { push 0 }
	__asm { push 0xe860cc }
	__asm { call fn_00964330 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301148], 0xe860c4 }
	__asm { mov dword ptr [g_01301170], 0x968da0 }
	__asm { mov dword ptr [g_01301174], 0 }
	__asm { mov dword ptr [g_01301178], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdf4c40 }
	__asm { mov dword ptr [g_01301164], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009611f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcc10
extern "C" __declspec(naked) void asm_00dbcc10()
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
	__asm { mov dword ptr [eax], 0x96c8f0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe55160 }
	__asm { mov dword ptr [eax], 0x968d00 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe85bd0 }
	__asm { mov ecx, 0x1300ddc }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009611f0 }
	__asm { push 0xdf4ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00960cc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcc90
extern "C" __declspec(naked) void asm_00dbcc90()
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
	__asm { mov dword ptr [eax], 0x96c380 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [eax], 0x968cb0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe85ba8 }
	__asm { mov ecx, 0x1300d84 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00960cc0 }
	__asm { push 0xdf4cc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009638a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcd10
extern "C" __declspec(naked) void asm_00dbcd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301038 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe85eec }
	__asm { push 0xe85f34 }
	__asm { push 0xe85f04 }
	__asm { push 0xe85fa8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x962d40 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009638a0 }
	__asm { push 0xdf4cf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009639e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcd70
extern "C" __declspec(naked) void asm_00dbcd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300f38 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe85eec }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe85e80 }
	__asm { push 0xe85f04 }
	__asm { push 0xe85f08 }
	__asm { mov dword ptr [eax], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9630a0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009639e0 }
	__asm { push 0xdf4d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00963b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcde0
extern "C" __declspec(naked) void asm_00dbcde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300fb8 }
	__asm { push 0 }
	__asm { push 0x14 }
	__asm { push 0xe85e74 }
	__asm { push 0xe85f34 }
	__asm { push 0xe6a304 }
	__asm { push 0xe85f4c }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9682c0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00963b90 }
	__asm { push 0xdf4d10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00963cd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbce40
extern "C" __declspec(naked) void asm_00dbce40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300e78 }
	__asm { push 0 }
	__asm { push 0x14 }
	__asm { push 0xe85e74 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe85e80 }
	__asm { push 0xe6a304 }
	__asm { push 0xe85e9c }
	__asm { mov dword ptr [eax], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x968640 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00963cd0 }
	__asm { push 0xdf4d20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00964020();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbceb0
extern "C" __declspec(naked) void asm_00dbceb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300ff8 }
	__asm { push 0 }
	__asm { push 0xe85f34 }
	__asm { push 0xe6a304 }
	__asm { push 0xe85f7c }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x969780 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00964020 }
	__asm { push 0xdf4d30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009640e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbcf10
extern "C" __declspec(naked) void asm_00dbcf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300ef8 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe85e80 }
	__asm { push 0xe6a304 }
	__asm { push 0xe85ed0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x969960 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009640e0 }
	__asm { push 0xdf4d40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00963e80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd030
extern "C" __declspec(naked) void asm_00dbd030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1300e40 }
	__asm { push 1 }
	__asm { push 0xe85e60 }
	__asm { push 0xe67188 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x965d50 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00963e80 }
	__asm { push 0xdf4de0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096d5e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd3b0
extern "C" __declspec(naked) void asm_00dbd3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x970690 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x67e040 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe8776c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe363d4 }
	__asm { mov ecx, 0x1301464 }
	__asm { call fn_0096d5e0 }
	__asm { push 0xdf50b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096d730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd410
extern "C" __declspec(naked) void asm_00dbd410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x970700 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x67e050 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe8776c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe8777c }
	__asm { mov ecx, 0x13014bc }
	__asm { call fn_0096d730 }
	__asm { push 0xdf50d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096d730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd470
extern "C" __declspec(naked) void asm_00dbd470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x970730 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x67e060 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe8776c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87770 }
	__asm { mov ecx, 0x1301490 }
	__asm { call fn_0096d730 }
	__asm { push 0xdf50f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096d880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd4d0
extern "C" __declspec(naked) void asm_00dbd4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x970860 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x68b230 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe877c0 }
	__asm { mov ecx, 0x13014e8 }
	__asm { call fn_0096d880 }
	__asm { push 0xdf5110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0096d5e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd530
extern "C" __declspec(naked) void asm_00dbd530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9708d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x96ffc0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87760 }
	__asm { mov ecx, 0x1301438 }
	__asm { call fn_0096d5e0 }
	__asm { push 0xdf5130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301368[];
extern "C" char g_01301384[];
extern "C" char g_01301390[];
extern "C" char g_01301394[];
extern "C" void fn_007d54e0();
extern "C" void fn_0096f670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd5d0
extern "C" __declspec(naked) void asm_00dbd5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ad4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301368 }
	__asm { push 0 }
	__asm { push 0xe876b0 }
	__asm { call fn_0096f670 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301368], 0xe876a8 }
	__asm { mov dword ptr [g_01301390], 0x96ff40 }
	__asm { mov dword ptr [g_01301394], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdf51b0 }
	__asm { mov dword ptr [g_01301384], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013013d0[];
extern "C" char g_013013ec[];
extern "C" char g_013013f8[];
extern "C" char g_013013fc[];
extern "C" void fn_007d54e0();
extern "C" void fn_0096f670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd690
extern "C" __declspec(naked) void asm_00dbd690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ad6a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1301368 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13013d0 }
	__asm { push 0 }
	__asm { push 0xe876f4 }
	__asm { call fn_0096f670 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013013d0], 0xe876a8 }
	__asm { mov dword ptr [g_013013f8], 0x96ff40 }
	__asm { mov dword ptr [g_013013fc], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdf5280 }
	__asm { mov dword ptr [g_013013ec], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013012d8[];
extern "C" char g_013012f4[];
extern "C" char g_01301300[];
extern "C" char g_01301304[];
extern "C" void fn_007d5470();
extern "C" void fn_0096f670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd7c0
extern "C" __declspec(naked) void asm_00dbd7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ad8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13012d8 }
	__asm { push 0 }
	__asm { push 0xe87664 }
	__asm { call fn_0096f670 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013012d8], 0xe8765c }
	__asm { mov dword ptr [g_01301300], 0x96ff80 }
	__asm { mov dword ptr [g_01301304], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xdf5370 }
	__asm { mov dword ptr [g_013012f4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301308[];
extern "C" char g_01301324[];
extern "C" char g_01301330[];
extern "C" char g_01301334[];
extern "C" void fn_007d5be0();
extern "C" void fn_0096f670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd840
extern "C" __declspec(naked) void asm_00dbd840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3adaa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301308 }
	__asm { push 0 }
	__asm { push 0xe87680 }
	__asm { call fn_0096f670 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301308], 0xe87678 }
	__asm { mov dword ptr [g_01301330], 0x96ff90 }
	__asm { mov dword ptr [g_01301334], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xdf53d0 }
	__asm { mov dword ptr [g_01301324], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301338[];
extern "C" char g_01301354[];
extern "C" char g_01301360[];
extern "C" char g_01301364[];
extern "C" void fn_007d5be0();
extern "C" void fn_0096f670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbd8c0
extern "C" __declspec(naked) void asm_00dbd8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3adca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301338 }
	__asm { push 0 }
	__asm { push 0xe87694 }
	__asm { call fn_0096f670 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301338], 0xe87678 }
	__asm { mov dword ptr [g_01301360], 0x96ffd0 }
	__asm { mov dword ptr [g_01301364], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xdf5430 }
	__asm { mov dword ptr [g_01301354], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009738b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbdc70
extern "C" __declspec(naked) void asm_00dbdc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301958 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe50278 }
	__asm { push 0xe62654 }
	__asm { push 0xe6271c }
	__asm { push 0xe62618 }
	__asm { push 0xe62730 }
	__asm { push 0x340 }
	__asm { call fn_009738b0 }
	__asm { push 0xdf57f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00973600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbdcc0
extern "C" __declspec(naked) void asm_00dbdcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13018a8 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe50278 }
	__asm { push 0xe62654 }
	__asm { push 0xe62660 }
	__asm { push 0xe62618 }
	__asm { push 0xe62668 }
	__asm { push 0x330 }
	__asm { call fn_00973600 }
	__asm { push 0xdf5850 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00973600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbdd10
extern "C" __declspec(naked) void asm_00dbdd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x130192c }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe50278 }
	__asm { push 0xe62654 }
	__asm { push 0xe4690c }
	__asm { push 0xe62618 }
	__asm { push 0xe626f0 }
	__asm { push 0x33c }
	__asm { call fn_00973600 }
	__asm { push 0xdf58b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009740b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbdd60
extern "C" __declspec(naked) void asm_00dbdd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13018d4 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe62694 }
	__asm { push 0xe626a4 }
	__asm { push 0xe626b4 }
	__asm { push 0x334 }
	__asm { call fn_009740b0 }
	__asm { push 0xdf5910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301728[];
extern "C" char g_01301744[];
extern "C" char g_01301750[];
extern "C" char g_01301754[];
extern "C" void fn_007e9300();
extern "C" void fn_00974340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbdff0
extern "C" __declspec(naked) void asm_00dbdff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b5ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301728 }
	__asm { push 5 }
	__asm { push 0xe87c0c }
	__asm { call fn_00974340 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301728], 0xe87c04 }
	__asm { mov dword ptr [g_01301750], 0x425500 }
	__asm { mov dword ptr [g_01301754], 0 }
	__asm { call fn_007e9300 }
	__asm { push 0xdf5c70 }
	__asm { mov dword ptr [g_01301744], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00970c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe1a0
extern "C" __declspec(naked) void asm_00dbe1a0()
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
	__asm { push 0x97ae70 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87bc4 }
	__asm { mov ecx, 0x1301678 }
	__asm { call fn_00970c80 }
	__asm { push 0xdf5df0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00970c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe200
extern "C" __declspec(naked) void asm_00dbe200()
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
	__asm { push 0x97ae80 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87bd4 }
	__asm { mov ecx, 0x13016a4 }
	__asm { call fn_00970c80 }
	__asm { push 0xdf5e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00970c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe260
extern "C" __declspec(naked) void asm_00dbe260()
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
	__asm { push 0x97afb0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87bb4 }
	__asm { mov ecx, 0x130164c }
	__asm { call fn_00970c80 }
	__asm { push 0xdf5e30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00970dd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe2c0
extern "C" __declspec(naked) void asm_00dbe2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x97ea90 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x546460 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87e5c }
	__asm { mov ecx, 0x1301ae4 }
	__asm { call fn_00970dd0 }
	__asm { push 0xdf5e50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00970a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe320
extern "C" __declspec(naked) void asm_00dbe320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x97ead0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x97ae90 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe87b84 }
	__asm { mov ecx, 0x1301b10 }
	__asm { call fn_00970a70 }
	__asm { push 0xdf5e70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00980480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe380
extern "C" __declspec(naked) void asm_00dbe380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x981240 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8a8730 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe88d54 }
	__asm { mov ecx, 0x1301c98 }
	__asm { call fn_00980480 }
	__asm { push 0xdf5ea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00980480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe3e0
extern "C" __declspec(naked) void asm_00dbe3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x981280 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x981140 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe88d48 }
	__asm { mov ecx, 0x1301c6c }
	__asm { call fn_00980480 }
	__asm { push 0xdf5ec0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009805d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe440
extern "C" __declspec(naked) void asm_00dbe440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9812c0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9811c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe88d5c }
	__asm { mov ecx, 0x1301cf0 }
	__asm { call fn_009805d0 }
	__asm { push 0xdf5ee0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009805d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe4a0
extern "C" __declspec(naked) void asm_00dbe4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x981300 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9811d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe88d6c }
	__asm { mov ecx, 0x1301d1c }
	__asm { call fn_009805d0 }
	__asm { push 0xdf5f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00980330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe500
extern "C" __declspec(naked) void asm_00dbe500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x981340 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x517420 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1003768 }
	__asm { mov ecx, 0x1301c40 }
	__asm { call fn_00980330 }
	__asm { push 0xdf5f20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00980480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbe560
extern "C" __declspec(naked) void asm_00dbe560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9813d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x629290 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624f4 }
	__asm { mov ecx, 0x1301cc4 }
	__asm { call fn_00980480 }
	__asm { push 0xdf5f40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00987a80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbef70
extern "C" __declspec(naked) void asm_00dbef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x992f30 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x98e050 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe55160 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe8d260 }
	__asm { mov ecx, 0x1302078 }
	__asm { call fn_00987a80 }
	__asm { push 0xdf67c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00987540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf080
extern "C" __declspec(naked) void asm_00dbf080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x993170 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x640b20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe8d188 }
	__asm { mov ecx, 0x1301fc8 }
	__asm { call fn_00987540 }
	__asm { push 0xdf6820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009877e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf0e0
extern "C" __declspec(naked) void asm_00dbf0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9934b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x98e490 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe8d1cc }
	__asm { mov ecx, 0x1301ff4 }
	__asm { call fn_009877e0 }
	__asm { push 0xdf6840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013021b8[];
extern "C" char g_013021d4[];
extern "C" char g_013021e0[];
extern "C" char g_013021e4[];
extern "C" void fn_00825140();
extern "C" void fn_0098a230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf1f0
extern "C" __declspec(naked) void asm_00dbf1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cbea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13021b8 }
	__asm { push 0 }
	__asm { push 0x101d14c }
	__asm { call fn_0098a230 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013021b8], 0xe8d2a0 }
	__asm { mov dword ptr [g_013021e0], 0x991a90 }
	__asm { mov dword ptr [g_013021e4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf68a0 }
	__asm { mov dword ptr [g_013021d4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302158[];
extern "C" char g_01302174[];
extern "C" char g_01302180[];
extern "C" char g_01302184[];
extern "C" void fn_00825140();
extern "C" void fn_0098a230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf270
extern "C" __declspec(naked) void asm_00dbf270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cc0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1302158 }
	__asm { push 0 }
	__asm { push 0x101d13c }
	__asm { call fn_0098a230 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01302158], 0xe8d2a0 }
	__asm { mov dword ptr [g_01302180], 0x991bc0 }
	__asm { mov dword ptr [g_01302184], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf6900 }
	__asm { mov dword ptr [g_01302174], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302188[];
extern "C" char g_013021a4[];
extern "C" char g_013021b0[];
extern "C" char g_013021b4[];
extern "C" void fn_00825140();
extern "C" void fn_0098a230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf2f0
extern "C" __declspec(naked) void asm_00dbf2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cc2a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1302158 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1302188 }
	__asm { push 0 }
	__asm { push 0xe8d2a8 }
	__asm { call fn_0098a230 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01302188], 0xe8d2a0 }
	__asm { mov dword ptr [g_013021b0], 0x991bc0 }
	__asm { mov dword ptr [g_013021b4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf6960 }
	__asm { mov dword ptr [g_013021a4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302218[];
extern "C" char g_01302234[];
extern "C" char g_01302240[];
extern "C" char g_01302244[];
extern "C" void fn_00825140();
extern "C" void fn_0098a230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf380
extern "C" __declspec(naked) void asm_00dbf380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cc4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1302218 }
	__asm { push 0 }
	__asm { push 0x100bf50 }
	__asm { call fn_0098a230 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01302218], 0xe8d2a0 }
	__asm { mov dword ptr [g_01302240], 0x993b00 }
	__asm { mov dword ptr [g_01302244], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf69c0 }
	__asm { mov dword ptr [g_01302234], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303578[];
extern "C" char g_01303594[];
extern "C" char g_013035a0[];
extern "C" char g_013035a4[];
extern "C" char g_013035a8[];
extern "C" void fn_00825140();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf5d0
extern "C" __declspec(naked) void asm_00dbf5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3daca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303348 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303578 }
	__asm { push 0 }
	__asm { push 0xe67194 }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303578], 0xe9212c }
	__asm { mov dword ptr [g_013035a0], 0x99fe10 }
	__asm { mov dword ptr [g_013035a4], 0 }
	__asm { mov dword ptr [g_013035a8], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf6b50 }
	__asm { mov dword ptr [g_01303594], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099f400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf660
extern "C" __declspec(naked) void asm_00dbf660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303498 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13035b0 }
	__asm { push 0 }
	__asm { push 0xe921e0 }
	__asm { push 0xe921ec }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a5440 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0099f400 }
	__asm { push 0xdf6bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303380[];
extern "C" char g_0130339c[];
extern "C" char g_013033a8[];
extern "C" char g_013033ac[];
extern "C" char g_013033b0[];
extern "C" void fn_00825140();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf7c0
extern "C" __declspec(naked) void asm_00dbf7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3db0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303380 }
	__asm { push 0 }
	__asm { push 0xe671a0 }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303380], 0xe9212c }
	__asm { mov dword ptr [g_013033a8], 0x9a11a0 }
	__asm { mov dword ptr [g_013033ac], 0 }
	__asm { mov dword ptr [g_013033b0], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf6ca0 }
	__asm { mov dword ptr [g_0130339c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303540[];
extern "C" char g_0130355c[];
extern "C" char g_01303568[];
extern "C" char g_0130356c[];
extern "C" char g_01303570[];
extern "C" void fn_00825140();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf850
extern "C" __declspec(naked) void asm_00dbf850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3db2a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303380 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303540 }
	__asm { push 0 }
	__asm { push 0xe671ac }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303540], 0xe9212c }
	__asm { mov dword ptr [g_01303568], 0x9a11a0 }
	__asm { mov dword ptr [g_0130356c], 0 }
	__asm { mov dword ptr [g_01303570], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf6d00 }
	__asm { mov dword ptr [g_0130355c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099edd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf8e0
extern "C" __declspec(naked) void asm_00dbf8e0()
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
	__asm { mov dword ptr [eax], 0x9a1ee0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [eax], 0x9a0e20 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe92110 }
	__asm { mov ecx, 0x1303314 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0099edd0 }
	__asm { push 0xdf6d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013033b8[];
extern "C" char g_013033d4[];
extern "C" char g_013033e0[];
extern "C" char g_013033e4[];
extern "C" char g_013033e8[];
extern "C" void fn_007d5be0();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf960
extern "C" __declspec(naked) void asm_00dbf960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3db4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13033b8 }
	__asm { push 0 }
	__asm { push 0xe92140 }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013033b8], 0xe92138 }
	__asm { mov dword ptr [g_013033e0], 0x99ff60 }
	__asm { mov dword ptr [g_013033e4], 0 }
	__asm { mov dword ptr [g_013033e8], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xdf6d80 }
	__asm { mov dword ptr [g_013033d4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303508[];
extern "C" char g_01303524[];
extern "C" char g_01303530[];
extern "C" char g_01303534[];
extern "C" char g_01303538[];
extern "C" void fn_0088bd20();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbf9f0
extern "C" __declspec(naked) void asm_00dbf9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3db6a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303428 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303508 }
	__asm { push 0 }
	__asm { push 0xe921d0 }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303508], 0xe92174 }
	__asm { mov dword ptr [g_01303530], 0x99fe30 }
	__asm { mov dword ptr [g_01303534], 0 }
	__asm { mov dword ptr [g_01303538], 0 }
	__asm { call fn_0088bd20 }
	__asm { push 0xdf6de0 }
	__asm { mov dword ptr [g_01303524], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013034d0[];
extern "C" char g_013034ec[];
extern "C" char g_013034f8[];
extern "C" char g_013034fc[];
extern "C" char g_01303500[];
extern "C" void fn_007d5be0();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfa80
extern "C" __declspec(naked) void asm_00dbfa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3db8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x13033b8 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x13034d0 }
	__asm { push 0 }
	__asm { push 0xe921c0 }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_013034d0], 0xe92138 }
	__asm { mov dword ptr [g_013034f8], 0x99ff60 }
	__asm { mov dword ptr [g_013034fc], 0 }
	__asm { mov dword ptr [g_01303500], 0 }
	__asm { call fn_007d5be0 }
	__asm { push 0xdf6e40 }
	__asm { mov dword ptr [g_013034ec], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303428[];
extern "C" char g_01303444[];
extern "C" char g_01303450[];
extern "C" char g_01303454[];
extern "C" char g_01303458[];
extern "C" void fn_0088bd20();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfb10
extern "C" __declspec(naked) void asm_00dbfb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dbaa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303428 }
	__asm { push 0 }
	__asm { push 0xe9217c }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303428], 0xe92174 }
	__asm { mov dword ptr [g_01303450], 0x9a0b10 }
	__asm { mov dword ptr [g_01303454], 0 }
	__asm { mov dword ptr [g_01303458], 0 }
	__asm { call fn_0088bd20 }
	__asm { push 0xdf6ea0 }
	__asm { mov dword ptr [g_01303444], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099f400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfba0
extern "C" __declspec(naked) void asm_00dbfba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303498 }
	__asm { push 0 }
	__asm { push 0xe3af14 }
	__asm { push 0xe921b8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a5440 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0099f400 }
	__asm { push 0xdf6f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099f400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfbf0
extern "C" __declspec(naked) void asm_00dbfbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303498 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13035e8 }
	__asm { push 0 }
	__asm { push 0xe921e0 }
	__asm { push 0xe921f4 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a5440 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0099f400 }
	__asm { push 0xdf6f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303658[];
extern "C" char g_01303674[];
extern "C" char g_01303680[];
extern "C" char g_01303684[];
extern "C" char g_01303688[];
extern "C" void fn_00825140();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfc50
extern "C" __declspec(naked) void asm_00dbfc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dbca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303460 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303658 }
	__asm { push 0 }
	__asm { push 0xe92214 }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303658], 0xe9212c }
	__asm { mov dword ptr [g_01303680], 0x9a1550 }
	__asm { mov dword ptr [g_01303684], 0 }
	__asm { mov dword ptr [g_01303688], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf6fe0 }
	__asm { mov dword ptr [g_01303674], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303620[];
extern "C" char g_0130363c[];
extern "C" char g_01303648[];
extern "C" char g_0130364c[];
extern "C" char g_01303650[];
extern "C" void fn_00825140();
extern "C" void fn_0099f4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfce0
extern "C" __declspec(naked) void asm_00dbfce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dbea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303460 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303620 }
	__asm { push 0 }
	__asm { push 0xe921fc }
	__asm { call fn_0099f4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303620], 0xe9212c }
	__asm { mov dword ptr [g_01303648], 0x9a1a30 }
	__asm { mov dword ptr [g_0130364c], 0 }
	__asm { mov dword ptr [g_01303650], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf7040 }
	__asm { mov dword ptr [g_0130363c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099f330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfd70
extern "C" __declspec(naked) void asm_00dbfd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303460 }
	__asm { push 0 }
	__asm { push 0xe47ff0 }
	__asm { push 0xe921a0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9a1c60 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0099f330 }
	__asm { push 0xdf70a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a3240();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbff30
extern "C" __declspec(naked) void asm_00dbff30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9a3880 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x640960 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a8e4 }
	__asm { mov ecx, 0x1303794 }
	__asm { call fn_009a3240 }
	__asm { push 0xdf71f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a3240();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbff90
extern "C" __declspec(naked) void asm_00dbff90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9a38f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x463e50 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a8dc }
	__asm { mov ecx, 0x130373c }
	__asm { call fn_009a3240 }
	__asm { push 0xdf7210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a3240();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbfff0
extern "C" __declspec(naked) void asm_00dbfff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9a3990 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x640b20 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe92a28 }
	__asm { mov ecx, 0x1303768 }
	__asm { call fn_009a3240 }
	__asm { push 0xdf7230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303918[];
extern "C" char g_01303948[];
extern "C" char g_0130394c[];
extern "C" void fn_009a7b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc02d0
extern "C" __declspec(naked) void asm_00dc02d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1303918 }
	__asm { push 0 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xe83694 }
	__asm { push 0xe93048 }
	__asm { push 0x88 }
	__asm { call fn_009a7b60 }
	__asm { push 0xdf7570 }
	__asm { mov dword ptr [g_01303918], 0xe9302c }
	__asm { mov dword ptr [g_01303948], 0 }
	__asm { mov dword ptr [g_0130394c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013038e0[];
extern "C" char g_01303910[];
extern "C" char g_01303914[];
extern "C" void fn_009a7e90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0330
extern "C" __declspec(naked) void asm_00dc0330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13038e0 }
	__asm { push 0 }
	__asm { push 0x1018974 }
	__asm { push 0xe83694 }
	__asm { push 0xe92ffc }
	__asm { push 0x80 }
	__asm { call fn_009a7e90 }
	__asm { push 0xdf75d0 }
	__asm { mov dword ptr [g_013038e0], 0xe92fe0 }
	__asm { mov dword ptr [g_01303910], 0 }
	__asm { mov dword ptr [g_01303914], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303838[];
extern "C" char g_01303868[];
extern "C" char g_0130386c[];
extern "C" void fn_009a7fe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0390
extern "C" __declspec(naked) void asm_00dc0390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1303838 }
	__asm { push 0 }
	__asm { push 0xe74348 }
	__asm { push 0xe83694 }
	__asm { push 0xe92f2c }
	__asm { push 0x68 }
	__asm { call fn_009a7fe0 }
	__asm { push 0xdf7630 }
	__asm { mov dword ptr [g_01303838], 0xe92f10 }
	__asm { mov dword ptr [g_01303868], 0 }
	__asm { mov dword ptr [g_0130386c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303d00[];
extern "C" char g_01303d1c[];
extern "C" char g_01303d28[];
extern "C" char g_01303d2c[];
extern "C" void fn_00825060();
extern "C" void fn_009a83c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc05d0
extern "C" __declspec(naked) void asm_00dc05d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e6da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303c98 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303d00 }
	__asm { push 0 }
	__asm { push 0xe93288 }
	__asm { call fn_009a83c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303d00], 0xe9325c }
	__asm { mov dword ptr [g_01303d28], 0x9aea20 }
	__asm { mov dword ptr [g_01303d2c], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdf7900 }
	__asm { mov dword ptr [g_01303d1c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303c98[];
extern "C" char g_01303cb4[];
extern "C" char g_01303cc0[];
extern "C" char g_01303cc4[];
extern "C" void fn_00825060();
extern "C" void fn_009a83c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0660
extern "C" __declspec(naked) void asm_00dc0660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e6fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1303c98 }
	__asm { push 0 }
	__asm { push 0xe93264 }
	__asm { call fn_009a83c0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01303c98], 0xe9325c }
	__asm { mov dword ptr [g_01303cc0], 0x9aea20 }
	__asm { mov dword ptr [g_01303cc4], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdf7960 }
	__asm { mov dword ptr [g_01303cb4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc06e0
extern "C" __declspec(naked) void asm_00dc06e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303c60 }
	__asm { push 0 }
	__asm { push 0xe93224 }
	__asm { push 0xe9322c }
	__asm { push 0xe93248 }
	__asm { push 0 }
	__asm { push 0x9aed80 }
	__asm { call fn_009a7920 }
	__asm { push 0xdf79c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0730
extern "C" __declspec(naked) void asm_00dc0730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303c28 }
	__asm { push 0 }
	__asm { push 0xe93224 }
	__asm { push 0xe9322c }
	__asm { push 0xe93238 }
	__asm { push 0 }
	__asm { push 0x9aef20 }
	__asm { call fn_009a7920 }
	__asm { push 0xdf7a80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a7730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0900
extern "C" __declspec(naked) void asm_00dc0900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303d68 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 0xe932bc }
	__asm { push 0xe2f344 }
	__asm { push 0xe932c4 }
	__asm { push 0 }
	__asm { push 0x410790 }
	__asm { call fn_009a7730 }
	__asm { push 0xdf7e40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b3950();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0ce0
extern "C" __declspec(naked) void asm_00dc0ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1303f50 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303f88 }
	__asm { push 0 }
	__asm { push 0xe93d78 }
	__asm { push 0xe93d80 }
	__asm { push 0xe93d94 }
	__asm { push 0 }
	__asm { push 0x9b4f30 }
	__asm { call fn_009b3950 }
	__asm { push 0xdf8650 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b3950();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0db0
extern "C" __declspec(naked) void asm_00dc0db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1303f50 }
	__asm { push 0 }
	__asm { push 0xe93d78 }
	__asm { push 0xe93d80 }
	__asm { push 0xe93d88 }
	__asm { push 0 }
	__asm { push 0x9b4f30 }
	__asm { call fn_009b3950 }
	__asm { push 0xdf87f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304260[];
extern "C" char g_0130427c[];
extern "C" char g_01304288[];
extern "C" char g_0130428c[];
extern "C" void fn_007d5d30();
extern "C" void fn_009b7f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0e40
extern "C" __declspec(naked) void asm_00dc0e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f4ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1304260 }
	__asm { push 5 }
	__asm { push 0xe94634 }
	__asm { call fn_009b7f10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01304260], 0xe9462c }
	__asm { mov dword ptr [g_01304288], 0x9b8420 }
	__asm { mov dword ptr [g_0130428c], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xdf8910 }
	__asm { mov dword ptr [g_0130427c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304230[];
extern "C" char g_0130424c[];
extern "C" char g_01304258[];
extern "C" char g_0130425c[];
extern "C" void fn_00825140();
extern "C" void fn_009b7f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc0ec0
extern "C" __declspec(naked) void asm_00dc0ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f4da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1304230 }
	__asm { push 0 }
	__asm { push 0xe945cc }
	__asm { call fn_009b7f10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01304230], 0xe945c4 }
	__asm { mov dword ptr [g_01304258], 0x9b8300 }
	__asm { mov dword ptr [g_0130425c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdf8970 }
	__asm { mov dword ptr [g_0130424c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0870();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2310
extern "C" __declspec(naked) void asm_00dc2310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1305520 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305558 }
	__asm { push 0 }
	__asm { push 0xe9623c }
	__asm { push 0xe96250 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9de440 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0870 }
	__asm { push 0xdf9e20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d07a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2370
extern "C" __declspec(naked) void asm_00dc2370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1305c10 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305c48 }
	__asm { push 0 }
	__asm { push 0x1011f2c }
	__asm { push 0xe96618 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d9830 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d07a0 }
	__asm { push 0xdf9e90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d07a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc23d0
extern "C" __declspec(naked) void asm_00dc23d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305c10 }
	__asm { push 0 }
	__asm { push 0x1011f2c }
	__asm { push 0xe96608 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d9830 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d07a0 }
	__asm { push 0xdf9f60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305bd0[];
extern "C" char g_01305c04[];
extern "C" char g_01305c08[];
extern "C" void fn_009d1790();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2420
extern "C" __declspec(naked) void asm_00dc2420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1305bd0 }
	__asm { push 6 }
	__asm { push 0xe96478 }
	__asm { push 0xe96584 }
	__asm { push 0 }
	__asm { push 0x220 }
	__asm { call fn_009d1790 }
	__asm { push 0xdfa030 }
	__asm { mov dword ptr [g_01305bd0], 0xe96568 }
	__asm { mov dword ptr [g_01305c04], 0 }
	__asm { mov dword ptr [g_01305c08], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305608[];
extern "C" void fn_009d1b50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2540
extern "C" __declspec(naked) void asm_00dc2540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305608 }
	__asm { push 0 }
	__asm { push 0xe962ac }
	__asm { push 0 }
	__asm { push 0x228 }
	__asm { call fn_009d1b50 }
	__asm { push 0xdfa210 }
	__asm { mov dword ptr [g_01305608], 0xe96290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d1860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc27d0
extern "C" __declspec(naked) void asm_00dc27d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305848 }
	__asm { push 0 }
	__asm { push 0xe96398 }
	__asm { push 0xe9639c }
	__asm { push 0xe963a0 }
	__asm { push 0 }
	__asm { push 0x258 }
	__asm { call fn_009d1860 }
	__asm { push 0xdfa5d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0e60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2920
extern "C" __declspec(naked) void asm_00dc2920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13059c0 }
	__asm { push 0 }
	__asm { push 0xe73c50 }
	__asm { push 0xe96438 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d4150 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0e60 }
	__asm { push 0xdfa7b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2970
extern "C" __declspec(naked) void asm_00dc2970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305918 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe73c50 }
	__asm { push 0xe96404 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d4270 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0f30 }
	__asm { push 0xdfa860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0c60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc29d0
extern "C" __declspec(naked) void asm_00dc29d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13058b0 }
	__asm { push 0 }
	__asm { push 0x12 }
	__asm { push 0xe50278 }
	__asm { push 0xe963d4 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d51e0 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0c60 }
	__asm { push 0xdfa8d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305878[];
extern "C" char g_01305894[];
extern "C" char g_013058a0[];
extern "C" char g_013058a4[];
extern "C" char g_013058a8[];
extern "C" void fn_007e95a0();
extern "C" void fn_009d1cd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2a30
extern "C" __declspec(naked) void asm_00dc2a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd411fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1305878 }
	__asm { push 0 }
	__asm { push 0xe963bc }
	__asm { call fn_009d1cd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01305878], 0xe963b4 }
	__asm { mov dword ptr [g_013058a0], 0x9d8480 }
	__asm { mov dword ptr [g_013058a4], 0xfffffed8 }
	__asm { mov dword ptr [g_013058a8], 0 }
	__asm { call fn_007e95a0 }
	__asm { push 0xdfa940 }
	__asm { mov dword ptr [g_01305894], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0e60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2ac0
extern "C" __declspec(naked) void asm_00dc2ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305a30 }
	__asm { push 0 }
	__asm { push 0xe73c50 }
	__asm { push 0xe9645c }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d9150 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0e60 }
	__asm { push 0xdfa9a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2b10
extern "C" __declspec(naked) void asm_00dc2b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305988 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe73c50 }
	__asm { push 0xe96420 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d91e0 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0f30 }
	__asm { push 0xdfaa50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2b70
extern "C" __declspec(naked) void asm_00dc2b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13055c8 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push 0xe67470 }
	__asm { push 0xe921e0 }
	__asm { push 0xe921b8 }
	__asm { mov dword ptr [eax], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9da070 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0a10 }
	__asm { push 0xdfaac0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0e60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2be0
extern "C" __declspec(naked) void asm_00dc2be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13059f8 }
	__asm { push 0 }
	__asm { push 0xe73c50 }
	__asm { push 0xe96448 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9dc1c0 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0e60 }
	__asm { push 0xdfaad0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2c30
extern "C" __declspec(naked) void asm_00dc2c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305950 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe73c50 }
	__asm { push 0xe96410 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9dc250 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0f30 }
	__asm { push 0xdfab80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0d90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2c90
extern "C" __declspec(naked) void asm_00dc2c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305590 }
	__asm { push 5 }
	__asm { push 0x1024d30 }
	__asm { push 0xe96268 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9dd4a0 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0d90 }
	__asm { push 0xdfabf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0870();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2ce0
extern "C" __declspec(naked) void asm_00dc2ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305520 }
	__asm { push 0 }
	__asm { push 0xe9623c }
	__asm { push 0xe96244 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9de440 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0870 }
	__asm { push 0xdfac60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0940();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2d30
extern "C" __declspec(naked) void asm_00dc2d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305a68 }
	__asm { push 0 }
	__asm { push 0xe96478 }
	__asm { push 0xe96480 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d7110 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0940 }
	__asm { push 0xdfacd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ad8[];
extern "C" char g_01305af4[];
extern "C" char g_01305b00[];
extern "C" char g_01305b04[];
extern "C" char g_01305b08[];
extern "C" void fn_00825060();
extern "C" void fn_009d1cd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2d80
extern "C" __declspec(naked) void asm_00dc2d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4121a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1305ad8 }
	__asm { push 0 }
	__asm { push 0xe964b4 }
	__asm { call fn_009d1cd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01305ad8], 0xe964ac }
	__asm { mov dword ptr [g_01305b00], 0x9d8da0 }
	__asm { mov dword ptr [g_01305b04], 0xfffffed8 }
	__asm { mov dword ptr [g_01305b08], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xdfada0 }
	__asm { mov dword ptr [g_01305af4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305aa0[];
extern "C" char g_01305abc[];
extern "C" char g_01305ac8[];
extern "C" char g_01305acc[];
extern "C" char g_01305ad0[];
extern "C" void fn_00825140();
extern "C" void fn_009d1cd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2e10
extern "C" __declspec(naked) void asm_00dc2e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4123a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1305aa0 }
	__asm { push 0 }
	__asm { push 0xe96498 }
	__asm { call fn_009d1cd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01305aa0], 0xe96490 }
	__asm { mov dword ptr [g_01305ac8], 0x9de800 }
	__asm { mov dword ptr [g_01305acc], 0xfffffed8 }
	__asm { mov dword ptr [g_01305ad0], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfae00 }
	__asm { mov dword ptr [g_01305abc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305040[];
extern "C" char g_01305044[];
extern "C" char g_01305048[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc2ea0
extern "C" __declspec(naked) void asm_00dc2ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0xbf000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x130501c }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01305040], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01305044], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfae60 }
	__asm { mov dword ptr [g_01305048], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304fb0[];
extern "C" char g_01304fb4[];
extern "C" char g_01304fb8[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3100
extern "C" __declspec(naked) void asm_00dc3100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 3 }
	__asm { mov dword ptr [ebp - 0xc], 0x3f000000 }
	__asm { mov dword ptr [ebp - 8], 0x3f000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304f8c }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01304fb0], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01304fb4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfaea0 }
	__asm { mov dword ptr [g_01304fb8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304f20[];
extern "C" char g_01304f24[];
extern "C" char g_01304f28[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3160
extern "C" __declspec(naked) void asm_00dc3160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 3 }
	__asm { mov dword ptr [ebp - 0xc], 0xbf800000 }
	__asm { mov dword ptr [ebp - 8], 0xbf800000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304efc }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01304f20], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01304f24], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfaeb0 }
	__asm { mov dword ptr [g_01304f28], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305010[];
extern "C" char g_01305014[];
extern "C" char g_01305018[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc31c0
extern "C" __declspec(naked) void asm_00dc31c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 3 }
	__asm { mov dword ptr [ebp - 0xc], 0xbf000000 }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304fec }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01305010], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01305014], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfaec0 }
	__asm { mov dword ptr [g_01305018], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304ec0[];
extern "C" char g_01304ec4[];
extern "C" char g_01304ec8[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3220
extern "C" __declspec(naked) void asm_00dc3220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 3 }
	__asm { mov dword ptr [ebp - 0xc], 0xbf800000 }
	__asm { mov dword ptr [ebp - 8], 0x3f000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304e9c }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01304ec0], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01304ec4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfaed0 }
	__asm { mov dword ptr [g_01304ec8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d0b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3280
extern "C" __declspec(naked) void asm_00dc3280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13051e8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe9609c }
	__asm { push 0xe960b0 }
	__asm { push 0xe960c0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x9d9c90 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009d0b40 }
	__asm { push 0xdfaee0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009cd9d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc37a0
extern "C" __declspec(naked) void asm_00dc37a0()
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
	__asm { mov dword ptr [eax], 0x9dd9b0 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf13380 }
	__asm { mov dword ptr [eax], 0x9d8820 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { push 0xe96060 }
	__asm { mov ecx, 0x1305138 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009cd9d0 }
	__asm { push 0xdfb0b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009cd4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3e00
extern "C" __declspec(naked) void asm_00dc3e00()
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
	__asm { mov dword ptr [eax], 0x9dda90 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [eax], 0x9d8850 }
	__asm { mov dword ptr [eax + 4], 0xfffffed8 }
	__asm { push 0xe965ec }
	__asm { mov ecx, 0x13054ec }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_009cd4c0 }
	__asm { push 0xdfb270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304f80[];
extern "C" char g_01304f84[];
extern "C" char g_01304f88[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3e80
extern "C" __declspec(naked) void asm_00dc3e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0xc], 0xbf000000 }
	__asm { mov dword ptr [ebp - 8], 0x3f000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304f5c }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01304f80], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01304f84], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfb290 }
	__asm { mov dword ptr [g_01304f88], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304ef0[];
extern "C" char g_01304ef4[];
extern "C" char g_01304ef8[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3ee0
extern "C" __declspec(naked) void asm_00dc3ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0xc], 0x3f800000 }
	__asm { mov dword ptr [ebp - 8], 0xbf800000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304ecc }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01304ef0], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01304ef4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfb2a0 }
	__asm { mov dword ptr [g_01304ef8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304fe0[];
extern "C" char g_01304fe4[];
extern "C" char g_01304fe8[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a109c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc3f40
extern "C" __declspec(naked) void asm_00dc3f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0xc], 0x3f000000 }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a109c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304fbc }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_01304fe0], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [g_01304fe4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xdfb2b0 }
	__asm { mov dword ptr [g_01304fe8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009df2e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc4040
extern "C" __declspec(naked) void asm_00dc4040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9df9d0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9df950 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe978ac }
	__asm { mov ecx, 0x1305d4c }
	__asm { call fn_009df2e0 }
	__asm { push 0xdfb2f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009df040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc40a0
extern "C" __declspec(naked) void asm_00dc40a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x9dfa10 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x9df9c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe97864 }
	__asm { mov ecx, 0x1305d20 }
	__asm { call fn_009df040 }
	__asm { push 0xdfb310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e4740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc4220
extern "C" __declspec(naked) void asm_00dc4220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305e68 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x9ef990 }
	__asm { push 0xe97c6c }
	__asm { push 0x88 }
	__asm { push 0xe97cd4 }
	__asm { call fn_009e4740 }
	__asm { push 0xdfb410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e4830();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc4270
extern "C" __declspec(naked) void asm_00dc4270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305e30 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x9efe80 }
	__asm { push 0xe97c6c }
	__asm { push 0xe73878 }
	__asm { push 0x68 }
	__asm { push 0xe97cb4 }
	__asm { call fn_009e4830 }
	__asm { push 0xdfb470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306068[];
extern "C" char g_0130609c[];
extern "C" char g_013060a0[];
extern "C" void fn_009e4c40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc42c0
extern "C" __declspec(naked) void asm_00dc42c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1306068 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0xe97edc }
	__asm { push 0 }
	__asm { push 0x9ec930 }
	__asm { call fn_009e4c40 }
	__asm { push 0xdfb4d0 }
	__asm { mov dword ptr [g_01306068], 0xe97ec0 }
	__asm { mov dword ptr [g_0130609c], 0 }
	__asm { mov dword ptr [g_013060a0], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305f48[];
extern "C" char g_01305f78[];
extern "C" char g_01305f7c[];
extern "C" void fn_009e4e60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc43e0
extern "C" __declspec(naked) void asm_00dc43e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1305f48 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0x1016e4c }
	__asm { push 0xe97dec }
	__asm { push 0xc0 }
	__asm { call fn_009e4e60 }
	__asm { push 0xdfb5f0 }
	__asm { mov dword ptr [g_01305f48], 0xe97dd0 }
	__asm { mov dword ptr [g_01305f78], 0 }
	__asm { mov dword ptr [g_01305f7c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ea0[];
extern "C" char g_01305ed0[];
extern "C" char g_01305ed4[];
extern "C" void fn_009e5100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc4440
extern "C" __declspec(naked) void asm_00dc4440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1305ea0 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0xe73878 }
	__asm { push 0x1016e4c }
	__asm { push 0xe97d24 }
	__asm { push 0xa8 }
	__asm { call fn_009e5100 }
	__asm { push 0xdfb650 }
	__asm { mov dword ptr [g_01305ea0], 0xe97d08 }
	__asm { mov dword ptr [g_01305ed0], 0 }
	__asm { mov dword ptr [g_01305ed4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305f10[];
extern "C" char g_01305f40[];
extern "C" char g_01305f44[];
extern "C" void fn_009e4fb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc44b0
extern "C" __declspec(naked) void asm_00dc44b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1305f10 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0x1016e4c }
	__asm { push 0xe97d94 }
	__asm { push 0xb8 }
	__asm { call fn_009e4fb0 }
	__asm { push 0xdfb6b0 }
	__asm { mov dword ptr [g_01305f10], 0xe97d60 }
	__asm { mov dword ptr [g_01305f40], 0 }
	__asm { mov dword ptr [g_01305f44], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e4a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc4550
extern "C" __declspec(naked) void asm_00dc4550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305fb8 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0xe73878 }
	__asm { push 0xe97e30 }
	__asm { push 0 }
	__asm { push 0x9ebf30 }
	__asm { call fn_009e4a10 }
	__asm { push 0xdfb7e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e4b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc45e0
extern "C" __declspec(naked) void asm_00dc45e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1305df8 }
	__asm { push 0 }
	__asm { push 0xe97c6c }
	__asm { push 0xe73878 }
	__asm { push 0xe97c94 }
	__asm { push 0 }
	__asm { push 0x9ed8e0 }
	__asm { call fn_009e4b90 }
	__asm { push 0xdfb8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_00a0bdb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5470
extern "C" __declspec(naked) void asm_00dc5470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x1306ae0 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0xa0c720 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0xa0c560 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0x1004e28 }
	__asm { mov ecx, 0x1306b0c }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00a0bdb0 }
	__asm { push 0xdfbf40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a0d2f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc58a0
extern "C" __declspec(naked) void asm_00dc58a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa0de40 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x67e190 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe9dbec }
	__asm { mov ecx, 0x1306cc8 }
	__asm { call fn_00a0d2f0 }
	__asm { push 0xdfc100 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306f48[];
extern "C" char g_01306f64[];
extern "C" char g_01306f70[];
extern "C" char g_01306f74[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc59c0
extern "C" __declspec(naked) void asm_00dc59c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43faa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306f48 }
	__asm { push 3 }
	__asm { push 0xe9e39c }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306f48], 0xe9e330 }
	__asm { mov dword ptr [g_01306f70], 0xa0f3e0 }
	__asm { mov dword ptr [g_01306f74], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc270 }
	__asm { mov dword ptr [g_01306f64], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306e58[];
extern "C" char g_01306e74[];
extern "C" char g_01306e80[];
extern "C" char g_01306e84[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5a40
extern "C" __declspec(naked) void asm_00dc5a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43fca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306e58 }
	__asm { push 3 }
	__asm { push 0xe9e348 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306e58], 0xe9e330 }
	__asm { mov dword ptr [g_01306e80], 0xa0f3f0 }
	__asm { mov dword ptr [g_01306e84], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc2d0 }
	__asm { mov dword ptr [g_01306e74], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306e28[];
extern "C" char g_01306e44[];
extern "C" char g_01306e50[];
extern "C" char g_01306e54[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5ac0
extern "C" __declspec(naked) void asm_00dc5ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43fea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306e28 }
	__asm { push 3 }
	__asm { push 0xe9e338 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306e28], 0xe9e330 }
	__asm { mov dword ptr [g_01306e50], 0xa0f400 }
	__asm { mov dword ptr [g_01306e54], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc330 }
	__asm { mov dword ptr [g_01306e44], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306e88[];
extern "C" char g_01306ea4[];
extern "C" char g_01306eb0[];
extern "C" char g_01306eb4[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5b40
extern "C" __declspec(naked) void asm_00dc5b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4400a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306e88 }
	__asm { push 3 }
	__asm { push 0xe9e354 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306e88], 0xe9e330 }
	__asm { mov dword ptr [g_01306eb0], 0xa0f410 }
	__asm { mov dword ptr [g_01306eb4], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc390 }
	__asm { mov dword ptr [g_01306ea4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306ee8[];
extern "C" char g_01306f04[];
extern "C" char g_01306f10[];
extern "C" char g_01306f14[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5bc0
extern "C" __declspec(naked) void asm_00dc5bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4402a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306ee8 }
	__asm { push 3 }
	__asm { push 0xe9e378 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306ee8], 0xe9e330 }
	__asm { mov dword ptr [g_01306f10], 0xa0f420 }
	__asm { mov dword ptr [g_01306f14], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc3f0 }
	__asm { mov dword ptr [g_01306f04], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306eb8[];
extern "C" char g_01306ed4[];
extern "C" char g_01306ee0[];
extern "C" char g_01306ee4[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5c40
extern "C" __declspec(naked) void asm_00dc5c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4404a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306eb8 }
	__asm { push 3 }
	__asm { push 0xe9e364 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306eb8], 0xe9e330 }
	__asm { mov dword ptr [g_01306ee0], 0xa0f430 }
	__asm { mov dword ptr [g_01306ee4], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc450 }
	__asm { mov dword ptr [g_01306ed4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306f18[];
extern "C" char g_01306f34[];
extern "C" char g_01306f40[];
extern "C" char g_01306f44[];
extern "C" void fn_007d54e0();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5cc0
extern "C" __declspec(naked) void asm_00dc5cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4406a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306f18 }
	__asm { push 3 }
	__asm { push 0xe9e38c }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306f18], 0xe9e330 }
	__asm { mov dword ptr [g_01306f40], 0xa0f440 }
	__asm { mov dword ptr [g_01306f44], 0 }
	__asm { call fn_007d54e0 }
	__asm { push 0xdfc4b0 }
	__asm { mov dword ptr [g_01306f34], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306dc0[];
extern "C" char g_01306ddc[];
extern "C" char g_01306de8[];
extern "C" char g_01306dec[];
extern "C" void fn_00825140();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5d40
extern "C" __declspec(naked) void asm_00dc5d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4408a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306dc0 }
	__asm { push 3 }
	__asm { push 0xe9e300 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306dc0], 0xe9e2bc }
	__asm { mov dword ptr [g_01306de8], 0xa0f2b0 }
	__asm { mov dword ptr [g_01306dec], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfc510 }
	__asm { mov dword ptr [g_01306ddc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306fb0[];
extern "C" char g_01306fcc[];
extern "C" char g_01306fd8[];
extern "C" char g_01306fdc[];
extern "C" void fn_00825140();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5dc0
extern "C" __declspec(naked) void asm_00dc5dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd440aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306fb0 }
	__asm { push 3 }
	__asm { push 0xe9e3c4 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306fb0], 0xe9e2bc }
	__asm { mov dword ptr [g_01306fd8], 0xa0f450 }
	__asm { mov dword ptr [g_01306fdc], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfc570 }
	__asm { mov dword ptr [g_01306fcc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306d20[];
extern "C" char g_01306d3c[];
extern "C" char g_01306d48[];
extern "C" char g_01306d4c[];
extern "C" void fn_00825140();
extern "C" void fn_00a0ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc5e40
extern "C" __declspec(naked) void asm_00dc5e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd440ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1306d20 }
	__asm { push 3 }
	__asm { push 0xe9e2c4 }
	__asm { call fn_00a0ee80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01306d20], 0xe9e2bc }
	__asm { mov dword ptr [g_01306d48], 0xa0f460 }
	__asm { mov dword ptr [g_01306d4c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfc5d0 }
	__asm { mov dword ptr [g_01306d3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a56b70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc71a0
extern "C" __declspec(naked) void asm_00dc71a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa57d30 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa574b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624ec }
	__asm { mov ecx, 0x1307ce8 }
	__asm { call fn_00a56b70 }
	__asm { push 0xdfd000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a56b70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7200
extern "C" __declspec(naked) void asm_00dc7200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa58050 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa57520 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeab680 }
	__asm { mov ecx, 0x1307d14 }
	__asm { call fn_00a56b70 }
	__asm { push 0xdfd020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a56b70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7260
extern "C" __declspec(naked) void asm_00dc7260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa58080 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xc44c90 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1009a60 }
	__asm { mov ecx, 0x1307cbc }
	__asm { call fn_00a56b70 }
	__asm { push 0xdfd040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a569a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc72c0
extern "C" __declspec(naked) void asm_00dc72c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa58120 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa576b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeab68c }
	__asm { mov ecx, 0x1307d40 }
	__asm { call fn_00a569a0 }
	__asm { push 0xdfd060 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a565b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7320
extern "C" __declspec(naked) void asm_00dc7320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa58310 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa57710 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a894 }
	__asm { mov ecx, 0x1307c90 }
	__asm { call fn_00a565b0 }
	__asm { push 0xdfd080 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a569a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7380
extern "C" __declspec(naked) void asm_00dc7380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa57d60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa574c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe82b80 }
	__asm { mov ecx, 0x1307bdc }
	__asm { call fn_00a569a0 }
	__asm { push 0xdfd0a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a56850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc73e0
extern "C" __declspec(naked) void asm_00dc73e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa580b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa57590 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeab5b0 }
	__asm { mov ecx, 0x1307c38 }
	__asm { call fn_00a56850 }
	__asm { push 0xdfd0c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a56700();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7440
extern "C" __declspec(naked) void asm_00dc7440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa583a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa57750 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeab5fc }
	__asm { mov ecx, 0x1307c64 }
	__asm { call fn_00a56700 }
	__asm { push 0xdfd0e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a56850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc74a0
extern "C" __declspec(naked) void asm_00dc74a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xa58400 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xa57760 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xeab5a4 }
	__asm { mov ecx, 0x1307c0c }
	__asm { call fn_00a56850 }
	__asm { push 0xdfd100 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307fa8[];
extern "C" char g_01307fd8[];
extern "C" char g_01307fdc[];
extern "C" void fn_00a59ca0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7500
extern "C" __declspec(naked) void asm_00dc7500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1307fa8 }
	__asm { push 5 }
	__asm { push 0xe5dfd8 }
	__asm { push 0xeabbf8 }
	__asm { push 0x138 }
	__asm { call fn_00a59ca0 }
	__asm { push 0xdfd120 }
	__asm { mov dword ptr [g_01307fa8], 0xeabbdc }
	__asm { mov dword ptr [g_01307fd8], 1 }
	__asm { mov dword ptr [g_01307fdc], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a59b30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7560
extern "C" __declspec(naked) void asm_00dc7560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1307db0 }
	__asm { push 0 }
	__asm { push 0xeabaec }
	__asm { push 0xe7383c }
	__asm { push 0xeabb04 }
	__asm { push 0 }
	__asm { push 0xa5b560 }
	__asm { call fn_00a59b30 }
	__asm { push 0xdfd180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a59b30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc77b0
extern "C" __declspec(naked) void asm_00dc77b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1307d78 }
	__asm { push 0 }
	__asm { push 0xeabaec }
	__asm { push 0xe7383c }
	__asm { push 0xeabaf4 }
	__asm { push 0 }
	__asm { push 0xa5d760 }
	__asm { call fn_00a59b30 }
	__asm { push 0xdfd680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013080bc[];
extern "C" char g_013080ec[];
extern "C" char g_013080f0[];
extern "C" void fn_008258f0();
extern "C" void fn_00a607f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc78f0
extern "C" __declspec(naked) void asm_00dc78f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push 0x1308084 }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_008258f0 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x13080bc }
	__asm { push dword ptr [eax] }
	__asm { push 0 }
	__asm { push 0xeac2d8 }
	__asm { push 0xeac2f8 }
	__asm { push 0x8c }
	__asm { call fn_00a607f0 }
	__asm { push 0xdfd790 }
	__asm { mov dword ptr [g_013080bc], 0xeac2bc }
	__asm { mov dword ptr [g_013080ec], 1 }
	__asm { mov dword ptr [g_013080f0], esi }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308084[];
extern "C" char g_013080b4[];
extern "C" char g_013080b8[];
extern "C" void fn_00a607f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7960
extern "C" __declspec(naked) void asm_00dc7960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x1308084 }
	__asm { push 0 }
	__asm { push 0xeac2d8 }
	__asm { push 0xeac2ec }
	__asm { push 0x8c }
	__asm { call fn_00a607f0 }
	__asm { push 0xdfd7f0 }
	__asm { mov dword ptr [g_01308084], 0xeac2bc }
	__asm { mov dword ptr [g_013080b4], 1 }
	__asm { mov dword ptr [g_013080b8], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013080f4[];
extern "C" char g_01308124[];
extern "C" char g_01308128[];
extern "C" void fn_00a607f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc79c0
extern "C" __declspec(naked) void asm_00dc79c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x13080f4 }
	__asm { push 0 }
	__asm { push 0xeac304 }
	__asm { push 0xeac318 }
	__asm { push 0x94 }
	__asm { call fn_00a607f0 }
	__asm { push 0xdfd850 }
	__asm { mov dword ptr [g_013080f4], 0xeac2bc }
	__asm { mov dword ptr [g_01308124], 0 }
	__asm { mov dword ptr [g_01308128], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130812c[];
extern "C" char g_0130815c[];
extern "C" char g_01308160[];
extern "C" void fn_00a607f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7a20
extern "C" __declspec(naked) void asm_00dc7a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x130812c }
	__asm { push 0 }
	__asm { push 0xeac304 }
	__asm { push 0xeac328 }
	__asm { push 0x9c }
	__asm { call fn_00a607f0 }
	__asm { push 0xdfd8b0 }
	__asm { mov dword ptr [g_0130812c], 0xeac2bc }
	__asm { mov dword ptr [g_0130815c], 0 }
	__asm { mov dword ptr [g_01308160], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7cd0
extern "C" __declspec(naked) void asm_00dc7cd0()
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
	__asm { push 0xeac91c }
	__asm { push 0 }
	__asm { push 0xa642b0 }
	__asm { mov ecx, 0x1308350 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfdc20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7d20
extern "C" __declspec(naked) void asm_00dc7d20()
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
	__asm { push 0xeac928 }
	__asm { push 0 }
	__asm { push 0xa64310 }
	__asm { mov ecx, 0x1308388 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfdca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7d70
extern "C" __declspec(naked) void asm_00dc7d70()
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
	__asm { push 0xeac944 }
	__asm { push 0 }
	__asm { push 0xa64370 }
	__asm { mov ecx, 0x13083f8 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfdd20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a63c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7dc0
extern "C" __declspec(naked) void asm_00dc7dc0()
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
	__asm { push 0xeac950 }
	__asm { push 0 }
	__asm { push 0xa643d0 }
	__asm { mov ecx, 0x1308430 }
	__asm { call fn_00a63c80 }
	__asm { push 0xdfdda0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308500[];
extern "C" char g_0130851c[];
extern "C" char g_01308528[];
extern "C" char g_0130852c[];
extern "C" void fn_00825140();
extern "C" void fn_00a63e30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dc7e10
extern "C" __declspec(naked) void asm_00dc7e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4982a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1308500 }
	__asm { push 3 }
	__asm { push 0xeac9a0 }
	__asm { call fn_00a63e30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01308500], 0xeac96c }
	__asm { mov dword ptr [g_01308528], 0xa64430 }
	__asm { mov dword ptr [g_0130852c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdfde20 }
	__asm { mov dword ptr [g_0130851c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
