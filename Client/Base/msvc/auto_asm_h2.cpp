// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00845e50
extern "C" __declspec(naked) void asm_00845e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd657b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038108[];
extern "C" void fn_006c53e0();
// FUNCTION: ROBLOXSTUDIO 0x00847120
extern "C" __declspec(naked) void asm_00847120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd279a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_006c53e0 }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { fld qword ptr [g_01038108] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { fldz }
	__asm { fst qword ptr [edi + 0x20] }
	__asm { fst qword ptr [edi + 0x28] }
	__asm { fstp qword ptr [edi + 0x30] }
	__asm { lea esi, [edi + 0x40] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_006c53e0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { fld qword ptr [g_01038108] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { fldz }
	__asm { mov eax, edi }
	__asm { fst qword ptr [esi + 0x20] }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { fst qword ptr [esi + 0x28] }
	__asm { pop edi }
	__asm { fstp qword ptr [esi + 0x30] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402150();
extern "C" void fn_00427900();
extern "C" void fn_0077ab90();
// FUNCTION: ROBLOXSTUDIO 0x00850aa0
extern "C" __declspec(naked) void asm_00850aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd286d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00427900 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0077ab90 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007975c0();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x00865710
extern "C" __declspec(naked) void asm_00865710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d0280();
extern "C" void fn_007d5a20();
// FUNCTION: ROBLOXSTUDIO 0x008657a0
extern "C" __declspec(naked) void asm_008657a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5a20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d0280 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00865830
extern "C" __declspec(naked) void asm_00865830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007975c0();
extern "C" void fn_007de2d0();
extern "C" void fn_007e9920();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x008658d0
extern "C" __declspec(naked) void asm_008658d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9920 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007de2d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dddc0();
extern "C" void fn_007e96f0();
// FUNCTION: ROBLOXSTUDIO 0x00865970
extern "C" __declspec(naked) void asm_00865970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e96f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dddc0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00876c70();
extern "C" void fn_00877110();
// FUNCTION: ROBLOXSTUDIO 0x008770a0
extern "C" __declspec(naked) void asm_008770a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00876c70 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00877110 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d0280();
extern "C" void fn_007d5a20();
// FUNCTION: ROBLOXSTUDIO 0x008775f0
extern "C" __declspec(naked) void asm_008775f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5a20 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_007d0280 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_008783d0();
extern "C" void fn_008784b0();
extern "C" void fn_008789b0();
// FUNCTION: ROBLOXSTUDIO 0x00878910
extern "C" __declspec(naked) void asm_00878910()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_008789b0 }
	__asm { cmp dword ptr [esi + 0x294], 0 }
	__asm { lea ecx, [esi + 0x2c8] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_008784b0 }
	__asm { cmp dword ptr [esi + 0x29c], 0 }
	__asm { lea ecx, [esi + 0x2e8] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_008784b0 }
	__asm { cmp dword ptr [esi + 0x2a4], 0 }
	__asm { lea ecx, [esi + 0x308] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_008783d0 }
	__asm { cmp dword ptr [esi + 0x2ac], 0 }
	__asm { lea ecx, [esi + 0x328] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_008783d0 }
	__asm { cmp dword ptr [esi + 0x2b4], 0 }
	__asm { lea ecx, [esi + 0x348] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_008783d0 }
	__asm { cmp dword ptr [esi + 0x2bc], 0 }
	__asm { lea ecx, [esi + 0x368] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_008783d0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00878590();
extern "C" void fn_00878670();
// FUNCTION: ROBLOXSTUDIO 0x008789b0
extern "C" __declspec(naked) void asm_008789b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xf8], 0 }
	__asm { lea ecx, [esi + 0x124] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov byte ptr [esi + 0x210], 1 }
	__asm { call fn_00878590 }
	__asm { cmp dword ptr [esi + 0x100], 0 }
	__asm { lea ecx, [esi + 0x144] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00878590 }
	__asm { cmp dword ptr [esi + 0x108], 0 }
	__asm { lea ecx, [esi + 0x164] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00878590 }
	__asm { cmp dword ptr [esi + 0x110], 0 }
	__asm { lea ecx, [esi + 0x184] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00878590 }
	__asm { cmp dword ptr [esi + 0x118], 0 }
	__asm { lea ecx, [esi + 0x1a4] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00878590 }
	__asm { cmp dword ptr [esi + 0x1c8], 0 }
	__asm { lea ecx, [esi + 0x1f4] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00878670 }
	__asm { cmp dword ptr [esi + 0x1c0], 0 }
	__asm { lea ecx, [esi + 0x1d4] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00878590 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0087b3d0
extern "C" __declspec(naked) void asm_0087b3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x20] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x24] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0x3f800000 }
	__asm { mov word ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 2 }
	__asm { mov dword ptr [esi + 0x48], 1 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00883ce0();
extern "C" void fn_008843d0();
// FUNCTION: ROBLOXSTUDIO 0x00884260
extern "C" __declspec(naked) void asm_00884260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b7f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe65624 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00883ce0 }
	__asm { mov dword ptr [esi], 0xe6574c }
	__asm { mov dword ptr [esi + 4], 0xe65804 }
	__asm { mov dword ptr [esi + 0x18], 0xe6580c }
	__asm { mov dword ptr [esi + 0x1c], 0xe65818 }
	__asm { mov dword ptr [esi + 0x64], 0xe65828 }
	__asm { mov dword ptr [esi + 0x68], 0xe65830 }
	__asm { lea ecx, [esi + 0x3ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008843d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x38c], eax }
	__asm { mov dword ptr [esi], 0xe65864 }
	__asm { mov dword ptr [esi + 4], 0xe6591c }
	__asm { mov dword ptr [esi + 0x18], 0xe65924 }
	__asm { mov dword ptr [esi + 0x1c], 0xe65930 }
	__asm { mov dword ptr [esi + 0x64], 0xe65940 }
	__asm { mov dword ptr [esi + 0x68], 0xe65948 }
	__asm { mov dword ptr [esi + 0x464], 0x7f }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00883ce0();
