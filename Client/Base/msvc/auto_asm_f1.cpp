// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_00e123e8[];
// FUNCTION: ROBLOXSTUDIO 0x00403b80
extern "C" __declspec(naked) void asm_00403b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd701e2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e123e8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11070] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e122f4[];
extern "C" char g_00e123e8[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00403bf0
extern "C" __declspec(naked) void asm_00403bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70239 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e123e8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e122f4[];
extern "C" void fn_00403b80();
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00403c70
extern "C" __declspec(naked) void asm_00403c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70322 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00405b90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { call fn_00403b80 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1106c[];
extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00403f20
extern "C" __declspec(naked) void asm_00403f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd701e2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e1106c] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11070] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1106c[];
extern "C" char g_00e11074[];
extern "C" char g_00e11110[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00403f90
extern "C" __declspec(naked) void asm_00403f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70669 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1106c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11074] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11074[];
extern "C" void fn_00403f20();
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00404000
extern "C" __declspec(naked) void asm_00404000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd702f2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { call fn_00403f20 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11074] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e122f4[];
extern "C" void fn_0040b6f0();
// FUNCTION: ROBLOXSTUDIO 0x00405aa0
extern "C" __declspec(naked) void asm_00405aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd70689 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { call fn_0040b6f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e122f4[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00405b10
extern "C" __declspec(naked) void asm_00405b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70239 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e122f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11074[];
extern "C" void fn_0040b8c0();
// FUNCTION: ROBLOXSTUDIO 0x00405cf0
extern "C" __declspec(naked) void asm_00405cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70669 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0040b8c0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11074] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11074[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x00405d50
extern "C" __declspec(naked) void asm_00405d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70219 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11074] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040eab0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0040e8f0
extern "C" __declspec(naked) void asm_0040e8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70539 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { add ecx, -0x48 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf138c8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040eab0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x5c], 0xe32f28 }
	__asm { mov dword ptr [ebp - 0x30], 0xe32f34 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179aac }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe32f3c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0040e5f0();
extern "C" void fn_0040e6a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0040ebf0
extern "C" __declspec(naked) void asm_0040ebf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd6fbc8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x94 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 0x54] }
	__asm { push eax }
	__asm { call fn_0040e6a0 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xac], 0 }
	__asm { call fn_0040e5f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [esp + 4] }
	__asm { push 0x1179aac }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0040f410();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0040f250
extern "C" __declspec(naked) void asm_0040f250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70539 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { add ecx, -0x48 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf138c8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0040f410 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x5c], 0xe18364 }
	__asm { mov dword ptr [ebp - 0x30], 0xe18370 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1179ba8 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe18378 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0040ef50();
extern "C" void fn_0040f000();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0040f650
extern "C" __declspec(naked) void asm_0040f650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd6fbe8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x94 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 0x54] }
	__asm { push eax }
	__asm { call fn_0040f000 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xac], 0 }
	__asm { call fn_0040ef50 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [esp + 4] }
	__asm { push 0x1179ba8 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_00e131a0[];
// FUNCTION: ROBLOXSTUDIO 0x0040f6b0
extern "C" __declspec(naked) void asm_0040f6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0x10], edx }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebx + 0x10], edi }
	__asm { mov dword ptr [ebx + 0xc], esi }
	__asm { mov dword ptr [ebx + 0x28], 0xf }
	__asm { mov dword ptr [ebx + 0x24], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [ebx + 0x14], 0 }
	__asm { pop esi }
	__asm { mov dword ptr [ebx], 0xe18260 }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0040ff80
extern "C" __declspec(naked) void asm_0040ff80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe19b90 }
	__asm { mov dword ptr [esi + 0xc], 0xe19b9c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040ff60();
extern "C" void fn_0040ff80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00410540
extern "C" __declspec(naked) void asm_00410540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fb88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_0040ff80 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040ff60 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push 0x1179c2c }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410660();
// FUNCTION: ROBLOXSTUDIO 0x00410720
extern "C" __declspec(naked) void asm_00410720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd70448 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esp], 0xe33a40 }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { lea eax, [esp] }
	__asm { push eax }
	__asm { push 3 }
	__asm { add ecx, 0x3c }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call fn_00410660 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1051c[];
