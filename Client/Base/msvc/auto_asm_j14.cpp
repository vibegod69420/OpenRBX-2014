// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012e3598[];
extern "C" char g_012e359c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007c2ca0
extern "C" __declspec(naked) void asm_007c2ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2042e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7c1b40 }
	__asm { push 0x12e3590 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e359c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c2d02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e359c], eax }
	__asm { push 0xe57044 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3598], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c2d02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3598] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x007c3c30
extern "C" __declspec(naked) void asm_007c3c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_007c3c4f }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_00407e90 }
	__asm { L_007c3c4f: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007c3c87 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp edx, eax }
	__asm { je L_007c3c87 }
	__asm { L_007c3c60: }
	__asm { cmp dword ptr [edx], ecx }
	__asm { je L_007c3c6b }
	__asm { add edx, 4 }
	__asm { cmp edx, eax }
	__asm { jne L_007c3c60 }
	__asm { L_007c3c6b: }
	__asm { cmp edx, eax }
	__asm { je L_007c3c87 }
	__asm { lea ecx, [edx + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x14], -4 }
	__asm { L_007c3c87: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c4060
extern "C" __declspec(naked) void asm_007c4060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd204c0 }
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
	__asm { je L_007c40b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe57c6c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007c40ba }
	__asm { L_007c40b8: }
	__asm { xor eax, eax }
	__asm { L_007c40ba: }
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
// FUNCTION: ROBLOXSTUDIO 0x007c40f0
extern "C" __declspec(naked) void asm_007c40f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd204d0 }
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
	__asm { je L_007c4148 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe57c84 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007c414a }
	__asm { L_007c4148: }
	__asm { xor eax, eax }
	__asm { L_007c414a: }
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

extern "C" void fn_00403540();
extern "C" void fn_007c4180();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c4340
extern "C" __declspec(naked) void asm_007c4340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_007c4180 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xe579d4 }
	__asm { mov dword ptr [esi + 4], 0xe57a4c }
	__asm { mov dword ptr [esi + 0x18], 0xe57a54 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57a60 }
	__asm { jb L_007c43b9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c43b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_007c4260();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c43d0
extern "C" __declspec(naked) void asm_007c43d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_007c4260 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xe577f4 }
	__asm { mov dword ptr [esi + 4], 0xe5786c }
	__asm { mov dword ptr [esi + 0x18], 0xe57874 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57880 }
	__asm { jb L_007c4449 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c4449: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_007c4f20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c4460
extern "C" __declspec(naked) void asm_007c4460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20550 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007c4f20 }
	__asm { lea ecx, [esi + 0x88] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe576b4 }
	__asm { mov dword ptr [esi + 4], 0xe5772c }
	__asm { mov dword ptr [esi + 0x18], 0xe57734 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57740 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov byte ptr [esi + 0xa0], 0 }
	__asm { mov dword ptr [esi], 0xe57934 }
	__asm { mov dword ptr [esi + 4], 0xe579ac }
	__asm { mov dword ptr [esi + 0x18], 0xe579b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe579c0 }
	__asm { jb L_007c4501 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c4501: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_007c4f20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c4520
extern "C" __declspec(naked) void asm_007c4520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20550 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007c4f20 }
	__asm { lea ecx, [esi + 0x88] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe576b4 }
	__asm { mov dword ptr [esi + 4], 0xe5772c }
	__asm { mov dword ptr [esi + 0x18], 0xe57734 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57740 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov byte ptr [esi + 0xa0], 0 }
	__asm { mov dword ptr [esi], 0xe57754 }
	__asm { mov dword ptr [esi + 4], 0xe577cc }
	__asm { mov dword ptr [esi + 0x18], 0xe577d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe577e0 }
	__asm { jb L_007c45c1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c45c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_007c4060();
extern "C" void fn_007c5200();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c4830
extern "C" __declspec(naked) void asm_007c4830()
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
	__asm { push 0xac }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007c487e }
	__asm { mov ecx, eax }
	__asm { call fn_007c5200 }
	__asm { mov esi, eax }
	__asm { jmp L_007c4880 }
	__asm { L_007c487e: }
	__asm { xor esi, esi }
	__asm { L_007c4880: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007c4060 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007c48b1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007c48b1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007c48b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c40f0();
extern "C" void fn_007c52d0();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c48d0
extern "C" __declspec(naked) void asm_007c48d0()
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
	__asm { push 0xac }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007c491e }
	__asm { mov ecx, eax }
	__asm { call fn_007c52d0 }
	__asm { mov esi, eax }
	__asm { jmp L_007c4920 }
	__asm { L_007c491e: }
	__asm { xor esi, esi }
	__asm { L_007c4920: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007c40f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007c4951 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007c4951 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007c4951: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e69704[];
extern "C" char g_012e3694[];
extern "C" char g_012e3698[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007c4970
extern "C" __declspec(naked) void asm_007c4970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2058e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e69704], 0 }
	__asm { jne L_007c49a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c49a4: }
	__asm { push 0x7c4790 }
	__asm { push 0x12e368c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3698] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c49ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3698], eax }
	__asm { push 0xe69704 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3694], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c49ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3694] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e37f4[];
extern "C" char g_012e4b0c[];
extern "C" void fn_0043ec00();
extern "C" void fn_007c5390();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c4f20
extern "C" __declspec(naked) void asm_007c4f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd205b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c5390 }
	__asm { mov dword ptr [esi], 0xe57614 }
	__asm { mov dword ptr [esi + 4], 0xe5768c }
	__asm { mov dword ptr [esi + 0x18], 0xe57694 }
	__asm { mov dword ptr [esi + 0x1c], 0xe576a0 }
	__asm { mov eax, dword ptr [g_012e37f4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_007c4fb7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e37f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe574bc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x12e36c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c4fb7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e36c8 }
	__asm { inc dword ptr [g_012e4b0c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b0630();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c58a0
extern "C" __declspec(naked) void asm_007c58a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007c5909 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007c5904 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_007c58eb }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_004b0630 }
	__asm { L_007c58eb: }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { L_007c5904: }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { L_007c5909: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_007c591e }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c591e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e3a54[];
extern "C" void fn_007c5ba0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c5aa0
extern "C" __declspec(naked) void asm_007c5aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2076e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e3a54] }
	__asm { test al, 1 }
	__asm { jne L_007c5b0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5749c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007c5ba0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3928 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c5b0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e3928 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3924[];
extern "C" void fn_007c5ba0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c5b20
extern "C" __declspec(naked) void asm_007c5b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2078e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e3924] }
	__asm { test al, 1 }
	__asm { jne L_007c5b8b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3924], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe574ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007c5ba0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e37f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c5b8b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e37f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e37f4[];
extern "C" void fn_0043ec00();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c5ba0
extern "C" __declspec(naked) void asm_007c5ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd207ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e37f4] }
	__asm { test al, 1 }
	__asm { jne L_007c5c0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e37f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe574bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, 0x12e36c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4730 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c5c0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e36c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3a70[];
extern "C" char g_012e3a74[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007c5dc0
extern "C" __declspec(naked) void asm_007c5dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2080e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7c47e0 }
	__asm { push 0x12e3a58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3a74] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c5e22 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a74], eax }
	__asm { push 0xe57494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3a70], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c5e22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3a70] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3a80[];
extern "C" char g_012e3a84[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007c5e40
extern "C" __declspec(naked) void asm_007c5e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2082e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7c46f0 }
	__asm { push 0x12e3a68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3a84] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c5ea2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a84], eax }
	__asm { push 0xe57490 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3a80], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c5ea2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3a80] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3a78[];
extern "C" char g_012e3a7c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007c5ec0
extern "C" __declspec(naked) void asm_007c5ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2084e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7c4740 }
	__asm { push 0x12e3a60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3a7c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c5f22 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a7c], eax }
	__asm { push 0xe5748c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3a78], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c5f22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3a78] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007c66a0
extern "C" __declspec(naked) void asm_007c66a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11edf0c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_007c66f9 }
	__asm { push eax }
	__asm { push 0x12bdbc4 }
	__asm { push 0x12bdbf4 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_007c66f9 }
	__asm { push eax }
	__asm { push 0x11edf38 }
	__asm { push 0x12bdbf4 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_007c66f9 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c66f9: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007b6900();
extern "C" void fn_007c4c20();
extern "C" void fn_007c66a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c6ba0
extern "C" __declspec(naked) void asm_007c6ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_007c66a0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_007c6be1 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007c4c20 }
	__asm { cmp byte ptr [ebp + 0xf], 0 }
	__asm { jne L_007c6be1 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_007b6900 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007c6be1: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe57bb8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c7030
extern "C" __declspec(naked) void asm_007c7030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20a60 }
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
	__asm { je L_007c7088 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe58634 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007c708a }
	__asm { L_007c7088: }
	__asm { xor eax, eax }
	__asm { L_007c708a: }
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