extern "C" void fn_008843d0();
// FUNCTION: ROBLOXSTUDIO 0x00884320
extern "C" __declspec(naked) void asm_00884320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b7f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe65624 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00883ce0 }
	__asm { mov dword ptr [esi], 0xe6574c }
	__asm { mov dword ptr [esi + 4], 0xe65804 }
	__asm { mov dword ptr [esi + 0x18], 0xe6580c }
	__asm { mov dword ptr [esi + 0x1c], 0xe65818 }
	__asm { mov dword ptr [esi + 0x64], 0xe65828 }
	__asm { mov dword ptr [esi + 0x68], 0xe65830 }
	__asm { lea ecx, [esi + 0x3ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008843d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe65864 }
	__asm { mov dword ptr [esi + 4], 0xe6591c }
	__asm { mov dword ptr [esi + 0x18], 0xe65924 }
	__asm { mov dword ptr [esi + 0x1c], 0xe65930 }
	__asm { mov dword ptr [esi + 0x64], 0xe65940 }
	__asm { mov dword ptr [esi + 0x68], 0xe65948 }
	__asm { mov dword ptr [esi + 0x464], 0x7f }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d01e0();
extern "C" void fn_007d59b0();
// FUNCTION: ROBLOXSTUDIO 0x0088b830
extern "C" __declspec(naked) void asm_0088b830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d59b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d01e0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a0a470();
// FUNCTION: ROBLOXSTUDIO 0x008a4890
extern "C" __declspec(naked) void asm_008a4890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov ax, word ptr [ebp + 0xc] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov ax, word ptr [ebp + 0x10] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { lea edx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { lea eax, [eax + edx*2] }
	__asm { inc eax }
	__asm { mov ecx, eax }
	__asm { shr ecx, 3 }
	__asm { shl cl, 6 }
	__asm { and al, 7 }
	__asm { or cl, al }
	__asm { or cl, 0x28 }
	__asm { push 0x11 }
	__asm { mov byte ptr [ebp + 8], cl }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x140] }
	__asm { call fn_00a0a470 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_007d5470();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x008a6530
extern "C" __declspec(naked) void asm_008a6530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004109a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008ad740();
// FUNCTION: ROBLOXSTUDIO 0x008ad980
extern "C" __declspec(naked) void asm_008ad980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_008ad740 }
	__asm { mov dword ptr [esi], 0xe6cd24 }
	__asm { mov dword ptr [esi + 4], 0xe6cdc0 }
	__asm { mov dword ptr [esi + 0x18], 0xe6cdc8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6cdd4 }
	__asm { mov dword ptr [esi + 0x64], 0xe6cde4 }
	__asm { mov dword ptr [esi + 0x68], 0xe6cdec }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 1 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008af340();