// FUNCTION: ROBLOXSTUDIO 0x00411af0
extern "C" __declspec(naked) void asm_00411af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe4fd54 }
	__asm { mov dword ptr [esi + 0xc], 0xe4fd60 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00411ad0();
extern "C" void fn_00411af0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00412260
extern "C" __declspec(naked) void asm_00412260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fba8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00411af0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00411ad0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push 0x1179d04 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10ffc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0041f280
extern "C" __declspec(naked) void asm_0041f280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd716bc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004217d0
extern "C" __declspec(naked) void asm_004217d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe1c680 }
	__asm { mov dword ptr [esi + 0xc], 0xe1c68c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004217b0();
extern "C" void fn_004217d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00421d90
extern "C" __declspec(naked) void asm_00421d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70de8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_004217d0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004217b0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push 0x1179dd8 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
// FUNCTION: ROBLOXSTUDIO 0x00422110
extern "C" __declspec(naked) void asm_00422110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00424eb0();
// FUNCTION: ROBLOXSTUDIO 0x00424730
extern "C" __declspec(naked) void asm_00424730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d44b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00424eb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00425080();
// FUNCTION: ROBLOXSTUDIO 0x00424a30
extern "C" __declspec(naked) void asm_00424a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d44b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00425080 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x00435250
extern "C" __declspec(naked) void asm_00435250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d5c }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x10079c8 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x004352a0
extern "C" __declspec(naked) void asm_004352a0()
{
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x10079dc }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { ret }
}

extern "C" char g_00e12920[];
extern "C" char g_00e12974[];
// FUNCTION: ROBLOXSTUDIO 0x00435ba0
extern "C" __declspec(naked) void asm_00435ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73319 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12974] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12920[];
extern "C" char g_00e12974[];
// FUNCTION: ROBLOXSTUDIO 0x0043dd40
extern "C" __declspec(naked) void asm_0043dd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73319 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12974] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e12aa8[];
extern "C" void fn_00442e10();
extern "C" void fn_0044a2b0();
// FUNCTION: ROBLOXSTUDIO 0x00441e90
extern "C" __declspec(naked) void asm_00441e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov ebx, ecx }
	__asm { call fn_0044a2b0 }
	__asm { push 0x1009988 }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x10099f0 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call dword ptr [g_00e11098] }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { add esp, 0x10 }
	__asm { call dword ptr [g_00e12aa8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_0044a2b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00442e10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x004475c0
extern "C" __declspec(naked) void asm_004475c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007e30 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x100a5c0 }
	__asm { push dword ptr [ecx + 0x14] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x0044b6b0
extern "C" __declspec(naked) void asm_0044b6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
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
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110f4[];
extern "C" char g_00e110f8[];
// FUNCTION: ROBLOXSTUDIO 0x0044f7a0
extern "C" __declspec(naked) void asm_0044f7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7913a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push -1 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e110f8] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e110f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12690[];
extern "C" char g_00e129e0[];
// FUNCTION: ROBLOXSTUDIO 0x004526c0
extern "C" __declspec(naked) void asm_004526c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setg al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e129e0] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" void fn_00457090();
// FUNCTION: ROBLOXSTUDIO 0x00456ee0
extern "C" __declspec(naked) void asm_00456ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd767d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00457090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" void fn_00457090();
// FUNCTION: ROBLOXSTUDIO 0x00456fb0
extern "C" __declspec(naked) void asm_00456fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd767d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00457090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e120bc[];
extern "C" char g_00e12794[];
extern "C" void fn_00458550();
// FUNCTION: ROBLOXSTUDIO 0x00457da0
extern "C" __declspec(naked) void asm_00457da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76dc9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e120bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { call fn_00458550 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12794] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0045f8a0
extern "C" __declspec(naked) void asm_0045f8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe3cb1c }
	__asm { mov dword ptr [esi + 0xc], 0xe3cb28 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f880();
extern "C" void fn_0045f8a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0045fe60
extern "C" __declspec(naked) void asm_0045fe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd772b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_0045f8a0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045f880 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push 0x1179f40 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00463e00
extern "C" __declspec(naked) void asm_00463e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { lea eax, [ecx + 0x64] }
	__asm { ret }
}

extern "C" char g_00e110e8[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_004685c0();
// FUNCTION: ROBLOXSTUDIO 0x00468550
extern "C" __declspec(naked) void asm_00468550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x100f3b4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push ecx }
	__asm { push esp }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110e8] }
	__asm { mov ecx, esi }
	__asm { call fn_004685c0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e1237c[];
// FUNCTION: ROBLOXSTUDIO 0x00470410
extern "C" __declspec(naked) void asm_00470410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x10106b8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1237c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004769c0();
// FUNCTION: ROBLOXSTUDIO 0x00471990
extern "C" __declspec(naked) void asm_00471990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74f18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ecx + 0x7c] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x7c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x10], bl }
	__asm { mov byte ptr [esi], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004769c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi], bl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1106c[];