extern "C" char g_012e4c5c[];
extern "C" char g_0131a71c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c70c0
extern "C" __declspec(naked) void asm_007c70c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20a86 }
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
	__asm { mov dword ptr [esi], 0xe57cdc }
	__asm { mov dword ptr [esi + 4], 0xe57d54 }
	__asm { mov dword ptr [esi + 0x18], 0xe57d5c }
	__asm { mov dword ptr [esi + 0x1c], 0xe57d68 }
	__asm { mov eax, dword ptr [g_0131a71c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_007c715a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a71c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe57cbc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a5f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c715a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131a5f0 }
	__asm { inc dword ptr [g_012e4c5c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007c7340
extern "C" __declspec(naked) void asm_007c7340()
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
	__asm { je L_007c7369 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007c736e }
	__asm { L_007c7369: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007c736e: }
	__asm { cmp ecx, 0x11ef0a4 }
	__asm { je L_007c73b7 }
	__asm { test eax, eax }
	__asm { je L_007c737e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007c7383 }
	__asm { L_007c737e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007c7383: }
	__asm { push 0x11ef0a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007c73b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007c73b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c7030();
extern "C" void fn_007c89b0();
extern "C" void fn_007de8e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c78a0
extern "C" __declspec(naked) void asm_007c78a0()
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
	__asm { je L_007c78ee }
	__asm { mov ecx, eax }
	__asm { call fn_007c89b0 }
	__asm { mov esi, eax }
	__asm { jmp L_007c78f0 }
	__asm { L_007c78ee: }
	__asm { xor esi, esi }
	__asm { L_007c78f0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007c7030 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007c7921 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007c7921 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007c7921: }
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
extern "C" void fn_007c7940();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007c7a90
extern "C" __declspec(naked) void asm_007c7a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_007c7ae1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007c7ab0 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007c7ab2 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007c7ab2 }
	__asm { L_007c7ab0: }
	__asm { mov eax, ecx }
	__asm { L_007c7ab2: }
	__asm { test eax, eax }
	__asm { je L_007c7ae1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007c7ae1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007c7ae1 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007c7ae1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_007c7940 }
	__asm { L_007c7ae1: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6f65c[];
extern "C" char g_012e3f20[];
extern "C" char g_012e3f24[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007c7af0
extern "C" __declspec(naked) void asm_007c7af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20afe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6f65c], 0 }
	__asm { jne L_007c7b24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c7b24: }
	__asm { push 0x7c75f0 }
	__asm { push 0x12e3de0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3f24] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c7b6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f24], eax }
	__asm { push 0xe6f65c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3f20], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c7b6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3f20] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008c0430();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c81e0
extern "C" __declspec(naked) void asm_007c81e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_007c822d }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jg L_007c822d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007c821c }
	__asm { push 0x9b }
	__asm { push 0x10027e0 }
	__asm { push 0x1007e84 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c822d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007c821c: }
	__asm { movzx eax, al }
	__asm { push 0x1007e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c822d: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c824c }
	__asm { test esi, esi }
	__asm { je L_007c824c }
	__asm { mov ecx, esi }
	__asm { call fn_008c0430 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c824c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3ca4[];
extern "C" char g_012e4b34[];
extern "C" void fn_0041bea0();
extern "C" void fn_007c8a90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c82a0
extern "C" __declspec(naked) void asm_007c82a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20bb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c8a90 }
	__asm { mov dword ptr [esi], 0xe580cc }
	__asm { mov dword ptr [esi + 4], 0xe58154 }
	__asm { mov dword ptr [esi + 0x18], 0xe5815c }
	__asm { mov dword ptr [esi + 0x1c], 0xe58168 }
	__asm { mov eax, dword ptr [g_012e3ca4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_007c8337 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3ca4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe57cc8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3b78 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4c30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c8337: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e3b78 }
	__asm { inc dword ptr [g_012e4b34] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c60[];
extern "C" char g_0131a84c[];
extern "C" void fn_0041eb40();
extern "C" void fn_007c87f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c8360
extern "C" __declspec(naked) void asm_007c8360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20bd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c87f0 }
	__asm { mov dword ptr [esi], 0xe57edc }
	__asm { mov dword ptr [esi + 4], 0xe57f64 }
	__asm { mov dword ptr [esi + 0x18], 0xe57f6c }
	__asm { mov dword ptr [esi + 0x1c], 0xe57f78 }
	__asm { mov eax, dword ptr [g_0131a84c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_007c83f7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a84c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101e404 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041eb40 }
	__asm { push eax }
	__asm { mov ecx, 0x131a720 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c83f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131a720 }
	__asm { inc dword ptr [g_012e4c60] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ca2a0();
extern "C" void fn_00886420();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c86b0
extern "C" __declspec(naked) void asm_007c86b0()
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
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00886420 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ca2a0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_007c8719 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c86ff }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c86ff: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c8719: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007c872a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c872a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e57cc8[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007c82a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c8900
extern "C" __declspec(naked) void asm_007c8900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20c70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c82a0 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe5817c }
	__asm { mov dword ptr [esi + 4], 0xe58204 }
	__asm { mov dword ptr [esi + 0x18], 0xe5820c }
	__asm { mov dword ptr [esi + 0x1c], 0xe58218 }
	__asm { cmp byte ptr [g_00e57cc8], cl }
	__asm { mov eax, 0xb }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe57cc8 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007c8998 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c8998: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007c9680();
// FUNCTION: ROBLOXSTUDIO 0x007c8c50
extern "C" __declspec(naked) void asm_007c8c50()
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
	__asm { call fn_007c9680 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007c8cc2 }
	__asm { add esi, 5 }
	__asm { je L_007c8c92 }
	__asm { add esi, -5 }
	__asm { jmp L_007c8c94 }
	__asm { L_007c8c92: }
	__asm { xor esi, esi }
	__asm { L_007c8c94: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c8cc1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c8cc1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007c8cc1: }
	__asm { pop edi }
	__asm { L_007c8cc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eaaba0[];
extern "C" char g_012e3f14[];
extern "C" void fn_0041eb40();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c92f0
extern "C" __declspec(naked) void asm_007c92f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20dce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e3f14] }
	__asm { test al, 1 }
	__asm { jne L_007c935c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00eaaba0] }
	__asm { call fn_0041eb40 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3de8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4c20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c935c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e3de8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3ca4[];
extern "C" void fn_0041bea0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c9370
extern "C" __declspec(naked) void asm_007c9370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20dee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e3ca4] }
	__asm { test al, 1 }
	__asm { jne L_007c93db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3ca4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe57cc8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3b78 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4c30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c93db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e3b78 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6f65c[];
extern "C" char g_012e3dd4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c93f0
extern "C" __declspec(naked) void asm_007c93f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20e0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e3dd4] }
	__asm { test al, 1 }
	__asm { jne L_007c945c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3dd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00e6f65c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3ca8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4c40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c945c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e3ca8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00886380();
// FUNCTION: ROBLOXSTUDIO 0x007c94e0
extern "C" __declspec(naked) void asm_007c94e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007c9515 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00886380 }
	__asm { L_007c9515: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9530
extern "C" __declspec(naked) void asm_007c9530()
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
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_007c957f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c957f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e3f18[];
extern "C" char g_012e3f1c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007c9c90
extern "C" __declspec(naked) void asm_007c9c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7c75a0 }
	__asm { push 0x12e3dd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3f1c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c9cf2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f1c], eax }
	__asm { push 0xe57cb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3f18], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c9cf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012e3f18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403a30();
extern "C" void fn_007b3b40();
// FUNCTION: ROBLOXSTUDIO 0x007c9e40
extern "C" __declspec(naked) void asm_007c9e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x74], 0 }
	__asm { jne L_007c9e8f }
	__asm { mov ecx, dword ptr [esi + 0x9c] }
	__asm { call fn_00403a30 }
	__asm { mov edx, eax }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [edx + 0x10] }
	__asm { shr edx, 5 }
	__asm { lea ecx, [ebp - 8] }
	__asm { cmp edx, 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { cmovle eax, ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_007b3b40 }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007c9e8f: }
	__asm { mov ecx, esi }
	__asm { xor edi, edi }
	__asm { call fn_007b3b40 }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c7180();