extern "C" void fn_00ca5740();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008ae150
extern "C" __declspec(naked) void asm_008ae150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d940 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00ca5740 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008af340 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007cfc10();
extern "C" void fn_007d54e0();
// FUNCTION: ROBLOXSTUDIO 0x008c2670
extern "C" __declspec(naked) void asm_008c2670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d54e0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007cfc10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007cfc10();
extern "C" void fn_007d54e0();
// FUNCTION: ROBLOXSTUDIO 0x008c2700
extern "C" __declspec(naked) void asm_008c2700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d54e0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007cfc10 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d54e0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007cfc10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c58f0();
extern "C" void fn_008c3ba0();
extern "C" void fn_008c3d20();
// FUNCTION: ROBLOXSTUDIO 0x008c64b0
extern "C" __declspec(naked) void asm_008c64b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { fadd qword ptr [esi + 0x90] }
	__asm { push eax }
	__asm { fstp qword ptr [esi + 0x90] }
	__asm { fld qword ptr [esi + 0x80] }
	__asm { fsub qword ptr [esi + 0x88] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { call fn_006c58f0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { fld qword ptr [ecx] }
	__asm { lea ecx, [esi + 0xa8] }
	__asm { fadd qword ptr [eax] }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { fld qword ptr [esi + 0x90] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { fstp qword ptr [ebp - 0x40] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { fstp qword ptr [ebp - 0x38] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { fld qword ptr [esi + 0x80] }
	__asm { push eax }
	__asm { fstp qword ptr [ebp - 0x30] }
	__asm { fld qword ptr [ebp - 0x10] }
	__asm { fstp qword ptr [ebp - 0x28] }
	__asm { call fn_008c3ba0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea ecx, [esi + 0xb4] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_008c3d20 }
	__asm { fld qword ptr [esi + 0x80] }
	__asm { fstp qword ptr [esi + 0x88] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008cb430();
extern "C" void fn_008ce8a0();
extern "C" void fn_008cffc0();
// FUNCTION: ROBLOXSTUDIO 0x008c7910
extern "C" __declspec(naked) void asm_008c7910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f310 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ce8a0 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { add ecx, 4 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008ce8a0 }
	__asm { mov ecx, esi }
	__asm { call fn_008cb430 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008cffc0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008cffc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
// FUNCTION: ROBLOXSTUDIO 0x008ce3b0
extern "C" __declspec(naked) void asm_008ce3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f6c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c00e0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c00e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { lea ecx, [esi + 4] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c00e0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c0570 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c0570 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007c9b10();
extern "C" void fn_00afaed0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x008d6860
extern "C" __declspec(naked) void asm_008d6860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_00afaed0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007c9b10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
// FUNCTION: ROBLOXSTUDIO 0x008da4e0
extern "C" __declspec(naked) void asm_008da4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f1a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { call fn_008c00e0 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c00e0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35690();
extern "C" void fn_00a35710();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35a20();
extern "C" void fn_00a35b70();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35ce0();
// FUNCTION: ROBLOXSTUDIO 0x008e32b0
extern "C" __declspec(naked) void asm_008e32b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push 0xe6fc88 }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push 0xe6fca0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { push 7 }
	__asm { push 0xe53324 }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { add esp, 0x40 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push 0xffffd8ee }
	__asm { push esi }
	__asm { call fn_00a35a20 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ec3d0();
extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
// FUNCTION: ROBLOXSTUDIO 0x008eb4f0
extern "C" __declspec(naked) void asm_008eb4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af96c0 }
	__asm { mov ecx, esi }
	__asm { call fn_008ec3d0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_008f3260();
extern "C" void fn_0095b950();
extern "C" void fn_009a9600();
// FUNCTION: ROBLOXSTUDIO 0x008f2c70
extern "C" __declspec(naked) void asm_008f2c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095b950 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0095b950 }
	__asm { mov ecx, esi }
	__asm { call fn_008f3260 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009a9600 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009a9600 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_008f35f0();
extern "C" void fn_008f3680();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f3750
extern "C" __declspec(naked) void asm_008f3750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31fc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008f3680 }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008f35f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008f35f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0x8f37cd }
	__asm { ret }
}

extern "C" void fn_00906320();
extern "C" void fn_00c679a0();
// FUNCTION: ROBLOXSTUDIO 0x00906010
extern "C" __declspec(naked) void asm_00906010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd336c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi], 0xe768bc }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { call fn_00906320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5d30();
extern "C" void fn_007dbf50();
extern "C" void fn_007e8d50();
// FUNCTION: ROBLOXSTUDIO 0x00908f10
extern "C" __declspec(naked) void asm_00908f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e8d50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dbf50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00410d50 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0086a9a0();
extern "C" void fn_009166a0();
extern "C" void fn_009167b0();
// FUNCTION: ROBLOXSTUDIO 0x009168a0
extern "C" __declspec(naked) void asm_009168a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34906 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe7b7cc }
	__asm { mov dword ptr [esi + 4], 0xe7b8e8 }
	__asm { mov dword ptr [esi + 0x18], 0xe7b8f0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7b8fc }
	__asm { mov dword ptr [esi + 0x64], 0xe7b90c }
	__asm { mov dword ptr [esi + 0x70], 0xe7b914 }
	__asm { mov dword ptr [esi + 0x98], 0xe7b934 }
	__asm { mov dword ptr [esi + 0xb0], 0xe7b968 }
	__asm { mov dword ptr [esi + 0xc4], 0xe7b994 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe7b99c }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xec] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { lea ecx, [esi + 0x148] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0086a9a0 }
	__asm { lea ecx, [esi + 0x140] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009167b0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009166a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0091e970();
extern "C" void fn_009209e0();
// FUNCTION: ROBLOXSTUDIO 0x00920810
extern "C" __declspec(naked) void asm_00920810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd350f9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea esi, [eax + 4] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { fld dword ptr [ebx + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fstp dword ptr [eax] }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { sub eax, dword ptr [edi + 0x78] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { call fn_009209e0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x20], 0x91f3e0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0091e970 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00412590();
extern "C" void fn_007cb250();
extern "C" void fn_007ccb10();
extern "C" void fn_008253e0();
// FUNCTION: ROBLOXSTUDIO 0x0092b8a0
extern "C" __declspec(naked) void asm_0092b8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35bab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0x1032f48 }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008253e0 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x78] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007ccb10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00412590();
extern "C" void fn_007cb250();
extern "C" void fn_007ccda0();
extern "C" void fn_008253e0();
// FUNCTION: ROBLOXSTUDIO 0x0092b930
extern "C" __declspec(naked) void asm_0092b930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35bab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0xe809cc }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], esi }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008253e0 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0xac] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007ccda0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00933470();
extern "C" void fn_00933b40();
extern "C" void fn_00b92b80();
extern "C" void fn_00b92ba0();
// FUNCTION: ROBLOXSTUDIO 0x00933cc0
extern "C" __declspec(naked) void asm_00933cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36590 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00b92ba0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b92b80 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { call fn_00933b40 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x18], 0xe81a00 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933470 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00933470();
extern "C" void fn_00933b40();
extern "C" void fn_00b92ba0();
// FUNCTION: ROBLOXSTUDIO 0x009341c0
extern "C" __declspec(naked) void asm_009341c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd365a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00b92ba0 }
	__asm { mov dword ptr [ebp - 0x20], 0xe81aa4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00933b40 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933470 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004115f0();
extern "C" void fn_006d14e0();
extern "C" void fn_00939530();
extern "C" void fn_00b65cc0();
// FUNCTION: ROBLOXSTUDIO 0x00939a00
extern "C" __declspec(naked) void asm_00939a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37073 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00939530 }
	__asm { mov dword ptr [edi], 0xe82304 }
	__asm { mov dword ptr [edi + 4], 0xe8237c }
	__asm { mov dword ptr [edi + 0x18], 0xe82384 }
	__asm { mov dword ptr [edi + 0x1c], 0xe82390 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b65cc0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe82454 }
	__asm { mov dword ptr [edi + 4], 0xe824cc }
	__asm { mov dword ptr [edi + 0x18], 0xe824d4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe824e0 }
	__asm { mov dword ptr [edi + 0x64], 0xe824f0 }
	__asm { mov word ptr [edi + 0x68], 1 }
	__asm { call fn_006d14e0 }
	__asm { fld dword ptr [eax] }
	__asm { push 0x939de0 }
	__asm { fstp dword ptr [edi + 0x6c] }
	__asm { push 0x1300464 }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 0x70] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [edi + 0x74] }
	__asm { mov dword ptr [edi + 0x78], 0x3f800000 }
	__asm { call fn_004115f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0093e240();
extern "C" void fn_00be8210();
extern "C" void fn_00c679a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00940310
extern "C" __declspec(naked) void asm_00940310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37728 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0093e240 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00be8210 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0093e8d0();
extern "C" void fn_00941e40();
extern "C" void fn_00b7f8d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009405a0
extern "C" __declspec(naked) void asm_009405a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37748 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0093e8d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00941e40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_0093fa70();
// FUNCTION: ROBLOXSTUDIO 0x009408d0
extern "C" __declspec(naked) void asm_009408d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6bdf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0093fa70 }
	__asm { lea eax, [esi + 0x74] }
	__asm { mov dword ptr [esi], 0xe83114 }
	__asm { mov dword ptr [esi + 4], 0xe8318c }
	__asm { mov dword ptr [esi + 0x18], 0xe83194 }
	__asm { mov dword ptr [esi + 0x1c], 0xe831a0 }
	__asm { mov word ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_0093fb30();
// FUNCTION: ROBLOXSTUDIO 0x00940960
extern "C" __declspec(naked) void asm_00940960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd377cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0093fb30 }
	__asm { mov dword ptr [esi], 0xe83394 }
	__asm { mov dword ptr [esi + 4], 0xe8340c }
	__asm { mov dword ptr [esi + 0x18], 0xe83414 }
	__asm { mov dword ptr [esi + 0x1c], 0xe83420 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { lea eax, [esi + 0x80] }
	__asm { mov byte ptr [esi + 0x79], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093fcb0();
extern "C" void fn_00bfdcb0();
// FUNCTION: ROBLOXSTUDIO 0x00940b00
extern "C" __declspec(naked) void asm_00940b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0093fcb0 }
	__asm { mov dword ptr [edi], 0xe83254 }
	__asm { mov dword ptr [edi + 4], 0xe832cc }
	__asm { mov dword ptr [edi + 0x18], 0xe832d4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe832e0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov byte ptr [edi + 0x70], 0 }
	__asm { lea ecx, [edi + 0x74] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x74], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b030();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949900
extern "C" __declspec(naked) void asm_00949900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38090 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b030 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fcf8 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x94995d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b050();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949980
extern "C" __declspec(naked) void asm_00949980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd380a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b050 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fd5c }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x9499dd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b070();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949a00
extern "C" __declspec(naked) void asm_00949a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd380b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b070 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fe40 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949a5d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b090();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949a80
extern "C" __declspec(naked) void asm_00949a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd380c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b090 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fdc0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949add }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b0b0();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949b00
extern "C" __declspec(naked) void asm_00949b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd380d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b0b0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112f860 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949b5d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b0d0();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949b80
extern "C" __declspec(naked) void asm_00949b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd380e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b0d0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push 0x112fc28 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949bdd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b0f0();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949c00
extern "C" __declspec(naked) void asm_00949c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd380f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b0f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112f8e4 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949c5d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b110();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949c80
extern "C" __declspec(naked) void asm_00949c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38100 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b110 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112f968 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949cdd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b130();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949d00
extern "C" __declspec(naked) void asm_00949d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38110 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b130 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fa38 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949d5d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b150();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949d80
extern "C" __declspec(naked) void asm_00949d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38120 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b150 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112f9d0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949ddd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b170();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949e00
extern "C" __declspec(naked) void asm_00949e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38130 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b170 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fb20 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949e5d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b190();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949e80
extern "C" __declspec(naked) void asm_00949e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38140 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b190 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fa9c }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949edd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b1b0();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949f00
extern "C" __declspec(naked) void asm_00949f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b1b0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fc94 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949f5d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b1d0();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00949f80
extern "C" __declspec(naked) void asm_00949f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38160 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b1d0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112fba4 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x949fdd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b1f0();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0094a000
extern "C" __declspec(naked) void asm_0094a000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b1f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push 0x112f6d0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x94a05d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b290();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0094a080
extern "C" __declspec(naked) void asm_0094a080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38180 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b290 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push 0x112fec0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x94a0dd }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094b310();
extern "C" void fn_00954770();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0094a100
extern "C" __declspec(naked) void asm_0094a100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38190 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b310 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x112f5e8 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00954770 }
	__asm { add esp, 4 }
	__asm { mov eax, 0x94a15d }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094b1f0