extern "C" char g_00e11074[];
extern "C" void fn_0040b8c0();
// FUNCTION: ROBLOXSTUDIO 0x00473090
extern "C" __declspec(naked) void asm_00473090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79253 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_0040b8c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e1106c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11074] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00478980
extern "C" __declspec(naked) void asm_00478980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov bx, word ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { mov word ptr [edx + 0xc], bx }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110f4[];
extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x00478c30
extern "C" __declspec(naked) void asm_00478c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7913a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e110f4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" char g_00e110d8[];
extern "C" char g_00e110e4[];
extern "C" void fn_004794c0();
// FUNCTION: ROBLOXSTUDIO 0x00479620
extern "C" __declspec(naked) void asm_00479620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79e03 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_004794c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110d8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048c0b0();
extern "C" void fn_00903d20();
extern "C" void fn_00905770();
// FUNCTION: ROBLOXSTUDIO 0x0047bde0
extern "C" __declspec(naked) void asm_0047bde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b0d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00903d20 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe57b10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00905770 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048c0b0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00418980();
extern "C" void fn_00489c60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00487890
extern "C" __declspec(naked) void asm_00487890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a180 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00489c60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00418980 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" void fn_0042ba00();
extern "C" void fn_0048eee0();
// FUNCTION: ROBLOXSTUDIO 0x0048c8b0
extern "C" __declspec(naked) void asm_0048c8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { call fn_0048eee0 }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_0042ba00 }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x00495960
extern "C" __declspec(naked) void asm_00495960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b9d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004959d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c48[];
extern "C" char g_00e10c50[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_0131eb7c[];
// FUNCTION: ROBLOXSTUDIO 0x0049a4b0
extern "C" __declspec(naked) void asm_0049a4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bff2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov ecx, 0x131eb74 }
	__asm { mov dword ptr [ebp - 0x14], 0x131eb74 }
	__asm { call dword ptr [g_00e10c50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x10140a8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [g_0131eb7c], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, 0x131eb74 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10c48] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131eb74 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004ac8d0();
extern "C" void fn_004b1650();
// FUNCTION: ROBLOXSTUDIO 0x004ac860
extern "C" __declspec(naked) void asm_004ac860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x1c }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push 0x131c5d4 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x10], 0x774920 }
	__asm { mov dword ptr [esp + 0x14], 0x1003b2c }
	__asm { mov dword ptr [esp + 0x18], 0x1016720 }
	__asm { mov dword ptr [esp + 0x1c], 0x1017998 }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { call fn_004b1650 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004ac8d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b1410();
// FUNCTION: ROBLOXSTUDIO 0x004ae780
extern "C" __declspec(naked) void asm_004ae780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d44b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1410 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b1570();
// FUNCTION: ROBLOXSTUDIO 0x004ae870
extern "C" __declspec(naked) void asm_004ae870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7d44b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b1ca0();
extern "C" void fn_004b1d10();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004af8e0
extern "C" __declspec(naked) void asm_004af8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7da78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_004b1ca0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1d10 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push 0x117a0a0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b1ca0
extern "C" __declspec(naked) void asm_004b1ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xefb39c }
	__asm { mov dword ptr [edi + 0x14], 0xefb3a8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b5ef0
extern "C" __declspec(naked) void asm_004b5ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe75ff4 }
	__asm { mov dword ptr [esi + 0xc], 0xe76000 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b5ed0();
extern "C" void fn_004b5ef0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004b64a0
extern "C" __declspec(naked) void asm_004b64a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7da98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_004b5ef0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b5ed0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push 0x1179fc4 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" void fn_004140a0();
// FUNCTION: ROBLOXSTUDIO 0x004b6ed0
extern "C" __declspec(naked) void asm_004b6ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7f738 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { lea ecx, [esp + 4] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [esp], 0x1029570 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_004140a0 }
	__asm { call fn_004140a0 }
	__asm { call fn_004140a0 }
	__asm { call fn_004140a0 }
	__asm { call fn_004140a0 }
	__asm { lea ecx, [esp] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_004f2520();
// FUNCTION: ROBLOXSTUDIO 0x004ed000
extern "C" __declspec(naked) void asm_004ed000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd788c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x1319f6c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004f2520 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ad8[];
extern "C" char g_00e110ec[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c30[];
// FUNCTION: ROBLOXSTUDIO 0x004ee770
extern "C" __declspec(naked) void asm_004ee770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd837a2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x1014bd4 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ad8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11c30] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110ec] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12f00[];
// FUNCTION: ROBLOXSTUDIO 0x004f5a20
extern "C" __declspec(naked) void asm_004f5a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd904f9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12f00] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11f80[];
extern "C" void fn_004f61c0();
// FUNCTION: ROBLOXSTUDIO 0x004f8910
extern "C" __declspec(naked) void asm_004f8910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77aa9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e11f80] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0x1021e40 }
	__asm { mov dword ptr [esi + 0x18], edx }
	__asm { call fn_004f61c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110ec[];
extern "C" char g_00e110f0[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c30[];
// FUNCTION: ROBLOXSTUDIO 0x00522f60
extern "C" __declspec(naked) void asm_00522f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cd12 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x102aaa8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110f0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11c30] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110ec[];
extern "C" char g_00e110f0[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11c30[];
// FUNCTION: ROBLOXSTUDIO 0x00527430
extern "C" __declspec(naked) void asm_00527430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8cd12 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0x102b658 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110f0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11c30] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110ec] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1105c[];
extern "C" char g_00e125bc[];
// FUNCTION: ROBLOXSTUDIO 0x00534fe0
extern "C" __declspec(naked) void asm_00534fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8e9a7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { call dword ptr [g_00e125bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0x102cc2c }
	__asm { mov dword ptr [edi + 8], 0x102cc0c }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov eax, dword ptr [g_00e1105c] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov ecx, eax }
}