extern "C" void fn_007d58d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9ee0
extern "C" __declspec(naked) void asm_007c9ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007c7180 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_007c9f39 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9f39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007c7270();
extern "C" void fn_00886230();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9f50
extern "C" __declspec(naked) void asm_007c9f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ba38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886230 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007c7270 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_007c9fc8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c9fae }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9fae: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9fc8: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_007c9fda }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9fda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00886570();
// FUNCTION: ROBLOXSTUDIO 0x007ca480
extern "C" __declspec(naked) void asm_007ca480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_007ca4b1 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_007ca494: }
	__asm { test esi, esi }
	__asm { je L_007ca49d }
	__asm { lea eax, [esi - 0x24] }
	__asm { jmp L_007ca49f }
	__asm { L_007ca49d: }
	__asm { xor eax, eax }
	__asm { L_007ca49f: }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00886570 }
	__asm { test al, al }
	__asm { jne L_007ca4ba }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_007ca494 }
	__asm { L_007ca4b1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007ca4ba: }
	__asm { mov dword ptr [edi], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007c7ce0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007cac20
extern "C" __declspec(naked) void asm_007cac20()
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
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_007c7ce0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_007cac6f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007cac6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007c7e10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007cac80
extern "C" __declspec(naked) void asm_007cac80()
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
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_007c7e10 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_007cacee }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007cacd4 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007cacd4: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007cacee: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_007cad00 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007cad00: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e3f70[];
extern "C" char g_012e3f74[];
extern "C" char g_012e3f78[];
extern "C" char g_012e3f7c[];
extern "C" char g_012e3f80[];
extern "C" char g_012e3f84[];
extern "C" char g_012e3f88[];
extern "C" void fn_00403110();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cb640
extern "C" __declspec(naked) void asm_007cb640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e3f88] }
	__asm { test al, 1 }
	__asm { jne L_007cb6c1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f88], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [g_012e3f70], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_007cb685 }
	__asm { sub eax, 4 }
	__asm { L_007cb685: }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0xde4ce0 }
	__asm { mov dword ptr [g_012e3f74], eax }
	__asm { mov dword ptr [g_012e3f78], 0 }
	__asm { mov dword ptr [g_012e3f7c], 0x3f800000 }
	__asm { mov dword ptr [g_012e3f80], 0 }
	__asm { mov dword ptr [g_012e3f84], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cb6c1: }
	__asm { mov eax, 0x12e3f70 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb900();
extern "C" void fn_007cd6f0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x007cb9c0
extern "C" __declspec(naked) void asm_007cb9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2101e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f2d }
	__asm { call fn_007cb900 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { test edi, edi }
	__asm { je L_007cba4c }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007cd6f0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_008bbcc0 }
	__asm { L_007cba4c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb900();
extern "C" void fn_007cd9e0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x007cba60
extern "C" __declspec(naked) void asm_007cba60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2101e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f2d }
	__asm { call fn_007cb900 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { test edi, edi }
	__asm { je L_007cbaec }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007cd9e0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_008bbcc0 }
	__asm { L_007cbaec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb900();
extern "C" void fn_007cdcd0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x007cbb00
extern "C" __declspec(naked) void asm_007cbb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2101e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f2d }
	__asm { call fn_007cb900 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { test edi, edi }
	__asm { je L_007cbb8c }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007cdcd0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_008bbcc0 }
	__asm { L_007cbb8c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb900();
extern "C" void fn_007cdfc0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x007cbba0
extern "C" __declspec(naked) void asm_007cbba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2101e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f2d }
	__asm { call fn_007cb900 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { test edi, edi }
	__asm { je L_007cbc2c }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007cdfc0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_008bbcc0 }
	__asm { L_007cbc2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb900();
extern "C" void fn_007ce2b0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x007cbc40
extern "C" __declspec(naked) void asm_007cbc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2101e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf12f2d }
	__asm { call fn_007cb900 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { test edi, edi }
	__asm { je L_007cbccc }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007ce2b0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_008bbcc0 }
	__asm { L_007cbccc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007cc580
extern "C" __declspec(naked) void asm_007cc580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp dword ptr [eax + 0x18], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { lea edx, [eax + 4] }
	__asm { jb L_007cc599 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_007cc599: }
	__asm { lea esi, [edx + ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, esi }
	__asm { jae L_007cc5bb }
	__asm { L_007cc5a3: }
	__asm { mov al, byte ptr [edx] }
	__asm { xor al, byte ptr [ecx] }
	__asm { shr dword ptr [ecx], 8 }
	__asm { movzx eax, al }
	__asm { inc edx }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor dword ptr [ecx], eax }
	__asm { cmp edx, esi }
	__asm { jb L_007cc5a3 }
	__asm { L_007cc5bb: }
	__asm { mov dl, byte ptr [ecx] }
	__asm { xor dl, byte ptr [edi + 0x18] }
	__asm { shr dword ptr [ecx], 8 }
	__asm { movzx eax, dl }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { xor al, byte ptr [edi + 0x19] }
	__asm { shr dword ptr [ecx], 8 }
	__asm { movzx eax, al }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { not eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131a2e8[];
extern "C" void fn_007cbce0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cd5f0
extern "C" __declspec(naked) void asm_007cd5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2118e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a2e8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { L_007cd614: }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { je L_007cd671 }
	__asm { mov esi, dword ptr [esi + 0x124] }
	__asm { test al, 1 }
	__asm { jne L_007cd655 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2e8], eax }
	__asm { mov ecx, 0x131a2f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cbce0 }
	__asm { push 0xddc160 }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2e8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007cd655: }
	__asm { cmp esi, 0x131a2f0 }
	__asm { jne L_007cd614 }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cd671: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd5f0();