extern "C" __declspec(naked) void asm_0094b1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3837c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x14], 0xe84738 }
	__asm { mov dword ptr [edi + 0x1c], 0xe1822c }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi], 0xe84720 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, edi }
	__asm { mov dword ptr [ecx + edi + 0x14], 0xe8472c }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { lea ecx, [edx - 8] }
	__asm { mov dword ptr [edx + edi + 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094b290
extern "C" __declspec(naked) void asm_0094b290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd383ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xc], 0xe84adc }
	__asm { mov dword ptr [esi + 0x14], 0xe1822c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe84ac4 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ecx + esi + 0xc], 0xe84ad0 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { lea ecx, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094f5a0
extern "C" __declspec(naked) void asm_0094f5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38adb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84698 }
	__asm { mov dword ptr [edi + 0xc], 0xe846a4 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1051c[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094f780
extern "C" __declspec(naked) void asm_0094f780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38b2c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe846ac }
	__asm { mov dword ptr [edi + 0xc], 0xe846b8 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094f960
extern "C" __declspec(naked) void asm_0094f960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38b7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe846d4 }
	__asm { mov dword ptr [edi + 0xc], 0xe846e0 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10720[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094fb40
extern "C" __declspec(naked) void asm_0094fb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bcc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e10720] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe846c0 }
	__asm { mov dword ptr [edi + 0xc], 0xe846cc }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094fd20
extern "C" __declspec(naked) void asm_0094fd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe845d0 }
	__asm { mov dword ptr [edi + 0xc], 0xe845dc }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094b930();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x0094ff10
extern "C" __declspec(naked) void asm_0094ff10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38c2b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84670 }
	__asm { mov dword ptr [edi + 0x14], 0xe8467c }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094b930 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950110
extern "C" __declspec(naked) void asm_00950110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe845e4 }
	__asm { mov dword ptr [edi + 0xc], 0xe845f0 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x009502f0
extern "C" __declspec(naked) void asm_009502f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe845f8 }
	__asm { mov dword ptr [edi + 0xc], 0xe84604 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x009504d0
extern "C" __declspec(naked) void asm_009504d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84620 }
	__asm { mov dword ptr [edi + 0xc], 0xe8462c }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x009506b0
