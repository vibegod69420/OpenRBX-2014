// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x004d2cb0
extern "C" __declspec(naked) void asm_004d2cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x101a464 }
	__asm { push esi }
	__asm { mov ecx, 0x12bff48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11a34[];
// FUNCTION: ROBLOXSTUDIO 0x004d34b0
extern "C" __declspec(naked) void asm_004d34b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11a34] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123dc[];
// FUNCTION: ROBLOXSTUDIO 0x004d35c0
extern "C" __declspec(naked) void asm_004d35c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e123dc] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x004e9990
extern "C" __declspec(naked) void asm_004e9990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0xf1e42c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x004f3790
extern "C" __declspec(naked) void asm_004f3790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1011cb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10b04[];
// FUNCTION: ROBLOXSTUDIO 0x004f4330
extern "C" __declspec(naked) void asm_004f4330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10b04] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x40c], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c04[];
extern "C" void fn_004f5e80();
// FUNCTION: ROBLOXSTUDIO 0x004f6010
extern "C" __declspec(naked) void asm_004f6010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004f5e80 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10c04] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x004f6060
extern "C" __declspec(naked) void asm_004f6060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x34] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x004f6090
extern "C" __declspec(naked) void asm_004f6090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x10219ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00500400
extern "C" __declspec(naked) void asm_00500400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12bfda0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00500430
extern "C" __declspec(naked) void asm_00500430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x1023cf0 }
	__asm { push esi }
	__asm { mov ecx, 0x12bfdb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00504ff0
extern "C" __declspec(naked) void asm_00504ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12bffb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x0050efd0
extern "C" __declspec(naked) void asm_0050efd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x48] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x0050f000
extern "C" __declspec(naked) void asm_0050f000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x4c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00513ed0();
// FUNCTION: ROBLOXSTUDIO 0x00513e00
extern "C" __declspec(naked) void asm_00513e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00513ed0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x005146c0
extern "C" __declspec(naked) void asm_005146c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x005146f0
extern "C" __declspec(naked) void asm_005146f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10d7c[];
// FUNCTION: ROBLOXSTUDIO 0x00515260
extern "C" __declspec(naked) void asm_00515260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10d7c] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00515360
extern "C" __declspec(naked) void asm_00515360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12c0a58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00517390
extern "C" __declspec(naked) void asm_00517390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x102af54 }
	__asm { push esi }
	__asm { mov ecx, 0x12c0ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005322e0();
// FUNCTION: ROBLOXSTUDIO 0x005292c0
extern "C" __declspec(naked) void asm_005292c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005322e0 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041b680();
// FUNCTION: ROBLOXSTUDIO 0x005293b0
extern "C" __declspec(naked) void asm_005293b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0041b680 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00531400();
// FUNCTION: ROBLOXSTUDIO 0x0052fe10
extern "C" __declspec(naked) void asm_0052fe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 4 }
	__asm { call fn_00531400 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00891b30();
extern "C" void fn_008e9950();
// FUNCTION: ROBLOXSTUDIO 0x00532760
extern "C" __declspec(naked) void asm_00532760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { call fn_00891b30 }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_008e9950 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00534470
extern "C" __declspec(naked) void asm_00534470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12c0ae8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x00535f90
extern "C" __declspec(naked) void asm_00535f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0xa8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0053f180();
// FUNCTION: ROBLOXSTUDIO 0x0053e980
extern "C" __declspec(naked) void asm_0053e980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0053f180 }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038180[];
extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00540800
extern "C" __declspec(naked) void asm_00540800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038180] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038180[];
extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00540830
extern "C" __declspec(naked) void asm_00540830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038180] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005448b0();
extern "C" void fn_00544ca0();
// FUNCTION: ROBLOXSTUDIO 0x00540920
extern "C" __declspec(naked) void asm_00540920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005448b0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00544ca0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x00546470
extern "C" __declspec(naked) void asm_00546470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x005464a0
extern "C" __declspec(naked) void asm_005464a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x30] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e116b4[];
extern "C" char g_00e11a04[];
// FUNCTION: ROBLOXSTUDIO 0x0054e2f0
extern "C" __declspec(naked) void asm_0054e2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e116b4] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { sub eax, dword ptr [edx + 0x14] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e11a04] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0056fa20
extern "C" __declspec(naked) void asm_0056fa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { lea eax, [ecx + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00576300
extern "C" __declspec(naked) void asm_00576300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12c09f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1106c[];
extern "C" void fn_004140a0();
// FUNCTION: ROBLOXSTUDIO 0x0057a250
extern "C" __declspec(naked) void asm_0057a250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004140a0 }
	__asm { lea ecx, [eax + 0x80] }
	__asm { call dword ptr [g_00e1106c] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1106c[];
extern "C" void fn_004140a0();
// FUNCTION: ROBLOXSTUDIO 0x0057a280
extern "C" __declspec(naked) void asm_0057a280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004140a0 }
	__asm { lea ecx, [eax + 0x84] }
	__asm { call dword ptr [g_00e1106c] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0057db40();
extern "C" void fn_00824ff0();
// FUNCTION: ROBLOXSTUDIO 0x0057d5f0
extern "C" __declspec(naked) void asm_0057d5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00824ff0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0057db40 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x0057dfb0
extern "C" __declspec(naked) void asm_0057dfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { lea eax, [esi + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00584d90();
// FUNCTION: ROBLOXSTUDIO 0x00584c90
extern "C" __declspec(naked) void asm_00584c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { sub esp, 8 }
	__asm { add ecx, 0x40 }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00584d90 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00591590
extern "C" __declspec(naked) void asm_00591590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0x10 }
	__asm { mov ecx, dword ptr [eax - 0x10] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [edx + 0x64] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059d7d0
extern "C" __declspec(naked) void asm_0059d7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov dword ptr [ecx], 0x10369f4 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005c7100
extern "C" __declspec(naked) void asm_005c7100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { dec dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [ecx + 0x180] }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { mov dword ptr [ecx + edx*4 + 0x170], eax }
	__asm { inc dword ptr [ecx + 0x180] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ddd80();
extern "C" void fn_006b5ab0();
// FUNCTION: ROBLOXSTUDIO 0x005dde10
extern "C" __declspec(naked) void asm_005dde10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b5ab0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_005ddd80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e5470();
// FUNCTION: ROBLOXSTUDIO 0x005dfff0
extern "C" __declspec(naked) void asm_005dfff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 0x20] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_005e5470 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_005e6720();
// FUNCTION: ROBLOXSTUDIO 0x005e17d0
extern "C" __declspec(naked) void asm_005e17d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005e6720 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_005ebca0();
// FUNCTION: ROBLOXSTUDIO 0x005e53e0
extern "C" __declspec(naked) void asm_005e53e0()
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
	__asm { call fn_005ebca0 }
	__asm { mov dword ptr [esi], 0xe1aa08 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_0060f8e0();
// FUNCTION: ROBLOXSTUDIO 0x005e5cb0
extern "C" __declspec(naked) void asm_005e5cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0060f8e0 }
	__asm { mov dword ptr [esi], 0xe1ada0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x005eb650
extern "C" __declspec(naked) void asm_005eb650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x58] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x005eba40
extern "C" __declspec(naked) void asm_005eba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x005f1670
extern "C" __declspec(naked) void asm_005f1670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 4 }
	__asm { cmp eax, ecx }
	__asm { cmovg eax, ecx }
	__asm { mov eax, dword ptr [eax*4 + 0x11d6a38] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005f1690
extern "C" __declspec(naked) void asm_005f1690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { cmp eax, 4 }
	__asm { cmovg eax, ecx }
	__asm { mov eax, dword ptr [eax*4 + 0x11d6a4c] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00607e90
extern "C" __declspec(naked) void asm_00607e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe199ac }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0060fef0();
// FUNCTION: ROBLOXSTUDIO 0x00610250
extern "C" __declspec(naked) void asm_00610250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0060fef0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00610250();
// FUNCTION: ROBLOXSTUDIO 0x006104b0
extern "C" __declspec(naked) void asm_006104b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00610250 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00610820
extern "C" __declspec(naked) void asm_00610820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { shr edx, cl }
	__asm { mov eax, 1 }
	__asm { test edx, edx }
	__asm { cmovne eax, edx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0061c850();
// FUNCTION: ROBLOXSTUDIO 0x0061e300
extern "C" __declspec(naked) void asm_0061e300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0061c850 }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00626760();
extern "C" void fn_00629560();
// FUNCTION: ROBLOXSTUDIO 0x00629b70
extern "C" __declspec(naked) void asm_00629b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00629560 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00647250();
// FUNCTION: ROBLOXSTUDIO 0x00646c50
extern "C" __declspec(naked) void asm_00646c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x40] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00647250 }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { sub ecx, dword ptr [esi + 4] }
}

// FUNCTION: ROBLOXSTUDIO 0x00655620
extern "C" __declspec(naked) void asm_00655620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x98] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x9c] }
	__asm { mov ecx, dword ptr [ecx + 0xa0] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00655650
extern "C" __declspec(naked) void asm_00655650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0xa4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0xa8] }
	__asm { mov ecx, dword ptr [ecx + 0xac] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00657600();
// FUNCTION: ROBLOXSTUDIO 0x006576b0
extern "C" __declspec(naked) void asm_006576b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00657600 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00668930();
// FUNCTION: ROBLOXSTUDIO 0x00676650
extern "C" __declspec(naked) void asm_00676650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ecx + 0xc] }
	__asm { push dword ptr [ecx + 0x8c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00668930 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0067fd60
extern "C" __declspec(naked) void asm_0067fd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x30] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0x34] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0x38] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006743b0();
extern "C" void fn_006801f0();
// FUNCTION: ROBLOXSTUDIO 0x006802c0
extern "C" __declspec(naked) void asm_006802c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_006743b0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006801f0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0068ee40();
// FUNCTION: ROBLOXSTUDIO 0x0068f1c0
extern "C" __declspec(naked) void asm_0068f1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { push eax }
	__asm { call fn_0068ee40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068f3f0();
// FUNCTION: ROBLOXSTUDIO 0x0068fca0
extern "C" __declspec(naked) void asm_0068fca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0068f3f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068fca0();
// FUNCTION: ROBLOXSTUDIO 0x006905e0
extern "C" __declspec(naked) void asm_006905e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068fca0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068dc60();
// FUNCTION: ROBLOXSTUDIO 0x00690700
extern "C" __declspec(naked) void asm_00690700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068dc60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00691fb0();
// FUNCTION: ROBLOXSTUDIO 0x00691c10
extern "C" __declspec(naked) void asm_00691c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ecx + 0x40] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00691fb0 }
	__asm { pop ebp }
	__asm { ret 0x18 }
}
