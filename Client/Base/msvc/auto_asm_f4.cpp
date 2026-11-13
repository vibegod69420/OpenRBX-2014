// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012e1a60[];
extern "C" char g_012e1a7c[];
extern "C" char g_012e1a88[];
extern "C" char g_012e1a8c[];
extern "C" void fn_007aef60();
extern "C" void fn_007d5710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da38d0
extern "C" __declspec(naked) void asm_00da38d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f9ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1a60 }
	__asm { push 0 }
	__asm { push 0xe551f4 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1a60], 0xe551ec }
	__asm { mov dword ptr [g_012e1a88], 0x53f63c }
	__asm { mov dword ptr [g_012e1a8c], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xde3ca0 }
	__asm { mov dword ptr [g_012e1a7c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1a90[];
extern "C" char g_012e1aac[];
extern "C" char g_012e1ab8[];
extern "C" char g_012e1abc[];
extern "C" void fn_007aef60();
extern "C" void fn_007d5710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3950
extern "C" __declspec(naked) void asm_00da3950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f9da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1a90 }
	__asm { push 0 }
	__asm { push 0xe551fc }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1a90], 0xe551ec }
	__asm { mov dword ptr [g_012e1ab8], 0x53f63c }
	__asm { mov dword ptr [g_012e1abc], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xde3d00 }
	__asm { mov dword ptr [g_012e1aac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b74f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3c60
extern "C" __declspec(naked) void asm_00da3c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x7bef60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x7bc5e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xf13260 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe56630 }
	__asm { mov ecx, 0x12e3054 }
	__asm { call fn_007b74f0 }
	__asm { push 0xde40f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b7250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3cc0
extern "C" __declspec(naked) void asm_00da3cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x7beb60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x4d2360 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe56574 }
	__asm { mov ecx, 0x12e2fa4 }
	__asm { call fn_007b7250 }
	__asm { push 0xde4110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b73a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3d20
extern "C" __declspec(naked) void asm_00da3d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x7bf350 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x7bc6e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe565d0 }
	__asm { mov ecx, 0x12e3028 }
	__asm { call fn_007b73a0 }
	__asm { push 0xde4130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b7250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3d80
extern "C" __declspec(naked) void asm_00da3d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x7bec90 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x67e030 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe56584 }
	__asm { mov ecx, 0x12e2fd0 }
	__asm { call fn_007b7250 }
	__asm { push 0xde4150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b7040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3de0
extern "C" __declspec(naked) void asm_00da3de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x7bf170 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x7bc5f0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xf13260 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe5652c }
	__asm { mov ecx, 0x12e2f70 }
	__asm { call fn_007b7040 }
	__asm { push 0xde4170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_007b7250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3e40
extern "C" __declspec(naked) void asm_00da3e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x12e2fd0 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0x7bec90 }
	__asm { push 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0x67e030 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0xe5658c }
	__asm { mov ecx, 0x12e2ffc }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_007b7250 }
	__asm { push 0xde4190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3148[];
extern "C" char g_012e3164[];
extern "C" char g_012e3170[];
extern "C" char g_012e3174[];
extern "C" void fn_007b9800();
extern "C" void fn_007d5470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3f30
extern "C" __declspec(naked) void asm_00da3f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2013a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e3148 }
	__asm { push 0 }
	__asm { push 0xe56690 }
	__asm { call fn_007b9800 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e3148], 0xe56670 }
	__asm { mov dword ptr [g_012e3170], 0x7bcb00 }
	__asm { mov dword ptr [g_012e3174], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xde4280 }
	__asm { mov dword ptr [g_012e3164], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3118[];
extern "C" char g_012e3134[];
extern "C" char g_012e3140[];
extern "C" char g_012e3144[];
extern "C" void fn_007b9800();
extern "C" void fn_007d5470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3fb0
extern "C" __declspec(naked) void asm_00da3fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2015a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e3118 }
	__asm { push 0 }
	__asm { push 0xe56680 }
	__asm { call fn_007b9800 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e3118], 0xe56670 }
	__asm { mov dword ptr [g_012e3140], 0x7bccb0 }
	__asm { mov dword ptr [g_012e3144], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xde42e0 }
	__asm { mov dword ptr [g_012e3134], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e30e8[];
extern "C" char g_012e3104[];
extern "C" char g_012e3110[];
extern "C" char g_012e3114[];
extern "C" void fn_007b9800();
extern "C" void fn_007d5470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da4030
extern "C" __declspec(naked) void asm_00da4030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2017a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e30e8 }
	__asm { push 0 }
	__asm { push 0xe56678 }
	__asm { call fn_007b9800 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e30e8], 0xe56670 }
	__asm { mov dword ptr [g_012e3110], 0x7bcc80 }
	__asm { mov dword ptr [g_012e3114], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xde4340 }
	__asm { mov dword ptr [g_012e3104], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b8e50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da40b0
extern "C" __declspec(naked) void asm_00da40b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e3258 }
	__asm { push 0 }
	__asm { push 0xe56728 }
	__asm { push 0xe56734 }
	__asm { push 0xe56740 }
	__asm { push 0xe56748 }
	__asm { push 0 }
	__asm { push 0x7bad80 }
	__asm { call fn_007b8e50 }
	__asm { push 0xde43a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e35f0[];
extern "C" char g_012e360c[];
extern "C" char g_012e3618[];
extern "C" char g_012e361c[];
extern "C" void fn_007c4fe0();
extern "C" void fn_00824ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da42e0
extern "C" __declspec(naked) void asm_00da42e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2072a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e35f0 }
	__asm { push 5 }
	__asm { push 0xe57b6c }
	__asm { call fn_007c4fe0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e35f0], 0xe57b64 }
	__asm { mov dword ptr [g_012e3618], 0x7c6200 }
	__asm { mov dword ptr [g_012e361c], 0 }
	__asm { call fn_00824ff0 }
	__asm { push 0xde47f0 }
	__asm { mov dword ptr [g_012e360c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3b30[];
extern "C" char g_012e3b4c[];
extern "C" char g_012e3b58[];
extern "C" char g_012e3b5c[];
extern "C" void fn_007c8420();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da4440
extern "C" __declspec(naked) void asm_00da4440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20daa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e3b30 }
	__asm { push 2 }
	__asm { push 0xe58420 }
	__asm { call fn_007c8420 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e3b30], 0xe5800c }
	__asm { mov dword ptr [g_012e3b58], 0x7c9de0 }
	__asm { mov dword ptr [g_012e3b5c], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xde4aa0 }
	__asm { mov dword ptr [g_012e3b4c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008430e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad5d0
extern "C" __declspec(naked) void asm_00dad5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9318 }
	__asm { push 3 }
	__asm { push 0xe5e4f4 }
	__asm { push 0xe5e4fc }
	__asm { push 0xe5e508 }
	__asm { push 0 }
	__asm { push 0x84b370 }
	__asm { call fn_008430e0 }
	__asm { push 0xde8fc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8b68[];
extern "C" char g_012f8b84[];
extern "C" char g_012f8b90[];
extern "C" char g_012f8b94[];
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad660
extern "C" __declspec(naked) void asm_00dad660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27f8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8b68 }
	__asm { push 3 }
	__asm { push 0xe4665c }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8b68], 0xe5dc98 }
	__asm { mov dword ptr [g_012f8b90], 0x84e040 }
	__asm { mov dword ptr [g_012f8b94], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde9030 }
	__asm { mov dword ptr [g_012f8b84], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8cf0[];
extern "C" char g_012f8d0c[];
extern "C" char g_012f8d18[];
extern "C" char g_012f8d1c[];
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad820
extern "C" __declspec(naked) void asm_00dad820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27faa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8cf0 }
	__asm { push 3 }
	__asm { push 0xe5dfec }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8cf0], 0xe5dc98 }
	__asm { mov dword ptr [g_012f8d18], 0x84dd30 }
	__asm { mov dword ptr [g_012f8d1c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde9280 }
	__asm { mov dword ptr [g_012f8d0c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8d50[];
extern "C" char g_012f8d6c[];
extern "C" char g_012f8d78[];
extern "C" char g_012f8d7c[];
extern "C" void fn_007d5550();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad8a0
extern "C" __declspec(naked) void asm_00dad8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27fca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8d50 }
	__asm { push 0 }
	__asm { push 0xe5e020 }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8d50], 0xe5e018 }
	__asm { mov dword ptr [g_012f8d78], 0x856220 }
	__asm { mov dword ptr [g_012f8d7c], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xde92e0 }
	__asm { mov dword ptr [g_012f8d6c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8d20[];
extern "C" char g_012f8d3c[];
extern "C" char g_012f8d48[];
extern "C" char g_012f8d4c[];
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dad920
extern "C" __declspec(naked) void asm_00dad920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27fea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8d20 }
	__asm { push 3 }
	__asm { push 0xe5dffc }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8d20], 0xe5dc98 }
	__asm { mov dword ptr [g_012f8d48], 0x85fb80 }
	__asm { mov dword ptr [g_012f8d4c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde9340 }
	__asm { mov dword ptr [g_012f8d3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8740[];
extern "C" char g_012f875c[];
extern "C" char g_012f8768[];
extern "C" char g_012f876c[];
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dada20
extern "C" __declspec(naked) void asm_00dada20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2800a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8740 }
	__asm { push 6 }
	__asm { push 0xe5dca0 }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8740], 0xe5dc98 }
	__asm { mov dword ptr [g_012f8768], 0x4d22c0 }
	__asm { mov dword ptr [g_012f876c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde94c0 }
	__asm { mov dword ptr [g_012f875c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842fc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadaa0
extern "C" __declspec(naked) void asm_00dadaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8ae8 }
	__asm { push 5 }
	__asm { push 0xe5dea0 }
	__asm { push 0xe5dea8 }
	__asm { push 0xe5deb0 }
	__asm { push 0xe5deb8 }
	__asm { push 0x1016e4c }
	__asm { push 0xe5dec0 }
	__asm { push 0 }
	__asm { push 0x85e110 }
	__asm { call fn_00842fc0 }
	__asm { push 0xde9520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00843330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadb00
extern "C" __declspec(naked) void asm_00dadb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8fa8 }
	__asm { push 1 }
	__asm { push 0xe5e194 }
	__asm { push 0xe5e1a4 }
	__asm { push 0xe5e1b8 }
	__asm { push 0 }
	__asm { push 0x85f650 }
	__asm { call fn_00843330 }
	__asm { push 0xde9530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f92e8[];
extern "C" char g_012f9304[];
extern "C" char g_012f9310[];
extern "C" char g_012f9314[];
extern "C" void fn_007d5d30();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadb90
extern "C" __declspec(naked) void asm_00dadb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2802a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f92e8 }
	__asm { push 0 }
	__asm { push 0xe5e4dc }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f92e8], 0xe5ddb4 }
	__asm { mov dword ptr [g_012f9310], 0x8526c0 }
	__asm { mov dword ptr [g_012f9314], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xde9620 }
	__asm { mov dword ptr [g_012f9304], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842ba0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadc90
extern "C" __declspec(naked) void asm_00dadc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8de8 }
	__asm { push 1 }
	__asm { push 0xe5e050 }
	__asm { push 0xe5e05c }
	__asm { push 0xe5e07c }
	__asm { push 0 }
	__asm { push 0x852720 }
	__asm { call fn_00842ba0 }
	__asm { push 0xde97e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842ba0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadce0
extern "C" __declspec(naked) void asm_00dadce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8db0 }
	__asm { push 1 }
	__asm { push 0xe5e050 }
	__asm { push 0xe5e05c }
	__asm { push 0xe5e064 }
	__asm { push 0 }
	__asm { push 0x852980 }
	__asm { call fn_00842ba0 }
	__asm { push 0xde98a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8d80[];
extern "C" char g_012f8d9c[];
extern "C" char g_012f8da8[];
extern "C" char g_012f8dac[];
extern "C" void fn_00825060();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadd30
extern "C" __declspec(naked) void asm_00dadd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2804a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8d80 }
	__asm { push 1 }
	__asm { push 0xe5e02c }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8d80], 0xe5de80 }
	__asm { mov dword ptr [g_012f8da8], 0x852be0 }
	__asm { mov dword ptr [g_012f8dac], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xde9960 }
	__asm { mov dword ptr [g_012f8d9c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8ab8[];
extern "C" char g_012f8ad4[];
extern "C" char g_012f8ae0[];
extern "C" char g_012f8ae4[];
extern "C" void fn_00825060();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daddb0
extern "C" __declspec(naked) void asm_00daddb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2806a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8ab8 }
	__asm { push 1 }
	__asm { push 0xe5de88 }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8ab8], 0xe5de80 }
	__asm { mov dword ptr [g_012f8ae0], 0x853210 }
	__asm { mov dword ptr [g_012f8ae4], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xde99c0 }
	__asm { mov dword ptr [g_012f8ad4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8930[];
extern "C" char g_012f894c[];
extern "C" char g_012f8958[];
extern "C" char g_012f895c[];
extern "C" void fn_007d5d30();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dade30
extern "C" __declspec(naked) void asm_00dade30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2808a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8930 }
	__asm { push 0 }
	__asm { push 0xe5ddbc }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8930], 0xe5ddb4 }
	__asm { mov dword ptr [g_012f8958], 0x855f90 }
	__asm { mov dword ptr [g_012f895c], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xde9a20 }
	__asm { mov dword ptr [g_012f894c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008429b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadef0
extern "C" __declspec(naked) void asm_00dadef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8a40 }
	__asm { push 5 }
	__asm { push 0 }
	__asm { push 0xe5de50 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5de5c }
	__asm { push 0 }
	__asm { push 0x8569d0 }
	__asm { call fn_008429b0 }
	__asm { push 0xde9b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00843650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dadf40
extern "C" __declspec(naked) void asm_00dadf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { push 5 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 3 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe5de24 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xe5de28 }
	__asm { push 0xe37160 }
	__asm { push 0xe5dcf8 }
	__asm { push 0xe5de34 }
	__asm { push 0 }
	__asm { push 0x857050 }
	__asm { mov ecx, 0x12f8a00 }
	__asm { call fn_00843650 }
	__asm { push 0xde9bf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_00830160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae400
extern "C" __declspec(naked) void asm_00dae400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x12f8fe0 }
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
	__asm { push 0x422020 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe52d44 }
	__asm { push 0x1032ee4 }
	__asm { mov ecx, 0x12f9010 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00830160 }
	__asm { push 0xde9ee0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8c20[];
extern "C" char g_012f8c3c[];
extern "C" char g_012f8c48[];
extern "C" char g_012f8c4c[];
extern "C" void fn_007d5d30();
extern "C" void fn_00844510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae5a0
extern "C" __declspec(naked) void asm_00dae5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd280aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8c20 }
	__asm { push 5 }
	__asm { push 0xe5df7c }
	__asm { call fn_00844510 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8c20], 0xe5df74 }
	__asm { mov dword ptr [g_012f8c48], 0x85ed30 }
	__asm { mov dword ptr [g_012f8c4c], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xdea1d0 }
	__asm { mov dword ptr [g_012f8c3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8998[];
extern "C" char g_012f89b4[];
extern "C" char g_012f89c0[];
extern "C" char g_012f89c4[];
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae620
extern "C" __declspec(naked) void asm_00dae620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd280ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8998 }
	__asm { push 3 }
	__asm { push 0xe5ddf0 }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8998], 0xe5dc98 }
	__asm { mov dword ptr [g_012f89c0], 0x422890 }
	__asm { mov dword ptr [g_012f89c4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdea230 }
	__asm { mov dword ptr [g_012f89b4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae6a0
extern "C" __declspec(naked) void asm_00dae6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8f00 }
	__asm { push 1 }
	__asm { push 0xe5e124 }
	__asm { push 0xe5e130 }
	__asm { push 0xe5e13c }
	__asm { push 0 }
	__asm { push 0x85f580 }
	__asm { call fn_00842d20 }
	__asm { push 0xdea290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae6f0
extern "C" __declspec(naked) void asm_00dae6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8f38 }
	__asm { push 1 }
	__asm { push 0xe5e124 }
	__asm { push 0xe5e14c }
	__asm { push 0xe5e158 }
	__asm { push 0 }
	__asm { push 0x85f580 }
	__asm { call fn_00842d20 }
	__asm { push 0xdea310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842dd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae780
extern "C" __declspec(naked) void asm_00dae780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8e90 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe5e0ec }
	__asm { push 0xe5e0c8 }
	__asm { push 0xe5e0f8 }
	__asm { push 0 }
	__asm { push 0x85f910 }
	__asm { call fn_00842dd0 }
	__asm { push 0xdea400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00842dd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae7d0
extern "C" __declspec(naked) void asm_00dae7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f8ec8 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe5e0ec }
	__asm { push 0xe5e104 }
	__asm { push 0xe5e10c }
	__asm { push 0 }
	__asm { push 0x85f910 }
	__asm { call fn_00842dd0 }
	__asm { push 0xdea480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8b98[];
extern "C" char g_012f8bb4[];
extern "C" char g_012f8bc0[];
extern "C" char g_012f8bc4[];
extern "C" void fn_00825140();
extern "C" void fn_00844400();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dae960
extern "C" __declspec(naked) void asm_00dae960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd280ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12f8b98 }
	__asm { push 3 }
	__asm { push 0xe5def8 }
	__asm { call fn_00844400 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012f8b98], 0xe5dc98 }
	__asm { mov dword ptr [g_012f8bc0], 0x860390 }
	__asm { mov dword ptr [g_012f8bc4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdea7f0 }
	__asm { mov dword ptr [g_012f8bb4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daee00
extern "C" __declspec(naked) void asm_00daee00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878e00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872a50 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624e4 }
	__asm { mov ecx, 0x12f9b20 }
	__asm { call fn_00861a30 }
	__asm { push 0xdeaaf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9cf4[];
extern "C" char g_012f9d24[];
extern "C" char g_012f9d28[];
extern "C" void fn_00868a60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daef20
extern "C" __declspec(naked) void asm_00daef20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9cf4 }
	__asm { push 0 }
	__asm { push 0xe625dc }
	__asm { push 0xe625ec }
	__asm { push 0x1c8 }
	__asm { call fn_00868a60 }
	__asm { push 0xdeab90 }
	__asm { mov dword ptr [g_012f9cf4], 0xe625c0 }
	__asm { mov dword ptr [g_012f9d24], 0 }
	__asm { mov dword ptr [g_012f9d28], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9cbc[];
extern "C" char g_012f9cec[];
extern "C" char g_012f9cf0[];
extern "C" void fn_00868160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daef80
extern "C" __declspec(naked) void asm_00daef80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9cbc }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe62590 }
	__asm { push 0x1c0 }
	__asm { call fn_00868160 }
	__asm { push 0xdeabf0 }
	__asm { mov dword ptr [g_012f9cbc], 0xe62528 }
	__asm { mov dword ptr [g_012f9cec], 0 }
	__asm { mov dword ptr [g_012f9cf0], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa098[];
extern "C" char g_012fa0c8[];
extern "C" char g_012fa0cc[];
extern "C" void fn_00868010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf140
extern "C" __declspec(naked) void asm_00daf140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fa098 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe63064 }
	__asm { push 0x2a4 }
	__asm { call fn_00868010 }
	__asm { push 0xdeae30 }
	__asm { mov dword ptr [g_012fa098], 0xe63048 }
	__asm { mov dword ptr [g_012fa0c8], 0 }
	__asm { mov dword ptr [g_012fa0cc], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa0d0[];
extern "C" char g_012fa100[];
extern "C" char g_012fa104[];
extern "C" void fn_00868010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf1a0
extern "C" __declspec(naked) void asm_00daf1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fa0d0 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe63078 }
	__asm { push 0x2ac }
	__asm { call fn_00868010 }
	__asm { push 0xdeae90 }
	__asm { mov dword ptr [g_012fa0d0], 0xe63048 }
	__asm { mov dword ptr [g_012fa100], 0 }
	__asm { mov dword ptr [g_012fa104], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa060[];
extern "C" char g_012fa090[];
extern "C" char g_012fa094[];
extern "C" void fn_00868c80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf200
extern "C" __declspec(naked) void asm_00daf200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fa060 }
	__asm { push 0 }
	__asm { push 0xe63010 }
	__asm { push 0x29c }
	__asm { call fn_00868c80 }
	__asm { push 0xdeaef0 }
	__asm { mov dword ptr [g_012fa060], 0xe62fe0 }
	__asm { mov dword ptr [g_012fa090], 0 }
	__asm { mov dword ptr [g_012fa094], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa108[];
extern "C" char g_012fa138[];
extern "C" char g_012fa13c[];
extern "C" void fn_00868010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf260
extern "C" __declspec(naked) void asm_00daf260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fa108 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe63088 }
	__asm { push 0x2b4 }
	__asm { call fn_00868010 }
	__asm { push 0xdeaf50 }
	__asm { mov dword ptr [g_012fa108], 0xe63048 }
	__asm { mov dword ptr [g_012fa138], 0 }
	__asm { mov dword ptr [g_012fa13c], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa140[];
extern "C" char g_012fa170[];
extern "C" char g_012fa174[];
extern "C" void fn_00868010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf2c0
extern "C" __declspec(naked) void asm_00daf2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fa140 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6309c }
	__asm { push 0x2bc }
	__asm { call fn_00868010 }
	__asm { push 0xdeafc0 }
	__asm { mov dword ptr [g_012fa140], 0xe63048 }
	__asm { mov dword ptr [g_012fa170], 0 }
	__asm { mov dword ptr [g_012fa174], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9ba4[];
extern "C" char g_012f9bd4[];
extern "C" char g_012f9bd8[];
extern "C" void fn_00868160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf320
extern "C" __declspec(naked) void asm_00daf320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9ba4 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe62544 }
	__asm { push 0xf8 }
	__asm { call fn_00868160 }
	__asm { push 0xdeb020 }
	__asm { mov dword ptr [g_012f9ba4], 0xe62528 }
	__asm { mov dword ptr [g_012f9bd4], 0 }
	__asm { mov dword ptr [g_012f9bd8], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9bdc[];
extern "C" char g_012f9c0c[];
extern "C" char g_012f9c10[];
extern "C" void fn_00868160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf380
extern "C" __declspec(naked) void asm_00daf380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9bdc }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe62550 }
	__asm { push 0x100 }
	__asm { call fn_00868160 }
	__asm { push 0xdeb080 }
	__asm { mov dword ptr [g_012f9bdc], 0xe62528 }
	__asm { mov dword ptr [g_012f9c0c], 0 }
	__asm { mov dword ptr [g_012f9c10], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9c14[];
extern "C" char g_012f9c44[];
extern "C" char g_012f9c48[];
extern "C" void fn_00868160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf3e0
extern "C" __declspec(naked) void asm_00daf3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9c14 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6255c }
	__asm { push 0x108 }
	__asm { call fn_00868160 }
	__asm { push 0xdeb0e0 }
	__asm { mov dword ptr [g_012f9c14], 0xe62528 }
	__asm { mov dword ptr [g_012f9c44], 0 }
	__asm { mov dword ptr [g_012f9c48], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9c84[];
extern "C" char g_012f9cb4[];
extern "C" char g_012f9cb8[];
extern "C" void fn_00868160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf440
extern "C" __declspec(naked) void asm_00daf440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9c84 }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6257c }
	__asm { push 0x118 }
	__asm { call fn_00868160 }
	__asm { push 0xdeb140 }
	__asm { mov dword ptr [g_012f9c84], 0xe62528 }
	__asm { mov dword ptr [g_012f9cb4], 0 }
	__asm { mov dword ptr [g_012f9cb8], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9c4c[];
extern "C" char g_012f9c7c[];
extern "C" char g_012f9c80[];
extern "C" void fn_00868160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf4a0
extern "C" __declspec(naked) void asm_00daf4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12f9c4c }
	__asm { push 0 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe62568 }
	__asm { push 0x110 }
	__asm { call fn_00868160 }
	__asm { push 0xdeb1a0 }
	__asm { mov dword ptr [g_012f9c4c], 0xe62528 }
	__asm { mov dword ptr [g_012f9c7c], 0 }
	__asm { mov dword ptr [g_012f9c80], 1 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008685e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf500
extern "C" __declspec(naked) void asm_00daf500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9e08 }
	__asm { push 0 }
	__asm { push 0xe50278 }
	__asm { push 0xe62654 }
	__asm { push 0xe6271c }
	__asm { push 0xe62618 }
	__asm { push 0xe62730 }
	__asm { push 0xf4 }
	__asm { call fn_008685e0 }
	__asm { push 0xdeb200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00868380();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf550
extern "C" __declspec(naked) void asm_00daf550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9d58 }
	__asm { push 0 }
	__asm { push 0xe50278 }
	__asm { push 0xe62654 }
	__asm { push 0xe62660 }
	__asm { push 0xe62618 }
	__asm { push 0xe62668 }
	__asm { push 0xe4 }
	__asm { call fn_00868380 }
	__asm { push 0xdeb260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00868380();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf5a0
extern "C" __declspec(naked) void asm_00daf5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12f9ddc }
	__asm { push 0 }
	__asm { push 0xe50278 }
	__asm { push 0xe62654 }
	__asm { push 0xe4690c }
	__asm { push 0xe62618 }
	__asm { push 0xe626f0 }
	__asm { push 0xf0 }
	__asm { call fn_00868380 }
	__asm { push 0xdeb2c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00daf9c0
extern "C" __declspec(naked) void asm_00daf9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878070 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8722f0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624ec }
	__asm { mov ecx, 0x12f9b4c }
	__asm { call fn_00861a30 }
	__asm { push 0xdeb640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00860fd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafa20
extern "C" __declspec(naked) void asm_00dafa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8780b0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872300 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe63174 }
	__asm { mov ecx, 0x12fa280 }
	__asm { call fn_00860fd0 }
	__asm { push 0xdeb660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008618e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafb30
extern "C" __declspec(naked) void asm_00dafb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8781f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8729d0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624ac }
	__asm { mov ecx, 0x12f9a9c }
	__asm { call fn_008618e0 }
	__asm { push 0xdeb6c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861790();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafc40
extern "C" __declspec(naked) void asm_00dafc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878330 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8723f0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe62338 }
	__asm { mov ecx, 0x12f9934 }
	__asm { call fn_00861790 }
	__asm { push 0xdeb720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafca0
extern "C" __declspec(naked) void asm_00dafca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878370 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872700 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe55160 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624d0 }
	__asm { mov ecx, 0x12f9af4 }
	__asm { call fn_00861a30 }
	__asm { push 0xdeb740 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafd00
extern "C" __declspec(naked) void asm_00dafd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8783a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872710 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe55160 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe624c4 }
	__asm { mov ecx, 0x12f9ac8 }
	__asm { call fn_00861a30 }
	__asm { push 0xdeb760 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafd60
extern "C" __declspec(naked) void asm_00dafd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878780 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872730 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1010d10 }
	__asm { mov ecx, 0x12f9908 }
	__asm { call fn_00861430 }
	__asm { push 0xdeb780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008618e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafdc0
extern "C" __declspec(naked) void asm_00dafdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878870 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8727c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1010d1c }
	__asm { mov ecx, 0x12f998c }
	__asm { call fn_008618e0 }
	__asm { push 0xdeb7a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00860fd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafe20
extern "C" __declspec(naked) void asm_00dafe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8788e0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872970 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe63184 }
	__asm { mov ecx, 0x12fa2ac }
	__asm { call fn_00860fd0 }
	__asm { push 0xdeb7c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafe80
extern "C" __declspec(naked) void asm_00dafe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878a70 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x872980 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x100a894 }
	__asm { mov ecx, 0x12f97fc }
	__asm { call fn_00861430 }
	__asm { push 0xdeb7e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00861580();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafee0
extern "C" __declspec(naked) void asm_00dafee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x878b00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8729b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe623e4 }
	__asm { mov ecx, 0x12f99b8 }
	__asm { call fn_00861580 }
	__asm { push 0xdeb800 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087a0f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dafff0
extern "C" __declspec(naked) void asm_00dafff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87bec0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xbda810 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf1303c }
	__asm { mov ecx, 0x12fa614 }
	__asm { call fn_0087a0f0 }
	__asm { push 0xdebc90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087a300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0050
extern "C" __declspec(naked) void asm_00db0050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87bf00 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x495630 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe640fc }
	__asm { mov ecx, 0x12fa5e0 }
	__asm { call fn_0087a300 }
	__asm { push 0xdebcb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087aa80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0260
extern "C" __declspec(naked) void asm_00db0260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c1a0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bad0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64290 }
	__asm { mov ecx, 0x12fa724 }
	__asm { call fn_0087aa80 }
	__asm { push 0xdebd70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00879fa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db02c0
extern "C" __declspec(naked) void asm_00db02c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c1f0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bae0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe643c0 }
	__asm { mov ecx, 0x12fa810 }
	__asm { call fn_00879fa0 }
	__asm { push 0xdebd90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087a930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0320
extern "C" __declspec(naked) void asm_00db0320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c260 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bb00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe643d4 }
	__asm { mov ecx, 0x12fa83c }
	__asm { call fn_0087a930 }
	__asm { push 0xdebdb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087a930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0380
extern "C" __declspec(naked) void asm_00db0380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c2a0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x99d310 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64228 }
	__asm { mov ecx, 0x12fa6a0 }
	__asm { call fn_0087a930 }
	__asm { push 0xdebdd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087aa80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db03e0
extern "C" __declspec(naked) void asm_00db03e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c2e0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x892dc0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64278 }
	__asm { mov ecx, 0x12fa6cc }
	__asm { call fn_0087aa80 }
	__asm { push 0xdebdf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087a510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0440
extern "C" __declspec(naked) void asm_00db0440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c400 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x58f6b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe642f4 }
	__asm { mov ecx, 0x12fa750 }
	__asm { call fn_0087a510 }
	__asm { push 0xdebe10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087a720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db04a0
extern "C" __declspec(naked) void asm_00db04a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87c460 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x891b30 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6435c }
	__asm { mov ecx, 0x12fa784 }
	__asm { call fn_0087a720 }
	__asm { push 0xdebe30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_0087aa80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0500
extern "C" __declspec(naked) void asm_00db0500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x12fa6cc }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { push 0x87c2e0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0x892dc0 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { push 0xe6409c }
	__asm { push 0xe64284 }
	__asm { mov ecx, 0x12fa6f8 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_0087aa80 }
	__asm { push 0xdebe50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087cb50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0570
extern "C" __declspec(naked) void asm_00db0570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e2e0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xbda810 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf1303c }
	__asm { mov ecx, 0x12fa8cc }
	__asm { call fn_0087cb50 }
	__asm { push 0xdebe70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087cd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db05d0
extern "C" __declspec(naked) void asm_00db05d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e320 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x495630 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe640fc }
	__asm { mov ecx, 0x12fa898 }
	__asm { call fn_0087cd60 }
	__asm { push 0xdebe90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087d4e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db07e0
extern "C" __declspec(naked) void asm_00db07e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e5c0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bad0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64290 }
	__asm { mov ecx, 0x12fa9dc }
	__asm { call fn_0087d4e0 }
	__asm { push 0xdebf50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087ca00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0840
extern "C" __declspec(naked) void asm_00db0840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e610 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bae0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe643c0 }
	__asm { mov ecx, 0x12faac8 }
	__asm { call fn_0087ca00 }
	__asm { push 0xdebf70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087d390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db08a0
extern "C" __declspec(naked) void asm_00db08a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e680 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bb00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe643d4 }
	__asm { mov ecx, 0x12faaf4 }
	__asm { call fn_0087d390 }
	__asm { push 0xdebf90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087d390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0900
extern "C" __declspec(naked) void asm_00db0900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e6c0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x99d310 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64228 }
	__asm { mov ecx, 0x12fa958 }
	__asm { call fn_0087d390 }
	__asm { push 0xdebfb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087d4e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0960
extern "C" __declspec(naked) void asm_00db0960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e700 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x892dc0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64278 }
	__asm { mov ecx, 0x12fa984 }
	__asm { call fn_0087d4e0 }
	__asm { push 0xdebfd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087cf70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db09c0
extern "C" __declspec(naked) void asm_00db09c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e7b0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x58f6b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe642f4 }
	__asm { mov ecx, 0x12faa08 }
	__asm { call fn_0087cf70 }
	__asm { push 0xdebff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087d180();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0a20
extern "C" __declspec(naked) void asm_00db0a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x87e810 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x891b30 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6435c }
	__asm { mov ecx, 0x12faa3c }
	__asm { call fn_0087d180 }
	__asm { push 0xdec010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fabc0[];
extern "C" char g_012fabdc[];
extern "C" char g_012fabe8[];
extern "C" char g_012fabec[];
extern "C" void fn_00825140();
extern "C" void fn_008802a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0bf0
extern "C" __declspec(naked) void asm_00db0bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b61a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fabc0 }
	__asm { push 0 }
	__asm { push 0xe65020 }
	__asm { call fn_008802a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fabc0], 0xe65018 }
	__asm { mov dword ptr [g_012fabe8], 0x8807d0 }
	__asm { mov dword ptr [g_012fabec], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdec170 }
	__asm { mov dword ptr [g_012fabdc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f9f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0c70
extern "C" __declspec(naked) void asm_00db0c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8830a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x881280 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64ff4 }
	__asm { mov ecx, 0x12fab68 }
	__asm { call fn_0087f9f0 }
	__asm { push 0xdec1d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087ec60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0cd0
extern "C" __declspec(naked) void asm_00db0cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8830d0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0xbda810 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf1303c }
	__asm { mov ecx, 0x12fac50 }
	__asm { call fn_0087ec60 }
	__asm { push 0xdec1f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087ee80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0d30
extern "C" __declspec(naked) void asm_00db0d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x883110 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x495630 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe640fc }
	__asm { mov ecx, 0x12fac1c }
	__asm { call fn_0087ee80 }
	__asm { push 0xdec210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f9f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0d90
extern "C" __declspec(naked) void asm_00db0d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x883210 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x881290 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64fe8 }
	__asm { mov ecx, 0x12fab3c }
	__asm { call fn_0087f9f0 }
	__asm { push 0xdec230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db0fa0
extern "C" __declspec(naked) void asm_00db0fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8834a0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bad0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64290 }
	__asm { mov ecx, 0x12fad60 }
	__asm { call fn_0087f600 }
	__asm { push 0xdec2f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087eb10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1000
extern "C" __declspec(naked) void asm_00db1000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8834f0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bae0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe643c0 }
	__asm { mov ecx, 0x12fae4c }
	__asm { call fn_0087eb10 }
	__asm { push 0xdec310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1060
extern "C" __declspec(naked) void asm_00db1060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x883560 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87bb00 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe643d4 }
	__asm { mov ecx, 0x12fae78 }
	__asm { call fn_0087f4b0 }
	__asm { push 0xdec330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db10c0
extern "C" __declspec(naked) void asm_00db10c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8835a0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x99d310 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64228 }
	__asm { mov ecx, 0x12facdc }
	__asm { call fn_0087f4b0 }
	__asm { push 0xdec350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1120
extern "C" __declspec(naked) void asm_00db1120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8835e0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x892dc0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe64278 }
	__asm { mov ecx, 0x12fad08 }
	__asm { call fn_0087f600 }
	__asm { push 0xdec370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f090();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1180
extern "C" __declspec(naked) void asm_00db1180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8836e0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x58f6b0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe642f4 }
	__asm { mov ecx, 0x12fad8c }
	__asm { call fn_0087f090 }
	__asm { push 0xdec390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0087f2a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db11e0
extern "C" __declspec(naked) void asm_00db11e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x883740 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x891b30 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6409c }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6435c }
	__asm { mov ecx, 0x12fadc0 }
	__asm { call fn_0087f2a0 }
	__asm { push 0xdec3b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008838f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1310
extern "C" __declspec(naked) void asm_00db1310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x884c10 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x884740 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65a1c }
	__asm { mov ecx, 0x12faed0 }
	__asm { call fn_008838f0 }
	__asm { push 0xdec450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008837a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1370
extern "C" __declspec(naked) void asm_00db1370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x884ca0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87b980 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65b0c }
	__asm { mov ecx, 0x12faf80 }
	__asm { call fn_008837a0 }
	__asm { push 0xdec470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00883a40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db13d0
extern "C" __declspec(naked) void asm_00db13d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x884d10 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x884780 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65a60 }
	__asm { mov ecx, 0x12faefc }
	__asm { call fn_00883a40 }
	__asm { push 0xdec490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00883a40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1430
extern "C" __declspec(naked) void asm_00db1430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x884d60 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8847a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65a70 }
	__asm { mov ecx, 0x12faf28 }
	__asm { call fn_00883a40 }
	__asm { push 0xdec4b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00883b90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1490
extern "C" __declspec(naked) void asm_00db1490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x884db0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8847c0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65abc }
	__asm { mov ecx, 0x12faf54 }
	__asm { call fn_00883b90 }
	__asm { push 0xdec4d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00884fb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db14f0
extern "C" __declspec(naked) void asm_00db14f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x885b80 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x884740 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65a1c }
	__asm { mov ecx, 0x12fafbc }
	__asm { call fn_00884fb0 }
	__asm { push 0xdec500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00884e60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1550
extern "C" __declspec(naked) void asm_00db1550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x885c10 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x87b980 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65b0c }
	__asm { mov ecx, 0x12fb06c }
	__asm { call fn_00884e60 }
	__asm { push 0xdec520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00885100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db15b0
extern "C" __declspec(naked) void asm_00db15b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x885c80 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x884780 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65a60 }
	__asm { mov ecx, 0x12fafe8 }
	__asm { call fn_00885100 }
	__asm { push 0xdec540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00885100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1610
extern "C" __declspec(naked) void asm_00db1610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x885cd0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8847a0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe65a70 }
	__asm { mov ecx, 0x12fb014 }
	__asm { call fn_00885100 }
	__asm { push 0xdec560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088ac40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1760
extern "C" __declspec(naked) void asm_00db1760()
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
	__asm { mov dword ptr [eax], 0x88f0c4 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe55160 }
	__asm { mov dword ptr [eax], 0x891b50 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe6727c }
	__asm { mov ecx, 0x12fb650 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088ac40 }
	__asm { push 0xdec680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00889a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db17e0
extern "C" __declspec(naked) void asm_00db17e0()
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
	__asm { mov dword ptr [eax], 0x88f054 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [eax], 0x532740 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0x1032f84 }
	__asm { mov ecx, 0x12fb514 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_00889a70 }
	__asm { push 0xdec6a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088a530();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1860
extern "C" __declspec(naked) void asm_00db1860()
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
	__asm { mov dword ptr [eax], 0x897930 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [eax], 0x892440 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0x100a88c }
	__asm { mov ecx, 0x12fb10c }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088a530 }
	__asm { push 0xdec6c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088aad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1c00
extern "C" __declspec(naked) void asm_00db1c00()
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
	__asm { mov dword ptr [eax], 0x88f0ec }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [eax], 0x532720 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe67268 }
	__asm { mov ecx, 0x12fb5f8 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088aad0 }
	__asm { push 0xdec7c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088aad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1de0
extern "C" __declspec(naked) void asm_00db1de0()
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
	__asm { mov dword ptr [eax], 0x88f0e4 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe67240 }
	__asm { mov dword ptr [eax], 0x532710 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe624f4 }
	__asm { mov ecx, 0x12fb5a0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088aad0 }
	__asm { push 0xdec840 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088a6a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db1e60
extern "C" __declspec(naked) void asm_00db1e60()
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
	__asm { mov dword ptr [eax], 0x88f0a4 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [eax], 0x892710 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe67110 }
	__asm { mov ecx, 0x12fb190 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088a6a0 }
	__asm { push 0xdec860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088c7e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db20f0
extern "C" __declspec(naked) void asm_00db20f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x12fb700 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb740 }
	__asm { push 0 }
	__asm { push 0xe67374 }
	__asm { push 0xe67380 }
	__asm { push 0xe6738c }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x88f09c }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088c7e0 }
	__asm { push 0xdeca20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088c6b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2150
extern "C" __declspec(naked) void asm_00db2150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb3c8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe551bc }
	__asm { push 0xe671f8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x891d30 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088c6b0 }
	__asm { push 0xdecaa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb320[];
extern "C" char g_012fb33c[];
extern "C" char g_012fb348[];
extern "C" char g_012fb34c[];
extern "C" char g_012fb350[];
extern "C" void fn_007d5470();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db21b0
extern "C" __declspec(naked) void asm_00db21b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c33a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb320 }
	__asm { push 0 }
	__asm { push 0xe671c4 }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb320], 0xe671bc }
	__asm { mov dword ptr [g_012fb348], 0x892830 }
	__asm { mov dword ptr [g_012fb34c], 0 }
	__asm { mov dword ptr [g_012fb350], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xdecb10 }
	__asm { mov dword ptr [g_012fb33c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb358[];
extern "C" char g_012fb374[];
extern "C" char g_012fb380[];
extern "C" char g_012fb384[];
extern "C" char g_012fb388[];
extern "C" void fn_007d5470();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2240
extern "C" __declspec(naked) void asm_00db2240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c35a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb358 }
	__asm { push 0 }
	__asm { push 0xe671cc }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb358], 0xe671bc }
	__asm { mov dword ptr [g_012fb380], 0x892830 }
	__asm { mov dword ptr [g_012fb384], 0 }
	__asm { mov dword ptr [g_012fb388], 0 }
	__asm { call fn_007d5470 }
	__asm { push 0xdecb70 }
	__asm { mov dword ptr [g_012fb374], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb400[];
extern "C" char g_012fb41c[];
extern "C" char g_012fb428[];
extern "C" char g_012fb42c[];
extern "C" char g_012fb430[];
extern "C" void fn_007d5710();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db22d0
extern "C" __declspec(naked) void asm_00db22d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c37a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb400 }
	__asm { push 0 }
	__asm { push 0xe67218 }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb400], 0xe67210 }
	__asm { mov dword ptr [g_012fb428], 0x892f70 }
	__asm { mov dword ptr [g_012fb42c], 0 }
	__asm { mov dword ptr [g_012fb430], 0 }
	__asm { call fn_007d5710 }
	__asm { push 0xdecbd0 }
	__asm { mov dword ptr [g_012fb41c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb390[];
extern "C" char g_012fb3ac[];
extern "C" char g_012fb3b8[];
extern "C" char g_012fb3bc[];
extern "C" char g_012fb3c0[];
extern "C" void fn_007d5d30();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2360
extern "C" __declspec(naked) void asm_00db2360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c39a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb390 }
	__asm { push 0 }
	__asm { push 0xe671e0 }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb390], 0xe671d8 }
	__asm { mov dword ptr [g_012fb3b8], 0x893ce0 }
	__asm { mov dword ptr [g_012fb3bc], 0 }
	__asm { mov dword ptr [g_012fb3c0], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xdecc30 }
	__asm { mov dword ptr [g_012fb3ac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb2b0[];
extern "C" char g_012fb2cc[];
extern "C" char g_012fb2d8[];
extern "C" char g_012fb2dc[];
extern "C" char g_012fb2e0[];
extern "C" void fn_00825140();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db23f0
extern "C" __declspec(naked) void asm_00db23f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c3ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb2b0 }
	__asm { push 0 }
	__asm { push 0xe671a0 }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb2b0], 0xe67180 }
	__asm { mov dword ptr [g_012fb2d8], 0x88f0cc }
	__asm { mov dword ptr [g_012fb2dc], 0 }
	__asm { mov dword ptr [g_012fb2e0], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdecc90 }
	__asm { mov dword ptr [g_012fb2cc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb2e8[];
extern "C" char g_012fb304[];
extern "C" char g_012fb310[];
extern "C" char g_012fb314[];
extern "C" char g_012fb318[];
extern "C" void fn_00825140();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2480
extern "C" __declspec(naked) void asm_00db2480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c3da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb2e8 }
	__asm { push 0 }
	__asm { push 0xe671ac }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb2e8], 0xe67180 }
	__asm { mov dword ptr [g_012fb310], 0x88f0cc }
	__asm { mov dword ptr [g_012fb314], 0 }
	__asm { mov dword ptr [g_012fb318], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdeccf0 }
	__asm { mov dword ptr [g_012fb304], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088c7e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2510
extern "C" __declspec(naked) void asm_00db2510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb700 }
	__asm { push 0 }
	__asm { push 0xe67374 }
	__asm { push 0xe67380 }
	__asm { push 0x101d2cc }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x88f09c }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088c7e0 }
	__asm { push 0xdecd50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb240[];
extern "C" char g_012fb25c[];
extern "C" char g_012fb268[];
extern "C" char g_012fb26c[];
extern "C" char g_012fb270[];
extern "C" void fn_00825140();
extern "C" void fn_0088d350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2570
extern "C" __declspec(naked) void asm_00db2570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c3fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fb240 }
	__asm { push 0 }
	__asm { push 0xe67188 }
	__asm { call fn_0088d350 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fb240], 0xe67180 }
	__asm { mov dword ptr [g_012fb268], 0x88f0d4 }
	__asm { mov dword ptr [g_012fb26c], 0 }
	__asm { mov dword ptr [g_012fb270], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdecdd0 }
	__asm { mov dword ptr [g_012fb25c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088cda0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2600
extern "C" __declspec(naked) void asm_00db2600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb870 }
	__asm { push 0 }
	__asm { push 0xe67470 }
	__asm { push 0xe67478 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x892a40 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088cda0 }
	__asm { push 0xdece30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb7d8[];
extern "C" char g_012fb80c[];
extern "C" char g_012fb810[];
extern "C" void fn_0088d050();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2650
extern "C" __declspec(naked) void asm_00db2650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov ecx, 0x12fb7d8 }
	__asm { push 3 }
	__asm { push 0xe673e4 }
	__asm { push 0xe673f4 }
	__asm { push 0 }
	__asm { push 0x100 }
	__asm { call fn_0088d050 }
	__asm { push 0xdece90 }
	__asm { mov dword ptr [g_012fb7d8], 0xe673c8 }
	__asm { mov dword ptr [g_012fb80c], 0 }
	__asm { mov dword ptr [g_012fb810], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fb988[];
extern "C" void fn_0088d1d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db26b0
extern "C" __declspec(naked) void asm_00db26b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb988 }
	__asm { push 0 }
	__asm { push 0xe67508 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x892a70 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088d1d0 }
	__asm { push 0xdecef0 }
	__asm { mov dword ptr [g_012fb988], 0xe674ec }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088cf70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2710
extern "C" __declspec(naked) void asm_00db2710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb918 }
	__asm { push 0 }
	__asm { push 0xe674b0 }
	__asm { push 0xe674cc }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x892aa0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088cf70 }
	__asm { push 0xdecf50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088cf70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2760
extern "C" __declspec(naked) void asm_00db2760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fb8a8 }
	__asm { push 0 }
	__asm { push 0xe674b0 }
	__asm { push 0xe674bc }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x892ad0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088cf70 }
	__asm { push 0xdecfc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012095e4[];
extern "C" void fn_0088aad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db2970
extern "C" __declspec(naked) void asm_00db2970()
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
	__asm { mov dword ptr [eax], 0x88f0b4 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push dword ptr [g_012095e4] }
	__asm { mov dword ptr [eax], 0x892470 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push 0xe67228 }
	__asm { mov ecx, 0x12fb490 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0088aad0 }
	__asm { push 0xded080 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089fc30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3180
extern "C" __declspec(naked) void asm_00db3180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbf08 }
	__asm { push 0 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a358 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a11f0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089fc30 }
	__asm { push 0xded830 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089fa60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db31e0
extern "C" __declspec(naked) void asm_00db31e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbf48 }
	__asm { push 0 }
	__asm { push 0xe6a304 }
	__asm { push 0xe6a374 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a17c0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089fa60 }
	__asm { push 0xded8b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3230
extern "C" __declspec(naked) void asm_00db3230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbfc0 }
	__asm { push 0 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a3a4 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a1b20 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f560 }
	__asm { push 0xded920 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3290
extern "C" __declspec(naked) void asm_00db3290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbf80 }
	__asm { push 0 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a390 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a1b70 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f560 }
	__asm { push 0xded9a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc0a8[];
extern "C" char g_012fc0c4[];
extern "C" char g_012fc0d0[];
extern "C" char g_012fc0d4[];
extern "C" char g_012fc0d8[];
extern "C" void fn_00825140();
extern "C" void fn_008a0660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db32f0
extern "C" __declspec(naked) void asm_00db32f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cdea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fc0a8 }
	__asm { push 0 }
	__asm { push 0x100d494 }
	__asm { call fn_008a0660 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fc0a8], 0xe6a404 }
	__asm { mov dword ptr [g_012fc0d0], 0x8a1bb0 }
	__asm { mov dword ptr [g_012fc0d4], 0 }
	__asm { mov dword ptr [g_012fc0d8], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xdeda20 }
	__asm { mov dword ptr [g_012fc0c4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3380
extern "C" __declspec(naked) void asm_00db3380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc118 }
	__asm { push 0 }
	__asm { push 0xe6a304 }
	__asm { push 0xe6a430 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a2340 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f490 }
	__asm { push 0xdeda80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc0e0[];
extern "C" char g_012fc0fc[];
extern "C" char g_012fc108[];
extern "C" char g_012fc10c[];
extern "C" char g_012fc110[];
extern "C" void fn_007d5390();
extern "C" void fn_008a0660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db33d0
extern "C" __declspec(naked) void asm_00db33d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ce0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fc0e0 }
	__asm { push 0 }
	__asm { push 0xe6a418 }
	__asm { call fn_008a0660 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fc0e0], 0xe6a410 }
	__asm { mov dword ptr [g_012fc108], 0x8a24a0 }
	__asm { mov dword ptr [g_012fc10c], 0 }
	__asm { mov dword ptr [g_012fc110], 0 }
	__asm { call fn_007d5390 }
	__asm { push 0xdedaf0 }
	__asm { mov dword ptr [g_012fc0fc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3460
extern "C" __declspec(naked) void asm_00db3460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbda8 }
	__asm { push 0 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a2c8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a3680 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f3b0 }
	__asm { push 0xdedb50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db34c0
extern "C" __declspec(naked) void asm_00db34c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbe80 }
	__asm { push 0 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a318 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a3b80 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f3b0 }
	__asm { push 0xdedbd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f980();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3520
extern "C" __declspec(naked) void asm_00db3520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc150 }
	__asm { push 0 }
	__asm { push 0xe6a448 }
	__asm { push 0xe6a458 }
	__asm { push 0xe6a304 }
	__asm { push 0xe6a460 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a3f60 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f980 }
	__asm { push 0xdedc50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3580
extern "C" __declspec(naked) void asm_00db3580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbde8 }
	__asm { push 0 }
	__asm { push 0xe6a2dc }
	__asm { push 0xe6a2e8 }
	__asm { push 0xe47170 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a2f0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a42b0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f710 }
	__asm { push 0xdedc60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089fb30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db35f0
extern "C" __declspec(naked) void asm_00db35f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbe38 }
	__asm { push 0 }
	__asm { push 0xe6a2dc }
	__asm { push 0xe6a2e8 }
	__asm { push 0xe47170 }
	__asm { push 0xe6a304 }
	__asm { push 0xe6a30c }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a4360 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089fb30 }
	__asm { push 0xdedd00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3650
extern "C" __declspec(naked) void asm_00db3650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fbec0 }
	__asm { push 0 }
	__asm { push 0xe3af24 }
	__asm { push 0xe6a334 }
	__asm { push 0xe46a10 }
	__asm { push 0xe46a0c }
	__asm { push 0xe46a08 }
	__asm { push 0xe6a33c }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a4890 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f860 }
	__asm { push 0xdedd90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f640();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db36c0
extern "C" __declspec(naked) void asm_00db36c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc070 }
	__asm { push 0 }
	__asm { push 0xe3af14 }
	__asm { push 0xe6a3f4 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a4a60 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f640 }
	__asm { push 0xdede30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089f640();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3710
extern "C" __declspec(naked) void asm_00db3710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc038 }
	__asm { push 0 }
	__asm { push 0xe3af14 }
	__asm { push 0xe6a3dc }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0x8a49c0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { call fn_0089f640 }
	__asm { push 0xdedea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a5910();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3a50
extern "C" __declspec(naked) void asm_00db3a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8a91f0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8a8730 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6afc4 }
	__asm { mov ecx, 0x12fc240 }
	__asm { call fn_008a5910 }
	__asm { push 0xdee140 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a5700();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3ab0
extern "C" __declspec(naked) void asm_00db3ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8a9240 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8a8740 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6b044 }
	__asm { mov ecx, 0x12fc2c4 }
	__asm { call fn_008a5700 }
	__asm { push 0xdee160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a9390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3b10
extern "C" __declspec(naked) void asm_00db3b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x90d358 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x517430 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6b494 }
	__asm { mov ecx, 0x12fc358 }
	__asm { call fn_008a9390 }
	__asm { push 0xdee180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a94e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db3b70
extern "C" __declspec(naked) void asm_00db3b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0xb0adf5 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x517440 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe52d44 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe6b4d8 }
	__asm { mov ecx, 0x12fc384 }
	__asm { call fn_008a94e0 }
	__asm { push 0xdee1a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc840[];
extern "C" char g_012fc85c[];
extern "C" char g_012fc868[];
extern "C" char g_012fc86c[];
extern "C" void fn_007d5d30();
extern "C" void fn_008bae20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4410
extern "C" __declspec(naked) void asm_00db4410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e1ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fc840 }
	__asm { push 0 }
	__asm { push 0xe6d884 }
	__asm { call fn_008bae20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fc840], 0xe6d87c }
	__asm { mov dword ptr [g_012fc868], 0x403b10 }
	__asm { mov dword ptr [g_012fc86c], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xdeea20 }
	__asm { mov dword ptr [g_012fc85c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc870[];
extern "C" char g_012fc88c[];
extern "C" char g_012fc898[];
extern "C" char g_012fc89c[];
extern "C" void fn_007d5d30();
extern "C" void fn_008bae20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4490
extern "C" __declspec(naked) void asm_00db4490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e20a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12fc870 }
	__asm { push 0 }
	__asm { push 0xe6d894 }
	__asm { call fn_008bae20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fc870], 0xe6d87c }
	__asm { mov dword ptr [g_012fc898], 0x490c00 }
	__asm { mov dword ptr [g_012fc89c], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xdeea80 }
	__asm { mov dword ptr [g_012fc88c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ba4d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4510
extern "C" __declspec(naked) void asm_00db4510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12fc758 }
	__asm { push 5 }
	__asm { push 0x1024d64 }
	__asm { push 0xe6d728 }
	__asm { push 0xe6d754 }
	__asm { push 0 }
	__asm { push 0x8bc1d0 }
	__asm { call fn_008ba4d0 }
	__asm { push 0xdeeae0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b90c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00db4610
extern "C" __declspec(naked) void asm_00db4610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push 0x8bbf20 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x8bb870 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xe6d564 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xe56834 }
	__asm { mov ecx, 0x12fc624 }
	__asm { call fn_008b90c0 }
	__asm { push 0xdeebe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