extern "C" __declspec(naked) void asm_009506b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe8460c }
	__asm { mov dword ptr [edi + 0xc], 0xe84618 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950890
extern "C" __declspec(naked) void asm_00950890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84648 }
	__asm { mov dword ptr [edi + 0xc], 0xe84654 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950a70
extern "C" __declspec(naked) void asm_00950a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84634 }
	__asm { mov dword ptr [edi + 0xc], 0xe84640 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950c50
extern "C" __declspec(naked) void asm_00950c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe84684 }
	__asm { mov dword ptr [edi + 0xc], 0xe84690 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_0094bac0();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00950e30
extern "C" __declspec(naked) void asm_00950e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0xc], 0xe18224 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe8465c }
	__asm { mov dword ptr [edi + 0xc], 0xe84668 }
	__asm { call fn_00cf67d4 }
	__asm { mov dword ptr [ebp - 0x18], 0xe8453c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0094bac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956b70
extern "C" __declspec(naked) void asm_00956b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39109 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe84738 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x30], 0xe84720 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112f6d0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe8472c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007975c0();
extern "C" void fn_007d5d30();
extern "C" void fn_00825060();
// FUNCTION: ROBLOXSTUDIO 0x009727b0
extern "C" __declspec(naked) void asm_009727b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00825060 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007975c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00410d50 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788700();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00972850
extern "C" __declspec(naked) void asm_00972850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00410d50 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x0097aca0
extern "C" __declspec(naked) void asm_0097aca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b839 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0x40 }
	__asm { call fn_008bbcc0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], 0x80 }
	__asm { call fn_008bbcc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0086b050();
extern "C" void fn_0086b250();
// FUNCTION: ROBLOXSTUDIO 0x00982410
extern "C" __declspec(naked) void asm_00982410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bef8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe8926c }
	__asm { mov dword ptr [esi + 4], 0xe89324 }
	__asm { mov dword ptr [esi + 0x18], 0xe8932c }
	__asm { mov dword ptr [esi + 0x1c], 0xe89338 }
	__asm { mov dword ptr [esi + 0x64], 0xe89348 }
	__asm { mov dword ptr [esi + 0x68], 0xe89350 }
	__asm { lea ecx, [esi + 0x294] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0086b050 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe88dc4 }
	__asm { mov dword ptr [esi + 4], 0xe88e7c }
	__asm { mov dword ptr [esi + 0x18], 0xe88e84 }
	__asm { mov dword ptr [esi + 0x1c], 0xe88e90 }
	__asm { mov dword ptr [esi + 0x64], 0xe88ea0 }
	__asm { mov dword ptr [esi + 0x68], 0xe88ea8 }
	__asm { call fn_0086b250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ba9d50();
extern "C" void fn_00ba9dc0();
extern "C" void fn_00ba9fd0();
// FUNCTION: ROBLOXSTUDIO 0x0099e500
extern "C" __declspec(naked) void asm_0099e500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x104] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00ba9dc0 }
	__asm { mov ecx, dword ptr [edi + 0x100] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x104] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { lea edx, [ebp - 0x30] }
	__asm { fstp dword ptr [esp] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x64] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ba9fd0 }
	__asm { mov ecx, dword ptr [edi + 0x100] }
	__asm { mov esi, dword ptr [edi + 0x104] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ba9d50 }
	__asm { mov byte ptr [edi + 0x154], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009a6bb0();
extern "C" void fn_009aa9b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009a4e60
extern "C" __declspec(naked) void asm_009a4e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_009aa9b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a6bb0 }
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

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x009a6ea0
extern "C" __declspec(naked) void asm_009a6ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x009a6f40
extern "C" __declspec(naked) void asm_009a6f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00788700 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007c7180();
extern "C" void fn_007d5550();
extern "C" void fn_007d58d0();
// FUNCTION: ROBLOXSTUDIO 0x009a6fe0
extern "C" __declspec(naked) void asm_009a6fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d58d0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007c7180 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007dba40();
extern "C" void fn_007e8960();
// FUNCTION: ROBLOXSTUDIO 0x009b3350
extern "C" __declspec(naked) void asm_009b3350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e8960 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dba40 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009ba650();
extern "C" void fn_009bc350();
extern "C" void fn_009bccc0();
// FUNCTION: ROBLOXSTUDIO 0x009b8ea0
extern "C" __declspec(naked) void asm_009b8ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bc350 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009bc350 }
	__asm { mov ecx, esi }
	__asm { call fn_009ba650 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_008ff0a0();
extern "C" void fn_009b9350();
extern "C" void fn_00b5cfb0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009bbbe0
extern "C" __declspec(naked) void asm_009bbbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f7c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009b9350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_008ff0a0();
extern "C" void fn_009bdac0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x009bed70
extern "C" __declspec(naked) void asm_009bed70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_009bdac0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ff0a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x009c4a70
extern "C" __declspec(naked) void asm_009c4a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007cfe20();
extern "C" void fn_007d57f0();
// FUNCTION: ROBLOXSTUDIO 0x009c4b00
extern "C" __declspec(naked) void asm_009c4b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d57f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007cfe20 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040e3e0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x009c4b90
extern "C" __declspec(naked) void asm_009c4b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5860 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0040e3e0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007b78e0();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x009c4c20
extern "C" __declspec(naked) void asm_009c4c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088bd20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007b78e0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007cff40();
extern "C" void fn_007d60a0();
// FUNCTION: ROBLOXSTUDIO 0x009c4cb0
extern "C" __declspec(naked) void asm_009c4cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d60a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007cff40 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x009c4d40
extern "C" __declspec(naked) void asm_009c4d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5be0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d0510 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009cc550();
// FUNCTION: ROBLOXSTUDIO 0x009cc8f0
extern "C" __declspec(naked) void asm_009cc8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009cc550 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe9588c }
	__asm { mov dword ptr [esi + 4], 0xe95904 }
	__asm { mov dword ptr [esi + 0x18], 0xe9590c }
	__asm { mov dword ptr [esi + 0x1c], 0xe95918 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, dword ptr [ecx + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { fld dword ptr [ecx + 0x6c] }
	__asm { fstp dword ptr [esi + 0x6c] }
	__asm { fld dword ptr [ecx + 0x70] }
	__asm { fstp dword ptr [esi + 0x70] }
	__asm { fld dword ptr [ecx + 0x74] }
	__asm { fstp dword ptr [esi + 0x74] }
	__asm { mov eax, dword ptr [ecx + 0x84] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov eax, dword ptr [ecx + 0x88] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov eax, dword ptr [ecx + 0x8c] }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { mov al, byte ptr [ecx + 0x90] }
	__asm { mov byte ptr [esi + 0x90], al }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x009cf550
extern "C" __declspec(naked) void asm_009cf550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004109a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007dda60();
extern "C" void fn_007e9610();
// FUNCTION: ROBLOXSTUDIO 0x009cf5e0
extern "C" __declspec(naked) void asm_009cf5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e9610 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dda60 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007dd9d0();
extern "C" void fn_007e95a0();
// FUNCTION: ROBLOXSTUDIO 0x009cf670
extern "C" __declspec(naked) void asm_009cf670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e95a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007dd9d0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e95a0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dd9d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006da0e0();
extern "C" void fn_006dc770();
// FUNCTION: ROBLOXSTUDIO 0x009d8a40
extern "C" __declspec(naked) void asm_009d8a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006da0e0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ebp - 4], 0xbf800000 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xbf800000 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006dc770 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0xbf800000 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e2b30();
extern "C" void fn_009e63c0();
extern "C" void fn_009e76c0();
// FUNCTION: ROBLOXSTUDIO 0x009e0dc0
extern "C" __declspec(naked) void asm_009e0dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41900 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009e63c0 }
	__asm { mov eax, dword ptr [ebp - 0x70] }
	__asm { sub esp, 0x60 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x6c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009e63c0 }
	__asm { mov ecx, esi }
	__asm { call fn_009e2b30 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009e76c0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009e76c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x64 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788630();
extern "C" void fn_007d55c0();
// FUNCTION: ROBLOXSTUDIO 0x009e3a80
extern "C" __declspec(naked) void asm_009e3a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d55c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788630 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x009e3b10
extern "C" __declspec(naked) void asm_009e3b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788630();
extern "C" void fn_007d5390();
extern "C" void fn_007d55c0();
// FUNCTION: ROBLOXSTUDIO 0x009e3bb0
extern "C" __declspec(naked) void asm_009e3bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d55c0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00788630 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_00788630();
extern "C" void fn_00788700();
extern "C" void fn_007d55c0();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x009e3c50
extern "C" __declspec(naked) void asm_009e3c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d55c0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_00788630 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x009f13a0
extern "C" __declspec(naked) void asm_009f13a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42a9c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x00a08bf0
extern "C" __declspec(naked) void asm_00a08bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [edi + 8] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { fld dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 8] }
	__asm { fld dword ptr [edi] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1317c[];
// FUNCTION: ROBLOXSTUDIO 0x00a1b470
extern "C" __declspec(naked) void asm_00a1b470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd463e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xea3c1c }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov byte ptr [esi + 5], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { push 0 }
	__asm { add ecx, 0x1c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1317c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0088fab0();
extern "C" void fn_00a20a00();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00a20970
extern "C" __declspec(naked) void asm_00a20970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088fab0 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a20a00 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00a27920();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27d20
extern "C" __declspec(naked) void asm_00a27d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27920 }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa27d9d }
	__asm { ret }
}