extern "C" char g_00e109e8[];
extern "C" char g_00e11110[];
extern "C" char g_00e12734[];
// FUNCTION: ROBLOXSTUDIO 0x0053cdd0
extern "C" __declspec(naked) void asm_0053cdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e109e8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12734] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00421e70();
extern "C" void fn_006c0860();
extern "C" void fn_006c0d90();
// FUNCTION: ROBLOXSTUDIO 0x0053fff0
extern "C" __declspec(naked) void asm_0053fff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7f168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ecx + 0x220], 1 }
	__asm { mov dword ptr [esp + 0xc], esp }
	__asm { push eax }
	__asm { add ecx, 8 }
	__asm { call fn_00421e70 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call fn_006c0860 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00421e70();
extern "C" void fn_006c0860();
extern "C" void fn_006c0d90();
// FUNCTION: ROBLOXSTUDIO 0x00540470
extern "C" __declspec(naked) void asm_00540470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd901e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ecx + 0x218], 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { add ecx, 8 }
	__asm { call fn_00421e70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006c0860 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11898[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
// FUNCTION: ROBLOXSTUDIO 0x00552780
extern "C" __declspec(naked) void asm_00552780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { add ecx, -0x14 }
	__asm { call dword ptr [g_00e1291c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11898] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12928[];
// FUNCTION: ROBLOXSTUDIO 0x005527e0
extern "C" __declspec(naked) void asm_005527e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91943 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { add ecx, -0x14 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e1291c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12928] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e129a0[];
// FUNCTION: ROBLOXSTUDIO 0x00552850
extern "C" __declspec(naked) void asm_00552850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91999 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { add ecx, -0x14 }
	__asm { call dword ptr [g_00e1291c] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e129a0] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12bc4[];
extern "C" void fn_0056bce0();
// FUNCTION: ROBLOXSTUDIO 0x00568330
extern "C" __declspec(naked) void asm_00568330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e12bc4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { push edi }
	__asm { call esi }
	__asm { call fn_0056bce0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xc8] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b6d60();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
// FUNCTION: ROBLOXSTUDIO 0x0056da90
extern "C" __declspec(naked) void asm_0056da90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88348 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00846f90 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b6d60 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e1237c[];
// FUNCTION: ROBLOXSTUDIO 0x005834b0
extern "C" __declspec(naked) void asm_005834b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd96212 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1237c] }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1237c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00584c10
extern "C" __declspec(naked) void asm_00584c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00586900
extern "C" __declspec(naked) void asm_00586900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd88e39 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0978 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00590350
extern "C" __declspec(naked) void asm_00590350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0x68] }
	__asm { lea eax, [esi + 1] }
	__asm { cdq }
	__asm { mov ecx, 3 }
	__asm { idiv ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { push edx }
	__asm { call dword ptr [edi + 0x68] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00594ee0
extern "C" __declspec(naked) void asm_00594ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov edx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x10] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push ebx }
	__asm { push 0x4a424f43 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00595d60
extern "C" __declspec(naked) void asm_00595d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov edx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x34] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push ebx }
	__asm { push 0x50414853 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e100dc[];
extern "C" char g_00e100e0[];
extern "C" char g_00e100fc[];
extern "C" char g_00e10504[];
extern "C" char g_0131a1e4[];
// FUNCTION: ROBLOXSTUDIO 0x005b2e60
extern "C" __declspec(naked) void asm_005b2e60()
{
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a1e4], eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e100dc] }
	__asm { mov eax, dword ptr [g_0131a1e4] }
	__asm { add eax, 0x18 }
	__asm { push eax }
	__asm { call dword ptr [g_00e100e0] }
	__asm { call dword ptr [g_00e100fc] }
	__asm { mov ecx, dword ptr [g_0131a1e4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [g_0131a1e4] }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov eax, dword ptr [g_0131a1e4] }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov eax, 0x131a1e4 }
	__asm { ret }
}