// FUNCTION: ROBLOXSTUDIO 0x007cd690
extern "C" __declspec(naked) void asm_007cd690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_007cd6df }
	__asm { test esi, esi }
	__asm { jne L_007cd6df }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007cd6ce }
	__asm { push 0xdd }
	__asm { push 0xe58790 }
	__asm { push 0xe5889c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cd6df }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007cd6ce: }
	__asm { movzx eax, al }
	__asm { push 0xe588b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cd6df: }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, edi }
	__asm { call fn_007cd5f0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e048[];
extern "C" char g_0131e04c[];
extern "C" char g_0131e050[];
extern "C" char g_0131e054[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cfc10
extern "C" __declspec(naked) void asm_007cfc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131e048] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007cfc52 }
	__asm { or eax, 1 }
	__asm { push 0xddca90 }
	__asm { mov dword ptr [g_0131e048], eax }
	__asm { mov dword ptr [g_0131e04c], 0x12c6c78 }
	__asm { mov dword ptr [g_0131e054], 0x478720 }
	__asm { mov dword ptr [g_0131e050], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cfc52: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131e04c }
	__asm { jne L_007cfc6b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [eax] }
	__asm { mov eax, esi }
	__asm { fstp qword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cfc6b: }
	__asm { test ecx, ecx }
	__asm { je L_007cfc81 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007cfc81: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007cfc8f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [ecx] }
	__asm { L_007cfc8f: }
	__asm { mov dword ptr [esi], 0x131e04c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e47b8[];
extern "C" char g_012e47bc[];
extern "C" char g_012e47c0[];
extern "C" char g_012e47c4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cfca0
extern "C" __declspec(naked) void asm_007cfca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e47c4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007cfce2 }
	__asm { or eax, 1 }
	__asm { push 0xde4f90 }
	__asm { mov dword ptr [g_012e47c4], eax }
	__asm { mov dword ptr [g_012e47b8], 0x11efd48 }
	__asm { mov dword ptr [g_012e47c0], 0x40d810 }
	__asm { mov dword ptr [g_012e47bc], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cfce2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e47b8 }
	__asm { jne L_007cfcfb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cfcfb: }
	__asm { test ecx, ecx }
	__asm { je L_007cfd11 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007cfd11: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007cfd1f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007cfd1f: }
	__asm { mov dword ptr [esi], 0x12e47b8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b430[];
extern "C" char g_0131b434[];
extern "C" char g_0131b438[];
extern "C" char g_0131b43c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cfe20
extern "C" __declspec(naked) void asm_007cfe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131b430] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007cfe62 }
	__asm { or eax, 1 }
	__asm { push 0xddcaa0 }
	__asm { mov dword ptr [g_0131b430], eax }
	__asm { mov dword ptr [g_0131b434], 0x12c38a0 }
	__asm { mov dword ptr [g_0131b43c], 0x40d810 }
	__asm { mov dword ptr [g_0131b438], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cfe62: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131b434 }
	__asm { jne L_007cfe7b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cfe7b: }
	__asm { test ecx, ecx }
	__asm { je L_007cfe91 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007cfe91: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007cfe9f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007cfe9f: }
	__asm { mov dword ptr [esi], 0x131b434 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e058[];
extern "C" char g_0131e05c[];
extern "C" char g_0131e060[];
extern "C" char g_0131e064[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cfeb0
extern "C" __declspec(naked) void asm_007cfeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131e058] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007cfef2 }
	__asm { or eax, 1 }
	__asm { push 0xddca70 }
	__asm { mov dword ptr [g_0131e058], eax }
	__asm { mov dword ptr [g_0131e05c], 0x12c6c60 }
	__asm { mov dword ptr [g_0131e064], 0x40d810 }
	__asm { mov dword ptr [g_0131e060], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cfef2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131e05c }
	__asm { jne L_007cff0b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cff0b: }
	__asm { test ecx, ecx }
	__asm { je L_007cff21 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007cff21: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007cff2f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007cff2f: }
	__asm { mov dword ptr [esi], 0x131e05c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e47d8[];
extern "C" char g_012e47dc[];
extern "C" char g_012e47e0[];
extern "C" char g_012e47e4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d01e0
extern "C" __declspec(naked) void asm_007d01e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e47e4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d0222 }
	__asm { or eax, 1 }
	__asm { push 0xde4fe0 }
	__asm { mov dword ptr [g_012e47e4], eax }
	__asm { mov dword ptr [g_012e47d8], 0x11efd60 }
	__asm { mov dword ptr [g_012e47e0], 0x44d110 }
	__asm { mov dword ptr [g_012e47dc], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d0222: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e47d8 }
	__asm { jne L_007d0241 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d0241: }
	__asm { test ecx, ecx }
	__asm { je L_007d0257 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d0257: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d026b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_007d026b: }
	__asm { mov dword ptr [esi], 0x12e47d8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b1b4[];
extern "C" char g_0131b1b8[];
extern "C" char g_0131b1bc[];
extern "C" char g_0131b1c0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d0340
extern "C" __declspec(naked) void asm_007d0340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131b1c0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d0382 }
	__asm { or eax, 1 }
	__asm { push 0xddc6e0 }
	__asm { mov dword ptr [g_0131b1c0], eax }
	__asm { mov dword ptr [g_0131b1b4], 0x12c3744 }
	__asm { mov dword ptr [g_0131b1bc], 0x44d110 }
	__asm { mov dword ptr [g_0131b1b8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d0382: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131b1b4 }
	__asm { jne L_007d03a3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d03a3: }
	__asm { test ecx, ecx }
	__asm { je L_007d03b9 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d03b9: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d03cd }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_007d03cd: }
	__asm { mov dword ptr [esi], 0x131b1b4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4798[];
extern "C" char g_012e479c[];
extern "C" char g_012e47a0[];
extern "C" char g_012e47a4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d03e0
extern "C" __declspec(naked) void asm_007d03e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e47a4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d0422 }
	__asm { or eax, 1 }
	__asm { push 0xde4ff0 }
	__asm { mov dword ptr [g_012e47a4], eax }
	__asm { mov dword ptr [g_012e4798], 0x12c37d8 }
	__asm { mov dword ptr [g_012e47a0], 0x7d6b70 }
	__asm { mov dword ptr [g_012e479c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d0422: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e4798 }
	__asm { jne L_007d0441 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d0441: }
	__asm { test ecx, ecx }
	__asm { je L_007d0457 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d0457: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007d046b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { L_007d046b: }
	__asm { mov dword ptr [esi], 0x12e4798 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e47a8[];
extern "C" char g_012e47ac[];
extern "C" char g_012e47b0[];
extern "C" char g_012e47b4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d0480
extern "C" __declspec(naked) void asm_007d0480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e47b4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d04c2 }
	__asm { or eax, 1 }
	__asm { push 0xde5000 }
	__asm { mov dword ptr [g_012e47b4], eax }
	__asm { mov dword ptr [g_012e47a8], 0x12c37b8 }
	__asm { mov dword ptr [g_012e47b0], 0x40d810 }
	__asm { mov dword ptr [g_012e47ac], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d04c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e47a8 }
	__asm { jne L_007d04db }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d04db: }
	__asm { test ecx, ecx }
	__asm { je L_007d04f1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d04f1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007d04ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007d04ff: }
	__asm { mov dword ptr [esi], 0x12e47a8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131dfec[];
extern "C" char g_0131dff0[];
extern "C" char g_0131dff4[];
extern "C" char g_0131dff8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d05c0
extern "C" __declspec(naked) void asm_007d05c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131dfec] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d0602 }
	__asm { or eax, 1 }
	__asm { push 0xddc6f0 }
	__asm { mov dword ptr [g_0131dfec], eax }
	__asm { mov dword ptr [g_0131dff0], 0x12c3798 }
	__asm { mov dword ptr [g_0131dff8], 0x44d0f0 }
	__asm { mov dword ptr [g_0131dff4], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d0602: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131dff0 }
	__asm { jne L_007d0623 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d0623: }
	__asm { test ecx, ecx }
	__asm { je L_007d0639 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d0639: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d064f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { mov word ptr [edx + 4], ax }
	__asm { L_007d064f: }
	__asm { mov dword ptr [esi], 0x131dff0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4768[];
extern "C" char g_012e476c[];
extern "C" char g_012e4770[];
extern "C" char g_012e4774[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d0660
extern "C" __declspec(naked) void asm_007d0660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e4774] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d06a2 }
	__asm { or eax, 1 }
	__asm { push 0xde5010 }
	__asm { mov dword ptr [g_012e4774], eax }
	__asm { mov dword ptr [g_012e4768], 0x11efcf8 }
	__asm { mov dword ptr [g_012e4770], 0x40d810 }
	__asm { mov dword ptr [g_012e476c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d06a2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e4768 }
	__asm { jne L_007d06bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d06bb: }
	__asm { test ecx, ecx }
	__asm { je L_007d06d1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d06d1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007d06df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007d06df: }
	__asm { mov dword ptr [esi], 0x12e4768 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007d07a0
extern "C" __declspec(naked) void asm_007d07a0()
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
	__asm { je L_007d07c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d07ce }
	__asm { L_007d07c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d07ce: }
	__asm { cmp ecx, 0x12be4a4 }
	__asm { je L_007d0817 }
	__asm { test eax, eax }
	__asm { je L_007d07de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d07e3 }
	__asm { L_007d07de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d07e3: }
	__asm { push 0x12be4a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0817 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0817: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0830
extern "C" __declspec(naked) void asm_007d0830()
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
	__asm { je L_007d0859 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d085e }
	__asm { L_007d0859: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d085e: }
	__asm { cmp ecx, 0x12bdfc0 }
	__asm { je L_007d08a7 }
	__asm { test eax, eax }
	__asm { je L_007d086e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0873 }
	__asm { L_007d086e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0873: }
	__asm { push 0x12bdfc0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d08a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d08a7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d08c0
extern "C" __declspec(naked) void asm_007d08c0()
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
	__asm { je L_007d08e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d08ee }
	__asm { L_007d08e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d08ee: }
	__asm { cmp ecx, 0x12c6c78 }
	__asm { je L_007d0937 }
	__asm { test eax, eax }
	__asm { je L_007d08fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0903 }
	__asm { L_007d08fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0903: }
	__asm { push 0x12c6c78 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0937 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0937: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0950
extern "C" __declspec(naked) void asm_007d0950()
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
	__asm { je L_007d0979 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d097e }
	__asm { L_007d0979: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d097e: }
	__asm { cmp ecx, 0x11efd48 }
	__asm { je L_007d09c7 }
	__asm { test eax, eax }
	__asm { je L_007d098e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0993 }
	__asm { L_007d098e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0993: }
	__asm { push 0x11efd48 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d09c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d09c7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d09e0
extern "C" __declspec(naked) void asm_007d09e0()
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
	__asm { je L_007d0a09 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0a0e }
	__asm { L_007d0a09: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0a0e: }
	__asm { cmp ecx, 0x11efd80 }
	__asm { je L_007d0a57 }
	__asm { test eax, eax }
	__asm { je L_007d0a1e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0a23 }
	__asm { L_007d0a1e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0a23: }
	__asm { push 0x11efd80 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0a57 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0a57: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0a70
extern "C" __declspec(naked) void asm_007d0a70()
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
	__asm { je L_007d0a99 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0a9e }
	__asm { L_007d0a99: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0a9e: }
	__asm { cmp ecx, 0x12c38a0 }
	__asm { je L_007d0ae7 }
	__asm { test eax, eax }
	__asm { je L_007d0aae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0ab3 }
	__asm { L_007d0aae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0ab3: }
	__asm { push 0x12c38a0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0ae7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0ae7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0b00
extern "C" __declspec(naked) void asm_007d0b00()
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
	__asm { je L_007d0b29 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0b2e }
	__asm { L_007d0b29: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0b2e: }
	__asm { cmp ecx, 0x12bdba8 }
	__asm { je L_007d0b77 }
	__asm { test eax, eax }
	__asm { je L_007d0b3e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0b43 }
	__asm { L_007d0b3e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0b43: }
	__asm { push 0x12bdba8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0b77 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0b77: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0b90
extern "C" __declspec(naked) void asm_007d0b90()
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
	__asm { je L_007d0bb9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0bbe }
	__asm { L_007d0bb9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0bbe: }
	__asm { cmp ecx, 0x12c38c0 }
	__asm { je L_007d0c07 }
	__asm { test eax, eax }
	__asm { je L_007d0bce }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0bd3 }
	__asm { L_007d0bce: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0bd3: }
	__asm { push 0x12c38c0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0c07 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0c07: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0c20
extern "C" __declspec(naked) void asm_007d0c20()
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
	__asm { je L_007d0c49 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0c4e }
	__asm { L_007d0c49: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0c4e: }
	__asm { cmp ecx, 0x12c6c60 }
	__asm { je L_007d0c97 }
	__asm { test eax, eax }
	__asm { je L_007d0c5e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0c63 }
	__asm { L_007d0c5e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0c63: }
	__asm { push 0x12c6c60 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0c97 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0c97: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0cb0
extern "C" __declspec(naked) void asm_007d0cb0()
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
	__asm { je L_007d0cd9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0cde }
	__asm { L_007d0cd9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0cde: }
	__asm { cmp ecx, 0x12c3884 }
	__asm { je L_007d0d27 }
	__asm { test eax, eax }
	__asm { je L_007d0cee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0cf3 }
	__asm { L_007d0cee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0cf3: }
	__asm { push 0x12c3884 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0d27 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0d27: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0d40
extern "C" __declspec(naked) void asm_007d0d40()
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
	__asm { je L_007d0d69 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0d6e }
	__asm { L_007d0d69: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0d6e: }
	__asm { cmp ecx, 0x12c377c }
	__asm { je L_007d0db7 }
	__asm { test eax, eax }
	__asm { je L_007d0d7e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0d83 }
	__asm { L_007d0d7e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0d83: }
	__asm { push 0x12c377c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0db7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0db7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0dd0
extern "C" __declspec(naked) void asm_007d0dd0()
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
	__asm { je L_007d0df9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0dfe }
	__asm { L_007d0df9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0dfe: }
	__asm { cmp ecx, 0x12c375c }
	__asm { je L_007d0e47 }
	__asm { test eax, eax }
	__asm { je L_007d0e0e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0e13 }
	__asm { L_007d0e0e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0e13: }
	__asm { push 0x12c375c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0e47 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0e47: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0e60
extern "C" __declspec(naked) void asm_007d0e60()
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
	__asm { je L_007d0e89 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0e8e }
	__asm { L_007d0e89: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0e8e: }
	__asm { cmp ecx, 0x12c372c }
	__asm { je L_007d0ed7 }
	__asm { test eax, eax }
	__asm { je L_007d0e9e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0ea3 }
	__asm { L_007d0e9e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0ea3: }
	__asm { push 0x12c372c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0ed7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0ed7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0ef0
extern "C" __declspec(naked) void asm_007d0ef0()
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
	__asm { je L_007d0f19 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0f1e }
	__asm { L_007d0f19: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0f1e: }
	__asm { cmp ecx, 0x12c3744 }
	__asm { je L_007d0f67 }
	__asm { test eax, eax }
	__asm { je L_007d0f2e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0f33 }
	__asm { L_007d0f2e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0f33: }
	__asm { push 0x12c3744 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0f67 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0f67: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d0f80
extern "C" __declspec(naked) void asm_007d0f80()
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
	__asm { je L_007d0fa9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0fae }
	__asm { L_007d0fa9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0fae: }
	__asm { cmp ecx, 0x12c37d8 }
	__asm { je L_007d0ff7 }
	__asm { test eax, eax }
	__asm { je L_007d0fbe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d0fc3 }
	__asm { L_007d0fbe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d0fc3: }
	__asm { push 0x12c37d8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d0ff7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d0ff7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d1010
extern "C" __declspec(naked) void asm_007d1010()
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
	__asm { je L_007d1039 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d103e }
	__asm { L_007d1039: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d103e: }
	__asm { cmp ecx, 0x12c37b8 }
	__asm { je L_007d1087 }
	__asm { test eax, eax }
	__asm { je L_007d104e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1053 }
	__asm { L_007d104e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1053: }
	__asm { push 0x12c37b8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d1087 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d1087: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d10a0
extern "C" __declspec(naked) void asm_007d10a0()
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
	__asm { je L_007d10c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d10ce }
	__asm { L_007d10c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d10ce: }
	__asm { cmp ecx, 0x12c38e4 }
	__asm { je L_007d1117 }
	__asm { test eax, eax }
	__asm { je L_007d10de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d10e3 }
	__asm { L_007d10de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d10e3: }
	__asm { push 0x12c38e4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d1117 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d1117: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d1130
extern "C" __declspec(naked) void asm_007d1130()
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
	__asm { je L_007d1159 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d115e }
	__asm { L_007d1159: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d115e: }
	__asm { cmp ecx, 0x12c3798 }
	__asm { je L_007d11a7 }
	__asm { test eax, eax }
	__asm { je L_007d116e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1173 }
	__asm { L_007d116e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1173: }
	__asm { push 0x12c3798 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d11a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d11a7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d11c0
extern "C" __declspec(naked) void asm_007d11c0()
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
	__asm { je L_007d11e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d11ee }
	__asm { L_007d11e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d11ee: }
	__asm { cmp ecx, 0x11efcf8 }
	__asm { je L_007d1237 }
	__asm { test eax, eax }
	__asm { je L_007d11fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1203 }
	__asm { L_007d11fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1203: }
	__asm { push 0x11efcf8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d1237 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d1237: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d1250
extern "C" __declspec(naked) void asm_007d1250()
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
	__asm { je L_007d1279 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d127e }
	__asm { L_007d1279: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d127e: }
	__asm { cmp ecx, 0x12bdfcc }
	__asm { je L_007d12c7 }
	__asm { test eax, eax }
	__asm { je L_007d128e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1293 }
	__asm { L_007d128e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1293: }
	__asm { push 0x12bdfcc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d12c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d12c7: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d1330
extern "C" __declspec(naked) void asm_007d1330()
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
	__asm { je L_007d1359 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d135e }
	__asm { L_007d1359: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d135e: }
	__asm { cmp ecx, 0x11efd14 }
	__asm { je L_007d13a7 }
	__asm { test eax, eax }
	__asm { je L_007d136e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1373 }
	__asm { L_007d136e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1373: }
	__asm { push 0x11efd14 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d13a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d13a7: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007d13c0
extern "C" __declspec(naked) void asm_007d13c0()
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
	__asm { je L_007d13e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d13ee }
	__asm { L_007d13e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d13ee: }
	__asm { cmp ecx, 0x12bdfc0 }
	__asm { je L_007d1437 }
	__asm { test eax, eax }
	__asm { je L_007d13fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1403 }
	__asm { L_007d13fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1403: }
	__asm { push 0x12bdfc0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d1437 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d1437: }
	__asm { fld dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007d1450
extern "C" __declspec(naked) void asm_007d1450()
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
	__asm { je L_007d1479 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d147e }
	__asm { L_007d1479: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d147e: }
	__asm { cmp ecx, 0x12c6c78 }
	__asm { je L_007d14c7 }
	__asm { test eax, eax }
	__asm { je L_007d148e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1493 }
	__asm { L_007d148e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1493: }
	__asm { push 0x12c6c78 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d14c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d14c7: }
	__asm { fld qword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007d1720
extern "C" __declspec(naked) void asm_007d1720()
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
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d1749 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d174e }
	__asm { L_007d1749: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d174e: }
	__asm { cmp ecx, 0x12c38e4 }
	__asm { je L_007d1797 }
	__asm { test eax, eax }
	__asm { je L_007d175e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d1763 }
	__asm { L_007d175e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d1763: }
	__asm { push 0x12c38e4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d1797 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d1797: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
extern "C" void fn_008bff30();
// FUNCTION: ROBLOXSTUDIO 0x007d17c0
extern "C" __declspec(naked) void asm_007d17c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39358 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d17f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d17f5 }
	__asm { L_007d17f0: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d17f5: }
	__asm { cmp ecx, 0x12c32a4 }
	__asm { je L_007d183e }
	__asm { test eax, eax }
	__asm { je L_007d1805 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d180a }
	__asm { L_007d1805: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d180a: }
	__asm { push 0x12c32a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d183e }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d183e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_008bff30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e44a8[];
extern "C" char g_012e44c4[];
extern "C" void fn_007ce720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5390
extern "C" __declspec(naked) void asm_007d5390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2169e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e44c4] }
	__asm { test al, 1 }
	__asm { jne L_007d53e8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e44c4], eax }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { mov ecx, 0x12e44a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ce720 }
	__asm { push 0xde5020 }
	__asm { mov dword ptr [g_012e44a8], 0xe58990 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d53e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e44a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e44c8[];
extern "C" char g_012e44e4[];
extern "C" void fn_007ce7f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5400
extern "C" __declspec(naked) void asm_007d5400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd216be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e44e4] }
	__asm { test al, 1 }
	__asm { jne L_007d5458 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e44e4], eax }
	__asm { push 0 }
	__asm { push 0xe5899c }
	__asm { mov ecx, 0x12e44c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ce7f0 }
	__asm { push 0xde5030 }
	__asm { mov dword ptr [g_012e44c8], 0xe58998 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5458: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e44c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4508[];
extern "C" char g_012e4524[];
extern "C" void fn_007ce8c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5470
extern "C" __declspec(naked) void asm_007d5470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2123e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4524] }
	__asm { test al, 1 }
	__asm { jne L_007d54c8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4524], eax }
	__asm { push 0 }
	__asm { push 0xe589b4 }
	__asm { mov ecx, 0x12e4508 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ce8c0 }
	__asm { push 0xde5040 }
	__asm { mov dword ptr [g_012e4508], 0xe589b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d54c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4508 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4528[];
extern "C" char g_012e4544[];
extern "C" void fn_007ce990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d54e0
extern "C" __declspec(naked) void asm_007d54e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd216de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4544] }
	__asm { test al, 1 }
	__asm { jne L_007d5538 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4544], eax }
	__asm { push 0 }
	__asm { push 0x1004fd0 }
	__asm { mov ecx, 0x12e4528 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ce990 }
	__asm { push 0xde5050 }
	__asm { mov dword ptr [g_012e4528], 0xe589c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5538: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4528 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4568[];
extern "C" char g_012e4584[];
extern "C" void fn_007ceb10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5550
extern "C" __declspec(naked) void asm_007d5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd216fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4584] }
	__asm { test al, 1 }
	__asm { jne L_007d55a8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4584], eax }
	__asm { push 0 }
	__asm { push 0x1004ea0 }
	__asm { mov ecx, 0x12e4568 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ceb10 }
	__asm { push 0xde5060 }
	__asm { mov dword ptr [g_012e4568], 0xe589d8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d55a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4568 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e45e8[];
extern "C" char g_012e4604[];
extern "C" void fn_007cebe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d55c0
extern "C" __declspec(naked) void asm_007d55c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2171e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4604] }
	__asm { test al, 1 }
	__asm { jne L_007d5618 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4604], eax }
	__asm { push 0 }
	__asm { push 0x100a914 }
	__asm { mov ecx, 0x12e45e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cebe0 }
	__asm { push 0xde5070 }
	__asm { mov dword ptr [g_012e45e8], 0xe589f8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5618: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e45e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4488[];
extern "C" char g_012e44a4[];
extern "C" void fn_007cecb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5630
extern "C" __declspec(naked) void asm_007d5630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2173e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e44a4] }
	__asm { test al, 1 }
	__asm { jne L_007d5688 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e44a4], eax }
	__asm { push 0 }
	__asm { push 0xe58984 }
	__asm { mov ecx, 0x12e4488 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cecb0 }
	__asm { push 0xde5080 }
	__asm { mov dword ptr [g_012e4488], 0xe58980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5688: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4488 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4448[];
extern "C" char g_012e4464[];
extern "C" void fn_007ced80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d56a0
extern "C" __declspec(naked) void asm_007d56a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2175e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4464] }
	__asm { test al, 1 }
	__asm { jne L_007d56f8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4464], eax }
	__asm { push 0 }
	__asm { push 0x10082cc }
	__asm { mov ecx, 0x12e4448 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ced80 }
	__asm { push 0xde5090 }
	__asm { mov dword ptr [g_012e4448], 0xe58970 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d56f8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4448 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4468[];
extern "C" char g_012e4484[];
extern "C" void fn_007cee50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5710
extern "C" __declspec(naked) void asm_007d5710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2177e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4484] }
	__asm { test al, 1 }
	__asm { jne L_007d5768 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4484], eax }
	__asm { push 0 }
	__asm { push 0xe54b6c }
	__asm { mov ecx, 0x12e4468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cee50 }
	__asm { push 0xde50a0 }
	__asm { mov dword ptr [g_012e4468], 0xe58978 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5768: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4468 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4748[];
extern "C" char g_012e4764[];
extern "C" void fn_007ceff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5780
extern "C" __declspec(naked) void asm_007d5780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2179e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4764] }
	__asm { test al, 1 }
	__asm { jne L_007d57d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4764], eax }
	__asm { push 0 }
	__asm { push 0xe58bd4 }
	__asm { mov ecx, 0x12e4748 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007ceff0 }
	__asm { push 0xde50c0 }
	__asm { mov dword ptr [g_012e4748], 0xe58bd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d57d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4748 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4708[];
extern "C" char g_012e4724[];
extern "C" void fn_007cf0c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d57f0
extern "C" __declspec(naked) void asm_007d57f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd217be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4724] }
	__asm { test al, 1 }
	__asm { jne L_007d584d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4724], eax }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { push 0x1032f84 }
	__asm { mov ecx, 0x12e4708 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf0c0 }
	__asm { push 0xde50d0 }
	__asm { mov dword ptr [g_012e4708], 0xe58ac4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d584d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4708 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e46c8[];
extern "C" char g_012e46e4[];
extern "C" void fn_007cf180();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5860
extern "C" __declspec(naked) void asm_007d5860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd217de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e46e4] }
	__asm { test al, 1 }
	__asm { jne L_007d58b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e46e4], eax }
	__asm { push 0 }
	__asm { push 0x1032f90 }
	__asm { mov ecx, 0x12e46c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf180 }
	__asm { push 0xde50e0 }
	__asm { mov dword ptr [g_012e46c8], 0xe58ab4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d58b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e46c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4548[];
extern "C" char g_012e4564[];
extern "C" void fn_007cf250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d58d0
extern "C" __declspec(naked) void asm_007d58d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd217fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4564] }
	__asm { test al, 1 }
	__asm { jne L_007d5928 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4564], eax }
	__asm { push 0 }
	__asm { push 0xe589cc }
	__asm { mov ecx, 0x12e4548 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf250 }
	__asm { push 0xde50f0 }
	__asm { mov dword ptr [g_012e4548], 0xe589c8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5928: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4548 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4688[];
extern "C" char g_012e46a4[];
extern "C" void fn_007cf320();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5940
extern "C" __declspec(naked) void asm_007d5940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2181e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e46a4] }
	__asm { test al, 1 }
	__asm { jne L_007d5998 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e46a4], eax }
	__asm { push 0 }
	__asm { push 0xe58a98 }
	__asm { mov ecx, 0x12e4688 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf320 }
	__asm { push 0xde5100 }
	__asm { mov dword ptr [g_012e4688], 0xe58a94 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5998: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4688 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4728[];
extern "C" char g_012e4744[];
extern "C" void fn_007cf4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d59b0
extern "C" __declspec(naked) void asm_007d59b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2183e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4744] }
	__asm { test al, 1 }
	__asm { jne L_007d5a08 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4744], eax }
	__asm { push 0 }
	__asm { push 0xe58ad0 }
	__asm { mov ecx, 0x12e4728 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf4c0 }
	__asm { push 0xde5120 }
	__asm { mov dword ptr [g_012e4728], 0xe58acc }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5a08: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4728 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4668[];