extern "C" void fn_00a278a0();
extern "C" void fn_00a279f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a27e60
extern "C" __declspec(naked) void asm_00a27e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a279f0 }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a278a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov edx, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a278a0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa27edd }
	__asm { ret }
}

extern "C" void fn_00a28080();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28100
extern "C" __declspec(naked) void asm_00a28100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28080 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a28180();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28210
extern "C" __declspec(naked) void asm_00a28210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46aa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28180 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a28290();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28330
extern "C" __declspec(naked) void asm_00a28330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46ac0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28290 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a283b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28430
extern "C" __declspec(naked) void asm_00a28430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46ae0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a283b0 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a284b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28530
extern "C" __declspec(naked) void asm_00a28530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46b00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a284b0 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a349d0();
extern "C" void fn_00bc62e0();
extern "C" void fn_00bc86d0();
extern "C" void fn_00bc9420();
extern "C" void fn_00bc9630();
extern "C" void fn_00bc9ad0();
// FUNCTION: ROBLOXSTUDIO 0x00a34350
extern "C" __declspec(naked) void asm_00a34350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { push edi }
	__asm { call fn_00a349d0 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00bc9ad0 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov dword ptr [edi + 0x50], 5 }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { push edi }
	__asm { call fn_00bc9ad0 }
	__asm { push 0x20 }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov dword ptr [esi + 0x68], 5 }
	__asm { call fn_00bc9630 }
	__asm { push edi }
	__asm { call fn_00bc62e0 }
	__asm { push edi }
	__asm { call fn_00bc86d0 }
	__asm { push 0x11 }
	__asm { push 0xea6a6c }
	__asm { push edi }
	__asm { call fn_00bc9420 }
	__asm { or byte ptr [eax + 5], 0x20 }
	__asm { mov eax, dword ptr [ebx + 0x44] }
	__asm { add esp, 0x3c }
	__asm { shl eax, 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x40], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a340c0();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6470();