extern "C" void fn_005c6e90();
// FUNCTION: ROBLOXSTUDIO 0x005c7130
extern "C" __declspec(naked) void asm_005c7130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esi + eax*4 + 0x10], 0 }
	__asm { dec dword ptr [edi + 0x180] }
	__asm { mov eax, dword ptr [edi + 0x180] }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [edi + eax*4 + 0x170] }
	__asm { mov dword ptr [esi + edx*4], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { inc eax }
	__asm { mov ecx, dword ptr [esi + eax*4 - 4] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { call fn_005c6e90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005db6e0();
extern "C" void fn_005db7f0();
extern "C" void fn_005db9b0();
// FUNCTION: ROBLOXSTUDIO 0x005db960
extern "C" __declspec(naked) void asm_005db960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_005db7f0 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call fn_005db6e0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov al, byte ptr [esi + 0xc] }
	__asm { mov byte ptr [edi + 0xc], al }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x28] }
	__asm { call fn_005db9b0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e02c0
extern "C" __declspec(naked) void asm_005e02c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 0x89 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0xe4] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x10c] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x10c] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x10c] }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e23c0
extern "C" __declspec(naked) void asm_005e23c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x28] }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005eb960();
// FUNCTION: ROBLOXSTUDIO 0x005e3b80
extern "C" __declspec(naked) void asm_005e3b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005eb960 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov dword ptr [esi], 0xe19cd0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 7 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_005df3c0();
extern "C" void fn_005eba70();
// FUNCTION: ROBLOXSTUDIO 0x005e4e80
extern "C" __declspec(naked) void asm_005e4e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e7f2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1a9c0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { call fn_005df3c0 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call dword ptr [ecx + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eba70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005df3d0();
extern "C" void fn_005ebbb0();
// FUNCTION: ROBLOXSTUDIO 0x005e5410
extern "C" __declspec(naked) void asm_005e5410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e84c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1aa08 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { call fn_005df3d0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebbb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005df3b0();
extern "C" void fn_0060f6f0();
// FUNCTION: ROBLOXSTUDIO 0x005e5ce0
extern "C" __declspec(naked) void asm_005e5ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e940 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1ada0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { call fn_005df3b0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f6f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e56e0();
extern "C" void fn_005e79b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e7950
extern "C" __declspec(naked) void asm_005e7950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eaf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_005e79b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00609ff0();
// FUNCTION: ROBLOXSTUDIO 0x006076a0
extern "C" __declspec(naked) void asm_006076a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { push dword ptr [eax + 0x2c] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x14] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00609ff0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e56e0();
extern "C" void fn_00609100();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00609060
extern "C" __declspec(naked) void asm_00609060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f040 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00609100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005eb9b0();
// FUNCTION: ROBLOXSTUDIO 0x00609830
extern "C" __declspec(naked) void asm_00609830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_005eb9b0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov dword ptr [esi], 0xe307e0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0060c000();
extern "C" void fn_0060c2f0();
extern "C" void fn_0060f6a0();
// FUNCTION: ROBLOXSTUDIO 0x0060ae10
extern "C" __declspec(naked) void asm_0060ae10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f188 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0060f6a0 }
	__asm { push 0x8b31 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe31860 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { call fn_0060c000 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { call fn_0060c2f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012da340[];
extern "C" void fn_0060f690();
// FUNCTION: ROBLOXSTUDIO 0x0060ae90
extern "C" __declspec(naked) void asm_0060ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f19a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe31860 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_012da340] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f690 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x006192f0
extern "C" __declspec(naked) void asm_006192f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { sub esp, 0x24 }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { fldz }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00619c90();
extern "C" void fn_00693510();
// FUNCTION: ROBLOXSTUDIO 0x00619890
extern "C" __declspec(naked) void asm_00619890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f9ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe336c8 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x1ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { call fn_00693510 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00619c90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e56e0();
extern "C" void fn_0061c8a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061c7f0
extern "C" __declspec(naked) void asm_0061c7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fb70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_0061c8a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00624c80
extern "C" __declspec(naked) void asm_00624c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0065f4b0
extern "C" __declspec(naked) void asm_0065f4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65a09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006604e0();
extern "C" void fn_00666af0();
// FUNCTION: ROBLOXSTUDIO 0x00663ff0
extern "C" __declspec(naked) void asm_00663ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { push eax }
	__asm { shr ecx, 6 }
	__asm { mov eax, ecx }
	__asm { shl eax, 4 }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [eax*2 + 0x13067f8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00666af0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006604e0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006197a0();
extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x00673ed0
extern "C" __declspec(naked) void asm_00673ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12360 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_006197a0 }
	__asm { mov dword ptr [esi], 0xe3b410 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067aaf0
extern "C" __declspec(naked) void asm_0067aaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe3b8b4 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b8c0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067ab50
extern "C" __declspec(naked) void asm_0067ab50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe3b924 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b930 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067abb0
extern "C" __declspec(naked) void asm_0067abb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe3b8ec }
	__asm { mov dword ptr [esi + 0xc], 0xe3b8f8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067ac10
extern "C" __declspec(naked) void asm_0067ac10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe3b95c }
	__asm { mov dword ptr [esi + 0xc], 0xe3b968 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067ac70
extern "C" __declspec(naked) void asm_0067ac70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe3b87c }
	__asm { mov dword ptr [esi + 0xc], 0xe3b888 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067aa50();
extern "C" void fn_0067aaf0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067b130
extern "C" __declspec(naked) void asm_0067b130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12898 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_0067aaf0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067aa50 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x10f9038 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0067aa70();
extern "C" void fn_0067ab50();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067b180
extern "C" __declspec(naked) void asm_0067b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd128b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_0067ab50 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067aa70 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x10f9148 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0067aa90();
extern "C" void fn_0067abb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067b1d0
extern "C" __declspec(naked) void asm_0067b1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd128d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_0067abb0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067aa90 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x10f90c0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0067aab0();
extern "C" void fn_0067ac10();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067b220
extern "C" __declspec(naked) void asm_0067b220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd128f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_0067ac10 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067aab0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x10f91d0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0067aad0();
extern "C" void fn_0067ac70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067b270
extern "C" __declspec(naked) void asm_0067b270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_0067ac70 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067aad0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x10f8fd4 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0061c020();
extern "C" void fn_00674450();
extern "C" void fn_00693540();
// FUNCTION: ROBLOXSTUDIO 0x0067f7b0
extern "C" __declspec(naked) void asm_0067f7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { fld dword ptr [esi + 4] }
	__asm { lea edx, [esi + 4] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [edx + 4] }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x10], 0x7f7fffff }
	__asm { push dword ptr [eax + 0x1b0] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00693540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ecx + 0x1b4] }
	__asm { call fn_0061c020 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { call fn_00674450 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00680110
extern "C" __declspec(naked) void asm_00680110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [edx + 0x1a8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 0x1a8], 0x3f800000 }
	__asm { fstp dword ptr [edi] }
	__asm { push 0x1a0 }
	__asm { fld dword ptr [edx + 0x1b8] }
	__asm { mov dword ptr [edx + 0x1b8], 0x3f800000 }
	__asm { fstp dword ptr [edi + 4] }
	__asm { add edx, 0x3c }
	__asm { fld dword ptr [edx + 0x18c] }
	__asm { mov dword ptr [edx + 0x18c], 0x3f800000 }
	__asm { fstp dword ptr [edi + 8] }
	__asm { push edx }
	__asm { fld dword ptr [edx + 0x19c] }
	__asm { mov dword ptr [edx + 0x19c], 0x3f800000 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { fstp dword ptr [edi + 0xc] }
	__asm { call dword ptr [esi + 8] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00680180
extern "C" __declspec(naked) void asm_00680180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { fld dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esi + 0x1a8] }
	__asm { push 0x1a0 }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x1b8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x1c8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { fstp dword ptr [esi + 0x1d8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { call dword ptr [edx + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006984c0
extern "C" __declspec(naked) void asm_006984c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov al, byte ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov byte ptr [ecx + 0x20], al }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x006a07b0
extern "C" __declspec(naked) void asm_006a07b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1472e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x006aded0
extern "C" __declspec(naked) void asm_006aded0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd156ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 0x19 }
	__asm { push 8 }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf676b }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b4090();
// FUNCTION: ROBLOXSTUDIO 0x006b0880
extern "C" __declspec(naked) void asm_006b0880()
{
	__asm { push -1 }
	__asm { push 0xd1583b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov dword ptr [esi], 0xe42ef8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { call edx }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { call fn_006b4090 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b29d0();
extern "C" void fn_006b3dc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b0d30
extern "C" __declspec(naked) void asm_006b0d30()
{
	__asm { push -1 }
	__asm { push 0xd158d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 8], esi }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x18], 1 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_006b29d0 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { call fn_006b3dc0 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_006b3e20();
// FUNCTION: ROBLOXSTUDIO 0x006b25a0
extern "C" __declspec(naked) void asm_006b25a0()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006b3e20 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x28], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x30], edx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov dword ptr [esi + 0x38], edx }
	__asm { mov dword ptr [esi + 0x3c], ecx }
	__asm { mov dword ptr [esi + 0x40], ecx }
	__asm { mov dword ptr [esi + 0x44], ecx }
	__asm { mov dword ptr [esi + 0x48], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006bbd10
extern "C" __declspec(naked) void asm_006bbd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { lea esi, [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 0x1c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bd8f0();
extern "C" void fn_00971be0();
// FUNCTION: ROBLOXSTUDIO 0x006bf460
extern "C" __declspec(naked) void asm_006bf460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { call fn_006bd8f0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push eax }
	__asm { add eax, -0xc }
	__asm { push eax }
	__asm { call fn_00971be0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { add dword ptr [esi + 4], -0xc }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10190[];
extern "C" void fn_006c12d0();
extern "C" void fn_00cfb726();
// FUNCTION: ROBLOXSTUDIO 0x006c1070
extern "C" __declspec(naked) void asm_006c1070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00cfb726 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10190] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006c12d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_00c34a10();
// FUNCTION: ROBLOXSTUDIO 0x006c5300
extern "C" __declspec(naked) void asm_006c5300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27e18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c34a10 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101b8[];
extern "C" void fn_006b98c0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006c5e90
extern "C" __declspec(naked) void asm_006c5e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x98 }
	__asm { push 0x90 }
	__asm { lea eax, [ebp - 0x94] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x98], 0x94 }
	__asm { call dword ptr [g_00e101b8] }
	__asm { push dword ptr [ebp - 0x8c] }
	__asm { push dword ptr [ebp - 0x90] }
	__asm { push dword ptr [ebp - 0x94] }
	__asm { push dword ptr [ebp - 0x98] }
	__asm { push 0xe4601c }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b98c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006cefd0
extern "C" __declspec(naked) void asm_006cefd0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx], 0xe461dc }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006cf370
extern "C" __declspec(naked) void asm_006cf370()
{
	__asm { push ecx }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { mov dword ptr [esp], 0 }
	__asm { fld dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax], 0xe461dc }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [eax + 0x14] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [eax + 0x18] }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00701aa0();
// FUNCTION: ROBLOXSTUDIO 0x006d6670
extern "C" __declspec(naked) void asm_006d6670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { sub esp, 0x40 }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { sub esp, 0x48 }
	__asm { mov dword ptr [esp + 0x84], 0 }
	__asm { fstp qword ptr [esp + 0x40] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp qword ptr [esp + 0x38] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp qword ptr [esp + 0x30] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp qword ptr [esp + 0x28] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe465cc }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00701aa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006e1f80
extern "C" __declspec(naked) void asm_006e1f80()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { fld dword ptr [edx] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [edx + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [edx + 0x1c] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [edx + 0x20] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { mov dword ptr [ecx + 0x34], 0 }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { mov dword ptr [ecx + 0x3c], 0x3f800000 }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006e2f30
extern "C" __declspec(naked) void asm_006e2f30()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { fld dword ptr [ecx] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { fstp dword ptr [eax] }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { fld dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { fstp dword ptr [eax + 0x14] }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { fld dword ptr [ecx + 8] }
	__asm { mov dword ptr [eax + 0x1c], 0 }
	__asm { fstp dword ptr [eax + 0x28] }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov dword ptr [eax + 0x24], 0 }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { mov dword ptr [eax + 0x30], 0 }
	__asm { mov dword ptr [eax + 0x34], 0 }
	__asm { mov dword ptr [eax + 0x38], 0 }
	__asm { mov dword ptr [eax + 0x3c], 0x3f800000 }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006f0c30
extern "C" __declspec(naked) void asm_006f0c30()
{
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" char g_00e10534[];
extern "C" char g_00e10610[];
extern "C" void fn_00701aa0();
// FUNCTION: ROBLOXSTUDIO 0x006f15b0
extern "C" __declspec(naked) void asm_006f15b0()
{
	__asm { sub esp, 0xc }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { call dword ptr [g_00e10534] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10610] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { inc ecx }
	__asm { push ecx }
	__asm { add eax, 0x76c }
	__asm { push eax }
	__asm { push 0xe473e0 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { call fn_00701aa0 }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { add esp, 0x28 }
	__asm { ret }
}

extern "C" void fn_00702370();
extern "C" void fn_00706ac0();
extern "C" void fn_007091c0();
// FUNCTION: ROBLOXSTUDIO 0x00705020
extern "C" __declspec(naked) void asm_00705020()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00702370 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" void fn_00702370();
extern "C" void fn_00706ac0();
extern "C" void fn_007091c0();
// FUNCTION: ROBLOXSTUDIO 0x00705070
extern "C" __declspec(naked) void asm_00705070()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00702370 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00702370 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00706ac0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_007091c0 }
	__asm { pop esi }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00708630
extern "C" __declspec(naked) void asm_00708630()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 0x1c], 0xf }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov byte ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x34], 0xf }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { mov byte ptr [ecx + 0x20], 0 }
	__asm { mov dword ptr [ecx + 0x38], 1 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov dword ptr [ecx + 0x50], 0xf }
	__asm { mov dword ptr [ecx + 0x4c], 0 }
	__asm { mov byte ptr [ecx + 0x3c], 0 }
	__asm { mov dword ptr [ecx + 0x54], 0 }
	__asm { mov dword ptr [ecx + 0x58], 0 }
	__asm { mov eax, ecx }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0071ab90
extern "C" __declspec(naked) void asm_0071ab90()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0076ddc0
extern "C" __declspec(naked) void asm_0076ddc0()
{
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx], 0xe4d6d4 }
	__asm { mov dword ptr [ecx + 4], 1 }
	__asm { mov dword ptr [ecx + 8], 2 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 1 }
	__asm { mov dword ptr [ecx + 0x1c], 0x16 }
	__asm { mov dword ptr [ecx + 0x20], 0x32 }
	__asm { mov word ptr [ecx + 0x24], 0 }
	__asm { mov byte ptr [ecx + 0x26], 1 }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ecx + 0x2c], eax }
	__asm { mov dword ptr [ecx + 0x30], 0x2580320 }
	__asm { mov dword ptr [ecx + 0x34], 0x2580320 }
	__asm { mov word ptr [ecx + 0x38], ax }
	__asm { mov byte ptr [ecx + 0x3a], al }
	__asm { mov dword ptr [ecx + 0x3c], 0x2000000 }
	__asm { mov dword ptr [ecx + 0x40], 0x2000000 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x0076ea90
extern "C" __declspec(naked) void asm_0076ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 0x118], eax }
	__asm { mov dword ptr [ecx + 0x11c], eax }
	__asm { mov dword ptr [ecx + 0x120], eax }
	__asm { mov dword ptr [ecx + 0x124], eax }
	__asm { mov dword ptr [ecx + 0x128], eax }
	__asm { mov dword ptr [ecx + 0x12c], eax }
	__asm { mov byte ptr [ecx + 0x138], al }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea esi, [ecx + 0x130] }
	__asm { call fn_006c54a0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00771130();
// FUNCTION: ROBLOXSTUDIO 0x00771480
extern "C" __declspec(naked) void asm_00771480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], 0x3f800000 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00771130 }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00771810();
// FUNCTION: ROBLOXSTUDIO 0x00771530
extern "C" __declspec(naked) void asm_00771530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 8], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00771810 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00771810();
// FUNCTION: ROBLOXSTUDIO 0x007717c0
extern "C" __declspec(naked) void asm_007717c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], 0x3f800000 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00771810 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004115f0();
extern "C" void fn_0049a010();
// FUNCTION: ROBLOXSTUDIO 0x00772e00
extern "C" __declspec(naked) void asm_00772e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1aa1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x49a000 }
	__asm { push 0x131c410 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0049a010 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e106f0[];
extern "C" char g_00e4e968[];
extern "C" void fn_00460390();
extern "C" void fn_00779b50();
// FUNCTION: ROBLOXSTUDIO 0x00778fa0
extern "C" __declspec(naked) void asm_00778fa0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00779b50 }
	__asm { mov eax, 0x50 }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x1228], 2 }
	__asm { mov dword ptr [esi + 0x122c], 4 }
	__asm { mov word ptr [esi + 0x1226], ax }
	__asm { push dword ptr [g_00e4e968] }
	__asm { push 0x21 }
	__asm { push esi }
	__asm { call dword ptr [g_00e106f0] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00779b50
extern "C" __declspec(naked) void asm_00779b50()
{
	__asm { xor eax, eax }
	__asm { mov word ptr [ecx + 0x1226], ax }
	__asm { mov dword ptr [ecx + 0x1228], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x122c], eax }
	__asm { mov dword ptr [ecx + 0x1230], eax }
	__asm { mov dword ptr [ecx + 0x1234], eax }
	__asm { mov dword ptr [ecx + 0x123c], eax }
	__asm { mov dword ptr [ecx + 0x1238], eax }
	__asm { mov dword ptr [ecx + 0x1240], eax }
	__asm { mov byte ptr [ecx], al }
	__asm { mov byte ptr [ecx + 0x21], al }
	__asm { mov byte ptr [ecx + 0x122], al }
	__asm { mov byte ptr [ecx + 0x1a3], al }
	__asm { mov byte ptr [ecx + 0x224], al }
	__asm { mov byte ptr [ecx + 0xa25], al }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0077d4a0
extern "C" __declspec(naked) void asm_0077d4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov al, byte ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov byte ptr [esi], al }
	__asm { mov eax, dword ptr [edx] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { push 0 }
	__asm { add edx, 4 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0077d510
extern "C" __declspec(naked) void asm_0077d510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { push 0 }
	__asm { add edx, 8 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781fa0();
// FUNCTION: ROBLOXSTUDIO 0x0077d5d0
extern "C" __declspec(naked) void asm_0077d5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { mov word ptr [ebx + 4], ax }
	__asm { movzx ecx, byte ptr [ecx + 6] }
	__asm { push edi }
	__asm { mov byte ptr [ebx + 6], cl }
	__asm { push esi }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00781fa0 }
	__asm { movzx ecx, byte ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 0x18], cl }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