extern "C" char g_012e4684[];
extern "C" void fn_007cf590();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5a20
extern "C" __declspec(naked) void asm_007d5a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2185e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4684] }
	__asm { test al, 1 }
	__asm { jne L_007d5a78 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4684], eax }
	__asm { push 0 }
	__asm { push 0x1032fb0 }
	__asm { mov ecx, 0x12e4668 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf590 }
	__asm { push 0xde5130 }
	__asm { mov dword ptr [g_012e4668], 0xe58a8c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5a78: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4668 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4648[];
extern "C" char g_012e4664[];
extern "C" void fn_007cf660();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5a90
extern "C" __declspec(naked) void asm_007d5a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2187e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4664] }
	__asm { test al, 1 }
	__asm { jne L_007d5ae8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4664], eax }
	__asm { push 0 }
	__asm { push 0x1032fc4 }
	__asm { mov ecx, 0x12e4648 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf660 }
	__asm { push 0xde5140 }
	__asm { mov dword ptr [g_012e4648], 0xe58a84 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5ae8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4648 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e45a8[];
extern "C" char g_012e45c4[];
extern "C" void fn_007cf730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5b00
extern "C" __declspec(naked) void asm_007d5b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2189e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e45c4] }
	__asm { test al, 1 }
	__asm { jne L_007d5b58 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e45c4], eax }
	__asm { push 0 }
	__asm { push 0x1032f6c }
	__asm { mov ecx, 0x12e45a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf730 }
	__asm { push 0xde5150 }
	__asm { mov dword ptr [g_012e45a8], 0xe589e8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5b58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e45a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4608[];
extern "C" char g_012e4624[];
extern "C" void fn_007cf800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5b70
extern "C" __declspec(naked) void asm_007d5b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd218be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4624] }
	__asm { test al, 1 }
	__asm { jne L_007d5bc8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4624], eax }
	__asm { push 0 }
	__asm { push 0x1032f74 }
	__asm { mov ecx, 0x12e4608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf800 }
	__asm { push 0xde5160 }
	__asm { mov dword ptr [g_012e4608], 0xe58a74 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5bc8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4608 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4588[];
extern "C" char g_012e45a4[];
extern "C" void fn_007cf8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5be0
extern "C" __declspec(naked) void asm_007d5be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd218de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e45a4] }
	__asm { test al, 1 }
	__asm { jne L_007d5c38 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e45a4], eax }
	__asm { push 0 }
	__asm { push 0x1032f54 }
	__asm { mov ecx, 0x12e4588 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf8d0 }
	__asm { push 0xde5170 }
	__asm { mov dword ptr [g_012e4588], 0xe589e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5c38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4588 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4628[];
extern "C" char g_012e4644[];
extern "C" void fn_007cf9a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5c50
extern "C" __declspec(naked) void asm_007d5c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd218fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4644] }
	__asm { test al, 1 }
	__asm { jne L_007d5ca8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4644], eax }
	__asm { push 0 }
	__asm { push 0x1032f5c }
	__asm { mov ecx, 0x12e4628 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf9a0 }
	__asm { push 0xde5180 }
	__asm { mov dword ptr [g_012e4628], 0xe58a7c }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5ca8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e4628 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e45c8[];