// FUNCTION: ROBLOXSTUDIO 0x00a34580
extern "C" __declspec(naked) void asm_00a34580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { call fn_00bc6470 }
	__asm { lea ebx, [edi - 0x2c] }
	__asm { add esp, 8 }
	__asm { mov ecx, ebx }
	__asm { call fn_00a340c0 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [eax + eax*2] }
	__asm { push 0 }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push 0 }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x20] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { push 0 }
	__asm { push 0xa4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
// FUNCTION: ROBLOXSTUDIO 0x00a349d0
extern "C" __declspec(naked) void asm_00a349d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push 0xc0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00bc6400 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x2d0 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add eax, 0xa8 }
	__asm { mov dword ptr [edi + 0x30], 8 }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { call fn_00bc6400 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea ecx, [eax + 0x270] }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov dword ptr [edi + 0x2c], 0x2d }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { add dword ptr [edi + 8], 0x10 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add eax, 0x140 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36730();
extern "C" void fn_00bc6400();
// FUNCTION: ROBLOXSTUDIO 0x00a36a80
extern "C" __declspec(naked) void asm_00a36a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [edi + 0x74] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { sub eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0xa36460 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00a36730 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x24 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" char g_0124eb14[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3b140();
extern "C" void fn_00a3b550();
// FUNCTION: ROBLOXSTUDIO 0x00a3bd40
extern "C" __declspec(naked) void asm_00a3bd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00a3b550 }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push ebx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_00a3b140 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00629560();
extern "C" void fn_006d19a0();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3b140();
// FUNCTION: ROBLOXSTUDIO 0x00a3ed40
extern "C" __declspec(naked) void asm_00a3ed40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00629560 }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_00a3b140 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" char g_0124eb14[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3b140();
extern "C" void fn_00a3b4f0();
// FUNCTION: ROBLOXSTUDIO 0x00a3fc50
extern "C" __declspec(naked) void asm_00a3fc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00a3b4f0 }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push ebx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_00a3b140 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_006d5100();
extern "C" void fn_00a356f0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a40020
extern "C" __declspec(naked) void asm_00a40020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push dword ptr [g_0124eacc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_006d5100 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 3 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00a3b2a0();
// FUNCTION: ROBLOXSTUDIO 0x00a42050
extern "C" __declspec(naked) void asm_00a42050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { sub esp, 0x3c }
	__asm { mov edi, esp }
	__asm { mov ebx, ecx }
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
	__asm { push dword ptr [ebx] }
	__asm { call fn_00a3b2a0 }
	__asm { add esp, 0x40 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a592f0();
extern "C" void fn_00a5a980();
extern "C" void fn_00adf160();
// FUNCTION: ROBLOXSTUDIO 0x00a58930
extern "C" __declspec(naked) void asm_00a58930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5a980 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a5a980 }
	__asm { mov ecx, esi }
	__asm { call fn_00a592f0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

extern "C" void fn_00a59450();
extern "C" void fn_00a5a600();
extern "C" void fn_00adf160();
// FUNCTION: ROBLOXSTUDIO 0x00a589c0
extern "C" __declspec(naked) void asm_00a589c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5a600 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a5a600 }
	__asm { mov ecx, esi }
	__asm { call fn_00a59450 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x5c }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
extern "C" void fn_007dce90();
extern "C" void fn_007e91b0();
// FUNCTION: ROBLOXSTUDIO 0x00a67010
extern "C" __declspec(naked) void asm_00a67010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e91b0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dce90 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_00788700();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x00a670b0
extern "C" __declspec(naked) void asm_00a670b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00788700 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038180[];
extern "C" void fn_004038a0();
extern "C" void fn_00a748d0();
// FUNCTION: ROBLOXSTUDIO 0x00a75900
extern "C" __declspec(naked) void asm_00a75900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a893 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a748d0 }
	__asm { mov dword ptr [esi], 0xeae26c }
	__asm { mov dword ptr [esi + 4], 0xeae2e4 }
	__asm { mov dword ptr [esi + 0x18], 0xeae2ec }
	__asm { mov dword ptr [esi + 0x1c], 0xeae2f8 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { lea ecx, [esi + 0x70] }
	__asm { mov byte ptr [esi + 0x6c], 0 }
	__asm { push 1 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0x101eb04 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { fld qword ptr [g_01038180] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp qword ptr [esi + 0x88] }
	__asm { mov word ptr [esi + 0x90], 0x101 }
	__asm { mov byte ptr [esi + 0x92], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a7e060
extern "C" __declspec(naked) void asm_00a7e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
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
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a7e0e0
extern "C" __declspec(naked) void asm_00a7e0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00a8a610
extern "C" __declspec(naked) void asm_00a8a610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { inc ecx }
	__asm { shl edx, cl }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { sar dword ptr [ebp + 0x10], 5 }
	__asm { shl edx, cl }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { shl edi, cl }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl ebx, cl }
	__asm { shl esi, cl }
	__asm { shl edx, cl }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sar edi, 5 }
	__asm { sar ebx, 5 }
	__asm { sar esi, 4 }
	__asm { sar ecx, 4 }
	__asm { mov dword ptr [eax], edi }
	__asm { sar edx, 5 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x14], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00922f50();
extern "C" void fn_00923320();
// FUNCTION: ROBLOXSTUDIO 0x00a8edd0
extern "C" __declspec(naked) void asm_00a8edd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c128 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeb26bc }
	__asm { mov dword ptr [esi + 4], 0xeb277c }
	__asm { mov dword ptr [esi + 0x18], 0xeb2784 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb2790 }
	__asm { mov dword ptr [esi + 0x64], 0xeb27a0 }
	__asm { mov dword ptr [esi + 0x190], 0xeb27a8 }
	__asm { mov dword ptr [esi + 0x19c], 0xeb27b0 }
	__asm { mov dword ptr [esi + 0x1b4], 0xeb27e4 }
	__asm { mov dword ptr [esi + 0x1b8], 0xeb27ec }
	__asm { lea ecx, [esi + 0x250] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00923320 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xeb2584 }
	__asm { mov dword ptr [esi + 4], 0xeb2644 }
	__asm { mov dword ptr [esi + 0x18], 0xeb264c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb2658 }
	__asm { mov dword ptr [esi + 0x64], 0xeb2668 }
	__asm { mov dword ptr [esi + 0x190], 0xeb2670 }
	__asm { mov dword ptr [esi + 0x19c], 0xeb2678 }
	__asm { mov dword ptr [esi + 0x1b4], 0xeb26ac }
	__asm { mov dword ptr [esi + 0x1b8], 0xeb26b4 }
	__asm { call fn_00922f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a91dc0();
// FUNCTION: ROBLOXSTUDIO 0x00a946a0
extern "C" __declspec(naked) void asm_00a946a0()
{
	__asm { push esi }
	__asm { push 0xeb34e0 }
	__asm { mov esi, ecx }
	__asm { call fn_00a91dc0 }
	__asm { mov dword ptr [esi], 0xeb4524 }
	__asm { mov dword ptr [esi + 4], 0xeb45a4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb45ac }
	__asm { mov dword ptr [esi + 0x1c], 0xeb45b8 }
	__asm { mov dword ptr [esi + 0x64], 0xeb45cc }
	__asm { mov dword ptr [esi + 0x80], 0xeb461c }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4638 }
	__asm { mov dword ptr [esi + 0x134], 0x449c4000 }
	__asm { mov dword ptr [esi + 0x138], 0x457a0000 }
	__asm { mov dword ptr [esi + 0x13c], 0x457a0000 }
	__asm { mov dword ptr [esi + 0x140], 0x457a0000 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x148], 0x40000000 }
	__asm { mov dword ptr [esi + 0x14c], 0 }
	__asm { mov dword ptr [esi + 0x150], 0 }
	__asm { mov dword ptr [esi + 0x154], 0 }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006deac0();
extern "C" void fn_00a91ea0();
// FUNCTION: ROBLOXSTUDIO 0x00a94750
extern "C" __declspec(naked) void asm_00a94750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c8e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xeb34f4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a91ea0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeb3b54 }
	__asm { mov dword ptr [esi + 4], 0xeb3bd4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb3bdc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3be8 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3bfc }
	__asm { mov dword ptr [esi + 0x80], 0xeb3c4c }
	__asm { mov dword ptr [esi + 0xf8], 0xeb3c68 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x134], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x138], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x13c], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00a91f90();
// FUNCTION: ROBLOXSTUDIO 0x00a947f0
extern "C" __declspec(naked) void asm_00a947f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c908 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xeb34d4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a91f90 }
	__asm { mov dword ptr [esi], 0xeb38e4 }
	__asm { mov dword ptr [esi + 4], 0xeb3964 }
	__asm { mov dword ptr [esi + 0x18], 0xeb396c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3978 }
	__asm { mov dword ptr [esi + 0x64], 0xeb398c }
	__asm { mov dword ptr [esi + 0x80], 0xeb39dc }
	__asm { mov dword ptr [esi + 0xf8], 0xeb39f8 }
	__asm { mov dword ptr [esi + 0x134], 0x453b8000 }
	__asm { mov dword ptr [esi + 0x138], 0x43fa0000 }
	__asm { lea ecx, [esi + 0x148] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x13c], 0x48c35000 }
	__asm { mov dword ptr [esi + 0x140], 0 }
	__asm { mov dword ptr [esi + 0x144], 0x48c35000 }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006dea00();
extern "C" void fn_006deac0();
extern "C" void fn_00a92150();
// FUNCTION: ROBLOXSTUDIO 0x00a94bc0
extern "C" __declspec(naked) void asm_00a94bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c9a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xeb3500 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a92150 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeb3dc4 }
	__asm { mov dword ptr [esi + 4], 0xeb3e44 }
	__asm { mov dword ptr [esi + 0x18], 0xeb3e4c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3e58 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3e6c }
	__asm { mov dword ptr [esi + 0x80], 0xeb3ebc }
	__asm { mov dword ptr [esi + 0xf8], 0xeb3ed8 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x134], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x138], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x13c], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x140], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x144], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x148], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a92230();
// FUNCTION: ROBLOXSTUDIO 0x00a94c80
extern "C" __declspec(naked) void asm_00a94c80()
{
	__asm { push esi }
	__asm { push 0xeb34c4 }
	__asm { mov esi, ecx }
	__asm { call fn_00a92230 }
	__asm { mov dword ptr [esi], 0xeb42b4 }
	__asm { mov dword ptr [esi + 4], 0xeb4334 }
	__asm { mov dword ptr [esi + 0x18], 0xeb433c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb4348 }
	__asm { mov dword ptr [esi + 0x64], 0xeb435c }
	__asm { mov dword ptr [esi + 0x80], 0xeb43ac }
	__asm { mov dword ptr [esi + 0xf8], 0xeb43c8 }
	__asm { mov dword ptr [esi + 0x134], 0x449c4000 }
	__asm { mov dword ptr [esi + 0x138], 0x457a0000 }
	__asm { mov dword ptr [esi + 0x13c], 0x457a0000 }
	__asm { mov dword ptr [esi + 0x140], 0x457a0000 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x148], 0x40000000 }
	__asm { mov dword ptr [esi + 0x14c], 0 }
	__asm { mov dword ptr [esi + 0x150], 0 }
	__asm { mov dword ptr [esi + 0x154], 0 }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d0660();
extern "C" void fn_007e9290();
// FUNCTION: ROBLOXSTUDIO 0x00a9a2d0
extern "C" __declspec(naked) void asm_00a9a2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e9290 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d0660 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d0660();
extern "C" void fn_007d5470();
extern "C" void fn_007e9290();
// FUNCTION: ROBLOXSTUDIO 0x00a9a360
extern "C" __declspec(naked) void asm_00a9a360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e9290 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d0660 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004109a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d0660();
extern "C" void fn_007e9290();
// FUNCTION: ROBLOXSTUDIO 0x00a9d050
extern "C" __declspec(naked) void asm_00a9d050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e9290 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_007d0660 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a9d440();
extern "C" void fn_00a9d520();
extern "C" void fn_00b16da0();
// FUNCTION: ROBLOXSTUDIO 0x00a9d600
extern "C" __declspec(naked) void asm_00a9d600()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b16da0 }
	__asm { cmp dword ptr [esi + 0xa4], 0 }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00a9d440 }
	__asm { cmp dword ptr [esi + 0xac], 0 }
	__asm { lea ecx, [esi + 0xf0] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00a9d440 }
	__asm { cmp dword ptr [esi + 0xb4], 0 }
	__asm { lea ecx, [esi + 0x110] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00a9d520 }
	__asm { cmp dword ptr [esi + 0xbc], 0 }
	__asm { lea ecx, [esi + 0x130] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00a9d440 }
	__asm { cmp dword ptr [esi + 0xc4], 0 }
	__asm { lea ecx, [esi + 0x150] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00a9d440 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007db890();
extern "C" void fn_007e88f0();
// FUNCTION: ROBLOXSTUDIO 0x00a9e630
extern "C" __declspec(naked) void asm_00a9e630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e88f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007db890 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009004e0();
extern "C" void fn_00900780();
extern "C" void fn_00a563b0();
// FUNCTION: ROBLOXSTUDIO 0x00aa0880
extern "C" __declspec(naked) void asm_00aa0880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_009004e0 }
	__asm { add esi, 0x16c }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00a563b0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00900780 }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { call fn_00a563b0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00900780 }
	__asm { mov ecx, esi }
	__asm { push 2 }
	__asm { call fn_00a563b0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00900780 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007db890();
extern "C" void fn_007e88f0();
// FUNCTION: ROBLOXSTUDIO 0x00aa1570
extern "C" __declspec(naked) void asm_00aa1570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e88f0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_007db890 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00aa1970();
extern "C" void fn_00aa1a50();
extern "C" void fn_00b16da0();
// FUNCTION: ROBLOXSTUDIO 0x00aa1b30
extern "C" __declspec(naked) void asm_00aa1b30()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b16da0 }
	__asm { cmp dword ptr [esi + 0xa4], 0 }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00aa1970 }
	__asm { cmp dword ptr [esi + 0xac], 0 }
	__asm { lea ecx, [esi + 0xf0] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00aa1970 }
	__asm { cmp dword ptr [esi + 0xb4], 0 }
	__asm { lea ecx, [esi + 0x110] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00aa1a50 }
	__asm { cmp dword ptr [esi + 0xbc], 0 }
	__asm { lea ecx, [esi + 0x130] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00aa1970 }
	__asm { cmp dword ptr [esi + 0xc4], 0 }
	__asm { lea ecx, [esi + 0x150] }
	__asm { setne al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_00aa1970 }
	__asm { pop esi }
	__asm { ret }
}