extern "C" char g_012e45e4[];
extern "C" void fn_007cfa70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5cc0
extern "C" __declspec(naked) void asm_007d5cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2191e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e45e4] }
	__asm { test al, 1 }
	__asm { jne L_007d5d18 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e45e4], eax }
	__asm { push 0 }
	__asm { push 0x10127ec }
	__asm { mov ecx, 0x12e45c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cfa70 }
	__asm { push 0xde5190 }
	__asm { mov dword ptr [g_012e45c8], 0xe589f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5d18: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e45c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e44e8[];
extern "C" char g_012e4504[];
extern "C" void fn_007cfb40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d5d30
extern "C" __declspec(naked) void asm_007d5d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd213ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4504] }
	__asm { test al, 1 }
	__asm { jne L_007d5d88 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4504], eax }
	__asm { push 0 }
	__asm { push 0x1007e30 }
	__asm { mov ecx, 0x12e44e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cfb40 }
	__asm { push 0xde51a0 }
	__asm { mov dword ptr [g_012e44e8], 0xe589a8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d5d88: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e44e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e46a8[];
extern "C" char g_012e46c4[];
extern "C" void fn_007cef20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d6030
extern "C" __declspec(naked) void asm_007d6030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2193e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e46c4] }
	__asm { test al, 1 }
	__asm { jne L_007d6088 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e46c4], eax }
	__asm { push 0 }
	__asm { push 0xe58aa8 }
	__asm { mov ecx, 0x12e46a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cef20 }
	__asm { push 0xde50b0 }
	__asm { mov dword ptr [g_012e46a8], 0xe58aa4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d6088: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e46a8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e46e8[];
extern "C" char g_012e4704[];
extern "C" void fn_007cf3f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d60a0
extern "C" __declspec(naked) void asm_007d60a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2195e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e4704] }
	__asm { test al, 1 }
	__asm { jne L_007d60f8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4704], eax }
	__asm { push 0 }
	__asm { push 0x1032fc0 }
	__asm { mov ecx, 0x12e46e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cf3f0 }
	__asm { push 0xde5110 }
	__asm { mov dword ptr [g_012e46e8], 0xe58abc }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d60f8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12e46e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011efbf0[];
extern "C" char g_011efc54[];
extern "C" char g_011efc58[];
extern "C" char g_011efcbc[];
extern "C" char g_011efcc0[];
extern "C" char g_011efce4[];
extern "C" char g_011efce8[];
extern "C" char g_011efcec[];
// FUNCTION: ROBLOXSTUDIO 0x007d69d0
extern "C" __declspec(naked) void asm_007d69d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [g_011efce8], ecx }
	__asm { jne L_007d69e7 }
	__asm { mov eax, 0x3e }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d69e7: }
	__asm { cmp dword ptr [g_011efcec], ecx }
	__asm { jne L_007d69f8 }
	__asm { mov eax, 0x3f }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d69f8: }
	__asm { mov eax, dword ptr [g_011efbf0] }
	__asm { cmp eax, ecx }
	__asm { jg L_007d6a11 }
	__asm { cmp dword ptr [g_011efc54], ecx }
	__asm { jl L_007d6a11 }
	__asm { sub ecx, eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d6a11: }
	__asm { mov eax, dword ptr [g_011efc58] }
	__asm { cmp eax, ecx }
	__asm { jg L_007d6a2b }
	__asm { cmp dword ptr [g_011efcbc], ecx }
	__asm { jl L_007d6a2b }
	__asm { sub ecx, eax }
	__asm { lea eax, [ecx + 0x1a] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d6a2b: }
	__asm { mov eax, dword ptr [g_011efcc0] }
	__asm { cmp eax, ecx }
	__asm { jg L_007d6a45 }
	__asm { cmp dword ptr [g_011efce4], ecx }
	__asm { jl L_007d6a45 }
	__asm { sub ecx, eax }
	__asm { lea eax, [ecx + 0x34] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d6a45: }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0x3d }
	__asm { sete al }
	__asm { add eax, -2 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007d6a60
extern "C" __declspec(naked) void asm_007d6a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007d6aaa }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_007d6aaa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x007d6b00
extern "C" __declspec(naked) void asm_007d6b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a871 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_007d6b5f }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { pop esi }
	__asm { L_007d6b5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004081e0();
extern "C" void fn_00412c00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d6b90
extern "C" __declspec(naked) void asm_007d6b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_007d6c03 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_004081e0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_007d6be8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007d6bcf }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d6bcf: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_007d6be8: }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_007d6bfb }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d6bfb: }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d6c03: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d6c50
extern "C" __declspec(naked) void asm_007d6c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_007d6ca7 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_007d6ca7: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_007d6cb8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d6cb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d7010
extern "C" __declspec(naked) void asm_007d7010()
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
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00405b90 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007d7077 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d7077: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e106f8[];
extern "C" void fn_007938b0();
extern "C" void fn_00794580();
// FUNCTION: ROBLOXSTUDIO 0x007d7390
extern "C" __declspec(naked) void asm_007d7390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { call fn_00794580 }
	__asm { mov esi, eax }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { lea eax, [esi + 1] }
	__asm { add eax, ecx }
	__asm { je L_007d73b6 }
	__asm { lea edi, [eax + 1] }
	__asm { jmp L_007d73b8 }
	__asm { L_007d73b6: }
	__asm { xor edi, edi }
	__asm { L_007d73b8: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e106f8] }
	__asm { push edi }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { shr ecx, 3 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007938b0 }
	__asm { call fn_00794580 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_007d73ee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d73ee: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00793050();
extern "C" void fn_00793430();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d74c0
extern "C" __declspec(naked) void asm_007d74c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7535 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], al }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00793050 }
	__asm { test al, al }
	__asm { je L_007d7524 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7524: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_007d7535 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d7535: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007930d0();
extern "C" void fn_00793430();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d7850
extern "C" __declspec(naked) void asm_007d7850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd675e0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d78d4 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007930d0 }
	__asm { test al, al }
	__asm { je L_007d78c3 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d78c3: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007d78d4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d78d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792ed0();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7bd0
extern "C" __declspec(naked) void asm_007d7bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7c41 }
	__asm { push edi }
	__asm { push dword ptr [g_012e0d94] }
	__asm { mov ecx, esi }
	__asm { call fn_00792cc0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_007d7c40 }
	__asm { push dword ptr [g_012e0d98] }
	__asm { mov ecx, esi }
	__asm { call fn_00792cc0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00792ed0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7c40: }
	__asm { pop edi }
	__asm { L_007d7c41: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792e10();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7c50
extern "C" __declspec(naked) void asm_007d7c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7cbf }
	__asm { push esi }
	__asm { push dword ptr [g_012e0d94] }
	__asm { mov ecx, edi }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0d98] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { mov word ptr [ebp + 0xc], ax }
	__asm { movzx eax, word ptr [ebp - 8] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp + 0xe], ax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { L_007d7cbf: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d7ee0
extern "C" __declspec(naked) void asm_007d7ee0()
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
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_007d7f47 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d7f47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00792b60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007d8220
extern "C" __declspec(naked) void asm_007d8220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21a23 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00792b60 }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007d8288 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jmp L_007d828a }
	__asm { L_007d8288: }
	__asm { xor esi, esi }
	__asm { L_007d828a: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { mov dword ptr [edi + 4], 3 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_007d82a7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d82a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d8e60
extern "C" __declspec(naked) void asm_007d8e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b30 }
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
	__asm { je L_007d8eb8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b6b8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d8eba }
	__asm { L_007d8eb8: }
	__asm { xor eax, eax }
	__asm { L_007d8eba: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d8ef0
extern "C" __declspec(naked) void asm_007d8ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b40 }
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
	__asm { je L_007d8f48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b6d0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d8f4a }
	__asm { L_007d8f48: }
	__asm { xor eax, eax }
	__asm { L_007d8f4a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d8f80
extern "C" __declspec(naked) void asm_007d8f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b50 }
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
	__asm { je L_007d8fd8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b5e0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d8fda }
	__asm { L_007d8fd8: }
	__asm { xor eax, eax }
	__asm { L_007d8fda: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9010
extern "C" __declspec(naked) void asm_007d9010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b60 }
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
	__asm { je L_007d9068 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b5f8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d906a }
	__asm { L_007d9068: }
	__asm { xor eax, eax }
	__asm { L_007d906a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d90a0
extern "C" __declspec(naked) void asm_007d90a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b70 }
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
	__asm { je L_007d90f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b628 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d90fa }
	__asm { L_007d90f8: }
	__asm { xor eax, eax }
	__asm { L_007d90fa: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9130
extern "C" __declspec(naked) void asm_007d9130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b80 }
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
	__asm { je L_007d9188 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b6a0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d918a }
	__asm { L_007d9188: }
	__asm { xor eax, eax }
	__asm { L_007d918a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d91c0
extern "C" __declspec(naked) void asm_007d91c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21b90 }
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
	__asm { je L_007d9218 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b688 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d921a }
	__asm { L_007d9218: }
	__asm { xor eax, eax }
	__asm { L_007d921a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9250
extern "C" __declspec(naked) void asm_007d9250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21ba0 }
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
	__asm { je L_007d92a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b670 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d92aa }
	__asm { L_007d92a8: }
	__asm { xor eax, eax }
	__asm { L_007d92aa: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d92e0
extern "C" __declspec(naked) void asm_007d92e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21bb0 }
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
	__asm { je L_007d9338 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b658 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d933a }
	__asm { L_007d9338: }
	__asm { xor eax, eax }
	__asm { L_007d933a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9370
extern "C" __declspec(naked) void asm_007d9370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21bc0 }
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
	__asm { je L_007d93c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b640 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d93ca }
	__asm { L_007d93c8: }
	__asm { xor eax, eax }
	__asm { L_007d93ca: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9400
extern "C" __declspec(naked) void asm_007d9400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21bd0 }
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
	__asm { je L_007d9458 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b610 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d945a }
	__asm { L_007d9458: }
	__asm { xor eax, eax }
	__asm { L_007d945a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9490
extern "C" __declspec(naked) void asm_007d9490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21be0 }
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
	__asm { je L_007d94e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b5b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d94ea }
	__asm { L_007d94e8: }
	__asm { xor eax, eax }
	__asm { L_007d94ea: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9520
extern "C" __declspec(naked) void asm_007d9520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21bf0 }
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
	__asm { je L_007d9578 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b568 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d957a }
	__asm { L_007d9578: }
	__asm { xor eax, eax }
	__asm { L_007d957a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d95b0
extern "C" __declspec(naked) void asm_007d95b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c00 }
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
	__asm { je L_007d9608 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b490 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d960a }
	__asm { L_007d9608: }
	__asm { xor eax, eax }
	__asm { L_007d960a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9640
extern "C" __declspec(naked) void asm_007d9640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c10 }
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
	__asm { je L_007d9698 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b4f0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d969a }
	__asm { L_007d9698: }
	__asm { xor eax, eax }
	__asm { L_007d969a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d96d0
extern "C" __declspec(naked) void asm_007d96d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c20 }
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
	__asm { je L_007d9728 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b178 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d972a }
	__asm { L_007d9728: }
	__asm { xor eax, eax }
	__asm { L_007d972a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9760
extern "C" __declspec(naked) void asm_007d9760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c30 }
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
	__asm { je L_007d97b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5ae48 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d97ba }
	__asm { L_007d97b8: }
	__asm { xor eax, eax }
	__asm { L_007d97ba: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d97f0
extern "C" __declspec(naked) void asm_007d97f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c40 }
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
	__asm { je L_007d9848 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5ae60 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d984a }
	__asm { L_007d9848: }
	__asm { xor eax, eax }
	__asm { L_007d984a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9880
extern "C" __declspec(naked) void asm_007d9880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c50 }
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
	__asm { je L_007d98d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5ae18 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d98da }
	__asm { L_007d98d8: }
	__asm { xor eax, eax }
	__asm { L_007d98da: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9910
extern "C" __declspec(naked) void asm_007d9910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c60 }
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
	__asm { je L_007d9968 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b520 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d996a }
	__asm { L_007d9968: }
	__asm { xor eax, eax }
	__asm { L_007d996a: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d99a0
extern "C" __declspec(naked) void asm_007d99a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c70 }
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
	__asm { je L_007d99f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b508 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d99fa }
	__asm { L_007d99f8: }
	__asm { xor eax, eax }
	__asm { L_007d99fa: }
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
// FUNCTION: ROBLOXSTUDIO 0x007d9a30
extern "C" __declspec(naked) void asm_007d9a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21c80 }
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
	__asm { je L_007d9a88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b130 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_007d9a8a }
	__asm { L_007d9a88: }
	__asm { xor eax, eax }
	__asm { L_007d9a8a: }
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
